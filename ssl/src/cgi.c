#include <stdio.h>
#include <stdlib.h>
#include <srts/stratego.h>

#define LF 10
#define CR 13

void getword(char *word, char *line, char stop)
{
    int x = 0,y;

    for(x=0;((line[x]) && (line[x] != stop));x++)
        word[x] = line[x];

    word[x] = '\0';
    if(line[x]) ++x;
    y=0;

    while((line[y++] = line[x++]));
}

char *makeword(char *line, char stop) 
{
    int x = 0,y;
    char *word = (char *) malloc(sizeof(char) * (strlen(line) + 1));

    for(x=0;((line[x]) && (line[x] != stop));x++)
        word[x] = line[x];

    word[x] = '\0';
    if(line[x]) ++x;
    y=0;

    while((line[y++] = line[x++]));
    return word;
}

char *fmakeword(FILE *f, char stop, int *cl) 
{
    int wsize;
    char *word;
    int ll;

    wsize = 102400;
    ll=0;
    word = (char *) malloc(sizeof(char) * (wsize + 1));

    while(1) {
        word[ll] = (char)fgetc(f);
        if(ll==wsize) {
            word[ll+1] = '\0';
            wsize+=102400;
            word = (char *)realloc(word,sizeof(char)*(wsize+1));
        }
        --(*cl);
        if((word[ll] == stop) || (feof(f)) || (!(*cl))) {
            if(word[ll] != stop) ll++;
            word[ll] = '\0';
            return word;
        }
        ++ll;
    }
}

char x2c(char *what) 
{
    register char digit;

    digit = (what[0] >= 'A' ? ((what[0] & 0xdf) - 'A')+10 : (what[0] - '0'));
    digit *= 16;
    digit += (what[1] >= 'A' ? ((what[1] & 0xdf) - 'A')+10 : (what[1] - '0'));
    return(digit);
}

void unescape_url(char *url) 
{
    register int x,y;

    for(x=0,y=0;url[y];++x,++y) {
        if((url[x] = url[y]) == '%') {
            url[x] = x2c(&url[y+1]);
            y+=2;
        }
    }
    url[x] = '\0';
}

void plustospace(char *str) 
{
    register int x;

    for(x=0;str[x];x++) if(str[x] == '+') str[x] = ' ';
}

int rind(char *s, char c) 
{
    register int x;
    for(x=strlen(s) - 1;x != -1; x--)
        if(s[x] == c) return x;
    return -1;
}

int getline(char *s, int n, FILE *f) 
{
    register int i=0;

    while(1) {
        s[i] = (char)fgetc(f);

        if(s[i] == CR)
            s[i] = fgetc(f);

        if((s[i] == 0x4) || (s[i] == LF) || (i == (n-1))) {
            s[i] = '\0';
            return (feof(f) ? 1 : 0);
        }
        ++i;
    }
}

void send_fd(FILE *f, FILE *fd)
{
  //int num_chars=0;
  char c;
  
  while (1) {
    c = fgetc(f);
    if(feof(f))
      return;
    fputc(c,fd);
  }
}

typedef struct {
    char name[128];
    char val[128];
} entry;

ATerm SSL_get_cgi_query(void) 
{
  entry entries[10000];
  register int x,m=0;
  char *cl;
  ATermList query = ATempty;
  
  //printf("Content-type: text/html%c%c",10,10);
  
    if(strcmp(getenv("REQUEST_METHOD"),"GET")) {
      //printf("This script should be referenced with a METHOD of GET.\n");
      //printf("If you don't understand this, see this ");
      //printf("<A HREF=\"http://www.ncsa.uiuc.edu/SDG/Software/Mosaic/Docs/fill-out-forms/overview.html\">forms overview</A>.%c",10);
      //exit(1);
      return (ATerm)query;
    }

    cl = getenv("QUERY_STRING");
    if(cl == NULL) {
      //printf("No query information to decode.\n");
      //exit(1);
    }
    for(x=0;cl[0] != '\0';x++) {
        m=x;
        getword(entries[x].val,cl,'&');
        plustospace(entries[x].val);
        unescape_url(entries[x].val);
        getword(entries[x].name,entries[x].val,'=');
    }

    //printf("<H1>Query Results</H1>");
    //printf("You submitted the following name/value pairs:<p>%c",10);
    //printf("<ul>%c",10);

    for(x=m; x >= 0; x--)
      {
	//printf("<li> <code>%s = %s</code>%c",entries[x].name,
	//         entries[x].val,10);
	//printf("</ul>%c",10);
	query = ATappend(query, App2("", ATmakeString(entries[x].name), ATmakeString(entries[x].val)));
      }
    
    return (ATerm)query;
}
