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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_RDefT_4;
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
Symbol sym_Bagof_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
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
Symbol sym_Id_1;
Symbol sym_FunType_2;
Symbol sym_Undefined_0;
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
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
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
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_v_27;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_b_25;
ATerm term_s_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_l_20;
ATerm term_a_20;
ATerm term_t_19;
ATerm term_q_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_w_18;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_z_13;
ATerm term_c_12;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_i_11;
ATerm term_j_10;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_o_8;
void init_constant_terms (void)
{
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Sort_2, term_i_11, (ATerm) ATempty);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_CallT_3, term_e_14, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_CallT_3, term_i_14, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_17);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_o_8);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_u_21);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_o_8);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_b_24, term_o_8);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, term_z_22, term_o_8);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_e_26, term_o_8);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Anno__Cong_____2_0 (ATerm d_128 (ATerm), ATerm e_128 (ATerm), ATerm);
ATerm c_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_4 (ATerm r_100, ATerm q_100, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm n_1 (ATerm);
ATerm q_1 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_131 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm a_2 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm f_129 (ATerm), ATerm);
ATerm downup_1_0 (ATerm f_130 (ATerm), ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm l_32 (ATerm w_31, ATerm);
ATerm conc_0_0 (ATerm);
ATerm alltd_1_0 (ATerm v_131 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm Canon_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm t_5 (ATerm i_88, ATerm j_88, ATerm k_88, ATerm);
ATerm genzip_4_0 (ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm z_137 (ATerm), ATerm a_138 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm k_136 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm e_46 (ATerm v_45, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm h_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm downup2_2_0 (ATerm i_130 (ATerm), ATerm j_130 (ATerm), ATerm);
ATerm y_5 (ATerm g_68, ATerm h_68, ATerm);
ATerm z_5 (ATerm u_71, ATerm v_71, ATerm);
ATerm b_6 (ATerm c_148 (ATerm), ATerm d_478, ATerm y_71, ATerm);
ATerm a_6 (ATerm q_71, ATerm r_71, ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_151 (ATerm), ATerm);
ATerm p_53 (ATerm j_53, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_6 (ATerm w_71, ATerm);
ATerm d_6 (ATerm i_68, ATerm j_68, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_55 (ATerm z_53, ATerm);
ATerm b_55 (ATerm d_54, ATerm e_54, ATerm f_54, ATerm);
ATerm c_55 (ATerm n_54, ATerm o_54, ATerm p_54, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_136 (ATerm), ATerm);
ATerm x_5 (ATerm k_63, ATerm l_63, ATerm);
ATerm debug_1_0 (ATerm a_148 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_149 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm t_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm y_4 (ATerm);
ATerm d_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_6 (ATerm x_72, ATerm y_72, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_6 (ATerm v_77, ATerm w_77, ATerm u_77, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_6 (ATerm u_65, ATerm v_65, ATerm);
ATerm foldr_2_0 (ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_149 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm need_help_1_0 (ATerm c_152 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_135 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm g_6 (ATerm m_79, ATerm n_79, ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm v_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm f_154 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm m_7 (ATerm);
ATerm o_7 (ATerm);
ATerm parse_options_1_0 (ATerm e_154 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_152 (ATerm), ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm h_152 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm y_7 (ATerm);
ATerm b_8 (ATerm);
ATerm iowrap_3_0 (ATerm n_151 (ATerm), ATerm o_151 (ATerm), ATerm p_151 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,h_0 = NULL,j_0 = NULL,l_0 = NULL,o_0 = NULL;
  e_0 = t;
  t = term_o_8;
  t = whoami_0_0(t);
  h_0 = t;
  t = term_q_8;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), h_0), term_t_8);
  o_0 = t;
  t = SSL_printnl(l_0, o_0);
  t = term_v_8;
  j_0 = t;
  t = SSL_exit(j_0);
  t = e_0;
  return(t);
}
ATerm Anno__Cong_____2_0 (ATerm d_128 (ATerm), ATerm e_128 (ATerm), ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL;
  t_0 = t;
  p_0 = t;
  t = SSLgetAnnotations(t_0);
  r_0 = t;
  t = p_0;
  t = d_128(t);
  q_0 = t;
  t = r_0;
  t = e_128(t);
  s_0 = t;
  t = SSLsetAnnotations(q_0, s_0);
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL,x_0 = NULL,z_0 = NULL;
      h_1 = t;
      if(match_cons(t, sym_Op_2))
        {
          i_1 = ATgetArgument(t, 0);
          j_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_1);
      x_0 = t;
      t = i_1;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, i_1, j_1);
      z_0 = t;
      t = SSLsetAnnotations(z_0, x_0);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      t = Anno__Cong_____2_0(u_0, v_0, t);
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL,a_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_1);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_1);
  a_1 = t;
  t = SSLsetAnnotations(a_1, k_1);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm b_2 = NULL,g_2 = NULL,h_2 = NULL;
  b_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_2;
    }
  else
    {
      ATerm c_2 = NULL,b_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_2 = ATgetFirst((ATermList) t);
          h_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_2);
      c_2 = t;
      t = g_2;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      t = h_2;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(h_2), g_2);
      b_1 = t;
      t = SSLsetAnnotations(b_1, c_2);
    }
  return(t);
}
ATerm w_4 (ATerm r_100, ATerm q_100, ATerm t)
{
  t = r_100;
  {
    ATerm a_9 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(c_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_9;
      }
    t = (ATerm) ATmakeAppl(sym_Build_1, r_100);
  }
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_3;
  if(match_cons(t, sym_Match_1))
    {
      g_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_3;
  if(match_cons(t, sym_Var_1))
    {
      i_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_3;
  if(match_cons(t, sym_Seq_2))
    {
      k_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
      t = k_3;
      if(match_cons(t, sym_Build_1))
        {
          l_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_3;
      if(match_cons(t, sym_Var_1))
        {
          c_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_3;
      if((i_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_3)), d_3);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          k_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_3;
      if(match_cons(t, sym_Var_1))
        {
          l_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_3;
      if((i_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_3));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,b_4 = NULL,c_4 = NULL,e_4 = NULL,f_4 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4;
  if(match_cons(t, sym_Build_1))
    {
      c_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_4;
  if(match_cons(t, sym_Seq_2))
    {
      f_4 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
      t = f_4;
      if(match_cons(t, sym_Match_1))
        {
          w_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_3;
      if((c_4 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_4), x_3);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          f_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_4;
      if((c_4 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, c_4);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm u_4 = NULL,x_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      z_4 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4;
  if(match_cons(t, sym_Match_1))
    {
      a_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5;
  if(match_cons(t, sym_Seq_2))
    {
      c_5 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
      t = c_5;
      if(match_cons(t, sym_Match_1))
        {
          u_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_4;
      if((a_5 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_5), x_4);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          c_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_5;
      if((a_5 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, a_5);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,p_6 = NULL,x_6 = NULL,b_7 = NULL,e_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_6 = ATgetArgument(t, 0);
      x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6;
  if(match_cons(t, sym_Build_1))
    {
      ATerm b_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6;
  if(match_cons(t, sym_Seq_2))
    {
      b_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
      t = b_7;
      if(match_cons(t, sym_PrimT_3))
        {
          l_6 = ATgetArgument(t, 0);
          m_6 = ATgetArgument(t, 1);
          n_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, l_6, m_6, n_6), e_7);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          b_7 = ATgetArgument(t, 0);
          e_7 = ATgetArgument(t, 1);
          l_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, b_7, e_7, l_7);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,p_8 = NULL,r_8 = NULL,s_8 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8;
  if(match_cons(t, sym_Build_1))
    {
      ATerm e_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_8;
  if(match_cons(t, sym_Seq_2))
    {
      s_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
      t = s_8;
      if(match_cons(t, sym_Build_1))
        {
          k_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_8), l_8);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          s_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, s_8);
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_9 = ATgetArgument(t, 0);
      if(((ATgetType(f_9) != AT_LIST) || !(ATisEmpty(f_9))))
        _fail(t);
      {
        ATerm h_9 = ATgetArgument(t, 1);
        if(((ATgetType(h_9) != AT_LIST) || !(ATisEmpty(h_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm q_10 = NULL,t_10 = NULL,u_10 = NULL,w_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_9 = ATgetArgument(t, 0);
      if(((ATgetType(j_9) == AT_LIST) && !(ATisEmpty(j_9))))
        {
          q_10 = ATgetFirst((ATermList) j_9);
          t_10 = (ATerm) ATgetNext((ATermList) j_9);
        }
      else
        _fail(t);
      {
        ATerm o_9 = ATgetArgument(t, 1);
        if(((ATgetType(o_9) == AT_LIST) && !(ATisEmpty(o_9))))
          {
            u_10 = ATgetFirst((ATermList) o_9);
            w_10 = (ATerm) ATgetNext((ATermList) o_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_10, u_10), (ATerm) ATmakeAppl(sym__2, t_10, w_10));
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm x_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__2))
    {
      x_10 = ATgetArgument(t, 0);
      a_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_11), x_10);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm b_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      b_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_11), (ATerm) ATmakeAppl(sym_Match_1, e_11));
  return(t);
}
ATerm e_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_9 = ATgetArgument(t, 0);
      if(((ATgetType(p_9) != AT_LIST) || !(ATisEmpty(p_9))))
        _fail(t);
      {
        ATerm q_9 = ATgetArgument(t, 1);
        if(((ATgetType(q_9) != AT_LIST) || !(ATisEmpty(q_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
        {
          k_11 = ATgetFirst((ATermList) r_9);
          l_11 = (ATerm) ATgetNext((ATermList) r_9);
        }
      else
        _fail(t);
      {
        ATerm s_9 = ATgetArgument(t, 1);
        if(((ATgetType(s_9) == AT_LIST) && !(ATisEmpty(s_9))))
          {
            m_11 = ATgetFirst((ATermList) s_9);
            n_11 = (ATerm) ATgetNext((ATermList) s_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_11, m_11), (ATerm) ATmakeAppl(sym__2, l_11, n_11));
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  if(match_cons(t, sym__2))
    {
      o_11 = ATgetArgument(t, 0);
      p_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_11), o_11);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_11), (ATerm) ATmakeAppl(sym_Match_1, r_11));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,f_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9;
  if(match_cons(t, sym_Build_1))
    {
      x_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_9;
  if(match_cons(t, sym_Op_2))
    {
      z_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10;
  if(match_cons(t, sym_Seq_2))
    {
      c_10 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
      {
        ATerm p_10 = NULL;
        t = c_10;
        if(match_cons(t, sym_Match_1))
          {
            f_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_10;
        if(match_cons(t, sym_Op_2))
          {
            l_9 = ATgetArgument(t, 0);
            m_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_9;
        if((z_9 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, a_10, m_9);
        t = genzip_4_0(w_0, y_0, c_1, d_1, t);
        p_10 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_10), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_9, a_10)), n_9));
      }
    }
  else
    {
      ATerm j_11 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          c_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_10;
      if(match_cons(t, sym_Op_2))
        {
          f_10 = ATgetArgument(t, 0);
          g_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_10;
      if((z_9 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, a_10, g_10);
      t = genzip_4_0(e_1, f_1, n_1, q_1, t);
      j_11 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_11), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_9, a_10)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm t_12 = NULL,y_12 = NULL,z_12 = NULL,b_13 = NULL,c_13 = NULL,f_13 = NULL,i_13 = NULL,j_13 = NULL;
  y_12 = t;
  if(match_cons(t, sym_Seq_2))
    {
      z_12 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_12;
  if(match_cons(t, sym_Build_1))
    {
      b_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13;
  if(match_cons(t, sym_Op_2))
    {
      c_13 = ATgetArgument(t, 0);
      {
        ATerm t_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_13;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            i_13 = ATgetArgument(t, 0);
            {
              ATerm y_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_9);
        t = i_13;
        if(match_cons(t, sym_Match_1))
          {
            j_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_13;
        if(match_cons(t, sym_Op_2))
          {
            t_12 = ATgetArgument(t, 0);
            {
              ATerm h_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_13, t_12);
        {
          ATerm i_10 = t;
          if((PushChoice() == 0))
            {
              ATerm s_2 = NULL;
              if(match_cons(t, sym__2))
                {
                  s_2 = ATgetArgument(t, 0);
                  if((s_2 != ATgetArgument(t, 1)))
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
              t = i_10;
            }
          t = term_j_10;
        }
      }
    else
      {
        t = u_9;
        if(match_cons(t, sym_Match_1))
          {
            i_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_13;
        if(match_cons(t, sym_Op_2))
          {
            j_13 = ATgetArgument(t, 0);
            {
              ATerm l_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_13, j_13);
        {
          ATerm m_10 = t;
          if((PushChoice() == 0))
            {
              ATerm b_3 = NULL;
              if(match_cons(t, sym__2))
                {
                  b_3 = ATgetArgument(t, 0);
                  if((b_3 != ATgetArgument(t, 1)))
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
              t = m_10;
            }
          t = term_j_10;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_131 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm n_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_131(t);
        ;
        LocalPopChoice(r_10);
      }
    else
      {
        t = n_10;
        t = SRTS_one(p_13, t);
      }
    return(t);
  }
  t = p_13(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,j_15 = NULL,k_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  z_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_15;
  if(match_cons(t, sym_Let_2))
    {
      q_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
      {
        ATerm b_16 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, a_15, q_15);
        t = conc_0_0(t);
        b_16 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, b_16, w_15);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          q_15 = ATgetArgument(t, 0);
          w_15 = ATgetArgument(t, 1);
          x_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_15 = ATgetFirst((ATermList) t);
          o_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_15;
      if(match_cons(t, sym_SDefT_4))
        {
          c_15 = ATgetArgument(t, 0);
          j_15 = ATgetArgument(t, 1);
          k_15 = ATgetArgument(t, 2);
          n_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = j_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_15;
      if(match_cons(t, sym_SVar_1))
        {
          v_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_15;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_15;
      if((c_15 != t))
        {
          _fail(t);
        }
      t = n_15;
      {
        ATerm v_10 = t;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm y_10 = ATgetArgument(t, 0);
                  if(match_cons(y_10, sym_SVar_1))
                    {
                      if(((c_15 != NULL) && (c_15 != ATgetArgument(y_10, 0))))
                        _fail(ATgetArgument(y_10, 0));
                      else
                        c_15 = ATgetArgument(y_10, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_10 = ATgetArgument(t, 1);
                    if(((ATgetType(z_10) != AT_LIST) || !(ATisEmpty(z_10))))
                      _fail(t);
                  }
                  {
                    ATerm c_11 = ATgetArgument(t, 2);
                    if(((ATgetType(c_11) != AT_LIST) || !(ATisEmpty(c_11))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(r_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_10;
          }
        t = not_null(n_15);
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,u_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,f_17 = NULL,g_17 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      f_17 = ATgetArgument(t, 0);
      t = f_17;
      if(match_cons(t, sym_Seq_2))
        {
          z_16 = ATgetArgument(t, 0);
          q_16 = ATgetArgument(t, 1);
          t = z_16;
          if(match_cons(t, sym_Where_1))
            {
              p_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_16;
          if(match_cons(t, sym_Seq_2))
            {
              u_16 = ATgetArgument(t, 0);
              y_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_16;
          if(match_cons(t, sym_Build_1))
            {
              x_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, p_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_16), y_16)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              z_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, z_16);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          f_17 = ATgetArgument(t, 0);
          t = f_17;
          if(match_cons(t, sym_Test_1))
            {
              z_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, z_16);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              f_17 = ATgetArgument(t, 0);
              t = f_17;
              if(match_cons(t, sym_Not_1))
                {
                  z_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, z_16);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  f_17 = ATgetArgument(t, 0);
                  g_17 = ATgetArgument(t, 1);
                  t = g_17;
                  if((f_17 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      f_17 = ATgetArgument(t, 0);
                      g_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = g_17;
                  if((f_17 != t))
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
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      w_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
      t = w_17;
      if(match_cons(t, sym_LChoice_2))
        {
          x_17 = ATgetArgument(t, 0);
          y_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, x_17, (ATerm) ATmakeAppl(sym_LChoice_2, y_17, z_17));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          w_17 = ATgetArgument(t, 0);
          z_17 = ATgetArgument(t, 1);
          t = w_17;
          if(match_cons(t, sym_Seq_2))
            {
              x_17 = ATgetArgument(t, 0);
              y_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, x_17, (ATerm) ATmakeAppl(sym_Seq_2, y_17, z_17));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              w_17 = ATgetArgument(t, 0);
              z_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_17;
          if(match_cons(t, sym_Choice_2))
            {
              x_17 = ATgetArgument(t, 0);
              y_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, x_17, (ATerm) ATmakeAppl(sym_Choice_2, y_17, z_17));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,n_20 = NULL;
  j_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_20 = ATgetFirst((ATermList) t);
      n_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm d_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,e_5 = NULL,f_5 = NULL,o_1 = NULL,g_1 = NULL;
        t = SSLgetAnnotations(j_20);
        s_4 = t;
        t = k_20;
        t = n_0(t);
        e_5 = t;
        t = (ATerm) ATinsert(CheckATermList(n_20), e_5);
        g_1 = t;
        t = SSLsetAnnotations(g_1, s_4);
        f_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_4 = ATgetFirst((ATermList) t);
            q_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_5);
        o_4 = t;
        t = q_4;
        {
          ATerm g_11 = t;
          int h_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(h_11);
            }
          else
            {
              t = g_11;
            }
          r_4 = t;
          t = (ATerm) ATinsert(CheckATermList(r_4), p_4);
          o_1 = t;
          t = SSLsetAnnotations(o_1, o_4);
        }
        ;
        LocalPopChoice(f_11);
      }
    else
      {
        t = d_11;
        {
          ATerm r_5 = NULL,v_5 = NULL,p_1 = NULL;
          t = SSLgetAnnotations(j_20);
          r_5 = t;
          t = n_20;
          t = map1_1_0(n_0, t);
          v_5 = t;
          t = (ATerm) ATinsert(CheckATermList(v_5), k_20);
          p_1 = t;
          t = SSLsetAnnotations(p_1, r_5);
        }
      }
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm r_22 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_22, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_11), term_t_11));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm t_22 = NULL,w_22 = NULL;
  w_22 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_22 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_22, term_t_11);
    }
  else
    {
      t = w_22;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm k_23 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_23, term_t_11);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL;
  m_23 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_23 = ATgetArgument(t, 0);
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, l_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_11), term_t_11));
            ;
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            t = m_23;
          }
      }
    }
  else
    {
      t = m_23;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm d_24 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_24, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_11), term_t_11));
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  f_24 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_24 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, e_24, term_t_11);
    }
  else
    {
      t = f_24;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,p_21 = NULL,q_21 = NULL,s_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      s_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, s_21, t_21);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          s_21 = ATgetArgument(t, 0);
          t = s_21;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_21 = ATgetFirst((ATermList) t);
              k_21 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, j_21, (ATerm) ATmakeAppl(sym_LChoices_1, k_21));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_j_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              s_21 = ATgetArgument(t, 0);
              t = s_21;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_21 = ATgetFirst((ATermList) t);
                  k_21 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, j_21, (ATerm) ATmakeAppl(sym_Choices_1, k_21));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_j_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  s_21 = ATgetArgument(t, 0);
                  t = s_21;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_21 = ATgetFirst((ATermList) t);
                      k_21 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_21, (ATerm) ATmakeAppl(sym_Seqs_1, k_21));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_w_11;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_21 = ATgetArgument(t, 0);
                      t_21 = ATgetArgument(t, 1);
                      q_21 = ATgetArgument(t, 2);
                      p_21 = ATgetArgument(t, 3);
                      {
                        ATerm o_22 = NULL,q_22 = NULL;
                        t = t_21;
                        t = map1_1_0(s_1, t);
                        o_22 = t;
                        t = q_21;
                        t = map1_1_0(u_1, t);
                        q_22 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, s_21, o_22, q_22, p_21);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          s_21 = ATgetArgument(t, 0);
                          t_21 = ATgetArgument(t, 1);
                          q_21 = ATgetArgument(t, 2);
                          p_21 = ATgetArgument(t, 3);
                          {
                            ATerm x_11 = t;
                            int y_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_23 = NULL,j_23 = NULL;
                                t = q_21;
                                t = map1_1_0(v_1, t);
                                h_23 = t;
                                t = t_21;
                                t = map_1_0(w_1, t);
                                j_23 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_21, j_23, h_23, p_21);
                                ;
                                LocalPopChoice(y_11);
                              }
                            else
                              {
                                t = x_11;
                                {
                                  ATerm a_24 = NULL,c_24 = NULL;
                                  t = t_21;
                                  t = map1_1_0(x_1, t);
                                  a_24 = t;
                                  t = q_21;
                                  t = map_1_0(y_1, t);
                                  c_24 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_21, a_24, c_24, p_21);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              s_21 = ATgetArgument(t, 0);
                              t_21 = ATgetArgument(t, 1);
                              q_21 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, t_21, (ATerm) ATmakeAppl(sym_Op_2, term_c_12, (ATerm) ATinsert(ATinsert(ATempty, q_21), s_21)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  s_21 = ATgetArgument(t, 0);
                                  t_21 = ATgetArgument(t, 1);
                                  q_21 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_21)), s_21), (ATerm) ATmakeAppl(sym_Build_1, t_21)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      s_21 = ATgetArgument(t, 0);
                                      t_21 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_21, (ATerm) ATmakeAppl(sym_Match_1, t_21));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          s_21 = ATgetArgument(t, 0);
                                          t_21 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_21), t_21);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              s_21 = ATgetArgument(t, 0);
                                              t_21 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_21), s_21);
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
ATerm a_2 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm k_26 = NULL,n_26 = NULL,o_26 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      k_26 = ATgetArgument(t, 0);
      t = k_26;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_j_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          k_26 = ATgetArgument(t, 0);
          t = k_26;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_w_11;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              k_26 = ATgetArgument(t, 0);
              n_26 = ATgetArgument(t, 1);
              t = k_26;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_j_10;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  k_26 = ATgetArgument(t, 0);
                  n_26 = ATgetArgument(t, 1);
                  t = n_26;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_j_10;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      k_26 = ATgetArgument(t, 0);
                      n_26 = ATgetArgument(t, 1);
                      t = n_26;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_j_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          k_26 = ATgetArgument(t, 0);
                          t = k_26;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_j_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              k_26 = ATgetArgument(t, 0);
                              t = k_26;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_j_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  k_26 = ATgetArgument(t, 0);
                                  n_26 = ATgetArgument(t, 1);
                                  t = n_26;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_j_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      k_26 = ATgetArgument(t, 0);
                                      n_26 = ATgetArgument(t, 1);
                                      t = n_26;
                                      t = fetch_1_0(a_2, t);
                                      t = term_j_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          k_26 = ATgetArgument(t, 0);
                                          n_26 = ATgetArgument(t, 1);
                                          t = n_26;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = k_26;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = n_26;
                                                }
                                              else
                                                {
                                                  t = k_26;
                                                }
                                            }
                                          else
                                            {
                                              t = k_26;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = n_26;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              k_26 = ATgetArgument(t, 0);
                                              n_26 = ATgetArgument(t, 1);
                                              t = n_26;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = k_26;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = n_26;
                                                    }
                                                  else
                                                    {
                                                      t = k_26;
                                                    }
                                                }
                                              else
                                                {
                                                  t = k_26;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = n_26;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  k_26 = ATgetArgument(t, 0);
                                                  t = k_26;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_j_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      k_26 = ATgetArgument(t, 0);
                                                      n_26 = ATgetArgument(t, 1);
                                                      o_26 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = o_26;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_26, n_26);
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
  ATerm l_29 = NULL,p_29 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      p_29 = ATgetArgument(t, 0);
      t = p_29;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_w_11;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          p_29 = ATgetArgument(t, 0);
          t = p_29;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_j_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              p_29 = ATgetArgument(t, 0);
              l_29 = ATgetArgument(t, 1);
              t = l_29;
              if(match_cons(t, sym_Id_0))
                {
                  t = p_29;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = l_29;
                    }
                  else
                    {
                      t = p_29;
                    }
                }
              else
                {
                  t = p_29;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = l_29;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  p_29 = ATgetArgument(t, 0);
                  l_29 = ATgetArgument(t, 1);
                  t = p_29;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_w_11;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      p_29 = ATgetArgument(t, 0);
                      l_29 = ATgetArgument(t, 1);
                      t = l_29;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_w_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          p_29 = ATgetArgument(t, 0);
                          l_29 = ATgetArgument(t, 1);
                          t = l_29;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_w_11;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              p_29 = ATgetArgument(t, 0);
                              t = p_29;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_w_11;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  p_29 = ATgetArgument(t, 0);
                                  t = p_29;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_w_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      p_29 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_29;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_w_11;
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
  ATerm d_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = d_12;
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            {
              ATerm i_12 = t;
              int j_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(j_12);
                }
              else
                {
                  t = i_12;
                  {
                    ATerm k_12 = t;
                    int l_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(l_12);
                      }
                    else
                      {
                        t = k_12;
                        {
                          ATerm m_12 = t;
                          int n_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(n_12);
                            }
                          else
                            {
                              t = m_12;
                              {
                                ATerm o_12 = t;
                                int p_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_30 = NULL,r_30 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        q_30 = ATgetArgument(t, 0);
                                        r_30 = ATgetArgument(t, 1);
                                        t = q_30;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = r_30;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            q_30 = ATgetArgument(t, 0);
                                            r_30 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = q_30;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = r_30;
                                      }
                                    ;
                                    LocalPopChoice(p_12);
                                  }
                                else
                                  {
                                    t = o_12;
                                    {
                                      ATerm q_12 = t;
                                      int r_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(r_12);
                                        }
                                      else
                                        {
                                          t = q_12;
                                          {
                                            ATerm s_12 = t;
                                            int u_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(u_12);
                                              }
                                            else
                                              {
                                                t = s_12;
                                                {
                                                  ATerm v_12 = t;
                                                  int w_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(w_12);
                                                    }
                                                  else
                                                    {
                                                      t = v_12;
                                                      {
                                                        ATerm x_12 = t;
                                                        int a_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(a_13);
                                                          }
                                                        else
                                                          {
                                                            t = x_12;
                                                            {
                                                              ATerm d_13 = t;
                                                              int e_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(e_13);
                                                                }
                                                              else
                                                                {
                                                                  t = d_13;
                                                                  {
                                                                    ATerm g_13 = t;
                                                                    int k_13 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(k_13);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_13;
                                                                        {
                                                                          ATerm l_13 = t;
                                                                          int m_13 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(m_13);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_13;
                                                                              {
                                                                                ATerm n_13 = t;
                                                                                int o_13 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(o_13);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = n_13;
                                                                                    {
                                                                                      ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,a_31 = NULL;
                                                                                      w_30 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          x_30 = ATgetArgument(t, 0);
                                                                                          a_31 = ATgetArgument(t, 1);
                                                                                          t = x_30;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              v_30 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = w_30;
                                                                                          t = w_4(v_30, a_31, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              x_30 = ATgetArgument(t, 0);
                                                                                              a_31 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = x_30;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = a_31;
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
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm f_129 (ATerm), ATerm t)
{
  ATerm q_31 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_129(t);
        t = q_31(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
      }
    return(t);
  }
  t = q_31(t);
  return(t);
}
ATerm downup_1_0 (ATerm f_130 (ATerm), ATerm t)
{
  t = f_130(t);
  {
    ATerm d_2 (ATerm t)
    {
      t = downup_1_0(f_130, t);
      return(t);
    }
    t = SRTS_all(d_2, t);
    t = f_130(t);
  }
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  r_31 = t;
  t = new_0_0(t);
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_31), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, s_31, (ATerm)ATempty, (ATerm)ATempty, r_31)));
  return(t);
}
ATerm l_32 (ATerm w_31, ATerm t)
{
  ATerm x_31 = NULL;
  t = SSL_explode_term(w_31);
  if(match_cons(t, sym__2))
    {
      ATerm u_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  if(((h_32 != NULL) && (h_32 != t)))
    _fail(t);
  else
    h_32 = t;
  if(match_cons(t, sym__2))
    {
      f_32 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              t = not_null(g_32);
              return(t);
            }
            t = not_null(f_32);
            t = at_end_1_0(e_2, t);
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            t = l_32(not_null(h_32), t);
          }
      }
    }
  else
    {
      t = l_32(not_null(h_32), t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm v_131 (ATerm), ATerm t)
{
  ATerm m_32 (ATerm t)
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_131(t);
        ;
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = SRTS_all(m_32, t);
      }
    return(t);
  }
  t = m_32(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_13;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_15 = ATgetFirst((ATermList) t);
      f_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_15, f_15);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,l_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_14 = ATgetArgument(t, 0);
      if(match_cons(a_14, sym__2))
        {
          g_15 = ATgetArgument(a_14, 0);
          h_15 = ATgetArgument(a_14, 1);
        }
      else
        _fail(t);
      {
        ATerm b_14 = ATgetArgument(t, 1);
        if(match_cons(b_14, sym__2))
          {
            i_15 = ATgetArgument(b_14, 0);
            l_15 = ATgetArgument(b_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_15), g_15), (ATerm) ATinsert(CheckATermList(l_15), h_15));
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm m_15 = NULL;
  m_15 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_g_14;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_j_14;
        }
      else
        {
          t = m_15;
        }
    }
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL,u_15 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            t_15 = ATgetArgument(t, 0);
            u_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_15;
        if(match_cons(t, sym_CallT_3))
          {
            d_16 = ATgetArgument(t, 0);
            f_16 = ATgetArgument(t, 1);
            g_16 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = d_16;
        if(match_cons(t, sym_SVar_1))
          {
            e_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_16;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_16;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_16), (ATerm)ATempty, (ATerm) ATempty), t_15);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          ATerm m_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,r_16 = NULL,s_16 = NULL,r_2 = NULL,n_2 = NULL;
                  s_16 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      k_16 = ATgetArgument(t, 0);
                      l_16 = ATgetArgument(t, 1);
                      m_16 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_16);
                  j_16 = t;
                  t = k_16;
                  if(match_cons(t, sym_SVar_1))
                    {
                      o_16 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_16);
                  n_16 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, o_16);
                  n_2 = t;
                  t = SSLsetAnnotations(n_2, n_16);
                  r_16 = t;
                  t = l_16;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = m_16;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, r_16, l_16, m_16);
                  r_2 = t;
                  t = SSLsetAnnotations(r_2, j_16);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = o_14;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(n_14);
            }
          else
            {
              t = m_14;
              {
                ATerm t_16 = NULL;
                t_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_16, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_13;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_23 = ATgetFirst((ATermList) t);
      c_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_23, c_23);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm d_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if(match_cons(p_14, sym__2))
        {
          d_23 = ATgetArgument(p_14, 0);
          o_23 = ATgetArgument(p_14, 1);
        }
      else
        _fail(t);
      {
        ATerm q_14 = ATgetArgument(t, 1);
        if(match_cons(q_14, sym__2))
          {
            p_23 = ATgetArgument(q_14, 0);
            q_23 = ATgetArgument(q_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_23), d_23), (ATerm) ATinsert(CheckATermList(q_23), o_23));
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm v_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_g_14;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_j_14;
        }
      else
        {
          t = v_23;
        }
    }
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_23 = NULL,j_24 = NULL,k_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            y_23 = ATgetArgument(t, 0);
            j_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_24;
        if(match_cons(t, sym_CallT_3))
          {
            k_24 = ATgetArgument(t, 0);
            p_24 = ATgetArgument(t, 1);
            q_24 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = k_24;
        if(match_cons(t, sym_SVar_1))
          {
            o_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_24), (ATerm)ATempty, (ATerm) ATempty), y_23);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm t_14 = t;
          int u_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,a_25 = NULL,c_25 = NULL,d_25 = NULL,g_25 = NULL,j_25 = NULL,u_6 = NULL,t_6 = NULL;
                  j_25 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      w_24 = ATgetArgument(t, 0);
                      x_24 = ATgetArgument(t, 1);
                      a_25 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_25);
                  v_24 = t;
                  t = w_24;
                  if(match_cons(t, sym_SVar_1))
                    {
                      d_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_24);
                  c_25 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, d_25);
                  t_6 = t;
                  t = SSLsetAnnotations(t_6, c_25);
                  g_25 = t;
                  t = x_24;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_25;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, g_25, x_24, a_25);
                  u_6 = t;
                  t = SSLsetAnnotations(u_6, v_24);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = v_14;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(u_14);
            }
          else
            {
              t = t_14;
              {
                ATerm k_25 = NULL;
                k_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_25, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
  w_41 = t;
  if(match_cons(t, sym_Rec_2))
    {
      x_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, x_41, (ATerm)ATempty, (ATerm)ATempty, y_41)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_41), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          x_41 = ATgetArgument(t, 0);
          y_41 = ATgetArgument(t, 1);
          z_41 = ATgetArgument(t, 2);
          p_41 = ATgetArgument(t, 3);
          {
            ATerm f_42 = NULL;
            t = not_null(y_41);
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = not_null(z_41);
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = not_null(p_41);
            if(match_cons(t, sym_Rec_2))
              {
                if(((q_41 != NULL) && (q_41 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_41 = ATgetArgument(t, 0);
                if(((r_41 != NULL) && (r_41 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  r_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(r_41);
            {
              ATerm f_2 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm y_14 = ATgetArgument(t, 0);
                    if(match_cons(y_14, sym_SVar_1))
                      {
                        if(((q_41 != NULL) && (q_41 != ATgetArgument(y_14, 0))))
                          _fail(ATgetArgument(y_14, 0));
                        else
                          q_41 = ATgetArgument(y_14, 0);
                      }
                    else
                      _fail(t);
                    {
                      ATerm r_15 = ATgetArgument(t, 1);
                      if(((ATgetType(r_15) != AT_LIST) || !(ATisEmpty(r_15))))
                        _fail(t);
                    }
                    {
                      ATerm s_15 = ATgetArgument(t, 2);
                      if(((ATgetType(s_15) != AT_LIST) || !(ATisEmpty(s_15))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_41)), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(f_2, t);
              if(((f_42 != NULL) && (f_42 != t)))
                _fail(t);
              else
                f_42 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(x_41), (ATerm)ATempty, (ATerm)ATempty, not_null(f_42));
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              x_41 = ATgetArgument(t, 0);
              y_41 = ATgetArgument(t, 1);
              t = y_41;
              if(match_cons(t, sym_Seq_2))
                {
                  u_41 = ATgetArgument(t, 0);
                  v_41 = ATgetArgument(t, 1);
                  t = x_41;
                  if(match_cons(t, sym_Where_1))
                    {
                      t_41 = ATgetArgument(t, 0);
                      t = u_41;
                      if(match_cons(t, sym_Build_1))
                        {
                          s_41 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_41, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_41), v_41));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = y_41;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      u_41 = ATgetArgument(t, 0);
                      t = x_41;
                      if(match_cons(t, sym_Where_1))
                        {
                          t_41 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_41, (ATerm) ATmakeAppl(sym_Build_1, u_41));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = y_41;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = x_41;
                          if(match_cons(t, sym_Id_0))
                            {
                              t = x_41;
                            }
                          else
                            {
                              t = x_41;
                            }
                        }
                      else
                        {
                          t = x_41;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = y_41;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  x_41 = ATgetArgument(t, 0);
                  y_41 = ATgetArgument(t, 1);
                  t = y_41;
                  if(match_cons(t, sym_Scope_2))
                    {
                      u_41 = ATgetArgument(t, 0);
                      v_41 = ATgetArgument(t, 1);
                      t = x_41;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm y_15 = t;
                          int z_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_42 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, x_41, u_41);
                              t = conc_0_0(t);
                              u_42 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_42, v_41);
                              ;
                              LocalPopChoice(z_15);
                            }
                          else
                            {
                              t = y_15;
                              t = y_41;
                            }
                        }
                      else
                        {
                          ATerm z_42 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, x_41, u_41);
                          t = conc_0_0(t);
                          z_42 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_42, v_41);
                        }
                    }
                  else
                    {
                      t = x_41;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = y_41;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      x_41 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_16, (ATerm)ATinsert(ATempty, x_41), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          x_41 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_16, (ATerm)ATinsert(ATempty, x_41), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              x_41 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_16, (ATerm)ATinsert(ATempty, x_41), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  x_41 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_b_17, (ATerm)ATinsert(ATempty, x_41), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      x_41 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_17, (ATerm)ATinsert(ATempty, x_41), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          x_41 = ATgetArgument(t, 0);
                                          y_41 = ATgetArgument(t, 1);
                                          z_41 = ATgetArgument(t, 2);
                                          {
                                            ATerm e_17 = t;
                                            int h_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_10 = NULL;
                                                t = not_null(y_41);
                                                {
                                                  ATerm e_12 (ATerm t)
                                                  {
                                                    ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
                                                    z_11 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        a_12 = ATgetFirst((ATermList) t);
                                                        b_12 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm i_17 = t;
                                                      int j_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_13 = NULL,q_13 = NULL,r_13 = NULL,t_1 = NULL;
                                                          t = SSLgetAnnotations(z_11);
                                                          h_13 = t;
                                                          t = a_12;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_g_14;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_j_14;
                                                            }
                                                          q_13 = t;
                                                          t = b_12;
                                                          {
                                                            ATerm k_17 = t;
                                                            int l_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = e_12(t);
                                                                ;
                                                                LocalPopChoice(l_17);
                                                              }
                                                            else
                                                              {
                                                                t = k_17;
                                                              }
                                                            r_13 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(r_13), q_13);
                                                            t_1 = t;
                                                            t = SSLsetAnnotations(t_1, h_13);
                                                          }
                                                          ;
                                                          LocalPopChoice(j_17);
                                                        }
                                                      else
                                                        {
                                                          t = i_17;
                                                          {
                                                            ATerm c_14 = NULL,f_14 = NULL,z_1 = NULL;
                                                            t = SSLgetAnnotations(z_11);
                                                            c_14 = t;
                                                            t = b_12;
                                                            t = e_12(t);
                                                            f_14 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(f_14), a_12);
                                                            z_1 = t;
                                                            t = SSLsetAnnotations(z_1, c_14);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = e_12(t);
                                                  if(((d_10 != NULL) && (d_10 != t)))
                                                    _fail(t);
                                                  else
                                                    d_10 = t;
                                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(x_41), not_null(d_10), not_null(z_41));
                                                }
                                                ;
                                                LocalPopChoice(h_17);
                                              }
                                            else
                                              {
                                                t = e_17;
                                                {
                                                  ATerm w_14 = NULL,x_14 = NULL,d_15 = NULL;
                                                  t = y_41;
                                                  t = genzip_4_0(i_2, j_2, k_2, l_2, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      w_14 = ATgetArgument(t, 0);
                                                      x_14 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_14;
                                                  t = concat_0_0(t);
                                                  d_15 = t;
                                                  {
                                                    ATerm m_17 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = m_17;
                                                      }
                                                    t = (ATerm) ATmakeAppl(sym_Let_2, d_15, (ATerm) ATmakeAppl(sym_PrimT_3, x_41, w_14, z_41));
                                                  }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              x_41 = ATgetArgument(t, 0);
                                              y_41 = ATgetArgument(t, 1);
                                              z_41 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm n_17 = t;
                                            int o_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm b_18 = NULL;
                                                t = not_null(y_41);
                                                {
                                                  ATerm c_20 (ATerm t)
                                                  {
                                                    ATerm x_19 = NULL,z_19 = NULL,b_20 = NULL;
                                                    x_19 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        z_19 = ATgetFirst((ATermList) t);
                                                        b_20 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm p_17 = t;
                                                      int q_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_20 = NULL,v_20 = NULL,x_20 = NULL,r_6 = NULL;
                                                          t = SSLgetAnnotations(x_19);
                                                          s_20 = t;
                                                          t = z_19;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_g_14;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_j_14;
                                                            }
                                                          v_20 = t;
                                                          t = b_20;
                                                          {
                                                            ATerm r_17 = t;
                                                            int s_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = c_20(t);
                                                                ;
                                                                LocalPopChoice(s_17);
                                                              }
                                                            else
                                                              {
                                                                t = r_17;
                                                              }
                                                            x_20 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(x_20), v_20);
                                                            r_6 = t;
                                                            t = SSLsetAnnotations(r_6, s_20);
                                                          }
                                                          ;
                                                          LocalPopChoice(q_17);
                                                        }
                                                      else
                                                        {
                                                          t = p_17;
                                                          {
                                                            ATerm i_21 = NULL,n_21 = NULL,s_6 = NULL;
                                                            t = SSLgetAnnotations(x_19);
                                                            i_21 = t;
                                                            t = b_20;
                                                            t = c_20(t);
                                                            n_21 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(n_21), z_19);
                                                            s_6 = t;
                                                            t = SSLsetAnnotations(s_6, i_21);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = c_20(t);
                                                  if(((b_18 != NULL) && (b_18 != t)))
                                                    _fail(t);
                                                  else
                                                    b_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(x_41), not_null(b_18), not_null(z_41));
                                                }
                                                ;
                                                LocalPopChoice(o_17);
                                              }
                                            else
                                              {
                                                t = n_17;
                                                {
                                                  ATerm u_22 = NULL,v_22 = NULL,a_23 = NULL;
                                                  t = y_41;
                                                  t = genzip_4_0(m_2, o_2, p_2, q_2, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      u_22 = ATgetArgument(t, 0);
                                                      v_22 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = v_22;
                                                  t = concat_0_0(t);
                                                  a_23 = t;
                                                  {
                                                    ATerm t_17 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = t_17;
                                                      }
                                                    t = (ATerm) ATmakeAppl(sym_Let_2, a_23, (ATerm) ATmakeAppl(sym_CallT_3, x_41, u_22, z_41));
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
ATerm t_2 (ATerm t)
{
  ATerm u_17 = t;
  if((PushChoice() == 0))
    {
      ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,g_7 = NULL;
      c_44 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_44);
      a_44 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_44);
      g_7 = t;
      t = SSLsetAnnotations(g_7, a_44);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_17;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_13;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_44 = ATgetFirst((ATermList) t);
      e_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_44, e_44);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      if(match_cons(v_17, sym__2))
        {
          f_44 = ATgetArgument(v_17, 0);
          g_44 = ATgetArgument(v_17, 1);
        }
      else
        _fail(t);
      {
        ATerm a_18 = ATgetArgument(t, 1);
        if(match_cons(a_18, sym__2))
          {
            h_44 = ATgetArgument(a_18, 0);
            i_44 = ATgetArgument(a_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_44), f_44), (ATerm) ATinsert(CheckATermList(i_44), g_44));
  return(t);
}
ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_13;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_44 = ATgetFirst((ATermList) t);
      k_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_44, k_44);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_18 = ATgetArgument(t, 0);
      if(match_cons(c_18, sym__2))
        {
          l_44 = ATgetArgument(c_18, 0);
          m_44 = ATgetArgument(c_18, 1);
        }
      else
        _fail(t);
      {
        ATerm d_18 = ATgetArgument(t, 1);
        if(match_cons(d_18, sym__2))
          {
            n_44 = ATgetArgument(d_18, 0);
            o_44 = ATgetArgument(d_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_44), l_44), (ATerm) ATinsert(CheckATermList(o_44), m_44));
  return(t);
}
ATerm t_5 (ATerm i_88, ATerm j_88, ATerm k_88, ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,h_7 = NULL;
  t = k_88;
  t = fetch_1_0(t_2, t);
  t = k_88;
  t = genzip_4_0(u_2, v_2, w_2, LiftPrimArg_0_0, t);
  z_43 = t;
  if(match_cons(t, sym__2))
    {
      v_43 = ATgetArgument(t, 0);
      w_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_43);
  u_43 = t;
  t = v_43;
  t = concat_0_0(t);
  x_43 = t;
  t = w_43;
  t = genzip_4_0(x_2, y_2, z_2, _id, t);
  y_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_43, y_43);
  h_7 = t;
  t = SSLsetAnnotations(h_7, u_43);
  if(match_cons(t, sym__2))
    {
      r_43 = ATgetArgument(t, 0);
      {
        ATerm e_18 = ATgetArgument(t, 1);
        if(match_cons(e_18, sym__2))
          {
            s_43 = ATgetArgument(e_18, 0);
            t_43 = ATgetArgument(e_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, r_43, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_43), (ATerm) ATmakeAppl(sym_CallT_3, i_88, j_88, t_43)));
  return(t);
}
ATerm genzip_4_0 (ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm z_137 (ATerm), ATerm a_138 (ATerm), ATerm t)
{
  ATerm w_44 (ATerm t)
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_137(t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,k_7 = NULL;
          t = y_137(t);
          v_44 = t;
          if(match_cons(t, sym__2))
            {
              r_44 = ATgetArgument(t, 0);
              s_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_44);
          q_44 = t;
          t = r_44;
          t = a_138(t);
          t_44 = t;
          t = s_44;
          t = w_44(t);
          u_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_44, u_44);
          k_7 = t;
          t = SSLsetAnnotations(k_7, q_44);
          t = z_137(t);
        }
      }
    return(t);
  }
  t = w_44(t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm k_45 (ATerm t)
  {
    ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
    j_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_45 = ATgetFirst((ATermList) t);
        i_45 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_25 = NULL,w_25 = NULL,n_7 = NULL;
          t = SSLgetAnnotations(j_45);
          t_25 = t;
          t = i_45;
          t = k_45(t);
          w_25 = t;
          t = (ATerm) ATinsert(CheckATermList(w_25), h_45);
          n_7 = t;
          t = SSLsetAnnotations(n_7, t_25);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_45;
        t = k_136(t);
      }
    return(t);
  }
  t = k_45(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_45;
    }
  else
    {
      ATerm a_3 (ATerm t)
      {
        t = not_null(p_45);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_45 != NULL) && (o_45 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_45 = ATgetFirst((ATermList) t);
          if(((p_45 != NULL) && (p_45 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(o_45);
      t = at_end_1_0(a_3, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm e_46 (ATerm v_45, ATerm t)
{
  ATerm x_45 = NULL;
  t = v_45;
  {
    ATerm h_18 = t;
    if((PushChoice() == 0))
      {
        ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,q_7 = NULL;
        a_46 = t;
        if(match_cons(t, sym_Var_1))
          {
            z_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_46);
        y_45 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, z_45);
        q_7 = t;
        t = SSLsetAnnotations(q_7, y_45);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_18;
      }
    t = new_0_0(t);
    x_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, x_45), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_45), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_45)))), (ATerm) ATmakeAppl(sym_Var_1, x_45)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL;
  b_46 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_46 = ATgetArgument(t, 0);
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_46(b_46, t);
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATmakeAppl(sym_Var_1, c_46)));
          }
      }
    }
  else
    {
      t = e_46(b_46, t);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm k_18 = t;
  if((PushChoice() == 0))
    {
      ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,w_7 = NULL;
      y_26 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_26);
      w_26 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, x_26);
      w_7 = t;
      t = SSLsetAnnotations(w_7, w_26);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_18;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_13;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_26 = ATgetFirst((ATermList) t);
      a_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_26, a_27);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_18 = ATgetArgument(t, 0);
      if(match_cons(l_18, sym__2))
        {
          d_27 = ATgetArgument(l_18, 0);
          e_27 = ATgetArgument(l_18, 1);
        }
      else
        _fail(t);
      {
        ATerm m_18 = ATgetArgument(t, 1);
        if(match_cons(m_18, sym__2))
          {
            f_27 = ATgetArgument(m_18, 0);
            g_27 = ATgetArgument(m_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_27), d_27), (ATerm) ATinsert(CheckATermList(g_27), e_27));
  return(t);
}
ATerm o_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_13;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm h_27 = NULL,k_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_27 = ATgetFirst((ATermList) t);
      k_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_27, k_27);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm l_27 = NULL,q_27 = NULL,r_27 = NULL,u_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_18 = ATgetArgument(t, 0);
      if(match_cons(n_18, sym__2))
        {
          l_27 = ATgetArgument(n_18, 0);
          q_27 = ATgetArgument(n_18, 1);
        }
      else
        _fail(t);
      {
        ATerm o_18 = ATgetArgument(t, 1);
        if(match_cons(o_18, sym__2))
          {
            r_27 = ATgetArgument(o_18, 0);
            u_27 = ATgetArgument(o_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_27), l_27), (ATerm) ATinsert(CheckATermList(u_27), q_27));
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm p_18 = t;
  if((PushChoice() == 0))
    {
      ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,z_7 = NULL;
      v_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_28);
      t_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_28);
      z_7 = t;
      t = SSLsetAnnotations(z_7, t_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_18;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_13;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_28 = ATgetFirst((ATermList) t);
      x_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      if(match_cons(q_18, sym__2))
        {
          y_28 = ATgetArgument(q_18, 0);
          z_28 = ATgetArgument(q_18, 1);
        }
      else
        _fail(t);
      {
        ATerm r_18 = ATgetArgument(t, 1);
        if(match_cons(r_18, sym__2))
          {
            a_29 = ATgetArgument(r_18, 0);
            b_29 = ATgetArgument(r_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_29), y_28), (ATerm) ATinsert(CheckATermList(b_29), z_28));
  return(t);
}
ATerm v_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_13;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_29 = ATgetFirst((ATermList) t);
      d_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_29, d_29);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(match_cons(s_18, sym__2))
        {
          e_29 = ATgetArgument(s_18, 0);
          f_29 = ATgetArgument(s_18, 1);
        }
      else
        _fail(t);
      {
        ATerm t_18 = ATgetArgument(t, 1);
        if(match_cons(t_18, sym__2))
          {
            g_29 = ATgetArgument(t_18, 0);
            h_29 = ATgetArgument(t_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_29), e_29), (ATerm) ATinsert(CheckATermList(h_29), f_29));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
  v_50 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_50 = ATgetArgument(t, 0);
      x_50 = ATgetArgument(t, 1);
      u_50 = ATgetArgument(t, 2);
      {
        ATerm i_26 = NULL,l_26 = NULL,m_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,x_7 = NULL;
        t = u_50;
        t = fetch_1_0(e_3, t);
        t = u_50;
        t = genzip_4_0(h_3, m_3, n_3, LiftPrimArg_0_0, t);
        v_26 = t;
        if(match_cons(t, sym__2))
          {
            q_26 = ATgetArgument(t, 0);
            r_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_26);
        p_26 = t;
        t = q_26;
        t = concat_0_0(t);
        t_26 = t;
        t = r_26;
        t = genzip_4_0(o_3, p_3, q_3, _id, t);
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
        x_7 = t;
        t = SSLsetAnnotations(x_7, p_26);
        if(match_cons(t, sym__2))
          {
            i_26 = ATgetArgument(t, 0);
            {
              ATerm u_18 = ATgetArgument(t, 1);
              if(match_cons(u_18, sym__2))
                {
                  l_26 = ATgetArgument(u_18, 0);
                  m_26 = ATgetArgument(u_18, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_26, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_26), (ATerm) ATmakeAppl(sym_PrimT_3, w_50, x_50, m_26)));
      }
    }
  else
    {
      ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,a_8 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          w_50 = ATgetArgument(t, 0);
          x_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_50;
      t = fetch_1_0(r_3, t);
      t = x_50;
      t = genzip_4_0(s_3, t_3, u_3, LiftPrimArg_0_0, t);
      s_28 = t;
      if(match_cons(t, sym__2))
        {
          o_28 = ATgetArgument(t, 0);
          p_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_28);
      n_28 = t;
      t = o_28;
      t = concat_0_0(t);
      q_28 = t;
      t = p_28;
      t = genzip_4_0(v_3, y_3, z_3, _id, t);
      r_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_28, r_28);
      a_8 = t;
      t = SSLsetAnnotations(a_8, n_28);
      if(match_cons(t, sym__2))
        {
          k_28 = ATgetArgument(t, 0);
          {
            ATerm v_18 = ATgetArgument(t, 1);
            if(match_cons(v_18, sym__2))
              {
                l_28 = ATgetArgument(v_18, 0);
                m_28 = ATgetArgument(v_18, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_28), (ATerm) ATmakeAppl(sym_PrimT_3, w_50, (ATerm)ATempty, m_28)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm i_130 (ATerm), ATerm j_130 (ATerm), ATerm t)
{
  t = i_130(t);
  {
    ATerm a_4 (ATerm t)
    {
      t = downup2_2_0(i_130, j_130, t);
      return(t);
    }
    t = SRTS_all(a_4, t);
    t = j_130(t);
  }
  return(t);
}
ATerm y_5 (ATerm g_68, ATerm h_68, ATerm t)
{
  ATerm a_51 = NULL;
  t = SSL_fputc(g_68, h_68);
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_51);
  return(t);
}
ATerm z_5 (ATerm u_71, ATerm v_71, ATerm t)
{
  ATerm b_51 = NULL;
  t = SSL_write_term_to_stream_text(u_71, v_71);
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_51);
  return(t);
}
ATerm b_6 (ATerm c_148 (ATerm), ATerm d_478, ATerm y_71, ATerm t)
{
  ATerm c_51 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_478, term_w_18);
  t = open_stream_0_0(t);
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_51, y_71);
  t = c_148(t);
  t = fclose_0_0(t);
  t = y_71;
  return(t);
}
ATerm a_6 (ATerm q_71, ATerm r_71, ATerm t)
{
  ATerm d_51 = NULL;
  t = SSL_write_term_to_stream_baf(q_71, r_71);
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_51);
  return(t);
}
ATerm g_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_18 = ATgetArgument(t, 0);
      if(match_cons(x_18, sym_Stream_1))
        {
          f_30 = ATgetArgument(x_18, 0);
        }
      else
        _fail(t);
      g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(f_30, g_30, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm z_30 = NULL,b_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if(match_cons(y_18, sym_Stream_1))
        {
          g_31 = ATgetArgument(y_18, 0);
        }
      else
        _fail(t);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(g_31, h_31, t);
  z_30 = t;
  t = term_z_18;
  b_31 = t;
  t = z_30;
  if(match_cons(t, sym_Stream_1))
    {
      f_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_18, z_30);
  t = y_5(b_31, f_31, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,t_52 = NULL,u_52 = NULL,h_8 = NULL,g_8 = NULL;
  if(((k_51 != NULL) && (k_51 != t)))
    _fail(t);
  else
    k_51 = t;
  if(match_cons(t, sym__2))
    {
      if(((r_51 != NULL) && (r_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_51 = ATgetArgument(t, 0);
      if(((s_51 != NULL) && (s_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(k_51));
  if(((q_51 != NULL) && (q_51 != t)))
    _fail(t);
  else
    q_51 = t;
  t = not_null(r_51);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_4 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((j_51 != NULL) && (j_51 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(d_4, t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = term_c_19;
        if(((j_51 != NULL) && (j_51 != t)))
          _fail(t);
        else
          j_51 = t;
      }
    if(((t_51 != NULL) && (t_51 != t)))
      _fail(t);
    else
      t_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_51), not_null(s_51));
    if(((g_8 != NULL) && (g_8 != t)))
      _fail(t);
    else
      g_8 = t;
    t = SSLsetAnnotations(not_null(g_8), not_null(q_51));
    t = not_null(k_51);
    if(match_cons(t, sym__2))
      {
        if(((m_51 != NULL) && (m_51 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          m_51 = ATgetArgument(t, 0);
        if(((n_51 != NULL) && (n_51 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          n_51 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(k_51));
    if(((l_51 != NULL) && (l_51 != t)))
      _fail(t);
    else
      l_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_51), (ATerm) ATmakeAppl(sym__2, not_null(j_51), not_null(n_51)));
    if(((h_8 != NULL) && (h_8 != t)))
      _fail(t);
    else
      h_8 = t;
    t = SSLsetAnnotations(not_null(h_8), not_null(l_51));
    if(((p_51 != NULL) && (p_51 != t)))
      _fail(t);
    else
      p_51 = t;
    if(match_cons(t, sym__2))
      {
        if(((t_52 != NULL) && (t_52 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          t_52 = ATgetArgument(t, 0);
        if(((u_52 != NULL) && (u_52 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          u_52 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm d_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_29 = NULL,w_29 = NULL,x_29 = NULL,b_30 = NULL,c_30 = NULL,i_8 = NULL;
          t = SSLgetAnnotations(not_null(p_51));
          t_29 = t;
          t = not_null(t_52);
          t = fetch_1_0(g_4, t);
          w_29 = t;
          t = not_null(u_52);
          if(match_cons(t, sym__2))
            {
              b_30 = ATgetArgument(t, 0);
              c_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_6(h_4, b_30, c_30, t);
          x_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_29, x_29);
          i_8 = t;
          t = SSLsetAnnotations(i_8, t_29);
          ;
          LocalPopChoice(e_19);
        }
      else
        {
          t = d_19;
          {
            ATerm l_30 = NULL,p_30 = NULL,t_30 = NULL,y_30 = NULL,j_8 = NULL;
            t = SSLgetAnnotations(not_null(p_51));
            l_30 = t;
            t = not_null(u_52);
            if(match_cons(t, sym__2))
              {
                t_30 = ATgetArgument(t, 0);
                y_30 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_6(i_4, t_30, y_30, t);
            p_30 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_52), p_30);
            j_8 = t;
            t = SSLsetAnnotations(j_8, l_30);
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
ATerm apply_strategy_1_0 (ATerm e_151 (ATerm), ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL;
  b_53 = t;
  t = dtime_0_0(t);
  t = b_53;
  t = e_151(t);
  a_53 = t;
  t = dtime_0_0(t);
  x_52 = t;
  t = a_53;
  if(match_cons(t, sym__2))
    {
      y_52 = ATgetArgument(t, 0);
      z_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_52), (ATerm) ATmakeAppl(sym_Runtime_1, x_52)), z_52);
  return(t);
}
ATerm p_53 (ATerm j_53, ATerm t)
{
  t = SSL_fclose(j_53);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL;
  n_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_53 = ATgetArgument(t, 0);
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_53);
            ;
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            t = p_53(n_53, t);
          }
      }
    }
  else
    {
      t = p_53(n_53, t);
    }
  return(t);
}
ATerm c_6 (ATerm w_71, ATerm t)
{
  t = SSL_read_term_from_stream(w_71);
  return(t);
}
ATerm d_6 (ATerm i_68, ATerm j_68, ATerm t)
{
  ATerm q_53 = NULL;
  t = SSL_fopen(i_68, j_68);
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_53);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_53 = NULL;
  t = SSL_stdin_stream();
  r_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_53);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_53 = NULL;
  t = SSL_stdout_stream();
  s_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_53);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_53 = NULL;
  t = SSL_stderr_stream();
  t_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_53);
  return(t);
}
ATerm a_55 (ATerm z_53, ATerm t)
{
  ATerm a_54 = NULL;
  t = SSL_explode_term(z_53);
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_19 = ATgetArgument(t, 1);
        if(((ATgetType(i_19) == AT_LIST) && !(ATisEmpty(i_19))))
          {
            a_54 = ATgetFirst((ATermList) i_19);
            {
              ATerm j_19 = (ATerm) ATgetNext((ATermList) i_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_54;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_54;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_54;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_54;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_55 (ATerm d_54, ATerm e_54, ATerm f_54, ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,l_54 = NULL,w_8 = NULL;
  t = SSLgetAnnotations(f_54);
  i_54 = t;
  t = d_54;
  if(match_cons(t, sym_Path_1))
    {
      l_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_54, e_54);
  w_8 = t;
  t = SSLsetAnnotations(w_8, i_54);
  if(match_cons(t, sym__2))
    {
      g_54 = ATgetArgument(t, 0);
      h_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(g_54, h_54, t);
  return(t);
}
ATerm c_55 (ATerm n_54, ATerm o_54, ATerm p_54, ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL,v_54 = NULL,x_8 = NULL;
  t = SSLgetAnnotations(p_54);
  s_54 = t;
  t = SSL_is_string(n_54);
  v_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_54, o_54);
  x_8 = t;
  t = SSLsetAnnotations(x_8, s_54);
  if(match_cons(t, sym__2))
    {
      q_54 = ATgetArgument(t, 0);
      r_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(q_54, r_54, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      ATerm l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_54 = t;
  if(match_cons(t, sym__2))
    {
      y_54 = ATgetArgument(t, 0);
      z_54 = ATgetArgument(t, 1);
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_55(x_54, t);
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            {
              ATerm o_19 = t;
              int p_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_55(y_54, z_54, x_54, t);
                  ;
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = o_19;
                  t = c_55(y_54, z_54, x_54, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_55(x_54, t);
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_55 = NULL;
      g_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_55, term_t_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
      t = debug_1_0(j_4, t);
      _fail(t);
    }
  e_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(f_55, t);
  d_55 = t;
  t = e_55;
  t = fclose_0_0(t);
  t = d_55;
  return(t);
}
ATerm fetch_1_0 (ATerm e_136 (ATerm), ATerm t)
{
  ATerm e_56 (ATerm t)
  {
    ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
    b_56 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_56 = ATgetFirst((ATermList) t);
        d_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_19 = t;
      int v_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_32 = NULL,d_32 = NULL,c_9 = NULL;
          t = SSLgetAnnotations(b_56);
          a_32 = t;
          t = c_56;
          t = e_136(t);
          d_32 = t;
          t = (ATerm) ATinsert(CheckATermList(d_56), d_32);
          c_9 = t;
          t = SSLsetAnnotations(c_9, a_32);
          ;
          LocalPopChoice(v_19);
        }
      else
        {
          t = u_19;
          {
            ATerm t_32 = NULL,w_32 = NULL,d_9 = NULL;
            t = SSLgetAnnotations(b_56);
            t_32 = t;
            t = d_56;
            t = e_56(t);
            w_32 = t;
            t = (ATerm) ATinsert(CheckATermList(w_32), c_56);
            d_9 = t;
            t = SSLsetAnnotations(d_9, t_32);
          }
        }
    }
    return(t);
  }
  t = e_56(t);
  return(t);
}
ATerm x_5 (ATerm k_63, ATerm l_63, ATerm t)
{
  t = SSL_strcat(k_63, l_63);
  return(t);
}
ATerm debug_1_0 (ATerm a_148 (ATerm), ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL;
  h_56 = t;
  t = a_148(t);
  i_56 = t;
  t = term_q_8;
  j_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_56), i_56);
  k_56 = t;
  t = SSL_printnl(j_56, k_56);
  t = h_56;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm w_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = w_19;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_56 = NULL;
      r_56 = t;
      t = SSL_is_string(r_56);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_4, t);
            ;
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            {
              ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
              z_56 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_57 = ATgetArgument(t, 0);
                  t = a_57;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_57 = ATgetArgument(t, 0);
                      t = a_57;
                      {
                        ATerm h_20 = t;
                        int i_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_20);
                          }
                        else
                          {
                            t = h_20;
                            t = debug_1_0(l_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_57 = NULL,g_57 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_57 = ATgetArgument(t, 0);
                          b_57 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_57;
                      t = eval_config_0_0(t);
                      f_57 = t;
                      t = b_57;
                      t = eval_config_0_0(t);
                      g_57 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_57, g_57);
                      t = x_5(f_57, g_57, t);
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
  ATerm k_57 = NULL,l_57 = NULL;
  k_57 = t;
  t = term_l_20;
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, k_57);
  t = g_6(l_57, k_57, t);
  {
    ATerm m_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_57 = NULL,n_57 = NULL;
        t = eval_config_0_0(t);
        m_57 = t;
        t = term_l_20;
        n_57 = t;
        t = SSL_table_put(n_57, k_57, m_57);
        t = m_57;
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = m_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_149 (ATerm), ATerm t)
{
  ATerm r_57 = NULL;
  r_57 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_57 = NULL;
        t = term_r_20;
        t = get_config_0_0(t);
        t_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_57, term_t_20);
        t = geq_0_0(t);
        t = r_57;
        t = n_149(t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = r_57;
      }
  }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm w_57 = NULL;
  w_57 = t;
  if(match_string(t, "-k"))
    {
      t = w_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_57;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
  x_57 = t;
  t = SSL_string_to_int(x_57);
  y_57 = t;
  t = term_u_20;
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_20, y_57);
  t = j_6(z_57, y_57, t);
  t = x_57;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_w_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, n_4, t_4, t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm b_58 = NULL;
  b_58 = t;
  if(match_string(t, "-S"))
    {
      t = b_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_58;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  t = term_r_20;
  c_58 = t;
  t = term_y_20;
  d_58 = t;
  t = term_z_20;
  t = j_6(c_58, d_58, t);
  t = term_a_21;
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
  e_58 = t;
  t = SSL_string_to_int(e_58);
  f_58 = t;
  t = term_r_20;
  g_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, f_58);
  t = j_6(g_58, f_58, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_58);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  t = term_d_21;
  h_58 = t;
  t = term_o_8;
  i_58 = t;
  t = term_e_21;
  t = j_6(h_58, i_58, t);
  t = term_f_21;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_g_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_4, y_4, d_5, t);
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = h_21;
      {
        ATerm m_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_5, h_5, i_5, t);
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = m_21;
            t = Option_3_0(j_5, k_5, l_5, t);
          }
      }
    }
  return(t);
}
ATerm j_6 (ATerm x_72, ATerm y_72, ATerm t)
{
  ATerm j_58 = NULL;
  t = term_l_20;
  j_58 = t;
  t = SSL_table_put(j_58, x_72, y_72);
  t = (ATerm) ATmakeAppl(sym__3, term_l_20, x_72, y_72);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL;
      t = term_o_8;
      t = d_0(t);
      o_58 = t;
      t = term_r_21;
      p_58 = t;
      t = term_u_21;
      q_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_21, term_u_21, o_58);
      t = h_6(p_58, q_58, o_58, t);
      _fail(t);
    }
  else
    {
      ATerm t_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_58 = ATgetFirst((ATermList) t);
          n_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_58;
      t = a_0(t);
      t = term_o_8;
      t = b_0(t);
      t_58 = t;
      t = (ATerm) ATinsert(CheckATermList(n_58), t_58);
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm v_58 = NULL;
  v_58 = t;
  if(match_string(t, "-o"))
    {
      t = v_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_58;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL;
  w_58 = t;
  t = term_v_21;
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_21, w_58);
  t = j_6(x_58, w_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_58);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
ATerm h_6 (ATerm v_77, ATerm w_77, ATerm u_77, ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
  z_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_77, w_77);
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_21 = ATgetArgument(t, 0);
            ATerm a_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_77, w_77);
        t = g_6(v_77, w_77, t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = (ATerm) ATempty;
      }
    a_59 = t;
    t = (ATerm) ATinsert(CheckATermList(a_59), u_77);
    b_59 = t;
    t = SSL_table_put(v_77, w_77, b_59);
    t = z_58;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL;
      t = term_o_8;
      t = m_0(t);
      m_59 = t;
      t = term_r_21;
      n_59 = t;
      t = term_u_21;
      o_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_21, term_u_21, m_59);
      t = h_6(n_59, o_59, m_59, t);
      _fail(t);
    }
  else
    {
      ATerm s_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_59 = ATgetFirst((ATermList) t);
          j_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_59 = ATgetFirst((ATermList) t);
          l_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_59;
      t = i_0(t);
      t = k_59;
      t = k_0(t);
      s_59 = t;
      t = (ATerm) ATinsert(CheckATermList(l_59), s_59);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm u_59 = NULL;
  u_59 = t;
  if(match_string(t, "-i"))
    {
      t = u_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_59;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL;
  v_59 = t;
  t = term_b_22;
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_22, v_59);
  t = j_6(w_59, v_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_59);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, s_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_8;
  t = whoami_0_0(t);
  x_59 = t;
  t = term_q_8;
  z_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_22), x_59);
  a_60 = t;
  t = SSL_printnl(z_59, a_60);
  t = term_v_8;
  y_59 = t;
  t = SSL_exit(y_59);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_22;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_6 (ATerm u_65, ATerm v_65, ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_65, v_65);
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      t = SSL_addr(u_65, v_65);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL;
  c_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_60;
      t = x_141(t);
    }
  else
    {
      ATerm h_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_60 = ATgetFirst((ATermList) t);
          e_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_60;
      t = foldr_2_0(x_141, y_141, t);
      h_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_60, h_60);
      t = y_141(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(n_33, o_33, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_60 = NULL,j_33 = NULL,k_33 = NULL;
  t = times_0_0(t);
  k_33 = t;
  t = SSL_explode_term(k_33);
  if(match_cons(t, sym__2))
    {
      ATerm h_22 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_33;
  t = foldr_2_0(u_5, w_5, t);
  k_60 = t;
  t = SSL_TicksToSeconds(k_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL;
  v_60 = t;
  if(match_cons(t, sym__2))
    {
      w_60 = ATgetArgument(t, 0);
      x_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_60;
        if((w_60 != t))
          {
            _fail(t);
          }
        t = v_60;
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = (ATerm) ATmakeAppl(sym__2, w_60, x_60);
        {
          ATerm k_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_60, x_60);
              ;
              LocalPopChoice(l_22);
            }
          else
            {
              t = k_22;
              t = SSL_gtr(w_60, x_60);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_60, x_60);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_149 (ATerm), ATerm t)
{
  ATerm b_61 = NULL;
  b_61 = t;
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_61 = NULL;
        t = term_r_20;
        t = get_config_0_0(t);
        d_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_61, term_v_8);
        t = geq_0_0(t);
        t = b_61;
        t = m_149(t);
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        t = b_61;
      }
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL,i_61 = NULL,j_61 = NULL;
  t = run_time_0_0(t);
  f_61 = t;
  t = term_o_8;
  t = whoami_0_0(t);
  g_61 = t;
  t = term_q_8;
  i_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_22), f_61), term_p_22), g_61);
  j_61 = t;
  t = SSL_printnl(i_61, j_61);
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_22), f_61), term_p_22), g_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_20;
  k_61 = t;
  t = SSL_exit(k_61);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL;
  t_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_61 = ATgetArgument(t, 0);
          {
            ATerm a_34 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(t_61);
            a_34 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_61);
            g_9 = t;
            t = SSLsetAnnotations(g_9, a_34);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_152 (ATerm), ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      t = fetch_1_0(i_6, t);
    }
  t = c_152(t);
  return(t);
}
ATerm map_1_0 (ATerm u_135 (ATerm), ATerm t)
{
  ATerm j_62 (ATerm t)
  {
    ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
    g_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_62;
      }
    else
      {
        ATerm i_34 = NULL,l_34 = NULL,m_34 = NULL,i_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_62 = ATgetFirst((ATermList) t);
            i_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_62);
        i_34 = t;
        t = h_62;
        t = u_135(t);
        l_34 = t;
        t = i_62;
        t = j_62(t);
        m_34 = t;
        t = (ATerm) ATinsert(CheckATermList(m_34), l_34);
        i_9 = t;
        t = SSLsetAnnotations(i_9, i_34);
      }
    return(t);
  }
  t = j_62(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_62 = ATgetFirst((ATermList) t);
      n_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_62 = NULL,s_62 = NULL;
        ATerm k_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_62)), not_null(s_62));
          return(t);
        }
        t = not_null(n_62);
        t = g_0(t);
        if(((r_62 != NULL) && (r_62 != t)))
          _fail(t);
        else
          r_62 = t;
        t = not_null(m_62);
        t = f_0(t);
        if(((s_62 != NULL) && (s_62 != t)))
          _fail(t);
        else
          s_62 = t;
        t = not_null(n_62);
        t = reverse_acc_2_0(f_0, k_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_8;
      t = g_0(t);
    }
  return(t);
}
ATerm g_6 (ATerm m_79, ATerm n_79, ATerm t)
{
  t = SSL_table_get(m_79, n_79);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,k_9 = NULL;
  y_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_62);
  w_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_62);
  k_9 = t;
  t = SSLsetAnnotations(k_9, w_62);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm a_63 = NULL;
  a_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_63), term_e_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL;
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = fetch_1_0(o_6, t);
    }
  t = term_i_23;
  t = echo_0_0(t);
  t = term_r_21;
  u_62 = t;
  t = term_u_21;
  v_62 = t;
  t = term_n_23;
  t = g_6(u_62, v_62, t);
  t = reverse_acc_2_0(_id, q_6, t);
  t = map_1_0(v_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL;
  c_63 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_23 = ATgetFirst((ATermList) t);
                ATerm u_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_63;
          }
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = (ATerm) ATinsert(ATempty, c_63);
      }
    d_63 = t;
    t = term_c_19;
    e_63 = t;
    t = SSL_printnl(e_63, d_63);
    t = c_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_22;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL;
  t = term_w_23;
  i_63 = t;
  t = term_o_8;
  j_63 = t;
  t = term_x_23;
  t = j_6(i_63, j_63, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL;
  t = term_w_23;
  o_63 = t;
  t = term_o_8;
  p_63 = t;
  t = term_x_23;
  t = j_6(o_63, p_63, t);
  t = term_b_24;
  m_63 = t;
  t = term_o_8;
  n_63 = t;
  t = term_g_24;
  t = j_6(m_63, n_63, t);
  t = term_h_24;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_6, y_6, z_6, t);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = Option_3_0(a_7, c_7, d_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t)
{
  ATerm q_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,e_10 = NULL;
  w_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_63 = ATgetFirst((ATermList) t);
      t_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_63);
  q_63 = t;
  t = s_63;
  t = f_107(t);
  u_63 = t;
  t = t_63;
  t = g_107(t);
  v_63 = t;
  t = (ATerm) ATinsert(CheckATermList(v_63), u_63);
  e_10 = t;
  t = SSLsetAnnotations(e_10, q_63);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_154 (ATerm), ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,g_64 = NULL,h_64 = NULL,k_10 = NULL;
  if(((b_64 != NULL) && (b_64 != t)))
    _fail(t);
  else
    b_64 = t;
  {
    ATerm n_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_24;
        t = f_154(t);
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = n_24;
      }
    t = not_null(b_64);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_64 != NULL) && (d_64 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_64 = ATgetFirst((ATermList) t);
        if(((e_64 != NULL) && (e_64 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_64 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(b_64));
    if(((c_64 != NULL) && (c_64 != t)))
      _fail(t);
    else
      c_64 = t;
    t = term_e_22;
    if(((h_64 != NULL) && (h_64 != t)))
      _fail(t);
    else
      h_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_22, not_null(d_64));
    t = j_6(not_null(h_64), not_null(d_64), t);
    t = not_null(e_64);
    {
      ATerm r_64 (ATerm t)
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_24 = t;
            int z_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_64 = NULL;
                k_64 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_64;
                ;
                LocalPopChoice(z_24);
              }
            else
              {
                t = y_24;
                t = f_154(t);
                t = Cons_2_0(_id, r_64, t);
              }
            ;
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            {
              ATerm n_64 = NULL,o_64 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_64 = ATgetFirst((ATermList) t);
                  o_64 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_64), (ATerm) ATmakeAppl(sym_Undefined_1, n_64));
            }
          }
        return(t);
      }
      t = r_64(t);
      if(((g_64 != NULL) && (g_64 != t)))
        _fail(t);
      else
        g_64 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(g_64)), (ATerm) ATmakeAppl(sym_Program_1, not_null(d_64)));
      if(((k_10 != NULL) && (k_10 != t)))
        _fail(t);
      else
        k_10 = t;
      t = SSLsetAnnotations(not_null(k_10), not_null(c_64));
    }
  }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm d_65 = NULL;
  d_65 = t;
  if(match_string(t, "--help"))
    {
      t = d_65;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_65;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_65;
        }
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL;
  t = term_z_22;
  e_65 = t;
  t = term_o_8;
  f_65 = t;
  t = term_b_25;
  t = j_6(e_65, f_65, t);
  t = term_e_25;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm o_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_154 (ATerm), ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL;
  if(((y_64 != NULL) && (y_64 != t)))
    _fail(t);
  else
    y_64 = t;
  t = term_r_21;
  if(((a_65 != NULL) && (a_65 != t)))
    _fail(t);
  else
    a_65 = t;
  t = term_u_21;
  if(((b_65 != NULL) && (b_65 != t)))
    _fail(t);
  else
    b_65 = t;
  t = (ATerm) ATempty;
  if(((c_65 != NULL) && (c_65 != t)))
    _fail(t);
  else
    c_65 = t;
  t = SSL_table_put(not_null(a_65), not_null(b_65), not_null(c_65));
  t = not_null(y_64);
  {
    ATerm f_7 (ATerm t)
    {
      ATerm h_25 = t;
      int i_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_154(t);
          ;
          LocalPopChoice(i_25);
        }
      else
        {
          t = h_25;
          {
            ATerm l_25 = t;
            int m_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_7, j_7, m_7, t);
                ;
                LocalPopChoice(m_25);
              }
            else
              {
                t = l_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_7, t);
    {
      ATerm n_25 = t;
      int o_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_65 = NULL;
          m_65 = t;
          {
            ATerm p_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_34 = NULL;
                t = m_65;
                {
                  ATerm r_25 = t;
                  int s_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_z_22;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(s_25);
                    }
                  else
                    {
                      t = r_25;
                      t = fetch_1_0(o_7, t);
                    }
                  t = m_65;
                  t = default_system_usage_0_0(t);
                  t = term_y_20;
                  t_34 = t;
                  t = SSL_exit(t_34);
                }
                ;
                LocalPopChoice(q_25);
              }
            else
              {
                t = p_25;
                {
                  ATerm x_34 = NULL;
                  t = term_w_23;
                  t = get_config_0_0(t);
                  t = m_65;
                  t = default_system_about_0_0(t);
                  t = term_y_20;
                  x_34 = t;
                  t = SSL_exit(x_34);
                }
              }
          }
          ;
          LocalPopChoice(o_25);
        }
      else
        {
          t = n_25;
          {
            ATerm u_25 = t;
            int v_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL;
                ATerm p_7 (ATerm t)
                {
                  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL,o_10 = NULL;
                  s_65 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      r_65 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_65);
                  q_65 = t;
                  t = r_65;
                  if(((w_64 != NULL) && (w_64 != t)))
                    _fail(t);
                  else
                    w_64 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_65);
                  o_10 = t;
                  t = SSLsetAnnotations(o_10, q_65);
                  return(t);
                }
                t = fetch_1_0(p_7, t);
                t = term_q_8;
                if(((o_65 != NULL) && (o_65 != t)))
                  _fail(t);
                else
                  o_65 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_64)), term_x_25);
                if(((p_65 != NULL) && (p_65 != t)))
                  _fail(t);
                else
                  p_65 = t;
                t = SSL_printnl(not_null(o_65), not_null(p_65));
                t = (ATerm) ATmakeAppl(sym__2, term_q_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_64)), term_x_25));
                t = default_system_usage_0_0(t);
                t = term_v_8;
                if(((n_65 != NULL) && (n_65 != t)))
                  _fail(t);
                else
                  n_65 = t;
                t = SSL_exit(not_null(n_65));
                ;
                LocalPopChoice(v_25);
              }
            else
              {
                t = u_25;
              }
          }
        }
      if(((x_64 != NULL) && (x_64 != t)))
        _fail(t);
      else
        x_64 = t;
      t = term_r_21;
      if(((z_64 != NULL) && (z_64 != t)))
        _fail(t);
      else
        z_64 = t;
      t = SSL_table_destroy(not_null(z_64));
      t = not_null(x_64);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_152 (ATerm), ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm h_152 (ATerm), ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL;
  t = parse_options_1_0(e_152, t);
  z_65 = t;
  t = term_y_25;
  c_66 = t;
  t = SSL_table_create(c_66);
  t = term_y_25;
  a_66 = t;
  t = term_z_25;
  b_66 = t;
  t = SSL_table_put(a_66, b_66, z_65);
  t = z_65;
  t = g_152(t);
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_152, t);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        {
          ATerm c_26 = t;
          int d_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_152(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_26);
            }
          else
            {
              t = c_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = if_verbose2_1_0(b_8, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm d_66 = NULL,e_66 = NULL;
  t = term_e_26;
  d_66 = t;
  t = term_o_8;
  e_66 = t;
  t = term_f_26;
  t = j_6(d_66, e_66, t);
  t = term_g_26;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL;
  f_66 = t;
  t = term_e_22;
  t = get_config_0_0(t);
  g_66 = t;
  t = term_q_8;
  h_66 = t;
  t = (ATerm) ATinsert(ATempty, g_66);
  i_66 = t;
  t = SSL_printnl(h_66, i_66);
  t = f_66;
  return(t);
}
ATerm iowrap_3_0 (ATerm n_151 (ATerm), ATerm o_151 (ATerm), ATerm p_151 (ATerm), ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm j_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_151(t);
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = j_26;
        {
          ATerm b_27 = t;
          int c_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(c_27);
            }
          else
            {
              t = b_27;
              {
                ATerm i_27 = t;
                int j_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_27);
                  }
                else
                  {
                    t = i_27;
                    {
                      ATerm m_27 = t;
                      int n_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_7, v_7, y_7, t);
                          ;
                          LocalPopChoice(n_27);
                        }
                      else
                        {
                          t = m_27;
                          {
                            ATerm o_27 = t;
                            int p_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(p_27);
                              }
                            else
                              {
                                t = o_27;
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
  ATerm t_7 (ATerm t)
  {
    ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
    if(((k_66 != NULL) && (k_66 != t)))
      _fail(t);
    else
      k_66 = t;
    {
      ATerm s_27 = t;
      int t_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_66 != NULL) && (j_66 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_66 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_8, t);
          ;
          LocalPopChoice(t_27);
        }
      else
        {
          t = s_27;
          t = term_v_27;
          if(((j_66 != NULL) && (j_66 != t)))
            _fail(t);
          else
            j_66 = t;
        }
      t = not_null(j_66);
      t = ReadFromFile_0_0(t);
      if(((l_66 != NULL) && (l_66 != t)))
        _fail(t);
      else
        l_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_66), not_null(l_66));
      t = apply_strategy_1_0(n_151, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(r_7, p_151, s_7, t_7, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_10 = NULL;
  r_66 = t;
  if(match_cons(t, sym__2))
    {
      o_66 = ATgetArgument(t, 0);
      p_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_66);
  n_66 = t;
  t = p_66;
  t = downup2_2_0(e_8, f_8, t);
  t = downup_1_0(n_8, t);
  q_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_66, q_66);
  s_10 = t;
  t = SSLsetAnnotations(s_10, n_66);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = repeat_1_0(m_8, t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = repeat_1_0(Canon_0_0, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Canon_0_0(t);
      ;
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            {
              ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL;
              s_66 = t;
              if(match_cons(t, sym_CallT_3))
                {
                  t_66 = ATgetArgument(t, 0);
                  u_66 = ATgetArgument(t, 1);
                  v_66 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_66;
              t = t_5(t_66, u_66, v_66, t);
            }
          }
      }
    }
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_8, _fail, default_usage_0_0, t);
  return(t);
}
