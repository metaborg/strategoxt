Summary: Automake support for the StrategoXT tools
Name: autoxt
Version: 0.9beta10
Release: 1
License: LGPL
Group: Development
URL: http://www.stratego-language.org
Source: %{name}-%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-%{version}-buildroot

%description

%prep
%setup -q

%build
./configure --prefix=%{_prefix} --with-aterm=%{_prefix} --with-sdf=%{_prefix}
make DESTDIR=$RPM_BUILD_ROOT 

%install
rm -rf $RPM_BUILD_ROOT
make DESTDIR=$RPM_BUILD_ROOT install

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root,-)
%{_bindir}
%{_datadir}
%doc
%{_prefix}/doc/%{name}/


%changelog
* Sun Jan  5 2003 Eelco Visser <visser@cs.uu.nl> 
- Initial build.


