Summary: The StrategoXT tools for constructing program transformation systems
Name: StrategoXT
Version: 0.9.1
Release: 3
License: LGPL
Group: Development/Languages/Stratego
URL: http://www.stratego-language.org
Source: %{name}-%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-%{version}-buildroot
Requires: aterm = 1.6.7
Requires: sdf2 = 1.5
Provides:  %{name} = %{version}

%description

%prep
%setup -q

%build
CFLAGS="-D__NO_CTYPE" ./configure --prefix=%{_prefix} --with-aterm=%{_prefix} --with-sdf=%{_prefix}
make DESTDIR=$RPM_BUILD_ROOT 

%install
rm -rf $RPM_BUILD_ROOT
make DESTDIR=$RPM_BUILD_ROOT install

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root,-)
%{_bindir}
%{_libexecdir}
%{_includedir}
%{_libdir}
%{_datadir}
%doc
%{_prefix}/man/
%{_prefix}/doc/

%changelog
* Thu Jan  2 2003 Eelco Visser <visser@cs.uu.nl> 0.9beta9-1
- Initial build.

