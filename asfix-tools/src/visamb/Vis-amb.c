#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_lexical_1;
static Symbol sym_root_1;
static Symbol sym_N_2;
static Symbol sym_amb_abbr_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_parsetree_2;
static Symbol sym_amb_1;
static Symbol sym_lit_1;
static Symbol sym_appl_2;
static Symbol sym_prod_3;
static Symbol sym_lex_1;
static Symbol sym_cf_1;
static Symbol sym_lit_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
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
ATerm Cons_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm Lexical_0_0 (ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm abbrev_term_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
static ATerm p_0 (ATerm t_6, ATerm t);
ATerm map_1_0 (ATerm w_100 (ATerm), ATerm t);
ATerm bu_collect_1_0 (ATerm u_105 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm visamb_0_0 (ATerm t);
ATerm _2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm t);
ATerm apply_strategy_1_0 (ATerm v_119 (ATerm), ATerm t);
ATerm input_file_0_0 (ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm parse_options_1_0 (ATerm x_122 (ATerm), ATerm t);
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
  ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL,d_0 = NULL;
  h_1 = t;
  if(match_cons(t, sym_lex_1))
    {
      g_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_1);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, g_1);
  d_0 = t;
  t = SSLsetAnnotations(d_0, f_1);
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,x_2 = NULL;
  s_2 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_0 = t;
    int t_0 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 = NULL,h_0 = NULL,o_0 = NULL,q_0 = NULL,r_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,j_0 = NULL,g_0 = NULL,e_0 = NULL;
        t = SSLgetAnnotations(s_2);
        h_0 = t;
        t = t_2;
        if(match_cons(t, sym_prod_3))
          {
            q_0 = ATgetArgument(t, 0);
            r_0 = ATgetArgument(t, 1);
            u_0 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_2);
        o_0 = t;
        t = q_0;
        t = Cons_2_0(a_0, Nil_0_0, t);
        v_0 = t;
        t = r_0;
        if(match_cons(t, sym_cf_1))
          {
            y_0 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_0);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym_cf_1, y_0);
        e_0 = t;
        t = SSLsetAnnotations(e_0, x_0);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, v_0, z_0, u_0);
        g_0 = t;
        t = SSLsetAnnotations(g_0, o_0);
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, w_0, x_2);
        j_0 = t;
        t = SSLsetAnnotations(j_0, h_0);
        t = yield_0_0(t);
        f_0 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, f_0));
        LocalPopChoice(t_0);
      }
    else
      {
        t = s_0;
        {
          ATerm w_1 = NULL,d_2 = NULL,e_2 = NULL,g_2 = NULL,o_2 = NULL,p_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,n_0 = NULL,m_0 = NULL,l_0 = NULL;
          t = SSLgetAnnotations(s_2);
          w_1 = t;
          t = t_2;
          if(match_cons(t, sym_prod_3))
            {
              e_2 = ATgetArgument(t, 0);
              g_2 = ATgetArgument(t, 1);
              o_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_2);
          d_2 = t;
          t = g_2;
          if(match_cons(t, sym_lit_1))
            {
              v_2 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_2);
          u_2 = t;
          t = (ATerm) ATmakeAppl(sym_lit_1, v_2);
          l_0 = t;
          t = SSLsetAnnotations(l_0, u_2);
          w_2 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, e_2, w_2, o_2);
          m_0 = t;
          t = SSLsetAnnotations(m_0, d_2);
          p_2 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, p_2, x_2);
          n_0 = t;
          t = SSLsetAnnotations(n_0, w_1);
          t = (ATerm) ATempty;
        }
      }
  }
  return(t);
}
ATerm abbrev_term_0_0 (ATerm t)
{
  ATerm a_1 = t;
  int b_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 = t;
      int d_1 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_int_0_0(t);
          LocalPopChoice(d_1);
        }
      else
        {
          t = c_1;
          {
            ATerm o_3 = NULL,p_3 = NULL,r_3 = NULL;
            if(match_cons(t, sym_amb_1))
              {
                o_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_3;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_3 = ATgetFirst((ATermList) t);
                r_3 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_3;
          }
        }
      LocalPopChoice(b_1);
    }
  else
    {
      t = a_1;
      {
        ATerm h_3 = NULL,k_3 = NULL,q_3 = NULL;
        h_3 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm e_1 = ATgetArgument(t, 0);
            if(match_cons(e_1, sym_prod_3))
              {
                ATerm j_1 = ATgetArgument(e_1, 0);
                q_3 = ATgetArgument(e_1, 1);
                {
                  ATerm l_1 = ATgetArgument(e_1, 2);
                }
              }
            else
              _fail(t);
            {
              ATerm i_1 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = h_3;
        {
          ATerm m_1 = t;
          int q_1 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0_0(t);
              LocalPopChoice(q_1);
            }
          else
            {
              t = m_1;
              {
                ATerm h_4 = NULL,i_4 = NULL;
                if(match_cons(t, sym_appl_2))
                  {
                    h_4 = ATgetArgument(t, 0);
                    i_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_4;
                t = map_1_0(abbrev_term_0_0, t);
              }
            }
        }
        k_3 = t;
        t = (ATerm) ATmakeAppl(sym_N_2, q_3, k_3);
      }
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  static ATerm t_5 (ATerm t);
  static ATerm t_5 (ATerm t)
  {
    ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
    q_5 = t;
    if(match_cons(t, sym_appl_2))
      {
        o_5 = ATgetArgument(t, 0);
        p_5 = ATgetArgument(t, 1);
        {
          ATerm r_1 = t;
          int s_1 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_4 = NULL,x_4 = NULL,c_5 = NULL,k_1 = NULL;
              t = SSLgetAnnotations(q_5);
              x_4 = t;
              t = p_5;
              t = map_1_0(t_5, t);
              c_5 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, o_5, c_5);
              k_1 = t;
              t = SSLsetAnnotations(k_1, x_4);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm t_1 = ATgetArgument(t, 0);
                  w_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_4;
              t = concat_0_0(t);
              LocalPopChoice(s_1);
            }
          else
            {
              t = r_1;
              t = (ATerm) ATinsert(ATempty, q_5);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, q_5);
      }
    return(t);
  }
  t = t_5(t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm p_0 (ATerm t_6, ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL;
  t = t_6;
  t = Hd_0_0(t);
  t = yield_0_0(t);
  v_5 = t;
  t = t_6;
  t = map_1_0(abbrev_term_0_0, t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, v_5, w_5);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,n_1 = NULL;
  l_6 = t;
  if(match_cons(t, sym_amb_1))
    {
      k_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_6);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, k_6);
  n_1 = t;
  t = SSLsetAnnotations(n_1, j_6);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      o_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_0(o_6, t);
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, n_6);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,p_1 = NULL,o_1 = NULL;
  i_6 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      e_6 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_6);
  d_6 = t;
  t = e_6;
  t = bu_collect_1_0(b_0, t);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, g_6, f_6);
  o_1 = t;
  t = SSLsetAnnotations(o_1, d_6);
  h_6 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      z_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_6);
  y_5 = t;
  t = z_5;
  t = map_1_0(c_0, t);
  b_6 = t;
  t = a_6;
  t = int_to_string_0_0(t);
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, b_6, c_6);
  p_1 = t;
  t = SSLsetAnnotations(p_1, y_5);
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
