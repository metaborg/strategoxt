#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_stdout_0;
static Symbol sym_Output_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_stdout_0;
static Symbol sym_Output_1;
static Symbol sym_parsetree_2;
static Symbol sym_amb_1;
static Symbol sym_appl_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
static ATerm term_e_1;
static ATerm term_d_1;
static ATerm term_c_1;
static ATerm term_x_0;
static ATerm term_w_0;
static ATerm term_v_0;
static ATerm term_u_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_0));
  term_u_0 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_v_0));
  term_v_0 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: asfix-yield [options]", 0, ATtrue));
  ATprotect(&(term_w_0));
  term_w_0 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_c_1));
  term_c_1 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_1));
  term_d_1 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_1));
  term_e_1 = (ATerm) ATmakeInt(0);
}
#include <srts/init-stratego-application.h>
ATerm exit_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t);
ATerm list_1_0 (ATerm r_101 (ATerm), ATerm t);
ATerm asfix_skip2_1_0 (ATerm v_7 (ATerm), ATerm t);
ATerm is_leaf_0_0 (ATerm t);
ATerm printascii_0_0 (ATerm t);
ATerm split_2_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t);
ATerm print_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm leaves_3_0 (ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm h_97 (ATerm (ATerm), ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm asfix_yield2_1_0 (ATerm u_7 (ATerm), ATerm t);
ATerm asfix_yield_1_0 (ATerm t_7 (ATerm), ATerm t);
ATerm _2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm t);
ATerm input_file_0_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm option_defined_1_0 (ATerm o_122 (ATerm), ATerm t);
ATerm system_about_0_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm parse_options_3_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm r_123 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm asfix_skip2_1_0 (ATerm v_7 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym_appl_2))
    {
      c_2 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
      {
        ATerm e_0 = NULL,i_0 = NULL,d_0 = NULL;
        t = SSLgetAnnotations(b_2);
        e_0 = t;
        t = d_2;
        t = list_1_0(v_7, t);
        i_0 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, c_2, i_0);
        d_0 = t;
        t = SSLsetAnnotations(d_0, e_0);
      }
    }
  else
    {
      if(match_cons(t, sym_amb_1))
        {
          c_2 = ATgetArgument(t, 0);
          {
            ATerm r_0 = NULL,t_0 = NULL,g_0 = NULL;
            t = SSLgetAnnotations(b_2);
            r_0 = t;
            t = c_2;
            t = Cons_2_0(v_7, _id, t);
            t_0 = t;
            t = (ATerm) ATmakeAppl(sym_amb_1, t_0);
            g_0 = t;
            t = SSLsetAnnotations(g_0, r_0);
          }
        }
      else
        {
          ATerm r_1 = NULL,j_2 = NULL,l_0 = NULL;
          if(match_cons(t, sym_parsetree_2))
            {
              c_2 = ATgetArgument(t, 0);
              d_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_2);
          r_1 = t;
          t = c_2;
          t = v_7(t);
          j_2 = t;
          t = (ATerm) ATmakeAppl(sym_parsetree_2, j_2, d_2);
          l_0 = t;
          t = SSLsetAnnotations(l_0, r_1);
        }
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm h_2 = NULL;
  h_2 = t;
  t = (ATerm) ATinsert(ATempty, h_2);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm i_2 = NULL;
  i_2 = t;
  t = (ATerm) ATinsert(ATempty, i_2);
  return(t);
}
ATerm asfix_yield2_1_0 (ATerm u_7 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    ATerm o_0 = t;
    int p_0 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_string_0_0(t);
        t = split_2_0(u_7, b_0, t);
        t = print_0_0(t);
        LocalPopChoice(p_0);
      }
    else
      {
        t = o_0;
        t = split_2_0(u_7, c_0, t);
        t = printascii_0_0(t);
      }
    return(t);
  }
  t = leaves_3_0(a_0, is_leaf_0_0, asfix_skip2_1_0, t);
  return(t);
}
ATerm asfix_yield_1_0 (ATerm t_7 (ATerm), ATerm t)
{
  ATerm q_0 = t;
  int s_0 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 = NULL,y_2 = NULL,z_2 = NULL;
      m_2 = t;
      if(match_cons(t, sym_parsetree_2))
        {
          y_2 = ATgetArgument(t, 0);
          z_2 = ATgetArgument(t, 1);
          {
            ATerm j_3 = NULL,a_1 = NULL;
            t = SSLgetAnnotations(m_2);
            j_3 = t;
            t = (ATerm) ATmakeAppl(sym_parsetree_2, y_2, z_2);
            a_1 = t;
            t = SSLsetAnnotations(a_1, j_3);
          }
        }
      else
        {
          ATerm q_3 = NULL,b_1 = NULL;
          if(match_cons(t, sym_appl_2))
            {
              y_2 = ATgetArgument(t, 0);
              z_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_2);
          q_3 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, y_2, z_2);
          b_1 = t;
          t = SSLsetAnnotations(b_1, q_3);
        }
      t = m_2;
      LocalPopChoice(s_0);
      t = asfix_yield2_1_0(t_7, t);
    }
  else
    {
      t = q_0;
      t = (ATerm) ATinsert(ATempty, term_u_0);
      t = fatal_error_0_0(t);
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = default_system_usage_2_0(h_0, j_0, t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_v_0);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_0), term_w_0);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL;
  t = parse_options_3_0(io_options_0_0, f_0, system_about_0_0, t);
  e_3 = t;
  {
    ATerm y_0 = t;
    int z_0 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_0 (ATerm t);
        static ATerm k_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((d_3 != NULL) && (d_3 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(k_0, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), term_c_1);
        t = open_file_0_0(t);
        LocalPopChoice(z_0);
      }
    else
      {
        t = y_0;
        t = term_d_1;
        d_3 = t;
      }
  }
  t = e_3;
  t = input_file_0_0(t);
  {
    static ATerm m_0 (ATerm t);
    static ATerm m_0 (ATerm t)
    {
      static ATerm n_0 (ATerm t);
      static ATerm n_0 (ATerm t)
      {
        t = not_null(d_3);
        return(t);
      }
      t = asfix_yield_1_0(n_0, t);
      return(t);
    }
    t = _2_0(_id, m_0, t);
  }
  t = term_e_1;
  t = exit_0_0(t);
  return(t);
}
