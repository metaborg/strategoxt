#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "xtc-conf.h"
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_F_2;
Symbol sym_B_0;
Symbol sym_C_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Graph_0;
Symbol sym_Tree_0;
Symbol sym_DotGraph_2;
Symbol sym_StrictDotGraph_2;
Symbol sym_DotDigraph_2;
Symbol sym_StrictDotDigraph_2;
Symbol sym_Alias_2;
Symbol sym_GraphAttrs_1;
Symbol sym_NodeAttrs_1;
Symbol sym_EdgeAttrs_1;
Symbol sym_AttrId_2;
Symbol sym_AttrNumCon_2;
Symbol sym_Node_2;
Symbol sym_Id_1;
Symbol sym_QualId_2;
Symbol sym_QualId_2;
Symbol sym_Attrs_1;
Symbol sym_EdgeNoAttrs_2;
Symbol sym_Edge_3;
Symbol sym_SubGraph_2;
Symbol sym_SubGraphNoArgs_1;
Symbol sym_Arrow_1;
Symbol sym_Line_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
void init_constructors (void)
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_F_2 = ATmakeSymbol("F", 2, ATfalse);
  ATprotectSymbol(sym_F_2);
  sym_B_0 = ATmakeSymbol("B", 0, ATfalse);
  ATprotectSymbol(sym_B_0);
  sym_C_0 = ATmakeSymbol("C", 0, ATfalse);
  ATprotectSymbol(sym_C_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Graph_0 = ATmakeSymbol("Graph", 0, ATfalse);
  ATprotectSymbol(sym_Graph_0);
  sym_Tree_0 = ATmakeSymbol("Tree", 0, ATfalse);
  ATprotectSymbol(sym_Tree_0);
  sym_DotGraph_2 = ATmakeSymbol("DotGraph", 2, ATfalse);
  ATprotectSymbol(sym_DotGraph_2);
  sym_StrictDotGraph_2 = ATmakeSymbol("StrictDotGraph", 2, ATfalse);
  ATprotectSymbol(sym_StrictDotGraph_2);
  sym_DotDigraph_2 = ATmakeSymbol("DotDigraph", 2, ATfalse);
  ATprotectSymbol(sym_DotDigraph_2);
  sym_StrictDotDigraph_2 = ATmakeSymbol("StrictDotDigraph", 2, ATfalse);
  ATprotectSymbol(sym_StrictDotDigraph_2);
  sym_Alias_2 = ATmakeSymbol("Alias", 2, ATfalse);
  ATprotectSymbol(sym_Alias_2);
  sym_GraphAttrs_1 = ATmakeSymbol("GraphAttrs", 1, ATfalse);
  ATprotectSymbol(sym_GraphAttrs_1);
  sym_NodeAttrs_1 = ATmakeSymbol("NodeAttrs", 1, ATfalse);
  ATprotectSymbol(sym_NodeAttrs_1);
  sym_EdgeAttrs_1 = ATmakeSymbol("EdgeAttrs", 1, ATfalse);
  ATprotectSymbol(sym_EdgeAttrs_1);
  sym_AttrId_2 = ATmakeSymbol("AttrId", 2, ATfalse);
  ATprotectSymbol(sym_AttrId_2);
  sym_AttrNumCon_2 = ATmakeSymbol("AttrNumCon", 2, ATfalse);
  ATprotectSymbol(sym_AttrNumCon_2);
  sym_Node_2 = ATmakeSymbol("Node", 2, ATfalse);
  ATprotectSymbol(sym_Node_2);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_QualId_2 = ATmakeSymbol("QualId", 2, ATfalse);
  ATprotectSymbol(sym_QualId_2);
  sym_QualId_2 = ATmakeSymbol("QualId", 2, ATfalse);
  ATprotectSymbol(sym_QualId_2);
  sym_Attrs_1 = ATmakeSymbol("Attrs", 1, ATfalse);
  ATprotectSymbol(sym_Attrs_1);
  sym_EdgeNoAttrs_2 = ATmakeSymbol("EdgeNoAttrs", 2, ATfalse);
  ATprotectSymbol(sym_EdgeNoAttrs_2);
  sym_Edge_3 = ATmakeSymbol("Edge", 3, ATfalse);
  ATprotectSymbol(sym_Edge_3);
  sym_SubGraph_2 = ATmakeSymbol("SubGraph", 2, ATfalse);
  ATprotectSymbol(sym_SubGraph_2);
  sym_SubGraphNoArgs_1 = ATmakeSymbol("SubGraphNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SubGraphNoArgs_1);
  sym_Arrow_1 = ATmakeSymbol("Arrow", 1, ATfalse);
  ATprotectSymbol(sym_Arrow_1);
  sym_Line_1 = ATmakeSymbol("Line", 1, ATfalse);
  ATprotectSymbol(sym_Line_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
ATerm term_s_8;
ATerm term_r_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_n_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_d_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_a_5;
ATerm term_t_4;
void init_constant_terms (void)
{
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("  application failed", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("  check failed: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree-test", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_B_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_F_2, term_z_7, term_b_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_h_8);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-adot-test", 0, ATtrue));
}
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm p_61 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm h_67 (ATerm), ATerm i_67 (ATerm));
ATerm union_1 (ATerm, ATerm d_67 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm w_66 (ATerm));
ATerm foldr_3 (ATerm, ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm y_67 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm map_1 (ATerm, ATerm g_61 (ATerm));
ATerm new_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_48 (ATerm), ATerm z_48 (ATerm));
ATerm at_end_1 (ATerm, ATerm v_61 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_60 (ATerm));
ATerm if_verbose5_1 (ATerm, ATerm c_74 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm q_55 (ATerm), ATerm r_55 (ATerm));
ATerm apply_and_check_4 (ATerm, ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm d_56 (ATerm), ATerm e_56 (ATerm));
ATerm term_to_tree_test_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm p_47 (ATerm), ATerm q_47 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_56 (ATerm));
ATerm test_suite_2 (ATerm, ATerm o_55 (ATerm), ATerm p_55 (ATerm));
ATerm term_to_adot_test_0 (ATerm);
ATerm main_0 (ATerm);
ATerm eq_0 (ATerm t)
{
  ATerm u_0 = NULL,w_0 = NULL,x_0 = NULL;
  u_0 = t;
  b_0 :
  if(match_cons(u_0, sym__2))
    {
      w_0 = ATgetArgument(u_0, 0);
      x_0 = ATgetArgument(u_0, 1);
      if(((w_0 != NULL) && (w_0 != x_0)))
        _fail(x_0);
      else
        w_0 = x_0;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm t_1 = t;
    int u_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_61, _id);
        LocalPopChoice(u_1);
      }
    else
      {
        t = t_1;
        t = Cons_2(t, _id, b_1);
      }
    return(t);
  }
  t = b_1(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_67 (ATerm), ATerm i_67 (ATerm))
{
  ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL;
  f_1 = t;
  e_1 :
  if(((ATgetType(f_1) == AT_LIST) && !(ATisEmpty(f_1))))
    {
      g_1 = ATgetFirst((ATermList) f_1);
      h_1 = (ATerm) ATgetNext((ATermList) f_1);
      {
        t = i_67(t);
        {
          ATerm a_0 (ATerm t)
          {
            ATerm k_1 = NULL;
            k_1 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_1), not_null(k_1));
              t = h_67(t);
            }
            return(t);
          }
          t = fetch_1(t, a_0);
        }
        t = not_null(h_1);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm d_67 (ATerm))
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
  q_1 = t;
  p_1 :
  if(match_cons(q_1, sym__2))
    {
      r_1 = ATgetArgument(q_1, 0);
      s_1 = ATgetArgument(q_1, 1);
      {
        t = not_null(r_1);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm v_1 = t;
            int x_1 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(s_1);
                LocalPopChoice(x_1);
              }
            else
              {
                t = v_1;
                {
                  ATerm y_1 = t;
                  int z_1 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_0 (ATerm t)
                      {
                        t = not_null(s_1);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_67, c_0);
                      t = w_1(t);
                      LocalPopChoice(z_1);
                    }
                  else
                    {
                      t = y_1;
                      t = Cons_2(t, _id, w_1);
                    }
                }
              }
            return(t);
          }
          t = w_1(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm w_66 (ATerm))
{
  ATerm b_2 = NULL;
  ATerm d_2 = NULL;
  b_2 = t;
  {
    ATerm e_2 = NULL;
    ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL;
    t = not_null(b_2);
    {
      e_2 = t;
      {
        t = SSL_explode_term(not_null(e_2));
        {
          g_2 = t;
          a_2 :
          if(match_cons(g_2, sym__2))
            {
              h_2 = ATgetArgument(g_2, 0);
              i_2 = ATgetArgument(g_2, 1);
              if(((d_2 != NULL) && (d_2 != i_2)))
                _fail(i_2);
              else
                d_2 = i_2;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_2);
      t = foldr_3(t, u_66, v_66, w_66);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm y_67 (ATerm))
{
  ATerm c_2 = t;
  int f_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_67(t);
      LocalPopChoice(f_2);
    }
  else
    {
      t = c_2;
      {
        ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
        q_2 = t;
        p_2 :
        if(((ATgetType(q_2) == AT_LIST) && !(ATisEmpty(q_2))))
          {
            r_2 = ATgetFirst((ATermList) q_2);
            s_2 = (ATerm) ATgetNext((ATermList) q_2);
            {
              ATerm v_2 = NULL,x_2 = NULL;
              ATerm j_2;
              j_2 = t;
              {
                ATerm w_2 = NULL;
                t = not_null(r_2);
                {
                  t = y_67(t);
                  {
                    w_2 = t;
                    if(((v_2 != NULL) && (v_2 != w_2)))
                      _fail(w_2);
                    else
                      v_2 = w_2;
                  }
                }
              }
              t = j_2;
              {
                ATerm y_2 = NULL;
                t = not_null(s_2);
                {
                  t = foldr_3(t, w_67, x_67, y_67);
                  {
                    y_2 = t;
                    if(((x_2 != NULL) && (x_2 != y_2)))
                      _fail(y_2);
                    else
                      x_2 = y_2;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_2), not_null(x_2));
                  t = x_67(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm j_3 = NULL;
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
  j_3 = t;
  {
    ATerm o_3 = NULL;
    ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
    t = not_null(j_3);
    {
      o_3 = t;
      {
        t = SSL_explode_term(not_null(o_3));
        {
          q_3 = t;
          f_3 :
          if(match_cons(q_3, sym__2))
            {
              r_3 = ATgetArgument(q_3, 0);
              s_3 = ATgetArgument(q_3, 1);
              g_3 :
              if(match_string(r_3, ""))
                {
                  h_3 :
                  if(((ATgetType(s_3) == AT_LIST) && !(ATisEmpty(s_3))))
                    {
                      t_3 = ATgetFirst((ATermList) s_3);
                      u_3 = (ATerm) ATgetNext((ATermList) s_3);
                      i_3 :
                      if(((ATgetType(u_3) == AT_LIST) && !(ATisEmpty(u_3))))
                        {
                          v_3 = ATgetFirst((ATermList) u_3);
                          w_3 = (ATerm) ATgetNext((ATermList) u_3);
                          {
                            if(((l_3 != NULL) && (l_3 != t_3)))
                              _fail(t_3);
                            else
                              l_3 = t_3;
                            {
                              if(((n_3 != NULL) && (n_3 != v_3)))
                                _fail(v_3);
                              else
                                n_3 = v_3;
                              if(((m_3 != NULL) && (m_3 != w_3)))
                                _fail(w_3);
                              else
                                m_3 = w_3;
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(n_3);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm g_4 = NULL;
  ATerm i_4 = NULL,j_4 = NULL;
  g_4 = t;
  {
    ATerm k_4 = NULL;
    ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
    t = not_null(g_4);
    {
      k_4 = t;
      {
        t = SSL_explode_term(not_null(k_4));
        {
          m_4 = t;
          d_4 :
          if(match_cons(m_4, sym__2))
            {
              n_4 = ATgetArgument(m_4, 0);
              o_4 = ATgetArgument(m_4, 1);
              e_4 :
              if(match_string(n_4, ""))
                {
                  f_4 :
                  if(((ATgetType(o_4) == AT_LIST) && !(ATisEmpty(o_4))))
                    {
                      p_4 = ATgetFirst((ATermList) o_4);
                      q_4 = (ATerm) ATgetNext((ATermList) o_4);
                      {
                        if(((j_4 != NULL) && (j_4 != p_4)))
                          _fail(p_4);
                        else
                          j_4 = p_4;
                        if(((i_4 != NULL) && (i_4 != q_4)))
                          _fail(q_4);
                        else
                          i_4 = q_4;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(j_4);
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm k_2 = t;
    int l_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_2);
      }
    else
      {
        t = k_2;
        t = Cons_2(t, g_61, u_4);
      }
    return(t);
  }
  t = u_4(t);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(match_cons(x_4, sym__2))
    {
      y_4 = ATgetArgument(x_4, 0);
      z_4 = ATgetArgument(x_4, 1);
      {
        ATerm m_2;
        m_2 = t;
        {
          ATerm n_2 = t;
          int o_2 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_4), not_null(z_4));
              LocalPopChoice(o_2);
            }
          else
            {
              t = n_2;
              t = SSL_gtr(not_null(y_4), not_null(z_4));
            }
        }
        t = m_2;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm f_5 = NULL;
  ATerm t_2 = t;
  int u_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
      g_5 = t;
      e_5 :
      if(match_cons(g_5, sym__2))
        {
          h_5 = ATgetArgument(g_5, 0);
          i_5 = ATgetArgument(g_5, 1);
          {
            if(((f_5 != NULL) && (f_5 != h_5)))
              _fail(h_5);
            else
              f_5 = h_5;
            if(((f_5 != NULL) && (f_5 != i_5)))
              _fail(i_5);
            else
              f_5 = i_5;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_2);
    }
  else
    {
      t = t_2;
      t = gt_0(t);
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  ATerm z_2;
  z_2 = t;
  {
    ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL;
    p_5 = t;
    l_5 :
    if(match_cons(p_5, sym__3))
      {
        q_5 = ATgetArgument(p_5, 0);
        r_5 = ATgetArgument(p_5, 1);
        s_5 = ATgetArgument(p_5, 2);
        {
          if(((m_5 != NULL) && (m_5 != q_5)))
            _fail(q_5);
          else
            m_5 = q_5;
          {
            if(((n_5 != NULL) && (n_5 != r_5)))
              _fail(r_5);
            else
              n_5 = r_5;
            {
              if(((o_5 != NULL) && (o_5 != s_5)))
                _fail(s_5);
              else
                o_5 = s_5;
              t = SSL_table_put(not_null(m_5), not_null(n_5), not_null(o_5));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_2;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  t = SSL_implode_string(not_null(v_5));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_3 = t;
  int b_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_3);
    }
  else
    {
      t = a_3;
      {
        ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
        a_6 = t;
        z_5 :
        if(((ATgetType(a_6) == AT_LIST) && !(ATisEmpty(a_6))))
          {
            b_6 = ATgetFirst((ATermList) a_6);
            c_6 = (ATerm) ATgetNext((ATermList) a_6);
            {
              t = not_null(b_6);
              {
                ATerm d_0 (ATerm t)
                {
                  t = not_null(c_6);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_0);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm m_6 = NULL;
  ATerm o_6 = NULL;
  m_6 = t;
  {
    ATerm p_6 = NULL;
    ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
    t = not_null(m_6);
    {
      p_6 = t;
      {
        t = SSL_explode_term(not_null(p_6));
        {
          r_6 = t;
          k_6 :
          if(match_cons(r_6, sym__2))
            {
              s_6 = ATgetArgument(r_6, 0);
              t_6 = ATgetArgument(r_6, 1);
              l_6 :
              if(match_string(s_6, ""))
                {
                  if(((o_6 != NULL) && (o_6 != t_6)))
                    _fail(t_6);
                  else
                    o_6 = t_6;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_6);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  a_7 :
  if(((ATgetType(b_7) == AT_LIST) && ATisEmpty(b_7)))
    {
      {
        ATerm d_7 = NULL,f_7 = NULL;
        ATerm c_3;
        c_3 = t;
        {
          ATerm e_7 = NULL;
          t = SSLgetAnnotations(not_null(b_7));
          {
            e_7 = t;
            if(((d_7 != NULL) && (d_7 != e_7)))
              _fail(e_7);
            else
              d_7 = e_7;
          }
        }
        t = c_3;
        {
          ATerm g_7 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_7));
          {
            g_7 = t;
            if(((f_7 != NULL) && (f_7 != g_7)))
              _fail(g_7);
            else
              f_7 = g_7;
          }
          t = not_null(f_7);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_48 (ATerm), ATerm z_48 (ATerm))
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
  q_7 = t;
  p_7 :
  if(((ATgetType(q_7) == AT_LIST) && !(ATisEmpty(q_7))))
    {
      r_7 = ATgetFirst((ATermList) q_7);
      s_7 = (ATerm) ATgetNext((ATermList) q_7);
      {
        ATerm w_7 = NULL,y_7 = NULL;
        ATerm x_7 = NULL;
        t = SSLgetAnnotations(not_null(q_7));
        {
          x_7 = t;
          if(((w_7 != NULL) && (w_7 != x_7)))
            _fail(x_7);
          else
            w_7 = x_7;
        }
        {
          t = not_null(r_7);
          {
            ATerm a_8 = NULL;
            t = y_48(t);
            {
              y_7 = t;
              {
                t = not_null(s_7);
                {
                  ATerm c_8 = NULL;
                  t = z_48(t);
                  {
                    a_8 = t;
                    {
                      ATerm d_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_8)), not_null(y_7)), not_null(w_7));
                      {
                        d_8 = t;
                        if(((c_8 != NULL) && (c_8 != d_8)))
                          _fail(d_8);
                        else
                          c_8 = d_8;
                      }
                      t = not_null(c_8);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_61 (ATerm))
{
  ATerm j_8 (ATerm t)
  {
    ATerm d_3 = t;
    int e_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_8);
        LocalPopChoice(e_3);
      }
    else
      {
        t = d_3;
        {
          t = Nil_0(t);
          t = v_61(t);
        }
      }
    return(t);
  }
  t = j_8(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  m_8 = t;
  l_8 :
  if(match_cons(m_8, sym__2))
    {
      n_8 = ATgetArgument(m_8, 0);
      o_8 = ATgetArgument(m_8, 1);
      {
        t = not_null(n_8);
        {
          ATerm e_0 (ATerm t)
          {
            t = not_null(o_8);
            return(t);
          }
          t = at_end_1(t, e_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm k_3 = t;
  int p_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(p_3);
    }
  else
    {
      t = k_3;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  t = SSL_explode_string(not_null(t_8));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm x_3 = t;
    int y_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(y_3);
      }
    else
      {
        t = x_3;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  t = SSL_is_string(not_null(x_8));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_3 = t;
  int a_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(a_4);
    }
  else
    {
      t = z_3;
      {
        ATerm b_4 = t;
        int c_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              ATerm h_4 = t;
              int l_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(l_4);
                }
              else
                {
                  t = h_4;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, f_0);
            LocalPopChoice(c_4);
          }
        else
          {
            t = b_4;
            {
              ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
              g_9 = t;
              f_9 :
              if(match_cons(g_9, sym_Path_1))
                {
                  h_9 = ATgetArgument(g_9, 0);
                  t = not_null(h_9);
                }
              else
                {
                  if(match_cons(g_9, sym_Var_1))
                    {
                      h_9 = ATgetArgument(g_9, 0);
                      {
                        t = not_null(h_9);
                        {
                          ATerm r_4 = t;
                          int s_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(s_4);
                            }
                          else
                            {
                              t = r_4;
                              {
                                ATerm g_0 (ATerm t)
                                {
                                  t = term_t_4;
                                  return(t);
                                }
                                t = debug_1(t, g_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(g_9, sym_Prefix_2))
                        {
                          h_9 = ATgetArgument(g_9, 0);
                          i_9 = ATgetArgument(g_9, 1);
                          {
                            ATerm n_9 = NULL,p_9 = NULL;
                            ATerm v_4;
                            v_4 = t;
                            {
                              ATerm o_9 = NULL;
                              t = not_null(h_9);
                              {
                                t = eval_config_0(t);
                                {
                                  o_9 = t;
                                  if(((n_9 != NULL) && (n_9 != o_9)))
                                    _fail(o_9);
                                  else
                                    n_9 = o_9;
                                }
                              }
                            }
                            t = v_4;
                            {
                              ATerm q_9 = NULL;
                              t = not_null(i_9);
                              {
                                t = eval_config_0(t);
                                {
                                  q_9 = t;
                                  if(((p_9 != NULL) && (p_9 != q_9)))
                                    _fail(q_9);
                                  else
                                    p_9 = q_9;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(p_9));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym__2))
    {
      z_9 = ATgetArgument(y_9, 0);
      a_10 = ATgetArgument(y_9, 1);
      t = SSL_table_get(not_null(z_9), not_null(a_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm g_10 = NULL;
  g_10 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_5, not_null(g_10));
    {
      t = table_get_0(t);
      {
        ATerm b_5 = t;
        int c_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm d_5;
              d_5 = t;
              {
                ATerm i_10 = NULL;
                ATerm j_10 = NULL;
                j_10 = t;
                if(((i_10 != NULL) && (i_10 != j_10)))
                  _fail(j_10);
                else
                  i_10 = j_10;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_5, not_null(g_10), not_null(i_10));
                  t = table_put_0(t);
                }
              }
              t = d_5;
            }
            LocalPopChoice(c_5);
          }
        else
          {
            t = b_5;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_60 (ATerm))
{
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_60(t);
      LocalPopChoice(k_5);
    }
  else
    {
      t = j_5;
      {
      }
    }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm t_5 = t;
  int u_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_5;
      w_5 = t;
      {
        ATerm n_10 = NULL;
        ATerm o_10 = NULL;
        t = term_x_5;
        {
          t = get_config_0(t);
          {
            o_10 = t;
            if(((n_10 != NULL) && (n_10 != o_10)))
              _fail(o_10);
            else
              n_10 = o_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), term_y_5);
          t = geq_0(t);
        }
      }
      t = w_5;
      t = c_74(t);
      LocalPopChoice(u_5);
    }
  else
    {
      t = t_5;
      {
      }
    }
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm y_10 = NULL,a_11 = NULL;
  ATerm h_0 (ATerm t)
  {
    ATerm i_0 (ATerm t)
    {
      t = term_d_6;
      return(t);
    }
    t = debug_1(t, i_0);
    return(t);
  }
  t = if_verbose5_1(t, h_0);
  {
    ATerm e_6;
    e_6 = t;
    {
      ATerm z_10 = NULL;
      t = new_0(t);
      {
        z_10 = t;
        if(((y_10 != NULL) && (y_10 != z_10)))
          _fail(z_10);
        else
          y_10 = z_10;
      }
    }
    t = e_6;
    {
      ATerm b_11 = NULL;
      b_11 = t;
      if(((a_11 != NULL) && (a_11 != b_11)))
        _fail(b_11);
      else
        a_11 = b_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_10), not_null(a_11));
        {
          ATerm q_11 (ATerm t)
          {
            ATerm k_11 = NULL,m_11 = NULL;
            ATerm j_0 (ATerm t)
            {
              ATerm f_6 = t;
              int g_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_0 (ATerm t)
                  {
                    ATerm c_11 = NULL,e_11 = NULL;
                    ATerm h_6;
                    h_6 = t;
                    {
                      ATerm d_11 = NULL;
                      t = new_0(t);
                      {
                        d_11 = t;
                        if(((c_11 != NULL) && (c_11 != d_11)))
                          _fail(d_11);
                        else
                          c_11 = d_11;
                      }
                    }
                    t = h_6;
                    {
                      ATerm f_11 = NULL;
                      f_11 = t;
                      if(((e_11 != NULL) && (e_11 != f_11)))
                        _fail(f_11);
                      else
                        e_11 = f_11;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(e_11));
                    }
                    return(t);
                  }
                  t = map_1(t, k_0);
                  LocalPopChoice(g_6);
                }
              else
                {
                  t = f_6;
                  {
                    ATerm l_0 (ATerm t)
                    {
                      ATerm g_11 = NULL,i_11 = NULL;
                      ATerm i_6;
                      i_6 = t;
                      {
                        ATerm h_11 = NULL;
                        t = new_0(t);
                        {
                          h_11 = t;
                          if(((g_11 != NULL) && (g_11 != h_11)))
                            _fail(h_11);
                          else
                            g_11 = h_11;
                        }
                      }
                      t = i_6;
                      {
                        ATerm j_11 = NULL;
                        j_11 = t;
                        if(((i_11 != NULL) && (i_11 != j_11)))
                          _fail(j_11);
                        else
                          i_11 = j_11;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), not_null(i_11));
                      }
                      return(t);
                    }
                    t = _all(t, l_0);
                  }
                }
              return(t);
            }
            t = _2(t, _id, j_0);
            {
              ATerm j_6;
              j_6 = t;
              {
                ATerm l_11 = NULL;
                ATerm m_0 (ATerm t)
                {
                  ATerm n_6 = t;
                  int q_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(q_6);
                    }
                  else
                    {
                      t = n_6;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, m_0);
                {
                  l_11 = t;
                  if(((k_11 != NULL) && (k_11 != l_11)))
                    _fail(l_11);
                  else
                    k_11 = l_11;
                }
              }
              t = j_6;
              {
                ATerm n_11 = NULL;
                t = Snd_0(t);
                {
                  ATerm u_6 = t;
                  int v_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_0 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      ATerm o_0 (ATerm t)
                      {
                        t = union_1(t, eq_0);
                        return(t);
                      }
                      t = foldr_3(t, n_0, o_0, q_11);
                      LocalPopChoice(v_6);
                    }
                  else
                    {
                      t = u_6;
                      {
                        ATerm p_0 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        ATerm q_0 (ATerm t)
                        {
                          t = union_1(t, eq_0);
                          return(t);
                        }
                        t = crush_3(t, p_0, q_0, q_11);
                      }
                    }
                  {
                    n_11 = t;
                    if(((m_11 != NULL) && (m_11 != n_11)))
                      _fail(n_11);
                    else
                      m_11 = n_11;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(m_11)), not_null(k_11));
              }
            }
            return(t);
          }
          t = q_11(t);
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm w_6;
  w_6 = t;
  {
    ATerm y_11 = NULL;
    ATerm z_11 = NULL;
    z_11 = t;
    if(((y_11 != NULL) && (y_11 != z_11)))
      _fail(z_11);
    else
      y_11 = z_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATempty, not_null(y_11)));
      t = printnl_0(t);
    }
  }
  t = w_6;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm c_12 = NULL;
    c_12 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_12), term_y_6);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, r_0);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym__2))
    {
      i_12 = ATgetArgument(h_12, 0);
      j_12 = ATgetArgument(h_12, 1);
      {
        ATerm z_6 = t;
        int c_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_12), not_null(j_12));
            LocalPopChoice(c_7);
          }
        else
          {
            t = z_6;
            t = SSL_addr(not_null(i_12), not_null(j_12));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm record_success_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm o_12 = NULL;
    o_12 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_12), term_y_6);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, s_0, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm q_55 (ATerm), ATerm r_55 (ATerm))
{
  ATerm h_7;
  h_7 = t;
  {
    t = q_55(t);
    t = debug_0(t);
  }
  t = h_7;
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_7;
        k_7 = t;
        t = r_55(t);
        t = k_7;
        t = record_success_0(t);
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_and_check_4 (ATerm t, ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm d_56 (ATerm), ATerm e_56 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_56(t);
        t = c_56(t);
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        {
          t = term_n_7;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    {
      ATerm o_7 = t;
      int t_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_56(t);
          LocalPopChoice(t_7);
        }
      else
        {
          t = o_7;
          {
            ATerm v_0 (ATerm t)
            {
              t = term_u_7;
              return(t);
            }
            t = debug_1(t, v_0);
            _fail(t);
          }
        }
    }
    return(t);
  }
  t = do_test_2(t, b_56, t_0);
  return(t);
}
ATerm term_to_tree_test_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  ATerm y_0 (ATerm t)
  {
    t = term_v_7;
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    t = term_e_8;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
    f_13 = t;
    s_12 :
    if(((ATgetType(f_13) == AT_LIST) && !(ATisEmpty(f_13))))
      {
        g_13 = ATgetFirst((ATermList) f_13);
        l_13 = (ATerm) ATgetNext((ATermList) f_13);
        t_12 :
        if(match_cons(g_13, sym__2))
          {
            h_13 = ATgetArgument(g_13, 0);
            i_13 = ATgetArgument(g_13, 1);
            u_12 :
            if(match_cons(i_13, sym_F_2))
              {
                j_13 = ATgetArgument(i_13, 0);
                k_13 = ATgetArgument(i_13, 1);
                v_12 :
                if(((ATgetType(l_13) == AT_LIST) && !(ATisEmpty(l_13))))
                  {
                    m_13 = ATgetFirst((ATermList) l_13);
                    p_13 = (ATerm) ATgetNext((ATermList) l_13);
                    w_12 :
                    if(match_cons(m_13, sym__2))
                      {
                        n_13 = ATgetArgument(m_13, 0);
                        o_13 = ATgetArgument(m_13, 1);
                        x_12 :
                        if(match_cons(o_13, sym_B_0))
                          {
                            y_12 :
                            if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
                              {
                                q_13 = ATgetFirst((ATermList) p_13);
                                t_13 = (ATerm) ATgetNext((ATermList) p_13);
                                z_12 :
                                if(match_cons(q_13, sym__2))
                                  {
                                    r_13 = ATgetArgument(q_13, 0);
                                    s_13 = ATgetArgument(q_13, 1);
                                    a_13 :
                                    if(match_cons(s_13, sym_C_0))
                                      {
                                        b_13 :
                                        if(((ATgetType(t_13) == AT_LIST) && ATisEmpty(t_13)))
                                          {
                                            {
                                              if(((c_13 != NULL) && (c_13 != h_13)))
                                                _fail(h_13);
                                              else
                                                c_13 = h_13;
                                              {
                                                if(((d_13 != NULL) && (d_13 != j_13)))
                                                  _fail(j_13);
                                                else
                                                  d_13 = j_13;
                                                {
                                                  if(((e_13 != NULL) && (e_13 != k_13)))
                                                    _fail(k_13);
                                                  else
                                                    e_13 = k_13;
                                                  {
                                                    if(((d_13 != NULL) && (d_13 != n_13)))
                                                      _fail(n_13);
                                                    else
                                                      d_13 = n_13;
                                                    if(((e_13 != NULL) && (e_13 != r_13)))
                                                      _fail(r_13);
                                                    else
                                                      e_13 = r_13;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = apply_and_check_4(t, y_0, term_to_tree_0, z_0, a_1);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm w_13 = NULL;
    w_13 = t;
    v_13 :
    if(!(match_int(w_13, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, c_1);
  return(t);
}
ATerm _2 (ATerm t, ATerm p_47 (ATerm), ATerm q_47 (ATerm))
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  d_14 = t;
  c_14 :
  if(match_cons(d_14, sym__2))
    {
      e_14 = ATgetArgument(d_14, 0);
      f_14 = ATgetArgument(d_14, 1);
      {
        ATerm j_14 = NULL,l_14 = NULL;
        ATerm k_14 = NULL;
        t = SSLgetAnnotations(not_null(d_14));
        {
          k_14 = t;
          if(((j_14 != NULL) && (j_14 != k_14)))
            _fail(k_14);
          else
            j_14 = k_14;
        }
        {
          t = not_null(e_14);
          {
            ATerm n_14 = NULL;
            t = p_47(t);
            {
              l_14 = t;
              {
                t = not_null(f_14);
                {
                  ATerm p_14 = NULL;
                  t = q_47(t);
                  {
                    n_14 = t;
                    {
                      ATerm q_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_14), not_null(n_14)), not_null(j_14));
                      {
                        q_14 = t;
                        if(((p_14 != NULL) && (p_14 != q_14)))
                          _fail(q_14);
                        else
                          p_14 = q_14;
                      }
                      t = not_null(p_14);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm report_test_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm j_1 (ATerm t)
    {
      t = term_f_8;
      return(t);
    }
    t = debug_1(t, j_1);
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = term_g_8;
      return(t);
    }
    t = debug_1(t, l_1);
    return(t);
  }
  t = _2(t, d_1, i_1);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym__2))
    {
      z_14 = ATgetArgument(y_14, 0);
      a_15 = ATgetArgument(y_14, 1);
      {
        ATerm k_8;
        k_8 = t;
        t = SSL_printnl(not_null(z_14), not_null(a_15));
        t = k_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_56 (ATerm))
{
  ATerm p_8;
  p_8 = t;
  {
    ATerm g_15 = NULL,i_15 = NULL;
    ATerm q_8;
    q_8 = t;
    {
      ATerm h_15 = NULL;
      t = t_56(t);
      {
        h_15 = t;
        if(((g_15 != NULL) && (g_15 != h_15)))
          _fail(h_15);
        else
          g_15 = h_15;
      }
    }
    t = q_8;
    {
      ATerm j_15 = NULL;
      j_15 = t;
      if(((i_15 != NULL) && (i_15 != j_15)))
        _fail(j_15);
      else
        i_15 = j_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_15)), not_null(g_15)));
        t = printnl_0(t);
      }
    }
  }
  t = p_8;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm o_55 (ATerm), ATerm p_55 (ATerm))
{
  t = o_55(t);
  {
    ATerm m_1 (ATerm t)
    {
      t = term_r_8;
      return(t);
    }
    t = debug_1(t, m_1);
    {
      t = term_i_8;
      {
        t = p_55(t);
        {
          t = report_test_0(t);
          {
            ATerm n_1 (ATerm t)
            {
              ATerm n_15 = NULL;
              n_15 = t;
              m_15 :
              if(!(match_int(n_15, 0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = _2(t, _id, n_1);
          }
        }
      }
    }
  }
  return(t);
}
ATerm term_to_adot_test_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = term_s_8;
    return(t);
  }
  t = test_suite_2(t, o_1, term_to_tree_test_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_adot_test_0(t);
  return(t);
}
