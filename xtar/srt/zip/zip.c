/*

SRTS -- The Stratego Run-Time System

Copyright (c) 2004 Karl Trygve Kalleberg <karltk@ii.uib.no>
Portions copyright (c) 1998-2004 Eelco Visser <visser@acm.org>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
02111-1307 USA

*/

#include <srts/stratego.h>
#include <stdlib.h>
#include <string.h>

#include "minizip-zip.h"
#include "minizip-unzip.h"

ATermTable SSL_zipfile_write_table = NULL;
ATermTable SSL_zipfile_read_table = NULL;

static void _ensure_tables() 
{
	if(SSL_zipfile_write_table == NULL)
		SSL_zipfile_write_table = ATtableCreate(16, 80);
		
	if(SSL_zipfile_read_table == NULL)
		SSL_zipfile_read_table = ATtableCreate(16, 80);
	
}

static unzFile _read_file_table_lookup(ATerm name)
{
  ATerm desc;
  
  if((desc = ATtableGet(SSL_zipfile_read_table, name)) == NULL)
    return NULL;
  else
    return (unzFile)ATgetInt((ATermInt)desc);
}

static zipFile _write_file_table_lookup(ATerm name)
{
  ATerm desc;
  
  if((desc = ATtableGet(SSL_zipfile_write_table, name)) == NULL)
    return NULL;
  else
    return (zipFile)ATgetInt((ATermInt)desc);
}

static void _open_zip(ATerm name, int append)
{
	zipFile zipfile = zipOpen(t_string(name), 
		append ? APPEND_STATUS_ADDINZIP : APPEND_STATUS_CREATE);

	if(zipfile == NULL)
		_fail(name);

	ATtablePut(SSL_zipfile_write_table, name, ATmake("<int>", (int)zipfile));
}

static void _open_unzip(ATerm name)
{
	unzFile unzfile = unzOpen(t_string(name));

	if(unzfile == NULL)
		_fail(name);

	ATtablePut(SSL_zipfile_read_table, name, ATmake("<int>", (int)unzfile));
}

ATerm SSL_open_zip(ATerm name, ATerm mode)
{

	_ensure_tables();
			
		
	if(t_is_string(name) && t_is_string(mode)){
		char *s = t_string(mode);
	
		if(strncmp(s, "w", 1) == 0) {
			_open_zip(name, 0);
		} else if(strncmp(s, "a", 1) == 0) {
			_open_zip(name, 1);
		} else if(strncmp(s, "r", 1) == 0) {
			_open_unzip(name);
		}
	}
	return name;		
}

ATerm SSL_close_zip(ATerm name)
{
	
	_ensure_tables();
	{
		unzFile file = _read_file_table_lookup(name);
		if(file != NULL) {
	    	ATtableRemove(SSL_zipfile_read_table, name);
		    unzClose(file);
		}
	}
	{
		zipFile file = _write_file_table_lookup(name);
		if(file != NULL) {
			ATtableRemove(SSL_zipfile_write_table, name);
			zipClose(file, NULL);
		}
	}
	return name;
}

ATerm SSL_aterm_to_zip(ATerm name, ATerm termname, ATerm term)
{
	zipFile file = _write_file_table_lookup(name);

	if(file == NULL)
		_fail(name);

	if(!t_is_string(termname))
		_fail(termname);

	{
		int entry;
		int atermSize;
		char *buf;
		
		zip_fileinfo fileinfo;
		memset(&fileinfo, sizeof(zip_fileinfo), 0);
		
		
		entry = zipOpenNewFileInZip(file, 
			t_string(termname),
			&fileinfo,
			NULL, 0,
			NULL, 0,
			NULL,
			Z_DEFLATED,
			Z_DEFAULT_COMPRESSION);
			
		atermSize = ATcalcTextSize(term);
	
		buf = malloc(atermSize);
		
		if(buf == NULL)
			_fail(term);
			
		ATwriteToStringBuffer(term, buf);
		zipWriteInFileInZip(file, buf, atermSize);
		zipCloseFileInZip(file);
		
		free(buf);
	}

	return name;		
}

