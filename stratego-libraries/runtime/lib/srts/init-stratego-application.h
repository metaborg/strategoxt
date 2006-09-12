static void (* SRTS_stratego_initialize_next)(void);

static void SRTS_stratego_initialize_module()
{
  init_module_constructors();
  init_module_constant_terms();
  if(SRTS_stratego_initialize_next != NULL)
    SRTS_stratego_initialize_next();

#ifdef DEFAULT_XTC_REPOSITORY
  SRTS_default_xtc_repository = ATmakeString(DEFAULT_XTC_REPOSITORY);
  ATprotect(&SRTS_default_xtc_repository);
#endif

#ifdef XTC_REPOSITORY
  SRTS_default_xtc_repository = XTC_REPOSITORY();
  ATprotect(&SRTS_default_xtc_repository);
#endif

#ifdef PACKAGE_NAME
  SRTS_package_name = ATmakeString(PACKAGE_NAME);
#endif

#ifdef PACKAGE_VERSION
  SRTS_package_version = ATmakeString(PACKAGE_VERSION);
#endif

#ifdef PACKAGE_BUGREPORT
  SRTS_package_bugreport = ATmakeString(PACKAGE_BUGREPORT);
#endif

#ifdef SVN_REVISION
  SRTS_package_revision = ATmakeString(SVN_REVISION);
#endif
}

static void register_init(void) __attribute__((constructor));
static void register_init(void)
{
  SRTS_stratego_initialize_next = SRTS_stratego_initialize;  
  SRTS_stratego_initialize      = &SRTS_stratego_initialize_module;
}
