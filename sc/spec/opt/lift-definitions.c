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
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_j_52;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_o_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_x_49;
ATerm term_s_49;
ATerm term_n_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_n_47;
ATerm term_k_47;
ATerm term_h_47;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_o_45;
ATerm term_l_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_j_41;
ATerm term_d_30;
ATerm term_r_27;
ATerm term_n_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_d_27;
ATerm term_n_23;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
void init_constant_terms (void)
{
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Op_2, term_d_27, (ATerm) ATempty);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_ConstType_1, term_f_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_42);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_44);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_47);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(sym__3, term_h_47, term_e_50, term_r_21);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm i_14 (ATerm);
ATerm j_14 (ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm s_11 (ATerm j_7, ATerm t_7, ATerm b_8, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm e_115 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm t_14 (ATerm);
ATerm u_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm a_15 (ATerm);
ATerm c_15 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm d_15 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm w_130 (ATerm), ATerm);
ATerm downup_1_0 (ATerm c_114 (ATerm), ATerm);
ATerm TopLevel_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_126 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm);
ATerm Let_2_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm);
ATerm g_15 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm);
ATerm diff_1_0 (ATerm k_122 (ATerm), ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm);
ATerm q_15 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm b_16 (ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm w_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm SuperCombinator_0_0 (ATerm);
ATerm partition_1_0 (ATerm y_126 (ATerm), ATerm);
ATerm b_17 (ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm LiftFromLet_0_0 (ATerm);
ATerm union_1_0 (ATerm p_122 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm CollectSplit_2_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm);
ATerm collect_split_1_0 (ATerm j_124 (ATerm), ATerm);
ATerm lift_sdefs_0_0 (ATerm);
ATerm assert_1_0 (ATerm m_126 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm h_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm declare_standard_strategies_0_0 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm t_17 (ATerm);
ATerm u_17 (ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
ATerm x_17 (ATerm);
ATerm lift_definitions_0_0 (ATerm);
ATerm _2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm t_135 (ATerm), ATerm);
ATerm d_18 (ATerm);
ATerm e_18 (ATerm);
ATerm f_18 (ATerm);
ATerm g_18 (ATerm);
ATerm h_18 (ATerm);
ATerm i_18 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_138 (ATerm), ATerm);
ATerm c_37 (ATerm w_36, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_18 (ATerm);
ATerm k_18 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_120 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_120 (ATerm), ATerm);
ATerm m_18 (ATerm);
ATerm n_18 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm p_18 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_137 (ATerm), ATerm);
ATerm q_18 (ATerm);
ATerm r_18 (ATerm);
ATerm u_18 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm x_18 (ATerm);
ATerm y_18 (ATerm);
ATerm b_19 (ATerm);
ATerm c_19 (ATerm);
ATerm d_19 (ATerm);
ATerm e_19 (ATerm);
ATerm f_19 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm h_19 (ATerm);
ATerm i_19 (ATerm);
ATerm j_19 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm k_19 (ATerm);
ATerm l_19 (ATerm);
ATerm m_19 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_19 (ATerm);
ATerm o_19 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_137 (ATerm), ATerm);
ATerm p_19 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_19 (ATerm);
ATerm need_help_1_0 (ATerm t_139 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_120 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_110 (ATerm), ATerm);
ATerm s_19 (ATerm);
ATerm t_19 (ATerm);
ATerm v_19 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_110 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_19 (ATerm);
ATerm x_19 (ATerm);
ATerm y_19 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm c_20 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm);
ATerm g_20 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_141 (ATerm), ATerm);
ATerm m_20 (ATerm);
ATerm q_20 (ATerm);
ATerm w_20 (ATerm);
ATerm x_20 (ATerm);
ATerm parse_options_1_0 (ATerm v_141 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm);
ATerm d_21 (ATerm);
ATerm j_21 (ATerm);
ATerm k_21 (ATerm);
ATerm m_21 (ATerm);
ATerm o_21 (ATerm);
ATerm iowrap_3_0 (ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm);
ATerm q_21 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_0 = NULL,j_0 = NULL,r_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
  h_0 = t;
  t = term_r_21;
  t = whoami_0_0(t);
  j_0 = t;
  x_0 = t;
  t = term_s_21;
  r_0 = t;
  t = x_0;
  y_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_21), j_0), term_t_21);
  w_0 = t;
  t = SSL_printnl(r_0, w_0);
  a_1 = t;
  t = term_v_21;
  z_0 = t;
  t = SSL_exit(z_0);
  t = h_0;
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      m_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_0)), (ATerm) ATmakeAppl(sym_Seq_2, m_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_0)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      p_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_0)), (ATerm) ATmakeAppl(sym_Seq_2, p_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, q_0)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm w_21 = ATgetArgument(t, 1);
        if(match_cons(w_21, sym_Scope_2))
          {
            t_0 = ATgetArgument(w_21, 0);
            u_0 = ATgetArgument(w_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_0, t_0);
  {
    ATerm x_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_22 = ATgetArgument(t, 0);
            ATerm e_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_0;
        {
          ATerm h_14 (ATerm t)
          {
            t = t_0;
            return(t);
          }
          t = at_end_1_0(h_14, t);
        }
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = x_21;
        {
          ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL;
          d_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_0, t_0);
          c_1 = t;
          t = SSL_explode_term(c_1);
          if(match_cons(t, sym__2))
            {
              ATerm f_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_22) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_1;
          t = concat_0_0(t);
        }
      }
    v_0 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, v_0, u_0);
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,n_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_1;
  if(match_cons(t, sym_Build_1))
    {
      ATerm g_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_1;
  if(match_cons(t, sym_Where_1))
    {
      q_1 = ATgetArgument(t, 0);
      t = q_1;
      if(match_cons(t, sym_Prim_2))
        {
          k_1 = ATgetArgument(t, 0);
          l_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, k_1, l_1);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          q_1 = ATgetArgument(t, 0);
          r_1 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, q_1, r_1);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              q_1 = ATgetArgument(t, 0);
              r_1 = ATgetArgument(t, 1);
              s_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, q_1, r_1, s_1);
        }
    }
  return(t);
}
ATerm i_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_22 = ATgetArgument(t, 0);
      if(((ATgetType(k_22) != AT_LIST) || !(ATisEmpty(k_22))))
        _fail(t);
      {
        ATerm l_22 = ATgetArgument(t, 1);
        if(((ATgetType(l_22) != AT_LIST) || !(ATisEmpty(l_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_14 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,n_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
        {
          j_2 = ATgetFirst((ATermList) m_22);
          l_2 = (ATerm) ATgetNext((ATermList) m_22);
        }
      else
        _fail(t);
      {
        ATerm n_22 = ATgetArgument(t, 1);
        if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
          {
            k_2 = ATgetFirst((ATermList) n_22);
            n_2 = (ATerm) ATgetNext((ATermList) n_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_2, k_2), (ATerm) ATmakeAppl(sym__2, l_2, n_2));
  return(t);
}
ATerm k_14 (ATerm t)
{
  ATerm o_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      o_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_2), o_2);
  return(t);
}
ATerm l_14 (ATerm t)
{
  ATerm s_2 = NULL,u_2 = NULL;
  if(match_cons(t, sym__2))
    {
      s_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_2), (ATerm) ATmakeAppl(sym_Match_1, u_2));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm e_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_22 = ATgetArgument(t, 0);
      if(match_cons(u_22, sym_Build_1))
        {
          ATerm b_23 = ATgetArgument(u_22, 0);
          if(match_cons(b_23, sym_Op_2))
            {
              g_2 = ATgetArgument(b_23, 0);
              e_2 = ATgetArgument(b_23, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm a_23 = ATgetArgument(t, 1);
        if(match_cons(a_23, sym_Match_1))
          {
            ATerm e_23 = ATgetArgument(a_23, 0);
            if(match_cons(e_23, sym_Op_2))
              {
                if((g_2 != ATgetArgument(e_23, 0)))
                  {
                    _fail(ATgetArgument(e_23, 0));
                  }
                h_2 = ATgetArgument(e_23, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, e_2, h_2);
  t = genzip_4_0(i_14, j_14, k_14, l_14, t);
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_2), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, g_2, e_2)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if(match_cons(f_23, sym_Build_1))
        {
          ATerm h_23 = ATgetArgument(f_23, 0);
          if(match_cons(h_23, sym_Op_2))
            {
              v_2 = ATgetArgument(h_23, 0);
              {
                ATerm j_23 = ATgetArgument(h_23, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(match_cons(g_23, sym_Match_1))
          {
            ATerm k_23 = ATgetArgument(g_23, 0);
            if(match_cons(k_23, sym_Op_2))
              {
                w_2 = ATgetArgument(k_23, 0);
                {
                  ATerm l_23 = ATgetArgument(k_23, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, v_2, w_2);
  {
    ATerm m_23 = t;
    if((PushChoice() == 0))
      {
        ATerm x_2 = NULL;
        if(match_cons(t, sym__2))
          {
            x_2 = ATgetArgument(t, 0);
            if((x_2 != ATgetArgument(t, 1)))
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
        t = m_23;
      }
    t = term_n_23;
  }
  return(t);
}
ATerm s_11 (ATerm j_7, ATerm t_7, ATerm b_8, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, j_7, t_7);
  {
    ATerm p_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = p_23;
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              {
                ATerm x_23 = t;
                int y_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_9 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm d_24 = ATgetArgument(t, 0);
                        ATerm e_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = j_7;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm f_24 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = t_7;
                    if(match_cons(t, sym_Build_1))
                      {
                        i_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, i_9);
                    ;
                    LocalPopChoice(y_23);
                  }
                else
                  {
                    t = x_23;
                    {
                      ATerm g_24 = t;
                      int j_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(j_24);
                        }
                      else
                        {
                          t = g_24;
                          {
                            ATerm g_10 = NULL,i_10 = NULL,k_10 = NULL,u_10 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm k_24 = ATgetArgument(t, 0);
                                ATerm l_24 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = j_7;
                            if(match_cons(t, sym_Match_1))
                              {
                                g_10 = ATgetArgument(t, 0);
                                t = t_7;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    k_10 = ATgetArgument(t, 0);
                                    t = k_10;
                                    if((g_10 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, g_10);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        k_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = g_10;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        i_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = k_10;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        u_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_10;
                                    if((i_10 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_10));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    g_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = t_7;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    k_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = k_10;
                                if((g_10 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, g_10);
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
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      p_11 = ATgetArgument(t, 0);
      q_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11;
  if(match_cons(t, sym_Seq_2))
    {
      m_11 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, p_11, m_11);
            {
              ATerm r_24 = t;
              int s_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(s_24);
                }
              else
                {
                  t = r_24;
                  {
                    ATerm t_24 = t;
                    int u_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(u_24);
                      }
                    else
                      {
                        t = t_24;
                        {
                          ATerm y_24 = t;
                          int z_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_2 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm a_25 = ATgetArgument(t, 0);
                                  ATerm b_25 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = p_11;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm c_25 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = m_11;
                              if(match_cons(t, sym_Build_1))
                                {
                                  f_2 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, f_2);
                              ;
                              LocalPopChoice(z_24);
                            }
                          else
                            {
                              t = y_24;
                              {
                                ATerm n_25 = t;
                                int o_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(o_25);
                                  }
                                else
                                  {
                                    t = n_25;
                                    {
                                      ATerm t_2 = NULL,y_2 = NULL,a_3 = NULL,b_3 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm w_25 = ATgetArgument(t, 0);
                                          ATerm x_25 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = p_11;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          t_2 = ATgetArgument(t, 0);
                                          t = m_11;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              a_3 = ATgetArgument(t, 0);
                                              t = a_3;
                                              if((t_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, t_2);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  a_3 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = t_2;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  y_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = a_3;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  b_3 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = b_3;
                                              if((y_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_2));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              t_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = m_11;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              a_3 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = a_3;
                                          if((t_2 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_2);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              j_1 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, j_1, n_11);
            }
            ;
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            t = s_11(p_11, q_11, o_11, t);
          }
      }
    }
  else
    {
      t = s_11(p_11, q_11, o_11, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm u_11 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_115(t);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = SRTS_one(u_11, t);
      }
    return(t);
  }
  t = u_11(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(((ATgetType(d_26) == AT_LIST) && !(ATisEmpty(d_26))))
        {
          ATerm f_26 = ATgetFirst((ATermList) d_26);
          if(match_cons(f_26, sym_SDefT_4))
            {
              w_11 = ATgetArgument(f_26, 0);
              {
                ATerm i_26 = ATgetArgument(f_26, 1);
                if(((ATgetType(i_26) != AT_LIST) || !(ATisEmpty(i_26))))
                  _fail(t);
              }
              {
                ATerm k_26 = ATgetArgument(f_26, 2);
                if(((ATgetType(k_26) != AT_LIST) || !(ATisEmpty(k_26))))
                  _fail(t);
              }
              v_11 = ATgetArgument(f_26, 3);
            }
          else
            _fail(t);
          {
            ATerm g_26 = (ATerm) ATgetNext((ATermList) d_26);
            if(((ATgetType(g_26) != AT_LIST) || !(ATisEmpty(g_26))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(match_cons(e_26, sym_CallT_3))
          {
            ATerm p_26 = ATgetArgument(e_26, 0);
            if(match_cons(p_26, sym_SVar_1))
              {
                if((w_11 != ATgetArgument(p_26, 0)))
                  {
                    _fail(ATgetArgument(p_26, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm q_26 = ATgetArgument(e_26, 1);
              if(((ATgetType(q_26) != AT_LIST) || !(ATisEmpty(q_26))))
                _fail(t);
            }
            {
              ATerm r_26 = ATgetArgument(e_26, 2);
              if(((ATgetType(r_26) != AT_LIST) || !(ATisEmpty(r_26))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_11;
  {
    ATerm s_26 = t;
    if((PushChoice() == 0))
      {
        ATerm m_14 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm t_26 = ATgetArgument(t, 0);
              if(match_cons(t_26, sym_SVar_1))
                {
                  if((w_11 != ATgetArgument(t_26, 0)))
                    {
                      _fail(ATgetArgument(t_26, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm v_26 = ATgetArgument(t, 1);
                if(((ATgetType(v_26) != AT_LIST) || !(ATisEmpty(v_26))))
                  _fail(t);
              }
              {
                ATerm x_26 = ATgetArgument(t, 2);
                if(((ATgetType(x_26) != AT_LIST) || !(ATisEmpty(x_26))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(m_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_26;
      }
    t = v_11;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      l_12 = ATgetArgument(t, 0);
      t = l_12;
      if(match_cons(t, sym_Seq_2))
        {
          j_12 = ATgetArgument(t, 0);
          f_12 = ATgetArgument(t, 1);
          t = j_12;
          if(match_cons(t, sym_Where_1))
            {
              e_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_12;
          if(match_cons(t, sym_Seq_2))
            {
              g_12 = ATgetArgument(t, 0);
              i_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_12;
          if(match_cons(t, sym_Build_1))
            {
              h_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, e_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_12), i_12)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              j_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, j_12);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          l_12 = ATgetArgument(t, 0);
          t = l_12;
          if(match_cons(t, sym_Test_1))
            {
              j_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, j_12);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              l_12 = ATgetArgument(t, 0);
              t = l_12;
              if(match_cons(t, sym_Not_1))
                {
                  j_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, j_12);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  l_12 = ATgetArgument(t, 0);
                  m_12 = ATgetArgument(t, 1);
                  t = m_12;
                  if((l_12 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      l_12 = ATgetArgument(t, 0);
                      m_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_12;
                  if((l_12 != t))
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
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      a_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
      t = a_13;
      if(match_cons(t, sym_LChoice_2))
        {
          b_13 = ATgetArgument(t, 0);
          c_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, b_13, (ATerm) ATmakeAppl(sym_LChoice_2, c_13, d_13));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          a_13 = ATgetArgument(t, 0);
          d_13 = ATgetArgument(t, 1);
          t = a_13;
          if(match_cons(t, sym_Seq_2))
            {
              b_13 = ATgetArgument(t, 0);
              c_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, b_13, (ATerm) ATmakeAppl(sym_Seq_2, c_13, d_13));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              a_13 = ATgetArgument(t, 0);
              d_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_13;
          if(match_cons(t, sym_Choice_2))
            {
              b_13 = ATgetArgument(t, 0);
              c_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, b_13, (ATerm) ATmakeAppl(sym_Choice_2, c_13, d_13));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm q_14 (ATerm t)
        {
          ATerm b_27 = t;
          int c_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(c_27);
            }
          else
            {
              t = b_27;
            }
          return(t);
        }
        t = Cons_2_0(_id, q_14, t);
      }
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm s_14 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, s_14, t);
      }
    }
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm p_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_27), term_g_27));
  return(t);
}
ATerm u_14 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_14 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, r_14, term_g_27);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
    }
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm z_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_14, term_g_27);
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_15 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_27), term_g_27));
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
    }
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm j_15 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_27), term_g_27));
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_15 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, l_15, term_g_27);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_13, a_14);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_13 = ATgetArgument(t, 0);
          t = z_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_13 = ATgetFirst((ATermList) t);
              v_13 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_13, (ATerm) ATmakeAppl(sym_LChoices_1, v_13));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_n_23;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              z_13 = ATgetArgument(t, 0);
              t = z_13;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_13 = ATgetFirst((ATermList) t);
                  v_13 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_13, (ATerm) ATmakeAppl(sym_Choices_1, v_13));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_n_23;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  z_13 = ATgetArgument(t, 0);
                  t = z_13;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_13 = ATgetFirst((ATermList) t);
                      v_13 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_13, (ATerm) ATmakeAppl(sym_Seqs_1, v_13));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_n_27;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_13 = ATgetArgument(t, 0);
                      a_14 = ATgetArgument(t, 1);
                      x_13 = ATgetArgument(t, 2);
                      w_13 = ATgetArgument(t, 3);
                      {
                        ATerm n_14 = NULL,o_14 = NULL;
                        t = a_14;
                        t = map1_1_0(t_14, t);
                        n_14 = t;
                        t = x_13;
                        t = map1_1_0(u_14, t);
                        o_14 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, z_13, n_14, o_14, w_13);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          z_13 = ATgetArgument(t, 0);
                          a_14 = ATgetArgument(t, 1);
                          x_13 = ATgetArgument(t, 2);
                          w_13 = ATgetArgument(t, 3);
                          {
                            ATerm p_27 = t;
                            int q_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm x_14 = NULL,y_14 = NULL;
                                t = x_13;
                                t = map1_1_0(v_14, t);
                                x_14 = t;
                                t = a_14;
                                t = map_1_0(w_14, t);
                                y_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_13, y_14, x_14, w_13);
                                ;
                                LocalPopChoice(q_27);
                              }
                            else
                              {
                                t = p_27;
                                {
                                  ATerm h_15 = NULL,i_15 = NULL;
                                  t = a_14;
                                  t = map1_1_0(a_15, t);
                                  h_15 = t;
                                  t = x_13;
                                  t = map_1_0(c_15, t);
                                  i_15 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_13, h_15, i_15, w_13);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              z_13 = ATgetArgument(t, 0);
                              a_14 = ATgetArgument(t, 1);
                              x_13 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, a_14, (ATerm) ATmakeAppl(sym_Op_2, term_r_27, (ATerm) ATinsert(ATinsert(ATempty, x_13), z_13)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  z_13 = ATgetArgument(t, 0);
                                  a_14 = ATgetArgument(t, 1);
                                  x_13 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, x_13)), z_13), (ATerm) ATmakeAppl(sym_Build_1, a_14)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      z_13 = ATgetArgument(t, 0);
                                      a_14 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, (ATerm) ATmakeAppl(sym_Match_1, a_14));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          z_13 = ATgetArgument(t, 0);
                                          a_14 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_13), a_14);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              z_13 = ATgetArgument(t, 0);
                                              a_14 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_14), z_13);
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
ATerm d_15 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm u_16 = NULL,x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_16 = ATgetArgument(t, 0);
      t = u_16;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_n_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_16 = ATgetArgument(t, 0);
          t = u_16;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_n_27;
        }
      else
        {
          ATerm s_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  u_16 = ATgetArgument(t, 0);
                  {
                    ATerm u_27 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(t_27);
              t = u_16;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_n_23;
            }
          else
            {
              t = s_27;
              {
                ATerm v_27 = t;
                int x_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm y_27 = ATgetArgument(t, 0);
                        x_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_27);
                    t = x_16;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_n_23;
                  }
                else
                  {
                    t = v_27;
                    {
                      ATerm z_27 = t;
                      int b_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm c_28 = ATgetArgument(t, 0);
                              x_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_28);
                          t = x_16;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_n_23;
                        }
                      else
                        {
                          t = z_27;
                          if(match_cons(t, sym_Some_1))
                            {
                              u_16 = ATgetArgument(t, 0);
                              t = u_16;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_n_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  u_16 = ATgetArgument(t, 0);
                                  t = u_16;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_n_23;
                                }
                              else
                                {
                                  ATerm e_28 = t;
                                  int g_28 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm h_28 = ATgetArgument(t, 0);
                                          x_16 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(g_28);
                                      t = x_16;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_n_23;
                                    }
                                  else
                                    {
                                      t = e_28;
                                      {
                                        ATerm i_28 = t;
                                        int k_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm l_28 = ATgetArgument(t, 0);
                                                x_16 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(k_28);
                                            t = x_16;
                                            t = fetch_1_0(d_15, t);
                                            t = term_n_23;
                                          }
                                        else
                                          {
                                            t = i_28;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                u_16 = ATgetArgument(t, 0);
                                                x_16 = ATgetArgument(t, 1);
                                                t = x_16;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = u_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm m_28 = t;
                                                        int n_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = x_16;
                                                            ;
                                                            LocalPopChoice(n_28);
                                                          }
                                                        else
                                                          {
                                                            t = m_28;
                                                            t = u_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = u_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = u_16;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = x_16;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    u_16 = ATgetArgument(t, 0);
                                                    x_16 = ATgetArgument(t, 1);
                                                    t = x_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = u_16;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm o_28 = t;
                                                            int p_28 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = x_16;
                                                                ;
                                                                LocalPopChoice(p_28);
                                                              }
                                                            else
                                                              {
                                                                t = o_28;
                                                                t = u_16;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = u_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = u_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = x_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        u_16 = ATgetArgument(t, 0);
                                                        t = u_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_n_23;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            u_16 = ATgetArgument(t, 0);
                                                            x_16 = ATgetArgument(t, 1);
                                                            y_16 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = y_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_16, x_16);
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
  ATerm z_17 = NULL,b_18 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      b_18 = ATgetArgument(t, 0);
      t = b_18;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_n_27;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_18 = ATgetArgument(t, 0);
          t = b_18;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_n_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              b_18 = ATgetArgument(t, 0);
              z_17 = ATgetArgument(t, 1);
              t = z_17;
              if(match_cons(t, sym_Id_0))
                {
                  t = b_18;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm q_28 = t;
                      int s_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_17;
                          ;
                          LocalPopChoice(s_28);
                        }
                      else
                        {
                          t = q_28;
                          t = b_18;
                        }
                    }
                  else
                    {
                      t = b_18;
                    }
                }
              else
                {
                  t = b_18;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = z_17;
                }
            }
          else
            {
              ATerm t_28 = t;
              int u_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      b_18 = ATgetArgument(t, 0);
                      {
                        ATerm v_28 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(u_28);
                  t = b_18;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_n_27;
                }
              else
                {
                  t = t_28;
                  {
                    ATerm w_28 = t;
                    int x_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm y_28 = ATgetArgument(t, 0);
                            z_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_28);
                        t = z_17;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_n_27;
                      }
                    else
                      {
                        t = w_28;
                        {
                          ATerm a_29 = t;
                          int b_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm c_29 = ATgetArgument(t, 0);
                                  z_17 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(b_29);
                              t = z_17;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_n_27;
                            }
                          else
                            {
                              t = a_29;
                              if(match_cons(t, sym_All_1))
                                {
                                  b_18 = ATgetArgument(t, 0);
                                  t = b_18;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_n_27;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      b_18 = ATgetArgument(t, 0);
                                      t = b_18;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_n_27;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          b_18 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = b_18;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_n_27;
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
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            {
              ATerm h_29 = t;
              int i_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(i_29);
                }
              else
                {
                  t = h_29;
                  {
                    ATerm j_29 = t;
                    int k_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(k_29);
                      }
                    else
                      {
                        t = j_29;
                        {
                          ATerm n_29 = t;
                          int p_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(p_29);
                            }
                          else
                            {
                              t = n_29;
                              {
                                ATerm q_29 = t;
                                int s_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_18 = NULL,t_18 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        s_18 = ATgetArgument(t, 0);
                                        t_18 = ATgetArgument(t, 1);
                                        t = s_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_18;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            s_18 = ATgetArgument(t, 0);
                                            t_18 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = s_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_18;
                                      }
                                    ;
                                    LocalPopChoice(s_29);
                                  }
                                else
                                  {
                                    t = q_29;
                                    {
                                      ATerm u_29 = t;
                                      int v_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
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
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(x_29);
                                              }
                                            else
                                              {
                                                t = w_29;
                                                {
                                                  ATerm z_18 = NULL,a_19 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      z_18 = ATgetArgument(t, 0);
                                                      a_19 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_18;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = a_19;
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
ATerm repeat_1_0 (ATerm w_130 (ATerm), ATerm t)
{
  ATerm g_19 (ATerm t)
  {
    ATerm y_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_130(t);
        t = g_19(t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = y_29;
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm downup_1_0 (ATerm c_114 (ATerm), ATerm t)
{
  t = c_114(t);
  {
    ATerm e_15 (ATerm t)
    {
      t = downup_1_0(c_114, t);
      return(t);
    }
    t = SRTS_all(e_15, t);
    t = c_114(t);
  }
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 = NULL,e_1 = NULL,f_1 = NULL;
        t = term_d_30;
        f_1 = t;
        t = term_d_30;
        e_1 = t;
        t = SSL_table_get(e_1, u_19);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_3 = ATgetFirst((ATermList) t);
            {
              ATerm e_30 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = w_3;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm g_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_30) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_r_21;
        ;
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        {
          ATerm d_4 = NULL,g_1 = NULL,h_1 = NULL;
          t = term_d_30;
          h_1 = t;
          t = term_d_30;
          g_1 = t;
          t = SSL_table_get(g_1, u_19);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_4 = ATgetFirst((ATermList) t);
              {
                ATerm h_30 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = d_4;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm j_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_30) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_r_21;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_126 (ATerm), ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_15 (ATerm t)
            {
              t = filter_1_0(q_126, t);
              return(t);
            }
            t = Cons_2_0(q_126, f_15, t);
            ;
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            {
              ATerm b_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_30 = ATgetFirst((ATermList) t);
                  b_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_20;
              t = filter_1_0(q_126, t);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,i_1 = NULL,m_1 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Rec_2))
    {
      e_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_20);
  d_20 = t;
  t = e_20;
  t = m_103(t);
  i_20 = t;
  t = f_20;
  t = n_103(t);
  j_20 = t;
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, i_20, j_20);
  i_1 = t;
  t = SSLsetAnnotations(i_1, d_20);
  return(t);
}
ATerm SDef_3_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,o_1 = NULL,t_1 = NULL;
  v_20 = t;
  if(match_cons(t, sym_SDef_3))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
      r_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_20);
  n_20 = t;
  t = o_20;
  t = e_105(t);
  s_20 = t;
  t = p_20;
  t = f_105(t);
  t_20 = t;
  t = r_20;
  t = g_105(t);
  u_20 = t;
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, s_20, t_20, u_20);
  o_1 = t;
  t = SSLsetAnnotations(o_1, n_20);
  return(t);
}
ATerm Let_2_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,u_1 = NULL,v_1 = NULL;
  h_21 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_21 = ATgetArgument(t, 0);
      e_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_21);
  b_21 = t;
  t = c_21;
  t = p_102(t);
  f_21 = t;
  t = e_21;
  t = q_102(t);
  g_21 = t;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, f_21, g_21);
  u_1 = t;
  t = SSLsetAnnotations(u_1, b_21);
  return(t);
}
ATerm sboundin_3_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(f_113, f_113, t);
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(h_113, h_113, f_113, t);
            ;
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            {
              ATerm w_30 = t;
              int x_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(h_113, h_113, h_113, f_113, t);
                  ;
                  LocalPopChoice(x_30);
                }
              else
                {
                  t = w_30;
                  t = Rec_2_0(h_113, f_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm n_21 = NULL;
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_21 = ATgetArgument(t, 0);
          {
            ATerm a_31 = ATgetArgument(t, 1);
          }
          {
            ATerm c_31 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_30);
      t = n_21;
    }
  else
    {
      t = y_30;
      if(match_cons(t, sym_SDefT_4))
        {
          n_21 = ATgetArgument(t, 0);
          {
            ATerm d_31 = ATgetArgument(t, 1);
          }
          {
            ATerm e_31 = ATgetArgument(t, 2);
          }
          {
            ATerm f_31 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = n_21;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm l_21 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      l_21 = ATgetArgument(t, 0);
      {
        ATerm g_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_21;
  t = map_1_0(g_15, t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_125(t);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
        ATerm y_21 = NULL,z_21 = NULL,c_22 = NULL,d_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_21 = ATgetFirst((ATermList) t);
            z_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_21;
        t = f_125(t);
        c_22 = t;
        t = z_21;
        t = foldr_3_0(d_125, e_125, f_125, t);
        d_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_22, d_22);
        t = e_125(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm k_122 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_22;
  {
    ATerm j_22 (ATerm t)
    {
      ATerm j_31 = t;
      int l_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(l_31);
        }
      else
        {
          t = j_31;
          {
            ATerm m_31 = t;
            int n_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_4 = NULL,g_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_4 = ATgetFirst((ATermList) t);
                    g_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_22;
                {
                  ATerm k_15 (ATerm t)
                  {
                    ATerm h_4 = NULL;
                    h_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_4, h_4);
                    t = k_122(t);
                    return(t);
                  }
                  t = fetch_1_0(k_15, t);
                  t = g_4;
                  t = j_22(t);
                }
                ;
                LocalPopChoice(n_31);
              }
            else
              {
                t = m_31;
                t = Cons_2_0(_id, j_22, t);
              }
          }
        }
      return(t);
    }
    t = j_22(t);
  }
  return(t);
}
ATerm m_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      if(((ATgetType(o_31) != AT_LIST) || !(ATisEmpty(o_31))))
        _fail(t);
      {
        ATerm p_31 = ATgetArgument(t, 1);
        if(((ATgetType(p_31) != AT_LIST) || !(ATisEmpty(p_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_31 = ATgetArgument(t, 0);
      if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
        {
          w_22 = ATgetFirst((ATermList) q_31);
          y_22 = (ATerm) ATgetNext((ATermList) q_31);
        }
      else
        _fail(t);
      {
        ATerm r_31 = ATgetArgument(t, 1);
        if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
          {
            x_22 = ATgetFirst((ATermList) r_31);
            z_22 = (ATerm) ATgetNext((ATermList) r_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_22, x_22), (ATerm) ATmakeAppl(sym__2, y_22, z_22));
  return(t);
}
ATerm o_15 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL;
  if(match_cons(t, sym__2))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_23), c_23);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,v_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_31 = ATgetFirst((ATermList) t);
      if(match_cons(v_31, sym__2))
        {
          o_22 = ATgetArgument(v_31, 0);
          p_22 = ATgetArgument(v_31, 1);
        }
      else
        _fail(t);
      q_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_22);
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_22);
  if(match_cons(t, sym__2))
    {
      if((r_22 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_22, s_22);
  t = genzip_4_0(m_15, n_15, o_15, _id, t);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_22, q_22);
  {
    ATerm w_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_32 = ATgetArgument(t, 0);
            ATerm c_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_22;
        {
          ATerm p_15 (ATerm t)
          {
            t = q_22;
            return(t);
          }
          t = at_end_1_0(p_15, t);
        }
        ;
        LocalPopChoice(a_32);
      }
    else
      {
        t = w_31;
        {
          ATerm n_4 = NULL,w_1 = NULL,x_1 = NULL;
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_22, q_22);
          w_1 = t;
          t = SSL_explode_term(w_1);
          if(match_cons(t, sym__2))
            {
              ATerm d_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              n_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_4;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm t)
{
  ATerm i_23 (ATerm t)
  {
    ATerm e_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_131(t);
        ;
        LocalPopChoice(g_32);
      }
    else
      {
        t = e_32;
        t = m_131(t);
        t = i_23(t);
      }
    return(t);
  }
  t = i_23(t);
  return(t);
}
ATerm for_3_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm t)
{
  t = o_131(t);
  t = while_not_2_0(p_131, q_131, t);
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_23);
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = _2_0(_id, t_15, t);
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, u_15, t);
      ;
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
        if(match_cons(t, sym__2))
          {
            z_23 = ATgetArgument(t, 0);
            a_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_24;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_24 = ATgetFirst((ATermList) t);
            c_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_23), b_24), c_24);
      }
    }
  return(t);
}
ATerm t_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm u_15 (ATerm t)
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_23 = ATgetFirst((ATermList) t);
          t_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_23;
      if(match_cons(t, sym__2))
        {
          r_23 = ATgetArgument(t, 0);
          s_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_23;
      if((r_23 != t))
        {
          _fail(t);
        }
      t = t_23;
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm v_15 (ATerm t)
{
  ATerm h_24 = NULL;
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      if((h_24 != ATgetArgument(t, 1)))
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
  ATerm o_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(q_15, r_15, s_15, t);
      ;
      LocalPopChoice(r_32);
    }
  else
    {
      t = o_32;
      t = diff_1_0(v_15, t);
    }
  return(t);
}
ATerm x_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_15 (ATerm t)
{
  t = union_1_0(a_16, t);
  return(t);
}
ATerm a_16 (ATerm t)
{
  ATerm b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      b_5 = ATgetArgument(t, 0);
      if((b_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_16 (ATerm t)
{
  t = union_1_0(d_16, t);
  return(t);
}
ATerm d_16 (ATerm t)
{
  ATerm s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      if((s_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_24 (ATerm t)
  {
    ATerm v_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_129(t);
        ;
        LocalPopChoice(a_33);
      }
    else
      {
        t = v_32;
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_24 = NULL,m_24 = NULL,t_4 = NULL,u_4 = NULL;
              i_24 = t;
              t = g_129(t);
              m_24 = t;
              t = i_24;
              {
                ATerm w_15 (ATerm t)
                {
                  ATerm p_4 = NULL;
                  t = p_24(t);
                  p_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_4, m_24);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_129(w_15, p_24, x_15, t);
                t_4 = t;
                t = SSL_explode_term(t_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_33 = ATgetArgument(t, 0);
                    u_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_4;
                t = foldr_3_0(y_15, z_15, _id, t);
              }
              ;
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              {
                ATerm c_5 = NULL,e_5 = NULL;
                c_5 = t;
                t = SSL_explode_term(c_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_33 = ATgetArgument(t, 0);
                    e_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_5;
                t = foldr_3_0(b_16, c_16, p_24, t);
              }
            }
        }
      }
    return(t);
  }
  t = p_24(t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_1 = NULL,z_1 = NULL;
  x_24 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      v_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_24);
  q_24 = t;
  t = v_24;
  t = w_101(t);
  w_24 = t;
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, w_24);
  y_1 = t;
  t = SSLsetAnnotations(y_1, q_24);
  return(t);
}
ATerm RDefT_4_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,a_2 = NULL,b_2 = NULL;
  m_25 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
      g_25 = ATgetArgument(t, 2);
      h_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_25);
  d_25 = t;
  t = e_25;
  t = n_101(t);
  i_25 = t;
  t = f_25;
  t = o_101(t);
  j_25 = t;
  t = g_25;
  t = p_101(t);
  k_25 = t;
  t = h_25;
  t = q_101(t);
  l_25 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, i_25, j_25, k_25, l_25);
  a_2 = t;
  t = SSLsetAnnotations(a_2, d_25);
  return(t);
}
ATerm SDefT_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,c_2 = NULL,d_2 = NULL;
  a_26 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      s_25 = ATgetArgument(t, 2);
      t_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_26);
  p_25 = t;
  t = q_25;
  t = h_105(t);
  u_25 = t;
  t = r_25;
  t = i_105(t);
  v_25 = t;
  t = s_25;
  t = j_105(t);
  y_25 = t;
  t = t_25;
  t = k_105(t);
  z_25 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, u_25, v_25, y_25, z_25);
  c_2 = t;
  t = SSLsetAnnotations(c_2, p_25);
  return(t);
}
ATerm Scope_2_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,j_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,m_2 = NULL,p_2 = NULL;
  o_26 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_26);
  h_26 = t;
  t = j_26;
  t = z_102(t);
  m_26 = t;
  t = l_26;
  t = a_103(t);
  n_26 = t;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_26, n_26);
  m_2 = t;
  t = SSLsetAnnotations(m_2, h_26);
  return(t);
}
ATerm tboundin_3_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm t)
{
  ATerm f_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(d_113, b_113, t);
      ;
      LocalPopChoice(m_33);
    }
  else
    {
      t = f_33;
      {
        ATerm g_34 = t;
        int i_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(d_113, d_113, d_113, b_113, t);
            ;
            LocalPopChoice(i_34);
          }
        else
          {
            t = g_34;
            {
              ATerm p_34 = t;
              int q_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(d_113, d_113, d_113, b_113, t);
                  ;
                  LocalPopChoice(q_34);
                }
              else
                {
                  t = p_34;
                  t = DynamicRules_1_0(b_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm e_16 (ATerm t)
{
  ATerm u_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_26);
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm r_34 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = r_34;
      {
        ATerm w_26 = NULL,y_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_26 = ATgetArgument(t, 0);
            t = w_26;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm c_35 = t;
            int h_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm i_35 = ATgetArgument(t, 0);
                    ATerm s_35 = ATgetArgument(t, 1);
                    y_26 = ATgetArgument(t, 2);
                    {
                      ATerm w_35 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(h_35);
                t = y_26;
                t = map_1_0(g_16, t);
              }
            else
              {
                t = c_35;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm x_35 = ATgetArgument(t, 0);
                    ATerm p_36 = ATgetArgument(t, 1);
                    y_26 = ATgetArgument(t, 2);
                    {
                      ATerm q_36 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = y_26;
                t = map_1_0(h_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm e_27 = NULL;
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_27 = ATgetArgument(t, 0);
          {
            ATerm t_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_36);
      t = e_27;
    }
  else
    {
      t = r_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_27;
    }
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm o_27 = NULL;
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_27 = ATgetArgument(t, 0);
          {
            ATerm x_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_36);
      t = o_27;
    }
  else
    {
      t = u_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_27;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(e_16, f_16, tboundin_3_0, t);
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm d_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_28);
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm y_36 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_37);
    }
  else
    {
      t = y_36;
      {
        ATerm f_28 = NULL,j_28 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_28 = ATgetArgument(t, 0);
            t = f_28;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm e_37 = t;
            int f_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm h_37 = ATgetArgument(t, 0);
                    ATerm j_37 = ATgetArgument(t, 1);
                    j_28 = ATgetArgument(t, 2);
                    {
                      ATerm k_37 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(f_37);
                t = j_28;
                t = map_1_0(k_16, t);
              }
            else
              {
                t = e_37;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm l_37 = ATgetArgument(t, 0);
                    ATerm m_37 = ATgetArgument(t, 1);
                    j_28 = ATgetArgument(t, 2);
                    {
                      ATerm n_37 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = j_28;
                t = map_1_0(l_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm r_28 = NULL;
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_28 = ATgetArgument(t, 0);
          {
            ATerm r_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_37);
      t = r_28;
    }
  else
    {
      t = o_37;
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
ATerm l_16 (ATerm t)
{
  ATerm z_28 = NULL;
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_28 = ATgetArgument(t, 0);
          {
            ATerm f_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_38);
      t = z_28;
    }
  else
    {
      t = d_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_28;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_27 = NULL,a_28 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_28 = ATgetArgument(t, 0);
      t = a_28;
      if(match_cons(t, sym_Rule_3))
        {
          w_27 = ATgetArgument(t, 0);
          {
            ATerm g_38 = ATgetArgument(t, 1);
          }
          {
            ATerm i_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_27;
      t = free_vars_3_0(i_16, j_16, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_28 = ATgetArgument(t, 0);
          {
            ATerm j_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_28;
    }
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm o_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_29);
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm m_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_38);
    }
  else
    {
      t = m_38;
      {
        ATerm r_29 = NULL,t_29 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_29 = ATgetArgument(t, 0);
            t = r_29;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm o_38 = t;
            int p_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm q_38 = ATgetArgument(t, 0);
                    ATerm s_38 = ATgetArgument(t, 1);
                    t_29 = ATgetArgument(t, 2);
                    {
                      ATerm w_38 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(p_38);
                t = t_29;
                t = map_1_0(o_16, t);
              }
            else
              {
                t = o_38;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm z_38 = ATgetArgument(t, 0);
                    ATerm a_39 = ATgetArgument(t, 1);
                    t_29 = ATgetArgument(t, 2);
                    {
                      ATerm b_39 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = t_29;
                t = map_1_0(p_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm z_29 = NULL;
  ATerm c_39 = t;
  int d_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_29 = ATgetArgument(t, 0);
          {
            ATerm e_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_39);
      t = z_29;
    }
  else
    {
      t = c_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_29;
    }
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm f_30 = NULL;
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_30 = ATgetArgument(t, 0);
          {
            ATerm h_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_39);
      t = f_30;
    }
  else
    {
      t = f_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_30;
    }
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm i_30 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      i_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_30);
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm j_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(k_39);
    }
  else
    {
      t = j_39;
      {
        ATerm k_30 = NULL,l_30 = NULL;
        ATerm l_39 = t;
        int p_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm q_39 = ATgetArgument(t, 0);
                l_30 = ATgetArgument(t, 1);
                {
                  ATerm r_39 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(p_39);
            t = l_30;
            t = map_1_0(s_16, t);
          }
        else
          {
            t = l_39;
            {
              ATerm u_39 = t;
              int v_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      k_30 = ATgetArgument(t, 0);
                      {
                        ATerm w_39 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_39);
                  t = (ATerm) ATinsert(ATempty, k_30);
                }
              else
                {
                  t = u_39;
                  {
                    ATerm x_39 = t;
                    int y_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm z_39 = ATgetArgument(t, 0);
                            l_30 = ATgetArgument(t, 1);
                            {
                              ATerm b_40 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm c_40 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(y_39);
                        t = l_30;
                        t = map_1_0(t_16, t);
                      }
                    else
                      {
                        t = x_39;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm d_40 = ATgetArgument(t, 0);
                            l_30 = ATgetArgument(t, 1);
                            {
                              ATerm e_40 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm f_40 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = l_30;
                        t = map_1_0(v_16, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm r_30 = NULL;
  ATerm g_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_30 = ATgetArgument(t, 0);
          {
            ATerm i_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_40);
      t = r_30;
    }
  else
    {
      t = g_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_30;
    }
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm b_31 = NULL;
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_31 = ATgetArgument(t, 0);
          {
            ATerm l_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_40);
      t = b_31;
    }
  else
    {
      t = j_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_31;
    }
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm k_31 = NULL;
  ATerm m_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_31 = ATgetArgument(t, 0);
          {
            ATerm r_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_40);
      t = k_31;
    }
  else
    {
      t = m_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_31;
    }
  return(t);
}
ATerm w_16 (ATerm t)
{
  ATerm t_40 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_40;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm x_40 = ATgetArgument(t, 0);
      ATerm y_40 = ATgetArgument(t, 1);
      ATerm c_41 = ATgetArgument(t, 2);
      ATerm d_41 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  m_29 = t;
  t = l_29;
  t = free_vars_3_0(m_16, n_16, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = l_29;
  t = free_vars_3_0(q_16, r_16, sboundin_3_0, t);
  t = filter_1_0(w_16, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = m_29;
  return(t);
}
ATerm partition_1_0 (ATerm y_126 (ATerm), ATerm t)
{
  ATerm f_32 (ATerm t)
  {
    ATerm f_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_j_41;
        ;
        LocalPopChoice(i_41);
      }
    else
      {
        t = f_41;
        {
          ATerm k_41 = t;
          int m_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,a_6 = NULL,f_6 = NULL;
              ATerm z_16 (ATerm t)
              {
                t = y_126(t);
                if(((s_31 != NULL) && (s_31 != t)))
                  _fail(t);
                else
                  s_31 = t;
                return(t);
              }
              t = Cons_2_0(z_16, _id, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_41 = ATgetFirst((ATermList) t);
                  t_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = t_31;
              t = f_32(t);
              u_31 = t;
              t = SSL_explode_term(u_31);
              if(match_cons(t, sym__2))
                {
                  ATerm r_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_41) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm s_41 = ATgetArgument(t, 1);
                    if(((ATgetType(s_41) == AT_LIST) && !(ATisEmpty(s_41))))
                      {
                        a_6 = ATgetFirst((ATermList) s_41);
                        {
                          ATerm t_41 = (ATerm) ATgetNext((ATermList) s_41);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(u_31);
              if(match_cons(t, sym__2))
                {
                  ATerm u_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_41) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm v_41 = ATgetArgument(t, 1);
                    if(((ATgetType(v_41) == AT_LIST) && !(ATisEmpty(v_41))))
                      {
                        ATerm w_41 = ATgetFirst((ATermList) v_41);
                        ATerm x_41 = (ATerm) ATgetNext((ATermList) v_41);
                        if(((ATgetType(x_41) == AT_LIST) && !(ATisEmpty(x_41))))
                          {
                            f_6 = ATgetFirst((ATermList) x_41);
                            {
                              ATerm d_42 = (ATerm) ATgetNext((ATermList) x_41);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_6), not_null(s_31)), f_6);
              ;
              LocalPopChoice(m_41);
            }
          else
            {
              t = k_41;
              {
                ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,o_6 = NULL,s_6 = NULL;
                ATerm a_17 (ATerm t)
                {
                  if(((x_31 != NULL) && (x_31 != t)))
                    _fail(t);
                  else
                    x_31 = t;
                  return(t);
                }
                t = Cons_2_0(a_17, _id, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm e_42 = ATgetFirst((ATermList) t);
                    y_31 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = y_31;
                t = f_32(t);
                z_31 = t;
                t = SSL_explode_term(z_31);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_42 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_42) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm h_42 = ATgetArgument(t, 1);
                      if(((ATgetType(h_42) == AT_LIST) && !(ATisEmpty(h_42))))
                        {
                          o_6 = ATgetFirst((ATermList) h_42);
                          {
                            ATerm l_42 = (ATerm) ATgetNext((ATermList) h_42);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(z_31);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_42 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) m_42) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm p_42 = ATgetArgument(t, 1);
                      if(((ATgetType(p_42) == AT_LIST) && !(ATisEmpty(p_42))))
                        {
                          ATerm q_42 = ATgetFirst((ATermList) p_42);
                          ATerm s_42 = (ATerm) ATgetNext((ATermList) p_42);
                          if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
                            {
                              s_6 = ATgetFirst((ATermList) s_42);
                              {
                                ATerm t_42 = (ATerm) ATgetNext((ATermList) s_42);
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
                t = (ATerm) ATmakeAppl(sym__2, o_6, (ATerm) ATinsert(CheckATermList(s_6), not_null(x_31)));
              }
            }
        }
      }
    return(t);
  }
  t = f_32(t);
  return(t);
}
ATerm b_17 (ATerm t)
{
  ATerm q_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      q_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
      t_32 = ATgetArgument(t, 2);
      u_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_32, term_w_42);
  t = assert_1_0(c_17, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_32, s_32, t_32, u_32);
  return(t);
}
ATerm c_17 (ATerm t)
{
  t = term_d_30;
  return(t);
}
ATerm d_17 (ATerm t)
{
  t = repeat_1_0(e_17, t);
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(y_42);
    }
  else
    {
      t = x_42;
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                w_32 = ATgetArgument(t, 0);
                x_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_32;
            if(match_cons(t, sym_Let_2))
              {
                y_32 = ATgetArgument(t, 0);
                z_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, y_32, (ATerm) ATmakeAppl(sym_Seq_2, w_32, z_32));
            ;
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
            {
              ATerm b_43 = t;
              int c_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(c_43);
                }
              else
                {
                  t = b_43;
                  {
                    ATerm d_43 = t;
                    int e_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(e_43);
                      }
                    else
                      {
                        t = d_43;
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
ATerm LiftFromLet_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,p_32 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      j_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_32;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      l_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_32;
  t = map_1_0(b_17, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, p_32, k_32), l_32);
  t = downup_1_0(d_17, t);
  return(t);
}
ATerm union_1_0 (ATerm p_122 (ATerm), ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  if(match_cons(t, sym__2))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_33;
  {
    ATerm i_33 (ATerm t)
    {
      ATerm f_43 = t;
      int j_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_33;
          ;
          LocalPopChoice(j_43);
        }
      else
        {
          t = f_43;
          {
            ATerm k_43 = t;
            int m_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_6 = NULL,u_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_6 = ATgetFirst((ATermList) t);
                    u_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = h_33;
                {
                  ATerm f_17 (ATerm t)
                  {
                    ATerm v_6 = NULL;
                    v_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_6, v_6);
                    t = p_122(t);
                    return(t);
                  }
                  t = fetch_1_0(f_17, t);
                  t = u_6;
                  t = i_33(t);
                }
                ;
                LocalPopChoice(m_43);
              }
            else
              {
                t = k_43;
                t = Cons_2_0(_id, i_33, t);
              }
          }
        }
      return(t);
    }
    t = i_33(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm t)
{
  ATerm j_33 (ATerm t)
  {
    ATerm o_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_118(t);
        ;
        LocalPopChoice(s_43);
      }
    else
      {
        t = o_43;
        t = n_118(t);
        t = _2_0(p_118, j_33, t);
        t = o_118(t);
      }
    return(t);
  }
  t = j_33(t);
  return(t);
}
ATerm g_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_41;
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_33 = ATgetFirst((ATermList) t);
      y_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_33, y_33);
  return(t);
}
ATerm i_17 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_43 = ATgetArgument(t, 0);
      if(match_cons(v_43, sym__2))
        {
          z_33 = ATgetArgument(v_43, 0);
          b_34 = ATgetArgument(v_43, 1);
        }
      else
        _fail(t);
      {
        ATerm w_43 = ATgetArgument(t, 1);
        if(match_cons(w_43, sym__2))
          {
            a_34 = ATgetArgument(w_43, 0);
            c_34 = ATgetArgument(w_43, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_34), z_33), (ATerm) ATinsert(CheckATermList(c_34), b_34));
  return(t);
}
ATerm j_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_17 (ATerm t)
{
  t = union_1_0(l_17, t);
  return(t);
}
ATerm l_17 (ATerm t)
{
  ATerm d_34 = NULL;
  if(match_cons(t, sym__2))
    {
      d_34 = ATgetArgument(t, 0);
      if((d_34 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm e_34 = NULL;
  if(match_cons(t, sym__2))
    {
      e_34 = ATgetArgument(t, 0);
      if((e_34 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  k_33 = t;
  l_33 = t;
  t = SSL_explode_term(l_33);
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_33);
  p_33 = t;
  t = o_33;
  t = genzip_4_0(g_17, h_17, i_17, m_123, t);
  if(match_cons(t, sym__2))
    {
      q_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(n_33, q_33);
  s_33 = t;
  t = SSLsetAnnotations(s_33, p_33);
  t = n_123(t);
  if(match_cons(t, sym__2))
    {
      t_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_33;
  t = foldr_2_0(j_17, k_17, t);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_33, v_33);
  t = union_1_0(m_17, t);
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, w_33);
  return(t);
}
ATerm collect_split_1_0 (ATerm j_124 (ATerm), ATerm t)
{
  ATerm h_34 (ATerm t)
  {
    ATerm n_17 (ATerm t)
    {
      ATerm x_43 = t;
      int y_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_124(t);
          ;
          LocalPopChoice(y_43);
        }
      else
        {
          t = x_43;
          {
            ATerm f_34 = NULL;
            f_34 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_34, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(h_34, n_17, t);
    return(t);
  }
  t = h_34(t);
  return(t);
}
ATerm lift_sdefs_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      j_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
      l_34 = ATgetArgument(t, 2);
      m_34 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = m_34;
  t = collect_split_1_0(LiftFromLet_0_0, t);
  if(match_cons(t, sym__2))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, j_34, k_34, l_34, n_34)));
  {
    ATerm z_43 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_44 = ATgetArgument(t, 0);
            ATerm n_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_34;
        {
          ATerm o_17 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, j_34, k_34, l_34, n_34));
            return(t);
          }
          t = at_end_1_0(o_17, t);
        }
        ;
        LocalPopChoice(g_44);
      }
    else
      {
        t = z_43;
        {
          ATerm b_7 = NULL,r_2 = NULL,z_2 = NULL;
          z_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, j_34, k_34, l_34, n_34)));
          r_2 = t;
          t = SSL_explode_term(r_2);
          if(match_cons(t, sym__2))
            {
              ATerm o_44 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_44) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_7;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_126(t);
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_34, s_34, t_34);
  t = table_push_0_0(t);
  {
    ATerm p_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,d_3 = NULL;
        d_3 = t;
        t = term_t_44;
        c_3 = t;
        t = SSL_table_get(u_34, c_3);
        ;
        LocalPopChoice(s_44);
      }
    else
      {
        t = p_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_34 = ATgetFirst((ATermList) t);
        w_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    g_3 = t;
    t = term_t_44;
    e_3 = t;
    t = g_3;
    h_3 = t;
    t = (ATerm) ATinsert(CheckATermList(w_34), (ATerm) ATinsert(CheckATermList(v_34), s_34));
    f_3 = t;
    t = SSL_table_put(u_34, e_3, f_3);
    t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,i_3 = NULL,j_3 = NULL;
  a_35 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      y_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_35);
  x_34 = t;
  t = y_34;
  t = h_98(t);
  z_34 = t;
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, z_34);
  i_3 = t;
  t = SSLsetAnnotations(i_3, x_34);
  return(t);
}
ATerm Specification_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,k_3 = NULL,l_3 = NULL;
  g_35 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_35);
  d_35 = t;
  t = e_35;
  t = m_98(t);
  f_35 = t;
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_35);
  k_3 = t;
  t = SSLsetAnnotations(k_3, d_35);
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_35, term_v_44);
  t = assert_1_0(q_17, t);
  t = k_35;
  return(t);
}
ATerm q_17 (ATerm t)
{
  t = term_d_30;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_45), term_w_44);
  t = map_1_0(p_17, t);
  t = j_35;
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = Cons_2_0(_id, s_17, t);
  return(t);
}
ATerm s_17 (ATerm t)
{
  t = Cons_2_0(t_17, u_17, t);
  return(t);
}
ATerm t_17 (ATerm t)
{
  t = Strategies_1_0(v_17, t);
  return(t);
}
ATerm u_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_17 (ATerm t)
{
  t = map_1_0(w_17, t);
  t = map_1_0(lift_sdefs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm w_17 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      l_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
      n_35 = ATgetArgument(t, 2);
      o_35 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_35, term_w_42);
  t = assert_1_0(x_17, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_35, m_35, n_35, o_35);
  return(t);
}
ATerm x_17 (ATerm t)
{
  t = term_d_30;
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  t = declare_standard_strategies_0_0(t);
  t = Specification_1_0(r_17, t);
  return(t);
}
ATerm _2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,m_3 = NULL,n_3 = NULL;
  v_35 = t;
  if(match_cons(t, sym__2))
    {
      q_35 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_35);
  p_35 = t;
  t = q_35;
  t = o_93(t);
  t_35 = t;
  t = r_35;
  t = p_93(t);
  u_35 = t;
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_35, u_35);
  m_3 = t;
  t = SSLsetAnnotations(m_3, p_35);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm t_135 (ATerm), ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  if(match_cons(t, sym__2))
    {
      y_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_35, term_e_45);
  t = open_stream_0_0(t);
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_36, z_35);
  t = t_135(t);
  t = fclose_0_0(t);
  t = z_35;
  return(t);
}
ATerm d_18 (ATerm t)
{
  t = fetch_1_0(f_18, t);
  return(t);
}
ATerm e_18 (ATerm t)
{
  t = WriteToFile_1_0(g_18, t);
  return(t);
}
ATerm f_18 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm g_18 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_45 = ATgetArgument(t, 0);
      if(match_cons(f_45, sym_Stream_1))
        {
          d_36 = ATgetArgument(f_45, 0);
        }
      else
        _fail(t);
      e_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(d_36, e_36);
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_36);
  return(t);
}
ATerm h_18 (ATerm t)
{
  t = WriteToFile_1_0(i_18, t);
  return(t);
}
ATerm i_18 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_45 = ATgetArgument(t, 0);
      if(match_cons(i_45, sym_Stream_1))
        {
          g_36 = ATgetArgument(i_45, 0);
        }
      else
        _fail(t);
      h_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(g_36, h_36);
  i_36 = t;
  p_3 = t;
  t = term_l_45;
  o_3 = t;
  t = SSL_fputc(o_3, i_36);
  j_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_36);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  b_36 = t;
  {
    ATerm y_17 (ATerm t)
    {
      ATerm m_45 = t;
      int n_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_18 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_36 != NULL) && (c_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_18, t);
          ;
          LocalPopChoice(n_45);
        }
      else
        {
          t = m_45;
          t = term_o_45;
          if(((c_36 != NULL) && (c_36 != t)))
            _fail(t);
          else
            c_36 = t;
        }
      return(t);
    }
    t = _2_0(y_17, _id, t);
    t = b_36;
    {
      ATerm c_18 (ATerm t)
      {
        ATerm c_7 = NULL;
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_36), c_7);
        return(t);
      }
      t = _2_0(_id, c_18, t);
      {
        ATerm p_45 = t;
        int q_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(d_18, e_18, t);
            ;
            LocalPopChoice(q_45);
          }
        else
          {
            t = p_45;
            t = _2_0(_id, h_18, t);
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
ATerm apply_strategy_1_0 (ATerm v_138 (ATerm), ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  k_36 = t;
  t = dtime_0_0(t);
  t = k_36;
  t = v_138(t);
  l_36 = t;
  t = dtime_0_0(t);
  m_36 = t;
  t = l_36;
  if(match_cons(t, sym__2))
    {
      n_36 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_36), (ATerm) ATmakeAppl(sym_Runtime_1, m_36)), o_36);
  return(t);
}
ATerm c_37 (ATerm w_36, ATerm t)
{
  t = SSL_fclose(w_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL;
  a_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_36 = ATgetArgument(t, 0);
      {
        ATerm r_45 = t;
        int s_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_36);
            ;
            LocalPopChoice(s_45);
          }
        else
          {
            t = r_45;
            t = c_37(a_37, t);
          }
      }
    }
  else
    {
      t = c_37(a_37, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_37 = NULL;
  t = SSL_stdin_stream();
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_37);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_37 = NULL;
  t = SSL_stdout_stream();
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_37);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_37 = NULL;
  t = SSL_stderr_stream();
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_37);
  return(t);
}
ATerm j_18 (ATerm t)
{
  ATerm u_37 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      u_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_37;
  return(t);
}
ATerm k_18 (ATerm t)
{
  ATerm y_37 = NULL;
  y_37 = t;
  t = SSL_is_string(y_37);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_45 = ATgetArgument(t, 0);
      ATerm y_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL,r_7 = NULL;
        q_7 = t;
        t = SSL_explode_term(q_7);
        if(match_cons(t, sym__2))
          {
            ATerm c_46 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_46) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_46 = ATgetArgument(t, 1);
              if(((ATgetType(d_46) == AT_LIST) && !(ATisEmpty(d_46))))
                {
                  r_7 = ATgetFirst((ATermList) d_46);
                  {
                    ATerm j_46 = (ATerm) ATgetNext((ATermList) d_46);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = r_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = r_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(a_46);
      }
    else
      {
        t = z_45;
        {
          ATerm k_46 = t;
          int l_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_37 = NULL,s_37 = NULL,t_37 = NULL;
              t = _2_0(j_18, _id, t);
              if(match_cons(t, sym__2))
                {
                  q_37 = ATgetArgument(t, 0);
                  s_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(q_37, s_37);
              t_37 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, t_37);
              ;
              LocalPopChoice(l_46);
            }
          else
            {
              t = k_46;
              {
                ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
                t = _2_0(k_18, _id, t);
                if(match_cons(t, sym__2))
                  {
                    v_37 = ATgetArgument(t, 0);
                    w_37 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(v_37, w_37);
                x_37 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, x_37);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  ATerm m_46 = t;
  int n_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_38 = NULL;
      c_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_38, term_o_46);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_46);
    }
  else
    {
      t = m_46;
      {
        ATerm s_7 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
        s_7 = t;
        t = term_p_46;
        s_3 = t;
        t = term_s_21;
        q_3 = t;
        t = s_3;
        t_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, s_7), term_p_46);
        r_3 = t;
        t = SSL_printnl(q_3, r_3);
        t = s_7;
        _fail(t);
      }
    }
  z_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(b_38);
  a_38 = t;
  t = z_37;
  t = fclose_0_0(t);
  t = a_38;
  return(t);
}
ATerm fetch_1_0 (ATerm m_120 (ATerm), ATerm t)
{
  ATerm h_38 (ATerm t)
  {
    ATerm q_46 = t;
    int r_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_120, _id, t);
        ;
        LocalPopChoice(r_46);
      }
    else
      {
        t = q_46;
        t = Cons_2_0(_id, h_38, t);
      }
    return(t);
  }
  t = h_38(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_46 = t;
  int t_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_46);
    }
  else
    {
      t = s_46;
      {
        ATerm k_38 = NULL,l_38 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_38 = ATgetFirst((ATermList) t);
            l_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_38;
        {
          ATerm l_18 (ATerm t)
          {
            t = l_38;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(l_18, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_120 (ATerm), ATerm t)
{
  ATerm r_38 (ATerm t)
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_38, t);
        ;
        LocalPopChoice(v_46);
      }
    else
      {
        t = u_46;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_120(t);
      }
    return(t);
  }
  t = r_38(t);
  return(t);
}
ATerm m_18 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  t = SSL_explode_string(u_38);
  return(t);
}
ATerm n_18 (ATerm t)
{
  ATerm v_38 = NULL;
  v_38 = t;
  t = SSL_explode_string(v_38);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm t_38 = NULL;
  t = _2_0(m_18, n_18, t);
  {
    ATerm w_46 = t;
    int x_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL,y_38 = NULL;
        if(match_cons(t, sym__2))
          {
            x_38 = ATgetArgument(t, 0);
            y_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_38;
        {
          ATerm o_18 (ATerm t)
          {
            t = y_38;
            return(t);
          }
          t = at_end_1_0(o_18, t);
        }
        ;
        LocalPopChoice(x_46);
      }
    else
      {
        t = w_46;
        {
          ATerm y_7 = NULL,z_7 = NULL;
          y_7 = t;
          t = SSL_explode_term(y_7);
          if(match_cons(t, sym__2))
            {
              ATerm y_46 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_46) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_7;
          t = concat_0_0(t);
        }
      }
    t_38 = t;
    t = SSL_implode_string(t_38);
  }
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm z_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_47);
    }
  else
    {
      t = z_46;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_39 = NULL;
      i_39 = t;
      t = SSL_is_string(i_39);
      ;
      LocalPopChoice(c_47);
    }
  else
    {
      t = b_47;
      {
        ATerm d_47 = t;
        int e_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_18, t);
            ;
            LocalPopChoice(e_47);
          }
        else
          {
            t = d_47;
            {
              ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
              m_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_39 = ATgetArgument(t, 0);
                  t = n_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_39 = ATgetArgument(t, 0);
                      t = n_39;
                      {
                        ATerm f_47 = t;
                        int g_47 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm u_3 = NULL,v_3 = NULL;
                            v_3 = t;
                            t = term_h_47;
                            u_3 = t;
                            t = SSL_table_get(u_3, n_39);
                            {
                              ATerm i_47 = t;
                              int j_47 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_8 = NULL,x_3 = NULL,y_3 = NULL;
                                  t = eval_config_0_0(t);
                                  v_8 = t;
                                  y_3 = t;
                                  t = term_h_47;
                                  x_3 = t;
                                  t = SSL_table_put(x_3, n_39, v_8);
                                  t = v_8;
                                  ;
                                  LocalPopChoice(j_47);
                                }
                              else
                                {
                                  t = i_47;
                                }
                            }
                            ;
                            LocalPopChoice(g_47);
                          }
                        else
                          {
                            t = f_47;
                            {
                              ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
                              t = term_k_47;
                              b_4 = t;
                              t = term_s_21;
                              z_3 = t;
                              t = b_4;
                              c_4 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, n_39), term_k_47);
                              a_4 = t;
                              t = SSL_printnl(z_3, a_4);
                              t = n_39;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_39 = NULL,t_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_39 = ATgetArgument(t, 0);
                          o_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_39;
                      t = eval_config_0_0(t);
                      s_39 = t;
                      t = o_39;
                      t = eval_config_0_0(t);
                      t_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_39, t_39);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_137 (ATerm), ATerm t)
{
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_40 = NULL,n_40 = NULL,e_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
      a_40 = t;
      t = term_n_47;
      j_4 = t;
      t = term_h_47;
      e_4 = t;
      t = j_4;
      k_4 = t;
      t = term_n_47;
      i_4 = t;
      t = SSL_table_get(e_4, i_4);
      {
        ATerm o_47 = t;
        int p_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_9 = NULL,l_4 = NULL,m_4 = NULL,o_4 = NULL,q_4 = NULL;
            t = eval_config_0_0(t);
            f_9 = t;
            o_4 = t;
            t = term_h_47;
            l_4 = t;
            t = o_4;
            q_4 = t;
            t = term_n_47;
            m_4 = t;
            t = SSL_table_put(l_4, m_4, f_9);
            t = f_9;
            ;
            LocalPopChoice(p_47);
          }
        else
          {
            t = o_47;
          }
        n_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_40, term_q_47);
        t = geq_0_0(t);
        t = a_40;
        t = e_137(t);
      }
      ;
      LocalPopChoice(m_47);
    }
  else
    {
      t = l_47;
    }
  return(t);
}
ATerm q_18 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  if(match_string(t, "-k"))
    {
      t = p_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_40;
    }
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm q_40 = NULL,s_40 = NULL,r_4 = NULL,s_4 = NULL,v_4 = NULL,w_4 = NULL;
  q_40 = t;
  t = SSL_string_to_int(q_40);
  s_40 = t;
  v_4 = t;
  t = term_h_47;
  r_4 = t;
  t = v_4;
  w_4 = t;
  t = term_r_47;
  s_4 = t;
  t = SSL_table_put(r_4, s_4, s_40);
  t = q_40;
  return(t);
}
ATerm u_18 (ATerm t)
{
  t = term_s_47;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_18, r_18, u_18, t);
  return(t);
}
ATerm v_18 (ATerm t)
{
  ATerm u_40 = NULL;
  u_40 = t;
  if(match_string(t, "-S"))
    {
      t = u_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_40;
    }
  return(t);
}
ATerm w_18 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,d_5 = NULL,f_5 = NULL;
  a_5 = t;
  t = term_h_47;
  x_4 = t;
  t = a_5;
  d_5 = t;
  t = term_n_47;
  y_4 = t;
  t = d_5;
  f_5 = t;
  t = term_t_47;
  z_4 = t;
  t = SSL_table_put(x_4, y_4, z_4);
  t = term_u_47;
  return(t);
}
ATerm x_18 (ATerm t)
{
  t = term_v_47;
  return(t);
}
ATerm y_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
  v_40 = t;
  t = SSL_string_to_int(v_40);
  w_40 = t;
  i_5 = t;
  t = term_h_47;
  g_5 = t;
  t = i_5;
  j_5 = t;
  t = term_n_47;
  h_5 = t;
  t = SSL_table_put(g_5, h_5, w_40);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_40);
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = term_w_47;
  return(t);
}
ATerm d_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_19 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
  n_5 = t;
  t = term_h_47;
  k_5 = t;
  t = n_5;
  o_5 = t;
  t = term_x_47;
  l_5 = t;
  t = o_5;
  p_5 = t;
  t = term_r_21;
  m_5 = t;
  t = SSL_table_put(k_5, l_5, m_5);
  t = term_y_47;
  return(t);
}
ATerm f_19 (ATerm t)
{
  t = term_z_47;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_48 = t;
  int b_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_18, w_18, x_18, t);
      ;
      LocalPopChoice(b_48);
    }
  else
    {
      t = a_48;
      {
        ATerm c_48 = t;
        int d_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_18, b_19, c_19, t);
            ;
            LocalPopChoice(d_48);
          }
        else
          {
            t = c_48;
            t = Option_3_0(d_19, e_19, f_19, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_41 = NULL;
      t = term_r_21;
      t = d_0(t);
      b_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_48, term_f_48, b_41);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_40 = ATgetFirst((ATermList) t);
          a_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_40;
      t = a_0(t);
      t = term_r_21;
      t = c_0(t);
      e_41 = t;
      t = (ATerm) ATinsert(CheckATermList(a_41), e_41);
    }
  return(t);
}
ATerm h_19 (ATerm t)
{
  ATerm g_41 = NULL;
  g_41 = t;
  if(match_string(t, "-o"))
    {
      t = g_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_41;
    }
  return(t);
}
ATerm i_19 (ATerm t)
{
  ATerm h_41 = NULL,q_5 = NULL,r_5 = NULL,t_5 = NULL,u_5 = NULL;
  h_41 = t;
  t_5 = t;
  t = term_h_47;
  q_5 = t;
  t = t_5;
  u_5 = t;
  t = term_g_48;
  r_5 = t;
  t = SSL_table_put(q_5, r_5, h_41);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_41);
  return(t);
}
ATerm j_19 (ATerm t)
{
  t = term_h_48;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_19, i_19, j_19, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_41 = NULL,n_41 = NULL,p_41 = NULL,q_41 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__3))
    {
      l_41 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
      p_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_41, n_41);
  {
    ATerm i_48 = t;
    int j_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_48 = ATgetArgument(t, 0);
            ATerm l_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_41, n_41);
        ;
        LocalPopChoice(j_48);
      }
    else
      {
        t = i_48;
        t = (ATerm) ATempty;
      }
    q_41 = t;
    w_5 = t;
    t = (ATerm) ATinsert(CheckATermList(q_41), p_41);
    v_5 = t;
    t = SSL_table_put(l_41, n_41, v_5);
    t = (ATerm) ATmakeAppl(sym__3, l_41, n_41, p_41);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_42 = NULL;
      t = term_r_21;
      t = l_0(t);
      c_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_48, term_f_48, c_42);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_41 = ATgetFirst((ATermList) t);
          z_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_42 = ATgetFirst((ATermList) t);
          b_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_41;
      t = i_0(t);
      t = a_42;
      t = k_0(t);
      g_42 = t;
      t = (ATerm) ATinsert(CheckATermList(b_42), g_42);
    }
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm i_42 = NULL;
  i_42 = t;
  if(match_string(t, "-i"))
    {
      t = i_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_42;
    }
  return(t);
}
ATerm l_19 (ATerm t)
{
  ATerm j_42 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,b_6 = NULL;
  j_42 = t;
  z_5 = t;
  t = term_h_47;
  x_5 = t;
  t = z_5;
  b_6 = t;
  t = term_m_48;
  y_5 = t;
  t = SSL_table_put(x_5, y_5, j_42);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_42);
  return(t);
}
ATerm m_19 (ATerm t)
{
  t = term_n_48;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_19, l_19, m_19, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_42 = NULL,h_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL,i_6 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_21;
  t = whoami_0_0(t);
  k_42 = t;
  e_6 = t;
  t = term_s_21;
  c_6 = t;
  t = e_6;
  g_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_48), k_42);
  d_6 = t;
  t = SSL_printnl(c_6, d_6);
  i_6 = t;
  t = term_v_21;
  h_6 = t;
  t = SSL_exit(h_6);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  t = term_p_48;
  l_6 = t;
  t = term_h_47;
  j_6 = t;
  t = l_6;
  m_6 = t;
  t = term_p_48;
  k_6 = t;
  t = SSL_table_get(j_6, k_6);
  {
    ATerm q_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_9 = NULL,n_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
        t = eval_config_0_0(t);
        l_9 = t;
        q_6 = t;
        t = term_h_47;
        n_6 = t;
        t = q_6;
        r_6 = t;
        t = term_p_48;
        p_6 = t;
        t = SSL_table_put(n_6, p_6, l_9);
        t = l_9;
        ;
        LocalPopChoice(r_48);
      }
    else
      {
        t = q_48;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t)
{
  ATerm s_48 = t;
  int t_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_125(t);
      ;
      LocalPopChoice(t_48);
    }
  else
    {
      t = s_48;
      {
        ATerm n_42 = NULL,o_42 = NULL,r_42 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_42 = ATgetFirst((ATermList) t);
            o_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_42;
        t = foldr_2_0(b_125, c_125, t);
        r_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_42, r_42);
        t = c_125(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm n_19 (ATerm t)
{
  t = term_t_47;
  return(t);
}
ATerm o_19 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_48 = t;
    int v_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(t_9, u_9);
        ;
        LocalPopChoice(v_48);
      }
    else
      {
        t = u_48;
        t = SSL_addr(t_9, u_9);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_42 = NULL,n_9 = NULL,p_9 = NULL;
  t = times_0_0(t);
  n_9 = t;
  t = SSL_explode_term(n_9);
  if(match_cons(t, sym__2))
    {
      ATerm w_48 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9;
  t = foldr_2_0(n_19, o_19, t);
  u_42 = t;
  t = SSL_TicksToSeconds(u_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_48 = t;
    int y_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_43;
        if((h_43 != t))
          {
            _fail(t);
          }
        t = g_43;
        ;
        LocalPopChoice(y_48);
      }
    else
      {
        t = x_48;
        t = g_43;
        {
          ATerm z_48 = t;
          int a_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_43, i_43);
              ;
              LocalPopChoice(a_49);
            }
          else
            {
              t = z_48;
              t = SSL_gtr(h_43, i_43);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_43, i_43);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_137 (ATerm), ATerm t)
{
  ATerm b_49 = t;
  int c_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_43 = NULL,n_43 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
      l_43 = t;
      t = term_n_47;
      y_6 = t;
      t = term_h_47;
      w_6 = t;
      t = y_6;
      z_6 = t;
      t = term_n_47;
      x_6 = t;
      t = SSL_table_get(w_6, x_6);
      {
        ATerm d_49 = t;
        int e_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_10 = NULL,a_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
            t = eval_config_0_0(t);
            l_10 = t;
            e_7 = t;
            t = term_h_47;
            a_7 = t;
            t = e_7;
            f_7 = t;
            t = term_n_47;
            d_7 = t;
            t = SSL_table_put(a_7, d_7, l_10);
            t = l_10;
            ;
            LocalPopChoice(e_49);
          }
        else
          {
            t = d_49;
          }
        n_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_43, term_v_21);
        t = geq_0_0(t);
        t = l_43;
        t = d_137(t);
      }
      ;
      LocalPopChoice(c_49);
    }
  else
    {
      t = b_49;
    }
  return(t);
}
ATerm p_19 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,k_7 = NULL;
  t = run_time_0_0(t);
  p_43 = t;
  t = term_r_21;
  t = whoami_0_0(t);
  q_43 = t;
  i_7 = t;
  t = term_s_21;
  g_7 = t;
  t = i_7;
  k_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_49), p_43), term_f_49), q_43);
  h_7 = t;
  t = SSL_printnl(g_7, h_7);
  t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_49), p_43), term_f_49), q_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  t = report_run_time_0_0(t);
  m_7 = t;
  t = term_t_47;
  l_7 = t;
  t = SSL_exit(l_7);
  return(t);
}
ATerm q_19 (ATerm t)
{
  ATerm h_49 = t;
  int i_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(i_49);
    }
  else
    {
      t = h_49;
      {
        ATerm j_49 = t;
        int k_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(k_49);
          }
        else
          {
            t = j_49;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_139 (ATerm), ATerm t)
{
  ATerm l_49 = t;
  int m_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,u_7 = NULL;
      t = term_n_49;
      p_7 = t;
      t = term_h_47;
      n_7 = t;
      t = p_7;
      u_7 = t;
      t = term_n_49;
      o_7 = t;
      t = SSL_table_get(n_7, o_7);
      {
        ATerm o_49 = t;
        int p_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_10 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,a_8 = NULL;
            t = eval_config_0_0(t);
            p_10 = t;
            x_7 = t;
            t = term_h_47;
            v_7 = t;
            t = x_7;
            a_8 = t;
            t = term_n_49;
            w_7 = t;
            t = SSL_table_put(v_7, w_7, p_10);
            t = p_10;
            ;
            LocalPopChoice(p_49);
          }
        else
          {
            t = o_49;
          }
      }
      ;
      LocalPopChoice(m_49);
    }
  else
    {
      t = l_49;
      t = fetch_1_0(q_19, t);
    }
  t = t_139(t);
  return(t);
}
ATerm map_1_0 (ATerm b_120 (ATerm), ATerm t)
{
  ATerm r_43 (ATerm t)
  {
    ATerm q_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_49);
      }
    else
      {
        t = q_49;
        t = Cons_2_0(b_120, r_43, t);
      }
    return(t);
  }
  t = r_43(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_43 = ATgetFirst((ATermList) t);
      u_43 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_44 = NULL,b_44 = NULL;
        t = u_43;
        t = g_0(t);
        a_44 = t;
        t = t_43;
        t = e_0(t);
        b_44 = t;
        t = u_43;
        {
          ATerm r_19 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(a_44), b_44);
            return(t);
          }
          t = reverse_acc_2_0(e_0, r_19, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_21;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm v_110 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,c_8 = NULL,d_8 = NULL;
  f_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_44);
  c_44 = t;
  t = d_44;
  t = v_110(t);
  e_44 = t;
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_44);
  c_8 = t;
  t = SSLsetAnnotations(c_8, c_44);
  return(t);
}
ATerm s_19 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm t_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_19 (ATerm t)
{
  ATerm i_44 = NULL;
  i_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_44), term_s_49);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  ATerm t_49 = t;
  int u_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
      t = term_p_48;
      g_8 = t;
      t = term_h_47;
      e_8 = t;
      t = g_8;
      h_8 = t;
      t = term_p_48;
      f_8 = t;
      t = SSL_table_get(e_8, f_8);
      {
        ATerm v_49 = t;
        int w_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_10 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
            t = eval_config_0_0(t);
            t_10 = t;
            k_8 = t;
            t = term_h_47;
            i_8 = t;
            t = k_8;
            l_8 = t;
            t = term_p_48;
            j_8 = t;
            t = SSL_table_put(i_8, j_8, t_10);
            t = t_10;
            ;
            LocalPopChoice(w_49);
          }
        else
          {
            t = v_49;
          }
      }
      ;
      LocalPopChoice(u_49);
    }
  else
    {
      t = t_49;
      t = fetch_1_0(s_19, t);
    }
  t = term_x_49;
  t = echo_0_0(t);
  o_8 = t;
  t = term_e_48;
  m_8 = t;
  t = o_8;
  p_8 = t;
  t = term_f_48;
  n_8 = t;
  t = SSL_table_get(m_8, n_8);
  t = reverse_acc_2_0(_id, t_19, t);
  t = map_1_0(v_19, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,q_8 = NULL,r_8 = NULL;
  m_44 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_44);
  j_44 = t;
  t = k_44;
  t = w_110(t);
  l_44 = t;
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, l_44);
  q_8 = t;
  t = SSLsetAnnotations(q_8, j_44);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_8 = NULL,t_8 = NULL;
  q_44 = t;
  {
    ATerm y_49 = t;
    int z_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_50 = ATgetFirst((ATermList) t);
                ATerm b_50 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_44;
          }
        ;
        LocalPopChoice(z_49);
      }
    else
      {
        t = y_49;
        t = (ATerm) ATinsert(ATempty, q_44);
      }
    r_44 = t;
    t_8 = t;
    t = term_o_45;
    s_8 = t;
    t = SSL_printnl(s_8, r_44);
    t = q_44;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  t = term_p_48;
  x_8 = t;
  t = term_h_47;
  u_8 = t;
  t = x_8;
  y_8 = t;
  t = term_p_48;
  w_8 = t;
  t = SSL_table_get(u_8, w_8);
  {
    ATerm c_50 = t;
    int d_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_10 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
        t = eval_config_0_0(t);
        y_10 = t;
        b_9 = t;
        t = term_h_47;
        z_8 = t;
        t = b_9;
        c_9 = t;
        t = term_p_48;
        a_9 = t;
        t = SSL_table_put(z_8, a_9, y_10);
        t = y_10;
        ;
        LocalPopChoice(d_50);
      }
    else
      {
        t = c_50;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm w_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_19 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,g_9 = NULL,h_9 = NULL,j_9 = NULL,k_9 = NULL;
  h_9 = t;
  t = term_h_47;
  d_9 = t;
  t = h_9;
  j_9 = t;
  t = term_e_50;
  e_9 = t;
  t = j_9;
  k_9 = t;
  t = term_r_21;
  g_9 = t;
  t = SSL_table_put(d_9, e_9, g_9);
  t = term_f_50;
  return(t);
}
ATerm y_19 (ATerm t)
{
  t = term_g_50;
  return(t);
}
ATerm z_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm m_9 = NULL,o_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
  r_9 = t;
  t = term_h_47;
  m_9 = t;
  t = r_9;
  s_9 = t;
  t = term_e_50;
  o_9 = t;
  t = s_9;
  v_9 = t;
  t = term_r_21;
  q_9 = t;
  t = SSL_table_put(m_9, o_9, q_9);
  z_9 = t;
  t = term_h_47;
  w_9 = t;
  t = z_9;
  a_10 = t;
  t = term_h_50;
  x_9 = t;
  t = a_10;
  b_10 = t;
  t = term_r_21;
  y_9 = t;
  t = SSL_table_put(w_9, x_9, y_9);
  t = term_i_50;
  return(t);
}
ATerm c_20 (ATerm t)
{
  t = term_j_50;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_19, x_19, y_19, t);
      ;
      LocalPopChoice(l_50);
    }
  else
    {
      t = k_50;
      t = Option_3_0(z_19, a_20, c_20, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,c_10 = NULL,d_10 = NULL;
  c_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_44 = ATgetFirst((ATermList) t);
      z_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_45);
  x_44 = t;
  t = y_44;
  t = d_98(t);
  a_45 = t;
  t = z_44;
  t = e_98(t);
  b_45 = t;
  d_10 = t;
  t = (ATerm) ATinsert(CheckATermList(b_45), a_45);
  c_10 = t;
  t = SSLsetAnnotations(c_10, x_44);
  return(t);
}
ATerm g_20 (ATerm t)
{
  ATerm h_45 = NULL,e_10 = NULL,f_10 = NULL,h_10 = NULL,j_10 = NULL;
  h_45 = t;
  h_10 = t;
  t = term_h_47;
  e_10 = t;
  t = h_10;
  j_10 = t;
  t = term_p_48;
  f_10 = t;
  t = SSL_table_put(e_10, f_10, h_45);
  t = (ATerm) ATmakeAppl(sym_Program_1, h_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  {
    ATerm m_50 = t;
    int n_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_50;
        t = w_141(t);
        ;
        LocalPopChoice(n_50);
      }
    else
      {
        t = m_50;
      }
    t = g_45;
    {
      ATerm h_20 (ATerm t)
      {
        ATerm p_50 = t;
        int q_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_50 = t;
            int s_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_50);
              }
            else
              {
                t = r_50;
                t = w_141(t);
                t = Cons_2_0(_id, h_20, t);
              }
            ;
            LocalPopChoice(q_50);
          }
        else
          {
            t = p_50;
            {
              ATerm j_45 = NULL,k_45 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_45 = ATgetFirst((ATermList) t);
                  k_45 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_45), (ATerm) ATmakeAppl(sym_Undefined_1, j_45));
            }
          }
        return(t);
      }
      t = Cons_2_0(g_20, h_20, t);
    }
  }
  return(t);
}
ATerm m_20 (ATerm t)
{
  ATerm w_45 = NULL;
  w_45 = t;
  if(match_string(t, "--help"))
    {
      t = w_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_45;
        }
    }
  return(t);
}
ATerm q_20 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  z_10 = t;
  t = term_h_47;
  v_10 = t;
  t = z_10;
  a_11 = t;
  t = term_n_49;
  w_10 = t;
  t = a_11;
  b_11 = t;
  t = term_r_21;
  x_10 = t;
  t = SSL_table_put(v_10, w_10, x_10);
  t = term_t_50;
  return(t);
}
ATerm w_20 (ATerm t)
{
  t = term_u_50;
  return(t);
}
ATerm x_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_141 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,u_12 = NULL,v_12 = NULL;
  t_45 = t;
  q_10 = t;
  t = term_e_48;
  m_10 = t;
  t = q_10;
  r_10 = t;
  t = term_f_48;
  n_10 = t;
  t = r_10;
  s_10 = t;
  t = (ATerm) ATempty;
  o_10 = t;
  t = SSL_table_put(m_10, n_10, o_10);
  t = t_45;
  {
    ATerm l_20 (ATerm t)
    {
      ATerm v_50 = t;
      int w_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_141(t);
          ;
          LocalPopChoice(w_50);
        }
      else
        {
          t = v_50;
          {
            ATerm x_50 = t;
            int y_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_20, q_20, w_20, t);
                ;
                LocalPopChoice(y_50);
              }
            else
              {
                t = x_50;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_20, t);
    {
      ATerm z_50 = t;
      int a_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_46 = NULL;
          b_46 = t;
          {
            ATerm b_51 = t;
            int c_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_11 = NULL,l_11 = NULL;
                t = b_46;
                {
                  ATerm d_51 = t;
                  int e_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
                      t = term_n_49;
                      e_11 = t;
                      t = term_h_47;
                      c_11 = t;
                      t = e_11;
                      f_11 = t;
                      t = term_n_49;
                      d_11 = t;
                      t = SSL_table_get(c_11, d_11);
                      {
                        ATerm f_51 = t;
                        int g_51 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_12 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
                            t = eval_config_0_0(t);
                            a_12 = t;
                            i_11 = t;
                            t = term_h_47;
                            g_11 = t;
                            t = i_11;
                            j_11 = t;
                            t = term_n_49;
                            h_11 = t;
                            t = SSL_table_put(g_11, h_11, a_12);
                            t = a_12;
                            ;
                            LocalPopChoice(g_51);
                          }
                        else
                          {
                            t = f_51;
                          }
                      }
                      ;
                      LocalPopChoice(e_51);
                    }
                  else
                    {
                      t = d_51;
                      t = fetch_1_0(x_20, t);
                    }
                  t = b_46;
                  t = default_system_usage_0_0(t);
                  l_11 = t;
                  t = term_t_47;
                  k_11 = t;
                  t = SSL_exit(k_11);
                }
                ;
                LocalPopChoice(c_51);
              }
            else
              {
                t = b_51;
                {
                  ATerm r_11 = NULL,t_11 = NULL,x_11 = NULL,y_11 = NULL,k_12 = NULL,n_12 = NULL;
                  t = term_e_50;
                  x_11 = t;
                  t = term_h_47;
                  r_11 = t;
                  t = x_11;
                  y_11 = t;
                  t = term_e_50;
                  t_11 = t;
                  t = SSL_table_get(r_11, t_11);
                  {
                    ATerm h_51 = t;
                    int i_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_12 = NULL,z_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
                        t = eval_config_0_0(t);
                        y_12 = t;
                        c_12 = t;
                        t = term_h_47;
                        z_11 = t;
                        t = c_12;
                        d_12 = t;
                        t = term_e_50;
                        b_12 = t;
                        t = SSL_table_put(z_11, b_12, y_12);
                        t = y_12;
                        ;
                        LocalPopChoice(i_51);
                      }
                    else
                      {
                        t = h_51;
                      }
                    t = b_46;
                    t = default_system_about_0_0(t);
                    n_12 = t;
                    t = term_t_47;
                    k_12 = t;
                    t = SSL_exit(k_12);
                  }
                }
              }
          }
          ;
          LocalPopChoice(a_51);
        }
      else
        {
          t = z_50;
          {
            ATerm j_51 = t;
            int k_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
                ATerm y_20 (ATerm t)
                {
                  ATerm z_20 (ATerm t)
                  {
                    if(((u_45 != NULL) && (u_45 != t)))
                      _fail(t);
                    else
                      u_45 = t;
                    return(t);
                  }
                  t = Undefined_1_0(z_20, t);
                  return(t);
                }
                t = fetch_1_0(y_20, t);
                q_12 = t;
                t = term_s_21;
                o_12 = t;
                t = q_12;
                r_12 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_45)), term_l_51);
                p_12 = t;
                t = SSL_printnl(o_12, p_12);
                t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_45)), term_l_51));
                t = default_system_usage_0_0(t);
                t_12 = t;
                t = term_v_21;
                s_12 = t;
                t = SSL_exit(s_12);
                ;
                LocalPopChoice(k_51);
              }
            else
              {
                t = j_51;
              }
          }
        }
      v_45 = t;
      v_12 = t;
      t = term_e_48;
      u_12 = t;
      t = SSL_table_destroy(u_12);
      t = v_45;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm t)
{
  ATerm e_46 = NULL,w_12 = NULL,x_12 = NULL,z_12 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  t = parse_options_1_0(v_139, t);
  e_46 = t;
  x_12 = t;
  t = term_m_51;
  w_12 = t;
  t = SSL_table_create(w_12);
  f_13 = t;
  t = term_m_51;
  z_12 = t;
  t = f_13;
  g_13 = t;
  t = term_n_51;
  e_13 = t;
  t = SSL_table_put(z_12, e_13, e_46);
  t = e_46;
  t = x_139(t);
  {
    ATerm o_51 = t;
    int p_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_139, t);
        ;
        LocalPopChoice(p_51);
      }
    else
      {
        t = o_51;
        {
          ATerm q_51 = t;
          int r_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_139(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_51);
            }
          else
            {
              t = q_51;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_21 (ATerm t)
{
  t = if_verbose2_1_0(o_21, t);
  return(t);
}
ATerm j_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_21 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  t = term_h_47;
  h_13 = t;
  t = k_13;
  l_13 = t;
  t = term_s_51;
  i_13 = t;
  t = l_13;
  m_13 = t;
  t = term_r_21;
  j_13 = t;
  t = SSL_table_put(h_13, i_13, j_13);
  t = term_t_51;
  return(t);
}
ATerm m_21 (ATerm t)
{
  t = term_u_51;
  return(t);
}
ATerm o_21 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,r_13 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  f_46 = t;
  t = term_p_48;
  p_13 = t;
  t = term_h_47;
  n_13 = t;
  t = p_13;
  r_13 = t;
  t = term_p_48;
  o_13 = t;
  t = SSL_table_get(n_13, o_13);
  {
    ATerm v_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_13 = NULL,s_13 = NULL,y_13 = NULL,b_14 = NULL,c_14 = NULL;
        t = eval_config_0_0(t);
        q_13 = t;
        b_14 = t;
        t = term_h_47;
        s_13 = t;
        t = b_14;
        c_14 = t;
        t = term_p_48;
        y_13 = t;
        t = SSL_table_put(s_13, y_13, q_13);
        t = q_13;
        ;
        LocalPopChoice(w_51);
      }
    else
      {
        t = v_51;
      }
    g_46 = t;
    f_14 = t;
    t = term_s_21;
    d_14 = t;
    t = f_14;
    g_14 = t;
    t = (ATerm) ATinsert(ATempty, g_46);
    e_14 = t;
    t = SSL_printnl(d_14, e_14);
    t = f_46;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm t)
{
  ATerm a_21 (ATerm t)
  {
    ATerm x_51 = t;
    int y_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_139(t);
        ;
        LocalPopChoice(y_51);
      }
    else
      {
        t = x_51;
        {
          ATerm z_51 = t;
          int a_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(a_52);
            }
          else
            {
              t = z_51;
              {
                ATerm b_52 = t;
                int c_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(c_52);
                  }
                else
                  {
                    t = b_52;
                    {
                      ATerm d_52 = t;
                      int e_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_21, k_21, m_21, t);
                          ;
                          LocalPopChoice(e_52);
                        }
                      else
                        {
                          t = d_52;
                          {
                            ATerm f_52 = t;
                            int g_52 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(g_52);
                              }
                            else
                              {
                                t = f_52;
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
  ATerm i_21 (ATerm t)
  {
    ATerm h_46 = NULL,i_46 = NULL,t_13 = NULL;
    h_46 = t;
    {
      ATerm h_52 = t;
      int i_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_21 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_46 != NULL) && (i_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_21, t);
          ;
          LocalPopChoice(i_52);
        }
      else
        {
          t = h_52;
          t = term_j_52;
          i_46 = t;
        }
      t = not_null(i_46);
      t = ReadFromFile_0_0(t);
      t_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_46, t_13);
      t = apply_strategy_1_0(e_139, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_21, g_139, d_21, i_21, t);
  return(t);
}
ATerm q_21 (ATerm t)
{
  t = _2_0(_id, lift_definitions_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(q_21, _fail, default_usage_0_0, t);
  return(t);
}