ATerm SSL_aterm_from_zip(ATerm name, ATerm termname)
{
	ATerm term;
	
	zipFile file = _read_file_table_lookup(name);

	if(file == NULL) {
		_fail(name);
	}

	if(!t_is_string(termname))
		_fail(termname);

	{
		int err;
		int filenamesize = 1024;
		char *buf;
		char *filename = malloc(filenamesize * sizeof(char));
		unz_file_info fileinfo;

		memset(&fileinfo, sizeof(unz_file_info), 0);

		if(filename == NULL) {
			_fail(name);		
		}
		
		err = unzLocateFile(file, t_string(termname), 1);

		if(err) {
			_fail(name);
		}
			
		err = unzGetCurrentFileInfo(file, &fileinfo,
				filename, filenamesize,
				NULL, 0,
				NULL, 0);

		if(err) {
			_fail(name);
		}
			
		err = unzOpenCurrentFile(file);

		if(err) {
			_fail(name);
		}
			
		free(filename);
		
		buf = malloc(fileinfo.uncompressed_size + 1);

		if(buf == NULL) {
			_fail(name);
		}

		err = unzReadCurrentFile(file, buf, fileinfo.uncompressed_size);
		buf[fileinfo.uncompressed_size] = '\0';
		
		term = ATreadFromString(buf);
		unzCloseCurrentFile(file);	

		free(buf);
	}
	return term;		
}

int _filesize(FILE *f)
{
	long pos = ftell(f);
	long size;
	fseek(f, 0, SEEK_END);
	size = ftell(f);
	fseek(f, pos, SEEK_SET);
	return size;
}

ATerm SSL_file_to_zip(ATerm name, ATerm filename, ATerm asname)
{
	FILE *f;
	zipFile zf;
	
	if(!t_is_string(filename)) 
		_fail(filename);
		
	f = fopen(t_string(filename), "r");
	
	if(f == NULL)
		_fail(filename);

	zf = _write_file_table_lookup(name);
	if(zf == NULL)
		_fail(name);
		
	{
		int fileSize = _filesize(f);
		void *buf = malloc(fileSize);
		zip_fileinfo fileinfo;
		int err;
		
		if(buf == NULL)
			_fail(filename);

		memset(&fileinfo, sizeof(zip_fileinfo), 0);
		
		if(!t_is_string(asname))
			_fail(asname);
			
		err = zipOpenNewFileInZip(zf, 
			t_string(asname),
			&fileinfo,
			NULL, 0,
			NULL, 0,
			NULL,
			Z_DEFLATED,
			Z_DEFAULT_COMPRESSION);

		fread(buf, fileSize, 1, f);
			
		zipWriteInFileInZip(zf, buf, fileSize);
		zipCloseFileInZip(zf);
		
		free(buf);
	}
	fclose(f);
			
	return name;
}

ATerm SSL_file_from_zip(ATerm name, ATerm filename, ATerm asname)
{
	FILE *f;		
	zipFile zf = _read_file_table_lookup(name);

	if(zf == NULL) {
		_fail(name);
	}
	
	if(!t_is_string(asname))
		_fail(asname);
		
	f = fopen(t_string(asname), "w");
	
	if(f == NULL) {
		_fail(asname);
	}

	{
		int err;
		int filenamebufsize = 1024;
		char *buf;
		char *filenamebuf = malloc(filenamebufsize * sizeof(char));
		unz_file_info fileinfo;

		memset(&fileinfo, sizeof(unz_file_info), 0);

		if(filenamebuf == NULL) {
			_fail(name);		
		}
		
		if(!t_is_string(filename))
			_fail(filename);
			
		err = unzLocateFile(zf, t_string(filename), 1);

		if(err) {
			_fail(name);
		}
			
		err = unzGetCurrentFileInfo(zf, &fileinfo,
				filenamebuf, filenamebufsize,
				NULL, 0,
				NULL, 0);

		if(err) {
			_fail(name);
		}
			
		err = unzOpenCurrentFile(zf);

		if(err) {
			_fail(name);
		}
			
		free(filenamebuf);
		
		buf = malloc(fileinfo.uncompressed_size + 1);

		if(buf == NULL) {
			_fail(name);
		}

		err = unzReadCurrentFile(zf, buf, fileinfo.uncompressed_size);
		fwrite(buf, fileinfo.uncompressed_size, 1, f);		
		unzCloseCurrentFile(zf);	

		free(buf);
	}
	fclose(f);
	
	return name;		
}

ATerm SSL_get_zip_entries(ATerm name)
{
	int err;
	ATermList term = ATmakeList0();
		
	FILE *file = _read_file_table_lookup(name);
	
	err = unzGoToFirstFile(file);
	
	if(err != UNZ_OK)
		_fail(name);
		
	do {
		int filenamebufsize = 1024;
		char *filenamebuf = malloc(filenamebufsize * sizeof(char));
		unz_file_info fileinfo;

		memset(&fileinfo, sizeof(unz_file_info), 0);

		if(filenamebuf == NULL) {
			_fail(name);		
		}

		err = unzGetCurrentFileInfo(file, &fileinfo,
				filenamebuf, filenamebufsize,
				NULL, 0,
				NULL, 0);

		if(err) {
			_fail(name);
		}

		term = ATinsert(term, (ATerm) ATmakeString(filenamebuf));

		err = unzGoToNextFile(file);
	} while(err == UNZ_OK); 
	
	return (ATerm) term;
}
