
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
