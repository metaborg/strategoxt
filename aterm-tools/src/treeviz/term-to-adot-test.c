#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
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
ATerm term_e_8;
ATerm term_d_8;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_a_7;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_h_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_q_4;
ATerm term_j_4;
void init_constant_terms (void)
{
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("  application failed", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("  check failed: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree-test", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_B_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_F_2, term_j_7, term_k_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_s_7);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-adot-test", 0, ATtrue));
}
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm g_65 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm union_1 (ATerm, ATerm u_70 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm));
ATerm foldr_3 (ATerm, ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm p_71 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm map_1 (ATerm, ATerm x_64 (ATerm));
ATerm new_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_51 (ATerm), ATerm x_51 (ATerm));
ATerm at_end_1 (ATerm, ATerm m_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_63 (ATerm));
ATerm if_verbose5_1 (ATerm, ATerm v_77 (ATerm));
ATerm term_to_tree_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm a_59 (ATerm), ATerm b_59 (ATerm));
ATerm apply_and_check_4 (ATerm, ATerm l_59 (ATerm), ATerm m_59 (ATerm), ATerm n_59 (ATerm), ATerm o_59 (ATerm));
ATerm term_to_tree_test_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm n_50 (ATerm), ATerm o_50 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_60 (ATerm));
ATerm test_suite_2 (ATerm, ATerm y_58 (ATerm), ATerm z_58 (ATerm));
ATerm term_to_adot_test_0 (ATerm);
ATerm main_0 (ATerm);
ATerm eq_0 (ATerm t)
{
  ATerm c_0 = NULL,u_0 = NULL,v_0 = NULL;
  c_0 = t;
  b_0 :
  if(match_cons(c_0, sym__2))
    {
      u_0 = ATgetArgument(c_0, 0);
      v_0 = ATgetArgument(c_0, 1);
      if(((u_0 != NULL) && (u_0 != v_0)))
        _fail(v_0);
      else
        u_0 = v_0;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm s_1 = t;
    int t_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_65, _id);
        ;
        LocalPopChoice(t_1);
      }
    else
      {
        t = s_1;
        t = Cons_2(t, _id, y_0);
      }
    return(t);
  }
  t = y_0(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL;
  d_1 = t;
  c_1 :
  if(((ATgetType(d_1) == AT_LIST) && !(ATisEmpty(d_1))))
    {
      e_1 = ATgetFirst((ATermList) d_1);
      f_1 = (ATerm) ATgetNext((ATermList) d_1);
      {
        t = z_70(t);
        {
          ATerm a_0 (ATerm t)
          {
            ATerm i_1 = NULL;
            i_1 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_1), not_null(i_1));
              t = y_70(t);
            }
            return(t);
          }
          t = fetch_1(t, a_0);
        }
        t = not_null(f_1);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm u_70 (ATerm))
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
  o_1 = t;
  n_1 :
  if(match_cons(o_1, sym__2))
    {
      p_1 = ATgetArgument(o_1, 0);
      q_1 = ATgetArgument(o_1, 1);
      {
        t = not_null(p_1);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_1 = t;
            int w_1 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_1);
                ;
                LocalPopChoice(w_1);
              }
            else
              {
                t = v_1;
                {
                  ATerm x_1 = t;
                  int a_2 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_0 (ATerm t)
                      {
                        t = not_null(q_1);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_70, d_0);
                      t = u_1(t);
                      ;
                      LocalPopChoice(a_2);
                    }
                  else
                    {
                      t = x_1;
                      t = Cons_2(t, _id, u_1);
                    }
                }
              }
            return(t);
          }
          t = u_1(t);
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
ATerm crush_3 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm))
{
  ATerm z_1 = NULL;
  ATerm b_2 = NULL;
  z_1 = t;
  {
    ATerm c_2 = NULL;
    ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL;
    t = not_null(z_1);
    {
      c_2 = t;
      {
        t = SSL_explode_term(not_null(c_2));
        {
          e_2 = t;
          y_1 :
          if(match_cons(e_2, sym__2))
            {
              f_2 = ATgetArgument(e_2, 0);
              g_2 = ATgetArgument(e_2, 1);
              if(((b_2 != NULL) && (b_2 != g_2)))
                _fail(g_2);
              else
                b_2 = g_2;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_2);
      t = foldr_3(t, l_70, m_70, n_70);
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm p_71 (ATerm))
{
  ATerm d_2 = t;
  int h_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_71(t);
      ;
      LocalPopChoice(h_2);
    }
  else
    {
      t = d_2;
      {
        ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL;
        o_2 = t;
        n_2 :
        if(((ATgetType(o_2) == AT_LIST) && !(ATisEmpty(o_2))))
          {
            p_2 = ATgetFirst((ATermList) o_2);
            q_2 = (ATerm) ATgetNext((ATermList) o_2);
            {
              ATerm t_2 = NULL,v_2 = NULL;
              ATerm i_2;
              i_2 = t;
              {
                ATerm u_2 = NULL;
                t = not_null(p_2);
                {
                  t = p_71(t);
                  {
                    u_2 = t;
                    if(((t_2 != NULL) && (t_2 != u_2)))
                      _fail(u_2);
                    else
                      t_2 = u_2;
                  }
                }
              }
              t = i_2;
              {
                ATerm w_2 = NULL;
                t = not_null(q_2);
                {
                  t = foldr_3(t, n_71, o_71, p_71);
                  {
                    w_2 = t;
                    if(((v_2 != NULL) && (v_2 != w_2)))
                      _fail(w_2);
                    else
                      v_2 = w_2;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_2), not_null(v_2));
                  t = o_71(t);
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
  ATerm h_3 = NULL;
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
  h_3 = t;
  {
    ATerm m_3 = NULL;
    ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
    t = not_null(h_3);
    {
      m_3 = t;
      {
        t = SSL_explode_term(not_null(m_3));
        {
          o_3 = t;
          d_3 :
          if(match_cons(o_3, sym__2))
            {
              p_3 = ATgetArgument(o_3, 0);
              q_3 = ATgetArgument(o_3, 1);
              e_3 :
              if(match_string(p_3, ""))
                {
                  f_3 :
                  if(((ATgetType(q_3) == AT_LIST) && !(ATisEmpty(q_3))))
                    {
                      r_3 = ATgetFirst((ATermList) q_3);
                      s_3 = (ATerm) ATgetNext((ATermList) q_3);
                      g_3 :
                      if(((ATgetType(s_3) == AT_LIST) && !(ATisEmpty(s_3))))
                        {
                          t_3 = ATgetFirst((ATermList) s_3);
                          u_3 = (ATerm) ATgetNext((ATermList) s_3);
                          {
                            if(((j_3 != NULL) && (j_3 != r_3)))
                              _fail(r_3);
                            else
                              j_3 = r_3;
                            {
                              if(((l_3 != NULL) && (l_3 != t_3)))
                                _fail(t_3);
                              else
                                l_3 = t_3;
                              if(((k_3 != NULL) && (k_3 != u_3)))
                                _fail(u_3);
                              else
                                k_3 = u_3;
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
    t = not_null(l_3);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm e_4 = NULL;
  ATerm g_4 = NULL,h_4 = NULL;
  e_4 = t;
  {
    ATerm i_4 = NULL;
    ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
    t = not_null(e_4);
    {
      i_4 = t;
      {
        t = SSL_explode_term(not_null(i_4));
        {
          k_4 = t;
          b_4 :
          if(match_cons(k_4, sym__2))
            {
              l_4 = ATgetArgument(k_4, 0);
              m_4 = ATgetArgument(k_4, 1);
              c_4 :
              if(match_string(l_4, ""))
                {
                  d_4 :
                  if(((ATgetType(m_4) == AT_LIST) && !(ATisEmpty(m_4))))
                    {
                      n_4 = ATgetFirst((ATermList) m_4);
                      o_4 = (ATerm) ATgetNext((ATermList) m_4);
                      {
                        if(((h_4 != NULL) && (h_4 != n_4)))
                          _fail(n_4);
                        else
                          h_4 = n_4;
                        if(((g_4 != NULL) && (g_4 != o_4)))
                          _fail(o_4);
                        else
                          g_4 = o_4;
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
    t = not_null(h_4);
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm s_4 (ATerm t)
  {
    ATerm j_2 = t;
    int k_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(k_2);
      }
    else
      {
        t = j_2;
        t = Cons_2(t, x_64, s_4);
      }
    return(t);
  }
  t = s_4(t);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym__2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      {
        ATerm l_2;
        l_2 = t;
        {
          ATerm m_2 = t;
          int r_2 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_4), not_null(x_4));
              ;
              LocalPopChoice(r_2);
            }
          else
            {
              t = m_2;
              t = SSL_gtr(not_null(w_4), not_null(x_4));
            }
        }
        t = l_2;
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
  ATerm d_5 = NULL;
  ATerm s_2 = t;
  int x_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
      e_5 = t;
      c_5 :
      if(match_cons(e_5, sym__2))
        {
          f_5 = ATgetArgument(e_5, 0);
          g_5 = ATgetArgument(e_5, 1);
          {
            if(((d_5 != NULL) && (d_5 != f_5)))
              _fail(f_5);
            else
              d_5 = f_5;
            if(((d_5 != NULL) && (d_5 != g_5)))
              _fail(g_5);
            else
              d_5 = g_5;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(x_2);
    }
  else
    {
      t = s_2;
      t = gt_0(t);
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
  ATerm y_2;
  y_2 = t;
  {
    ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
    n_5 = t;
    j_5 :
    if(match_cons(n_5, sym__3))
      {
        o_5 = ATgetArgument(n_5, 0);
        p_5 = ATgetArgument(n_5, 1);
        q_5 = ATgetArgument(n_5, 2);
        {
          if(((k_5 != NULL) && (k_5 != o_5)))
            _fail(o_5);
          else
            k_5 = o_5;
          {
            if(((l_5 != NULL) && (l_5 != p_5)))
              _fail(p_5);
            else
              l_5 = p_5;
            {
              if(((m_5 != NULL) && (m_5 != q_5)))
                _fail(q_5);
              else
                m_5 = q_5;
              t = SSL_table_put(not_null(k_5), not_null(l_5), not_null(m_5));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_2;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_5 = NULL;
  t_5 = t;
  t = SSL_implode_string(not_null(t_5));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_2 = t;
  int a_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(a_3);
    }
  else
    {
      t = z_2;
      {
        ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
        y_5 = t;
        x_5 :
        if(((ATgetType(y_5) == AT_LIST) && !(ATisEmpty(y_5))))
          {
            z_5 = ATgetFirst((ATermList) y_5);
            a_6 = (ATerm) ATgetNext((ATermList) y_5);
            {
              t = not_null(z_5);
              {
                ATerm e_0 (ATerm t)
                {
                  t = not_null(a_6);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm k_6 = NULL;
  ATerm m_6 = NULL;
  k_6 = t;
  {
    ATerm n_6 = NULL;
    ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
    t = not_null(k_6);
    {
      n_6 = t;
      {
        t = SSL_explode_term(not_null(n_6));
        {
          p_6 = t;
          i_6 :
          if(match_cons(p_6, sym__2))
            {
              q_6 = ATgetArgument(p_6, 0);
              r_6 = ATgetArgument(p_6, 1);
              j_6 :
              if(match_string(q_6, ""))
                {
                  if(((m_6 != NULL) && (m_6 != r_6)))
                    _fail(r_6);
                  else
                    m_6 = r_6;
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
      t = not_null(m_6);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm z_6 = NULL;
  z_6 = t;
  y_6 :
  if(((ATgetType(z_6) == AT_LIST) && ATisEmpty(z_6)))
    {
      {
        ATerm b_7 = NULL,d_7 = NULL;
        ATerm b_3;
        b_3 = t;
        {
          ATerm c_7 = NULL;
          t = SSLgetAnnotations(not_null(z_6));
          {
            c_7 = t;
            if(((b_7 != NULL) && (b_7 != c_7)))
              _fail(c_7);
            else
              b_7 = c_7;
          }
        }
        t = b_3;
        {
          ATerm e_7 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_7));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm w_51 (ATerm), ATerm x_51 (ATerm))
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  o_7 = t;
  n_7 :
  if(((ATgetType(o_7) == AT_LIST) && !(ATisEmpty(o_7))))
    {
      p_7 = ATgetFirst((ATermList) o_7);
      q_7 = (ATerm) ATgetNext((ATermList) o_7);
      {
        ATerm u_7 = NULL,w_7 = NULL;
        ATerm v_7 = NULL;
        t = SSLgetAnnotations(not_null(o_7));
        {
          v_7 = t;
          if(((u_7 != NULL) && (u_7 != v_7)))
            _fail(v_7);
          else
            u_7 = v_7;
        }
        {
          t = not_null(p_7);
          {
            ATerm y_7 = NULL;
            t = w_51(t);
            {
              w_7 = t;
              {
                t = not_null(q_7);
                {
                  ATerm a_8 = NULL;
                  t = x_51(t);
                  {
                    y_7 = t;
                    {
                      ATerm b_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_7)), not_null(w_7)), not_null(u_7));
                      {
                        b_8 = t;
                        if(((a_8 != NULL) && (a_8 != b_8)))
                          _fail(b_8);
                        else
                          a_8 = b_8;
                      }
                      t = not_null(a_8);
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
ATerm at_end_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm h_8 (ATerm t)
  {
    ATerm c_3 = t;
    int i_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_8);
        ;
        LocalPopChoice(i_3);
      }
    else
      {
        t = c_3;
        {
          t = Nil_0(t);
          t = m_65(t);
        }
      }
    return(t);
  }
  t = h_8(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym__2))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      {
        t = not_null(l_8);
        {
          ATerm f_0 (ATerm t)
          {
            t = not_null(m_8);
            return(t);
          }
          t = at_end_1(t, f_0);
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
  ATerm n_3 = t;
  int v_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(v_3);
    }
  else
    {
      t = n_3;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm r_8 = NULL;
  r_8 = t;
  t = SSL_explode_string(not_null(r_8));
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
  ATerm v_8 = NULL;
  v_8 = t;
  t = SSL_is_string(not_null(v_8));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm w_3 = t;
  int x_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(x_3);
    }
  else
    {
      t = w_3;
      {
        ATerm y_3 = t;
        int z_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, g_0);
            ;
            LocalPopChoice(z_3);
          }
        else
          {
            t = y_3;
            {
              ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
              e_9 = t;
              d_9 :
              if(match_cons(e_9, sym_Path_1))
                {
                  f_9 = ATgetArgument(e_9, 0);
                  t = not_null(f_9);
                }
              else
                {
                  if(match_cons(e_9, sym_Var_1))
                    {
                      f_9 = ATgetArgument(e_9, 0);
                      {
                        t = not_null(f_9);
                        {
                          ATerm a_4 = t;
                          int f_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(f_4);
                            }
                          else
                            {
                              t = a_4;
                              {
                                ATerm h_0 (ATerm t)
                                {
                                  t = term_j_4;
                                  return(t);
                                }
                                t = debug_1(t, h_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_9, sym_Prefix_2))
                        {
                          f_9 = ATgetArgument(e_9, 0);
                          g_9 = ATgetArgument(e_9, 1);
                          {
                            ATerm l_9 = NULL,n_9 = NULL;
                            ATerm p_4;
                            p_4 = t;
                            {
                              ATerm m_9 = NULL;
                              t = not_null(f_9);
                              {
                                t = eval_config_0(t);
                                {
                                  m_9 = t;
                                  if(((l_9 != NULL) && (l_9 != m_9)))
                                    _fail(m_9);
                                  else
                                    l_9 = m_9;
                                }
                              }
                            }
                            t = p_4;
                            {
                              ATerm o_9 = NULL;
                              t = not_null(g_9);
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
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(n_9));
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
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  v_9 :
  if(match_cons(w_9, sym__2))
    {
      x_9 = ATgetArgument(w_9, 0);
      y_9 = ATgetArgument(w_9, 1);
      t = SSL_table_get(not_null(x_9), not_null(y_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm e_10 = NULL;
  e_10 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_4, not_null(e_10));
    {
      t = table_get_0(t);
      {
        ATerm i_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_4;
            r_4 = t;
            {
              ATerm g_10 = NULL;
              ATerm h_10 = NULL;
              h_10 = t;
              if(((g_10 != NULL) && (g_10 != h_10)))
                _fail(h_10);
              else
                g_10 = h_10;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_4, not_null(e_10), not_null(g_10));
                t = table_put_0(t);
              }
            }
            t = r_4;
          }
          return(t);
        }
        t = try_1(t, i_0);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm t_4 = t;
  int y_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_63(t);
      ;
      LocalPopChoice(y_4);
    }
  else
    {
      t = t_4;
      {
      }
    }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm j_0 (ATerm t)
  {
    ATerm z_4;
    z_4 = t;
    {
      ATerm l_10 = NULL;
      ATerm m_10 = NULL;
      t = term_a_5;
      {
        t = get_config_0(t);
        {
          m_10 = t;
          if(((l_10 != NULL) && (l_10 != m_10)))
            _fail(m_10);
          else
            l_10 = m_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), term_b_5);
        t = geq_0(t);
      }
    }
    t = z_4;
    t = v_77(t);
    return(t);
  }
  t = try_1(t, j_0);
  return(t);
}
ATerm term_to_tree_0 (ATerm t)
{
  ATerm w_10 = NULL,y_10 = NULL;
  ATerm k_0 (ATerm t)
  {
    ATerm l_0 (ATerm t)
    {
      t = term_h_5;
      return(t);
    }
    t = debug_1(t, l_0);
    return(t);
  }
  t = if_verbose5_1(t, k_0);
  {
    ATerm i_5;
    i_5 = t;
    {
      ATerm x_10 = NULL;
      t = new_0(t);
      {
        x_10 = t;
        if(((w_10 != NULL) && (w_10 != x_10)))
          _fail(x_10);
        else
          w_10 = x_10;
      }
    }
    t = i_5;
    {
      ATerm z_10 = NULL;
      z_10 = t;
      if(((y_10 != NULL) && (y_10 != z_10)))
        _fail(z_10);
      else
        y_10 = z_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_10), not_null(y_10));
        {
          ATerm o_11 (ATerm t)
          {
            ATerm i_11 = NULL,k_11 = NULL;
            ATerm m_0 (ATerm t)
            {
              ATerm r_5 = t;
              int s_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_0 (ATerm t)
                  {
                    ATerm a_11 = NULL,c_11 = NULL;
                    ATerm u_5;
                    u_5 = t;
                    {
                      ATerm b_11 = NULL;
                      t = new_0(t);
                      {
                        b_11 = t;
                        if(((a_11 != NULL) && (a_11 != b_11)))
                          _fail(b_11);
                        else
                          a_11 = b_11;
                      }
                    }
                    t = u_5;
                    {
                      ATerm d_11 = NULL;
                      d_11 = t;
                      if(((c_11 != NULL) && (c_11 != d_11)))
                        _fail(d_11);
                      else
                        c_11 = d_11;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(c_11));
                    }
                    return(t);
                  }
                  t = map_1(t, n_0);
                  ;
                  LocalPopChoice(s_5);
                }
              else
                {
                  t = r_5;
                  {
                    ATerm o_0 (ATerm t)
                    {
                      ATerm e_11 = NULL,g_11 = NULL;
                      ATerm v_5;
                      v_5 = t;
                      {
                        ATerm f_11 = NULL;
                        t = new_0(t);
                        {
                          f_11 = t;
                          if(((e_11 != NULL) && (e_11 != f_11)))
                            _fail(f_11);
                          else
                            e_11 = f_11;
                        }
                      }
                      t = v_5;
                      {
                        ATerm h_11 = NULL;
                        h_11 = t;
                        if(((g_11 != NULL) && (g_11 != h_11)))
                          _fail(h_11);
                        else
                          g_11 = h_11;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_11), not_null(g_11));
                      }
                      return(t);
                    }
                    t = _all(t, o_0);
                  }
                }
              return(t);
            }
            t = _2(t, _id, m_0);
            {
              ATerm w_5;
              w_5 = t;
              {
                ATerm j_11 = NULL;
                ATerm p_0 (ATerm t)
                {
                  ATerm b_6 = t;
                  int c_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = map_1(t, Fst_0);
                      ;
                      LocalPopChoice(c_6);
                    }
                  else
                    {
                      t = b_6;
                      t = _all(t, Fst_0);
                    }
                  return(t);
                }
                t = _2(t, _id, p_0);
                {
                  j_11 = t;
                  if(((i_11 != NULL) && (i_11 != j_11)))
                    _fail(j_11);
                  else
                    i_11 = j_11;
                }
              }
              t = w_5;
              {
                ATerm l_11 = NULL;
                t = Snd_0(t);
                {
                  ATerm d_6 = t;
                  int e_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = foldr_3(t, q_0, union_0, o_11);
                      ;
                      LocalPopChoice(e_6);
                    }
                  else
                    {
                      t = d_6;
                      {
                        ATerm r_0 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = crush_3(t, r_0, union_0, o_11);
                      }
                    }
                  {
                    l_11 = t;
                    if(((k_11 != NULL) && (k_11 != l_11)))
                      _fail(l_11);
                    else
                      k_11 = l_11;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(k_11)), not_null(i_11));
              }
            }
            return(t);
          }
          t = o_11(t);
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm f_6;
  f_6 = t;
  {
    ATerm w_11 = NULL;
    ATerm x_11 = NULL;
    x_11 = t;
    if(((w_11 != NULL) && (w_11 != x_11)))
      _fail(x_11);
    else
      w_11 = x_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_6, (ATerm) ATinsert(ATempty, not_null(w_11)));
      t = printnl_0(t);
    }
  }
  t = f_6;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm a_12 = NULL;
    a_12 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_12), term_h_6);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, s_0);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym__2))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      {
        ATerm l_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_12), not_null(h_12));
            ;
            LocalPopChoice(o_6);
          }
        else
          {
            t = l_6;
            t = SSL_addr(not_null(g_12), not_null(h_12));
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
  ATerm t_0 (ATerm t)
  {
    ATerm m_12 = NULL;
    m_12 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), term_h_6);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, t_0, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm a_59 (ATerm), ATerm b_59 (ATerm))
{
  ATerm s_6;
  s_6 = t;
  {
    t = a_59(t);
    t = debug_0(t);
  }
  t = s_6;
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_6;
        v_6 = t;
        t = b_59(t);
        t = v_6;
        t = record_success_0(t);
        ;
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_and_check_4 (ATerm t, ATerm l_59 (ATerm), ATerm m_59 (ATerm), ATerm n_59 (ATerm), ATerm o_59 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_59(t);
        t = m_59(t);
        ;
        LocalPopChoice(x_6);
      }
    else
      {
        t = w_6;
        {
          t = term_a_7;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    {
      ATerm f_7 = t;
      int g_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_59(t);
          ;
          LocalPopChoice(g_7);
        }
      else
        {
          t = f_7;
          {
            ATerm x_0 (ATerm t)
            {
              t = term_h_7;
              return(t);
            }
            t = debug_1(t, x_0);
            _fail(t);
          }
        }
    }
    return(t);
  }
  t = do_test_2(t, l_59, w_0);
  return(t);
}
ATerm term_to_tree_test_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  ATerm z_0 (ATerm t)
  {
    t = term_i_7;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    t = term_l_7;
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
    d_13 = t;
    q_12 :
    if(((ATgetType(d_13) == AT_LIST) && !(ATisEmpty(d_13))))
      {
        e_13 = ATgetFirst((ATermList) d_13);
        j_13 = (ATerm) ATgetNext((ATermList) d_13);
        r_12 :
        if(match_cons(e_13, sym__2))
          {
            f_13 = ATgetArgument(e_13, 0);
            g_13 = ATgetArgument(e_13, 1);
            s_12 :
            if(match_cons(g_13, sym_F_2))
              {
                h_13 = ATgetArgument(g_13, 0);
                i_13 = ATgetArgument(g_13, 1);
                t_12 :
                if(((ATgetType(j_13) == AT_LIST) && !(ATisEmpty(j_13))))
                  {
                    k_13 = ATgetFirst((ATermList) j_13);
                    n_13 = (ATerm) ATgetNext((ATermList) j_13);
                    u_12 :
                    if(match_cons(k_13, sym__2))
                      {
                        l_13 = ATgetArgument(k_13, 0);
                        m_13 = ATgetArgument(k_13, 1);
                        v_12 :
                        if(match_cons(m_13, sym_B_0))
                          {
                            w_12 :
                            if(((ATgetType(n_13) == AT_LIST) && !(ATisEmpty(n_13))))
                              {
                                o_13 = ATgetFirst((ATermList) n_13);
                                r_13 = (ATerm) ATgetNext((ATermList) n_13);
                                x_12 :
                                if(match_cons(o_13, sym__2))
                                  {
                                    p_13 = ATgetArgument(o_13, 0);
                                    q_13 = ATgetArgument(o_13, 1);
                                    y_12 :
                                    if(match_cons(q_13, sym_C_0))
                                      {
                                        z_12 :
                                        if(((ATgetType(r_13) == AT_LIST) && ATisEmpty(r_13)))
                                          {
                                            {
                                              if(((a_13 != NULL) && (a_13 != f_13)))
                                                _fail(f_13);
                                              else
                                                a_13 = f_13;
                                              {
                                                if(((b_13 != NULL) && (b_13 != h_13)))
                                                  _fail(h_13);
                                                else
                                                  b_13 = h_13;
                                                {
                                                  if(((c_13 != NULL) && (c_13 != i_13)))
                                                    _fail(i_13);
                                                  else
                                                    c_13 = i_13;
                                                  {
                                                    if(((b_13 != NULL) && (b_13 != l_13)))
                                                      _fail(l_13);
                                                    else
                                                      b_13 = l_13;
                                                    if(((c_13 != NULL) && (c_13 != p_13)))
                                                      _fail(p_13);
                                                    else
                                                      c_13 = p_13;
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
  t = apply_and_check_4(t, z_0, term_to_tree_0, a_1, b_1);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm u_13 = NULL;
    u_13 = t;
    t_13 :
    if(!(match_int(u_13, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, g_1);
  return(t);
}
ATerm _2 (ATerm t, ATerm n_50 (ATerm), ATerm o_50 (ATerm))
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym__2))
    {
      c_14 = ATgetArgument(b_14, 0);
      d_14 = ATgetArgument(b_14, 1);
      {
        ATerm h_14 = NULL,j_14 = NULL;
        ATerm i_14 = NULL;
        t = SSLgetAnnotations(not_null(b_14));
        {
          i_14 = t;
          if(((h_14 != NULL) && (h_14 != i_14)))
            _fail(i_14);
          else
            h_14 = i_14;
        }
        {
          t = not_null(c_14);
          {
            ATerm l_14 = NULL;
            t = n_50(t);
            {
              j_14 = t;
              {
                t = not_null(d_14);
                {
                  ATerm n_14 = NULL;
                  t = o_50(t);
                  {
                    l_14 = t;
                    {
                      ATerm o_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_14), not_null(l_14)), not_null(h_14));
                      {
                        o_14 = t;
                        if(((n_14 != NULL) && (n_14 != o_14)))
                          _fail(o_14);
                        else
                          n_14 = o_14;
                      }
                      t = not_null(n_14);
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
  ATerm h_1 (ATerm t)
  {
    ATerm k_1 (ATerm t)
    {
      t = term_m_7;
      return(t);
    }
    t = debug_1(t, k_1);
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = term_r_7;
      return(t);
    }
    t = debug_1(t, l_1);
    return(t);
  }
  t = _2(t, h_1, j_1);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        ATerm x_7;
        x_7 = t;
        t = SSL_printnl(not_null(x_14), not_null(y_14));
        t = x_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_60 (ATerm))
{
  ATerm z_7;
  z_7 = t;
  {
    ATerm e_15 = NULL,g_15 = NULL;
    ATerm c_8;
    c_8 = t;
    {
      ATerm f_15 = NULL;
      t = d_60(t);
      {
        f_15 = t;
        if(((e_15 != NULL) && (e_15 != f_15)))
          _fail(f_15);
        else
          e_15 = f_15;
      }
    }
    t = c_8;
    {
      ATerm h_15 = NULL;
      h_15 = t;
      if(((g_15 != NULL) && (g_15 != h_15)))
        _fail(h_15);
      else
        g_15 = h_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_15)), not_null(e_15)));
        t = printnl_0(t);
      }
    }
  }
  t = z_7;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm y_58 (ATerm), ATerm z_58 (ATerm))
{
  t = y_58(t);
  {
    ATerm m_1 (ATerm t)
    {
      t = term_d_8;
      return(t);
    }
    t = debug_1(t, m_1);
    {
      t = init_record_0(t);
      {
        t = z_58(t);
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
  ATerm r_1 (ATerm t)
  {
    t = term_e_8;
    return(t);
  }
  t = test_suite_2(t, r_1, term_to_tree_test_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = term_to_adot_test_0(t);
  return(t);
}
