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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
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
Symbol sym_Scopes_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_p_53;
ATerm term_r_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_h_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_b_51;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_l_50;
ATerm term_g_50;
ATerm term_y_49;
ATerm term_r_49;
ATerm term_j_49;
ATerm term_f_49;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_p_47;
ATerm term_s_46;
ATerm term_n_46;
ATerm term_f_46;
ATerm term_g_44;
ATerm term_z_43;
ATerm term_q_43;
ATerm term_v_39;
ATerm term_q_39;
ATerm term_j_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_n_36;
ATerm term_n_35;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_a_33;
ATerm term_r_32;
ATerm term_s_30;
ATerm term_o_30;
ATerm term_t_29;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_r_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
void init_constant_terms (void)
{
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym_Sort_2, term_c_39, (ATerm) ATempty);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_39);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_30);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym__3, term_p_47, term_l_50, term_c_19);
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_118 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm v_4 (ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm o_5 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm spaste_1_0 (ATerm v_117 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm);
ATerm Let_2_0 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm DistBinding_2_0 (ATerm f_132 (ATerm), ATerm g_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm RnBinding_2_0 (ATerm z_131 (ATerm), ATerm a_132 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm n_132 (ATerm), ATerm);
ATerm rename_4_0 (ATerm u_131 (ATerm (ATerm), ATerm), ATerm v_131 (ATerm), ATerm w_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_131 (ATerm (ATerm), ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm tpaste_1_0 (ATerm r_117 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm l_106 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm u_117 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm f_127 (ATerm), ATerm);
ATerm diff_1_0 (ATerm a_127 (ATerm), ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm);
ATerm for_3_0 (ATerm g_136 (ATerm), ATerm h_136 (ATerm), ATerm i_136 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm n_8 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm m_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm free_vars_3_0 (ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm z_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm u_103 (ATerm), ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm j_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm y_10 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm occurrences_1_0 (ATerm m_127 (ATerm), ATerm);
ATerm local_inlinable_1_0 (ATerm w_116 (ATerm), ATerm);
ATerm m_11 (ATerm);
ATerm UndefineSDef_0_0 (ATerm);
ATerm table_pop_rm_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_131 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_131 (ATerm), ATerm);
ATerm scope_2_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm);
ATerm w_11 (ATerm);
ATerm y_11 (ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm assert_1_0 (ATerm e_131 (ATerm), ATerm);
ATerm k_12 (ATerm);
ATerm l_12 (ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm q_12 (ATerm);
ATerm term_size_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm);
ATerm Match_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm);
ATerm Build_1_0 (ATerm m_107 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm d_107 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm);
ATerm r_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm d_13 (ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm), ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm m_50 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm v_119 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm i_125 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm i_51 (ATerm y_50, ATerm);
ATerm conc_0_0 (ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm b_14 (ATerm);
ATerm g_14 (ATerm);
ATerm h_14 (ATerm);
ATerm i_14 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm k_14 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm o_135 (ATerm), ATerm);
ATerm downup_1_0 (ATerm t_118 (ATerm), ATerm);
ATerm o_14 (ATerm);
ATerm s_14 (ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm r_102 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm w_102 (ATerm), ATerm);
ATerm _2_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm f_146 (ATerm), ATerm);
ATerm x_14 (ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_140 (ATerm), ATerm);
ATerm m_63 (ATerm g_63, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_15 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm c_125 (ATerm), ATerm);
ATerm debug_1_0 (ATerm d_146 (ATerm), ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_139 (ATerm), ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm b_16 (ATerm);
ATerm h_16 (ATerm);
ATerm i_16 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_16 (ATerm);
ATerm r_16 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_139 (ATerm), ATerm);
ATerm s_16 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_16 (ATerm);
ATerm need_help_1_0 (ATerm s_141 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_124 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm h_115 (ATerm), ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm y_16 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm i_115 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_17 (ATerm);
ATerm d_17 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm m_17 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_143 (ATerm), ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm s_17 (ATerm);
ATerm t_17 (ATerm);
ATerm parse_options_1_0 (ATerm u_143 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm);
ATerm y_17 (ATerm);
ATerm n_18 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm iowrap_3_0 (ATerm d_141 (ATerm), ATerm e_141 (ATerm), ATerm f_141 (ATerm), ATerm);
ATerm t_18 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
  m_0 = t;
  t = term_c_19;
  t = whoami_0_0(t);
  o_0 = t;
  t = term_d_19;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_19), o_0), term_e_19);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_h_19;
  r_0 = t;
  t = SSL_exit(r_0);
  t = m_0;
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      e_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_1)), (ATerm) ATmakeAppl(sym_Seq_2, e_1, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, g_1)))));
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      h_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_1)), (ATerm) ATmakeAppl(sym_Seq_2, h_1, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, i_1)))));
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,t_0 = NULL,v_0 = NULL,w_0 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if(match_cons(i_19, sym_SVar_1))
        {
          o_1 = ATgetArgument(i_19, 0);
        }
      else
        _fail(t);
      p_1 = ATgetArgument(t, 1);
      q_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_1), (ATerm)ATempty, (ATerm) ATempty);
  t_0 = t;
  t = term_j_19;
  v_0 = t;
  t = SSL_table_get(v_0, t_0);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_0 = ATgetFirst((ATermList) t);
      {
        ATerm k_19 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_0;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_19) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_1), p_1, q_1);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm s_1 = NULL,u_1 = NULL,z_0 = NULL,b_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      if(match_cons(m_19, sym_SVar_1))
        {
          ATerm q_19 = ATgetArgument(m_19, 0);
        }
      else
        _fail(t);
      {
        ATerm o_19 = ATgetArgument(t, 1);
        if(((ATgetType(o_19) != AT_LIST) || !(ATisEmpty(o_19))))
          _fail(t);
      }
      {
        ATerm p_19 = ATgetArgument(t, 2);
        if(((ATgetType(p_19) != AT_LIST) || !(ATisEmpty(p_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_r_19;
  z_0 = t;
  t = SSL_table_get(z_0, s_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_1 = ATgetFirst((ATermList) t);
      {
        ATerm s_19 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_1;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_1;
  t = strename_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm r_118 (ATerm), ATerm t)
{
  t = r_118(t);
  {
    ATerm l_4 (ATerm t)
    {
      t = topdown_1_0(r_118, t);
      return(t);
    }
    t = SRTS_all(l_4, t);
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm m_2 = NULL,o_2 = NULL,p_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,a_3 = NULL,c_3 = NULL;
  s_2 = t;
  if(match_cons(t, sym__2))
    {
      t_2 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_2;
  if(match_cons(t, sym_VarDec_2))
    {
      u_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_2;
  if(match_cons(t, sym_FunType_2))
    {
      w_2 = ATgetArgument(t, 0);
      {
        ATerm u_19 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_19 = ATgetFirst((ATermList) t);
      a_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_3;
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_19 = ATgetFirst((ATermList) t);
            ATerm z_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_19);
        t = c_3;
        if(match_cons(t, sym_CallT_3))
          {
            m_2 = ATgetArgument(t, 0);
            p_2 = ATgetArgument(t, 1);
            r_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = m_2;
        if(match_cons(t, sym_SVar_1))
          {
            o_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_2), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_a_20, o_2));
        t = assert_1_0(n_4, t);
        t = s_2;
      }
    else
      {
        t = w_19;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_2), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_b_20, c_3));
        t = assert_1_0(p_4, t);
        t = s_2;
      }
  }
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm g_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      if(((ATgetType(c_20) != AT_LIST) || !(ATisEmpty(c_20))))
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) != AT_LIST) || !(ATisEmpty(d_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,p_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_20 = ATgetArgument(t, 0);
      if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
        {
          m_3 = ATgetFirst((ATermList) e_20);
          p_3 = (ATerm) ATgetNext((ATermList) e_20);
        }
      else
        _fail(t);
      {
        ATerm f_20 = ATgetArgument(t, 1);
        if(((ATgetType(f_20) == AT_LIST) && !(ATisEmpty(f_20))))
          {
            n_3 = ATgetFirst((ATermList) f_20);
            r_3 = (ATerm) ATgetNext((ATermList) f_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_3, n_3), (ATerm) ATmakeAppl(sym__2, p_3, r_3));
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_3), s_3);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          ;
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          t = SubsArgCall2_0_0(t);
        }
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
  ATerm u_4 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((j_3 != NULL) && (j_3 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_3 = ATgetArgument(t, 0);
          if(((k_3 != NULL) && (k_3 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_3 = ATgetArgument(t, 1);
          if(((l_3 != NULL) && (l_3 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            l_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_3), not_null(k_3));
      t = genzip_4_0(g_5, i_5, j_5, substitute_arg_0_0, t);
      t = not_null(l_3);
      t = topdown_1_0(o_5, t);
      return(t);
    }
    t = scope_2_0(v_4, f_5, t);
    return(t);
  }
  t = scope_2_0(q_4, u_4, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_20 = ATgetArgument(t, 0);
      if(((ATgetType(k_20) != AT_LIST) || !(ATisEmpty(k_20))))
        _fail(t);
      {
        ATerm l_20 = ATgetArgument(t, 1);
        if(((ATgetType(l_20) != AT_LIST) || !(ATisEmpty(l_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm x_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
        {
          x_4 = ATgetFirst((ATermList) m_20);
          a_5 = (ATerm) ATgetNext((ATermList) m_20);
        }
      else
        _fail(t);
      {
        ATerm n_20 = ATgetArgument(t, 1);
        if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
          {
            z_4 = ATgetFirst((ATermList) n_20);
            b_5 = (ATerm) ATgetNext((ATermList) n_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_4, z_4), (ATerm) ATmakeAppl(sym__2, a_5, b_5));
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL;
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_5), d_5);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm h_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL;
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5;
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            k_5 = ATgetArgument(t, 1);
            l_5 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(p_20);
        t = (ATerm) ATmakeAppl(sym_SDef_3, n_5, k_5, l_5);
      }
    else
      {
        t = o_20;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm r_20 = ATgetArgument(t, 0);
            k_5 = ATgetArgument(t, 1);
            l_5 = ATgetArgument(t, 2);
            m_5 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, n_5, k_5, l_5, m_5);
      }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_20 = ATgetArgument(t, 0);
      if(((ATgetType(s_20) != AT_LIST) || !(ATisEmpty(s_20))))
        _fail(t);
      {
        ATerm t_20 = ATgetArgument(t, 1);
        if(((ATgetType(t_20) != AT_LIST) || !(ATisEmpty(t_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm a_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      if(((ATgetType(u_20) == AT_LIST) && !(ATisEmpty(u_20))))
        {
          a_6 = ATgetFirst((ATermList) u_20);
          f_6 = (ATerm) ATgetNext((ATermList) u_20);
        }
      else
        _fail(t);
      {
        ATerm v_20 = ATgetArgument(t, 1);
        if(((ATgetType(v_20) == AT_LIST) && !(ATisEmpty(v_20))))
          {
            e_6 = ATgetFirst((ATermList) v_20);
            g_6 = (ATerm) ATgetNext((ATermList) v_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_6, e_6), (ATerm) ATmakeAppl(sym__2, f_6, g_6));
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      h_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_6), h_6);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm l_6 = NULL,p_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym__2))
    {
      l_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_6);
      }
    else
      {
        t = w_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_20 = ATgetArgument(t, 0);
            p_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_6, p_6);
      }
  }
  return(t);
}
ATerm j_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      if(((ATgetType(a_21) != AT_LIST) || !(ATisEmpty(a_21))))
        _fail(t);
      {
        ATerm b_21 = ATgetArgument(t, 1);
        if(((ATgetType(b_21) != AT_LIST) || !(ATisEmpty(b_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL,o_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      if(((ATgetType(c_21) == AT_LIST) && !(ATisEmpty(c_21))))
        {
          d_7 = ATgetFirst((ATermList) c_21);
          o_8 = (ATerm) ATgetNext((ATermList) c_21);
        }
      else
        _fail(t);
      {
        ATerm d_21 = ATgetArgument(t, 1);
        if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
          {
            f_7 = ATgetFirst((ATermList) d_21);
            q_8 = (ATerm) ATgetNext((ATermList) d_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_7, f_7), (ATerm) ATmakeAppl(sym__2, o_8, q_8));
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm a_9 = NULL,c_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_9), a_9);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm o_9 = NULL,a_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      o_9 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_10);
      }
    else
      {
        t = e_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_21 = ATgetArgument(t, 0);
            a_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_10, a_10);
      }
  }
  return(t);
}
ATerm u_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_21 = ATgetArgument(t, 0);
      if(((ATgetType(i_21) != AT_LIST) || !(ATisEmpty(i_21))))
        _fail(t);
      {
        ATerm j_21 = ATgetArgument(t, 1);
        if(((ATgetType(j_21) != AT_LIST) || !(ATisEmpty(j_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm q_11 = NULL,s_11 = NULL,z_11 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_21 = ATgetArgument(t, 0);
      if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
        {
          q_11 = ATgetFirst((ATermList) k_21);
          z_11 = (ATerm) ATgetNext((ATermList) k_21);
        }
      else
        _fail(t);
      {
        ATerm l_21 = ATgetArgument(t, 1);
        if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
          {
            s_11 = ATgetFirst((ATermList) l_21);
            g_12 = (ATerm) ATgetNext((ATermList) l_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_11, s_11), (ATerm) ATmakeAppl(sym__2, z_11, g_12));
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm p_12 = NULL,i_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_13), p_12);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm k_13 = NULL,n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      k_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_13;
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_13);
      }
    else
      {
        t = m_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm p_21 = ATgetArgument(t, 0);
            n_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_13, n_13);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm v_117 (ATerm), ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_5 (ATerm t)
      {
        ATerm d_1 = NULL,m_1 = NULL;
        d_1 = t;
        t = v_117(t);
        m_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_1, m_1);
        t = genzip_4_0(q_5, s_5, t_5, u_5, t);
        return(t);
      }
      t = Let_2_0(p_5, _id, t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_5 (ATerm t)
            {
              ATerm x_1 = NULL,z_1 = NULL;
              x_1 = t;
              t = v_117(t);
              z_1 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_1, z_1);
              t = genzip_4_0(w_5, x_5, y_5, z_5, t);
              return(t);
            }
            t = SDef_3_0(_id, v_5, _id, t);
            ;
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            {
              ATerm u_21 = t;
              int v_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_6 (ATerm t)
                  {
                    ATerm c_2 = NULL,e_2 = NULL;
                    c_2 = t;
                    t = v_117(t);
                    e_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_2, e_2);
                    t = genzip_4_0(j_6, k_6, m_6, o_6, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, d_6, _id, _id, t);
                  ;
                  LocalPopChoice(v_21);
                }
              else
                {
                  t = u_21;
                  {
                    ATerm w_21 = t;
                    int x_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_6 (ATerm t)
                        {
                          ATerm i_2 = NULL,l_2 = NULL;
                          i_2 = t;
                          t = v_117(t);
                          l_2 = t;
                          t = (ATerm) ATmakeAppl(sym__2, i_2, l_2);
                          t = genzip_4_0(u_6, v_6, x_6, y_6, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, t_6, _id, _id, t);
                        ;
                        LocalPopChoice(x_21);
                      }
                    else
                      {
                        t = w_21;
                        {
                          ATerm z_6 (ATerm t)
                          {
                            ATerm v_13 = NULL;
                            t = v_117(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                v_13 = ATgetFirst((ATermList) t);
                                {
                                  ATerm y_21 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = v_13;
                            return(t);
                          }
                          t = Rec_2_0(z_6, _id, t);
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
ATerm Rec_2_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,s_0 = NULL,u_0 = NULL;
  f_14 = t;
  if(match_cons(t, sym_Rec_2))
    {
      x_13 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_14);
  w_13 = t;
  t = x_13;
  t = b_108(t);
  d_14 = t;
  t = c_14;
  t = c_108(t);
  e_14 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, d_14, e_14);
  s_0 = t;
  t = SSLsetAnnotations(s_0, w_13);
  return(t);
}
ATerm SDef_3_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm t)
{
  ATerm j_14 = NULL,m_14 = NULL,n_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,k_15 = NULL,r_15 = NULL,x_0 = NULL,y_0 = NULL;
  r_15 = t;
  if(match_cons(t, sym_SDef_3))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      p_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_15);
  j_14 = t;
  t = m_14;
  t = t_109(t);
  q_14 = t;
  t = n_14;
  t = u_109(t);
  r_14 = t;
  t = p_14;
  t = v_109(t);
  k_15 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, q_14, r_14, k_15);
  x_0 = t;
  t = SSLsetAnnotations(x_0, j_14);
  return(t);
}
ATerm Let_2_0 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,d_16 = NULL,e_16 = NULL,g_16 = NULL,a_1 = NULL,c_1 = NULL;
  g_16 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_16);
  y_15 = t;
  t = z_15;
  t = e_107(t);
  d_16 = t;
  t = a_16;
  t = f_107(t);
  e_16 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, d_16, e_16);
  a_1 = t;
  t = SSLsetAnnotations(a_1, y_15);
  return(t);
}
ATerm sboundin_3_0 (ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm t)
{
  ATerm z_21 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(w_117, w_117, t);
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = z_21;
      {
        ATerm c_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(y_117, y_117, w_117, t);
            ;
            LocalPopChoice(d_22);
          }
        else
          {
            t = c_22;
            {
              ATerm e_22 = t;
              int f_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(y_117, y_117, y_117, w_117, t);
                  ;
                  LocalPopChoice(f_22);
                }
              else
                {
                  t = e_22;
                  t = Rec_2_0(y_117, w_117, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm p_16 = NULL;
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_16 = ATgetArgument(t, 0);
          {
            ATerm k_22 = ATgetArgument(t, 1);
          }
          {
            ATerm l_22 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_22);
      t = p_16;
    }
  else
    {
      t = i_22;
      if(match_cons(t, sym_SDefT_4))
        {
          p_16 = ATgetArgument(t, 0);
          {
            ATerm m_22 = ATgetArgument(t, 1);
          }
          {
            ATerm n_22 = ATgetArgument(t, 2);
          }
          {
            ATerm o_22 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = p_16;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm n_16 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      n_16 = ATgetArgument(t, 0);
      {
        ATerm p_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_16;
  t = map_1_0(a_7, t);
  return(t);
}
ATerm DistBinding_2_0 (ATerm f_132 (ATerm), ATerm g_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm z_16 = NULL,c_17 = NULL,e_17 = NULL;
  if(match_cons(t, sym__3))
    {
      z_16 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
      e_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_16;
  {
    ATerm b_7 (ATerm t)
    {
      ATerm f_17 = NULL;
      f_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_17, e_17);
      t = f_132(t);
      return(t);
    }
    ATerm c_7 (ATerm t)
    {
      ATerm g_17 = NULL;
      g_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_17, c_17);
      t = f_132(t);
      return(t);
    }
    t = g_132(b_7, c_7, _id, t);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm e_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_22 = ATgetArgument(t, 0);
      if(((ATgetType(s_22) != AT_LIST) || !(ATisEmpty(s_22))))
        _fail(t);
      {
        ATerm t_22 = ATgetArgument(t, 1);
        if(((ATgetType(t_22) != AT_LIST) || !(ATisEmpty(t_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_22 = ATgetArgument(t, 0);
      if(((ATgetType(v_22) == AT_LIST) && !(ATisEmpty(v_22))))
        {
          g_18 = ATgetFirst((ATermList) v_22);
          i_18 = (ATerm) ATgetNext((ATermList) v_22);
        }
      else
        _fail(t);
      {
        ATerm x_22 = ATgetArgument(t, 1);
        if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
          {
            h_18 = ATgetFirst((ATermList) x_22);
            j_18 = (ATerm) ATgetNext((ATermList) x_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_18, h_18), (ATerm) ATmakeAppl(sym__2, i_18, j_18));
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_18), l_18);
  return(t);
}
ATerm RnBinding_2_0 (ATerm z_131 (ATerm), ATerm a_132 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_17;
  t = z_131(t);
  b_18 = t;
  t = map_1_0(new_0_0, t);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_18, c_18);
  t = genzip_4_0(e_7, g_7, h_7, _id, t);
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_18, a_18);
  t = conc_0_0(t);
  e_18 = t;
  t = h_17;
  {
    ATerm i_7 (ATerm t)
    {
      t = c_18;
      return(t);
    }
    t = a_132(i_7, t);
    f_18 = t;
    t = (ATerm) ATmakeAppl(sym__3, f_18, a_18, e_18);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm s_18 = NULL,x_18 = NULL,a_19 = NULL,b_19 = NULL,g_19 = NULL,n_19 = NULL;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_19;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_19 = ATgetFirst((ATermList) t);
      n_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_19;
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_18;
            if((a_19 != t))
              {
                _fail(t);
              }
            t = x_18;
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            t = (ATerm) ATmakeAppl(sym__2, a_19, n_19);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, a_19, n_19);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm n_132 (ATerm), ATerm t)
{
  ATerm a_22 (ATerm t)
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_132(t);
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        {
          ATerm v_3 = NULL,w_3 = NULL;
          ATerm j_7 (ATerm t)
          {
            ATerm x_3 = NULL;
            x_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_3, not_null(w_3));
            t = a_22(t);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              if(((v_3 != NULL) && (v_3 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_3 = ATgetArgument(t, 0);
              if(((w_3 != NULL) && (w_3 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                w_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(v_3);
          t = SRTS_all(j_7, t);
        }
      }
    return(t);
  }
  t = a_22(t);
  return(t);
}
ATerm rename_4_0 (ATerm u_131 (ATerm (ATerm), ATerm), ATerm v_131 (ATerm), ATerm w_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_131 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_22, (ATerm) ATempty);
  {
    ATerm h_22 (ATerm t)
    {
      ATerm k_7 (ATerm t)
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 = NULL,a_4 = NULL;
            ATerm l_7 (ATerm t)
            {
              ATerm c_4 = NULL;
              c_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, c_4, not_null(a_4));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((z_3 != NULL) && (z_3 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_3 = ATgetArgument(t, 0);
                if(((a_4 != NULL) && (a_4 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(z_3);
            t = u_131(l_7, t);
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            t = RnBinding_2_0(v_131, x_131, t);
            t = DistBinding_2_0(h_22, w_131, t);
          }
        return(t);
      }
      t = env_alltd_1_0(k_7, t);
      return(t);
    }
    t = h_22(t);
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      if(((ATgetType(e_23) != AT_LIST) || !(ATisEmpty(e_23))))
        _fail(t);
      {
        ATerm f_23 = ATgetArgument(t, 1);
        if(((ATgetType(f_23) != AT_LIST) || !(ATisEmpty(f_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,u_22 = NULL,w_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_23 = ATgetArgument(t, 0);
      if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
        {
          q_22 = ATgetFirst((ATermList) g_23);
          u_22 = (ATerm) ATgetNext((ATermList) g_23);
        }
      else
        _fail(t);
      {
        ATerm h_23 = ATgetArgument(t, 1);
        if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
          {
            r_22 = ATgetFirst((ATermList) h_23);
            w_22 = (ATerm) ATgetNext((ATermList) h_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_22, r_22), (ATerm) ATmakeAppl(sym__2, u_22, w_22));
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm j_23 = NULL,n_23 = NULL;
  if(match_cons(t, sym__2))
    {
      j_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_23), j_23);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm p_23 = NULL,v_23 = NULL,x_23 = NULL;
  if(match_cons(t, sym__2))
    {
      p_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_23;
  {
    ATerm i_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_23);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_23);
      }
    else
      {
        t = i_23;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_23 = ATgetArgument(t, 0);
            v_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_23, v_23);
      }
  }
  return(t);
}
ATerm s_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_23 = ATgetArgument(t, 0);
      if(((ATgetType(o_23) != AT_LIST) || !(ATisEmpty(o_23))))
        _fail(t);
      {
        ATerm q_23 = ATgetArgument(t, 1);
        if(((ATgetType(q_23) != AT_LIST) || !(ATisEmpty(q_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_23 = ATgetArgument(t, 0);
      if(((ATgetType(r_23) == AT_LIST) && !(ATisEmpty(r_23))))
        {
          m_24 = ATgetFirst((ATermList) r_23);
          o_24 = (ATerm) ATgetNext((ATermList) r_23);
        }
      else
        _fail(t);
      {
        ATerm s_23 = ATgetArgument(t, 1);
        if(((ATgetType(s_23) == AT_LIST) && !(ATisEmpty(s_23))))
          {
            n_24 = ATgetFirst((ATermList) s_23);
            p_24 = (ATerm) ATgetNext((ATermList) s_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_24, n_24), (ATerm) ATmakeAppl(sym__2, o_24, p_24));
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL;
  if(match_cons(t, sym__2))
    {
      s_24 = ATgetArgument(t, 0);
      t_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_24), s_24);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm v_24 = NULL,a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_24;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_23);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_25);
      }
    else
      {
        t = t_23;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_23 = ATgetArgument(t, 0);
            a_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_25, a_25);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm r_117 (ATerm), ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(r_117, _id, t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_7 (ATerm t)
            {
              ATerm h_4 = NULL,j_4 = NULL;
              h_4 = t;
              t = r_117(t);
              j_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, h_4, j_4);
              t = genzip_4_0(n_7, o_7, p_7, q_7, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, m_7, _id, t);
            ;
            LocalPopChoice(c_24);
          }
        else
          {
            t = b_24;
            {
              ATerm r_7 (ATerm t)
              {
                ATerm m_4 = NULL,o_4 = NULL;
                m_4 = t;
                t = r_117(t);
                o_4 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_4, o_4);
                t = genzip_4_0(s_7, t_7, u_7, v_7, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, r_7, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,m_25 = NULL,n_25 = NULL,f_1 = NULL,j_1 = NULL;
  n_25 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      i_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_25);
  h_25 = t;
  t = i_25;
  t = l_106(t);
  m_25 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, m_25);
  f_1 = t;
  t = SSLsetAnnotations(f_1, h_25);
  return(t);
}
ATerm RDefT_4_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,g_26 = NULL,q_26 = NULL,x_26 = NULL,y_26 = NULL,a_27 = NULL,k_1 = NULL,l_1 = NULL;
  a_27 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      y_25 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
      c_26 = ATgetArgument(t, 2);
      d_26 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_27);
  x_25 = t;
  t = y_25;
  t = c_106(t);
  g_26 = t;
  t = b_26;
  t = d_106(t);
  q_26 = t;
  t = c_26;
  t = e_106(t);
  x_26 = t;
  t = d_26;
  t = f_106(t);
  y_26 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, g_26, q_26, x_26, y_26);
  k_1 = t;
  t = SSLsetAnnotations(k_1, x_25);
  return(t);
}
ATerm tboundin_3_0 (ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm u_117 (ATerm), ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(u_117, s_117, t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(u_117, u_117, u_117, s_117, t);
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            {
              ATerm h_24 = t;
              int i_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(u_117, u_117, u_117, s_117, t);
                  ;
                  LocalPopChoice(i_24);
                }
              else
                {
                  t = h_24;
                  t = DynamicRules_1_0(s_117, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm y_27 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_27);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm a_28 = NULL,f_28 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_28 = ATgetArgument(t, 0);
            t = a_28;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm l_24 = t;
            int q_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm r_24 = ATgetArgument(t, 0);
                    ATerm u_24 = ATgetArgument(t, 1);
                    f_28 = ATgetArgument(t, 2);
                    {
                      ATerm w_24 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(q_24);
                t = f_28;
                t = map_1_0(y_7, t);
              }
            else
              {
                t = l_24;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm x_24 = ATgetArgument(t, 0);
                    ATerm y_24 = ATgetArgument(t, 1);
                    f_28 = ATgetArgument(t, 2);
                    {
                      ATerm z_24 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = f_28;
                t = map_1_0(z_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm r_28 = NULL;
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_28 = ATgetArgument(t, 0);
          {
            ATerm e_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_25);
      t = r_28;
    }
  else
    {
      t = c_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_28;
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm i_29 = NULL;
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_29 = ATgetArgument(t, 0);
          {
            ATerm j_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_25);
      t = i_29;
    }
  else
    {
      t = f_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_29;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(w_7, x_7, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm m_29 = NULL,p_29 = NULL;
  if(match_cons(t, sym__2))
    {
      m_29 = ATgetArgument(t, 0);
      p_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_29;
  {
    ATerm s_29 (ATerm t)
    {
      ATerm k_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_29;
          ;
          LocalPopChoice(l_25);
        }
      else
        {
          t = k_25;
          {
            ATerm o_25 = t;
            int p_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_4 = NULL,s_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_4 = ATgetFirst((ATermList) t);
                    s_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = p_29;
                {
                  ATerm a_8 (ATerm t)
                  {
                    ATerm t_4 = NULL;
                    t_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, r_4, t_4);
                    t = f_127(t);
                    return(t);
                  }
                  t = fetch_1_0(a_8, t);
                  t = s_4;
                  t = s_29(t);
                }
                ;
                LocalPopChoice(p_25);
              }
            else
              {
                t = o_25;
                t = Cons_2_0(_id, s_29, t);
              }
          }
        }
      return(t);
    }
    t = s_29(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm a_127 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,p_30 = NULL;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_30;
  {
    ATerm r_30 (ATerm t)
    {
      ATerm q_25 = t;
      int r_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(r_25);
        }
      else
        {
          t = q_25;
          {
            ATerm s_25 = t;
            int t_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_4 = NULL,y_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    w_4 = ATgetFirst((ATermList) t);
                    y_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = p_30;
                {
                  ATerm e_8 (ATerm t)
                  {
                    ATerm c_5 = NULL;
                    c_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, w_4, c_5);
                    t = a_127(t);
                    return(t);
                  }
                  t = fetch_1_0(e_8, t);
                  t = y_4;
                  t = r_30(t);
                }
                ;
                LocalPopChoice(t_25);
              }
            else
              {
                t = s_25;
                t = Cons_2_0(_id, r_30, t);
              }
          }
        }
      return(t);
    }
    t = r_30(t);
  }
  return(t);
}
ATerm f_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_25 = ATgetArgument(t, 0);
      if(((ATgetType(u_25) != AT_LIST) || !(ATisEmpty(u_25))))
        _fail(t);
      {
        ATerm v_25 = ATgetArgument(t, 1);
        if(((ATgetType(v_25) != AT_LIST) || !(ATisEmpty(v_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_25 = ATgetArgument(t, 0);
      if(((ATgetType(w_25) == AT_LIST) && !(ATisEmpty(w_25))))
        {
          d_31 = ATgetFirst((ATermList) w_25);
          f_31 = (ATerm) ATgetNext((ATermList) w_25);
        }
      else
        _fail(t);
      {
        ATerm z_25 = ATgetArgument(t, 1);
        if(((ATgetType(z_25) == AT_LIST) && !(ATisEmpty(z_25))))
          {
            e_31 = ATgetFirst((ATermList) z_25);
            g_31 = (ATerm) ATgetNext((ATermList) z_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_31, e_31), (ATerm) ATmakeAppl(sym__2, f_31, g_31));
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL;
  if(match_cons(t, sym__2))
    {
      h_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_31), h_31);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm u_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_26 = ATgetFirst((ATermList) t);
      if(match_cons(a_26, sym__2))
        {
          u_30 = ATgetArgument(a_26, 0);
          x_30 = ATgetArgument(a_26, 1);
        }
      else
        _fail(t);
      y_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_30);
  if(match_cons(t, sym__2))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_30);
  if(match_cons(t, sym__2))
    {
      if((z_30 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_31, a_31);
  t = genzip_4_0(f_8, g_8, h_8, _id, t);
  c_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_31, y_30);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm t)
{
  ATerm k_31 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_136(t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = e_136(t);
        t = k_31(t);
      }
    return(t);
  }
  t = k_31(t);
  return(t);
}
ATerm for_3_0 (ATerm g_136 (ATerm), ATerm h_136 (ATerm), ATerm i_136 (ATerm), ATerm t)
{
  t = g_136(t);
  t = while_not_2_0(h_136, i_136, t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm v_31 = NULL;
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_31);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = _2_0(_id, p_8, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, r_8, t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
        if(match_cons(t, sym__2))
          {
            g_32 = ATgetArgument(t, 0);
            h_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_32;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_32 = ATgetFirst((ATermList) t);
            j_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_32), i_32), j_32);
      }
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_31 = ATgetFirst((ATermList) t);
          c_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_31;
      if(match_cons(t, sym__2))
        {
          a_32 = ATgetArgument(t, 0);
          b_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_32;
      if((a_32 != t))
        {
          _fail(t);
        }
      t = c_32;
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm n_32 = NULL;
  if(match_cons(t, sym__2))
    {
      n_32 = ATgetArgument(t, 0);
      if((n_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_8, j_8, n_8, t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      t = diff_1_0(s_8, t);
    }
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = union_1_0(x_8, t);
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      n_6 = ATgetArgument(t, 0);
      if((n_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = union_1_0(t_9, t);
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      if((w_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm z_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_32 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_133(t);
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        {
          ATerm p_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_32 = NULL,q_32 = NULL,b_6 = NULL,c_6 = NULL;
              o_32 = t;
              t = y_133(t);
              q_32 = t;
              t = o_32;
              {
                ATerm t_8 (ATerm t)
                {
                  ATerm r_5 = NULL;
                  t = t_32(t);
                  r_5 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_5, q_32);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_133(t_8, t_32, u_8, t);
                b_6 = t;
                t = SSL_explode_term(b_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm s_26 = ATgetArgument(t, 0);
                    c_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_6;
                t = foldr_3_0(v_8, w_8, _id, t);
              }
              ;
              LocalPopChoice(r_26);
            }
          else
            {
              t = p_26;
              {
                ATerm q_6 = NULL,r_6 = NULL;
                q_6 = t;
                t = SSL_explode_term(q_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_26 = ATgetArgument(t, 0);
                    r_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_6;
                t = foldr_3_0(m_9, s_9, t_32, t);
              }
            }
        }
      }
    return(t);
  }
  t = t_32(t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm g_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_33);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm i_33 = NULL,k_33 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_33 = ATgetArgument(t, 0);
            t = i_33;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm w_26 = t;
            int z_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm b_27 = ATgetArgument(t, 0);
                    ATerm c_27 = ATgetArgument(t, 1);
                    k_33 = ATgetArgument(t, 2);
                    {
                      ATerm d_27 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(z_26);
                t = k_33;
                t = map_1_0(b_10, t);
              }
            else
              {
                t = w_26;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm e_27 = ATgetArgument(t, 0);
                    ATerm f_27 = ATgetArgument(t, 1);
                    k_33 = ATgetArgument(t, 2);
                    {
                      ATerm g_27 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = k_33;
                t = map_1_0(c_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm q_33 = NULL;
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_33 = ATgetArgument(t, 0);
          {
            ATerm j_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_27);
      t = q_33;
    }
  else
    {
      t = h_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_33;
    }
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm w_33 = NULL;
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_33 = ATgetArgument(t, 0);
          {
            ATerm m_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_27);
      t = w_33;
    }
  else
    {
      t = k_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_33;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm z_32 = NULL,d_33 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      d_33 = ATgetArgument(t, 0);
      t = d_33;
      if(match_cons(t, sym_Rule_3))
        {
          z_32 = ATgetArgument(t, 0);
          {
            ATerm n_27 = ATgetArgument(t, 1);
          }
          {
            ATerm o_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_32;
      t = free_vars_3_0(y_9, z_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          d_33 = ATgetArgument(t, 0);
          {
            ATerm p_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_33;
    }
  return(t);
}
ATerm Var_1_0 (ATerm u_103 (ATerm), ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,n_1 = NULL,t_1 = NULL;
  d_34 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_34);
  a_34 = t;
  t = b_34;
  t = u_103(t);
  c_34 = t;
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_34);
  n_1 = t;
  t = SSLsetAnnotations(n_1, a_34);
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm q_34 = NULL;
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm u_27 = ATgetArgument(t, 0);
                ATerm v_27 = ATgetArgument(t, 1);
                q_34 = ATgetArgument(t, 2);
                {
                  ATerm w_27 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_27);
            t = q_34;
            t = map_1_0(e_10, t);
          }
        else
          {
            t = s_27;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm x_27 = ATgetArgument(t, 0);
                ATerm z_27 = ATgetArgument(t, 1);
                q_34 = ATgetArgument(t, 2);
                {
                  ATerm b_28 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = q_34;
            t = map_1_0(f_10, t);
          }
      }
    }
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm v_34 = NULL;
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_34 = ATgetArgument(t, 0);
          {
            ATerm e_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_28);
      t = v_34;
    }
  else
    {
      t = c_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_34;
    }
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm b_35 = NULL;
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_35 = ATgetArgument(t, 0);
          {
            ATerm i_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_28);
      t = b_35;
    }
  else
    {
      t = g_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_35;
    }
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      {
        ATerm f_35 = NULL,g_35 = NULL;
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm n_28 = ATgetArgument(t, 0);
                g_35 = ATgetArgument(t, 1);
                {
                  ATerm o_28 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_28);
            t = g_35;
            t = map_1_0(p_10, t);
          }
        else
          {
            t = l_28;
            {
              ATerm p_28 = t;
              int q_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      f_35 = ATgetArgument(t, 0);
                      {
                        ATerm s_28 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_28);
                  t = (ATerm) ATinsert(ATempty, f_35);
                }
              else
                {
                  t = p_28;
                  {
                    ATerm t_28 = t;
                    int u_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm v_28 = ATgetArgument(t, 0);
                            g_35 = ATgetArgument(t, 1);
                            {
                              ATerm w_28 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm x_28 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_28);
                        t = g_35;
                        t = map_1_0(q_10, t);
                      }
                    else
                      {
                        t = t_28;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm y_28 = ATgetArgument(t, 0);
                            g_35 = ATgetArgument(t, 1);
                            {
                              ATerm z_28 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm a_29 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = g_35;
                        t = map_1_0(r_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm m_35 = NULL;
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_35 = ATgetArgument(t, 0);
          {
            ATerm d_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_29);
      t = m_35;
    }
  else
    {
      t = b_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_35;
    }
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm t_35 = NULL;
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_35 = ATgetArgument(t, 0);
          {
            ATerm g_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_29);
      t = t_35;
    }
  else
    {
      t = e_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_35;
    }
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm z_35 = NULL;
  ATerm h_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_35 = ATgetArgument(t, 0);
          {
            ATerm k_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_29);
      t = z_35;
    }
  else
    {
      t = h_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_35;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, d_10, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, j_10, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm h_9 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_9 = ATgetArgument(t, 0);
      {
        ATerm l_29 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_9;
  return(t);
}
ATerm t_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_29 = ATgetArgument(t, 0);
      if(((ATgetType(n_29) != AT_LIST) || !(ATisEmpty(n_29))))
        _fail(t);
      {
        ATerm o_29 = ATgetArgument(t, 1);
        if(((ATgetType(o_29) != AT_LIST) || !(ATisEmpty(o_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_29 = ATgetArgument(t, 0);
      if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
        {
          i_9 = ATgetFirst((ATermList) q_29);
          k_9 = (ATerm) ATgetNext((ATermList) q_29);
        }
      else
        _fail(t);
      {
        ATerm r_29 = ATgetArgument(t, 1);
        if(((ATgetType(r_29) == AT_LIST) && !(ATisEmpty(r_29))))
          {
            j_9 = ATgetFirst((ATermList) r_29);
            l_9 = (ATerm) ATgetNext((ATermList) r_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_9, j_9), (ATerm) ATmakeAppl(sym__2, k_9, l_9));
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm n_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__2))
    {
      n_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_9), n_9);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_9), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_9))));
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = repeat_1_0(f_11, t);
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                u_9 = ATgetArgument(t, 0);
                v_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_9;
            if(match_cons(t, sym_Let_2))
              {
                w_9 = ATgetArgument(t, 0);
                x_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, w_9, (ATerm) ATmakeAppl(sym_Seq_2, u_9, x_9));
            ;
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            {
              ATerm y_29 = t;
              int z_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
                  if(match_cons(t, sym_Scope_2))
                    {
                      k_10 = ATgetArgument(t, 0);
                      {
                        ATerm a_30 = ATgetArgument(t, 1);
                        if(match_cons(a_30, sym_Scope_2))
                          {
                            m_10 = ATgetArgument(a_30, 0);
                            n_10 = ATgetArgument(a_30, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, k_10, m_10);
                  t = conc_0_0(t);
                  o_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, o_10, n_10);
                  ;
                  LocalPopChoice(z_29);
                }
              else
                {
                  t = y_29;
                  {
                    ATerm b_30 = t;
                    int c_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(c_30);
                      }
                    else
                      {
                        t = b_30;
                        t = TestSavesCurrentTerm_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
  z_37 = t;
  if(match_cons(t, sym_CallT_3))
    {
      a_38 = ATgetArgument(t, 0);
      c_38 = ATgetArgument(t, 1);
      d_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_38;
  if(match_cons(t, sym_SVar_1))
    {
      b_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_38), (ATerm)ATempty, (ATerm) ATempty);
        b_8 = t;
        t = term_t_29;
        c_8 = t;
        t = SSL_table_get(c_8, b_8);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_8 = ATgetFirst((ATermList) t);
            {
              ATerm f_30 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = d_8;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_38), (ATerm)ATempty, (ATerm) ATempty);
              k_8 = t;
              t = term_t_29;
              l_8 = t;
              t = SSL_table_get(l_8, k_8);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_8 = ATgetFirst((ATermList) t);
                  {
                    ATerm i_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = m_8;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              {
                ATerm j_30 = t;
                int k_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_8 = NULL,z_8 = NULL,b_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_38), (ATerm)ATempty, (ATerm) ATempty);
                    g_10 = t;
                    t = term_t_29;
                    h_10 = t;
                    t = SSL_table_get(h_10, g_10);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        i_10 = ATgetFirst((ATermList) t);
                        {
                          ATerm m_30 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = i_10;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm n_30 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) n_30) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        y_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = y_8;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((b_38 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        z_8 = ATgetArgument(t, 1);
                        b_9 = ATgetArgument(t, 2);
                        d_9 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, z_8, c_38, d_9);
                    t = substitute_args_0_0(t);
                    e_9 = t;
                    t = b_9;
                    t = map_1_0(s_10, t);
                    f_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_38, f_9);
                    t = genzip_4_0(t_10, u_10, y_10, c_11, t);
                    g_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_38), (ATerm)ATempty, (ATerm) ATempty), term_o_30);
                    t = assert_1_0(d_11, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, f_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_9), e_9));
                    t = downup_1_0(e_11, t);
                    ;
                    LocalPopChoice(k_30);
                  }
                else
                  {
                    t = j_30;
                    {
                      ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_38), (ATerm)ATempty, (ATerm) ATempty);
                      v_10 = t;
                      t = term_t_29;
                      w_10 = t;
                      t = SSL_table_get(w_10, v_10);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          x_10 = ATgetFirst((ATermList) t);
                          {
                            ATerm q_30 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = x_10;
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
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
ATerm g_11 (ATerm t)
{
  t = term_s_30;
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(n_11, o_11);
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = t_30;
        t = SSL_addr(n_11, o_11);
      }
  }
  return(t);
}
ATerm occurrences_1_0 (ATerm m_127 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,j_11 = NULL;
  z_10 = t;
  {
    ATerm w_30 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_127(t);
        t = term_h_19;
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = w_30;
        t = term_s_30;
      }
    a_11 = t;
    t = SSL_explode_term(z_10);
    if(match_cons(t, sym__2))
      {
        ATerm l_31 = ATgetArgument(t, 0);
        j_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_11;
    {
      ATerm i_11 (ATerm t)
      {
        t = occurrences_1_0(m_127, t);
        return(t);
      }
      t = foldr_3_0(g_11, h_11, i_11, t);
      b_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_11, b_11);
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(a_11, b_11);
            ;
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
            t = SSL_addr(a_11, b_11);
          }
      }
    }
  }
  return(t);
}
ATerm local_inlinable_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      m_38 = ATgetArgument(t, 0);
      {
        ATerm o_31 = ATgetArgument(t, 1);
      }
      {
        ATerm p_31 = ATgetArgument(t, 2);
      }
      n_38 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  o_38 = t;
  t = n_38;
  {
    ATerm q_31 = t;
    if((PushChoice() == 0))
      {
        ATerm k_11 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm r_31 = ATgetArgument(t, 0);
              if(match_cons(r_31, sym_SVar_1))
                {
                  if((m_38 != ATgetArgument(r_31, 0)))
                    {
                      _fail(ATgetArgument(r_31, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm s_31 = ATgetArgument(t, 1);
              }
              {
                ATerm t_31 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(k_11, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_31;
      }
    t = w_116(t);
    {
      ATerm l_11 (ATerm t)
      {
        if(match_cons(t, sym_CallT_3))
          {
            ATerm u_31 = ATgetArgument(t, 0);
            if(match_cons(u_31, sym_SVar_1))
              {
                if((m_38 != ATgetArgument(u_31, 0)))
                  {
                    _fail(ATgetArgument(u_31, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm w_31 = ATgetArgument(t, 1);
            }
            {
              ATerm x_31 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = occurrences_1_0(l_11, t);
      p_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_38, term_h_19);
      t = leq_0_0(t);
      t = o_38;
    }
  }
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm UndefineSDef_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      q_38 = ATgetArgument(t, 0);
      {
        ATerm y_31 = ATgetArgument(t, 1);
      }
      {
        ATerm d_32 = ATgetArgument(t, 2);
      }
      {
        ATerm e_32 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_38), (ATerm)ATempty, (ATerm) ATempty), term_o_30);
  t = assert_1_0(m_11, t);
  t = r_38;
  return(t);
}
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  if(match_cons(t, sym__2))
    {
      s_38 = ATgetArgument(t, 0);
      t_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_38, t_38);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_32 = ATgetFirst((ATermList) t);
            u_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_32);
        t = SSL_table_put(s_38, t_38, u_38);
        t = (ATerm) ATmakeAppl(sym__3, s_38, t_38, u_38);
      }
    else
      {
        t = f_32;
        t = SSL_table_remove(s_38, t_38);
        t = (ATerm) ATmakeAppl(sym__2, s_38, t_38);
      }
    t = (ATerm) ATmakeAppl(sym__2, s_38, t_38);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_131 (ATerm), ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
  v_38 = t;
  t = b_131(t);
  w_38 = t;
  {
    ATerm m_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_39 = NULL;
        t = term_r_32;
        a_39 = t;
        t = SSL_table_get(w_38, a_39);
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = m_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_38 = ATgetFirst((ATermList) t);
        x_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_r_32;
    z_38 = t;
    t = SSL_table_put(w_38, z_38, x_38);
    t = y_38;
    {
      ATerm p_11 (ATerm t)
      {
        ATerm b_39 = NULL;
        b_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_38, b_39);
        t = table_pop_rm_0_0(t);
        return(t);
      }
      t = map_1_0(p_11, t);
      t = v_38;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm t)
{
  ATerm s_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_121(t);
      t = z_121(t);
      ;
      LocalPopChoice(u_32);
    }
  else
    {
      t = s_32;
      t = z_121(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_131 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
  e_39 = t;
  t = a_131(t);
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_39, term_r_32);
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_32 = ATgetArgument(t, 0);
            ATerm y_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_32;
        r_11 = t;
        t = SSL_table_get(f_39, r_11);
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = (ATerm) ATempty;
      }
    g_39 = t;
    t = term_r_32;
    h_39 = t;
    t = (ATerm) ATinsert(CheckATermList(g_39), (ATerm) ATempty);
    i_39 = t;
    t = SSL_table_put(f_39, h_39, i_39);
    t = e_39;
  }
  return(t);
}
ATerm scope_2_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm t)
{
  t = begin_scope_1_0(c_131, t);
  {
    ATerm t_11 (ATerm t)
    {
      t = end_scope_1_0(c_131, t);
      return(t);
    }
    t = restore_always_2_0(d_131, t_11, t);
  }
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = term_a_33;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm x_11 (ATerm t)
  {
    ATerm e_12 (ATerm t)
    {
      ATerm b_33 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = UndefineSDef_0_0(t);
          ;
          LocalPopChoice(c_33);
        }
      else
        {
          t = b_33;
          {
            ATerm e_33 = t;
            int f_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_39 = NULL,s_39 = NULL;
                if(match_cons(t, sym_Let_2))
                  {
                    r_39 = ATgetArgument(t, 0);
                    s_39 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_39;
                {
                  ATerm f_12 (ATerm t)
                  {
                    ATerm h_12 (ATerm t)
                    {
                      t = s_39;
                      return(t);
                    }
                    t = local_inlinable_1_0(h_12, t);
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(f_12, t);
                  t = (ATerm) ATmakeAppl(sym_Let_2, r_39, s_39);
                }
                ;
                LocalPopChoice(f_33);
              }
            else
              {
                t = e_33;
                t = repeat_1_0(InlineCall_0_0, t);
              }
          }
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(y_11, e_12, t);
    return(t);
  }
  t = scope_2_0(w_11, x_11, t);
  return(t);
}
ATerm assert_1_0 (ATerm e_131 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  if(match_cons(t, sym__2))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_131(t);
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_39, w_39, x_39);
  t = table_push_0_0(t);
  {
    ATerm h_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_40 = NULL;
        t = term_r_32;
        d_40 = t;
        t = SSL_table_get(y_39, d_40);
        ;
        LocalPopChoice(j_33);
      }
    else
      {
        t = h_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_39 = ATgetFirst((ATermList) t);
        a_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_r_32;
    b_40 = t;
    t = (ATerm) ATinsert(CheckATermList(a_40), (ATerm) ATinsert(CheckATermList(z_39), w_39));
    c_40 = t;
    t = SSL_table_put(y_39, b_40, c_40);
    t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
  }
  return(t);
}
ATerm k_12 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm l_12 (ATerm t)
{
  t = term_a_33;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_40 = ATgetArgument(t, 0);
      {
        ATerm l_33 = ATgetArgument(t, 1);
      }
      {
        ATerm m_33 = ATgetArgument(t, 2);
      }
      {
        ATerm n_33 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_40), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_o_33, e_40));
  t = assert_1_0(k_12, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_40), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_p_33, e_40));
  t = assert_1_0(l_12, t);
  t = g_40;
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm r_33 = t;
  if((PushChoice() == 0))
    {
      ATerm h_40 = NULL,i_40 = NULL;
      if(match_cons(t, sym__2))
        {
          h_40 = ATgetArgument(t, 0);
          i_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_33 = t;
        int t_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(h_40, i_40);
            ;
            LocalPopChoice(t_33);
          }
        else
          {
            t = s_33;
            t = SSL_gtr(h_40, i_40);
          }
        t = (ATerm) ATmakeAppl(sym__2, h_40, i_40);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_33;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_129(t);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm l_40 = NULL,m_40 = NULL,p_40 = NULL,q_40 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_40 = ATgetFirst((ATermList) t);
            m_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_40;
        t = x_129(t);
        p_40 = t;
        t = m_40;
        t = foldr_3_0(v_129, w_129, x_129, t);
        q_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_40, q_40);
        t = w_129(t);
      }
    }
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = term_h_19;
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_12, b_12);
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        t = SSL_addr(a_12, b_12);
      }
  }
  return(t);
}
ATerm o_12 (ATerm t)
{
  t = term_h_19;
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_33 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(i_12, j_12);
        ;
        LocalPopChoice(e_34);
      }
    else
      {
        t = z_33;
        t = SSL_addr(i_12, j_12);
      }
  }
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_11 = NULL,v_11 = NULL;
      u_11 = t;
      t = SSL_explode_term(u_11);
      if(match_cons(t, sym__2))
        {
          ATerm h_34 = ATgetArgument(t, 0);
          v_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_11;
      t = foldr_3_0(m_12, n_12, term_size_0_0, t);
      ;
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      {
        ATerm x_40 (ATerm t)
        {
          ATerm c_12 = NULL,d_12 = NULL;
          c_12 = t;
          t = SSL_explode_term(c_12);
          if(match_cons(t, sym__2))
            {
              ATerm i_34 = ATgetArgument(t, 0);
              d_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_12;
          t = foldr_3_0(o_12, q_12, x_40, t);
          return(t);
        }
        t = x_40(t);
      }
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,v_1 = NULL,w_1 = NULL;
  f_41 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      z_40 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
      b_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_41);
  y_40 = t;
  t = z_40;
  t = y_107(t);
  c_41 = t;
  t = a_41;
  t = z_107(t);
  d_41 = t;
  t = b_41;
  t = a_108(t);
  e_41 = t;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_41, d_41, e_41);
  v_1 = t;
  t = SSLsetAnnotations(v_1, y_40);
  return(t);
}
ATerm LChoice_2_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,p_41 = NULL,y_41 = NULL,a_42 = NULL,y_1 = NULL,a_2 = NULL;
  a_42 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      k_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_42);
  j_41 = t;
  t = k_41;
  t = u_107(t);
  p_41 = t;
  t = l_41;
  t = v_107(t);
  y_41 = t;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, p_41, y_41);
  y_1 = t;
  t = SSLsetAnnotations(y_1, j_41);
  return(t);
}
ATerm Choice_2_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,b_2 = NULL,d_2 = NULL;
  j_42 = t;
  if(match_cons(t, sym_Choice_2))
    {
      f_42 = ATgetArgument(t, 0);
      g_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_42);
  e_42 = t;
  t = f_42;
  t = s_106(t);
  h_42 = t;
  t = g_42;
  t = t_106(t);
  i_42 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, h_42, i_42);
  b_2 = t;
  t = SSLsetAnnotations(b_2, e_42);
  return(t);
}
ATerm Match_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm s_42 = NULL,x_42 = NULL,f_43 = NULL,g_43 = NULL,f_2 = NULL,g_2 = NULL;
  g_43 = t;
  if(match_cons(t, sym_Match_1))
    {
      x_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_43);
  s_42 = t;
  t = x_42;
  t = l_107(t);
  f_43 = t;
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, f_43);
  f_2 = t;
  t = SSLsetAnnotations(f_2, s_42);
  return(t);
}
ATerm Seq_2_0 (ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,h_2 = NULL,j_2 = NULL;
  o_43 = t;
  if(match_cons(t, sym_Seq_2))
    {
      k_43 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_43);
  j_43 = t;
  t = k_43;
  t = s_107(t);
  m_43 = t;
  t = l_43;
  t = t_107(t);
  n_43 = t;
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, m_43, n_43);
  h_2 = t;
  t = SSLsetAnnotations(h_2, j_43);
  return(t);
}
ATerm Scope_2_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,x_43 = NULL,k_2 = NULL,n_2 = NULL;
  x_43 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_43 = ATgetArgument(t, 0);
      t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_43);
  r_43 = t;
  t = s_43;
  t = o_107(t);
  u_43 = t;
  t = t_43;
  t = p_107(t);
  v_43 = t;
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_43, v_43);
  k_2 = t;
  t = SSLsetAnnotations(k_2, r_43);
  return(t);
}
ATerm Build_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,q_2 = NULL,x_2 = NULL;
  f_44 = t;
  if(match_cons(t, sym_Build_1))
    {
      d_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_44);
  c_44 = t;
  t = d_44;
  t = m_107(t);
  e_44 = t;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, e_44);
  q_2 = t;
  t = SSLsetAnnotations(q_2, c_44);
  return(t);
}
ATerm SVar_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,y_2 = NULL,z_2 = NULL;
  l_44 = t;
  if(match_cons(t, sym_SVar_1))
    {
      j_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_44);
  i_44 = t;
  t = j_44;
  t = d_107(t);
  k_44 = t;
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, k_44);
  y_2 = t;
  t = SSLsetAnnotations(y_2, i_44);
  return(t);
}
ATerm PrimT_3_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,b_3 = NULL,d_3 = NULL;
  v_44 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_44 = ATgetArgument(t, 0);
      q_44 = ATgetArgument(t, 1);
      r_44 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_44);
  o_44 = t;
  t = p_44;
  t = k_108(t);
  s_44 = t;
  t = q_44;
  t = l_108(t);
  t_44 = t;
  t = r_44;
  t = m_108(t);
  u_44 = t;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, s_44, t_44, u_44);
  b_3 = t;
  t = SSLsetAnnotations(b_3, o_44);
  return(t);
}
ATerm CallT_3_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,e_3 = NULL,f_3 = NULL;
  f_45 = t;
  if(match_cons(t, sym_CallT_3))
    {
      z_44 = ATgetArgument(t, 0);
      a_45 = ATgetArgument(t, 1);
      b_45 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_45);
  y_44 = t;
  t = z_44;
  t = i_107(t);
  c_45 = t;
  t = a_45;
  t = j_107(t);
  d_45 = t;
  t = b_45;
  t = k_107(t);
  e_45 = t;
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, c_45, d_45, e_45);
  e_3 = t;
  t = SSLsetAnnotations(e_3, y_44);
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm v_12 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm w_12 (ATerm t)
{
  t = Seq_2_0(y_12, _id, t);
  return(t);
}
ATerm y_12 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm z_12 (ATerm t)
{
  t = Scope_2_0(_id, a_13, t);
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = Seq_2_0(d_13, _id, t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  ATerm k_45 (ATerm t)
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm l_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              ;
              LocalPopChoice(m_34);
            }
          else
            {
              t = l_34;
              {
                ATerm n_34 = t;
                int o_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = CallT_3_0(r_12, _id, _id, t);
                    ;
                    LocalPopChoice(o_34);
                  }
                else
                  {
                    t = n_34;
                    {
                      ATerm p_34 = t;
                      int r_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = PrimT_3_0(t_12, _id, _id, t);
                          ;
                          LocalPopChoice(r_34);
                        }
                      else
                        {
                          t = p_34;
                          {
                            ATerm s_34 = t;
                            int t_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Build_1_0(_id, t);
                                ;
                                LocalPopChoice(t_34);
                              }
                            else
                              {
                                t = s_34;
                                {
                                  ATerm u_34 = t;
                                  int w_34 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Match_1_0(_id, t);
                                      ;
                                      LocalPopChoice(w_34);
                                    }
                                  else
                                    {
                                      t = u_34;
                                      {
                                        ATerm x_34 = t;
                                        int y_34 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = Seq_2_0(u_12, _id, t);
                                            ;
                                            LocalPopChoice(y_34);
                                          }
                                        else
                                          {
                                            t = x_34;
                                            {
                                              ATerm z_34 = t;
                                              int a_35 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = Scope_2_0(_id, v_12, t);
                                                  ;
                                                  LocalPopChoice(a_35);
                                                }
                                              else
                                                {
                                                  t = z_34;
                                                  {
                                                    ATerm c_35 = t;
                                                    int d_35 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Scope_2_0(_id, w_12, t);
                                                        ;
                                                        LocalPopChoice(d_35);
                                                      }
                                                    else
                                                      {
                                                        t = c_35;
                                                        {
                                                          ATerm e_35 = t;
                                                          int h_35 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Seq_2_0(z_12, _id, t);
                                                              ;
                                                              LocalPopChoice(h_35);
                                                            }
                                                          else
                                                            {
                                                              t = e_35;
                                                              {
                                                                ATerm i_35 = t;
                                                                int j_35 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2_0(k_45, k_45, t);
                                                                    ;
                                                                    LocalPopChoice(j_35);
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_35;
                                                                    {
                                                                      ATerm k_35 = t;
                                                                      int l_35 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = LChoice_2_0(k_45, k_45, t);
                                                                          ;
                                                                          LocalPopChoice(l_35);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = k_35;
                                                                          t = GuardedLChoice_3_0(k_45, k_45, k_45, t);
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = k_45(t);
  i_45 = t;
  t = term_size_0_0(t);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_45, term_n_35);
  t = leq_0_0(t);
  t = i_45;
  return(t);
}
ATerm SDefT_4_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,g_3 = NULL,h_3 = NULL;
  u_45 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_45 = ATgetArgument(t, 0);
      n_45 = ATgetArgument(t, 1);
      o_45 = ATgetArgument(t, 2);
      p_45 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_45);
  l_45 = t;
  t = m_45;
  t = w_109(t);
  q_45 = t;
  t = n_45;
  t = x_109(t);
  r_45 = t;
  t = o_45;
  t = y_109(t);
  s_45 = t;
  t = p_45;
  t = z_109(t);
  t_45 = t;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_45, r_45, s_45, t_45);
  g_3 = t;
  t = SSLsetAnnotations(g_3, l_45);
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm x_45 = NULL;
  ATerm g_13 (ATerm t)
  {
    ATerm o_35 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_35;
      }
    if(((x_45 != NULL) && (x_45 != t)))
      _fail(t);
    else
      x_45 = t;
    return(t);
  }
  ATerm h_13 (ATerm t)
  {
    ATerm y_45 = NULL;
    y_45 = t;
    {
      ATerm p_35 = t;
      if((PushChoice() == 0))
        {
          ATerm j_13 (ATerm t)
          {
            if(match_cons(t, sym_CallT_3))
              {
                ATerm q_35 = ATgetArgument(t, 0);
                if(match_cons(q_35, sym_SVar_1))
                  {
                    if(((x_45 != NULL) && (x_45 != ATgetArgument(q_35, 0))))
                      _fail(ATgetArgument(q_35, 0));
                    else
                      x_45 = ATgetArgument(q_35, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm r_35 = ATgetArgument(t, 1);
                }
                {
                  ATerm s_35 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(j_13, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_35;
        }
      t = y_45;
      t = body_to_inline_0_0(t);
    }
    return(t);
  }
  t = SDefT_4_0(g_13, _id, _id, h_13, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,g_46 = NULL,i_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL;
  if(match_cons(t, sym__2))
    {
      g_46 = ATgetArgument(t, 0);
      i_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_46;
  if(match_cons(t, sym_Build_1))
    {
      ATerm u_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_46;
  if(match_cons(t, sym_Where_1))
    {
      k_46 = ATgetArgument(t, 0);
      t = k_46;
      if(match_cons(t, sym_Prim_2))
        {
          d_46 = ATgetArgument(t, 0);
          e_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, d_46, e_46);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          k_46 = ATgetArgument(t, 0);
          l_46 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, k_46, l_46);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              k_46 = ATgetArgument(t, 0);
              l_46 = ATgetArgument(t, 1);
              m_46 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, k_46, l_46, m_46);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm), ATerm t)
{
  ATerm u_46 (ATerm t)
  {
    ATerm v_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_123(t);
        ;
        LocalPopChoice(w_35);
      }
    else
      {
        t = v_35;
        t = e_123(t);
        t = _2_0(g_123, u_46, t);
        t = f_123(t);
      }
    return(t);
  }
  t = u_46(t);
  return(t);
}
ATerm l_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      if(((ATgetType(x_35) != AT_LIST) || !(ATisEmpty(x_35))))
        _fail(t);
      {
        ATerm y_35 = ATgetArgument(t, 1);
        if(((ATgetType(y_35) != AT_LIST) || !(ATisEmpty(y_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_36 = ATgetArgument(t, 0);
      if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
        {
          z_46 = ATgetFirst((ATermList) a_36);
          b_47 = (ATerm) ATgetNext((ATermList) a_36);
        }
      else
        _fail(t);
      {
        ATerm b_36 = ATgetArgument(t, 1);
        if(((ATgetType(b_36) == AT_LIST) && !(ATisEmpty(b_36))))
          {
            a_47 = ATgetFirst((ATermList) b_36);
            c_47 = (ATerm) ATgetNext((ATermList) b_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_46, a_47), (ATerm) ATmakeAppl(sym__2, b_47, c_47));
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL;
  if(match_cons(t, sym__2))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_47), d_47);
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL;
  if(match_cons(t, sym__2))
    {
      f_47 = ATgetArgument(t, 0);
      g_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_47), (ATerm) ATmakeAppl(sym_Match_1, g_47));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_36 = ATgetArgument(t, 0);
      if(match_cons(c_36, sym_Build_1))
        {
          ATerm e_36 = ATgetArgument(c_36, 0);
          if(match_cons(e_36, sym_Op_2))
            {
              w_46 = ATgetArgument(e_36, 0);
              v_46 = ATgetArgument(e_36, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm d_36 = ATgetArgument(t, 1);
        if(match_cons(d_36, sym_Match_1))
          {
            ATerm f_36 = ATgetArgument(d_36, 0);
            if(match_cons(f_36, sym_Op_2))
              {
                if((w_46 != ATgetArgument(f_36, 0)))
                  {
                    _fail(ATgetArgument(f_36, 0));
                  }
                x_46 = ATgetArgument(f_36, 1);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_46, x_46);
  t = genzip_4_0(l_13, m_13, p_13, q_13, t);
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_46), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, w_46, v_46)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      if(match_cons(g_36, sym_Build_1))
        {
          ATerm i_36 = ATgetArgument(g_36, 0);
          if(match_cons(i_36, sym_Op_2))
            {
              h_47 = ATgetArgument(i_36, 0);
              {
                ATerm j_36 = ATgetArgument(i_36, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm h_36 = ATgetArgument(t, 1);
        if(match_cons(h_36, sym_Match_1))
          {
            ATerm k_36 = ATgetArgument(h_36, 0);
            if(match_cons(k_36, sym_Op_2))
              {
                i_47 = ATgetArgument(k_36, 0);
                {
                  ATerm l_36 = ATgetArgument(k_36, 1);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_47, i_47);
  {
    ATerm m_36 = t;
    if((PushChoice() == 0))
      {
        ATerm j_47 = NULL;
        if(match_cons(t, sym__2))
          {
            j_47 = ATgetArgument(t, 0);
            if((j_47 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_36;
      }
    t = term_n_36;
  }
  return(t);
}
ATerm m_50 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        {
          ATerm q_36 = t;
          int r_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(r_36);
            }
          else
            {
              t = q_36;
              {
                ATerm s_36 = t;
                int t_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_49 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm u_36 = ATgetArgument(t, 0);
                        ATerm v_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = g_49;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm w_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = h_49;
                    if(match_cons(t, sym_Build_1))
                      {
                        p_49 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, p_49);
                    ;
                    LocalPopChoice(t_36);
                  }
                else
                  {
                    t = s_36;
                    {
                      ATerm x_36 = t;
                      int y_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(y_36);
                        }
                      else
                        {
                          t = x_36;
                          {
                            ATerm t_49 = NULL,u_49 = NULL,w_49 = NULL,x_49 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm z_36 = ATgetArgument(t, 0);
                                ATerm a_37 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = g_49;
                            if(match_cons(t, sym_Match_1))
                              {
                                t_49 = ATgetArgument(t, 0);
                                t = h_49;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    w_49 = ATgetArgument(t, 0);
                                    t = w_49;
                                    if((t_49 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, t_49);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        w_49 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = t_49;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        u_49 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = w_49;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        x_49 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = x_49;
                                    if((u_49 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_49));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    t_49 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = h_49;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    w_49 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = w_49;
                                if((t_49 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, t_49);
                              }
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
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL;
  d_50 = t;
  if(match_cons(t, sym_Seq_2))
    {
      e_50 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_50;
  if(match_cons(t, sym_Seq_2))
    {
      b_50 = ATgetArgument(t, 0);
      c_50 = ATgetArgument(t, 1);
      {
        ATerm b_37 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_12 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, e_50, b_50);
            {
              ATerm d_37 = t;
              int e_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(e_37);
                }
              else
                {
                  t = d_37;
                  {
                    ATerm f_37 = t;
                    int g_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(g_37);
                      }
                    else
                      {
                        t = f_37;
                        {
                          ATerm h_37 = t;
                          int i_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_12 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm j_37 = ATgetArgument(t, 0);
                                  ATerm k_37 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = e_50;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm l_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = b_50;
                              if(match_cons(t, sym_Build_1))
                                {
                                  x_12 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, x_12);
                              ;
                              LocalPopChoice(i_37);
                            }
                          else
                            {
                              t = h_37;
                              {
                                ATerm m_37 = t;
                                int n_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(n_37);
                                  }
                                else
                                  {
                                    t = m_37;
                                    {
                                      ATerm b_13 = NULL,c_13 = NULL,e_13 = NULL,f_13 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm o_37 = ATgetArgument(t, 0);
                                          ATerm p_37 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = e_50;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          b_13 = ATgetArgument(t, 0);
                                          t = b_50;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              e_13 = ATgetArgument(t, 0);
                                              t = e_13;
                                              if((b_13 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, b_13);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  e_13 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = b_13;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  c_13 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = e_13;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  f_13 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = f_13;
                                              if((c_13 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_13));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              b_13 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = b_50;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              e_13 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = e_13;
                                          if((b_13 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, b_13);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              s_12 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, s_12, c_50);
            }
            ;
            LocalPopChoice(c_37);
          }
        else
          {
            t = b_37;
            t = m_50(e_50, f_50, d_50, t);
          }
      }
    }
  else
    {
      t = m_50(e_50, f_50, d_50, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_119 (ATerm), ATerm t)
{
  ATerm n_50 (ATerm t)
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_119(t);
        ;
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = SRTS_one(n_50, t);
      }
    return(t);
  }
  t = n_50(t);
  return(t);
}
ATerm at_end_1_0 (ATerm i_125 (ATerm), ATerm t)
{
  ATerm v_50 (ATerm t)
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, v_50, t);
        ;
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_125(t);
      }
    return(t);
  }
  t = v_50(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      {
        ATerm q_50 = NULL,r_50 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_50 = ATgetFirst((ATermList) t);
            r_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_50;
        {
          ATerm r_13 (ATerm t)
          {
            t = r_50;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_13, t);
        }
      }
    }
  return(t);
}
ATerm i_51 (ATerm y_50, ATerm t)
{
  ATerm c_51 = NULL;
  t = SSL_explode_term(y_50);
  if(match_cons(t, sym__2))
    {
      ATerm w_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_51;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
  f_51 = t;
  if(match_cons(t, sym__2))
    {
      d_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
      {
        ATerm x_37 = t;
        int y_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_13 (ATerm t)
            {
              t = e_51;
              return(t);
            }
            t = d_51;
            t = at_end_1_0(s_13, t);
            ;
            LocalPopChoice(y_37);
          }
        else
          {
            t = x_37;
            t = i_51(f_51, t);
          }
      }
    }
  else
    {
      t = i_51(f_51, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,l_52 = NULL,m_52 = NULL,q_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  b_52 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_52 = ATgetArgument(t, 0);
      q_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_52;
  if(match_cons(t, sym_Let_2))
    {
      t_52 = ATgetArgument(t, 0);
      v_52 = ATgetArgument(t, 1);
      {
        ATerm a_53 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, c_52, t_52);
        t = conc_0_0(t);
        a_53 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, a_53, v_52);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          t_52 = ATgetArgument(t, 0);
          v_52 = ATgetArgument(t, 1);
          w_52 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_52;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_52 = ATgetFirst((ATermList) t);
          m_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_52;
      if(match_cons(t, sym_SDefT_4))
        {
          e_52 = ATgetArgument(t, 0);
          f_52 = ATgetArgument(t, 1);
          g_52 = ATgetArgument(t, 2);
          l_52 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = f_52;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_52;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_52;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_52;
      if(match_cons(t, sym_SVar_1))
        {
          u_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_52;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_52;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_52;
      if((e_52 != t))
        {
          _fail(t);
        }
      t = l_52;
      {
        ATerm e_38 = t;
        if((PushChoice() == 0))
          {
            ATerm t_13 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm f_38 = ATgetArgument(t, 0);
                  if(match_cons(f_38, sym_SVar_1))
                    {
                      if((e_52 != ATgetArgument(f_38, 0)))
                        {
                          _fail(ATgetArgument(f_38, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm g_38 = ATgetArgument(t, 1);
                    if(((ATgetType(g_38) != AT_LIST) || !(ATisEmpty(g_38))))
                      _fail(t);
                  }
                  {
                    ATerm h_38 = ATgetArgument(t, 2);
                    if(((ATgetType(h_38) != AT_LIST) || !(ATisEmpty(h_38))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(t_13, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_38;
          }
        t = l_52;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,q_53 = NULL,r_53 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      q_53 = ATgetArgument(t, 0);
      t = q_53;
      if(match_cons(t, sym_Seq_2))
        {
          o_53 = ATgetArgument(t, 0);
          k_53 = ATgetArgument(t, 1);
          t = o_53;
          if(match_cons(t, sym_Where_1))
            {
              j_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_53;
          if(match_cons(t, sym_Seq_2))
            {
              l_53 = ATgetArgument(t, 0);
              n_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_53;
          if(match_cons(t, sym_Build_1))
            {
              m_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, j_53, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_53), n_53)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              o_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, o_53);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          q_53 = ATgetArgument(t, 0);
          t = q_53;
          if(match_cons(t, sym_Test_1))
            {
              o_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, o_53);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              q_53 = ATgetArgument(t, 0);
              t = q_53;
              if(match_cons(t, sym_Not_1))
                {
                  o_53 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, o_53);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  q_53 = ATgetArgument(t, 0);
                  r_53 = ATgetArgument(t, 1);
                  t = r_53;
                  if((q_53 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      q_53 = ATgetArgument(t, 0);
                      r_53 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_53;
                  if((q_53 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      j_54 = ATgetArgument(t, 0);
      m_54 = ATgetArgument(t, 1);
      t = j_54;
      if(match_cons(t, sym_LChoice_2))
        {
          k_54 = ATgetArgument(t, 0);
          l_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, k_54, (ATerm) ATmakeAppl(sym_LChoice_2, l_54, m_54));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          j_54 = ATgetArgument(t, 0);
          m_54 = ATgetArgument(t, 1);
          t = j_54;
          if(match_cons(t, sym_Seq_2))
            {
              k_54 = ATgetArgument(t, 0);
              l_54 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, k_54, (ATerm) ATmakeAppl(sym_Seq_2, l_54, m_54));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              j_54 = ATgetArgument(t, 0);
              m_54 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_54;
          if(match_cons(t, sym_Choice_2))
            {
              k_54 = ATgetArgument(t, 0);
              l_54 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, k_54, (ATerm) ATmakeAppl(sym_Choice_2, l_54, m_54));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(l_0, _id, t);
      {
        ATerm u_13 (ATerm t)
        {
          ATerm k_38 = t;
          int l_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(l_0, t);
              ;
              LocalPopChoice(l_38);
            }
          else
            {
              t = k_38;
            }
          return(t);
        }
        t = Cons_2_0(_id, u_13, t);
      }
      ;
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
      {
        ATerm y_13 (ATerm t)
        {
          t = map1_1_0(l_0, t);
          return(t);
        }
        t = Cons_2_0(_id, y_13, t);
      }
    }
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm y_55 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_55, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_39), term_j_39));
  return(t);
}
ATerm a_14 (ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_56 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, a_56, term_j_39);
      ;
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
    }
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm i_56 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_56, term_j_39);
  return(t);
}
ATerm g_14 (ATerm t)
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_56 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, k_56, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_39), term_j_39));
      ;
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
    }
  return(t);
}
ATerm h_14 (ATerm t)
{
  ATerm s_56 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_56, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_39), term_j_39));
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_56 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, u_56, term_j_39);
      ;
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,i_55 = NULL,j_55 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      i_55 = ATgetArgument(t, 0);
      j_55 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, i_55, j_55);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          i_55 = ATgetArgument(t, 0);
          t = i_55;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_55 = ATgetFirst((ATermList) t);
              e_55 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, d_55, (ATerm) ATmakeAppl(sym_LChoices_1, e_55));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_n_36;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              i_55 = ATgetArgument(t, 0);
              t = i_55;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_55 = ATgetFirst((ATermList) t);
                  e_55 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, d_55, (ATerm) ATmakeAppl(sym_Choices_1, e_55));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_n_36;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  i_55 = ATgetArgument(t, 0);
                  t = i_55;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_55 = ATgetFirst((ATermList) t);
                      e_55 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_55, (ATerm) ATmakeAppl(sym_Seqs_1, e_55));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_q_39;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_55 = ATgetArgument(t, 0);
                      j_55 = ATgetArgument(t, 1);
                      g_55 = ATgetArgument(t, 2);
                      f_55 = ATgetArgument(t, 3);
                      {
                        ATerm w_55 = NULL,x_55 = NULL;
                        t = j_55;
                        t = map1_1_0(z_13, t);
                        w_55 = t;
                        t = g_55;
                        t = map1_1_0(a_14, t);
                        x_55 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, i_55, w_55, x_55, f_55);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          i_55 = ATgetArgument(t, 0);
                          j_55 = ATgetArgument(t, 1);
                          g_55 = ATgetArgument(t, 2);
                          f_55 = ATgetArgument(t, 3);
                          {
                            ATerm t_39 = t;
                            int u_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_56 = NULL,h_56 = NULL;
                                t = g_55;
                                t = map1_1_0(b_14, t);
                                g_56 = t;
                                t = j_55;
                                t = map_1_0(g_14, t);
                                h_56 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_55, h_56, g_56, f_55);
                                ;
                                LocalPopChoice(u_39);
                              }
                            else
                              {
                                t = t_39;
                                {
                                  ATerm q_56 = NULL,r_56 = NULL;
                                  t = j_55;
                                  t = map1_1_0(h_14, t);
                                  q_56 = t;
                                  t = g_55;
                                  t = map_1_0(i_14, t);
                                  r_56 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, i_55, q_56, r_56, f_55);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              i_55 = ATgetArgument(t, 0);
                              j_55 = ATgetArgument(t, 1);
                              g_55 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, j_55, (ATerm) ATmakeAppl(sym_Op_2, term_v_39, (ATerm) ATinsert(ATinsert(ATempty, g_55), i_55)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  i_55 = ATgetArgument(t, 0);
                                  j_55 = ATgetArgument(t, 1);
                                  g_55 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, g_55)), i_55), (ATerm) ATmakeAppl(sym_Build_1, j_55)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      i_55 = ATgetArgument(t, 0);
                                      j_55 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_55, (ATerm) ATmakeAppl(sym_Match_1, j_55));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          i_55 = ATgetArgument(t, 0);
                                          j_55 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_55), j_55);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              i_55 = ATgetArgument(t, 0);
                                              j_55 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_55), i_55);
                                        }
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
ATerm k_14 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      s_58 = ATgetArgument(t, 0);
      t = s_58;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_n_36;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          s_58 = ATgetArgument(t, 0);
          t = s_58;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_q_39;
        }
      else
        {
          ATerm j_40 = t;
          int k_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  s_58 = ATgetArgument(t, 0);
                  {
                    ATerm n_40 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(k_40);
              t = s_58;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_n_36;
            }
          else
            {
              t = j_40;
              {
                ATerm o_40 = t;
                int r_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm s_40 = ATgetArgument(t, 0);
                        t_58 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_40);
                    t = t_58;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_n_36;
                  }
                else
                  {
                    t = o_40;
                    {
                      ATerm t_40 = t;
                      int u_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm v_40 = ATgetArgument(t, 0);
                              t_58 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(u_40);
                          t = t_58;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_n_36;
                        }
                      else
                        {
                          t = t_40;
                          if(match_cons(t, sym_Some_1))
                            {
                              s_58 = ATgetArgument(t, 0);
                              t = s_58;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_n_36;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  s_58 = ATgetArgument(t, 0);
                                  t = s_58;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_n_36;
                                }
                              else
                                {
                                  ATerm w_40 = t;
                                  int g_41 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm h_41 = ATgetArgument(t, 0);
                                          t_58 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(g_41);
                                      t = t_58;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_n_36;
                                    }
                                  else
                                    {
                                      t = w_40;
                                      {
                                        ATerm i_41 = t;
                                        int m_41 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm n_41 = ATgetArgument(t, 0);
                                                t_58 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(m_41);
                                            t = t_58;
                                            t = fetch_1_0(k_14, t);
                                            t = term_n_36;
                                          }
                                        else
                                          {
                                            t = i_41;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                s_58 = ATgetArgument(t, 0);
                                                t_58 = ATgetArgument(t, 1);
                                                t = t_58;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = s_58;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm o_41 = t;
                                                        int q_41 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = t_58;
                                                            ;
                                                            LocalPopChoice(q_41);
                                                          }
                                                        else
                                                          {
                                                            t = o_41;
                                                            t = s_58;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = s_58;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = s_58;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = t_58;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    s_58 = ATgetArgument(t, 0);
                                                    t_58 = ATgetArgument(t, 1);
                                                    t = t_58;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = s_58;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm r_41 = t;
                                                            int s_41 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = t_58;
                                                                ;
                                                                LocalPopChoice(s_41);
                                                              }
                                                            else
                                                              {
                                                                t = r_41;
                                                                t = s_58;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = s_58;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = s_58;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = t_58;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        s_58 = ATgetArgument(t, 0);
                                                        t = s_58;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_n_36;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            s_58 = ATgetArgument(t, 0);
                                                            t_58 = ATgetArgument(t, 1);
                                                            u_58 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = u_58;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_58, t_58);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    }
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm s_59 = NULL,u_59 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_59 = ATgetArgument(t, 0);
      t = u_59;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_q_39;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_59 = ATgetArgument(t, 0);
          t = u_59;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_n_36;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_59 = ATgetArgument(t, 0);
              s_59 = ATgetArgument(t, 1);
              t = s_59;
              if(match_cons(t, sym_Id_0))
                {
                  t = u_59;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm t_41 = t;
                      int u_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_59;
                          ;
                          LocalPopChoice(u_41);
                        }
                      else
                        {
                          t = t_41;
                          t = u_59;
                        }
                    }
                  else
                    {
                      t = u_59;
                    }
                }
              else
                {
                  t = u_59;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = s_59;
                }
            }
          else
            {
              ATerm v_41 = t;
              int w_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      u_59 = ATgetArgument(t, 0);
                      {
                        ATerm x_41 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_41);
                  t = u_59;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_q_39;
                }
              else
                {
                  t = v_41;
                  {
                    ATerm z_41 = t;
                    int b_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm c_42 = ATgetArgument(t, 0);
                            s_59 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_42);
                        t = s_59;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_q_39;
                      }
                    else
                      {
                        t = z_41;
                        {
                          ATerm d_42 = t;
                          int k_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm l_42 = ATgetArgument(t, 0);
                                  s_59 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(k_42);
                              t = s_59;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_q_39;
                            }
                          else
                            {
                              t = d_42;
                              if(match_cons(t, sym_All_1))
                                {
                                  u_59 = ATgetArgument(t, 0);
                                  t = u_59;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_q_39;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      u_59 = ATgetArgument(t, 0);
                                      t = u_59;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_q_39;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          u_59 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = u_59;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_q_39;
                                    }
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(n_42);
    }
  else
    {
      t = m_42;
      {
        ATerm o_42 = t;
        int p_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(p_42);
          }
        else
          {
            t = o_42;
            {
              ATerm q_42 = t;
              int r_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(r_42);
                }
              else
                {
                  t = q_42;
                  {
                    ATerm t_42 = t;
                    int u_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(u_42);
                      }
                    else
                      {
                        t = t_42;
                        {
                          ATerm v_42 = t;
                          int w_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(w_42);
                            }
                          else
                            {
                              t = v_42;
                              {
                                ATerm y_42 = t;
                                int z_42 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_60 = NULL,t_60 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        s_60 = ATgetArgument(t, 0);
                                        t_60 = ATgetArgument(t, 1);
                                        t = s_60;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_60;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            s_60 = ATgetArgument(t, 0);
                                            t_60 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = s_60;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_60;
                                      }
                                    ;
                                    LocalPopChoice(z_42);
                                  }
                                else
                                  {
                                    t = y_42;
                                    {
                                      ATerm a_43 = t;
                                      int b_43 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(b_43);
                                        }
                                      else
                                        {
                                          t = a_43;
                                          {
                                            ATerm c_43 = t;
                                            int d_43 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(d_43);
                                              }
                                            else
                                              {
                                                t = c_43;
                                                {
                                                  ATerm a_61 = NULL,b_61 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      a_61 = ATgetArgument(t, 0);
                                                      b_61 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = a_61;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = b_61;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm o_135 (ATerm), ATerm t)
{
  ATerm d_61 (ATerm t)
  {
    ATerm e_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_135(t);
        t = d_61(t);
        ;
        LocalPopChoice(h_43);
      }
    else
      {
        t = e_43;
      }
    return(t);
  }
  t = d_61(t);
  return(t);
}
ATerm downup_1_0 (ATerm t_118 (ATerm), ATerm t)
{
  t = t_118(t);
  {
    ATerm l_14 (ATerm t)
    {
      t = downup_1_0(t_118, t);
      return(t);
    }
    t = SRTS_all(l_14, t);
    t = t_118(t);
  }
  return(t);
}
ATerm o_14 (ATerm t)
{
  t = downup_1_0(s_14, t);
  {
    ATerm i_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        ;
        LocalPopChoice(p_43);
      }
    else
      {
        t = i_43;
      }
  }
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(o_14, t);
  t = map_1_0(inline_sdef_0_0, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_3 = NULL,o_3 = NULL;
  h_61 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_61);
  e_61 = t;
  t = f_61;
  t = r_102(t);
  g_61 = t;
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_61);
  i_3 = t;
  t = SSLsetAnnotations(i_3, e_61);
  return(t);
}
ATerm Cons_2_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm t)
{
  ATerm k_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,q_3 = NULL,u_3 = NULL;
  q_61 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_61 = ATgetFirst((ATermList) t);
      n_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_61);
  k_61 = t;
  t = m_61;
  t = l_102(t);
  o_61 = t;
  t = n_61;
  t = m_102(t);
  p_61 = t;
  u_3 = t;
  t = (ATerm) ATinsert(CheckATermList(p_61), o_61);
  q_3 = t;
  t = SSLsetAnnotations(q_3, k_61);
  return(t);
}
ATerm Specification_1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,y_3 = NULL,b_4 = NULL;
  w_61 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_61);
  t_61 = t;
  t = u_61;
  t = w_102(t);
  v_61 = t;
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_61);
  y_3 = t;
  t = SSLsetAnnotations(y_3, t_61);
  return(t);
}
ATerm _2_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,d_4 = NULL,e_4 = NULL;
  e_62 = t;
  if(match_cons(t, sym__2))
    {
      a_62 = ATgetArgument(t, 0);
      b_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_62);
  z_61 = t;
  t = a_62;
  t = w_97(t);
  c_62 = t;
  t = b_62;
  t = x_97(t);
  d_62 = t;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_62, d_62);
  d_4 = t;
  t = SSLsetAnnotations(d_4, z_61);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm f_146 (ATerm), ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
  if(match_cons(t, sym__2))
    {
      h_62 = ATgetArgument(t, 0);
      i_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_62, term_q_43);
  t = open_stream_0_0(t);
  j_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_62, i_62);
  t = f_146(t);
  t = fclose_0_0(t);
  t = i_62;
  return(t);
}
ATerm x_14 (ATerm t)
{
  t = fetch_1_0(z_14, t);
  return(t);
}
ATerm y_14 (ATerm t)
{
  t = WriteToFile_1_0(a_15, t);
  return(t);
}
ATerm z_14 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_43 = ATgetArgument(t, 0);
      if(match_cons(w_43, sym_Stream_1))
        {
          m_62 = ATgetArgument(w_43, 0);
        }
      else
        _fail(t);
      n_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(m_62, n_62);
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_62);
  return(t);
}
ATerm b_15 (ATerm t)
{
  t = WriteToFile_1_0(c_15, t);
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_43 = ATgetArgument(t, 0);
      if(match_cons(y_43, sym_Stream_1))
        {
          p_62 = ATgetArgument(y_43, 0);
        }
      else
        _fail(t);
      q_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(p_62, q_62);
  r_62 = t;
  t = term_z_43;
  s_62 = t;
  t = SSL_fputc(s_62, r_62);
  t_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_62);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL;
  k_62 = t;
  {
    ATerm t_14 (ATerm t)
    {
      ATerm a_44 = t;
      int b_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((l_62 != NULL) && (l_62 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_14, t);
          ;
          LocalPopChoice(b_44);
        }
      else
        {
          t = a_44;
          t = term_g_44;
          if(((l_62 != NULL) && (l_62 != t)))
            _fail(t);
          else
            l_62 = t;
        }
      return(t);
    }
    t = _2_0(t_14, _id, t);
    t = k_62;
    {
      ATerm w_14 (ATerm t)
      {
        ATerm v_14 = NULL;
        v_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_62), v_14);
        return(t);
      }
      t = _2_0(_id, w_14, t);
      {
        ATerm h_44 = t;
        int m_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(x_14, y_14, t);
            ;
            LocalPopChoice(m_44);
          }
        else
          {
            t = h_44;
            t = _2_0(_id, b_15, t);
          }
      }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm u_140 (ATerm), ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  u_62 = t;
  t = dtime_0_0(t);
  t = u_62;
  t = u_140(t);
  v_62 = t;
  t = dtime_0_0(t);
  w_62 = t;
  t = v_62;
  if(match_cons(t, sym__2))
    {
      x_62 = ATgetArgument(t, 0);
      y_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_62), (ATerm) ATmakeAppl(sym_Runtime_1, w_62)), y_62);
  return(t);
}
ATerm m_63 (ATerm g_63, ATerm t)
{
  t = SSL_fclose(g_63);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL;
  k_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_63 = ATgetArgument(t, 0);
      {
        ATerm n_44 = t;
        int w_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_63);
            ;
            LocalPopChoice(w_44);
          }
        else
          {
            t = n_44;
            t = m_63(k_63, t);
          }
      }
    }
  else
    {
      t = m_63(k_63, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_63 = NULL;
  t = SSL_stdin_stream();
  n_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_63);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_63 = NULL;
  t = SSL_stdout_stream();
  o_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_63);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_63 = NULL;
  t = SSL_stderr_stream();
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_63);
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm x_63 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      x_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_63;
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm b_64 = NULL;
  b_64 = t;
  t = SSL_is_string(b_64);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_44 = ATgetArgument(t, 0);
      ATerm g_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_45 = t;
    int v_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_15 = NULL,h_15 = NULL;
        g_15 = t;
        t = SSL_explode_term(g_15);
        if(match_cons(t, sym__2))
          {
            ATerm w_45 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_45) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_45 = ATgetArgument(t, 1);
              if(((ATgetType(z_45) == AT_LIST) && !(ATisEmpty(z_45))))
                {
                  h_15 = ATgetFirst((ATermList) z_45);
                  {
                    ATerm a_46 = (ATerm) ATgetNext((ATermList) z_45);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_15;
        if(match_cons(t, sym_stderr_0))
          {
            t = h_15;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = h_15;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = h_15;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(v_45);
      }
    else
      {
        t = h_45;
        {
          ATerm b_46 = t;
          int c_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL;
              t = _2_0(d_15, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_63 = ATgetArgument(t, 0);
                  v_63 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(u_63, v_63);
              w_63 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_63);
              ;
              LocalPopChoice(c_46);
            }
          else
            {
              t = b_46;
              {
                ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL;
                t = _2_0(e_15, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_63 = ATgetArgument(t, 0);
                    z_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_63, z_63);
                a_64 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, a_64);
              }
            }
        }
      }
  }
  return(t);
}
ATerm f_15 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
  ATerm h_46 = t;
  int j_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_64 = NULL;
      f_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_64, term_n_46);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_46);
    }
  else
    {
      t = h_46;
      t = debug_1_0(f_15, t);
      _fail(t);
    }
  c_64 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(e_64);
  d_64 = t;
  t = c_64;
  t = fclose_0_0(t);
  t = d_64;
  return(t);
}
ATerm fetch_1_0 (ATerm c_125 (ATerm), ATerm t)
{
  ATerm k_64 (ATerm t)
  {
    ATerm o_46 = t;
    int p_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(c_125, _id, t);
        ;
        LocalPopChoice(p_46);
      }
    else
      {
        t = o_46;
        t = Cons_2_0(_id, k_64, t);
      }
    return(t);
  }
  t = k_64(t);
  return(t);
}
ATerm debug_1_0 (ATerm d_146 (ATerm), ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
  l_64 = t;
  t = d_146(t);
  m_64 = t;
  t = term_d_19;
  n_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_64), m_64);
  o_64 = t;
  t = SSL_printnl(n_64, o_64);
  t = l_64;
  return(t);
}
ATerm i_15 (ATerm t)
{
  ATerm q_46 = t;
  int r_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_46);
    }
  else
    {
      t = q_46;
    }
  return(t);
}
ATerm j_15 (ATerm t)
{
  t = term_s_46;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_46 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_64 = NULL;
      v_64 = t;
      t = SSL_is_string(v_64);
      ;
      LocalPopChoice(k_47);
    }
  else
    {
      t = t_46;
      {
        ATerm l_47 = t;
        int m_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_15, t);
            ;
            LocalPopChoice(m_47);
          }
        else
          {
            t = l_47;
            {
              ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL;
              g_65 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_65 = ATgetArgument(t, 0);
                  t = h_65;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_65 = ATgetArgument(t, 0);
                      t = h_65;
                      {
                        ATerm n_47 = t;
                        int o_47 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_47);
                          }
                        else
                          {
                            t = n_47;
                            t = debug_1_0(j_15, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_16 = NULL,f_16 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_65 = ATgetArgument(t, 0);
                          i_65 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_65;
                      t = eval_config_0_0(t);
                      c_16 = t;
                      t = i_65;
                      t = eval_config_0_0(t);
                      f_16 = t;
                      t = SSL_strcat(c_16, f_16);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL;
  n_65 = t;
  t = term_p_47;
  o_65 = t;
  t = SSL_table_get(o_65, n_65);
  {
    ATerm q_47 = t;
    int r_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_65 = NULL,q_65 = NULL;
        t = eval_config_0_0(t);
        p_65 = t;
        t = term_p_47;
        q_65 = t;
        t = SSL_table_put(q_65, n_65, p_65);
        t = p_65;
        ;
        LocalPopChoice(r_47);
      }
    else
      {
        t = q_47;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_139 (ATerm), ATerm t)
{
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_65 = NULL,t_65 = NULL;
      r_65 = t;
      t = term_u_47;
      t = get_config_0_0(t);
      t_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_65, term_v_47);
      t = geq_0_0(t);
      t = r_65;
      t = i_139(t);
      ;
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
    }
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm v_65 = NULL;
  v_65 = t;
  if(match_string(t, "-k"))
    {
      t = v_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_65;
    }
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  w_65 = t;
  t = SSL_string_to_int(w_65);
  x_65 = t;
  t = term_p_47;
  y_65 = t;
  t = term_w_47;
  z_65 = t;
  t = SSL_table_put(y_65, z_65, x_65);
  t = w_65;
  return(t);
}
ATerm n_15 (ATerm t)
{
  t = term_x_47;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_15, m_15, n_15, t);
  return(t);
}
ATerm o_15 (ATerm t)
{
  ATerm b_66 = NULL;
  b_66 = t;
  if(match_string(t, "-S"))
    {
      t = b_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_66;
    }
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  t = term_p_47;
  c_66 = t;
  t = term_u_47;
  d_66 = t;
  t = term_s_30;
  e_66 = t;
  t = SSL_table_put(c_66, d_66, e_66);
  t = term_y_47;
  return(t);
}
ATerm q_15 (ATerm t)
{
  t = term_z_47;
  return(t);
}
ATerm s_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL;
  f_66 = t;
  t = SSL_string_to_int(f_66);
  g_66 = t;
  t = term_p_47;
  h_66 = t;
  t = term_u_47;
  i_66 = t;
  t = SSL_table_put(h_66, i_66, g_66);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_66);
  return(t);
}
ATerm u_15 (ATerm t)
{
  t = term_a_48;
  return(t);
}
ATerm v_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  t = term_p_47;
  j_66 = t;
  t = term_b_48;
  k_66 = t;
  t = term_c_19;
  l_66 = t;
  t = SSL_table_put(j_66, k_66, l_66);
  t = term_c_48;
  return(t);
}
ATerm x_15 (ATerm t)
{
  t = term_d_48;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_48 = t;
  int f_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_15, p_15, q_15, t);
      ;
      LocalPopChoice(f_48);
    }
  else
    {
      t = e_48;
      {
        ATerm g_48 = t;
        int h_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_15, t_15, u_15, t);
            ;
            LocalPopChoice(h_48);
          }
        else
          {
            t = g_48;
            t = Option_3_0(v_15, w_15, x_15, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_66 = NULL;
      t = term_c_19;
      t = c_0(t);
      q_66 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_48, term_j_48, q_66);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_66 = ATgetFirst((ATermList) t);
          p_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_66;
      t = a_0(t);
      t = term_c_19;
      t = b_0(t);
      t_66 = t;
      t = (ATerm) ATinsert(CheckATermList(p_66), t_66);
    }
  return(t);
}
ATerm b_16 (ATerm t)
{
  ATerm v_66 = NULL;
  v_66 = t;
  if(match_string(t, "-o"))
    {
      t = v_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_66;
    }
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
  w_66 = t;
  t = term_p_47;
  x_66 = t;
  t = term_k_48;
  y_66 = t;
  t = SSL_table_put(x_66, y_66, w_66);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_66);
  return(t);
}
ATerm i_16 (ATerm t)
{
  t = term_l_48;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_16, h_16, i_16, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
  if(match_cons(t, sym__3))
    {
      b_67 = ATgetArgument(t, 0);
      c_67 = ATgetArgument(t, 1);
      d_67 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_67, c_67);
  {
    ATerm m_48 = t;
    int n_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_48 = ATgetArgument(t, 0);
            ATerm p_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_67, c_67);
        ;
        LocalPopChoice(n_48);
      }
    else
      {
        t = m_48;
        t = (ATerm) ATempty;
      }
    e_67 = t;
    t = (ATerm) ATinsert(CheckATermList(e_67), d_67);
    f_67 = t;
    t = SSL_table_put(b_67, c_67, f_67);
    t = (ATerm) ATmakeAppl(sym__3, b_67, c_67, d_67);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_67 = NULL;
      t = term_c_19;
      t = j_0(t);
      r_67 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_48, term_j_48, r_67);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm v_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_67 = ATgetFirst((ATermList) t);
          o_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_67 = ATgetFirst((ATermList) t);
          q_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_67;
      t = h_0(t);
      t = p_67;
      t = i_0(t);
      v_67 = t;
      t = (ATerm) ATinsert(CheckATermList(q_67), v_67);
    }
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm x_67 = NULL;
  x_67 = t;
  if(match_string(t, "-i"))
    {
      t = x_67;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_67;
    }
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL;
  y_67 = t;
  t = term_p_47;
  z_67 = t;
  t = term_q_48;
  a_68 = t;
  t = SSL_table_put(z_67, a_68, y_67);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_67);
  return(t);
}
ATerm l_16 (ATerm t)
{
  t = term_r_48;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_16, k_16, l_16, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_19;
  t = whoami_0_0(t);
  b_68 = t;
  t = term_d_19;
  c_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_48), b_68);
  d_68 = t;
  t = SSL_printnl(c_68, d_68);
  t = term_h_19;
  e_68 = t;
  t = SSL_exit(e_68);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_48;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t)
{
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_129(t);
      ;
      LocalPopChoice(v_48);
    }
  else
    {
      t = u_48;
      {
        ATerm h_68 = NULL,i_68 = NULL,l_68 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_68 = ATgetFirst((ATermList) t);
            i_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_68;
        t = foldr_2_0(t_129, u_129, t);
        l_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_68, l_68);
        t = u_129(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_16 (ATerm t)
{
  t = term_s_30;
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm v_16 = NULL,a_17 = NULL;
  if(match_cons(t, sym__2))
    {
      v_16 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_48 = t;
    int x_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_16, a_17);
        ;
        LocalPopChoice(x_48);
      }
    else
      {
        t = w_48;
        t = SSL_addr(v_16, a_17);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_68 = NULL,m_16 = NULL,q_16 = NULL;
  t = times_0_0(t);
  m_16 = t;
  t = SSL_explode_term(m_16);
  if(match_cons(t, sym__2))
    {
      ATerm y_48 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_16;
  t = foldr_2_0(o_16, r_16, t);
  o_68 = t;
  t = SSL_TicksToSeconds(o_68);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  e_69 = t;
  if(match_cons(t, sym__2))
    {
      f_69 = ATgetArgument(t, 0);
      g_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_48 = t;
    int a_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_69;
        if((f_69 != t))
          {
            _fail(t);
          }
        t = e_69;
        ;
        LocalPopChoice(a_49);
      }
    else
      {
        t = z_48;
        t = e_69;
        {
          ATerm b_49 = t;
          int c_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_69, g_69);
              ;
              LocalPopChoice(c_49);
            }
          else
            {
              t = b_49;
              t = SSL_gtr(f_69, g_69);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_69, g_69);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_139 (ATerm), ATerm t)
{
  ATerm d_49 = t;
  int e_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_69 = NULL,l_69 = NULL;
      j_69 = t;
      t = term_u_47;
      t = get_config_0_0(t);
      l_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_69, term_h_19);
      t = geq_0_0(t);
      t = j_69;
      t = h_139(t);
      ;
      LocalPopChoice(e_49);
    }
  else
    {
      t = d_49;
    }
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
  t = run_time_0_0(t);
  n_69 = t;
  t = term_c_19;
  t = whoami_0_0(t);
  o_69 = t;
  t = term_d_19;
  p_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_49), n_69), term_f_49), o_69);
  q_69 = t;
  t = SSL_printnl(p_69, q_69);
  t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_49), n_69), term_f_49), o_69));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_69 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_30;
  r_69 = t;
  t = SSL_exit(r_69);
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm k_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_49);
    }
  else
    {
      t = k_49;
      {
        ATerm m_49 = t;
        int n_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(n_49);
          }
        else
          {
            t = m_49;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_141 (ATerm), ATerm t)
{
  ATerm o_49 = t;
  int q_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_49;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_49);
    }
  else
    {
      t = o_49;
      t = fetch_1_0(t_16, t);
    }
  t = s_141(t);
  return(t);
}
ATerm map_1_0 (ATerm s_124 (ATerm), ATerm t)
{
  ATerm s_69 (ATerm t)
  {
    ATerm s_49 = t;
    int v_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(v_49);
      }
    else
      {
        t = s_49;
        t = Cons_2_0(s_124, s_69, t);
      }
    return(t);
  }
  t = s_69(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_69 = ATgetFirst((ATermList) t);
      v_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_70 = NULL,e_70 = NULL;
        t = v_69;
        t = f_0(t);
        d_70 = t;
        t = u_69;
        t = e_0(t);
        e_70 = t;
        t = v_69;
        {
          ATerm u_16 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(d_70), e_70);
            return(t);
          }
          t = reverse_acc_2_0(e_0, u_16, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_19;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm h_115 (ATerm), ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,f_4 = NULL,g_4 = NULL;
  i_70 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_70);
  f_70 = t;
  t = g_70;
  t = h_115(t);
  h_70 = t;
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_70);
  f_4 = t;
  t = SSLsetAnnotations(f_4, f_70);
  return(t);
}
ATerm w_16 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm x_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm n_70 = NULL;
  n_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_70), term_y_49);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL;
  ATerm z_49 = t;
  int a_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_48;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_50);
    }
  else
    {
      t = z_49;
      t = fetch_1_0(w_16, t);
    }
  t = term_g_50;
  t = echo_0_0(t);
  t = term_i_48;
  l_70 = t;
  t = term_j_48;
  m_70 = t;
  t = SSL_table_get(l_70, m_70);
  t = reverse_acc_2_0(_id, x_16, t);
  t = map_1_0(y_16, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,i_4 = NULL,k_4 = NULL;
  r_70 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      p_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_70);
  o_70 = t;
  t = p_70;
  t = i_115(t);
  q_70 = t;
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_70);
  i_4 = t;
  t = SSLsetAnnotations(i_4, o_70);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  v_70 = t;
  {
    ATerm h_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_70;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_50 = ATgetFirst((ATermList) t);
                ATerm k_50 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_70;
          }
        ;
        LocalPopChoice(i_50);
      }
    else
      {
        t = h_50;
        t = (ATerm) ATinsert(ATempty, v_70);
      }
    w_70 = t;
    t = term_g_44;
    x_70 = t;
    t = SSL_printnl(x_70, w_70);
    t = v_70;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_48;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
  t = term_p_47;
  b_71 = t;
  t = term_l_50;
  c_71 = t;
  t = term_c_19;
  d_71 = t;
  t = SSL_table_put(b_71, c_71, d_71);
  t = term_o_50;
  return(t);
}
ATerm i_17 (ATerm t)
{
  t = term_p_50;
  return(t);
}
ATerm j_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
  t = term_p_47;
  e_71 = t;
  t = term_l_50;
  f_71 = t;
  t = term_c_19;
  g_71 = t;
  t = SSL_table_put(e_71, f_71, g_71);
  t = term_p_47;
  h_71 = t;
  t = term_s_50;
  i_71 = t;
  t = term_c_19;
  j_71 = t;
  t = SSL_table_put(h_71, i_71, j_71);
  t = term_t_50;
  return(t);
}
ATerm l_17 (ATerm t)
{
  t = term_u_50;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_17, d_17, i_17, t);
      ;
      LocalPopChoice(x_50);
    }
  else
    {
      t = w_50;
      t = Option_3_0(j_17, k_17, l_17, t);
    }
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
  m_71 = t;
  t = term_p_47;
  n_71 = t;
  t = term_t_48;
  o_71 = t;
  t = SSL_table_put(n_71, o_71, m_71);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_71);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_143 (ATerm), ATerm t)
{
  ATerm l_71 = NULL;
  l_71 = t;
  {
    ATerm z_50 = t;
    int a_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_51;
        t = v_143(t);
        ;
        LocalPopChoice(a_51);
      }
    else
      {
        t = z_50;
      }
    t = l_71;
    {
      ATerm n_17 (ATerm t)
      {
        ATerm g_51 = t;
        int h_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_51 = t;
            int k_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_51);
              }
            else
              {
                t = j_51;
                t = v_143(t);
                t = Cons_2_0(_id, n_17, t);
              }
            ;
            LocalPopChoice(h_51);
          }
        else
          {
            t = g_51;
            {
              ATerm q_71 = NULL,r_71 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_71 = ATgetFirst((ATermList) t);
                  r_71 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_71), (ATerm) ATmakeAppl(sym_Undefined_1, q_71));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_17, n_17, t);
    }
  }
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm f_72 = NULL;
  f_72 = t;
  if(match_string(t, "--help"))
    {
      t = f_72;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_72;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_72;
        }
    }
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  t = term_p_47;
  g_72 = t;
  t = term_r_49;
  h_72 = t;
  t = term_c_19;
  i_72 = t;
  t = SSL_table_put(g_72, h_72, i_72);
  t = term_l_51;
  return(t);
}
ATerm s_17 (ATerm t)
{
  t = term_m_51;
  return(t);
}
ATerm t_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_143 (ATerm), ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL;
  y_71 = t;
  t = term_i_48;
  z_71 = t;
  t = term_j_48;
  a_72 = t;
  t = (ATerm) ATempty;
  b_72 = t;
  t = SSL_table_put(z_71, a_72, b_72);
  t = y_71;
  {
    ATerm o_17 (ATerm t)
    {
      ATerm n_51 = t;
      int o_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_143(t);
          ;
          LocalPopChoice(o_51);
        }
      else
        {
          t = n_51;
          {
            ATerm p_51 = t;
            int q_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_17, q_17, s_17, t);
                ;
                LocalPopChoice(q_51);
              }
            else
              {
                t = p_51;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_17, t);
    {
      ATerm r_51 = t;
      int s_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_72 = NULL;
          u_72 = t;
          {
            ATerm t_51 = t;
            int u_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_17 = NULL;
                t = u_72;
                {
                  ATerm v_51 = t;
                  int w_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_49;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(w_51);
                    }
                  else
                    {
                      t = v_51;
                      t = fetch_1_0(t_17, t);
                    }
                  t = u_72;
                  t = default_system_usage_0_0(t);
                  t = term_s_30;
                  r_17 = t;
                  t = SSL_exit(r_17);
                }
                ;
                LocalPopChoice(u_51);
              }
            else
              {
                t = t_51;
                {
                  ATerm v_17 = NULL;
                  t = term_l_50;
                  t = get_config_0_0(t);
                  t = u_72;
                  t = default_system_about_0_0(t);
                  t = term_s_30;
                  v_17 = t;
                  t = SSL_exit(v_17);
                }
              }
          }
          ;
          LocalPopChoice(s_51);
        }
      else
        {
          t = r_51;
          {
            ATerm x_51 = t;
            int y_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL;
                ATerm u_17 (ATerm t)
                {
                  ATerm w_17 (ATerm t)
                  {
                    if(((c_72 != NULL) && (c_72 != t)))
                      _fail(t);
                    else
                      c_72 = t;
                    return(t);
                  }
                  t = Undefined_1_0(w_17, t);
                  return(t);
                }
                t = fetch_1_0(u_17, t);
                t = term_d_19;
                v_72 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_72)), term_z_51);
                w_72 = t;
                t = SSL_printnl(v_72, w_72);
                t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_72)), term_z_51));
                t = default_system_usage_0_0(t);
                t = term_h_19;
                x_72 = t;
                t = SSL_exit(x_72);
                ;
                LocalPopChoice(y_51);
              }
            else
              {
                t = x_51;
              }
          }
        }
      d_72 = t;
      t = term_i_48;
      e_72 = t;
      t = SSL_table_destroy(e_72);
      t = d_72;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL;
  t = parse_options_1_0(u_141, t);
  b_73 = t;
  t = term_a_52;
  c_73 = t;
  t = SSL_table_create(c_73);
  t = term_a_52;
  d_73 = t;
  t = term_h_52;
  e_73 = t;
  t = SSL_table_put(d_73, e_73, b_73);
  t = b_73;
  t = w_141(t);
  {
    ATerm i_52 = t;
    int j_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_141, t);
        ;
        LocalPopChoice(j_52);
      }
    else
      {
        t = i_52;
        {
          ATerm k_52 = t;
          int n_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_141(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_52);
            }
          else
            {
              t = k_52;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_17 (ATerm t)
{
  t = if_verbose2_1_0(q_18, t);
  return(t);
}
ATerm n_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_18 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
  t = term_p_47;
  f_73 = t;
  t = term_o_52;
  g_73 = t;
  t = term_c_19;
  h_73 = t;
  t = SSL_table_put(f_73, g_73, h_73);
  t = term_p_52;
  return(t);
}
ATerm p_18 (ATerm t)
{
  t = term_r_52;
  return(t);
}
ATerm q_18 (ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  i_73 = t;
  t = term_t_48;
  t = get_config_0_0(t);
  j_73 = t;
  t = term_d_19;
  k_73 = t;
  t = (ATerm) ATinsert(ATempty, j_73);
  l_73 = t;
  t = SSL_printnl(k_73, l_73);
  t = i_73;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_141 (ATerm), ATerm e_141 (ATerm), ATerm f_141 (ATerm), ATerm t)
{
  ATerm x_17 (ATerm t)
  {
    ATerm s_52 = t;
    int x_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_141(t);
        ;
        LocalPopChoice(x_52);
      }
    else
      {
        t = s_52;
        {
          ATerm y_52 = t;
          int z_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_52);
            }
          else
            {
              t = y_52;
              {
                ATerm b_53 = t;
                int c_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(c_53);
                  }
                else
                  {
                    t = b_53;
                    {
                      ATerm d_53 = t;
                      int e_53 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_18, o_18, p_18, t);
                          ;
                          LocalPopChoice(e_53);
                        }
                      else
                        {
                          t = d_53;
                          {
                            ATerm f_53 = t;
                            int g_53 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(g_53);
                              }
                            else
                              {
                                t = f_53;
                                t = keep_option_0_0(t);
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
  ATerm k_18 (ATerm t)
  {
    ATerm m_73 = NULL,n_73 = NULL,z_17 = NULL;
    m_73 = t;
    {
      ATerm h_53 = t;
      int i_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_18 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((n_73 != NULL) && (n_73 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_73 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_18, t);
          ;
          LocalPopChoice(i_53);
        }
      else
        {
          t = h_53;
          t = term_p_53;
          n_73 = t;
        }
      t = not_null(n_73);
      t = ReadFromFile_0_0(t);
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_73, z_17);
      t = apply_strategy_1_0(d_141, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_17, f_141, y_17, k_18, t);
  return(t);
}
ATerm t_18 (ATerm t)
{
  t = _2_0(_id, u_18, t);
  return(t);
}
ATerm u_18 (ATerm t)
{
  t = Specification_1_0(v_18, t);
  return(t);
}
ATerm v_18 (ATerm t)
{
  t = Cons_2_0(_id, w_18, t);
  return(t);
}
ATerm w_18 (ATerm t)
{
  t = Cons_2_0(y_18, z_18, t);
  return(t);
}
ATerm y_18 (ATerm t)
{
  t = Strategies_1_0(inline_sdefs_0_0, t);
  return(t);
}
ATerm z_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_18, _fail, default_usage_0_0, t);
  return(t);
}
