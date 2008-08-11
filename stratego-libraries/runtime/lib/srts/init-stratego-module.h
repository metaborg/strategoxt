static void (* SRTS_stratego_initialize_next)(void);

static void SRTS_stratego_initialize_module()
{
  init_module_constructors();
  init_module_constant_terms();
  register_strategies();
  if(SRTS_stratego_initialize_next != NULL)
    SRTS_stratego_initialize_next();
  init_strategies();
}

static void register_init(void) __attribute__((constructor));
static void register_init(void)
{  
  SRTS_stratego_initialize_next = SRTS_stratego_initialize;  
  SRTS_stratego_initialize      = &SRTS_stratego_initialize_module;
}
