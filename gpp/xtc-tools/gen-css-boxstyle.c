#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static void init_module_constructors (void)
{
}
static ATerm term_c_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_0));
  term_c_0 = (ATerm) ATmakeAppl(ATmakeSymbol("boxstyle.css", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm xtc_find_file_0_0 (ATerm t);
ATerm xtc_output_1_0 (ATerm p_5 (ATerm), ATerm t);
ATerm output_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = xtc_output_1_0(b_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_c_0;
  t = xtc_find_file_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_2_0(output_options_0_0, a_0, t);
  return(t);
}
