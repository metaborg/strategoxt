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
Symbol sym_stdout_0;
Symbol sym_Output_1;
Symbol sym_parsetree_2;
Symbol sym_amb_1;
Symbol sym_appl_2;
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
ATerm term_f_1;
ATerm term_e_1;
ATerm term_d_1;
ATerm term_y_0;
ATerm term_x_0;
ATerm term_w_0;
ATerm term_v_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_0));
  term_v_0 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_w_0));
  term_w_0 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: asfix-yield [options]", 0, ATtrue));
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_y_0));
  term_y_0 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_d_1));
  term_d_1 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_1));
  term_e_1 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_1));
  term_f_1 = (ATerm) ATmakeInt(0);
}
#include <srts/init-stratego-application.h>
ATerm exit_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm list_1_0 (ATerm u_89 (ATerm), ATerm t);
ATerm asfix_skip2_1_0 (ATerm g_5 (ATerm), ATerm t);
ATerm is_leaf_0_0 (ATerm t);
ATerm printascii_0_0 (ATerm t);
ATerm split_2_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm t);
ATerm print_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm leaves_3_0 (ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm (ATerm), ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm asfix_yield2_1_0 (ATerm f_5 (ATerm), ATerm t);
ATerm asfix_yield_1_0 (ATerm e_5 (ATerm), ATerm t);
ATerm _2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t);
ATerm input_file_0_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm option_defined_1_0 (ATerm m_111 (ATerm), ATerm t);
ATerm system_about_0_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm parse_options_3_0 (ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm t);
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
ATerm asfix_skip2_1_0 (ATerm g_5 (ATerm), ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL;
  c_2 = t;
  if(match_cons(t, sym_appl_2))
    {
      d_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
      {
        ATerm e_0 = NULL,i_0 = NULL,d_0 = NULL;
        t = SSLgetAnnotations(c_2);
        e_0 = t;
        t = e_2;
        t = list_1_0(g_5, t);
        i_0 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, d_2, i_0);
        d_0 = t;
        t = SSLsetAnnotations(d_0, e_0);
      }
    }
  else
    {
      if(match_cons(t, sym_amb_1))
        {
          d_2 = ATgetArgument(t, 0);
          {
            ATerm r_0 = NULL,t_0 = NULL,g_0 = NULL;
            t = SSLgetAnnotations(c_2);
            r_0 = t;
            t = d_2;
            t = Cons_2_0(g_5, _id, t);
            t_0 = t;
            t = (ATerm) ATmakeAppl(sym_amb_1, t_0);
            g_0 = t;
            t = SSLsetAnnotations(g_0, r_0);
          }
        }
      else
        {
          ATerm j_1 = NULL,t_1 = NULL,l_0 = NULL;
          if(match_cons(t, sym_parsetree_2))
            {
              d_2 = ATgetArgument(t, 0);
              e_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_2);
          j_1 = t;
          t = d_2;
          t = g_5(t);
          t_1 = t;
          t = (ATerm) ATmakeAppl(sym_parsetree_2, t_1, e_2);
          l_0 = t;
          t = SSLsetAnnotations(l_0, j_1);
        }
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm i_2 = NULL;
  i_2 = t;
  t = (ATerm) ATinsert(ATempty, i_2);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm j_2 = NULL;
  j_2 = t;
  t = (ATerm) ATinsert(ATempty, j_2);
  return(t);
}
ATerm asfix_yield2_1_0 (ATerm f_5 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    ATerm p_0 = t;
    int q_0 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_string_0_0(t);
        t = split_2_0(f_5, b_0, t);
        t = print_0_0(t);
        LocalPopChoice(q_0);
      }
    else
      {
        t = p_0;
        t = split_2_0(f_5, c_0, t);
        t = printascii_0_0(t);
      }
    return(t);
  }
  t = leaves_3_0(a_0, is_leaf_0_0, asfix_skip2_1_0, t);
  return(t);
}
ATerm asfix_yield_1_0 (ATerm e_5 (ATerm), ATerm t)
{
  ATerm s_0 = t;
  int u_0 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 = NULL,z_2 = NULL,a_3 = NULL;
      n_2 = t;
      if(match_cons(t, sym_parsetree_2))
        {
          z_2 = ATgetArgument(t, 0);
          a_3 = ATgetArgument(t, 1);
          {
            ATerm j_3 = NULL,b_1 = NULL;
            t = SSLgetAnnotations(n_2);
            j_3 = t;
            t = (ATerm) ATmakeAppl(sym_parsetree_2, z_2, a_3);
            b_1 = t;
            t = SSLsetAnnotations(b_1, j_3);
          }
        }
      else
        {
          ATerm q_3 = NULL,c_1 = NULL;
          if(match_cons(t, sym_appl_2))
            {
              z_2 = ATgetArgument(t, 0);
              a_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_2);
          q_3 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, z_2, a_3);
          c_1 = t;
          t = SSLsetAnnotations(c_1, q_3);
        }
      t = n_2;
      LocalPopChoice(u_0);
      t = asfix_yield2_1_0(e_5, t);
    }
  else
    {
      t = s_0;
      t = (ATerm) ATinsert(ATempty, term_v_0);
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
  t = (ATerm) ATinsert(ATempty, term_w_0);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_0), term_x_0);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL;
  t = parse_options_3_0(io_options_0_0, f_0, system_about_0_0, t);
  f_3 = t;
  {
    ATerm z_0 = t;
    int a_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_0 (ATerm t);
        static ATerm k_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((e_3 != NULL) && (e_3 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(k_0, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_3), term_d_1);
        t = open_file_0_0(t);
        LocalPopChoice(a_1);
      }
    else
      {
        t = z_0;
        t = term_e_1;
        e_3 = t;
      }
  }
  t = f_3;
  t = input_file_0_0(t);
  {
    static ATerm m_0 (ATerm t);
    static ATerm m_0 (ATerm t)
    {
      static ATerm n_0 (ATerm t);
      static ATerm n_0 (ATerm t)
      {
        t = not_null(e_3);
        return(t);
      }
      t = asfix_yield_1_0(n_0, t);
      return(t);
    }
    t = _2_0(_id, m_0, t);
  }
  t = term_f_1;
  t = exit_0_0(t);
  return(t);
}
