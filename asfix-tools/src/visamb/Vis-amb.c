#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_lexical_1;
Symbol sym_root_1;
Symbol sym_N_2;
Symbol sym_amb_abbr_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_parsetree_2;
Symbol sym_amb_1;
Symbol sym_lit_1;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_lit_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym_lexical_1 = ATmakeSymbol("lexical", 1, ATfalse);
  ATprotectSymbol(sym_lexical_1);
  sym_root_1 = ATmakeSymbol("root", 1, ATfalse);
  ATprotectSymbol(sym_root_1);
  sym_N_2 = ATmakeSymbol("N", 2, ATfalse);
  ATprotectSymbol(sym_N_2);
  sym_amb_abbr_2 = ATmakeSymbol("amb-abbr", 2, ATfalse);
  ATprotectSymbol(sym_amb_abbr_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
static void init_module_constant_terms (void)
{
}
#include <srts/init-stratego-application.h>
ATerm report_failure_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm Lexical_0_0 (ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm abbrev_term_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
static ATerm p_0 (ATerm h_4, ATerm t);
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t);
ATerm bu_collect_1_0 (ATerm v_98 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm visamb_0_0 (ATerm t);
ATerm _2_0 (ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm t);
ATerm apply_strategy_1_0 (ATerm m_113 (ATerm), ATerm t);
ATerm input_file_0_0 (ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm parse_options_1_0 (ATerm o_116 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm Vis_amb_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,d_0 = NULL;
  i_1 = t;
  if(match_cons(t, sym_lex_1))
    {
      h_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_1);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, h_1);
  d_0 = t;
  t = SSLsetAnnotations(d_0, g_1);
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  r_2 = t;
  if(match_cons(t, sym_appl_2))
    {
      s_2 = ATgetArgument(t, 0);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_0 = t;
    int s_0 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 = NULL,h_0 = NULL,q_0 = NULL,r_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,c_1 = NULL,j_0 = NULL,g_0 = NULL,e_0 = NULL;
        t = SSLgetAnnotations(r_2);
        h_0 = t;
        t = s_2;
        if(match_cons(t, sym_prod_3))
          {
            r_0 = ATgetArgument(t, 0);
            u_0 = ATgetArgument(t, 1);
            v_0 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_2);
        q_0 = t;
        t = r_0;
        t = Cons_2_0(a_0, Nil_0_0, t);
        w_0 = t;
        t = u_0;
        if(match_cons(t, sym_cf_1))
          {
            z_0 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_0);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym_cf_1, z_0);
        e_0 = t;
        t = SSLsetAnnotations(e_0, y_0);
        c_1 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, w_0, c_1, v_0);
        g_0 = t;
        t = SSLsetAnnotations(g_0, q_0);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, x_0, t_2);
        j_0 = t;
        t = SSLsetAnnotations(j_0, h_0);
        t = yield_0_0(t);
        f_0 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, f_0));
        LocalPopChoice(s_0);
      }
    else
      {
        t = o_0;
        {
          ATerm x_1 = NULL,e_2 = NULL,f_2 = NULL,o_2 = NULL,p_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,b_3 = NULL,n_0 = NULL,m_0 = NULL,l_0 = NULL;
          t = SSLgetAnnotations(r_2);
          x_1 = t;
          t = s_2;
          if(match_cons(t, sym_prod_3))
            {
              f_2 = ATgetArgument(t, 0);
              o_2 = ATgetArgument(t, 1);
              p_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_2);
          e_2 = t;
          t = o_2;
          if(match_cons(t, sym_lit_1))
            {
              w_2 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_2);
          v_2 = t;
          t = (ATerm) ATmakeAppl(sym_lit_1, w_2);
          l_0 = t;
          t = SSLsetAnnotations(l_0, v_2);
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, f_2, b_3, p_2);
          m_0 = t;
          t = SSLsetAnnotations(m_0, e_2);
          u_2 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, u_2, t_2);
          n_0 = t;
          t = SSLsetAnnotations(n_0, x_1);
          t = (ATerm) ATempty;
        }
      }
  }
  return(t);
}
ATerm abbrev_term_0_0 (ATerm t)
{
  ATerm t_0 = t;
  int a_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 = t;
      int d_1 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_int_0_0(t);
          LocalPopChoice(d_1);
        }
      else
        {
          t = b_1;
          {
            ATerm j_3 = NULL,o_3 = NULL,p_3 = NULL;
            if(match_cons(t, sym_amb_1))
              {
                j_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_3;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_3 = ATgetFirst((ATermList) t);
                p_3 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_3;
          }
        }
      LocalPopChoice(a_1);
    }
  else
    {
      t = t_0;
      {
        ATerm h_3 = NULL,l_3 = NULL,d_4 = NULL;
        h_3 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm e_1 = ATgetArgument(t, 0);
            if(match_cons(e_1, sym_prod_3))
              {
                ATerm k_1 = ATgetArgument(e_1, 0);
                d_4 = ATgetArgument(e_1, 1);
                {
                  ATerm l_1 = ATgetArgument(e_1, 2);
                }
              }
            else
              _fail(t);
            {
              ATerm f_1 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = h_3;
        {
          ATerm p_1 = t;
          int q_1 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0_0(t);
              LocalPopChoice(q_1);
            }
          else
            {
              t = p_1;
              {
                ATerm j_4 = NULL,k_4 = NULL;
                if(match_cons(t, sym_appl_2))
                  {
                    j_4 = ATgetArgument(t, 0);
                    k_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_4;
                t = map_1_0(abbrev_term_0_0, t);
              }
            }
        }
        l_3 = t;
        t = (ATerm) ATmakeAppl(sym_N_2, d_4, l_3);
      }
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  static ATerm u_5 (ATerm t);
  static ATerm u_5 (ATerm t)
  {
    ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
    r_5 = t;
    if(match_cons(t, sym_appl_2))
      {
        p_5 = ATgetArgument(t, 0);
        q_5 = ATgetArgument(t, 1);
        {
          ATerm r_1 = t;
          int s_1 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_4 = NULL,z_4 = NULL,e_5 = NULL,j_1 = NULL;
              t = SSLgetAnnotations(r_5);
              z_4 = t;
              t = q_5;
              t = map_1_0(u_5, t);
              e_5 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, p_5, e_5);
              j_1 = t;
              t = SSLsetAnnotations(j_1, z_4);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm t_1 = ATgetArgument(t, 0);
                  y_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_4;
              t = concat_0_0(t);
              LocalPopChoice(s_1);
            }
          else
            {
              t = r_1;
              t = (ATerm) ATinsert(ATempty, r_5);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, r_5);
      }
    return(t);
  }
  t = u_5(t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm p_0 (ATerm h_4, ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL;
  t = h_4;
  t = Hd_0_0(t);
  t = yield_0_0(t);
  w_5 = t;
  t = h_4;
  t = map_1_0(abbrev_term_0_0, t);
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, w_5, x_5);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL,m_1 = NULL;
  q_6 = t;
  if(match_cons(t, sym_amb_1))
    {
      p_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_6);
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, p_6);
  m_1 = t;
  t = SSLsetAnnotations(m_1, o_6);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      t_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_0(t_6, t);
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, s_6);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,o_1 = NULL,n_1 = NULL;
  j_6 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      f_6 = ATgetArgument(t, 0);
      g_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_6);
  e_6 = t;
  t = f_6;
  t = bu_collect_1_0(b_0, t);
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, h_6, g_6);
  n_1 = t;
  t = SSLsetAnnotations(n_1, e_6);
  i_6 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      a_6 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_6);
  z_5 = t;
  t = a_6;
  t = map_1_0(c_0, t);
  c_6 = t;
  t = b_6;
  t = int_to_string_0_0(t);
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, c_6, d_6);
  o_1 = t;
  t = SSLsetAnnotations(o_1, z_5);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = _2_0(_id, visamb_0_0, t);
  return(t);
}
ATerm Vis_amb_0_0 (ATerm t)
{
  t = parse_options_1_0(io_options_0_0, t);
  {
    ATerm u_1 = t;
    int v_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_file_0_0(t);
        t = apply_strategy_1_0(i_0, t);
        t = output_file_0_0(t);
        t = report_success_0_0(t);
        LocalPopChoice(v_1);
      }
    else
      {
        t = u_1;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = Vis_amb_0_0(t);
  return(t);
}
