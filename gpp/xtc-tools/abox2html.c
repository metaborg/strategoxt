#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm term_p_2;
ATerm term_e_2;
ATerm term_d_2;
ATerm term_c_2;
ATerm term_b_2;
ATerm term_a_2;
ATerm term_z_1;
ATerm term_y_1;
ATerm term_x_1;
ATerm term_w_1;
ATerm term_v_1;
ATerm term_u_1;
ATerm term_t_1;
ATerm term_s_1;
ATerm term_r_1;
ATerm term_q_1;
ATerm term_p_1;
ATerm term_o_1;
ATerm term_n_1;
ATerm term_m_1;
ATerm term_l_1;
ATerm term_k_1;
ATerm term_j_1;
ATerm term_i_1;
ATerm term_f_1;
ATerm term_e_1;
ATerm term_d_1;
ATerm term_c_1;
ATerm term_b_1;
ATerm term_a_1;
ATerm term_z_0;
ATerm term_y_0;
ATerm term_x_0;
ATerm term_w_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_0));
  term_w_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_y_0));
  term_y_0 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_z_0));
  term_z_0 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_a_1));
  term_a_1 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_b_1));
  term_b_1 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_c_1));
  term_c_1 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_d_1));
  term_d_1 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_e_1));
  term_e_1 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_f_1));
  term_f_1 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_i_1));
  term_i_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_j_1));
  term_j_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_k_1));
  term_k_1 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_l_1));
  term_l_1 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_m_1));
  term_m_1 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_n_1));
  term_n_1 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_o_1));
  term_o_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_p_1));
  term_p_1 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_q_1));
  term_q_1 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_r_1));
  term_r_1 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_s_1));
  term_s_1 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_t_1));
  term_t_1 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_u_1));
  term_u_1 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_v_1));
  term_v_1 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_x_1));
  term_x_1 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_y_1));
  term_y_1 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(sym__2, term_a_2, term_b_2);
  ATprotect(&(term_d_2));
  term_d_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm xtc_cat_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm date_format_0_0 (ATerm t);
ATerm now_local_time_0_0 (ATerm t);
ATerm create_time_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm get_title_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm l_108 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm d_0 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_generate_2_0 (ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t);
ATerm xtc_output_1_0 (ATerm m_108 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm j_3 (ATerm), ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm g_3 (ATerm), ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm t);
ATerm general_options_0_0 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm abox2html_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm create_time_0_0 (ATerm t)
{
  ATerm a_0 = NULL;
  t = term_w_0;
  t = now_local_time_0_0(t);
  a_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_1), term_d_1), term_e_1), term_d_1), term_c_1), term_y_0), term_b_1), term_y_0), term_a_1), term_y_0), term_z_0), term_y_0), term_x_0), a_0);
  t = date_format_0_0(t);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm g_1 = t;
  int h_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_1;
      t = get_config_0_0(t);
      LocalPopChoice(h_1);
    }
  else
    {
      t = g_1;
      t = (ATerm) ATinsert(ATempty, term_j_1);
      t = fatal_error_0_0(t);
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  t = get_title_0_0(t);
  e_0 = t;
  t = term_w_0;
  t = create_time_0_0(t);
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_1), term_v_1), term_u_1), term_t_1), e_0), term_s_1), term_r_1), term_q_1), term_p_1), term_o_1), term_n_1), term_m_1), c_0), term_l_1), term_k_1);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm f_0 = NULL,g_0 = NULL,i_0 = NULL,k_0 = NULL;
  k_0 = t;
  t = create_header_0_0(t);
  t = print_to_0_0(t);
  f_0 = t;
  t = k_0;
  t = xtc_transform_2_0(d_0, pass_verbose_0_0, t);
  g_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_1), term_x_1);
  t = print_to_0_0(t);
  i_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_0), g_0), f_0);
  t = xtc_cat_0_0(t);
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_z_1;
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  t = xtc_io_1_0(b_0, t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm n_0 = NULL;
  n_0 = t;
  t = term_c_2;
  t = set_config_0_0(t);
  t = n_0;
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_d_2;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm o_0 = NULL;
  o_0 = t;
  if(match_string(t, "-t"))
    {
      t = o_0;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = o_0;
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm p_0 = NULL;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_1, p_0);
  t = set_config_0_0(t);
  t = p_0;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_e_2;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm f_2 = t;
  int g_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(g_2);
    }
  else
    {
      t = f_2;
      {
        ATerm h_2 = t;
        int i_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(i_2);
          }
        else
          {
            t = h_2;
            {
              ATerm j_2 = t;
              int k_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0_0(t);
                  LocalPopChoice(k_2);
                }
              else
                {
                  t = j_2;
                  {
                    ATerm l_2 = t;
                    int m_2 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(h_0, j_0, l_0, t);
                        LocalPopChoice(m_2);
                      }
                    else
                      {
                        t = l_2;
                        t = ArgOption_3_0(m_0, q_0, r_0, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm n_2 = t;
  int o_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_0 = NULL;
      t_0 = t;
      t = term_a_2;
      t = get_config_0_0(t);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
        _fail(t);
      t = t_0;
      t = xtc_output_1_0(u_0, t);
      LocalPopChoice(o_2);
    }
  else
    {
      t = n_2;
      t = abox2html_0_0(t);
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = xtc_generate_2_0(v_0, pass_verbose_0_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_p_2;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_2_0(abox2html_options_0_0, s_0, t);
  return(t);
}
