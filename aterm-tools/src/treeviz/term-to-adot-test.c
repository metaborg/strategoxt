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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_Graph_0;
Symbol sym_Tree_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Scopes_0;
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
Symbol sym_Infinite_0;
Symbol sym_CUT_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_F_2;
Symbol sym_B_0;
Symbol sym_C_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Graph_0 = ATmakeSymbol("Graph", 0, ATfalse);
  ATprotectSymbol(sym_Graph_0);
  sym_Tree_0 = ATmakeSymbol("Tree", 0, ATfalse);
  ATprotectSymbol(sym_Tree_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_F_2 = ATmakeSymbol("F", 2, ATfalse);
  ATprotectSymbol(sym_F_2);
  sym_B_0 = ATmakeSymbol("B", 0, ATfalse);
  ATprotectSymbol(sym_B_0);
  sym_C_0 = ATmakeSymbol("C", 0, ATfalse);
  ATprotectSymbol(sym_C_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_k_8;
ATerm term_f_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_l_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_c_7;
ATerm term_v_6;
ATerm term_i_6;
ATerm term_d_6;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_v_4;
ATerm term_h_4;
ATerm term_b_4;
void init_constant_terms (void)
{
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree-test", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_B_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_F_2, term_h_7, term_i_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_F_2, term_q_7, term_r_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym__2, term_l_7, term_s_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_h_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym__2, term_r_7, term_i_7);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym__2, term_a_8, term_a_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-adot-test", 0, ATtrue));
}
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm v_73 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm d_69 (ATerm), ATerm e_69 (ATerm));
ATerm union_1 (ATerm, ATerm f_69 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm s_69 (ATerm));
ATerm foldr_3 (ATerm, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm map_1 (ATerm, ATerm m_73 (ATerm));
ATerm new_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_52 (ATerm), ATerm z_52 (ATerm));
ATerm at_end_1 (ATerm, ATerm b_74 (ATerm));
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_75 (ATerm));
ATerm if_verbose5_1 (ATerm, ATerm i_62 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm w_79 (ATerm), ATerm x_79 (ATerm));
ATerm apply_test_4 (ATerm, ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm));
ATerm term_to_tree_test_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm f_45 (ATerm), ATerm g_45 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm e_79 (ATerm));
ATerm test_suite_2 (ATerm, ATerm u_79 (ATerm), ATerm v_79 (ATerm));
ATerm term_to_adot_test_0 (ATerm);
ATerm main_0 (ATerm);
ATerm eq_0 (ATerm t)
{
  ATerm f_0 = NULL,x_0 = NULL,y_0 = NULL;
  f_0 = t;
  e_0 :
  if(match_cons(f_0, sym__2))
    {
      x_0 = ATgetArgument(f_0, 0);
      y_0 = ATgetArgument(f_0, 1);
      if(((x_0 != NULL) && (x_0 != y_0)))
        _fail(y_0);
      else
        x_0 = y_0;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm v_73 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm v_1 = t;
    int x_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_73, _id);
        LocalPopChoice(x_1);
      }
    else
      {
        t = v_1;
        t = Cons_2(t, _id, b_1);
      }
    return(t);
  }
  t = b_1(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_69 (ATerm), ATerm e_69 (ATerm))
{
  ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL;
  f_1 = t;
  e_1 :
  if(((ATgetType(f_1) == AT_LIST) && ((ATermList) f_1 != ATempty)))
    {
      g_1 = ATgetFirst((ATermList) f_1);
      h_1 = (ATerm) ATgetNext((ATermList) f_1);
      {
        t = e_69(t);
        {
          ATerm d_0 (ATerm t)
          {
            ATerm k_1 = NULL;
            k_1 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_1), not_null(k_1));
              t = d_69(t);
            }
            return(t);
          }
          t = fetch_1(t, d_0);
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
ATerm union_1 (ATerm t, ATerm f_69 (ATerm))
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
            ATerm y_1 = t;
            int z_1 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(s_1);
                LocalPopChoice(z_1);
              }
            else
              {
                t = y_1;
                {
                  ATerm c_2 = t;
                  int f_2 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_0 (ATerm t)
                      {
                        t = not_null(s_1);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_69, g_0);
                      t = w_1(t);
                      LocalPopChoice(f_2);
                    }
                  else
                    {
                      t = c_2;
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
ATerm crush_3 (ATerm t, ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm s_69 (ATerm))
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
      t = foldr_3(t, q_69, r_69, s_69);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm))
{
  ATerm j_2 = t;
  int k_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_67(t);
      LocalPopChoice(k_2);
    }
  else
    {
      t = j_2;
      {
        ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
        q_2 = t;
        p_2 :
        if(((ATgetType(q_2) == AT_LIST) && ((ATermList) q_2 != ATempty)))
          {
            r_2 = ATgetFirst((ATermList) q_2);
            s_2 = (ATerm) ATgetNext((ATermList) q_2);
            {
              ATerm v_2 = NULL,x_2 = NULL;
              ATerm l_2;
              l_2 = t;
              {
                ATerm w_2 = NULL;
                t = not_null(r_2);
                {
                  t = a_68(t);
                  {
                    w_2 = t;
                    if(((v_2 != NULL) && (v_2 != w_2)))
                      _fail(w_2);
                    else
                      v_2 = w_2;
                  }
                }
              }
              t = l_2;
              {
                ATerm y_2 = NULL;
                t = not_null(s_2);
                {
                  t = foldr_3(t, y_67, z_67, a_68);
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
                  t = z_67(t);
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
                  if(((ATgetType(s_3) == AT_LIST) && ((ATermList) s_3 != ATempty)))
                    {
                      t_3 = ATgetFirst((ATermList) s_3);
                      u_3 = (ATerm) ATgetNext((ATermList) s_3);
                      i_3 :
                      if(((ATgetType(u_3) == AT_LIST) && ((ATermList) u_3 != ATempty)))
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
                  if(((ATgetType(o_4) == AT_LIST) && ((ATermList) o_4 != ATempty)))
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
ATerm map_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm m_2 = t;
    int n_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(n_2);
      }
    else
      {
        t = m_2;
        t = Cons_2(t, m_73, u_4);
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
        ATerm o_2;
        o_2 = t;
        {
          ATerm t_2 = t;
          int u_2 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_4), not_null(z_4));
              LocalPopChoice(u_2);
            }
          else
            {
              t = t_2;
              t = SSL_gtr(not_null(y_4), not_null(z_4));
            }
        }
        t = o_2;
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
  ATerm z_2 = t;
  int a_3 = stack_ptr;
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
      LocalPopChoice(a_3);
    }
  else
    {
      t = z_2;
      t = gt_0(t);
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  ATerm b_3;
  b_3 = t;
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
  t = b_3;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  t = SSL_implode_string(not_null(v_5));
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm c_6 = NULL;
  c_6 = t;
  b_6 :
  if(((ATermList) c_6 == ATempty))
    {
      {
        ATerm e_6 = NULL,g_6 = NULL;
        ATerm c_3;
        c_3 = t;
        {
          ATerm f_6 = NULL;
          t = SSLgetAnnotations(not_null(c_6));
          {
            f_6 = t;
            if(((e_6 != NULL) && (e_6 != f_6)))
              _fail(f_6);
            else
              e_6 = f_6;
          }
        }
        t = c_3;
        {
          ATerm h_6 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_6));
          {
            h_6 = t;
            if(((g_6 != NULL) && (g_6 != h_6)))
              _fail(h_6);
            else
              g_6 = h_6;
          }
          t = not_null(g_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_52 (ATerm), ATerm z_52 (ATerm))
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  r_6 = t;
  q_6 :
  if(((ATgetType(r_6) == AT_LIST) && ((ATermList) r_6 != ATempty)))
    {
      s_6 = ATgetFirst((ATermList) r_6);
      t_6 = (ATerm) ATgetNext((ATermList) r_6);
      {
        ATerm x_6 = NULL,z_6 = NULL;
        ATerm y_6 = NULL;
        t = SSLgetAnnotations(not_null(r_6));
        {
          y_6 = t;
          if(((x_6 != NULL) && (x_6 != y_6)))
            _fail(y_6);
          else
            x_6 = y_6;
        }
        {
          t = not_null(s_6);
          {
            ATerm b_7 = NULL;
            t = y_52(t);
            {
              z_6 = t;
              {
                t = not_null(t_6);
                {
                  ATerm d_7 = NULL;
                  t = z_52(t);
                  {
                    b_7 = t;
                    {
                      ATerm e_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_7)), not_null(z_6)), not_null(x_6));
                      {
                        e_7 = t;
                        if(((d_7 != NULL) && (d_7 != e_7)))
                          _fail(e_7);
                        else
                          d_7 = e_7;
                      }
                      t = not_null(d_7);
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
ATerm at_end_1 (ATerm t, ATerm b_74 (ATerm))
{
  ATerm k_7 (ATerm t)
  {
    ATerm d_3 = t;
    int e_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_7);
        LocalPopChoice(e_3);
      }
    else
      {
        t = d_3;
        {
          t = Nil_0(t);
          t = b_74(t);
        }
      }
    return(t);
  }
  t = k_7(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym__2))
    {
      o_7 = ATgetArgument(n_7, 0);
      p_7 = ATgetArgument(n_7, 1);
      {
        t = not_null(o_7);
        {
          ATerm h_0 (ATerm t)
          {
            t = not_null(p_7);
            return(t);
          }
          t = at_end_1(t, h_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_7 = NULL;
  u_7 = t;
  t = SSL_explode_string(not_null(u_7));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_7 = NULL;
  y_7 = t;
  t = SSL_is_string(not_null(y_7));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_3 = t;
  int p_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(p_3);
    }
  else
    {
      t = k_3;
      {
        ATerm x_3 = t;
        int y_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_0);
            LocalPopChoice(y_3);
          }
        else
          {
            t = x_3;
            {
              ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
              h_8 = t;
              g_8 :
              if(match_cons(h_8, sym_Path_1))
                {
                  i_8 = ATgetArgument(h_8, 0);
                  t = not_null(i_8);
                }
              else
                {
                  if(match_cons(h_8, sym_Var_1))
                    {
                      i_8 = ATgetArgument(h_8, 0);
                      {
                        t = not_null(i_8);
                        {
                          ATerm z_3 = t;
                          int a_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_4);
                            }
                          else
                            {
                              t = z_3;
                              {
                                ATerm j_0 (ATerm t)
                                {
                                  t = term_b_4;
                                  return(t);
                                }
                                t = debug_1(t, j_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_8, sym_Prefix_2))
                        {
                          i_8 = ATgetArgument(h_8, 0);
                          j_8 = ATgetArgument(h_8, 1);
                          {
                            ATerm o_8 = NULL,q_8 = NULL;
                            ATerm c_4;
                            c_4 = t;
                            {
                              ATerm p_8 = NULL;
                              t = not_null(i_8);
                              {
                                t = eval_config_0(t);
                                {
                                  p_8 = t;
                                  if(((o_8 != NULL) && (o_8 != p_8)))
                                    _fail(p_8);
                                  else
                                    o_8 = p_8;
                                }
                              }
                            }
                            t = c_4;
                            {
                              ATerm r_8 = NULL;
                              t = not_null(j_8);
                              {
                                t = eval_config_0(t);
                                {
                                  r_8 = t;
                                  if(((q_8 != NULL) && (q_8 != r_8)))
                                    _fail(r_8);
                                  else
                                    q_8 = r_8;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), not_null(q_8));
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
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym__2))
    {
      a_9 = ATgetArgument(z_8, 0);
      b_9 = ATgetArgument(z_8, 1);
      t = SSL_table_get(not_null(a_9), not_null(b_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm h_9 = NULL;
  h_9 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_4, not_null(h_9));
    {
      t = table_get_0(t);
      {
        ATerm k_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm l_4;
            l_4 = t;
            {
              ATerm j_9 = NULL;
              ATerm k_9 = NULL;
              k_9 = t;
              if(((j_9 != NULL) && (j_9 != k_9)))
                _fail(k_9);
              else
                j_9 = k_9;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_4, not_null(h_9), not_null(j_9));
                t = table_put_0(t);
              }
            }
            t = l_4;
          }
          return(t);
        }
        t = try_1(t, k_0);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm r_4 = t;
  int s_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_75(t);
      LocalPopChoice(s_4);
    }
  else
    {
      t = r_4;
      {
      }
    }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm l_0 (ATerm t)
  {
    ATerm t_4;
    t_4 = t;
    {
      ATerm o_9 = NULL;
      ATerm p_9 = NULL;
      t = term_v_4;
      {
        t = get_config_0(t);
        {
          p_9 = t;
          if(((o_9 != NULL) && (o_9 != p_9)))
            _fail(p_9);
          else
            o_9 = p_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_9), term_a_5);
        t = geq_0(t);
      }
    }
    t = t_4;
    t = i_62(t);
    return(t);
  }
  t = try_1(t, l_0);
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm z_9 = NULL,b_10 = NULL;
  ATerm m_0 (ATerm t)
  {
    ATerm n_0 (ATerm t)
    {
      t = term_b_5;
      return(t);
    }
    t = debug_1(t, n_0);
    return(t);
  }
  t = if_verbose5_1(t, m_0);
  {
    ATerm c_5;
    c_5 = t;
    {
      ATerm a_10 = NULL;
      t = new_0(t);
      {
        a_10 = t;
        if(((z_9 != NULL) && (z_9 != a_10)))
          _fail(a_10);
        else
          z_9 = a_10;
      }
    }
    t = c_5;
    {
      ATerm c_10 = NULL;
      c_10 = t;
      if(((b_10 != NULL) && (b_10 != c_10)))
        _fail(c_10);
      else
        b_10 = c_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), not_null(b_10));
        {
          ATerm r_10 (ATerm t)
          {
            ATerm l_10 = NULL,n_10 = NULL;
            ATerm o_0 (ATerm t)
            {
              ATerm d_5 = t;
              int j_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_0 (ATerm t)
                  {
                    ATerm d_10 = NULL,f_10 = NULL;
                    ATerm k_5;
                    k_5 = t;
                    {
                      ATerm e_10 = NULL;
                      t = new_0(t);
                      {
                        e_10 = t;
                        if(((d_10 != NULL) && (d_10 != e_10)))
                          _fail(e_10);
                        else
                          d_10 = e_10;
                      }
                    }
                    t = k_5;
                    {
                      ATerm g_10 = NULL;
                      g_10 = t;
                      if(((f_10 != NULL) && (f_10 != g_10)))
                        _fail(g_10);
                      else
                        f_10 = g_10;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), not_null(f_10));
                    }
                    return(t);
                  }
                  t = map_1(t, p_0);
                  LocalPopChoice(j_5);
                }
              else
                {
                  t = d_5;
                  {
                    ATerm q_0 (ATerm t)
                    {
                      ATerm h_10 = NULL,j_10 = NULL;
                      ATerm t_5;
                      t_5 = t;
                      {
                        ATerm i_10 = NULL;
                        t = new_0(t);
                        {
                          i_10 = t;
                          if(((h_10 != NULL) && (h_10 != i_10)))
                            _fail(i_10);
                          else
                            h_10 = i_10;
                        }
                      }
                      t = t_5;
                      {
                        ATerm k_10 = NULL;
                        k_10 = t;
                        if(((j_10 != NULL) && (j_10 != k_10)))
                          _fail(k_10);
                        else
                          j_10 = k_10;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), not_null(j_10));
                      }
                      return(t);
                    }
                    t = _all(t, q_0);
                  }
                }
              return(t);
            }
            t = _2(t, _id, o_0);
            {
              ATerm u_5;
              u_5 = t;
              {
                ATerm m_10 = NULL;
                ATerm r_0 (ATerm t)
                {
                  ATerm w_5 = t;
                  int x_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      LocalPopChoice(x_5);
                    }
                  else
                    {
                      t = w_5;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, r_0);
                {
                  m_10 = t;
                  if(((l_10 != NULL) && (l_10 != m_10)))
                    _fail(m_10);
                  else
                    l_10 = m_10;
                }
              }
              t = u_5;
              {
                ATerm o_10 = NULL;
                t = Snd_0(t);
                {
                  ATerm y_5 = t;
                  int z_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_0 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = foldr_3(t, s_0, union_0, r_10);
                      LocalPopChoice(z_5);
                    }
                  else
                    {
                      t = y_5;
                      {
                        ATerm t_0 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = crush_3(t, t_0, union_0, r_10);
                      }
                    }
                  {
                    o_10 = t;
                    if(((n_10 != NULL) && (n_10 != o_10)))
                      _fail(o_10);
                    else
                      n_10 = o_10;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(n_10)), not_null(l_10));
              }
            }
            return(t);
          }
          t = r_10(t);
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm a_6;
  a_6 = t;
  {
    ATerm z_10 = NULL;
    ATerm a_11 = NULL;
    a_11 = t;
    if(((z_10 != NULL) && (z_10 != a_11)))
      _fail(a_11);
    else
      z_10 = a_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATempty, not_null(z_10)));
      t = printnl_0(t);
    }
  }
  t = a_6;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm d_11 = NULL;
    d_11 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), term_i_6);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, u_0);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym__2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      {
        ATerm j_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_11), not_null(k_11));
            LocalPopChoice(k_6);
          }
        else
          {
            t = j_6;
            t = SSL_addr(not_null(j_11), not_null(k_11));
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
  ATerm v_0 (ATerm t)
  {
    ATerm p_11 = NULL;
    p_11 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), term_i_6);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, v_0, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm w_79 (ATerm), ATerm x_79 (ATerm))
{
  ATerm l_6;
  l_6 = t;
  {
    t = w_79(t);
    t = debug_0(t);
  }
  t = l_6;
  {
    ATerm m_6 = t;
    int n_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_6;
        o_6 = t;
        t = x_79(t);
        t = o_6;
        t = record_success_0(t);
        LocalPopChoice(n_6);
      }
    else
      {
        t = m_6;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_test_4 (ATerm t, ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm))
{
  ATerm v_11 = NULL,w_11 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm y_11 = NULL;
    ATerm p_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL;
        t = c_80(t);
        {
          t = b_80(t);
          {
            x_11 = t;
            if(((v_11 != NULL) && (v_11 != x_11)))
              _fail(x_11);
            else
              v_11 = x_11;
          }
        }
        LocalPopChoice(u_6);
      }
    else
      {
        t = p_6;
        {
          t = term_v_6;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    {
      t = d_80(t);
      {
        y_11 = t;
        {
          if(((w_11 != NULL) && (w_11 != y_11)))
            _fail(y_11);
          else
            w_11 = y_11;
          {
            ATerm w_6 = t;
            int a_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_11 = NULL;
                t = not_null(w_11);
                {
                  z_11 = t;
                  if(((v_11 != NULL) && (v_11 != z_11)))
                    _fail(z_11);
                  else
                    v_11 = z_11;
                }
                LocalPopChoice(a_7);
              }
            else
              {
                t = w_6;
                {
                  t = not_null(v_11);
                  {
                    ATerm z_0 (ATerm t)
                    {
                      t = term_c_7;
                      return(t);
                    }
                    t = debug_1(t, z_0);
                    {
                      t = not_null(w_11);
                      {
                        ATerm a_1 (ATerm t)
                        {
                          t = term_f_7;
                          return(t);
                        }
                        t = debug_1(t, a_1);
                        _fail(t);
                      }
                    }
                  }
                }
              }
          }
        }
      }
    }
    return(t);
  }
  t = do_test_2(t, a_80, w_0);
  return(t);
}
ATerm term_to_tree_test_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = term_g_7;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_j_7;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), term_v_7), term_t_7);
    return(t);
  }
  t = apply_test_4(t, c_1, term_to_tree_0, d_1, i_1);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm e_12 = NULL;
    e_12 = t;
    d_12 :
    if(!(match_int(e_12, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, j_1);
  return(t);
}
ATerm _2 (ATerm t, ATerm f_45 (ATerm), ATerm g_45 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym__2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        ATerm r_12 = NULL,t_12 = NULL;
        ATerm s_12 = NULL;
        t = SSLgetAnnotations(not_null(l_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
        {
          t = not_null(m_12);
          {
            ATerm v_12 = NULL;
            t = f_45(t);
            {
              t_12 = t;
              {
                t = not_null(n_12);
                {
                  ATerm x_12 = NULL;
                  t = g_45(t);
                  {
                    v_12 = t;
                    {
                      ATerm y_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_12), not_null(v_12)), not_null(r_12));
                      {
                        y_12 = t;
                        if(((x_12 != NULL) && (x_12 != y_12)))
                          _fail(y_12);
                        else
                          x_12 = y_12;
                      }
                      t = not_null(x_12);
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
  ATerm l_1 (ATerm t)
  {
    ATerm n_1 (ATerm t)
    {
      t = term_x_7;
      return(t);
    }
    t = debug_1(t, n_1);
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      t = term_z_7;
      return(t);
    }
    t = debug_1(t, o_1);
    return(t);
  }
  t = _2(t, l_1, m_1);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_b_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym__2))
    {
      h_13 = ATgetArgument(g_13, 0);
      i_13 = ATgetArgument(g_13, 1);
      {
        ATerm c_8;
        c_8 = t;
        t = SSL_printnl(not_null(h_13), not_null(i_13));
        t = c_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm d_8;
  d_8 = t;
  {
    ATerm o_13 = NULL,q_13 = NULL;
    ATerm e_8;
    e_8 = t;
    {
      ATerm p_13 = NULL;
      t = e_79(t);
      {
        p_13 = t;
        if(((o_13 != NULL) && (o_13 != p_13)))
          _fail(p_13);
        else
          o_13 = p_13;
      }
    }
    t = e_8;
    {
      ATerm r_13 = NULL;
      r_13 = t;
      if(((q_13 != NULL) && (q_13 != r_13)))
        _fail(r_13);
      else
        q_13 = r_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_13)), not_null(o_13)));
        t = printnl_0(t);
      }
    }
  }
  t = d_8;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm u_79 (ATerm), ATerm v_79 (ATerm))
{
  t = u_79(t);
  {
    ATerm t_1 (ATerm t)
    {
      t = term_f_8;
      return(t);
    }
    t = debug_1(t, t_1);
    {
      t = init_record_0(t);
      {
        t = v_79(t);
        {
          t = report_test_0(t);
          t = check_for_failures_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm term_to_adot_test_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    t = term_k_8;
    return(t);
  }
  t = test_suite_2(t, u_1, term_to_tree_test_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_adot_test_0(t);
  return(t);
}
