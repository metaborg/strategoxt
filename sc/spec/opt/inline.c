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
ATerm term_b_72;
ATerm term_m_71;
ATerm term_l_71;
ATerm term_k_71;
ATerm term_f_71;
ATerm term_e_71;
ATerm term_d_71;
ATerm term_m_70;
ATerm term_l_70;
ATerm term_g_70;
ATerm term_b_70;
ATerm term_a_70;
ATerm term_z_69;
ATerm term_y_69;
ATerm term_x_69;
ATerm term_w_69;
ATerm term_p_69;
ATerm term_k_69;
ATerm term_f_69;
ATerm term_y_68;
ATerm term_x_68;
ATerm term_h_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_e_68;
ATerm term_z_67;
ATerm term_y_67;
ATerm term_x_67;
ATerm term_w_67;
ATerm term_l_67;
ATerm term_k_67;
ATerm term_j_67;
ATerm term_i_67;
ATerm term_d_67;
ATerm term_c_67;
ATerm term_b_67;
ATerm term_a_67;
ATerm term_z_66;
ATerm term_s_66;
ATerm term_p_66;
ATerm term_k_66;
ATerm term_x_64;
ATerm term_w_64;
ATerm term_t_63;
ATerm term_m_63;
ATerm term_i_63;
ATerm term_a_60;
ATerm term_x_59;
ATerm term_p_59;
ATerm term_o_59;
ATerm term_j_59;
ATerm term_q_55;
ATerm term_q_54;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_d_52;
ATerm term_j_50;
ATerm term_b_50;
ATerm term_a_37;
ATerm term_v_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_g_34;
ATerm term_x_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_22;
void init_constant_terms (void)
{
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(sym_Op_2, term_j_59, (ATerm) ATempty);
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_59);
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_66));
  term_p_66 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_50);
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_67));
  term_l_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_67));
  term_w_67 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_67));
  term_x_67 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(sym__3, term_k_66, term_w_69, term_y_22);
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm topdown_1_0 (ATerm c_118 (ATerm), ATerm);
ATerm t_18 (ATerm);
ATerm v_18 (ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm y_18 (ATerm);
ATerm b_19 (ATerm);
ATerm d_19 (ATerm);
ATerm e_19 (ATerm);
ATerm f_19 (ATerm);
ATerm g_19 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm o_19 (ATerm);
ATerm p_19 (ATerm);
ATerm r_19 (ATerm);
ATerm s_19 (ATerm);
ATerm w_19 (ATerm);
ATerm x_19 (ATerm);
ATerm y_19 (ATerm);
ATerm a_20 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm e_20 (ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm i_20 (ATerm);
ATerm q_20 (ATerm);
ATerm r_20 (ATerm);
ATerm u_20 (ATerm);
ATerm v_20 (ATerm);
ATerm y_20 (ATerm);
ATerm z_20 (ATerm);
ATerm a_21 (ATerm);
ATerm b_21 (ATerm);
ATerm d_21 (ATerm);
ATerm j_21 (ATerm);
ATerm l_21 (ATerm);
ATerm r_21 (ATerm);
ATerm spaste_1_0 (ATerm g_117 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm);
ATerm Let_2_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm);
ATerm y_21 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm DistBinding_2_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm e_22 (ATerm);
ATerm f_22 (ATerm);
ATerm h_22 (ATerm);
ATerm RnBinding_2_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm x_131 (ATerm), ATerm);
ATerm rename_4_0 (ATerm e_131 (ATerm (ATerm), ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_131 (ATerm (ATerm), ATerm), ATerm);
ATerm v_22 (ATerm);
ATerm w_22 (ATerm);
ATerm x_22 (ATerm);
ATerm z_22 (ATerm);
ATerm b_23 (ATerm);
ATerm c_23 (ATerm);
ATerm d_23 (ATerm);
ATerm e_23 (ATerm);
ATerm tpaste_1_0 (ATerm c_117 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm);
ATerm f_23 (ATerm);
ATerm g_23 (ATerm);
ATerm k_23 (ATerm);
ATerm l_23 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm r_126 (ATerm), ATerm);
ATerm diff_1_0 (ATerm m_126 (ATerm), ATerm);
ATerm o_23 (ATerm);
ATerm p_23 (ATerm);
ATerm q_23 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm n_135 (ATerm), ATerm o_135 (ATerm), ATerm);
ATerm for_3_0 (ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm);
ATerm s_23 (ATerm);
ATerm t_23 (ATerm);
ATerm a_24 (ATerm);
ATerm c_24 (ATerm);
ATerm e_24 (ATerm);
ATerm f_24 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm i_24 (ATerm);
ATerm j_24 (ATerm);
ATerm k_24 (ATerm);
ATerm l_24 (ATerm);
ATerm s_24 (ATerm);
ATerm u_24 (ATerm);
ATerm x_24 (ATerm);
ATerm free_vars_3_0 (ATerm h_133 (ATerm), ATerm i_133 (ATerm), ATerm j_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm y_24 (ATerm);
ATerm z_24 (ATerm);
ATerm e_25 (ATerm);
ATerm f_25 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm f_103 (ATerm), ATerm);
ATerm q_25 (ATerm);
ATerm r_25 (ATerm);
ATerm s_25 (ATerm);
ATerm t_25 (ATerm);
ATerm u_25 (ATerm);
ATerm w_25 (ATerm);
ATerm y_25 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm z_25 (ATerm);
ATerm b_26 (ATerm);
ATerm c_26 (ATerm);
ATerm d_26 (ATerm);
ATerm e_26 (ATerm);
ATerm f_26 (ATerm);
ATerm g_26 (ATerm);
ATerm InlineCall0_0_0 (ATerm);
ATerm h_26 (ATerm);
ATerm j_26 (ATerm);
ATerm occurrences_1_0 (ATerm y_126 (ATerm), ATerm);
ATerm local_inlinable_1_0 (ATerm h_116 (ATerm), ATerm);
ATerm n_26 (ATerm);
ATerm UndefineSDef_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm l_130 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm k_130 (ATerm), ATerm);
ATerm scope_2_0 (ATerm m_130 (ATerm), ATerm n_130 (ATerm), ATerm);
ATerm r_26 (ATerm);
ATerm v_26 (ATerm);
ATerm c_27 (ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm assert_1_0 (ATerm o_130 (ATerm), ATerm);
ATerm e_27 (ATerm);
ATerm i_27 (ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm);
ATerm j_27 (ATerm);
ATerm n_27 (ATerm);
ATerm v_27 (ATerm);
ATerm w_27 (ATerm);
ATerm term_size_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm);
ATerm Match_1_0 (ATerm w_106 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm);
ATerm Build_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm o_106 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm);
ATerm x_27 (ATerm);
ATerm y_27 (ATerm);
ATerm a_28 (ATerm);
ATerm b_28 (ATerm);
ATerm c_28 (ATerm);
ATerm d_28 (ATerm);
ATerm e_28 (ATerm);
ATerm f_28 (ATerm);
ATerm h_28 (ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm);
ATerm p_28 (ATerm);
ATerm s_28 (ATerm);
ATerm t_28 (ATerm);
ATerm w_28 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm i_48 (ATerm h_47, ATerm i_47, ATerm j_47, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm g_119 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm d_29 (ATerm);
ATerm e_29 (ATerm);
ATerm g_29 (ATerm);
ATerm h_29 (ATerm);
ATerm i_29 (ATerm);
ATerm j_29 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm k_29 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm y_134 (ATerm), ATerm);
ATerm downup_1_0 (ATerm e_118 (ATerm), ATerm);
ATerm m_29 (ATerm);
ATerm n_29 (ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm h_102 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm m_102 (ATerm), ATerm);
ATerm _2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm p_145 (ATerm), ATerm);
ATerm s_29 (ATerm);
ATerm t_29 (ATerm);
ATerm v_29 (ATerm);
ATerm w_29 (ATerm);
ATerm y_29 (ATerm);
ATerm a_30 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_140 (ATerm), ATerm);
ATerm c_59 (ATerm w_58, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_30 (ATerm);
ATerm d_30 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm o_124 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm u_124 (ATerm), ATerm);
ATerm f_30 (ATerm);
ATerm g_30 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm i_30 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm s_138 (ATerm), ATerm);
ATerm j_30 (ATerm);
ATerm k_30 (ATerm);
ATerm m_30 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_30 (ATerm);
ATerm o_30 (ATerm);
ATerm p_30 (ATerm);
ATerm q_30 (ATerm);
ATerm r_30 (ATerm);
ATerm t_30 (ATerm);
ATerm u_30 (ATerm);
ATerm v_30 (ATerm);
ATerm a_31 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm b_31 (ATerm);
ATerm c_31 (ATerm);
ATerm d_31 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm e_31 (ATerm);
ATerm f_31 (ATerm);
ATerm g_31 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_31 (ATerm);
ATerm i_31 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_138 (ATerm), ATerm);
ATerm j_31 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_31 (ATerm);
ATerm need_help_1_0 (ATerm c_141 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_124 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_114 (ATerm), ATerm);
ATerm n_31 (ATerm);
ATerm o_31 (ATerm);
ATerm p_31 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_114 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_31 (ATerm);
ATerm s_31 (ATerm);
ATerm t_31 (ATerm);
ATerm u_31 (ATerm);
ATerm v_31 (ATerm);
ATerm w_31 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm y_31 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_143 (ATerm), ATerm);
ATerm b_32 (ATerm);
ATerm c_32 (ATerm);
ATerm f_32 (ATerm);
ATerm g_32 (ATerm);
ATerm parse_options_1_0 (ATerm e_143 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_141 (ATerm), ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm);
ATerm l_32 (ATerm);
ATerm n_32 (ATerm);
ATerm o_32 (ATerm);
ATerm p_32 (ATerm);
ATerm q_32 (ATerm);
ATerm iowrap_3_0 (ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm);
ATerm s_32 (ATerm);
ATerm u_32 (ATerm);
ATerm v_32 (ATerm);
ATerm w_32 (ATerm);
ATerm x_32 (ATerm);
ATerm y_32 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL,r_0 = NULL,t_0 = NULL,u_0 = NULL,x_0 = NULL,c_1 = NULL,e_1 = NULL;
  m_0 = t;
  t = term_y_22;
  t = whoami_0_0(t);
  o_0 = t;
  u_0 = t;
  t = term_z_32;
  r_0 = t;
  t = u_0;
  x_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_33), o_0), term_a_33);
  t_0 = t;
  t = SSL_printnl(r_0, t_0);
  e_1 = t;
  t = term_c_33;
  c_1 = t;
  t = SSL_exit(c_1);
  t = m_0;
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL;
  if(match_cons(t, sym_Test_1))
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
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm s_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      s_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_0)), (ATerm) ATmakeAppl(sym_Seq_2, s_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_0)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      y_0 = ATgetArgument(t, 0);
      {
        ATerm e_33 = ATgetArgument(t, 1);
        if(match_cons(e_33, sym_Scope_2))
          {
            z_0 = ATgetArgument(e_33, 0);
            a_1 = ATgetArgument(e_33, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_0, z_0);
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_33 = ATgetArgument(t, 0);
            ATerm i_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_0;
        {
          ATerm l_18 (ATerm t)
          {
            t = z_0;
            return(t);
          }
          t = at_end_1_0(l_18, t);
        }
        ;
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
        {
          ATerm w_0 = NULL,f_1 = NULL,g_1 = NULL;
          g_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_0, z_0);
          f_1 = t;
          t = SSL_explode_term(f_1);
          if(match_cons(t, sym__2))
            {
              ATerm r_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              w_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_0;
          t = concat_0_0(t);
        }
      }
    b_1 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, b_1, a_1);
  }
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,d_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      if(match_cons(s_33, sym_SVar_1))
        {
          m_1 = ATgetArgument(s_33, 0);
        }
      else
        _fail(t);
      n_1 = ATgetArgument(t, 1);
      o_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = term_x_33;
  k_1 = t;
  t = term_x_33;
  i_1 = t;
  t = k_1;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_1), (ATerm)ATempty, (ATerm) ATempty);
  j_1 = t;
  t = SSL_table_get(i_1, j_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_1 = ATgetFirst((ATermList) t);
      {
        ATerm y_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_1;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm z_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_33) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_1), n_1, o_1);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm q_1 = NULL,t_1 = NULL,h_1 = NULL,r_1 = NULL,s_1 = NULL;
  q_1 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm a_34 = ATgetArgument(t, 0);
      if(match_cons(a_34, sym_SVar_1))
        {
          ATerm f_34 = ATgetArgument(a_34, 0);
        }
      else
        _fail(t);
      {
        ATerm d_34 = ATgetArgument(t, 1);
        if(((ATgetType(d_34) != AT_LIST) || !(ATisEmpty(d_34))))
          _fail(t);
      }
      {
        ATerm e_34 = ATgetArgument(t, 2);
        if(((ATgetType(e_34) != AT_LIST) || !(ATisEmpty(e_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_g_34;
  s_1 = t;
  t = term_g_34;
  r_1 = t;
  t = SSL_table_get(r_1, q_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_1 = ATgetFirst((ATermList) t);
      {
        ATerm h_34 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_1;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_34) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_1;
  t = strename_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm c_118 (ATerm), ATerm t)
{
  t = c_118(t);
  {
    ATerm m_18 (ATerm t)
    {
      t = topdown_1_0(c_118, t);
      return(t);
    }
    t = SRTS_all(m_18, t);
  }
  return(t);
}
ATerm t_18 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm v_18 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,k_2 = NULL,l_2 = NULL,o_2 = NULL,p_2 = NULL,r_2 = NULL,u_2 = NULL,x_2 = NULL;
  k_2 = t;
  if(match_cons(t, sym__2))
    {
      l_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_2;
  if(match_cons(t, sym_VarDec_2))
    {
      o_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_2;
  if(match_cons(t, sym_FunType_2))
    {
      r_2 = ATgetArgument(t, 0);
      {
        ATerm j_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_34 = ATgetFirst((ATermList) t);
      u_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_2;
  {
    ATerm r_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_34 = ATgetFirst((ATermList) t);
            ATerm x_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_34);
        t = x_2;
        if(match_cons(t, sym_CallT_3))
          {
            f_2 = ATgetArgument(t, 0);
            h_2 = ATgetArgument(t, 1);
            i_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = f_2;
        if(match_cons(t, sym_SVar_1))
          {
            g_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_2), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_y_34, g_2));
        t = assert_1_0(t_18, t);
        t = k_2;
      }
    else
      {
        t = r_34;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_2), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_z_34, x_2));
        t = assert_1_0(v_18, t);
        t = k_2;
      }
  }
  return(t);
}
ATerm y_18 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm b_19 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm d_19 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      if(((ATgetType(a_35) != AT_LIST) || !(ATisEmpty(a_35))))
        _fail(t);
      {
        ATerm b_35 = ATgetArgument(t, 1);
        if(((ATgetType(b_35) != AT_LIST) || !(ATisEmpty(b_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_19 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_35 = ATgetArgument(t, 0);
      if(((ATgetType(c_35) == AT_LIST) && !(ATisEmpty(c_35))))
        {
          j_3 = ATgetFirst((ATermList) c_35);
          l_3 = (ATerm) ATgetNext((ATermList) c_35);
        }
      else
        _fail(t);
      {
        ATerm d_35 = ATgetArgument(t, 1);
        if(((ATgetType(d_35) == AT_LIST) && !(ATisEmpty(d_35))))
          {
            k_3 = ATgetFirst((ATermList) d_35);
            m_3 = (ATerm) ATgetNext((ATermList) d_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_3, k_3), (ATerm) ATmakeAppl(sym__2, l_3, m_3));
  return(t);
}
ATerm f_19 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_3), p_3);
  return(t);
}
ATerm g_19 (ATerm t)
{
  ATerm e_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          ;
          LocalPopChoice(k_35);
        }
      else
        {
          t = i_35;
          t = SubsArgCall2_0_0(t);
        }
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = e_35;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  ATerm z_18 (ATerm t)
  {
    ATerm c_19 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((g_3 != NULL) && (g_3 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            g_3 = ATgetArgument(t, 0);
          if(((h_3 != NULL) && (h_3 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_3 = ATgetArgument(t, 1);
          if(((i_3 != NULL) && (i_3 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            i_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(h_3));
      t = genzip_4_0(d_19, e_19, f_19, substitute_arg_0_0, t);
      t = not_null(i_3);
      t = topdown_1_0(g_19, t);
      return(t);
    }
    t = scope_2_0(b_19, c_19, t);
    return(t);
  }
  t = scope_2_0(y_18, z_18, t);
  return(t);
}
ATerm o_19 (ATerm t)
{
  ATerm z_4 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_4 = ATgetArgument(t, 0);
      {
        ATerm n_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_4;
  return(t);
}
ATerm p_19 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      if(((ATgetType(o_35) != AT_LIST) || !(ATisEmpty(o_35))))
        _fail(t);
      {
        ATerm p_35 = ATgetArgument(t, 1);
        if(((ATgetType(p_35) != AT_LIST) || !(ATisEmpty(p_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_19 (ATerm t)
{
  ATerm c_5 = NULL,g_5 = NULL,j_5 = NULL,m_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_35 = ATgetArgument(t, 0);
      if(((ATgetType(q_35) == AT_LIST) && !(ATisEmpty(q_35))))
        {
          c_5 = ATgetFirst((ATermList) q_35);
          j_5 = (ATerm) ATgetNext((ATermList) q_35);
        }
      else
        _fail(t);
      {
        ATerm s_35 = ATgetArgument(t, 1);
        if(((ATgetType(s_35) == AT_LIST) && !(ATisEmpty(s_35))))
          {
            g_5 = ATgetFirst((ATermList) s_35);
            m_5 = (ATerm) ATgetNext((ATermList) s_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_5, g_5), (ATerm) ATmakeAppl(sym__2, j_5, m_5));
  return(t);
}
ATerm s_19 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_5), u_5);
  return(t);
}
ATerm w_19 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL;
  if(match_cons(t, sym__2))
    {
      w_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_5))));
  return(t);
}
ATerm x_19 (ATerm t)
{
  t = term_v_35;
  return(t);
}
ATerm y_19 (ATerm t)
{
  t = repeat_1_0(a_20, t);
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      {
        ATerm y_35 = t;
        int z_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,n_6 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                f_6 = ATgetArgument(t, 0);
                g_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_6;
            if(match_cons(t, sym_Let_2))
              {
                h_6 = ATgetArgument(t, 0);
                n_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, h_6, (ATerm) ATmakeAppl(sym_Seq_2, f_6, n_6));
            ;
            LocalPopChoice(z_35);
          }
        else
          {
            t = y_35;
            {
              ATerm a_36 = t;
              int b_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(b_36);
                }
              else
                {
                  t = a_36;
                  {
                    ATerm c_36 = t;
                    int d_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(d_36);
                      }
                    else
                      {
                        t = c_36;
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
  ATerm i_7 = NULL,v_7 = NULL,i_8 = NULL,e_9 = NULL,y_9 = NULL;
  i_7 = t;
  if(match_cons(t, sym_CallT_3))
    {
      v_7 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
      y_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_7;
  if(match_cons(t, sym_SVar_1))
    {
      i_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
        t = term_v_35;
        w_1 = t;
        t = term_v_35;
        u_1 = t;
        t = w_1;
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_8), (ATerm)ATempty, (ATerm) ATempty);
        v_1 = t;
        t = SSL_table_get(u_1, v_1);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_3 = ATgetFirst((ATermList) t);
            {
              ATerm i_36 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_3;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        {
          ATerm n_36 = t;
          int q_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_4 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
              t = term_v_35;
              a_2 = t;
              t = term_v_35;
              y_1 = t;
              t = a_2;
              b_2 = t;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_8), (ATerm)ATempty, (ATerm) ATempty);
              z_1 = t;
              t = SSL_table_get(y_1, z_1);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_4 = ATgetFirst((ATermList) t);
                  {
                    ATerm s_36 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = d_4;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(q_36);
            }
          else
            {
              t = n_36;
              {
                ATerm u_36 = t;
                int w_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,c_7 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,j_2 = NULL;
                    t = term_v_35;
                    e_2 = t;
                    t = term_v_35;
                    c_2 = t;
                    t = e_2;
                    j_2 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_8), (ATerm)ATempty, (ATerm) ATempty);
                    d_2 = t;
                    t = SSL_table_get(c_2, d_2);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        c_7 = ATgetFirst((ATermList) t);
                        {
                          ATerm y_36 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = c_7;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm z_36 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) z_36) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        p_4 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = p_4;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((i_8 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        q_4 = ATgetArgument(t, 1);
                        r_4 = ATgetArgument(t, 2);
                        s_4 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, q_4, e_9, s_4);
                    t = substitute_args_0_0(t);
                    u_4 = t;
                    t = r_4;
                    t = map_1_0(o_19, t);
                    v_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_9, v_4);
                    t = genzip_4_0(p_19, r_19, s_19, w_19, t);
                    w_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_8), (ATerm)ATempty, (ATerm) ATempty), term_a_37);
                    t = assert_1_0(x_19, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, v_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_4), u_4));
                    t = downup_1_0(y_19, t);
                    ;
                    LocalPopChoice(w_36);
                  }
                else
                  {
                    t = u_36;
                    {
                      ATerm q_7 = NULL,m_2 = NULL,n_2 = NULL,q_2 = NULL,s_2 = NULL;
                      t = term_v_35;
                      q_2 = t;
                      t = term_v_35;
                      m_2 = t;
                      t = q_2;
                      s_2 = t;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_8), (ATerm)ATempty, (ATerm) ATempty);
                      n_2 = t;
                      t = SSL_table_get(m_2, n_2);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          q_7 = ATgetFirst((ATermList) t);
                          {
                            ATerm b_37 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = q_7;
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm e_20 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_37 = ATgetArgument(t, 0);
      if(((ATgetType(c_37) != AT_LIST) || !(ATisEmpty(c_37))))
        _fail(t);
      {
        ATerm e_37 = ATgetArgument(t, 1);
        if(((ATgetType(e_37) != AT_LIST) || !(ATisEmpty(e_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_20 (ATerm t)
{
  ATerm p_13 = NULL,a_14 = NULL,n_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_37 = ATgetArgument(t, 0);
      if(((ATgetType(g_37) == AT_LIST) && !(ATisEmpty(g_37))))
        {
          p_13 = ATgetFirst((ATermList) g_37);
          n_14 = (ATerm) ATgetNext((ATermList) g_37);
        }
      else
        _fail(t);
      {
        ATerm h_37 = ATgetArgument(t, 1);
        if(((ATgetType(h_37) == AT_LIST) && !(ATisEmpty(h_37))))
          {
            a_14 = ATgetFirst((ATermList) h_37);
            u_14 = (ATerm) ATgetNext((ATermList) h_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_13, a_14), (ATerm) ATmakeAppl(sym__2, n_14, u_14));
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm d_15 = NULL,o_15 = NULL;
  if(match_cons(t, sym__2))
    {
      d_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_15), d_15);
  return(t);
}
ATerm i_20 (ATerm t)
{
  ATerm z_15 = NULL,r_16 = NULL,u_16 = NULL,w_16 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_15;
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm m_37 = ATgetArgument(t, 0);
            r_16 = ATgetArgument(t, 1);
            u_16 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(l_37);
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_17, r_16, u_16);
      }
    else
      {
        t = k_37;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm n_37 = ATgetArgument(t, 0);
            r_16 = ATgetArgument(t, 1);
            u_16 = ATgetArgument(t, 2);
            w_16 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_17, r_16, u_16, w_16);
      }
  }
  return(t);
}
ATerm q_20 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_37 = ATgetArgument(t, 0);
      if(((ATgetType(o_37) != AT_LIST) || !(ATisEmpty(o_37))))
        _fail(t);
      {
        ATerm p_37 = ATgetArgument(t, 1);
        if(((ATgetType(p_37) != AT_LIST) || !(ATisEmpty(p_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_20 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_37 = ATgetArgument(t, 0);
      if(((ATgetType(q_37) == AT_LIST) && !(ATisEmpty(q_37))))
        {
          l_17 = ATgetFirst((ATermList) q_37);
          n_17 = (ATerm) ATgetNext((ATermList) q_37);
        }
      else
        _fail(t);
      {
        ATerm r_37 = ATgetArgument(t, 1);
        if(((ATgetType(r_37) == AT_LIST) && !(ATisEmpty(r_37))))
          {
            m_17 = ATgetFirst((ATermList) r_37);
            o_17 = (ATerm) ATgetNext((ATermList) r_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_17, m_17), (ATerm) ATmakeAppl(sym__2, n_17, o_17));
  return(t);
}
ATerm u_20 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_17), p_17);
  return(t);
}
ATerm v_20 (ATerm t)
{
  ATerm s_17 = NULL,u_17 = NULL,v_17 = NULL;
  if(match_cons(t, sym__2))
    {
      s_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_17;
  {
    ATerm s_37 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_17);
      }
    else
      {
        t = s_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_38 = ATgetArgument(t, 0);
            u_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_17, u_17);
      }
  }
  return(t);
}
ATerm y_20 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_38 = ATgetArgument(t, 0);
      if(((ATgetType(l_38) != AT_LIST) || !(ATisEmpty(l_38))))
        _fail(t);
      {
        ATerm m_38 = ATgetArgument(t, 1);
        if(((ATgetType(m_38) != AT_LIST) || !(ATisEmpty(m_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_20 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_38 = ATgetArgument(t, 0);
      if(((ATgetType(n_38) == AT_LIST) && !(ATisEmpty(n_38))))
        {
          z_17 = ATgetFirst((ATermList) n_38);
          b_18 = (ATerm) ATgetNext((ATermList) n_38);
        }
      else
        _fail(t);
      {
        ATerm r_38 = ATgetArgument(t, 1);
        if(((ATgetType(r_38) == AT_LIST) && !(ATisEmpty(r_38))))
          {
            a_18 = ATgetFirst((ATermList) r_38);
            c_18 = (ATerm) ATgetNext((ATermList) r_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_17, a_18), (ATerm) ATmakeAppl(sym__2, b_18, c_18));
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_18), d_18);
  return(t);
}
ATerm b_21 (ATerm t)
{
  ATerm g_18 = NULL,i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      g_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_18;
  {
    ATerm s_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_18);
      }
    else
      {
        t = s_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_38 = ATgetArgument(t, 0);
            i_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_18, i_18);
      }
  }
  return(t);
}
ATerm d_21 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      if(((ATgetType(z_38) != AT_LIST) || !(ATisEmpty(z_38))))
        _fail(t);
      {
        ATerm e_39 = ATgetArgument(t, 1);
        if(((ATgetType(e_39) != AT_LIST) || !(ATisEmpty(e_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_21 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_39 = ATgetArgument(t, 0);
      if(((ATgetType(f_39) == AT_LIST) && !(ATisEmpty(f_39))))
        {
          n_18 = ATgetFirst((ATermList) f_39);
          p_18 = (ATerm) ATgetNext((ATermList) f_39);
        }
      else
        _fail(t);
      {
        ATerm g_39 = ATgetArgument(t, 1);
        if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
          {
            o_18 = ATgetFirst((ATermList) g_39);
            q_18 = (ATerm) ATgetNext((ATermList) g_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_18, o_18), (ATerm) ATmakeAppl(sym__2, p_18, q_18));
  return(t);
}
ATerm l_21 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_18), r_18);
  return(t);
}
ATerm r_21 (ATerm t)
{
  ATerm u_18 = NULL,w_18 = NULL,x_18 = NULL;
  if(match_cons(t, sym__2))
    {
      u_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_18;
  {
    ATerm n_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_18);
      }
    else
      {
        t = n_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm t_39 = ATgetArgument(t, 0);
            w_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_18, w_18);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm g_117 (ATerm), ATerm t)
{
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_20 (ATerm t)
      {
        ATerm s_7 = NULL,u_7 = NULL;
        s_7 = t;
        t = g_117(t);
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_7, u_7);
        t = genzip_4_0(e_20, g_20, h_20, i_20, t);
        return(t);
      }
      t = Let_2_0(c_20, _id, t);
      ;
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
      {
        ATerm d_40 = t;
        int e_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_20 (ATerm t)
            {
              ATerm y_7 = NULL,a_8 = NULL;
              y_7 = t;
              t = g_117(t);
              a_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_7, a_8);
              t = genzip_4_0(q_20, r_20, u_20, v_20, t);
              return(t);
            }
            t = SDef_3_0(_id, k_20, _id, t);
            ;
            LocalPopChoice(e_40);
          }
        else
          {
            t = d_40;
            {
              ATerm j_40 = t;
              int k_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_20 (ATerm t)
                  {
                    ATerm d_8 = NULL,f_8 = NULL;
                    d_8 = t;
                    t = g_117(t);
                    f_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_8, f_8);
                    t = genzip_4_0(y_20, z_20, a_21, b_21, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, x_20, _id, _id, t);
                  ;
                  LocalPopChoice(k_40);
                }
              else
                {
                  t = j_40;
                  {
                    ATerm t_40 = t;
                    int u_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_21 (ATerm t)
                        {
                          ATerm j_8 = NULL,l_8 = NULL;
                          j_8 = t;
                          t = g_117(t);
                          l_8 = t;
                          t = (ATerm) ATmakeAppl(sym__2, j_8, l_8);
                          t = genzip_4_0(d_21, j_21, l_21, r_21, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, c_21, _id, _id, t);
                        ;
                        LocalPopChoice(u_40);
                      }
                    else
                      {
                        t = t_40;
                        {
                          ATerm u_21 (ATerm t)
                          {
                            ATerm h_19 = NULL;
                            t = g_117(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                h_19 = ATgetFirst((ATermList) t);
                                {
                                  ATerm y_40 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = h_19;
                            return(t);
                          }
                          t = Rec_2_0(u_21, _id, t);
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
ATerm Rec_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,t_2 = NULL,v_2 = NULL;
  n_19 = t;
  if(match_cons(t, sym_Rec_2))
    {
      j_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_19);
  i_19 = t;
  t = j_19;
  t = m_107(t);
  l_19 = t;
  t = k_19;
  t = n_107(t);
  m_19 = t;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, l_19, m_19);
  t_2 = t;
  t = SSLsetAnnotations(t_2, i_19);
  return(t);
}
ATerm SDef_3_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,z_19 = NULL,b_20 = NULL,d_20 = NULL,f_20 = NULL,w_2 = NULL,y_2 = NULL;
  f_20 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
      v_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_20);
  q_19 = t;
  t = t_19;
  t = e_109(t);
  z_19 = t;
  t = u_19;
  t = f_109(t);
  b_20 = t;
  t = v_19;
  t = g_109(t);
  d_20 = t;
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, z_19, b_20, d_20);
  w_2 = t;
  t = SSLsetAnnotations(w_2, q_19);
  return(t);
}
ATerm Let_2_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,z_2 = NULL,a_3 = NULL;
  p_20 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_20);
  j_20 = t;
  t = l_20;
  t = p_106(t);
  n_20 = t;
  t = m_20;
  t = q_106(t);
  o_20 = t;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, n_20, o_20);
  z_2 = t;
  t = SSLsetAnnotations(z_2, j_20);
  return(t);
}
ATerm sboundin_3_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t)
{
  ATerm z_40 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(h_117, h_117, t);
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = z_40;
      {
        ATerm g_41 = t;
        int h_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(j_117, j_117, h_117, t);
            ;
            LocalPopChoice(h_41);
          }
        else
          {
            t = g_41;
            {
              ATerm i_41 = t;
              int j_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(j_117, j_117, j_117, h_117, t);
                  ;
                  LocalPopChoice(j_41);
                }
              else
                {
                  t = i_41;
                  t = Rec_2_0(j_117, h_117, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_21 (ATerm t)
{
  ATerm w_20 = NULL;
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_20 = ATgetArgument(t, 0);
          {
            ATerm m_41 = ATgetArgument(t, 1);
          }
          {
            ATerm n_41 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_41);
      t = w_20;
    }
  else
    {
      t = k_41;
      if(match_cons(t, sym_SDefT_4))
        {
          w_20 = ATgetArgument(t, 0);
          {
            ATerm o_41 = ATgetArgument(t, 1);
          }
          {
            ATerm p_41 = ATgetArgument(t, 2);
          }
          {
            ATerm q_41 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = w_20;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm t_20 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      t_20 = ATgetArgument(t, 0);
      {
        ATerm r_41 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_20;
  t = map_1_0(y_21, t);
  return(t);
}
ATerm DistBinding_2_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  if(match_cons(t, sym__3))
    {
      e_21 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
      g_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_21;
  {
    ATerm c_22 (ATerm t)
    {
      ATerm h_21 = NULL;
      h_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_21, g_21);
      t = p_131(t);
      return(t);
    }
    ATerm d_22 (ATerm t)
    {
      ATerm i_21 = NULL;
      i_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, f_21);
      t = p_131(t);
      return(t);
    }
    t = q_131(c_22, d_22, _id, t);
  }
  return(t);
}
ATerm e_22 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_41 = ATgetArgument(t, 0);
      if(((ATgetType(s_41) != AT_LIST) || !(ATisEmpty(s_41))))
        _fail(t);
      {
        ATerm t_41 = ATgetArgument(t, 1);
        if(((ATgetType(t_41) != AT_LIST) || !(ATisEmpty(t_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_22 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_41 = ATgetArgument(t, 0);
      if(((ATgetType(x_41) == AT_LIST) && !(ATisEmpty(x_41))))
        {
          v_21 = ATgetFirst((ATermList) x_41);
          x_21 = (ATerm) ATgetNext((ATermList) x_41);
        }
      else
        _fail(t);
      {
        ATerm y_41 = ATgetArgument(t, 1);
        if(((ATgetType(y_41) == AT_LIST) && !(ATisEmpty(y_41))))
          {
            w_21 = ATgetFirst((ATermList) y_41);
            z_21 = (ATerm) ATgetNext((ATermList) y_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_21, w_21), (ATerm) ATmakeAppl(sym__2, x_21, z_21));
  return(t);
}
ATerm h_22 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_22), a_22);
  return(t);
}
ATerm RnBinding_2_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_21;
  t = j_131(t);
  n_21 = t;
  t = map_1_0(new_0_0, t);
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
  t = genzip_4_0(e_22, f_22, h_22, _id, t);
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_21, m_21);
  {
    ATerm z_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_42 = ATgetArgument(t, 0);
            ATerm c_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_21;
        {
          ATerm j_22 (ATerm t)
          {
            t = m_21;
            return(t);
          }
          t = at_end_1_0(j_22, t);
        }
        ;
        LocalPopChoice(a_42);
      }
    else
      {
        t = z_41;
        {
          ATerm r_8 = NULL,b_3 = NULL,c_3 = NULL;
          c_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_21, m_21);
          b_3 = t;
          t = SSL_explode_term(b_3);
          if(match_cons(t, sym__2))
            {
              ATerm d_42 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_42) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_8;
          t = concat_0_0(t);
        }
      }
    q_21 = t;
    t = k_21;
    {
      ATerm l_22 (ATerm t)
      {
        t = o_21;
        return(t);
      }
      t = k_131(l_22, t);
      t_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, t_21, m_21, q_21);
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_22 = NULL,k_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_22 = ATgetFirst((ATermList) t);
      r_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_22;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
      {
        ATerm e_42 = t;
        int g_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_22;
            if((m_22 != t))
              {
                _fail(t);
              }
            t = k_22;
            ;
            LocalPopChoice(g_42);
          }
        else
          {
            t = e_42;
            t = (ATerm) ATmakeAppl(sym__2, m_22, r_22);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_22, r_22);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm x_131 (ATerm), ATerm t)
{
  ATerm h_23 (ATerm t)
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_131(t);
        ;
        LocalPopChoice(i_42);
      }
    else
      {
        t = h_42;
        {
          ATerm x_8 = NULL,y_8 = NULL;
          ATerm q_22 (ATerm t)
          {
            ATerm z_8 = NULL;
            z_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_8, not_null(y_8));
            t = h_23(t);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              if(((x_8 != NULL) && (x_8 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_8 = ATgetArgument(t, 0);
              if(((y_8 != NULL) && (y_8 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                y_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(x_8);
          t = SRTS_all(q_22, t);
        }
      }
    return(t);
  }
  t = h_23(t);
  return(t);
}
ATerm rename_4_0 (ATerm e_131 (ATerm (ATerm), ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_131 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm i_23 = NULL;
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_23, (ATerm) ATempty);
  {
    ATerm j_23 (ATerm t)
    {
      ATerm s_22 (ATerm t)
      {
        ATerm j_42 = t;
        int k_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_9 = NULL,c_9 = NULL;
            ATerm t_22 (ATerm t)
            {
              ATerm f_9 = NULL;
              f_9 = t;
              t = (ATerm) ATmakeAppl(sym__2, f_9, not_null(c_9));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((b_9 != NULL) && (b_9 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_9 = ATgetArgument(t, 0);
                if(((c_9 != NULL) && (c_9 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  c_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(b_9);
            t = e_131(t_22, t);
            ;
            LocalPopChoice(k_42);
          }
        else
          {
            t = j_42;
            t = RnBinding_2_0(f_131, h_131, t);
            t = DistBinding_2_0(j_23, g_131, t);
          }
        return(t);
      }
      t = env_alltd_1_0(s_22, t);
      return(t);
    }
    t = j_23(t);
  }
  return(t);
}
ATerm v_22 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_42 = ATgetArgument(t, 0);
      if(((ATgetType(l_42) != AT_LIST) || !(ATisEmpty(l_42))))
        _fail(t);
      {
        ATerm n_42 = ATgetArgument(t, 1);
        if(((ATgetType(n_42) != AT_LIST) || !(ATisEmpty(n_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_22 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_42 = ATgetArgument(t, 0);
      if(((ATgetType(o_42) == AT_LIST) && !(ATisEmpty(o_42))))
        {
          u_23 = ATgetFirst((ATermList) o_42);
          w_23 = (ATerm) ATgetNext((ATermList) o_42);
        }
      else
        _fail(t);
      {
        ATerm p_42 = ATgetArgument(t, 1);
        if(((ATgetType(p_42) == AT_LIST) && !(ATisEmpty(p_42))))
          {
            v_23 = ATgetFirst((ATermList) p_42);
            x_23 = (ATerm) ATgetNext((ATermList) p_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_23, v_23), (ATerm) ATmakeAppl(sym__2, w_23, x_23));
  return(t);
}
ATerm x_22 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL;
  if(match_cons(t, sym__2))
    {
      y_23 = ATgetArgument(t, 0);
      z_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_23), y_23);
  return(t);
}
ATerm z_22 (ATerm t)
{
  ATerm b_24 = NULL,d_24 = NULL,g_24 = NULL;
  if(match_cons(t, sym__2))
    {
      b_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_24;
  {
    ATerm q_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_24);
      }
    else
      {
        t = q_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_42 = ATgetArgument(t, 0);
            d_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_24, d_24);
      }
  }
  return(t);
}
ATerm b_23 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_42 = ATgetArgument(t, 0);
      if(((ATgetType(v_42) != AT_LIST) || !(ATisEmpty(v_42))))
        _fail(t);
      {
        ATerm w_42 = ATgetArgument(t, 1);
        if(((ATgetType(w_42) != AT_LIST) || !(ATisEmpty(w_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_23 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_42 = ATgetArgument(t, 0);
      if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
        {
          m_24 = ATgetFirst((ATermList) x_42);
          o_24 = (ATerm) ATgetNext((ATermList) x_42);
        }
      else
        _fail(t);
      {
        ATerm y_42 = ATgetArgument(t, 1);
        if(((ATgetType(y_42) == AT_LIST) && !(ATisEmpty(y_42))))
          {
            n_24 = ATgetFirst((ATermList) y_42);
            p_24 = (ATerm) ATgetNext((ATermList) y_42);
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
ATerm d_23 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  if(match_cons(t, sym__2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_24), q_24);
  return(t);
}
ATerm e_23 (ATerm t)
{
  ATerm t_24 = NULL,v_24 = NULL,w_24 = NULL;
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_24;
  {
    ATerm z_42 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_24);
      }
    else
      {
        t = z_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_43 = ATgetArgument(t, 0);
            v_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_24, v_24);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm c_117 (ATerm), ATerm t)
{
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(c_117, _id, t);
      ;
      LocalPopChoice(n_43);
    }
  else
    {
      t = m_43;
      {
        ATerm o_43 = t;
        int q_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_22 (ATerm t)
            {
              ATerm k_9 = NULL,m_9 = NULL;
              k_9 = t;
              t = c_117(t);
              m_9 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_9, m_9);
              t = genzip_4_0(v_22, w_22, x_22, z_22, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, u_22, _id, t);
            ;
            LocalPopChoice(q_43);
          }
        else
          {
            t = o_43;
            {
              ATerm a_23 (ATerm t)
              {
                ATerm p_9 = NULL,r_9 = NULL;
                p_9 = t;
                t = c_117(t);
                r_9 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_9, r_9);
                t = genzip_4_0(b_23, c_23, d_23, e_23, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, a_23, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,d_3 = NULL,e_3 = NULL;
  d_25 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      b_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_25);
  a_25 = t;
  t = b_25;
  t = w_105(t);
  c_25 = t;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, c_25);
  d_3 = t;
  t = SSLsetAnnotations(d_3, a_25);
  return(t);
}
ATerm RDefT_4_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,f_3 = NULL,n_3 = NULL;
  p_25 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
      j_25 = ATgetArgument(t, 2);
      k_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_25);
  g_25 = t;
  t = h_25;
  t = n_105(t);
  l_25 = t;
  t = i_25;
  t = o_105(t);
  m_25 = t;
  t = j_25;
  t = p_105(t);
  n_25 = t;
  t = k_25;
  t = q_105(t);
  o_25 = t;
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, l_25, m_25, n_25, o_25);
  f_3 = t;
  t = SSLsetAnnotations(f_3, g_25);
  return(t);
}
ATerm tboundin_3_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  ATerm s_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(f_117, d_117, t);
      ;
      LocalPopChoice(t_43);
    }
  else
    {
      t = s_43;
      {
        ATerm v_43 = t;
        int w_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(f_117, f_117, f_117, d_117, t);
            ;
            LocalPopChoice(w_43);
          }
        else
          {
            t = v_43;
            {
              ATerm b_44 = t;
              int c_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(f_117, f_117, f_117, d_117, t);
                  ;
                  LocalPopChoice(c_44);
                }
              else
                {
                  t = b_44;
                  t = DynamicRules_1_0(d_117, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm f_23 (ATerm t)
{
  ATerm v_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_25);
  return(t);
}
ATerm g_23 (ATerm t)
{
  ATerm d_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_44);
    }
  else
    {
      t = d_44;
      {
        ATerm x_25 = NULL,a_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_25 = ATgetArgument(t, 0);
            t = x_25;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm f_44 = t;
            int g_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm h_44 = ATgetArgument(t, 0);
                    ATerm y_44 = ATgetArgument(t, 1);
                    a_26 = ATgetArgument(t, 2);
                    {
                      ATerm z_44 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(g_44);
                t = a_26;
                t = map_1_0(k_23, t);
              }
            else
              {
                t = f_44;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm a_45 = ATgetArgument(t, 0);
                    ATerm b_45 = ATgetArgument(t, 1);
                    a_26 = ATgetArgument(t, 2);
                    {
                      ATerm c_45 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = a_26;
                t = map_1_0(l_23, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_23 (ATerm t)
{
  ATerm i_26 = NULL;
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_26 = ATgetArgument(t, 0);
          {
            ATerm f_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_45);
      t = i_26;
    }
  else
    {
      t = d_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_26;
    }
  return(t);
}
ATerm l_23 (ATerm t)
{
  ATerm p_26 = NULL;
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_26 = ATgetArgument(t, 0);
          {
            ATerm i_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_45);
      t = p_26;
    }
  else
    {
      t = g_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_26;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(f_23, g_23, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm r_126 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_26;
  {
    ATerm w_26 (ATerm t)
    {
      ATerm j_45 = t;
      int k_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_26;
          ;
          LocalPopChoice(k_45);
        }
      else
        {
          t = j_45;
          {
            ATerm l_45 = t;
            int m_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_9 = NULL,v_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_9 = ATgetFirst((ATermList) t);
                    v_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = t_26;
                {
                  ATerm m_23 (ATerm t)
                  {
                    ATerm w_9 = NULL;
                    w_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_9, w_9);
                    t = r_126(t);
                    return(t);
                  }
                  t = fetch_1_0(m_23, t);
                  t = v_9;
                  t = w_26(t);
                }
                ;
                LocalPopChoice(m_45);
              }
            else
              {
                t = l_45;
                t = Cons_2_0(_id, w_26, t);
              }
          }
        }
      return(t);
    }
    t = w_26(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL;
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27;
  {
    ATerm d_27 (ATerm t)
    {
      ATerm n_45 = t;
      int o_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(o_45);
        }
      else
        {
          t = n_45;
          {
            ATerm p_45 = t;
            int q_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_10 = NULL,b_10 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    a_10 = ATgetFirst((ATermList) t);
                    b_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_27;
                {
                  ATerm n_23 (ATerm t)
                  {
                    ATerm c_10 = NULL;
                    c_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_10, c_10);
                    t = m_126(t);
                    return(t);
                  }
                  t = fetch_1_0(n_23, t);
                  t = b_10;
                  t = d_27(t);
                }
                ;
                LocalPopChoice(q_45);
              }
            else
              {
                t = p_45;
                t = Cons_2_0(_id, d_27, t);
              }
          }
        }
      return(t);
    }
    t = d_27(t);
  }
  return(t);
}
ATerm o_23 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_45 = ATgetArgument(t, 0);
      if(((ATgetType(r_45) != AT_LIST) || !(ATisEmpty(r_45))))
        _fail(t);
      {
        ATerm s_45 = ATgetArgument(t, 1);
        if(((ATgetType(s_45) != AT_LIST) || !(ATisEmpty(s_45))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_23 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_45 = ATgetArgument(t, 0);
      if(((ATgetType(t_45) == AT_LIST) && !(ATisEmpty(t_45))))
        {
          p_27 = ATgetFirst((ATermList) t_45);
          r_27 = (ATerm) ATgetNext((ATermList) t_45);
        }
      else
        _fail(t);
      {
        ATerm u_45 = ATgetArgument(t, 1);
        if(((ATgetType(u_45) == AT_LIST) && !(ATisEmpty(u_45))))
          {
            q_27 = ATgetFirst((ATermList) u_45);
            s_27 = (ATerm) ATgetNext((ATermList) u_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_27, q_27), (ATerm) ATmakeAppl(sym__2, r_27, s_27));
  return(t);
}
ATerm q_23 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  if(match_cons(t, sym__2))
    {
      t_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_27), t_27);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,o_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_45 = ATgetFirst((ATermList) t);
      if(match_cons(v_45, sym__2))
        {
          f_27 = ATgetArgument(v_45, 0);
          g_27 = ATgetArgument(v_45, 1);
        }
      else
        _fail(t);
      h_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_27);
  if(match_cons(t, sym__2))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_27);
  if(match_cons(t, sym__2))
    {
      if((k_27 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_27, l_27);
  t = genzip_4_0(o_23, p_23, q_23, _id, t);
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_27, h_27);
  {
    ATerm w_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_45 = ATgetArgument(t, 0);
            ATerm z_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_27;
        {
          ATerm r_23 (ATerm t)
          {
            t = h_27;
            return(t);
          }
          t = at_end_1_0(r_23, t);
        }
        ;
        LocalPopChoice(x_45);
      }
    else
      {
        t = w_45;
        {
          ATerm i_10 = NULL,o_3 = NULL,r_3 = NULL;
          r_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_27, h_27);
          o_3 = t;
          t = SSL_explode_term(o_3);
          if(match_cons(t, sym__2))
            {
              ATerm a_46 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_46) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              i_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_10;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm n_135 (ATerm), ATerm o_135 (ATerm), ATerm t)
{
  ATerm z_27 (ATerm t)
  {
    ATerm b_46 = t;
    int c_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_135(t);
        ;
        LocalPopChoice(c_46);
      }
    else
      {
        t = b_46;
        t = o_135(t);
        t = z_27(t);
      }
    return(t);
  }
  t = z_27(t);
  return(t);
}
ATerm for_3_0 (ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t)
{
  t = q_135(t);
  t = while_not_2_0(r_135, s_135, t);
  return(t);
}
ATerm s_23 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_28);
  return(t);
}
ATerm t_23 (ATerm t)
{
  t = _2_0(_id, c_24, t);
  return(t);
}
ATerm a_24 (ATerm t)
{
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, e_24, t);
      ;
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
      {
        ATerm q_28 = NULL,r_28 = NULL,u_28 = NULL,v_28 = NULL;
        if(match_cons(t, sym__2))
          {
            q_28 = ATgetArgument(t, 0);
            r_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_28;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_28 = ATgetFirst((ATermList) t);
            v_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_28), u_28), v_28);
      }
    }
  return(t);
}
ATerm c_24 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm e_24 (ATerm t)
{
  ATerm f_46 = t;
  int g_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,m_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_28 = ATgetFirst((ATermList) t);
          m_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_28;
      if(match_cons(t, sym__2))
        {
          j_28 = ATgetArgument(t, 0);
          k_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_28;
      if((j_28 != t))
        {
          _fail(t);
        }
      t = m_28;
      ;
      LocalPopChoice(g_46);
    }
  else
    {
      t = f_46;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm f_24 (ATerm t)
{
  ATerm z_28 = NULL;
  if(match_cons(t, sym__2))
    {
      z_28 = ATgetArgument(t, 0);
      if((z_28 != ATgetArgument(t, 1)))
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
  ATerm h_46 = t;
  int i_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_23, t_23, a_24, t);
      ;
      LocalPopChoice(i_46);
    }
  else
    {
      t = h_46;
      t = diff_1_0(f_24, t);
    }
  return(t);
}
ATerm i_24 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_24 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_24 (ATerm t)
{
  t = union_1_0(l_24, t);
  return(t);
}
ATerm l_24 (ATerm t)
{
  ATerm v_10 = NULL;
  if(match_cons(t, sym__2))
    {
      v_10 = ATgetArgument(t, 0);
      if((v_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm s_24 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_24 (ATerm t)
{
  t = union_1_0(x_24, t);
  return(t);
}
ATerm x_24 (ATerm t)
{
  ATerm d_11 = NULL;
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      if((d_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm h_133 (ATerm), ATerm i_133 (ATerm), ATerm j_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_29 (ATerm t)
  {
    ATerm j_46 = t;
    int k_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_133(t);
        ;
        LocalPopChoice(k_46);
      }
    else
      {
        t = j_46;
        {
          ATerm l_46 = t;
          int m_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_29 = NULL,c_29 = NULL,o_10 = NULL,q_10 = NULL;
              a_29 = t;
              t = i_133(t);
              c_29 = t;
              t = a_29;
              {
                ATerm h_24 (ATerm t)
                {
                  ATerm k_10 = NULL;
                  t = f_29(t);
                  k_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_10, c_29);
                  t = diff_0_0(t);
                  return(t);
                }
                t = j_133(h_24, f_29, i_24, t);
                o_10 = t;
                t = SSL_explode_term(o_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_46 = ATgetArgument(t, 0);
                    q_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_10;
                t = foldr_3_0(j_24, k_24, _id, t);
              }
              ;
              LocalPopChoice(m_46);
            }
          else
            {
              t = l_46;
              {
                ATerm x_10 = NULL,y_10 = NULL;
                x_10 = t;
                t = SSL_explode_term(x_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_46 = ATgetArgument(t, 0);
                    y_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_10;
                t = foldr_3_0(s_24, u_24, f_29, t);
              }
            }
        }
      }
    return(t);
  }
  t = f_29(t);
  return(t);
}
ATerm y_24 (ATerm t)
{
  ATerm x_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_29);
  return(t);
}
ATerm z_24 (ATerm t)
{
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_46);
    }
  else
    {
      t = p_46;
      {
        ATerm z_29 = NULL,b_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_29 = ATgetArgument(t, 0);
            t = z_29;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm r_46 = t;
            int s_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm t_46 = ATgetArgument(t, 0);
                    ATerm u_46 = ATgetArgument(t, 1);
                    b_30 = ATgetArgument(t, 2);
                    {
                      ATerm v_46 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(s_46);
                t = b_30;
                t = map_1_0(e_25, t);
              }
            else
              {
                t = r_46;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm w_46 = ATgetArgument(t, 0);
                    ATerm x_46 = ATgetArgument(t, 1);
                    b_30 = ATgetArgument(t, 2);
                    {
                      ATerm y_46 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = b_30;
                t = map_1_0(f_25, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_25 (ATerm t)
{
  ATerm l_30 = NULL;
  ATerm z_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_30 = ATgetArgument(t, 0);
          {
            ATerm b_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_47);
      t = l_30;
    }
  else
    {
      t = z_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_30;
    }
  return(t);
}
ATerm f_25 (ATerm t)
{
  ATerm s_30 = NULL;
  ATerm c_47 = t;
  int d_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_30 = ATgetArgument(t, 0);
          {
            ATerm e_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_47);
      t = s_30;
    }
  else
    {
      t = c_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_30;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm o_29 = NULL,u_29 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_29 = ATgetArgument(t, 0);
      t = u_29;
      if(match_cons(t, sym_Rule_3))
        {
          o_29 = ATgetArgument(t, 0);
          {
            ATerm f_47 = ATgetArgument(t, 1);
          }
          {
            ATerm g_47 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_29;
      t = free_vars_3_0(y_24, z_24, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_29 = ATgetArgument(t, 0);
          {
            ATerm k_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_29;
    }
  return(t);
}
ATerm Var_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,s_3 = NULL,t_3 = NULL;
  z_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_30);
  w_30 = t;
  t = x_30;
  t = f_103(t);
  y_30 = t;
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_30);
  s_3 = t;
  t = SSLsetAnnotations(s_3, w_30);
  return(t);
}
ATerm q_25 (ATerm t)
{
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_47);
    }
  else
    {
      t = l_47;
      {
        ATerm m_31 = NULL;
        ATerm n_47 = t;
        int o_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm p_47 = ATgetArgument(t, 0);
                ATerm r_47 = ATgetArgument(t, 1);
                m_31 = ATgetArgument(t, 2);
                {
                  ATerm s_47 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_47);
            t = m_31;
            t = map_1_0(r_25, t);
          }
        else
          {
            t = n_47;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm t_47 = ATgetArgument(t, 0);
                ATerm w_47 = ATgetArgument(t, 1);
                m_31 = ATgetArgument(t, 2);
                {
                  ATerm z_47 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = m_31;
            t = map_1_0(s_25, t);
          }
      }
    }
  return(t);
}
ATerm r_25 (ATerm t)
{
  ATerm r_31 = NULL;
  ATerm a_48 = t;
  int b_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_31 = ATgetArgument(t, 0);
          {
            ATerm h_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_48);
      t = r_31;
    }
  else
    {
      t = a_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_31;
    }
  return(t);
}
ATerm s_25 (ATerm t)
{
  ATerm x_31 = NULL;
  ATerm m_48 = t;
  int n_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_31 = ATgetArgument(t, 0);
          {
            ATerm o_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_48);
      t = x_31;
    }
  else
    {
      t = m_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_31;
    }
  return(t);
}
ATerm t_25 (ATerm t)
{
  ATerm p_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(q_48);
    }
  else
    {
      t = p_48;
      {
        ATerm d_32 = NULL,e_32 = NULL;
        ATerm r_48 = t;
        int s_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm z_48 = ATgetArgument(t, 0);
                e_32 = ATgetArgument(t, 1);
                {
                  ATerm c_49 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_48);
            t = e_32;
            t = map_1_0(u_25, t);
          }
        else
          {
            t = r_48;
            {
              ATerm d_49 = t;
              int e_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      d_32 = ATgetArgument(t, 0);
                      {
                        ATerm f_49 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_49);
                  t = (ATerm) ATinsert(ATempty, d_32);
                }
              else
                {
                  t = d_49;
                  {
                    ATerm g_49 = t;
                    int h_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm i_49 = ATgetArgument(t, 0);
                            e_32 = ATgetArgument(t, 1);
                            {
                              ATerm j_49 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm k_49 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(h_49);
                        t = e_32;
                        t = map_1_0(w_25, t);
                      }
                    else
                      {
                        t = g_49;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm l_49 = ATgetArgument(t, 0);
                            e_32 = ATgetArgument(t, 1);
                            {
                              ATerm m_49 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm n_49 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = e_32;
                        t = map_1_0(y_25, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm u_25 (ATerm t)
{
  ATerm k_32 = NULL;
  ATerm o_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_32 = ATgetArgument(t, 0);
          {
            ATerm u_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_49);
      t = k_32;
    }
  else
    {
      t = o_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_32;
    }
  return(t);
}
ATerm w_25 (ATerm t)
{
  ATerm t_32 = NULL;
  ATerm v_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_32 = ATgetArgument(t, 0);
          {
            ATerm x_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_49);
      t = t_32;
    }
  else
    {
      t = v_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_32;
    }
  return(t);
}
ATerm y_25 (ATerm t)
{
  ATerm d_33 = NULL;
  ATerm y_49 = t;
  int z_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_33 = ATgetArgument(t, 0);
          {
            ATerm a_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_49);
      t = d_33;
    }
  else
    {
      t = y_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_33;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, q_25, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, t_25, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm z_25 (ATerm t)
{
  t = term_b_50;
  return(t);
}
ATerm b_26 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_50 = t;
    int d_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_33, w_33);
        ;
        LocalPopChoice(d_50);
      }
    else
      {
        t = c_50;
        t = SSL_addr(v_33, w_33);
      }
  }
  return(t);
}
ATerm c_26 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm d_26 (ATerm t)
{
  t = term_b_50;
  return(t);
}
ATerm e_26 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  if(match_cons(t, sym__2))
    {
      b_34 = ATgetArgument(t, 0);
      c_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_50 = t;
    int f_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(b_34, c_34);
        ;
        LocalPopChoice(f_50);
      }
    else
      {
        t = e_50;
        t = SSL_addr(b_34, c_34);
      }
  }
  return(t);
}
ATerm f_26 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm g_26 (ATerm t)
{
  t = term_v_35;
  return(t);
}
ATerm InlineCall0_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,t_33 = NULL,u_33 = NULL,g_11 = NULL,v_3 = NULL,w_3 = NULL;
  j_33 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm g_50 = ATgetArgument(t, 0);
      if(match_cons(g_50, sym_SVar_1))
        {
          k_33 = ATgetArgument(g_50, 0);
        }
      else
        _fail(t);
      {
        ATerm h_50 = ATgetArgument(t, 1);
        if(((ATgetType(h_50) != AT_LIST) || !(ATisEmpty(h_50))))
          _fail(t);
      }
      {
        ATerm i_50 = ATgetArgument(t, 2);
        if(((ATgetType(i_50) != AT_LIST) || !(ATisEmpty(i_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_j_50;
  w_3 = t;
  t = term_j_50;
  v_3 = t;
  t = SSL_table_get(v_3, j_33);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_11 = ATgetFirst((ATermList) t);
      {
        ATerm k_50 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_11;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm l_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_50) != ATmakeSymbol("g_0", 0, ATtrue)))
        _fail(t);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_33;
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((k_33 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_33 = ATgetArgument(t, 1);
      n_33 = ATgetArgument(t, 2);
      o_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = m_33;
  t = foldr_3_0(z_25, b_26, c_26, t);
  p_33 = t;
  t = n_33;
  t = foldr_3_0(d_26, e_26, f_26, t);
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_33, q_33);
  {
    ATerm m_50 = t;
    int r_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(p_33, q_33);
        ;
        LocalPopChoice(r_50);
      }
    else
      {
        t = m_50;
        t = SSL_addr(p_33, q_33);
      }
    t_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_33, term_b_50);
    {
      ATerm u_50 = t;
      int v_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_3 = NULL,y_3 = NULL;
          y_3 = t;
          t = term_b_50;
          x_3 = t;
          t = SSL_gti(t_33, x_3);
          ;
          LocalPopChoice(v_50);
        }
      else
        {
          t = u_50;
          {
            ATerm z_3 = NULL,a_4 = NULL;
            a_4 = t;
            t = term_b_50;
            z_3 = t;
            t = SSL_gtr(t_33, z_3);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, t_33, term_b_50);
      t = new_0_0(t);
      u_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_33), (ATerm)ATempty, (ATerm) ATempty), term_a_37);
      t = assert_1_0(g_26, t);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, u_33, m_33, n_33, o_33)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_33), (ATerm)ATempty, (ATerm) ATempty));
    }
  }
  return(t);
}
ATerm h_26 (ATerm t)
{
  t = term_b_50;
  return(t);
}
ATerm j_26 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  if(match_cons(t, sym__2))
    {
      u_11 = ATgetArgument(t, 0);
      v_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_50 = t;
    int x_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(u_11, v_11);
        ;
        LocalPopChoice(x_50);
      }
    else
      {
        t = w_50;
        t = SSL_addr(u_11, v_11);
      }
  }
  return(t);
}
ATerm occurrences_1_0 (ATerm y_126 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,q_11 = NULL;
  i_11 = t;
  {
    ATerm y_50 = t;
    int z_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_126(t);
        t = term_c_33;
        ;
        LocalPopChoice(z_50);
      }
    else
      {
        t = y_50;
        t = term_b_50;
      }
    j_11 = t;
    t = SSL_explode_term(i_11);
    if(match_cons(t, sym__2))
      {
        ATerm a_51 = ATgetArgument(t, 0);
        q_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = q_11;
    {
      ATerm k_26 (ATerm t)
      {
        t = occurrences_1_0(y_126, t);
        return(t);
      }
      t = foldr_3_0(h_26, j_26, k_26, t);
      k_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_11, k_11);
      {
        ATerm b_51 = t;
        int c_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(j_11, k_11);
            ;
            LocalPopChoice(c_51);
          }
        else
          {
            t = b_51;
            t = SSL_addr(j_11, k_11);
          }
      }
    }
  }
  return(t);
}
ATerm local_inlinable_1_0 (ATerm h_116 (ATerm), ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      k_34 = ATgetArgument(t, 0);
      {
        ATerm d_51 = ATgetArgument(t, 1);
      }
      {
        ATerm e_51 = ATgetArgument(t, 2);
      }
      l_34 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  m_34 = t;
  t = l_34;
  {
    ATerm f_51 = t;
    if((PushChoice() == 0))
      {
        ATerm l_26 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm g_51 = ATgetArgument(t, 0);
              if(match_cons(g_51, sym_SVar_1))
                {
                  if((k_34 != ATgetArgument(g_51, 0)))
                    {
                      _fail(ATgetArgument(g_51, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm h_51 = ATgetArgument(t, 1);
              }
              {
                ATerm l_51 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(l_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_51;
      }
    t = h_116(t);
    {
      ATerm m_26 (ATerm t)
      {
        if(match_cons(t, sym_CallT_3))
          {
            ATerm n_51 = ATgetArgument(t, 0);
            if(match_cons(n_51, sym_SVar_1))
              {
                if((k_34 != ATgetArgument(n_51, 0)))
                  {
                    _fail(ATgetArgument(n_51, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm o_51 = ATgetArgument(t, 1);
            }
            {
              ATerm p_51 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = occurrences_1_0(m_26, t);
      n_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_34, term_c_33);
      t = leq_0_0(t);
      t = m_34;
    }
  }
  return(t);
}
ATerm n_26 (ATerm t)
{
  t = term_v_35;
  return(t);
}
ATerm UndefineSDef_0_0 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      o_34 = ATgetArgument(t, 0);
      {
        ATerm q_51 = ATgetArgument(t, 1);
      }
      {
        ATerm r_51 = ATgetArgument(t, 2);
      }
      {
        ATerm s_51 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  p_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_34), (ATerm)ATempty, (ATerm) ATempty), term_a_37);
  t = assert_1_0(n_26, t);
  t = p_34;
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,v_34 = NULL;
  if(match_cons(t, sym__2))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
  {
    ATerm t_51 = t;
    int u_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_51 = ATgetArgument(t, 0);
            ATerm y_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_34, t_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_52 = ATgetFirst((ATermList) t);
            x_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_11;
        ;
        LocalPopChoice(u_51);
      }
    else
      {
        t = t_51;
        t = (ATerm) ATempty;
      }
    v_34 = t;
    t = SSL_table_put(s_34, t_34, v_34);
    t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm l_130 (ATerm), ATerm t)
{
  ATerm f_35 = NULL,h_35 = NULL,j_35 = NULL,l_35 = NULL,e_4 = NULL,f_4 = NULL;
  f_35 = t;
  t = l_130(t);
  h_35 = t;
  {
    ATerm b_52 = t;
    int c_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_4 = NULL,c_4 = NULL;
        c_4 = t;
        t = term_d_52;
        b_4 = t;
        t = SSL_table_get(h_35, b_4);
        ;
        LocalPopChoice(c_52);
      }
    else
      {
        t = b_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_35 = ATgetFirst((ATermList) t);
        j_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    f_4 = t;
    t = term_d_52;
    e_4 = t;
    t = SSL_table_put(h_35, e_4, j_35);
    t = l_35;
    {
      ATerm o_26 (ATerm t)
      {
        ATerm m_35 = NULL;
        m_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_35, m_35);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(o_26, t);
      t = f_35;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm t)
{
  ATerm e_52 = t;
  int f_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_121(t);
      t = k_121(t);
      ;
      LocalPopChoice(f_52);
    }
  else
    {
      t = e_52;
      t = k_121(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_130 (ATerm), ATerm t)
{
  ATerm r_35 = NULL,t_35 = NULL,u_35 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  r_35 = t;
  t = k_130(t);
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_35, term_d_52);
  {
    ATerm h_52 = t;
    int i_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_4 = NULL,h_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_52 = ATgetArgument(t, 0);
            ATerm k_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        h_4 = t;
        t = term_d_52;
        g_4 = t;
        t = SSL_table_get(t_35, g_4);
        ;
        LocalPopChoice(i_52);
      }
    else
      {
        t = h_52;
        t = (ATerm) ATempty;
      }
    u_35 = t;
    k_4 = t;
    t = term_d_52;
    i_4 = t;
    t = k_4;
    l_4 = t;
    t = (ATerm) ATinsert(CheckATermList(u_35), (ATerm) ATempty);
    j_4 = t;
    t = SSL_table_put(t_35, i_4, j_4);
    t = r_35;
  }
  return(t);
}
ATerm scope_2_0 (ATerm m_130 (ATerm), ATerm n_130 (ATerm), ATerm t)
{
  t = begin_scope_1_0(m_130, t);
  {
    ATerm q_26 (ATerm t)
    {
      t = end_scope_1_0(m_130, t);
      return(t);
    }
    t = restore_always_2_0(n_130, q_26, t);
  }
  return(t);
}
ATerm r_26 (ATerm t)
{
  t = term_v_35;
  return(t);
}
ATerm v_26 (ATerm t)
{
  t = term_j_50;
  return(t);
}
ATerm c_27 (ATerm t)
{
  ATerm l_52 = t;
  int m_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = InlineCall0_0_0(t);
      ;
      LocalPopChoice(m_52);
    }
  else
    {
      t = l_52;
      t = InlineCall_0_0(t);
    }
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm u_26 (ATerm t)
  {
    ATerm x_26 (ATerm t)
    {
      ATerm n_52 = t;
      int o_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = UndefineSDef_0_0(t);
          ;
          LocalPopChoice(o_52);
        }
      else
        {
          t = n_52;
          {
            ATerm p_52 = t;
            int q_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_36 = NULL,f_36 = NULL;
                if(match_cons(t, sym_Let_2))
                  {
                    e_36 = ATgetArgument(t, 0);
                    f_36 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_36;
                {
                  ATerm y_26 (ATerm t)
                  {
                    ATerm z_26 (ATerm t)
                    {
                      t = f_36;
                      return(t);
                    }
                    t = local_inlinable_1_0(z_26, t);
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(y_26, t);
                  t = (ATerm) ATmakeAppl(sym_Let_2, e_36, f_36);
                }
                ;
                LocalPopChoice(q_52);
              }
            else
              {
                t = p_52;
                t = repeat_1_0(c_27, t);
              }
          }
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(v_26, x_26, t);
    return(t);
  }
  t = scope_2_0(r_26, u_26, t);
  return(t);
}
ATerm assert_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,o_36 = NULL,o_4 = NULL,t_4 = NULL,x_4 = NULL,y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_130(t);
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_36, j_36, k_36);
  t = table_push_0_0(t);
  {
    ATerm r_52 = t;
    int v_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_4 = NULL,n_4 = NULL;
        n_4 = t;
        t = term_d_52;
        m_4 = t;
        t = SSL_table_get(l_36, m_4);
        ;
        LocalPopChoice(v_52);
      }
    else
      {
        t = r_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_36 = ATgetFirst((ATermList) t);
        o_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    x_4 = t;
    t = term_d_52;
    o_4 = t;
    t = x_4;
    y_4 = t;
    t = (ATerm) ATinsert(CheckATermList(o_36), (ATerm) ATinsert(CheckATermList(m_36), j_36));
    t_4 = t;
    t = SSL_table_put(l_36, o_4, t_4);
    t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
  }
  return(t);
}
ATerm e_27 (ATerm t)
{
  t = term_v_35;
  return(t);
}
ATerm i_27 (ATerm t)
{
  t = term_j_50;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm p_36 = NULL,r_36 = NULL,t_36 = NULL;
  p_36 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_36 = ATgetArgument(t, 0);
      {
        ATerm x_52 = ATgetArgument(t, 1);
      }
      {
        ATerm y_52 = ATgetArgument(t, 2);
      }
      {
        ATerm z_52 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_36), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_a_53, p_36));
  t = assert_1_0(e_27, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_36), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_b_53, p_36));
  t = assert_1_0(i_27, t);
  t = t_36;
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm c_53 = t;
  if((PushChoice() == 0))
    {
      ATerm v_36 = NULL,x_36 = NULL;
      if(match_cons(t, sym__2))
        {
          v_36 = ATgetArgument(t, 0);
          x_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm d_53 = t;
        int e_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(v_36, x_36);
            ;
            LocalPopChoice(e_53);
          }
        else
          {
            t = d_53;
            t = SSL_gtr(v_36, x_36);
          }
        t = (ATerm) ATmakeAppl(sym__2, v_36, x_36);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_53;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm t)
{
  ATerm f_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_129(t);
      ;
      LocalPopChoice(g_53);
    }
  else
    {
      t = f_53;
      {
        ATerm d_37 = NULL,f_37 = NULL,i_37 = NULL,j_37 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_37 = ATgetFirst((ATermList) t);
            f_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_37;
        t = h_129(t);
        i_37 = t;
        t = f_37;
        t = foldr_3_0(f_129, g_129, h_129, t);
        j_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_37, j_37);
        t = g_129(t);
      }
    }
  return(t);
}
ATerm j_27 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm n_27 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_53 = t;
    int i_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(d_12, e_12);
        ;
        LocalPopChoice(i_53);
      }
    else
      {
        t = h_53;
        t = SSL_addr(d_12, e_12);
      }
  }
  return(t);
}
ATerm v_27 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm w_27 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_53 = t;
    int k_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(k_12, l_12);
        ;
        LocalPopChoice(k_53);
      }
    else
      {
        t = j_53;
        t = SSL_addr(k_12, l_12);
      }
  }
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm l_53 = t;
  int m_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_11 = NULL,z_11 = NULL;
      y_11 = t;
      t = SSL_explode_term(y_11);
      if(match_cons(t, sym__2))
        {
          ATerm n_53 = ATgetArgument(t, 0);
          z_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_11;
      t = foldr_3_0(j_27, n_27, term_size_0_0, t);
      ;
      LocalPopChoice(m_53);
    }
  else
    {
      t = l_53;
      {
        ATerm t_37 (ATerm t)
        {
          ATerm f_12 = NULL,g_12 = NULL;
          f_12 = t;
          t = SSL_explode_term(f_12);
          if(match_cons(t, sym__2))
            {
              ATerm o_53 = ATgetArgument(t, 0);
              g_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_12;
          t = foldr_3_0(v_27, w_27, t_37, t);
          return(t);
        }
        t = t_37(t);
      }
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,a_5 = NULL,b_5 = NULL;
  b_38 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      v_37 = ATgetArgument(t, 0);
      w_37 = ATgetArgument(t, 1);
      x_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_38);
  u_37 = t;
  t = v_37;
  t = j_107(t);
  y_37 = t;
  t = w_37;
  t = k_107(t);
  z_37 = t;
  t = x_37;
  t = l_107(t);
  a_38 = t;
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_37, z_37, a_38);
  a_5 = t;
  t = SSLsetAnnotations(a_5, u_37);
  return(t);
}
ATerm LChoice_2_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,d_5 = NULL,e_5 = NULL;
  j_38 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      f_38 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_38);
  e_38 = t;
  t = f_38;
  t = f_107(t);
  h_38 = t;
  t = g_38;
  t = g_107(t);
  i_38 = t;
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, h_38, i_38);
  d_5 = t;
  t = SSLsetAnnotations(d_5, e_38);
  return(t);
}
ATerm Choice_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,f_5 = NULL,h_5 = NULL;
  v_38 = t;
  if(match_cons(t, sym_Choice_2))
    {
      p_38 = ATgetArgument(t, 0);
      q_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_38);
  o_38 = t;
  t = p_38;
  t = d_106(t);
  t_38 = t;
  t = q_38;
  t = e_106(t);
  u_38 = t;
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, t_38, u_38);
  f_5 = t;
  t = SSLsetAnnotations(f_5, o_38);
  return(t);
}
ATerm Match_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,i_5 = NULL,k_5 = NULL;
  d_39 = t;
  if(match_cons(t, sym_Match_1))
    {
      b_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_39);
  a_39 = t;
  t = b_39;
  t = w_106(t);
  c_39 = t;
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, c_39);
  i_5 = t;
  t = SSLsetAnnotations(i_5, a_39);
  return(t);
}
ATerm Seq_2_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,l_5 = NULL,n_5 = NULL;
  m_39 = t;
  if(match_cons(t, sym_Seq_2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_39);
  h_39 = t;
  t = i_39;
  t = d_107(t);
  k_39 = t;
  t = j_39;
  t = e_107(t);
  l_39 = t;
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, k_39, l_39);
  l_5 = t;
  t = SSLsetAnnotations(l_5, h_39);
  return(t);
}
ATerm Scope_2_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,s_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,o_5 = NULL,p_5 = NULL;
  w_39 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_39 = ATgetArgument(t, 0);
      s_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_39);
  p_39 = t;
  t = q_39;
  t = z_106(t);
  u_39 = t;
  t = s_39;
  t = a_107(t);
  v_39 = t;
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_39, v_39);
  o_5 = t;
  t = SSLsetAnnotations(o_5, p_39);
  return(t);
}
ATerm Build_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,q_5 = NULL,r_5 = NULL;
  c_40 = t;
  if(match_cons(t, sym_Build_1))
    {
      a_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_40);
  z_39 = t;
  t = a_40;
  t = x_106(t);
  b_40 = t;
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, b_40);
  q_5 = t;
  t = SSLsetAnnotations(q_5, z_39);
  return(t);
}
ATerm SVar_1_0 (ATerm o_106 (ATerm), ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,s_5 = NULL,t_5 = NULL;
  i_40 = t;
  if(match_cons(t, sym_SVar_1))
    {
      g_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_40);
  f_40 = t;
  t = g_40;
  t = o_106(t);
  h_40 = t;
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, h_40);
  s_5 = t;
  t = SSLsetAnnotations(s_5, f_40);
  return(t);
}
ATerm PrimT_3_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,y_5 = NULL,z_5 = NULL;
  s_40 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_40 = ATgetArgument(t, 0);
      n_40 = ATgetArgument(t, 1);
      o_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_40);
  l_40 = t;
  t = m_40;
  t = v_107(t);
  p_40 = t;
  t = n_40;
  t = w_107(t);
  q_40 = t;
  t = o_40;
  t = x_107(t);
  r_40 = t;
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, p_40, q_40, r_40);
  y_5 = t;
  t = SSLsetAnnotations(y_5, l_40);
  return(t);
}
ATerm CallT_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,a_41 = NULL,b_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,a_6 = NULL,b_6 = NULL;
  f_41 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
      a_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_41);
  v_40 = t;
  t = w_40;
  t = t_106(t);
  b_41 = t;
  t = x_40;
  t = u_106(t);
  d_41 = t;
  t = a_41;
  t = v_106(t);
  e_41 = t;
  b_6 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, b_41, d_41, e_41);
  a_6 = t;
  t = SSLsetAnnotations(a_6, v_40);
  return(t);
}
ATerm x_27 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm y_27 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm a_28 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm b_28 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm c_28 (ATerm t)
{
  t = Seq_2_0(d_28, _id, t);
  return(t);
}
ATerm d_28 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm e_28 (ATerm t)
{
  t = Scope_2_0(_id, f_28, t);
  return(t);
}
ATerm f_28 (ATerm t)
{
  t = Seq_2_0(h_28, _id, t);
  return(t);
}
ATerm h_28 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL;
  ATerm w_41 (ATerm t)
  {
    ATerm p_53 = t;
    int q_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        ;
        LocalPopChoice(q_53);
      }
    else
      {
        t = p_53;
        {
          ATerm r_53 = t;
          int s_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              ;
              LocalPopChoice(s_53);
            }
          else
            {
              t = r_53;
              {
                ATerm t_53 = t;
                int u_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = CallT_3_0(x_27, _id, _id, t);
                    ;
                    LocalPopChoice(u_53);
                  }
                else
                  {
                    t = t_53;
                    {
                      ATerm v_53 = t;
                      int w_53 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = PrimT_3_0(y_27, _id, _id, t);
                          ;
                          LocalPopChoice(w_53);
                        }
                      else
                        {
                          t = v_53;
                          {
                            ATerm x_53 = t;
                            int y_53 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Build_1_0(_id, t);
                                ;
                                LocalPopChoice(y_53);
                              }
                            else
                              {
                                t = x_53;
                                {
                                  ATerm z_53 = t;
                                  int a_54 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Match_1_0(_id, t);
                                      ;
                                      LocalPopChoice(a_54);
                                    }
                                  else
                                    {
                                      t = z_53;
                                      {
                                        ATerm b_54 = t;
                                        int c_54 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = Seq_2_0(a_28, _id, t);
                                            ;
                                            LocalPopChoice(c_54);
                                          }
                                        else
                                          {
                                            t = b_54;
                                            {
                                              ATerm d_54 = t;
                                              int e_54 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = Scope_2_0(_id, b_28, t);
                                                  ;
                                                  LocalPopChoice(e_54);
                                                }
                                              else
                                                {
                                                  t = d_54;
                                                  {
                                                    ATerm f_54 = t;
                                                    int j_54 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Scope_2_0(_id, c_28, t);
                                                        ;
                                                        LocalPopChoice(j_54);
                                                      }
                                                    else
                                                      {
                                                        t = f_54;
                                                        {
                                                          ATerm k_54 = t;
                                                          int l_54 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Seq_2_0(e_28, _id, t);
                                                              ;
                                                              LocalPopChoice(l_54);
                                                            }
                                                          else
                                                            {
                                                              t = k_54;
                                                              {
                                                                ATerm m_54 = t;
                                                                int n_54 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2_0(w_41, w_41, t);
                                                                    ;
                                                                    LocalPopChoice(n_54);
                                                                  }
                                                                else
                                                                  {
                                                                    t = m_54;
                                                                    {
                                                                      ATerm o_54 = t;
                                                                      int p_54 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = LChoice_2_0(w_41, w_41, t);
                                                                          ;
                                                                          LocalPopChoice(p_54);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = o_54;
                                                                          t = GuardedLChoice_3_0(w_41, w_41, w_41, t);
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
  t = w_41(t);
  u_41 = t;
  t = term_size_0_0(t);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_41, term_q_54);
  t = leq_0_0(t);
  t = u_41;
  return(t);
}
ATerm SDefT_4_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,m_42 = NULL,r_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,c_6 = NULL,d_6 = NULL;
  g_43 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_42 = ATgetArgument(t, 0);
      r_42 = ATgetArgument(t, 1);
      a_43 = ATgetArgument(t, 2);
      b_43 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_43);
  f_42 = t;
  t = m_42;
  t = h_109(t);
  c_43 = t;
  t = r_42;
  t = i_109(t);
  d_43 = t;
  t = a_43;
  t = j_109(t);
  e_43 = t;
  t = b_43;
  t = k_109(t);
  f_43 = t;
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, c_43, d_43, e_43, f_43);
  c_6 = t;
  t = SSLsetAnnotations(c_6, f_42);
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm j_43 = NULL;
  ATerm l_28 (ATerm t)
  {
    ATerm r_54 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_54;
      }
    if(((j_43 != NULL) && (j_43 != t)))
      _fail(t);
    else
      j_43 = t;
    return(t);
  }
  ATerm n_28 (ATerm t)
  {
    ATerm k_43 = NULL;
    k_43 = t;
    {
      ATerm s_54 = t;
      if((PushChoice() == 0))
        {
          ATerm o_28 (ATerm t)
          {
            if(match_cons(t, sym_CallT_3))
              {
                ATerm t_54 = ATgetArgument(t, 0);
                if(match_cons(t_54, sym_SVar_1))
                  {
                    if(((j_43 != NULL) && (j_43 != ATgetArgument(t_54, 0))))
                      _fail(ATgetArgument(t_54, 0));
                    else
                      j_43 = ATgetArgument(t_54, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm u_54 = ATgetArgument(t, 1);
                }
                {
                  ATerm v_54 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(o_28, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_54;
        }
      t = k_43;
      t = body_to_inline_0_0(t);
    }
    return(t);
  }
  t = SDefT_4_0(l_28, _id, _id, n_28, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm p_43 = NULL,r_43 = NULL,u_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL;
  if(match_cons(t, sym__2))
    {
      u_43 = ATgetArgument(t, 0);
      x_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_43;
  if(match_cons(t, sym_Build_1))
    {
      ATerm w_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_43;
  if(match_cons(t, sym_Where_1))
    {
      y_43 = ATgetArgument(t, 0);
      t = y_43;
      if(match_cons(t, sym_Prim_2))
        {
          p_43 = ATgetArgument(t, 0);
          r_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, p_43, r_43);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          y_43 = ATgetArgument(t, 0);
          z_43 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, y_43, z_43);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              y_43 = ATgetArgument(t, 0);
              z_43 = ATgetArgument(t, 1);
              a_44 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, y_43, z_43, a_44);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm t)
{
  ATerm i_44 (ATerm t)
  {
    ATerm x_54 = t;
    int y_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_122(t);
        ;
        LocalPopChoice(y_54);
      }
    else
      {
        t = x_54;
        t = p_122(t);
        t = _2_0(r_122, i_44, t);
        t = q_122(t);
      }
    return(t);
  }
  t = i_44(t);
  return(t);
}
ATerm p_28 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_54 = ATgetArgument(t, 0);
      if(((ATgetType(z_54) != AT_LIST) || !(ATisEmpty(z_54))))
        _fail(t);
      {
        ATerm a_55 = ATgetArgument(t, 1);
        if(((ATgetType(a_55) != AT_LIST) || !(ATisEmpty(a_55))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_28 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_55 = ATgetArgument(t, 0);
      if(((ATgetType(b_55) == AT_LIST) && !(ATisEmpty(b_55))))
        {
          n_44 = ATgetFirst((ATermList) b_55);
          p_44 = (ATerm) ATgetNext((ATermList) b_55);
        }
      else
        _fail(t);
      {
        ATerm c_55 = ATgetArgument(t, 1);
        if(((ATgetType(c_55) == AT_LIST) && !(ATisEmpty(c_55))))
          {
            o_44 = ATgetFirst((ATermList) c_55);
            q_44 = (ATerm) ATgetNext((ATermList) c_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_44, o_44), (ATerm) ATmakeAppl(sym__2, p_44, q_44));
  return(t);
}
ATerm t_28 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL;
  if(match_cons(t, sym__2))
    {
      r_44 = ATgetArgument(t, 0);
      s_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_44), r_44);
  return(t);
}
ATerm w_28 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL;
  if(match_cons(t, sym__2))
    {
      t_44 = ATgetArgument(t, 0);
      u_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_44), (ATerm) ATmakeAppl(sym_Match_1, u_44));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_55 = ATgetArgument(t, 0);
      if(match_cons(d_55, sym_Build_1))
        {
          ATerm f_55 = ATgetArgument(d_55, 0);
          if(match_cons(f_55, sym_Op_2))
            {
              k_44 = ATgetArgument(f_55, 0);
              j_44 = ATgetArgument(f_55, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm e_55 = ATgetArgument(t, 1);
        if(match_cons(e_55, sym_Match_1))
          {
            ATerm h_55 = ATgetArgument(e_55, 0);
            if(match_cons(h_55, sym_Op_2))
              {
                if((k_44 != ATgetArgument(h_55, 0)))
                  {
                    _fail(ATgetArgument(h_55, 0));
                  }
                l_44 = ATgetArgument(h_55, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, j_44, l_44);
  t = genzip_4_0(p_28, s_28, t_28, w_28, t);
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_44), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, k_44, j_44)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_55 = ATgetArgument(t, 0);
      if(match_cons(j_55, sym_Build_1))
        {
          ATerm l_55 = ATgetArgument(j_55, 0);
          if(match_cons(l_55, sym_Op_2))
            {
              v_44 = ATgetArgument(l_55, 0);
              {
                ATerm m_55 = ATgetArgument(l_55, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm k_55 = ATgetArgument(t, 1);
        if(match_cons(k_55, sym_Match_1))
          {
            ATerm n_55 = ATgetArgument(k_55, 0);
            if(match_cons(n_55, sym_Op_2))
              {
                w_44 = ATgetArgument(n_55, 0);
                {
                  ATerm o_55 = ATgetArgument(n_55, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
  {
    ATerm p_55 = t;
    if((PushChoice() == 0))
      {
        ATerm x_44 = NULL;
        if(match_cons(t, sym__2))
          {
            x_44 = ATgetArgument(t, 0);
            if((x_44 != ATgetArgument(t, 1)))
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
        t = p_55;
      }
    t = term_q_55;
  }
  return(t);
}
ATerm i_48 (ATerm h_47, ATerm i_47, ATerm j_47, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, h_47, i_47);
  {
    ATerm r_55 = t;
    int s_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(s_55);
      }
    else
      {
        t = r_55;
        {
          ATerm v_55 = t;
          int w_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(w_55);
            }
          else
            {
              t = v_55;
              {
                ATerm x_55 = t;
                int a_56 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_47 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm f_56 = ATgetArgument(t, 0);
                        ATerm h_56 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = h_47;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm i_56 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = i_47;
                    if(match_cons(t, sym_Build_1))
                      {
                        q_47 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, q_47);
                    ;
                    LocalPopChoice(a_56);
                  }
                else
                  {
                    t = x_55;
                    {
                      ATerm p_56 = t;
                      int q_56 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(q_56);
                        }
                      else
                        {
                          t = p_56;
                          {
                            ATerm u_47 = NULL,v_47 = NULL,x_47 = NULL,y_47 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm v_56 = ATgetArgument(t, 0);
                                ATerm w_56 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = h_47;
                            if(match_cons(t, sym_Match_1))
                              {
                                u_47 = ATgetArgument(t, 0);
                                t = i_47;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    x_47 = ATgetArgument(t, 0);
                                    t = x_47;
                                    if((u_47 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, u_47);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        x_47 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_47;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        v_47 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = x_47;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        y_47 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = y_47;
                                    if((v_47 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_47));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    u_47 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = i_47;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    x_47 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = x_47;
                                if((u_47 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, u_47);
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
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL;
  e_48 = t;
  if(match_cons(t, sym_Seq_2))
    {
      f_48 = ATgetArgument(t, 0);
      g_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_48;
  if(match_cons(t, sym_Seq_2))
    {
      c_48 = ATgetArgument(t, 0);
      d_48 = ATgetArgument(t, 1);
      {
        ATerm x_56 = t;
        int y_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_12 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, f_48, c_48);
            {
              ATerm z_56 = t;
              int a_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(a_57);
                }
              else
                {
                  t = z_56;
                  {
                    ATerm b_57 = t;
                    int c_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(c_57);
                      }
                    else
                      {
                        t = b_57;
                        {
                          ATerm d_57 = t;
                          int e_57 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_12 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm f_57 = ATgetArgument(t, 0);
                                  ATerm g_57 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = f_48;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm h_57 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = c_48;
                              if(match_cons(t, sym_Build_1))
                                {
                                  y_12 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, y_12);
                              ;
                              LocalPopChoice(e_57);
                            }
                          else
                            {
                              t = d_57;
                              {
                                ATerm l_57 = t;
                                int m_57 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(m_57);
                                  }
                                else
                                  {
                                    t = l_57;
                                    {
                                      ATerm c_13 = NULL,d_13 = NULL,f_13 = NULL,g_13 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm n_57 = ATgetArgument(t, 0);
                                          ATerm o_57 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = f_48;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          c_13 = ATgetArgument(t, 0);
                                          t = c_48;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              f_13 = ATgetArgument(t, 0);
                                              t = f_13;
                                              if((c_13 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, c_13);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  f_13 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = c_13;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  d_13 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = f_13;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  g_13 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = g_13;
                                              if((d_13 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_13));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              c_13 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = c_48;
                                          if(match_cons(t, sym_Match_1))
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
                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_13);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              t_12 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, t_12, d_48);
            }
            ;
            LocalPopChoice(y_56);
          }
        else
          {
            t = x_56;
            t = i_48(f_48, g_48, e_48, t);
          }
      }
    }
  else
    {
      t = i_48(f_48, g_48, e_48, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm j_48 (ATerm t)
  {
    ATerm p_57 = t;
    int q_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_119(t);
        ;
        LocalPopChoice(q_57);
      }
    else
      {
        t = p_57;
        t = SRTS_one(j_48, t);
      }
    return(t);
  }
  t = j_48(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm u_57 = ATgetArgument(t, 0);
      if(((ATgetType(u_57) == AT_LIST) && !(ATisEmpty(u_57))))
        {
          ATerm l_58 = ATgetFirst((ATermList) u_57);
          if(match_cons(l_58, sym_SDefT_4))
            {
              l_48 = ATgetArgument(l_58, 0);
              {
                ATerm p_58 = ATgetArgument(l_58, 1);
                if(((ATgetType(p_58) != AT_LIST) || !(ATisEmpty(p_58))))
                  _fail(t);
              }
              {
                ATerm q_58 = ATgetArgument(l_58, 2);
                if(((ATgetType(q_58) != AT_LIST) || !(ATisEmpty(q_58))))
                  _fail(t);
              }
              k_48 = ATgetArgument(l_58, 3);
            }
          else
            _fail(t);
          {
            ATerm m_58 = (ATerm) ATgetNext((ATermList) u_57);
            if(((ATgetType(m_58) != AT_LIST) || !(ATisEmpty(m_58))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm v_57 = ATgetArgument(t, 1);
        if(match_cons(v_57, sym_CallT_3))
          {
            ATerm r_58 = ATgetArgument(v_57, 0);
            if(match_cons(r_58, sym_SVar_1))
              {
                if((l_48 != ATgetArgument(r_58, 0)))
                  {
                    _fail(ATgetArgument(r_58, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm s_58 = ATgetArgument(v_57, 1);
              if(((ATgetType(s_58) != AT_LIST) || !(ATisEmpty(s_58))))
                _fail(t);
            }
            {
              ATerm t_58 = ATgetArgument(v_57, 2);
              if(((ATgetType(t_58) != AT_LIST) || !(ATisEmpty(t_58))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_48;
  {
    ATerm u_58 = t;
    if((PushChoice() == 0))
      {
        ATerm x_28 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm v_58 = ATgetArgument(t, 0);
              if(match_cons(v_58, sym_SVar_1))
                {
                  if((l_48 != ATgetArgument(v_58, 0)))
                    {
                      _fail(ATgetArgument(v_58, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm x_58 = ATgetArgument(t, 1);
                if(((ATgetType(x_58) != AT_LIST) || !(ATisEmpty(x_58))))
                  _fail(t);
              }
              {
                ATerm y_58 = ATgetArgument(t, 2);
                if(((ATgetType(y_58) != AT_LIST) || !(ATisEmpty(y_58))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(x_28, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_58;
      }
    t = k_48;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,a_49 = NULL,b_49 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      a_49 = ATgetArgument(t, 0);
      t = a_49;
      if(match_cons(t, sym_Seq_2))
        {
          y_48 = ATgetArgument(t, 0);
          u_48 = ATgetArgument(t, 1);
          t = y_48;
          if(match_cons(t, sym_Where_1))
            {
              t_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_48;
          if(match_cons(t, sym_Seq_2))
            {
              v_48 = ATgetArgument(t, 0);
              x_48 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_48;
          if(match_cons(t, sym_Build_1))
            {
              w_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, t_48, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_48), x_48)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              y_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, y_48);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          a_49 = ATgetArgument(t, 0);
          t = a_49;
          if(match_cons(t, sym_Test_1))
            {
              y_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, y_48);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              a_49 = ATgetArgument(t, 0);
              t = a_49;
              if(match_cons(t, sym_Not_1))
                {
                  y_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, y_48);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_49 = ATgetArgument(t, 0);
                  b_49 = ATgetArgument(t, 1);
                  t = b_49;
                  if((a_49 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      a_49 = ATgetArgument(t, 0);
                      b_49 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_49;
                  if((a_49 != t))
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
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      p_49 = ATgetArgument(t, 0);
      s_49 = ATgetArgument(t, 1);
      t = p_49;
      if(match_cons(t, sym_LChoice_2))
        {
          q_49 = ATgetArgument(t, 0);
          r_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, q_49, (ATerm) ATmakeAppl(sym_LChoice_2, r_49, s_49));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          p_49 = ATgetArgument(t, 0);
          s_49 = ATgetArgument(t, 1);
          t = p_49;
          if(match_cons(t, sym_Seq_2))
            {
              q_49 = ATgetArgument(t, 0);
              r_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, q_49, (ATerm) ATmakeAppl(sym_Seq_2, r_49, s_49));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              p_49 = ATgetArgument(t, 0);
              s_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_49;
          if(match_cons(t, sym_Choice_2))
            {
              q_49 = ATgetArgument(t, 0);
              r_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, q_49, (ATerm) ATmakeAppl(sym_Choice_2, r_49, s_49));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_59 = t;
  int g_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(l_0, _id, t);
      {
        ATerm y_28 (ATerm t)
        {
          ATerm h_59 = t;
          int i_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(l_0, t);
              ;
              LocalPopChoice(i_59);
            }
          else
            {
              t = h_59;
            }
          return(t);
        }
        t = Cons_2_0(_id, y_28, t);
      }
      ;
      LocalPopChoice(g_59);
    }
  else
    {
      t = b_59;
      {
        ATerm b_29 (ATerm t)
        {
          t = map1_1_0(l_0, t);
          return(t);
        }
        t = Cons_2_0(_id, b_29, t);
      }
    }
  return(t);
}
ATerm d_29 (ATerm t)
{
  ATerm k_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_59), term_p_59));
  return(t);
}
ATerm e_29 (ATerm t)
{
  ATerm q_59 = t;
  int r_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_51 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, m_51, term_p_59);
      ;
      LocalPopChoice(r_59);
    }
  else
    {
      t = q_59;
    }
  return(t);
}
ATerm g_29 (ATerm t)
{
  ATerm z_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_51, term_p_59);
  return(t);
}
ATerm h_29 (ATerm t)
{
  ATerm s_59 = t;
  int t_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_52 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, g_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_59), term_p_59));
      ;
      LocalPopChoice(t_59);
    }
  else
    {
      t = s_59;
    }
  return(t);
}
ATerm i_29 (ATerm t)
{
  ATerm u_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_59), term_p_59));
  return(t);
}
ATerm j_29 (ATerm t)
{
  ATerm v_59 = t;
  int w_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_52 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, w_52, term_p_59);
      ;
      LocalPopChoice(w_59);
    }
  else
    {
      t = v_59;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,s_50 = NULL,t_50 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      s_50 = ATgetArgument(t, 0);
      t_50 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, s_50, t_50);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          s_50 = ATgetArgument(t, 0);
          t = s_50;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_50 = ATgetFirst((ATermList) t);
              o_50 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, n_50, (ATerm) ATmakeAppl(sym_LChoices_1, o_50));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_q_55;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              s_50 = ATgetArgument(t, 0);
              t = s_50;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_50 = ATgetFirst((ATermList) t);
                  o_50 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, n_50, (ATerm) ATmakeAppl(sym_Choices_1, o_50));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_q_55;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  s_50 = ATgetArgument(t, 0);
                  t = s_50;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_50 = ATgetFirst((ATermList) t);
                      o_50 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_50, (ATerm) ATmakeAppl(sym_Seqs_1, o_50));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_x_59;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_50 = ATgetArgument(t, 0);
                      t_50 = ATgetArgument(t, 1);
                      q_50 = ATgetArgument(t, 2);
                      p_50 = ATgetArgument(t, 3);
                      {
                        ATerm i_51 = NULL,j_51 = NULL;
                        t = t_50;
                        t = map1_1_0(d_29, t);
                        i_51 = t;
                        t = q_50;
                        t = map1_1_0(e_29, t);
                        j_51 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, s_50, i_51, j_51, p_50);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          s_50 = ATgetArgument(t, 0);
                          t_50 = ATgetArgument(t, 1);
                          q_50 = ATgetArgument(t, 2);
                          p_50 = ATgetArgument(t, 3);
                          {
                            ATerm y_59 = t;
                            int z_59 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_51 = NULL,w_51 = NULL;
                                t = q_50;
                                t = map1_1_0(g_29, t);
                                v_51 = t;
                                t = t_50;
                                t = map_1_0(h_29, t);
                                w_51 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_50, w_51, v_51, p_50);
                                ;
                                LocalPopChoice(z_59);
                              }
                            else
                              {
                                t = y_59;
                                {
                                  ATerm s_52 = NULL,t_52 = NULL;
                                  t = t_50;
                                  t = map1_1_0(i_29, t);
                                  s_52 = t;
                                  t = q_50;
                                  t = map_1_0(j_29, t);
                                  t_52 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_50, s_52, t_52, p_50);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              s_50 = ATgetArgument(t, 0);
                              t_50 = ATgetArgument(t, 1);
                              q_50 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, t_50, (ATerm) ATmakeAppl(sym_Op_2, term_a_60, (ATerm) ATinsert(ATinsert(ATempty, q_50), s_50)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  s_50 = ATgetArgument(t, 0);
                                  t_50 = ATgetArgument(t, 1);
                                  q_50 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_50)), s_50), (ATerm) ATmakeAppl(sym_Build_1, t_50)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      s_50 = ATgetArgument(t, 0);
                                      t_50 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_50, (ATerm) ATmakeAppl(sym_Match_1, t_50));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          s_50 = ATgetArgument(t, 0);
                                          t_50 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_50), t_50);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              s_50 = ATgetArgument(t, 0);
                                              t_50 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_50), s_50);
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
ATerm k_29 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      g_54 = ATgetArgument(t, 0);
      t = g_54;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_q_55;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          g_54 = ATgetArgument(t, 0);
          t = g_54;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_x_59;
        }
      else
        {
          ATerm b_60 = t;
          int c_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  g_54 = ATgetArgument(t, 0);
                  {
                    ATerm d_60 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(c_60);
              t = g_54;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_q_55;
            }
          else
            {
              t = b_60;
              {
                ATerm l_60 = t;
                int m_60 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm n_60 = ATgetArgument(t, 0);
                        h_54 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(m_60);
                    t = h_54;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_q_55;
                  }
                else
                  {
                    t = l_60;
                    {
                      ATerm o_60 = t;
                      int p_60 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm q_60 = ATgetArgument(t, 0);
                              h_54 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(p_60);
                          t = h_54;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_q_55;
                        }
                      else
                        {
                          t = o_60;
                          if(match_cons(t, sym_Some_1))
                            {
                              g_54 = ATgetArgument(t, 0);
                              t = g_54;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_q_55;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  g_54 = ATgetArgument(t, 0);
                                  t = g_54;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_q_55;
                                }
                              else
                                {
                                  ATerm r_60 = t;
                                  int t_60 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm u_60 = ATgetArgument(t, 0);
                                          h_54 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(t_60);
                                      t = h_54;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_q_55;
                                    }
                                  else
                                    {
                                      t = r_60;
                                      {
                                        ATerm x_60 = t;
                                        int y_60 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm z_60 = ATgetArgument(t, 0);
                                                h_54 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(y_60);
                                            t = h_54;
                                            t = fetch_1_0(k_29, t);
                                            t = term_q_55;
                                          }
                                        else
                                          {
                                            t = x_60;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                g_54 = ATgetArgument(t, 0);
                                                h_54 = ATgetArgument(t, 1);
                                                t = h_54;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = g_54;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm a_61 = t;
                                                        int b_61 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = h_54;
                                                            ;
                                                            LocalPopChoice(b_61);
                                                          }
                                                        else
                                                          {
                                                            t = a_61;
                                                            t = g_54;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = g_54;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = g_54;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = h_54;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    g_54 = ATgetArgument(t, 0);
                                                    h_54 = ATgetArgument(t, 1);
                                                    t = h_54;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = g_54;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm c_61 = t;
                                                            int d_61 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = h_54;
                                                                ;
                                                                LocalPopChoice(d_61);
                                                              }
                                                            else
                                                              {
                                                                t = c_61;
                                                                t = g_54;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = g_54;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = g_54;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = h_54;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        g_54 = ATgetArgument(t, 0);
                                                        t = g_54;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_q_55;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            g_54 = ATgetArgument(t, 0);
                                                            h_54 = ATgetArgument(t, 1);
                                                            i_54 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = i_54;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_54, h_54);
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
  ATerm g_55 = NULL,i_55 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      i_55 = ATgetArgument(t, 0);
      t = i_55;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_x_59;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          i_55 = ATgetArgument(t, 0);
          t = i_55;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_q_55;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              i_55 = ATgetArgument(t, 0);
              g_55 = ATgetArgument(t, 1);
              t = g_55;
              if(match_cons(t, sym_Id_0))
                {
                  t = i_55;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm f_61 = t;
                      int j_61 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_55;
                          ;
                          LocalPopChoice(j_61);
                        }
                      else
                        {
                          t = f_61;
                          t = i_55;
                        }
                    }
                  else
                    {
                      t = i_55;
                    }
                }
              else
                {
                  t = i_55;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = g_55;
                }
            }
          else
            {
              ATerm m_61 = t;
              int n_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      i_55 = ATgetArgument(t, 0);
                      {
                        ATerm o_61 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_61);
                  t = i_55;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_x_59;
                }
              else
                {
                  t = m_61;
                  {
                    ATerm p_61 = t;
                    int q_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm r_61 = ATgetArgument(t, 0);
                            g_55 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_61);
                        t = g_55;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_x_59;
                      }
                    else
                      {
                        t = p_61;
                        {
                          ATerm s_61 = t;
                          int t_61 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm u_61 = ATgetArgument(t, 0);
                                  g_55 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(t_61);
                              t = g_55;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_x_59;
                            }
                          else
                            {
                              t = s_61;
                              if(match_cons(t, sym_All_1))
                                {
                                  i_55 = ATgetArgument(t, 0);
                                  t = i_55;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_x_59;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      i_55 = ATgetArgument(t, 0);
                                      t = i_55;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_x_59;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          i_55 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = i_55;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_x_59;
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
  ATerm w_61 = t;
  int x_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(x_61);
    }
  else
    {
      t = w_61;
      {
        ATerm y_61 = t;
        int c_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(c_62);
          }
        else
          {
            t = y_61;
            {
              ATerm d_62 = t;
              int e_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(e_62);
                }
              else
                {
                  t = d_62;
                  {
                    ATerm h_62 = t;
                    int i_62 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(i_62);
                      }
                    else
                      {
                        t = h_62;
                        {
                          ATerm j_62 = t;
                          int k_62 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(k_62);
                            }
                          else
                            {
                              t = j_62;
                              {
                                ATerm l_62 = t;
                                int m_62 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_55 = NULL,u_55 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        t_55 = ATgetArgument(t, 0);
                                        u_55 = ATgetArgument(t, 1);
                                        t = t_55;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = u_55;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            t_55 = ATgetArgument(t, 0);
                                            u_55 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = t_55;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = u_55;
                                      }
                                    ;
                                    LocalPopChoice(m_62);
                                  }
                                else
                                  {
                                    t = l_62;
                                    {
                                      ATerm o_62 = t;
                                      int q_62 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(q_62);
                                        }
                                      else
                                        {
                                          t = o_62;
                                          {
                                            ATerm u_62 = t;
                                            int y_62 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(y_62);
                                              }
                                            else
                                              {
                                                t = u_62;
                                                {
                                                  ATerm y_55 = NULL,z_55 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      y_55 = ATgetArgument(t, 0);
                                                      z_55 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = y_55;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = z_55;
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
ATerm repeat_1_0 (ATerm y_134 (ATerm), ATerm t)
{
  ATerm b_56 (ATerm t)
  {
    ATerm z_62 = t;
    int d_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_134(t);
        t = b_56(t);
        ;
        LocalPopChoice(d_63);
      }
    else
      {
        t = z_62;
      }
    return(t);
  }
  t = b_56(t);
  return(t);
}
ATerm downup_1_0 (ATerm e_118 (ATerm), ATerm t)
{
  t = e_118(t);
  {
    ATerm l_29 (ATerm t)
    {
      t = downup_1_0(e_118, t);
      return(t);
    }
    t = SRTS_all(l_29, t);
    t = e_118(t);
  }
  return(t);
}
ATerm m_29 (ATerm t)
{
  t = downup_1_0(n_29, t);
  {
    ATerm e_63 = t;
    int g_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        ;
        LocalPopChoice(g_63);
      }
    else
      {
        t = e_63;
      }
  }
  return(t);
}
ATerm n_29 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(m_29, t);
  t = map_1_0(inline_sdef_0_0, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,g_56 = NULL,e_6 = NULL,i_6 = NULL;
  g_56 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_56);
  c_56 = t;
  t = d_56;
  t = h_102(t);
  e_56 = t;
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_56);
  e_6 = t;
  t = SSLsetAnnotations(e_6, c_56);
  return(t);
}
ATerm Cons_2_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,j_6 = NULL,k_6 = NULL;
  o_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_56 = ATgetFirst((ATermList) t);
      l_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_56);
  j_56 = t;
  t = k_56;
  t = b_102(t);
  m_56 = t;
  t = l_56;
  t = c_102(t);
  n_56 = t;
  k_6 = t;
  t = (ATerm) ATinsert(CheckATermList(n_56), m_56);
  j_6 = t;
  t = SSLsetAnnotations(j_6, j_56);
  return(t);
}
ATerm Specification_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,l_6 = NULL,m_6 = NULL;
  u_56 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_56);
  r_56 = t;
  t = s_56;
  t = m_102(t);
  t_56 = t;
  m_6 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_56);
  l_6 = t;
  t = SSLsetAnnotations(l_6, r_56);
  return(t);
}
ATerm _2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,o_6 = NULL,p_6 = NULL;
  t_57 = t;
  if(match_cons(t, sym__2))
    {
      j_57 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_57);
  i_57 = t;
  t = j_57;
  t = m_97(t);
  r_57 = t;
  t = k_57;
  t = n_97(t);
  s_57 = t;
  p_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_57, s_57);
  o_6 = t;
  t = SSLsetAnnotations(o_6, i_57);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_145 (ATerm), ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  if(match_cons(t, sym__2))
    {
      w_57 = ATgetArgument(t, 0);
      x_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_57, term_i_63);
  t = open_stream_0_0(t);
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_57, x_57);
  t = p_145(t);
  t = fclose_0_0(t);
  t = x_57;
  return(t);
}
ATerm s_29 (ATerm t)
{
  t = fetch_1_0(v_29, t);
  return(t);
}
ATerm t_29 (ATerm t)
{
  t = WriteToFile_1_0(w_29, t);
  return(t);
}
ATerm v_29 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm w_29 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_63 = ATgetArgument(t, 0);
      if(match_cons(j_63, sym_Stream_1))
        {
          b_58 = ATgetArgument(j_63, 0);
        }
      else
        _fail(t);
      c_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(b_58, c_58);
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_58);
  return(t);
}
ATerm y_29 (ATerm t)
{
  t = WriteToFile_1_0(a_30, t);
  return(t);
}
ATerm a_30 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,q_6 = NULL,r_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_63 = ATgetArgument(t, 0);
      if(match_cons(l_63, sym_Stream_1))
        {
          e_58 = ATgetArgument(l_63, 0);
        }
      else
        _fail(t);
      f_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(e_58, f_58);
  g_58 = t;
  r_6 = t;
  t = term_m_63;
  q_6 = t;
  t = SSL_fputc(q_6, g_58);
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_58);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  z_57 = t;
  {
    ATerm p_29 (ATerm t)
    {
      ATerm r_63 = t;
      int s_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_29 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((a_58 != NULL) && (a_58 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_58 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_29, t);
          ;
          LocalPopChoice(s_63);
        }
      else
        {
          t = r_63;
          t = term_t_63;
          if(((a_58 != NULL) && (a_58 != t)))
            _fail(t);
          else
            a_58 = t;
        }
      return(t);
    }
    t = _2_0(p_29, _id, t);
    t = z_57;
    {
      ATerm r_29 (ATerm t)
      {
        ATerm o_13 = NULL;
        o_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_58), o_13);
        return(t);
      }
      t = _2_0(_id, r_29, t);
      {
        ATerm u_63 = t;
        int v_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(s_29, t_29, t);
            ;
            LocalPopChoice(v_63);
          }
        else
          {
            t = u_63;
            t = _2_0(_id, y_29, t);
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
ATerm apply_strategy_1_0 (ATerm e_140 (ATerm), ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,n_58 = NULL,o_58 = NULL;
  i_58 = t;
  t = dtime_0_0(t);
  t = i_58;
  t = e_140(t);
  j_58 = t;
  t = dtime_0_0(t);
  k_58 = t;
  t = j_58;
  if(match_cons(t, sym__2))
    {
      n_58 = ATgetArgument(t, 0);
      o_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_58), (ATerm) ATmakeAppl(sym_Runtime_1, k_58)), o_58);
  return(t);
}
ATerm c_59 (ATerm w_58, ATerm t)
{
  t = SSL_fclose(w_58);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL;
  a_59 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_58 = ATgetArgument(t, 0);
      {
        ATerm w_63 = t;
        int x_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_58);
            ;
            LocalPopChoice(x_63);
          }
        else
          {
            t = w_63;
            t = c_59(a_59, t);
          }
      }
    }
  else
    {
      t = c_59(a_59, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_59 = NULL;
  t = SSL_stdin_stream();
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_59);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_59 = NULL;
  t = SSL_stdout_stream();
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_59);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_59 = NULL;
  t = SSL_stderr_stream();
  f_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_59);
  return(t);
}
ATerm c_30 (ATerm t)
{
  ATerm n_59 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      n_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_59;
  return(t);
}
ATerm d_30 (ATerm t)
{
  ATerm g_60 = NULL;
  g_60 = t;
  t = SSL_is_string(g_60);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_64 = ATgetArgument(t, 0);
      ATerm e_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_64 = t;
    int h_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_14 = NULL,e_14 = NULL;
        d_14 = t;
        t = SSL_explode_term(d_14);
        if(match_cons(t, sym__2))
          {
            ATerm l_64 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_64) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_64 = ATgetArgument(t, 1);
              if(((ATgetType(m_64) == AT_LIST) && !(ATisEmpty(m_64))))
                {
                  e_14 = ATgetFirst((ATermList) m_64);
                  {
                    ATerm p_64 = (ATerm) ATgetNext((ATermList) m_64);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_14;
        if(match_cons(t, sym_stderr_0))
          {
            t = e_14;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = e_14;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_14;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_64);
      }
    else
      {
        t = f_64;
        {
          ATerm q_64 = t;
          int s_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
              t = _2_0(c_30, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_59 = ATgetArgument(t, 0);
                  l_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_59, l_59);
              m_59 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_59);
              ;
              LocalPopChoice(s_64);
            }
          else
            {
              t = q_64;
              {
                ATerm u_59 = NULL,e_60 = NULL,f_60 = NULL;
                t = _2_0(d_30, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_59 = ATgetArgument(t, 0);
                    e_60 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(u_59, e_60);
                f_60 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_60);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
  ATerm t_64 = t;
  int v_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_60 = NULL;
      k_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_60, term_w_64);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_64);
    }
  else
    {
      t = t_64;
      {
        ATerm f_14 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
        f_14 = t;
        t = term_x_64;
        u_6 = t;
        t = term_z_32;
        s_6 = t;
        t = u_6;
        v_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, f_14), term_x_64);
        t_6 = t;
        t = SSL_printnl(s_6, t_6);
        t = f_14;
        _fail(t);
      }
    }
  h_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(j_60);
  i_60 = t;
  t = h_60;
  t = fclose_0_0(t);
  t = i_60;
  return(t);
}
ATerm fetch_1_0 (ATerm o_124 (ATerm), ATerm t)
{
  ATerm s_60 (ATerm t)
  {
    ATerm y_64 = t;
    int z_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_124, _id, t);
        ;
        LocalPopChoice(z_64);
      }
    else
      {
        t = y_64;
        t = Cons_2_0(_id, s_60, t);
      }
    return(t);
  }
  t = s_60(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_65 = t;
  int b_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_65);
    }
  else
    {
      t = a_65;
      {
        ATerm v_60 = NULL,w_60 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_60 = ATgetFirst((ATermList) t);
            w_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_60;
        {
          ATerm e_30 (ATerm t)
          {
            t = w_60;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_30, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_124 (ATerm), ATerm t)
{
  ATerm e_61 (ATerm t)
  {
    ATerm c_65 = t;
    int d_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_61, t);
        ;
        LocalPopChoice(d_65);
      }
    else
      {
        t = c_65;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_124(t);
      }
    return(t);
  }
  t = e_61(t);
  return(t);
}
ATerm f_30 (ATerm t)
{
  ATerm h_61 = NULL;
  h_61 = t;
  t = SSL_explode_string(h_61);
  return(t);
}
ATerm g_30 (ATerm t)
{
  ATerm i_61 = NULL;
  i_61 = t;
  t = SSL_explode_string(i_61);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm g_61 = NULL;
  t = _2_0(f_30, g_30, t);
  {
    ATerm e_65 = t;
    int i_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_61 = NULL,l_61 = NULL;
        if(match_cons(t, sym__2))
          {
            k_61 = ATgetArgument(t, 0);
            l_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_61;
        {
          ATerm h_30 (ATerm t)
          {
            t = l_61;
            return(t);
          }
          t = at_end_1_0(h_30, t);
        }
        ;
        LocalPopChoice(i_65);
      }
    else
      {
        t = e_65;
        {
          ATerm k_14 = NULL,l_14 = NULL;
          k_14 = t;
          t = SSL_explode_term(k_14);
          if(match_cons(t, sym__2))
            {
              ATerm j_65 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_65) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              l_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_14;
          t = concat_0_0(t);
        }
      }
    g_61 = t;
    t = SSL_implode_string(g_61);
  }
  return(t);
}
ATerm i_30 (ATerm t)
{
  ATerm l_65 = t;
  int n_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_65);
    }
  else
    {
      t = l_65;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_65 = t;
  int u_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_61 = NULL;
      v_61 = t;
      t = SSL_is_string(v_61);
      ;
      LocalPopChoice(u_65);
    }
  else
    {
      t = r_65;
      {
        ATerm v_65 = t;
        int w_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_30, t);
            ;
            LocalPopChoice(w_65);
          }
        else
          {
            t = v_65;
            {
              ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL;
              z_61 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_62 = ATgetArgument(t, 0);
                  t = a_62;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_62 = ATgetArgument(t, 0);
                      t = a_62;
                      {
                        ATerm d_66 = t;
                        int e_66 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_6 = NULL,x_6 = NULL;
                            x_6 = t;
                            t = term_k_66;
                            w_6 = t;
                            t = SSL_table_get(w_6, a_62);
                            {
                              ATerm l_66 = t;
                              int m_66 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_15 = NULL,y_6 = NULL,z_6 = NULL;
                                  t = eval_config_0_0(t);
                                  h_15 = t;
                                  z_6 = t;
                                  t = term_k_66;
                                  y_6 = t;
                                  t = SSL_table_put(y_6, a_62, h_15);
                                  t = h_15;
                                  ;
                                  LocalPopChoice(m_66);
                                }
                              else
                                {
                                  t = l_66;
                                }
                            }
                            ;
                            LocalPopChoice(e_66);
                          }
                        else
                          {
                            t = d_66;
                            {
                              ATerm a_7 = NULL,b_7 = NULL,d_7 = NULL,e_7 = NULL;
                              t = term_p_66;
                              d_7 = t;
                              t = term_z_32;
                              a_7 = t;
                              t = d_7;
                              e_7 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, a_62), term_p_66);
                              b_7 = t;
                              t = SSL_printnl(a_7, b_7);
                              t = a_62;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm f_62 = NULL,g_62 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_62 = ATgetArgument(t, 0);
                          b_62 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_62;
                      t = eval_config_0_0(t);
                      f_62 = t;
                      t = b_62;
                      t = eval_config_0_0(t);
                      g_62 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_62, g_62);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_138 (ATerm), ATerm t)
{
  ATerm q_66 = t;
  int r_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_62 = NULL,p_62 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,j_7 = NULL;
      n_62 = t;
      t = term_s_66;
      h_7 = t;
      t = term_k_66;
      f_7 = t;
      t = h_7;
      j_7 = t;
      t = term_s_66;
      g_7 = t;
      t = SSL_table_get(f_7, g_7);
      {
        ATerm v_66 = t;
        int y_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_15 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
            t = eval_config_0_0(t);
            p_15 = t;
            m_7 = t;
            t = term_k_66;
            k_7 = t;
            t = m_7;
            n_7 = t;
            t = term_s_66;
            l_7 = t;
            t = SSL_table_put(k_7, l_7, p_15);
            t = p_15;
            ;
            LocalPopChoice(y_66);
          }
        else
          {
            t = v_66;
          }
        p_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_62, term_z_66);
        t = geq_0_0(t);
        t = n_62;
        t = s_138(t);
      }
      ;
      LocalPopChoice(r_66);
    }
  else
    {
      t = q_66;
    }
  return(t);
}
ATerm j_30 (ATerm t)
{
  ATerm r_62 = NULL;
  r_62 = t;
  if(match_string(t, "-k"))
    {
      t = r_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_62;
    }
  return(t);
}
ATerm k_30 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,o_7 = NULL,p_7 = NULL,r_7 = NULL,t_7 = NULL;
  s_62 = t;
  t = SSL_string_to_int(s_62);
  t_62 = t;
  r_7 = t;
  t = term_k_66;
  o_7 = t;
  t = r_7;
  t_7 = t;
  t = term_a_67;
  p_7 = t;
  t = SSL_table_put(o_7, p_7, t_62);
  t = s_62;
  return(t);
}
ATerm m_30 (ATerm t)
{
  t = term_b_67;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_30, k_30, m_30, t);
  return(t);
}
ATerm n_30 (ATerm t)
{
  ATerm v_62 = NULL;
  v_62 = t;
  if(match_string(t, "-S"))
    {
      t = v_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_62;
    }
  return(t);
}
ATerm o_30 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,z_7 = NULL,b_8 = NULL,c_8 = NULL,e_8 = NULL;
  b_8 = t;
  t = term_k_66;
  w_7 = t;
  t = b_8;
  c_8 = t;
  t = term_s_66;
  x_7 = t;
  t = c_8;
  e_8 = t;
  t = term_b_50;
  z_7 = t;
  t = SSL_table_put(w_7, x_7, z_7);
  t = term_c_67;
  return(t);
}
ATerm p_30 (ATerm t)
{
  t = term_d_67;
  return(t);
}
ATerm q_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_30 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,g_8 = NULL,h_8 = NULL,k_8 = NULL,m_8 = NULL;
  w_62 = t;
  t = SSL_string_to_int(w_62);
  x_62 = t;
  k_8 = t;
  t = term_k_66;
  g_8 = t;
  t = k_8;
  m_8 = t;
  t = term_s_66;
  h_8 = t;
  t = SSL_table_put(g_8, h_8, x_62);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_62);
  return(t);
}
ATerm t_30 (ATerm t)
{
  t = term_i_67;
  return(t);
}
ATerm u_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_30 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,s_8 = NULL,t_8 = NULL;
  q_8 = t;
  t = term_k_66;
  n_8 = t;
  t = q_8;
  s_8 = t;
  t = term_j_67;
  o_8 = t;
  t = s_8;
  t_8 = t;
  t = term_y_22;
  p_8 = t;
  t = SSL_table_put(n_8, o_8, p_8);
  t = term_k_67;
  return(t);
}
ATerm a_31 (ATerm t)
{
  t = term_l_67;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_67 = t;
  int o_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_30, o_30, p_30, t);
      ;
      LocalPopChoice(o_67);
    }
  else
    {
      t = n_67;
      {
        ATerm u_67 = t;
        int v_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_30, r_30, t_30, t);
            ;
            LocalPopChoice(v_67);
          }
        else
          {
            t = u_67;
            t = Option_3_0(u_30, v_30, a_31, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_63 = NULL;
      t = term_y_22;
      t = c_0(t);
      c_63 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_67, term_x_67, c_63);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm f_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_63 = ATgetFirst((ATermList) t);
          b_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_63;
      t = a_0(t);
      t = term_y_22;
      t = b_0(t);
      f_63 = t;
      t = (ATerm) ATinsert(CheckATermList(b_63), f_63);
    }
  return(t);
}
ATerm b_31 (ATerm t)
{
  ATerm h_63 = NULL;
  h_63 = t;
  if(match_string(t, "-o"))
    {
      t = h_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_63;
    }
  return(t);
}
ATerm c_31 (ATerm t)
{
  ATerm k_63 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,a_9 = NULL;
  k_63 = t;
  w_8 = t;
  t = term_k_66;
  u_8 = t;
  t = w_8;
  a_9 = t;
  t = term_y_67;
  v_8 = t;
  t = SSL_table_put(u_8, v_8, k_63);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_63);
  return(t);
}
ATerm d_31 (ATerm t)
{
  t = term_z_67;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_31, c_31, d_31, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,d_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__3))
    {
      n_63 = ATgetArgument(t, 0);
      o_63 = ATgetArgument(t, 1);
      p_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_63, o_63);
  {
    ATerm a_68 = t;
    int b_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_68 = ATgetArgument(t, 0);
            ATerm d_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_63, o_63);
        ;
        LocalPopChoice(b_68);
      }
    else
      {
        t = a_68;
        t = (ATerm) ATempty;
      }
    q_63 = t;
    g_9 = t;
    t = (ATerm) ATinsert(CheckATermList(q_63), p_63);
    d_9 = t;
    t = SSL_table_put(n_63, o_63, d_9);
    t = (ATerm) ATmakeAppl(sym__3, n_63, o_63, p_63);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_64 = NULL;
      t = term_y_22;
      t = j_0(t);
      c_64 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_67, term_x_67, c_64);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_63 = ATgetFirst((ATermList) t);
          z_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_63;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_64 = ATgetFirst((ATermList) t);
          b_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_63;
      t = h_0(t);
      t = a_64;
      t = i_0(t);
      g_64 = t;
      t = (ATerm) ATinsert(CheckATermList(b_64), g_64);
    }
  return(t);
}
ATerm e_31 (ATerm t)
{
  ATerm i_64 = NULL;
  i_64 = t;
  if(match_string(t, "-i"))
    {
      t = i_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_64;
    }
  return(t);
}
ATerm f_31 (ATerm t)
{
  ATerm j_64 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,l_9 = NULL;
  j_64 = t;
  j_9 = t;
  t = term_k_66;
  h_9 = t;
  t = j_9;
  l_9 = t;
  t = term_e_68;
  i_9 = t;
  t = SSL_table_put(h_9, i_9, j_64);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_64);
  return(t);
}
ATerm g_31 (ATerm t)
{
  t = term_f_68;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_31, f_31, g_31, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_64 = NULL,t_9 = NULL,n_9 = NULL,o_9 = NULL,q_9 = NULL,s_9 = NULL,x_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_22;
  t = whoami_0_0(t);
  k_64 = t;
  q_9 = t;
  t = term_z_32;
  n_9 = t;
  t = q_9;
  s_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_68), k_64);
  o_9 = t;
  t = SSL_printnl(n_9, o_9);
  x_9 = t;
  t = term_c_33;
  t_9 = t;
  t = SSL_exit(t_9);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_9 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  t = term_h_68;
  e_10 = t;
  t = term_k_66;
  z_9 = t;
  t = e_10;
  f_10 = t;
  t = term_h_68;
  d_10 = t;
  t = SSL_table_get(z_9, d_10);
  {
    ATerm i_68 = t;
    int j_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL,g_10 = NULL,h_10 = NULL,j_10 = NULL,l_10 = NULL;
        t = eval_config_0_0(t);
        t_15 = t;
        j_10 = t;
        t = term_k_66;
        g_10 = t;
        t = j_10;
        l_10 = t;
        t = term_h_68;
        h_10 = t;
        t = SSL_table_put(g_10, h_10, t_15);
        t = t_15;
        ;
        LocalPopChoice(j_68);
      }
    else
      {
        t = i_68;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t)
{
  ATerm k_68 = t;
  int l_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_129(t);
      ;
      LocalPopChoice(l_68);
    }
  else
    {
      t = k_68;
      {
        ATerm n_64 = NULL,o_64 = NULL,r_64 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_64 = ATgetFirst((ATermList) t);
            o_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_64;
        t = foldr_2_0(d_129, e_129, t);
        r_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_64, r_64);
        t = e_129(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_31 (ATerm t)
{
  t = term_b_50;
  return(t);
}
ATerm i_31 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_68 = t;
    int n_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_16, b_16);
        ;
        LocalPopChoice(n_68);
      }
    else
      {
        t = m_68;
        t = SSL_addr(a_16, b_16);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_64 = NULL,u_15 = NULL,v_15 = NULL;
  t = times_0_0(t);
  u_15 = t;
  t = SSL_explode_term(u_15);
  if(match_cons(t, sym__2))
    {
      ATerm o_68 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15;
  t = foldr_2_0(h_31, i_31, t);
  u_64 = t;
  t = SSL_TicksToSeconds(u_64);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  f_65 = t;
  if(match_cons(t, sym__2))
    {
      g_65 = ATgetArgument(t, 0);
      h_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_68 = t;
    int q_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_65;
        if((g_65 != t))
          {
            _fail(t);
          }
        t = f_65;
        ;
        LocalPopChoice(q_68);
      }
    else
      {
        t = p_68;
        t = f_65;
        {
          ATerm r_68 = t;
          int s_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_65, h_65);
              ;
              LocalPopChoice(s_68);
            }
          else
            {
              t = r_68;
              t = SSL_gtr(g_65, h_65);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_65, h_65);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_138 (ATerm), ATerm t)
{
  ATerm t_68 = t;
  int u_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_65 = NULL,m_65 = NULL,m_10 = NULL,n_10 = NULL,p_10 = NULL,r_10 = NULL;
      k_65 = t;
      t = term_s_66;
      p_10 = t;
      t = term_k_66;
      m_10 = t;
      t = p_10;
      r_10 = t;
      t = term_s_66;
      n_10 = t;
      t = SSL_table_get(m_10, n_10);
      {
        ATerm v_68 = t;
        int w_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_16 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,w_10 = NULL;
            t = eval_config_0_0(t);
            p_16 = t;
            u_10 = t;
            t = term_k_66;
            s_10 = t;
            t = u_10;
            w_10 = t;
            t = term_s_66;
            t_10 = t;
            t = SSL_table_put(s_10, t_10, p_16);
            t = p_16;
            ;
            LocalPopChoice(w_68);
          }
        else
          {
            t = v_68;
          }
        m_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_65, term_c_33);
        t = geq_0_0(t);
        t = k_65;
        t = r_138(t);
      }
      ;
      LocalPopChoice(u_68);
    }
  else
    {
      t = t_68;
    }
  return(t);
}
ATerm j_31 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  t = run_time_0_0(t);
  o_65 = t;
  t = term_y_22;
  t = whoami_0_0(t);
  p_65 = t;
  b_11 = t;
  t = term_z_32;
  z_10 = t;
  t = b_11;
  c_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_68), o_65), term_x_68), p_65);
  a_11 = t;
  t = SSL_printnl(z_10, a_11);
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_68), o_65), term_x_68), p_65));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_31, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  t = report_run_time_0_0(t);
  f_11 = t;
  t = term_b_50;
  e_11 = t;
  t = SSL_exit(e_11);
  return(t);
}
ATerm k_31 (ATerm t)
{
  ATerm z_68 = t;
  int a_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(a_69);
    }
  else
    {
      t = z_68;
      {
        ATerm b_69 = t;
        int c_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(c_69);
          }
        else
          {
            t = b_69;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_141 (ATerm), ATerm t)
{
  ATerm d_69 = t;
  int e_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
      t = term_f_69;
      m_11 = t;
      t = term_k_66;
      h_11 = t;
      t = m_11;
      n_11 = t;
      t = term_f_69;
      l_11 = t;
      t = SSL_table_get(h_11, l_11);
      {
        ATerm g_69 = t;
        int h_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_16 = NULL,o_11 = NULL,p_11 = NULL,r_11 = NULL,s_11 = NULL;
            t = eval_config_0_0(t);
            v_16 = t;
            r_11 = t;
            t = term_k_66;
            o_11 = t;
            t = r_11;
            s_11 = t;
            t = term_f_69;
            p_11 = t;
            t = SSL_table_put(o_11, p_11, v_16);
            t = v_16;
            ;
            LocalPopChoice(h_69);
          }
        else
          {
            t = g_69;
          }
      }
      ;
      LocalPopChoice(e_69);
    }
  else
    {
      t = d_69;
      t = fetch_1_0(k_31, t);
    }
  t = c_141(t);
  return(t);
}
ATerm map_1_0 (ATerm d_124 (ATerm), ATerm t)
{
  ATerm q_65 (ATerm t)
  {
    ATerm i_69 = t;
    int j_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_69);
      }
    else
      {
        t = i_69;
        t = Cons_2_0(d_124, q_65, t);
      }
    return(t);
  }
  t = q_65(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_65 = ATgetFirst((ATermList) t);
      t_65 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_65 = NULL,y_65 = NULL;
        t = t_65;
        t = f_0(t);
        x_65 = t;
        t = s_65;
        t = e_0(t);
        y_65 = t;
        t = t_65;
        {
          ATerm l_31 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_65), y_65);
            return(t);
          }
          t = reverse_acc_2_0(e_0, l_31, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_22;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm s_114 (ATerm), ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,t_11 = NULL,w_11 = NULL;
  c_66 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_66);
  z_65 = t;
  t = a_66;
  t = s_114(t);
  b_66 = t;
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_66);
  t_11 = t;
  t = SSLsetAnnotations(t_11, z_65);
  return(t);
}
ATerm n_31 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm o_31 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_31 (ATerm t)
{
  ATerm f_66 = NULL;
  f_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_66), term_k_69);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  ATerm l_69 = t;
  int m_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,h_12 = NULL;
      t = term_h_68;
      c_12 = t;
      t = term_k_66;
      a_12 = t;
      t = c_12;
      h_12 = t;
      t = term_h_68;
      b_12 = t;
      t = SSL_table_get(a_12, b_12);
      {
        ATerm n_69 = t;
        int o_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_17 = NULL,i_12 = NULL,j_12 = NULL,m_12 = NULL,n_12 = NULL;
            t = eval_config_0_0(t);
            a_17 = t;
            m_12 = t;
            t = term_k_66;
            i_12 = t;
            t = m_12;
            n_12 = t;
            t = term_h_68;
            j_12 = t;
            t = SSL_table_put(i_12, j_12, a_17);
            t = a_17;
            ;
            LocalPopChoice(o_69);
          }
        else
          {
            t = n_69;
          }
      }
      ;
      LocalPopChoice(m_69);
    }
  else
    {
      t = l_69;
      t = fetch_1_0(n_31, t);
    }
  t = term_p_69;
  t = echo_0_0(t);
  q_12 = t;
  t = term_w_67;
  o_12 = t;
  t = q_12;
  r_12 = t;
  t = term_x_67;
  p_12 = t;
  t = SSL_table_get(o_12, p_12);
  t = reverse_acc_2_0(_id, o_31, t);
  t = map_1_0(p_31, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,s_12 = NULL,u_12 = NULL;
  j_66 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_66);
  g_66 = t;
  t = h_66;
  t = t_114(t);
  i_66 = t;
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_66);
  s_12 = t;
  t = SSLsetAnnotations(s_12, g_66);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,v_12 = NULL,w_12 = NULL;
  n_66 = t;
  {
    ATerm q_69 = t;
    int r_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_66;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_69 = ATgetFirst((ATermList) t);
                ATerm t_69 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_66;
          }
        ;
        LocalPopChoice(r_69);
      }
    else
      {
        t = q_69;
        t = (ATerm) ATinsert(ATempty, n_66);
      }
    o_66 = t;
    w_12 = t;
    t = term_t_63;
    v_12 = t;
    t = SSL_printnl(v_12, o_66);
    t = n_66;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  t = term_h_68;
  a_13 = t;
  t = term_k_66;
  x_12 = t;
  t = a_13;
  b_13 = t;
  t = term_h_68;
  z_12 = t;
  t = SSL_table_get(x_12, z_12);
  {
    ATerm u_69 = t;
    int v_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL,e_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
        t = eval_config_0_0(t);
        a_19 = t;
        i_13 = t;
        t = term_k_66;
        e_13 = t;
        t = i_13;
        j_13 = t;
        t = term_h_68;
        h_13 = t;
        t = SSL_table_put(e_13, h_13, a_19);
        t = a_19;
        ;
        LocalPopChoice(v_69);
      }
    else
      {
        t = u_69;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm q_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_31 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,q_13 = NULL,r_13 = NULL;
  n_13 = t;
  t = term_k_66;
  k_13 = t;
  t = n_13;
  q_13 = t;
  t = term_w_69;
  l_13 = t;
  t = q_13;
  r_13 = t;
  t = term_y_22;
  m_13 = t;
  t = SSL_table_put(k_13, l_13, m_13);
  t = term_x_69;
  return(t);
}
ATerm t_31 (ATerm t)
{
  t = term_y_69;
  return(t);
}
ATerm u_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_31 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,b_14 = NULL,c_14 = NULL,g_14 = NULL,h_14 = NULL;
  v_13 = t;
  t = term_k_66;
  s_13 = t;
  t = v_13;
  w_13 = t;
  t = term_w_69;
  t_13 = t;
  t = w_13;
  x_13 = t;
  t = term_y_22;
  u_13 = t;
  t = SSL_table_put(s_13, t_13, u_13);
  c_14 = t;
  t = term_k_66;
  y_13 = t;
  t = c_14;
  g_14 = t;
  t = term_z_69;
  z_13 = t;
  t = g_14;
  h_14 = t;
  t = term_y_22;
  b_14 = t;
  t = SSL_table_put(y_13, z_13, b_14);
  t = term_a_70;
  return(t);
}
ATerm w_31 (ATerm t)
{
  t = term_b_70;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_70 = t;
  int d_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_31, s_31, t_31, t);
      ;
      LocalPopChoice(d_70);
    }
  else
    {
      t = c_70;
      t = Option_3_0(u_31, v_31, w_31, t);
    }
  return(t);
}
ATerm y_31 (ATerm t)
{
  ATerm u_66 = NULL,i_14 = NULL,j_14 = NULL,m_14 = NULL,o_14 = NULL;
  u_66 = t;
  m_14 = t;
  t = term_k_66;
  i_14 = t;
  t = m_14;
  o_14 = t;
  t = term_h_68;
  j_14 = t;
  t = SSL_table_put(i_14, j_14, u_66);
  t = (ATerm) ATmakeAppl(sym_Program_1, u_66);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_143 (ATerm), ATerm t)
{
  ATerm t_66 = NULL;
  t_66 = t;
  {
    ATerm e_70 = t;
    int f_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_70;
        t = f_143(t);
        ;
        LocalPopChoice(f_70);
      }
    else
      {
        t = e_70;
      }
    t = t_66;
    {
      ATerm z_31 (ATerm t)
      {
        ATerm h_70 = t;
        int i_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_70 = t;
            int k_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_70);
              }
            else
              {
                t = j_70;
                t = f_143(t);
                t = Cons_2_0(_id, z_31, t);
              }
            ;
            LocalPopChoice(i_70);
          }
        else
          {
            t = h_70;
            {
              ATerm w_66 = NULL,x_66 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_66 = ATgetFirst((ATermList) t);
                  x_66 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_66), (ATerm) ATmakeAppl(sym_Undefined_1, w_66));
            }
          }
        return(t);
      }
      t = Cons_2_0(y_31, z_31, t);
    }
  }
  return(t);
}
ATerm b_32 (ATerm t)
{
  ATerm h_67 = NULL;
  h_67 = t;
  if(match_string(t, "--help"))
    {
      t = h_67;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_67;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_67;
        }
    }
  return(t);
}
ATerm c_32 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  t = term_k_66;
  w_14 = t;
  t = z_14;
  a_15 = t;
  t = term_f_69;
  x_14 = t;
  t = a_15;
  b_15 = t;
  t = term_y_22;
  y_14 = t;
  t = SSL_table_put(w_14, x_14, y_14);
  t = term_l_70;
  return(t);
}
ATerm f_32 (ATerm t)
{
  t = term_m_70;
  return(t);
}
ATerm g_32 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_143 (ATerm), ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,v_14 = NULL,m_16 = NULL,n_16 = NULL;
  e_67 = t;
  s_14 = t;
  t = term_w_67;
  p_14 = t;
  t = s_14;
  t_14 = t;
  t = term_x_67;
  q_14 = t;
  t = t_14;
  v_14 = t;
  t = (ATerm) ATempty;
  r_14 = t;
  t = SSL_table_put(p_14, q_14, r_14);
  t = e_67;
  {
    ATerm a_32 (ATerm t)
    {
      ATerm n_70 = t;
      int o_70 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_143(t);
          ;
          LocalPopChoice(o_70);
        }
      else
        {
          t = n_70;
          {
            ATerm p_70 = t;
            int q_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_32, c_32, f_32, t);
                ;
                LocalPopChoice(q_70);
              }
            else
              {
                t = p_70;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_32, t);
    {
      ATerm r_70 = t;
      int s_70 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_67 = NULL;
          m_67 = t;
          {
            ATerm t_70 = t;
            int u_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_15 = NULL,n_15 = NULL;
                t = m_67;
                {
                  ATerm v_70 = t;
                  int w_70 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
                      t = term_f_69;
                      f_15 = t;
                      t = term_k_66;
                      c_15 = t;
                      t = f_15;
                      g_15 = t;
                      t = term_f_69;
                      e_15 = t;
                      t = SSL_table_get(c_15, e_15);
                      {
                        ATerm x_70 = t;
                        int y_70 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_20 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
                            t = eval_config_0_0(t);
                            s_20 = t;
                            k_15 = t;
                            t = term_k_66;
                            i_15 = t;
                            t = k_15;
                            l_15 = t;
                            t = term_f_69;
                            j_15 = t;
                            t = SSL_table_put(i_15, j_15, s_20);
                            t = s_20;
                            ;
                            LocalPopChoice(y_70);
                          }
                        else
                          {
                            t = x_70;
                          }
                      }
                      ;
                      LocalPopChoice(w_70);
                    }
                  else
                    {
                      t = v_70;
                      t = fetch_1_0(g_32, t);
                    }
                  t = m_67;
                  t = default_system_usage_0_0(t);
                  n_15 = t;
                  t = term_b_50;
                  m_15 = t;
                  t = SSL_exit(m_15);
                }
                ;
                LocalPopChoice(u_70);
              }
            else
              {
                t = t_70;
                {
                  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,w_15 = NULL,e_16 = NULL,f_16 = NULL;
                  t = term_w_69;
                  s_15 = t;
                  t = term_k_66;
                  q_15 = t;
                  t = s_15;
                  w_15 = t;
                  t = term_w_69;
                  r_15 = t;
                  t = SSL_table_get(q_15, r_15);
                  {
                    ATerm z_70 = t;
                    int a_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_21 = NULL,x_15 = NULL,y_15 = NULL,c_16 = NULL,d_16 = NULL;
                        t = eval_config_0_0(t);
                        s_21 = t;
                        c_16 = t;
                        t = term_k_66;
                        x_15 = t;
                        t = c_16;
                        d_16 = t;
                        t = term_w_69;
                        y_15 = t;
                        t = SSL_table_put(x_15, y_15, s_21);
                        t = s_21;
                        ;
                        LocalPopChoice(a_71);
                      }
                    else
                      {
                        t = z_70;
                      }
                    t = m_67;
                    t = default_system_about_0_0(t);
                    f_16 = t;
                    t = term_b_50;
                    e_16 = t;
                    t = SSL_exit(e_16);
                  }
                }
              }
          }
          ;
          LocalPopChoice(s_70);
        }
      else
        {
          t = r_70;
          {
            ATerm b_71 = t;
            int c_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
                ATerm h_32 (ATerm t)
                {
                  ATerm i_32 (ATerm t)
                  {
                    if(((f_67 != NULL) && (f_67 != t)))
                      _fail(t);
                    else
                      f_67 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_32, t);
                  return(t);
                }
                t = fetch_1_0(h_32, t);
                i_16 = t;
                t = term_z_32;
                g_16 = t;
                t = i_16;
                j_16 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_67)), term_d_71);
                h_16 = t;
                t = SSL_printnl(g_16, h_16);
                t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_67)), term_d_71));
                t = default_system_usage_0_0(t);
                l_16 = t;
                t = term_c_33;
                k_16 = t;
                t = SSL_exit(k_16);
                ;
                LocalPopChoice(c_71);
              }
            else
              {
                t = b_71;
              }
          }
        }
      g_67 = t;
      n_16 = t;
      t = term_w_67;
      m_16 = t;
      t = SSL_table_destroy(m_16);
      t = g_67;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_141 (ATerm), ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm t)
{
  ATerm p_67 = NULL,o_16 = NULL,q_16 = NULL,s_16 = NULL,t_16 = NULL,x_16 = NULL,y_16 = NULL;
  t = parse_options_1_0(e_141, t);
  p_67 = t;
  q_16 = t;
  t = term_e_71;
  o_16 = t;
  t = SSL_table_create(o_16);
  x_16 = t;
  t = term_e_71;
  s_16 = t;
  t = x_16;
  y_16 = t;
  t = term_f_71;
  t_16 = t;
  t = SSL_table_put(s_16, t_16, p_67);
  t = p_67;
  t = g_141(t);
  {
    ATerm g_71 = t;
    int h_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_141, t);
        ;
        LocalPopChoice(h_71);
      }
    else
      {
        t = g_71;
        {
          ATerm i_71 = t;
          int j_71 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_141(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_71);
            }
          else
            {
              t = i_71;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_32 (ATerm t)
{
  t = if_verbose2_1_0(q_32, t);
  return(t);
}
ATerm n_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_32 (ATerm t)
{
  ATerm z_16 = NULL,b_17 = NULL,c_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  e_17 = t;
  t = term_k_66;
  z_16 = t;
  t = e_17;
  f_17 = t;
  t = term_k_71;
  b_17 = t;
  t = f_17;
  g_17 = t;
  t = term_y_22;
  c_17 = t;
  t = SSL_table_put(z_16, b_17, c_17);
  t = term_l_71;
  return(t);
}
ATerm p_32 (ATerm t)
{
  t = term_m_71;
  return(t);
}
ATerm q_32 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,y_17 = NULL,f_18 = NULL,h_18 = NULL,k_18 = NULL;
  q_67 = t;
  t = term_h_68;
  j_17 = t;
  t = term_k_66;
  h_17 = t;
  t = j_17;
  k_17 = t;
  t = term_h_68;
  i_17 = t;
  t = SSL_table_get(h_17, i_17);
  {
    ATerm n_71 = t;
    int o_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_22 = NULL,r_17 = NULL,t_17 = NULL,w_17 = NULL,x_17 = NULL;
        t = eval_config_0_0(t);
        g_22 = t;
        w_17 = t;
        t = term_k_66;
        r_17 = t;
        t = w_17;
        x_17 = t;
        t = term_h_68;
        t_17 = t;
        t = SSL_table_put(r_17, t_17, g_22);
        t = g_22;
        ;
        LocalPopChoice(o_71);
      }
    else
      {
        t = n_71;
      }
    r_67 = t;
    h_18 = t;
    t = term_z_32;
    y_17 = t;
    t = h_18;
    k_18 = t;
    t = (ATerm) ATinsert(ATempty, r_67);
    f_18 = t;
    t = SSL_printnl(y_17, f_18);
    t = q_67;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm t)
{
  ATerm j_32 (ATerm t)
  {
    ATerm p_71 = t;
    int q_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_140(t);
        ;
        LocalPopChoice(q_71);
      }
    else
      {
        t = p_71;
        {
          ATerm r_71 = t;
          int s_71 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(s_71);
            }
          else
            {
              t = r_71;
              {
                ATerm t_71 = t;
                int u_71 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(u_71);
                  }
                else
                  {
                    t = t_71;
                    {
                      ATerm v_71 = t;
                      int w_71 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_32, o_32, p_32, t);
                          ;
                          LocalPopChoice(w_71);
                        }
                      else
                        {
                          t = v_71;
                          {
                            ATerm x_71 = t;
                            int y_71 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(y_71);
                              }
                            else
                              {
                                t = x_71;
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
  ATerm m_32 (ATerm t)
  {
    ATerm s_67 = NULL,t_67 = NULL,p_22 = NULL;
    s_67 = t;
    {
      ATerm z_71 = t;
      int a_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_32 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_67 != NULL) && (t_67 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_67 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_32, t);
          ;
          LocalPopChoice(a_72);
        }
      else
        {
          t = z_71;
          t = term_b_72;
          t_67 = t;
        }
      t = not_null(t_67);
      t = ReadFromFile_0_0(t);
      p_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_67, p_22);
      t = apply_strategy_1_0(n_140, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_32, p_140, l_32, m_32, t);
  return(t);
}
ATerm s_32 (ATerm t)
{
  t = _2_0(_id, u_32, t);
  return(t);
}
ATerm u_32 (ATerm t)
{
  t = Specification_1_0(v_32, t);
  return(t);
}
ATerm v_32 (ATerm t)
{
  t = Cons_2_0(_id, w_32, t);
  return(t);
}
ATerm w_32 (ATerm t)
{
  t = Cons_2_0(x_32, y_32, t);
  return(t);
}
ATerm x_32 (ATerm t)
{
  t = Strategies_1_0(inline_sdefs_0_0, t);
  return(t);
}
ATerm y_32 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_32, _fail, default_usage_0_0, t);
  return(t);
}
