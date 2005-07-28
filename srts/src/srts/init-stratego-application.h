
void (* SRTS_stratego_initialize)(void) = NULL;
static void (* SRTS_stratego_initialize_next)(void);

static void SRTS_stratego_initialize_module()
{
  init_module_constructors();
  init_module_constant_terms();
  if(SRTS_stratego_initialize_next != NULL)
    SRTS_stratego_initialize_next();
}

static void register_init(void) __attribute__((constructor));
static void register_init(void)
{
  SRTS_stratego_initialize_next = SRTS_stratego_initialize;  
  SRTS_stratego_initialize      = &SRTS_stratego_initialize_module;
}

#ifndef XTC_REPOSITORY
ATerm GetInternalDefaultXtcRepository_0_0(ATerm t) {
  _fail(t);
  return NULL;
}
#else
ATerm GetInternalDefaultXtcRepository_0_0(ATerm t) {
  return XTC_REPOSITORY() ;
}
#endif

