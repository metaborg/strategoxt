Summary: The Stratego Run-Time System
Name: srts
Version: 0.9.1
Release: 1
License: LGPL
Group: Libraries/
URL: http://www.stratego-language.org
Source: %{name}-%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-%{version}-buildroot

Requires: aterm = 1.6.7
Requires: sdf2 = 1.5

%description

%prep
%setup -q

%build
CFLAGS="-D__NO_CTYPE" ./configure --prefix=%{_prefix}
make

%install
rm -rf $RPM_BUILD_ROOT
make DESTDIR=$RPM_BUILD_ROOT install

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root,-)
%{_includedir}
%{_libdir}
%doc


%changelog
* Sun Jan  5 2003 Eelco Visser <visser@cs.uu.nl> 
- Initial build.

