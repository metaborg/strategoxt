Summary: Stratego Connect
Name: __PACKAGE__
Version: __VERSION__
Release: __RELEASE__
URL: http://www.stratego-language.org
Source0: http://www.stratego-language.org/ftp/%{name}-%{version}.tar.gz
License: LGPL
Group: Development/Languages
BuildRoot: %{_tmppath}/%{name}-%{version}-root

Requires: aterm >= __ATERM_VERSION__, cgen >= __VERSION__, gpp >= __GPP_VERSION__, srts >= __VERSION__, ssl >= __VERSION__, sc >= __VERSION__

%description
The Stratego Connect package provides support for interprocess communication.

%prep
%setup -q

%build
__CONFIGURE__
__MAKE__ 
__MAKE__ 
./configure --prefix=__PREFIX__
touch */*

%install
rm -rf $RPM_BUILD_ROOT
__MAKE__ DESTDIR=$RPM_BUILD_ROOT install

%clean
rm -rf $RPM_BUILD_ROOT
__MAKE__ clean

%files
%defattr(-,root,root)

