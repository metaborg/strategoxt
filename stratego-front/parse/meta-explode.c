#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_AsFix_0;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_opt_1;
Symbol sym_layout_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Conc_2;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Anno_2;
Symbol sym_Undefined_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
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
Symbol sym_Hashtable_1;
Symbol sym_SVar_1;
Symbol sym_AM_2;
Symbol sym_Path_2;
Symbol sym_BA_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_Call_2;
Symbol sym_Rule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_RootApp_1;
Symbol sym_Anno_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToBuild_1;
Symbol sym_FromApp_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_WithAnno_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_SVar_1;
Symbol sym_AM_2;
Symbol sym_Path_2;
Symbol sym_BA_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_Call_2;
Symbol sym_Rule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_RootApp_1;
Symbol sym_Anno_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
static void init_module_constructors (void)
{
  sym_AsFix_0 = ATmakeSymbol("AsFix", 0, ATfalse);
  ATprotectSymbol(sym_AsFix_0);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
  ATprotectSymbol(sym_FromApp_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_WithAnno_2 = ATmakeSymbol("WithAnno", 2, ATfalse);
  ATprotectSymbol(sym_WithAnno_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
}
ATerm term_d_19;
ATerm term_c_19;
ATerm term_v_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_t_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_b_12;
ATerm term_u_11;
ATerm term_j_11;
ATerm term_a_10;
ATerm term_r_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_q_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Cong_2, term_n_7, (ATerm) ATempty);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATempty);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_y_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_h_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_q_5);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_j_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_h_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_h_6, term_i_6);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_i_16, term_q_5);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_l_16, term_q_5);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_q_5);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, (ATerm) ATempty);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_i_16);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_q_5);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_AsFix_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix          treat concrete syntax parts as AsFix trees", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm l_2 (ATerm i_1, ATerm m_1, ATerm t);
ATerm Clean_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm i_96 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm e_103 (ATerm), ATerm t);
static ATerm g_7 (ATerm l_4, ATerm t);
static ATerm i_7 (ATerm y_4, ATerm t);
ATerm str_explode_0_0 (ATerm t);
ATerm TrmOp_0_0 (ATerm t);
static ATerm w_4 (ATerm b_23, ATerm c_23, ATerm t);
ATerm foldr_3_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm z_4 (ATerm e_23, ATerm d_23, ATerm t);
static ATerm b_5 (ATerm i_130, ATerm t);
static ATerm c_5 (ATerm t_130, ATerm t);
static ATerm d_5 (ATerm x_129, ATerm t);
static ATerm b_13 (ATerm t_10, ATerm t);
ATerm trm_explode_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm MetaExplode_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm m_97 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm a_98 (ATerm), ATerm t);
ATerm ImplodeLayout_1_0 (ATerm j_94 (ATerm), ATerm t);
static ATerm h_5 (ATerm d_40, ATerm e_40, ATerm t);
static ATerm i_5 (ATerm y_24, ATerm z_24, ATerm t);
static ATerm k_5 (ATerm l_102 (ATerm), ATerm s_174, ATerm e_25, ATerm t);
static ATerm j_5 (ATerm u_24, ATerm v_24, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm j_121 (ATerm), ATerm t);
static ATerm g_27 (ATerm y_26, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_5 (ATerm a_25, ATerm t);
static ATerm m_5 (ATerm w_38, ATerm x_38, ATerm t);
static ATerm n_5 (ATerm f_40, ATerm g_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_29 (ATerm i_28, ATerm t);
static ATerm k_29 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t);
static ATerm l_29 (ATerm w_28, ATerm x_28, ATerm y_28, ATerm t);
static ATerm o_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm t_5 (ATerm z_64, ATerm a_65, ATerm t);
ATerm if_verbose2_1_0 (ATerm s_119 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_5 (ATerm l_58, ATerm m_58, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_5 (ATerm g_63, ATerm h_63, ATerm f_63, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_5 (ATerm z_42, ATerm a_43, ATerm t);
ATerm foldr_2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_119 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm need_help_1_0 (ATerm h_122 (ATerm), ATerm t);
static ATerm x_5 (ATerm y_67, ATerm z_67, ATerm a_68, ATerm t);
static ATerm y_5 (ATerm b_68, ATerm c_68, ATerm t);
ATerm lookup_table_0_1 (ATerm s_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm g_68, ATerm h_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm r_5 (ATerm d_68, ATerm e_68, ATerm t);
static ATerm s_5 (ATerm i_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_102 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_124 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm parse_options_1_0 (ATerm j_124 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm iowrap_3_0 (ATerm s_121 (ATerm), ATerm t_121 (ATerm), ATerm u_121 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm meta_explode_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,i_0 = NULL;
  a_0 = t;
  t = term_q_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_d_6;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_6), b_0), term_e_6);
  i_0 = t;
  t = SSL_printnl(e_0, i_0);
  t = term_g_6;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm q_0 = NULL,s_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL;
      t = term_q_5;
      t = h_0(t);
      t_0 = t;
      t = term_h_6;
      u_0 = t;
      t = term_i_6;
      v_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, t_0);
      t = u_5(u_0, v_0, t_0, t);
      _fail(t);
    }
  else
    {
      ATerm a_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_0 = ATgetFirst((ATermList) t);
          s_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_0;
      t = d_0(t);
      t = term_q_5;
      t = g_0(t);
      a_1 = t;
      t = (ATerm) ATinsert(CheckATermList(s_0), a_1);
    }
  return(t);
}
static ATerm l_2 (ATerm i_1, ATerm m_1, ATerm t)
{
  ATerm s_1 = NULL;
  t = SSL_is_int(i_1);
  t = SSL_int_to_string(i_1);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, s_1);
  return(t);
}
ATerm Clean_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,k_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym_Op_2))
    {
      i_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_2;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = i_2;
  if(match_string(t, "Wld"))
    {
      ATerm j_6 = t;
      int k_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_2(i_2, h_2, t);
          LocalPopChoice(k_6);
        }
      else
        {
          t = j_6;
          t = term_l_6;
        }
    }
  else
    {
      t = l_2(i_2, h_2, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm i_96 (ATerm), ATerm t)
{
  static ATerm f_0 (ATerm t)
  {
    t = topdown_1_0(i_96, t);
    return(t);
  }
  t = i_96(t);
  t = SRTS_all(f_0, t);
  return(t);
}
ATerm fetch_1_0 (ATerm e_103 (ATerm), ATerm t)
{
  static ATerm v_3 (ATerm t)
  {
    ATerm r_3 = NULL,t_3 = NULL,u_3 = NULL;
    r_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_3 = ATgetFirst((ATermList) t);
        u_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_6 = t;
      int r_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 = NULL,c_1 = NULL,o_2 = NULL;
          t = SSLgetAnnotations(r_3);
          x_0 = t;
          t = t_3;
          t = e_103(t);
          c_1 = t;
          t = (ATerm) ATinsert(CheckATermList(u_3), c_1);
          o_2 = t;
          t = SSLsetAnnotations(o_2, x_0);
          LocalPopChoice(r_6);
        }
      else
        {
          t = n_6;
          {
            ATerm l_1 = NULL,p_1 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(r_3);
            l_1 = t;
            t = u_3;
            t = v_3(t);
            p_1 = t;
            t = (ATerm) ATinsert(CheckATermList(p_1), t_3);
            p_2 = t;
            t = SSLsetAnnotations(p_2, l_1);
          }
        }
    }
    return(t);
  }
  t = v_3(t);
  return(t);
}
static ATerm g_7 (ATerm l_4, ATerm t)
{
  ATerm m_4 = NULL;
  t = SSL_is_string(l_4);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, m_4));
  return(t);
}
static ATerm i_7 (ATerm y_4, ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,c_6 = NULL;
  t = SSL_explode_term(y_4);
  if(match_cons(t, sym__2))
    {
      z_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6;
  t = map_1_0(str_explode_0_0, t);
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, z_5, c_6);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm m_6 = NULL,o_6 = NULL,p_6 = NULL;
  p_6 = t;
  if(match_cons(t, sym_meta_var_1))
    {
      m_6 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_6), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_FromTerm_1))
        {
          m_6 = ATgetArgument(t, 0);
          {
            ATerm s_6 = t;
            int t_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = p_6;
                t = d_5(m_6, t);
                LocalPopChoice(t_6);
              }
            else
              {
                t = s_6;
                {
                  ATerm u_6 = t;
                  int v_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = g_7(p_6, t);
                      LocalPopChoice(v_6);
                    }
                  else
                    {
                      t = u_6;
                      t = i_7(p_6, t);
                    }
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_FromStrategy_1))
            {
              m_6 = ATgetArgument(t, 0);
              {
                ATerm w_6 = t;
                int x_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = p_6;
                    t = b_5(m_6, t);
                    LocalPopChoice(x_6);
                  }
                else
                  {
                    t = w_6;
                    {
                      ATerm y_6 = t;
                      int z_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_7(p_6, t);
                          LocalPopChoice(z_6);
                        }
                      else
                        {
                          t = y_6;
                          t = i_7(p_6, t);
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_FromApp_1))
                {
                  m_6 = ATgetArgument(t, 0);
                  {
                    ATerm e_7 = t;
                    int h_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_6;
                        t = MetaExplode_0_0(t);
                        LocalPopChoice(h_7);
                      }
                    else
                      {
                        t = e_7;
                        {
                          ATerm k_7 = t;
                          int l_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = g_7(p_6, t);
                              LocalPopChoice(l_7);
                            }
                          else
                            {
                              t = k_7;
                              t = i_7(p_6, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = term_o_7;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          m_6 = ATgetFirst((ATermList) t);
                          o_6 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm p_7 = t;
                            int q_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_7 = NULL,f_7 = NULL;
                                t = m_6;
                                t = str_explode_0_0(t);
                                a_7 = t;
                                t = o_6;
                                t = str_explode_0_0(t);
                                f_7 = t;
                                t = (ATerm) ATmakeAppl(sym_Cong_2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, f_7), a_7));
                                LocalPopChoice(q_7);
                              }
                            else
                              {
                                t = p_7;
                                {
                                  ATerm u_7 = t;
                                  int v_7 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = g_7(p_6, t);
                                      LocalPopChoice(v_7);
                                    }
                                  else
                                    {
                                      t = u_7;
                                      t = i_7(p_6, t);
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          ATerm h_8 = t;
                          int i_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = g_7(p_6, t);
                              LocalPopChoice(i_8);
                            }
                          else
                            {
                              t = h_8;
                              t = i_7(p_6, t);
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm TrmOp_0_0 (ATerm t)
{
  ATerm j_7 = NULL,m_7 = NULL,b_8 = NULL,c_8 = NULL;
  c_8 = t;
  t = SSL_explode_term(c_8);
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7;
  t = map_1_0(trm_explode_0_0, t);
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, j_7, b_8);
  return(t);
}
static ATerm w_4 (ATerm b_23, ATerm c_23, ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL;
  t = b_23;
  t = trm_explode_0_0(t);
  d_8 = t;
  t = c_23;
  t = trm_explode_0_0(t);
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, e_8), d_8));
  return(t);
}
ATerm foldr_3_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_8;
      t = v_109(t);
    }
  else
    {
      ATerm z_8 = NULL,c_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_8 = ATgetFirst((ATermList) t);
          v_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_8;
      t = x_109(t);
      z_8 = t;
      t = v_8;
      t = foldr_3_0(v_109, w_109, x_109, t);
      c_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_8, c_9);
      t = w_109(t);
    }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,w_1 = NULL;
  f_10 = t;
  t = SSL_explode_term(f_10);
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_8 = ATgetArgument(t, 1);
        if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
          {
            g_10 = ATgetFirst((ATermList) p_8);
            {
              ATerm w_8 = (ATerm) ATgetNext((ATermList) p_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(f_10);
  if(match_cons(t, sym__2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_9 = ATgetArgument(t, 1);
        if(((ATgetType(n_9) == AT_LIST) && !(ATisEmpty(n_9))))
          {
            ATerm q_9 = ATgetFirst((ATermList) n_9);
            ATerm r_9 = (ATerm) ATgetNext((ATermList) n_9);
            if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
              {
                w_1 = ATgetFirst((ATermList) r_9);
                {
                  ATerm s_9 = (ATerm) ATgetNext((ATermList) r_9);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, w_1), g_10));
  return(t);
}
static ATerm z_4 (ATerm e_23, ATerm d_23, ATerm t)
{
  ATerm k_9 = NULL;
  static ATerm k_0 (ATerm t)
  {
    t = d_23;
    {
      ATerm v_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_9 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              w_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, term_a_10), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, w_9))));
          LocalPopChoice(z_9);
        }
      else
        {
          t = v_9;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = e_23;
  if(match_cons(t, sym_meta_listvar_1))
    {
      k_9 = ATgetArgument(t, 0);
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, k_9)));
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            t = e_23;
          }
      }
    }
  else
    {
      t = e_23;
    }
  t = foldr_3_0(k_0, n_0, trm_explode_0_0, t);
  return(t);
}
static ATerm b_5 (ATerm i_130, ATerm t)
{
  t = i_130;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm c_5 (ATerm t_130, ATerm t)
{
  ATerm l_10 = NULL;
  t = t_130;
  t = MetaExplode_0_0(t);
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, l_10);
  return(t);
}
static ATerm d_5 (ATerm x_129, ATerm t)
{
  t = x_129;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm b_13 (ATerm t_10, ATerm t)
{
  ATerm b_11 = NULL;
  t = SSL_is_int(t_10);
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, b_11);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm e_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL,q_11 = NULL;
      q_11 = t;
      if(match_cons(t, sym_meta_var_1))
        {
          i_11 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, i_11);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              i_11 = ATgetArgument(t, 0);
              {
                ATerm i_10 = t;
                int j_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym_Op_2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, term_a_10), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, i_11))));
                    LocalPopChoice(j_10);
                  }
                else
                  {
                    t = i_10;
                    t = b_13(q_11, t);
                  }
              }
            }
          else
            {
              t = b_13(q_11, t);
            }
        }
      LocalPopChoice(h_10);
    }
  else
    {
      t = e_10;
      {
        ATerm k_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 = NULL,z_1 = NULL;
            z_1 = t;
            t = SSL_is_string(z_1);
            y_1 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, y_1);
            LocalPopChoice(m_10);
          }
        else
          {
            t = k_10;
            {
              ATerm n_10 = t;
              int o_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_11 = NULL,w_11 = NULL,a_12 = NULL;
                  v_11 = t;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      w_11 = ATgetArgument(t, 0);
                      t = v_11;
                      t = d_5(w_11, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          w_11 = ATgetArgument(t, 0);
                          t = v_11;
                          t = c_5(w_11, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              w_11 = ATgetArgument(t, 0);
                              t = v_11;
                              t = b_5(w_11, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_WithAnno_2))
                                {
                                  w_11 = ATgetArgument(t, 0);
                                  a_12 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_2 = NULL,d_2 = NULL;
                                    t = w_11;
                                    t = trm_explode_0_0(t);
                                    c_2 = t;
                                    t = a_12;
                                    t = MetaExplode_0_0(t);
                                    d_2 = t;
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, c_2, d_2);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Conc_2))
                                    {
                                      w_11 = ATgetArgument(t, 0);
                                      a_12 = ATgetArgument(t, 1);
                                      t = v_11;
                                      t = z_4(w_11, a_12, t);
                                    }
                                  else
                                    {
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = term_a_10;
                                        }
                                      else
                                        {
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              w_11 = ATgetFirst((ATermList) t);
                                              a_12 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = v_11;
                                          t = w_4(w_11, a_12, t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  LocalPopChoice(o_10);
                }
              else
                {
                  t = n_10;
                  t = TrmOp_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm f_13 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      f_13 = ATgetArgument(t, 0);
      t = f_13;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          f_13 = ATgetArgument(t, 0);
          {
            ATerm l_13 = NULL;
            t = f_13;
            t = trm_explode_0_0(t);
            l_13 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, l_13);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              f_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_13;
          t = str_explode_0_0(t);
        }
    }
  return(t);
}
ATerm MetaExplode_0_0 (ATerm t)
{
  t = alltd_1_0(r_0, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  static ATerm n_13 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_97(t);
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = SRTS_one(n_13, t);
      }
    return(t);
  }
  t = n_13(t);
  return(t);
}
ATerm alltd_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  static ATerm o_13 (ATerm t)
  {
    ATerm s_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_98(t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = s_10;
        t = SRTS_all(o_13, t);
      }
    return(t);
  }
  t = o_13(t);
  return(t);
}
ATerm ImplodeLayout_1_0 (ATerm j_94 (ATerm), ATerm t)
{
  static ATerm i_21 (ATerm t)
  {
    static ATerm w_0 (ATerm t)
    {
      ATerm y_20 = NULL,b_21 = NULL,d_21 = NULL,e_21 = NULL;
      b_21 = t;
      if(match_cons(t, sym_BA_2))
        {
          d_21 = ATgetArgument(t, 0);
          e_21 = ATgetArgument(t, 1);
          {
            ATerm q_2 = NULL,t_2 = NULL,u_2 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(b_21);
            q_2 = t;
            t = d_21;
            t = ImplodeLayout_1_0(_fail, t);
            t_2 = t;
            t = e_21;
            t = ImplodeLayout_1_0(_id, t);
            u_2 = t;
            t = (ATerm) ATmakeAppl(sym_BA_2, t_2, u_2);
            y_2 = t;
            t = SSLsetAnnotations(y_2, q_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              d_21 = ATgetArgument(t, 0);
              {
                ATerm w_3 = NULL,a_4 = NULL,z_2 = NULL;
                t = SSLgetAnnotations(b_21);
                w_3 = t;
                t = d_21;
                t = ImplodeLayout_1_0(_id, t);
                a_4 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, a_4);
                z_2 = t;
                t = SSLsetAnnotations(z_2, w_3);
              }
            }
          else
            {
              if(match_cons(t, sym_AM_2))
                {
                  d_21 = ATgetArgument(t, 0);
                  e_21 = ATgetArgument(t, 1);
                  {
                    ATerm i_4 = NULL,n_4 = NULL,o_4 = NULL,a_3 = NULL;
                    t = SSLgetAnnotations(b_21);
                    i_4 = t;
                    t = d_21;
                    t = i_21(t);
                    n_4 = t;
                    t = e_21;
                    t = ImplodeLayout_1_0(_id, t);
                    o_4 = t;
                    t = (ATerm) ATmakeAppl(sym_AM_2, n_4, o_4);
                    a_3 = t;
                    t = SSLsetAnnotations(a_3, i_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RuleNoCond_2))
                    {
                      d_21 = ATgetArgument(t, 0);
                      e_21 = ATgetArgument(t, 1);
                      {
                        ATerm f_5 = NULL,v_5 = NULL,b_6 = NULL,b_3 = NULL;
                        t = SSLgetAnnotations(b_21);
                        f_5 = t;
                        t = d_21;
                        t = i_21(t);
                        v_5 = t;
                        t = e_21;
                        t = ImplodeLayout_1_0(_id, t);
                        b_6 = t;
                        t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, v_5, b_6);
                        b_3 = t;
                        t = SSLsetAnnotations(b_3, f_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Rule_3))
                        {
                          d_21 = ATgetArgument(t, 0);
                          e_21 = ATgetArgument(t, 1);
                          y_20 = ATgetArgument(t, 2);
                          {
                            ATerm q_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,c_3 = NULL;
                            t = SSLgetAnnotations(b_21);
                            q_6 = t;
                            t = d_21;
                            t = i_21(t);
                            b_7 = t;
                            t = e_21;
                            t = ImplodeLayout_1_0(_id, t);
                            c_7 = t;
                            t = y_20;
                            t = i_21(t);
                            d_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Rule_3, b_7, c_7, d_7);
                            c_3 = t;
                            t = SSLsetAnnotations(c_3, q_6);
                          }
                        }
                      else
                        {
                          ATerm s_7 = NULL,t_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,f_8 = NULL,g_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,n_8 = NULL,o_8 = NULL,i_3 = NULL,h_3 = NULL,f_3 = NULL,e_3 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              d_21 = ATgetArgument(t, 0);
                              e_21 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(b_21);
                          t_7 = t;
                          t = d_21;
                          if(match_cons(t, sym_prod_3))
                            {
                              y_7 = ATgetArgument(t, 0);
                              z_7 = ATgetArgument(t, 1);
                              a_8 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(d_21);
                          x_7 = t;
                          t = z_7;
                          if(match_cons(t, sym_cf_1))
                            {
                              j_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(z_7);
                          g_8 = t;
                          t = j_8;
                          if(match_cons(t, sym_opt_1))
                            {
                              n_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(j_8);
                          l_8 = t;
                          t = n_8;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_opt_1, n_8);
                          e_3 = t;
                          t = SSLsetAnnotations(e_3, l_8);
                          o_8 = t;
                          t = (ATerm) ATmakeAppl(sym_cf_1, o_8);
                          f_3 = t;
                          t = SSLsetAnnotations(f_3, g_8);
                          k_8 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, y_7, k_8, a_8);
                          h_3 = t;
                          t = SSLsetAnnotations(h_3, x_7);
                          f_8 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, f_8, e_21);
                          i_3 = t;
                          t = SSLsetAnnotations(i_3, t_7);
                          w_7 = t;
                          {
                            ATerm c_11 = t;
                            int d_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,x_8 = NULL,a_9 = NULL,b_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,l_9 = NULL,m_9 = NULL,o_9 = NULL,p_9 = NULL,t_9 = NULL,u_9 = NULL,x_9 = NULL,y_9 = NULL,b_10 = NULL,x_3 = NULL,q_3 = NULL,p_3 = NULL,o_3 = NULL,n_3 = NULL,m_3 = NULL;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    r_8 = ATgetArgument(t, 0);
                                    s_8 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(w_7);
                                q_8 = t;
                                t = r_8;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    b_9 = ATgetArgument(t, 0);
                                    d_9 = ATgetArgument(t, 1);
                                    e_9 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(r_8);
                                a_9 = t;
                                t = b_9;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    p_9 = ATgetFirst((ATermList) t);
                                    t_9 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(b_9);
                                o_9 = t;
                                t = p_9;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    y_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(p_9);
                                x_9 = t;
                                t = y_9;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_cf_1, y_9);
                                m_3 = t;
                                t = SSLsetAnnotations(m_3, x_9);
                                b_10 = t;
                                t = t_9;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = (ATerm) ATinsert(CheckATermList(t_9), b_10);
                                n_3 = t;
                                t = SSLsetAnnotations(n_3, o_9);
                                u_9 = t;
                                t = d_9;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    h_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(d_9);
                                g_9 = t;
                                t = h_9;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    l_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(h_9);
                                j_9 = t;
                                t = l_9;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_opt_1, l_9);
                                o_3 = t;
                                t = SSLsetAnnotations(o_3, j_9);
                                m_9 = t;
                                t = (ATerm) ATmakeAppl(sym_cf_1, m_9);
                                p_3 = t;
                                t = SSLsetAnnotations(p_3, g_9);
                                i_9 = t;
                                t = (ATerm) ATmakeAppl(sym_prod_3, u_9, i_9, e_9);
                                q_3 = t;
                                t = SSLsetAnnotations(q_3, a_9);
                                f_9 = t;
                                t = s_8;
                                {
                                  static ATerm y_0 (ATerm t)
                                  {
                                    if(match_cons(t, sym_meta_var_1))
                                      {
                                        if(((s_7 != NULL) && (s_7 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          s_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    return(t);
                                  }
                                  t = oncetd_1_0(y_0, t);
                                }
                                x_8 = t;
                                t = (ATerm) ATmakeAppl(sym_appl_2, f_9, x_8);
                                x_3 = t;
                                t = SSLsetAnnotations(x_3, q_8);
                                LocalPopChoice(d_11);
                                t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(s_7));
                              }
                            else
                              {
                                t = c_11;
                                {
                                  ATerm e_11 = t;
                                  int f_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm g_11 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = j_94(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = g_11;
                                        }
                                      t = term_l_6;
                                      LocalPopChoice(f_11);
                                    }
                                  else
                                    {
                                      t = e_11;
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
    t = alltd_1_0(w_0, t);
    return(t);
  }
  t = i_21(t);
  return(t);
}
static ATerm h_5 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm w_21 = NULL;
  t = SSL_fputc(d_40, e_40);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_21);
  return(t);
}
static ATerm i_5 (ATerm y_24, ATerm z_24, ATerm t)
{
  ATerm x_21 = NULL;
  t = SSL_write_term_to_stream_text(y_24, z_24);
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_21);
  return(t);
}
static ATerm k_5 (ATerm l_102 (ATerm), ATerm s_174, ATerm e_25, ATerm t)
{
  ATerm y_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_174, term_j_11);
  t = o_5(t);
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_21, e_25);
  t = l_102(t);
  t = fclose_0_0(t);
  t = e_25;
  return(t);
}
static ATerm j_5 (ATerm u_24, ATerm v_24, ATerm t)
{
  ATerm a_22 = NULL;
  t = SSL_write_term_to_stream_baf(u_24, v_24);
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_22);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if(match_cons(k_11, sym_Stream_1))
        {
          z_10 = ATgetArgument(k_11, 0);
        }
      else
        _fail(t);
      a_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(z_10, a_11, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,r_11 = NULL,s_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_11 = ATgetArgument(t, 0);
      if(match_cons(t_11, sym_Stream_1))
        {
          s_11 = ATgetArgument(t_11, 0);
        }
      else
        _fail(t);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(s_11, x_11, t);
  o_11 = t;
  t = term_u_11;
  p_11 = t;
  t = o_11;
  if(match_cons(t, sym_Stream_1))
    {
      r_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, o_11);
  t = h_5(p_11, r_11, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,y_22 = NULL,l_23 = NULL,m_25 = NULL,t_25 = NULL,t_14 = NULL,q_14 = NULL;
  k_22 = t;
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      y_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_22);
  q_22 = t;
  t = r_22;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((j_22 != NULL) && (j_22 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_0, t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = term_b_12;
        j_22 = t;
      }
  }
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_23, y_22);
  q_14 = t;
  t = SSLsetAnnotations(q_14, q_22);
  t = k_22;
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_22);
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, (ATerm) ATmakeAppl(sym__2, not_null(j_22), n_22));
  t_14 = t;
  t = SSLsetAnnotations(t_14, l_22);
  p_22 = t;
  if(match_cons(t, sym__2))
    {
      m_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,u_14 = NULL;
        t = SSLgetAnnotations(p_22);
        r_10 = t;
        t = m_25;
        t = fetch_1_0(b_1, t);
        v_10 = t;
        t = t_25;
        if(match_cons(t, sym__2))
          {
            x_10 = ATgetArgument(t, 0);
            y_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_5(d_1, x_10, y_10, t);
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_10, w_10);
        u_14 = t;
        t = SSLsetAnnotations(u_14, r_10);
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        {
          ATerm h_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,v_14 = NULL;
          t = SSLgetAnnotations(p_22);
          h_11 = t;
          t = t_25;
          if(match_cons(t, sym__2))
            {
              m_11 = ATgetArgument(t, 0);
              n_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_5(e_1, m_11, n_11, t);
          l_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_25, l_11);
          v_14 = t;
          t = SSLsetAnnotations(v_14, h_11);
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
ATerm apply_strategy_1_0 (ATerm j_121 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,b_26 = NULL,d_26 = NULL;
  d_26 = t;
  t = dtime_0_0(t);
  t = d_26;
  t = j_121(t);
  b_26 = t;
  t = dtime_0_0(t);
  w_25 = t;
  t = b_26;
  if(match_cons(t, sym__2))
    {
      x_25 = ATgetArgument(t, 0);
      y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_25), (ATerm) ATmakeAppl(sym_Runtime_1, w_25)), y_25);
  return(t);
}
static ATerm g_27 (ATerm y_26, ATerm t)
{
  t = SSL_fclose(y_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  c_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_27 = ATgetArgument(t, 0);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_27);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = g_27(c_27, t);
          }
      }
    }
  else
    {
      t = g_27(c_27, t);
    }
  return(t);
}
static ATerm l_5 (ATerm a_25, ATerm t)
{
  t = SSL_read_term_from_stream(a_25);
  return(t);
}
static ATerm m_5 (ATerm w_38, ATerm x_38, ATerm t)
{
  t = SSL_strcat(w_38, x_38);
  return(t);
}
static ATerm n_5 (ATerm f_40, ATerm g_40, ATerm t)
{
  ATerm i_27 = NULL;
  t = SSL_fopen(f_40, g_40);
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_27);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_27 = NULL;
  t = SSL_stdin_stream();
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_27 = NULL;
  t = SSL_stdout_stream();
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_27 = NULL;
  t = SSL_stderr_stream();
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_27);
  return(t);
}
static ATerm j_29 (ATerm i_28, ATerm t)
{
  ATerm j_28 = NULL;
  t = SSL_explode_term(i_28);
  if(match_cons(t, sym__2))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_12 = ATgetArgument(t, 1);
        if(((ATgetType(h_12) == AT_LIST) && !(ATisEmpty(h_12))))
          {
            j_28 = ATgetFirst((ATermList) h_12);
            {
              ATerm i_12 = (ATerm) ATgetNext((ATermList) h_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_28;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_28;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_28;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_28;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_29 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,u_28 = NULL,e_15 = NULL;
  t = SSLgetAnnotations(o_28);
  r_28 = t;
  t = m_28;
  if(match_cons(t, sym_Path_1))
    {
      u_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_28, n_28);
  e_15 = t;
  t = SSLsetAnnotations(e_15, r_28);
  if(match_cons(t, sym__2))
    {
      p_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(p_28, q_28, t);
  return(t);
}
static ATerm l_29 (ATerm w_28, ATerm x_28, ATerm y_28, ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,e_29 = NULL,g_15 = NULL;
  t = SSLgetAnnotations(y_28);
  b_29 = t;
  t = SSL_is_string(w_28);
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_29, x_28);
  g_15 = t;
  t = SSLsetAnnotations(g_15, b_29);
  if(match_cons(t, sym__2))
    {
      z_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(z_28, a_29, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  g_29 = t;
  if(match_cons(t, sym__2))
    {
      h_29 = ATgetArgument(t, 0);
      i_29 = ATgetArgument(t, 1);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_29(g_29, t);
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm l_12 = t;
              int n_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_29(h_29, i_29, g_29, t);
                  LocalPopChoice(n_12);
                }
              else
                {
                  t = l_12;
                  t = l_29(h_29, i_29, g_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_29(g_29, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,u_29 = NULL;
  u_29 = t;
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_29, term_r_12);
        t = o_5(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm m_12 = NULL,o_12 = NULL;
          t = term_s_12;
          o_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_12, u_29);
          t = m_5(o_12, u_29, t);
          m_12 = t;
          t = SSL_perror(m_12);
          _fail(t);
        }
      }
  }
  o_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(p_29, t);
  n_29 = t;
  t = o_29;
  t = fclose_0_0(t);
  t = n_29;
  return(t);
}
static ATerm t_5 (ATerm z_64, ATerm a_65, ATerm t)
{
  ATerm x_29 = NULL;
  t = lookup_table_0_1(z_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(a_65, x_29, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_119 (ATerm), ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
        t = term_x_12;
        d_30 = t;
        t = term_y_12;
        e_30 = t;
        t = term_c_13;
        t = t_5(d_30, e_30, t);
        c_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_30, term_d_13);
        t = geq_0_0(t);
        t = a_30;
        t = s_119(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = a_30;
      }
  }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm h_30 = NULL;
  h_30 = t;
  if(match_string(t, "-k"))
    {
      t = h_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_30;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  t = SSL_string_to_int(i_30);
  j_30 = t;
  t = term_e_13;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, j_30);
  t = w_5(k_30, j_30, t);
  t = i_30;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_1, g_1, h_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  if(match_string(t, "-S"))
    {
      t = m_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_30;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  t = term_y_12;
  n_30 = t;
  t = term_h_13;
  o_30 = t;
  t = term_i_13;
  t = w_5(n_30, o_30, t);
  t = term_j_13;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_k_13;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  t = SSL_string_to_int(p_30);
  q_30 = t;
  t = term_y_12;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, q_30);
  t = w_5(r_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_30);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_m_13;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  t = term_p_13;
  s_30 = t;
  t = term_q_5;
  t_30 = t;
  t = term_q_13;
  t = w_5(s_30, t_30, t);
  t = term_r_13;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_1, k_1, n_1, t);
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_1, q_1, r_1, t);
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            t = Option_3_0(t_1, u_1, v_1, t);
          }
      }
    }
  return(t);
}
static ATerm w_5 (ATerm l_58, ATerm m_58, ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  t = term_x_12;
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_12, l_58, m_58);
  t = lookup_table_0_1(u_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(l_58, m_58, v_30, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_12, l_58, m_58);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  if(match_string(t, "-o"))
    {
      t = y_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_30;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  z_30 = t;
  t = term_y_13;
  a_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, z_30);
  t = w_5(a_31, z_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_30);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_1, a_2, b_2, t);
  return(t);
}
static ATerm u_5 (ATerm g_63, ATerm h_63, ATerm f_63, ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  c_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_63, h_63);
  {
    ATerm a_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_14 = ATgetArgument(t, 0);
            ATerm e_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_63, h_63);
        t = t_5(g_63, h_63, t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATempty;
      }
  }
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_63, h_63, (ATerm) ATinsert(CheckATermList(d_31), f_63));
  t = lookup_table_0_1(g_63, t);
  g_31 = t;
  t = (ATerm) ATinsert(CheckATermList(d_31), f_63);
  e_31 = t;
  t = g_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(h_63, e_31, f_31, t);
  t = c_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
      t = term_q_5;
      t = p_0(t);
      r_31 = t;
      t = term_h_6;
      s_31 = t;
      t = term_i_6;
      t_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, r_31);
      t = u_5(s_31, t_31, r_31, t);
      _fail(t);
    }
  else
    {
      ATerm x_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_31 = ATgetFirst((ATermList) t);
          o_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_31 = ATgetFirst((ATermList) t);
          q_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_31;
      t = m_0(t);
      t = p_31;
      t = o_0(t);
      x_31 = t;
      t = (ATerm) ATinsert(CheckATermList(q_31), x_31);
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  if(match_string(t, "-i"))
    {
      t = z_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_31;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  a_32 = t;
  t = term_f_14;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, a_32);
  t = w_5(b_32, a_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_32);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_h_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_2, f_2, g_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_5;
  t = whoami_0_0(t);
  g_32 = t;
  t = term_d_6;
  i_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_14), g_32);
  j_32 = t;
  t = SSL_printnl(i_32, j_32);
  t = term_g_6;
  h_32 = t;
  t = SSL_exit(h_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  t = term_x_12;
  k_32 = t;
  t = term_j_14;
  l_32 = t;
  t = term_k_14;
  t = t_5(k_32, l_32, t);
  return(t);
}
static ATerm p_5 (ATerm z_42, ATerm a_43, ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_42, a_43);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = SSL_addr(z_42, a_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_32;
      t = t_109(t);
    }
  else
    {
      ATerm s_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_32 = ATgetFirst((ATermList) t);
          p_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_32;
      t = foldr_2_0(t_109, u_109, t);
      s_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_32, s_32);
      t = u_109(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_h_13;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(z_12, a_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_32 = NULL,t_12 = NULL,u_12 = NULL;
  t = times_0_0(t);
  u_12 = t;
  t = SSL_explode_term(u_12);
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12;
  t = foldr_2_0(j_2, m_2, t);
  v_32 = t;
  t = SSL_TicksToSeconds(v_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
  g_33 = t;
  if(match_cons(t, sym__2))
    {
      h_33 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_33;
        if((h_33 != t))
          {
            _fail(t);
          }
        t = g_33;
        LocalPopChoice(r_14);
      }
    else
      {
        t = p_14;
        t = (ATerm) ATmakeAppl(sym__2, h_33, i_33);
        {
          ATerm s_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_33, i_33);
              LocalPopChoice(y_14);
            }
          else
            {
              t = s_14;
              t = SSL_gtr(h_33, i_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_33, i_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_119 (ATerm), ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
        t = term_x_12;
        p_33 = t;
        t = term_y_12;
        q_33 = t;
        t = term_c_13;
        t = t_5(p_33, q_33, t);
        o_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_33, term_g_6);
        t = geq_0_0(t);
        t = m_33;
        t = r_119(t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = m_33;
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,v_33 = NULL,w_33 = NULL;
  t = run_time_0_0(t);
  s_33 = t;
  t = term_q_5;
  t = whoami_0_0(t);
  t_33 = t;
  t = term_d_6;
  v_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_15), s_33), term_b_15), t_33);
  w_33 = t;
  t = SSL_printnl(v_33, w_33);
  t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_15), s_33), term_b_15), t_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_13;
  y_33 = t;
  t = SSL_exit(y_33);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL;
  j_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_34 = ATgetArgument(t, 0);
          {
            ATerm v_13 = NULL,l_15 = NULL;
            t = SSLgetAnnotations(j_34);
            v_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_34);
            l_15 = t;
            t = SSLsetAnnotations(l_15, v_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm d_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_34 = NULL,c_34 = NULL;
      t = term_x_12;
      b_34 = t;
      t = term_h_15;
      c_34 = t;
      t = term_i_15;
      t = t_5(b_34, c_34, t);
      LocalPopChoice(f_15);
    }
  else
    {
      t = d_15;
      t = fetch_1_0(r_2, t);
    }
  t = h_122(t);
  return(t);
}
static ATerm x_5 (ATerm y_67, ATerm z_67, ATerm a_68, ATerm t)
{
  ATerm l_34 = NULL;
  t = SSL_hashtable_put(a_68, y_67, z_67);
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_34);
  return(t);
}
static ATerm y_5 (ATerm b_68, ATerm c_68, ATerm t)
{
  t = SSL_hashtable_get(c_68, b_68);
  return(t);
}
ATerm lookup_table_0_1 (ATerm s_64, ATerm t)
{
  ATerm u_34 = NULL;
  t = table_hashtable_0_0(t);
  u_34 = t;
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL;
        t = u_34;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_5(s_64, b_14, t);
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        {
          ATerm g_14 = NULL;
          t = s_64;
          t = table_create_0_0(t);
          t = u_34;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_5(s_64, g_14, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm g_68, ATerm h_68, ATerm t)
{
  ATerm x_34 = NULL;
  t = SSL_hashtable_create(g_68, h_68);
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_34);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,c_35 = NULL,d_35 = NULL;
  y_34 = t;
  t = term_m_15;
  c_35 = t;
  t = term_o_15;
  d_35 = t;
  t = y_34;
  t = new_hashtable_0_2(c_35, d_35, t);
  z_34 = t;
  t = y_34;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(y_34, z_34, a_35, t);
  t = y_34;
  return(t);
}
static ATerm r_5 (ATerm d_68, ATerm e_68, ATerm t)
{
  ATerm e_35 = NULL;
  t = SSL_hashtable_remove(e_68, d_68);
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_35);
  return(t);
}
static ATerm s_5 (ATerm i_68, ATerm t)
{
  ATerm f_35 = NULL;
  t = SSL_hashtable_destroy(i_68);
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_35);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_35 = NULL;
  t = SSL_table_hashtable();
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_35);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  h_35 = t;
  t = table_hashtable_0_0(t);
  i_35 = t;
  t = lookup_table_0_1(h_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(k_35, t);
  t = i_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(h_35, j_35, t);
  t = h_35;
  return(t);
}
ATerm map_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  static ATerm z_35 (ATerm t)
  {
    ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
    w_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_35;
      }
    else
      {
        ATerm l_14 = NULL,w_14 = NULL,x_14 = NULL,n_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_35 = ATgetFirst((ATermList) t);
            y_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_35);
        l_14 = t;
        t = x_35;
        t = u_102(t);
        w_14 = t;
        t = y_35;
        t = z_35(t);
        x_14 = t;
        t = (ATerm) ATinsert(CheckATermList(x_14), w_14);
        n_15 = t;
        t = SSLsetAnnotations(n_15, l_14);
      }
    return(t);
  }
  t = z_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_36 = ATgetFirst((ATermList) t);
      d_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_36 = NULL,i_36 = NULL;
        static ATerm s_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_36)), not_null(i_36));
          return(t);
        }
        t = d_36;
        t = l_0(t);
        if(((h_36 != NULL) && (h_36 != t)))
          _fail(t);
        else
          h_36 = t;
        t = c_36;
        t = j_0(t);
        if(((i_36 != NULL) && (i_36 != t)))
          _fail(t);
        else
          i_36 = t;
        t = d_36;
        t = reverse_acc_2_0(j_0, s_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_5;
      t = l_0(t);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,p_15 = NULL;
  q_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_36);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_36);
  p_15 = t;
  t = SSLsetAnnotations(p_15, o_36);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_36), term_q_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL;
  ATerm s_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_36 = NULL,n_36 = NULL;
      t = term_x_12;
      m_36 = t;
      t = term_j_14;
      n_36 = t;
      t = term_k_14;
      t = t_5(m_36, n_36, t);
      LocalPopChoice(u_15);
    }
  else
    {
      t = s_15;
      t = fetch_1_0(v_2, t);
    }
  t = term_v_15;
  t = echo_0_0(t);
  t = term_h_6;
  k_36 = t;
  t = term_i_6;
  l_36 = t;
  t = term_y_15;
  t = t_5(k_36, l_36, t);
  t = reverse_acc_2_0(_id, w_2, t);
  t = map_1_0(x_2, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  {
    ATerm c_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_16 = ATgetFirst((ATermList) t);
                ATerm h_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_36;
          }
        LocalPopChoice(f_16);
      }
    else
      {
        t = c_16;
        t = (ATerm) ATinsert(ATempty, u_36);
      }
  }
  v_36 = t;
  t = term_b_12;
  w_36 = t;
  t = SSL_printnl(w_36, v_36);
  t = u_36;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  t = term_x_12;
  a_37 = t;
  t = term_j_14;
  b_37 = t;
  t = term_k_14;
  t = t_5(a_37, b_37, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  t = term_i_16;
  c_37 = t;
  t = term_q_5;
  d_37 = t;
  t = term_j_16;
  t = w_5(c_37, d_37, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_k_16;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  t = term_i_16;
  g_37 = t;
  t = term_q_5;
  h_37 = t;
  t = term_j_16;
  t = w_5(g_37, h_37, t);
  t = term_l_16;
  e_37 = t;
  t = term_q_5;
  f_37 = t;
  t = term_m_16;
  t = w_5(e_37, f_37, t);
  t = term_n_16;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_3, g_3, j_3, t);
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      t = Option_3_0(k_3, l_3, s_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,r_15 = NULL;
  n_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_37 = ATgetFirst((ATermList) t);
      k_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_37);
  i_37 = t;
  t = j_37;
  t = d_72(t);
  l_37 = t;
  t = k_37;
  t = e_72(t);
  m_37 = t;
  t = (ATerm) ATinsert(CheckATermList(m_37), l_37);
  r_15 = t;
  t = SSLsetAnnotations(r_15, i_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_124 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,x_37 = NULL,y_37 = NULL,t_15 = NULL;
  s_37 = t;
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_16;
        t = k_124(t);
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
      }
  }
  t = s_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_37 = ATgetFirst((ATermList) t);
      v_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_37);
  t_37 = t;
  t = term_j_14;
  y_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, u_37);
  t = w_5(y_37, u_37, t);
  t = v_37;
  {
    static ATerm i_38 (ATerm t)
    {
      ATerm u_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_38 = NULL;
              b_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_38;
              LocalPopChoice(x_16);
            }
          else
            {
              t = w_16;
              t = k_124(t);
              t = Cons_2_0(_id, i_38, t);
            }
          LocalPopChoice(v_16);
        }
      else
        {
          t = u_16;
          {
            ATerm e_38 = NULL,f_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_38 = ATgetFirst((ATermList) t);
                f_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_38), (ATerm) ATmakeAppl(sym_Undefined_1, e_38));
          }
        }
      return(t);
    }
    t = i_38(t);
  }
  x_37 = t;
  t = (ATerm) ATinsert(CheckATermList(x_37), (ATerm) ATmakeAppl(sym_Program_1, u_37));
  t_15 = t;
  t = SSLsetAnnotations(t_15, t_37);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm v_38 = NULL;
  v_38 = t;
  if(match_string(t, "--help"))
    {
      t = v_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_38;
        }
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL;
  t = term_h_15;
  y_38 = t;
  t = term_q_5;
  z_38 = t;
  t = term_b_17;
  t = w_5(y_38, z_38, t);
  t = term_c_17;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_d_17;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_124 (ATerm), ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  p_38 = t;
  t = term_h_6;
  q_38 = t;
  t = term_e_17;
  t = lookup_table_0_1(q_38, t);
  u_38 = t;
  t = term_i_6;
  r_38 = t;
  t = (ATerm) ATempty;
  s_38 = t;
  t = u_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(r_38, s_38, t_38, t);
  t = p_38;
  {
    static ATerm y_3 (ATerm t)
    {
      ATerm g_17 = t;
      int h_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_124(t);
          LocalPopChoice(h_17);
        }
      else
        {
          t = g_17;
          {
            ATerm i_17 = t;
            int j_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_3, b_4, c_4, t);
                LocalPopChoice(j_17);
              }
            else
              {
                t = i_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_3, t);
  }
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_39 = NULL;
        k_39 = t;
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_15 = NULL;
              t = k_39;
              {
                ATerm o_17 = t;
                int p_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_16 = NULL,e_16 = NULL;
                    t = term_x_12;
                    d_16 = t;
                    t = term_h_15;
                    e_16 = t;
                    t = term_i_15;
                    t = t_5(d_16, e_16, t);
                    LocalPopChoice(p_17);
                  }
                else
                  {
                    t = o_17;
                    t = fetch_1_0(d_4, t);
                  }
              }
              t = k_39;
              t = default_system_usage_0_0(t);
              t = term_h_13;
              x_15 = t;
              t = SSL_exit(x_15);
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              {
                ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
                t = term_x_12;
                z_16 = t;
                t = term_i_16;
                a_17 = t;
                t = term_s_17;
                t = t_5(z_16, a_17, t);
                t = k_39;
                t = default_system_about_0_0(t);
                t = term_h_13;
                y_16 = t;
                t = SSL_exit(y_16);
              }
            }
        }
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
              static ATerm e_4 (ATerm t)
              {
                ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,w_15 = NULL;
                q_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_39);
                o_39 = t;
                t = p_39;
                if(((n_38 != NULL) && (n_38 != t)))
                  _fail(t);
                else
                  n_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_39);
                w_15 = t;
                t = SSLsetAnnotations(w_15, o_39);
                return(t);
              }
              t = fetch_1_0(e_4, t);
              t = term_d_6;
              m_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_38)), term_v_17);
              n_39 = t;
              t = SSL_printnl(m_39, n_39);
              t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_38)), term_v_17));
              t = default_system_usage_0_0(t);
              t = term_g_6;
              l_39 = t;
              t = SSL_exit(l_39);
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
            }
        }
      }
  }
  o_38 = t;
  t = term_h_6;
  t = table_destroy_0_0(t);
  t = o_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  t = parse_options_1_0(j_122, t);
  v_39 = t;
  t = term_w_17;
  t = table_create_0_0(t);
  t = term_w_17;
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, v_39);
  t = lookup_table_0_1(w_39, t);
  z_39 = t;
  t = term_x_17;
  x_39 = t;
  t = z_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(x_39, v_39, y_39, t);
  t = v_39;
  t = l_122(t);
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_122, t);
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        {
          ATerm a_18 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_122(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_18);
            }
          else
            {
              t = a_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = if_verbose2_1_0(q_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL;
  t = term_c_18;
  a_40 = t;
  t = term_q_5;
  b_40 = t;
  t = term_d_18;
  t = w_5(a_40, b_40, t);
  t = term_e_18;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_f_18;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm c_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,o_40 = NULL;
  c_40 = t;
  t = term_x_12;
  m_40 = t;
  t = term_j_14;
  o_40 = t;
  t = term_k_14;
  t = t_5(m_40, o_40, t);
  j_40 = t;
  t = term_d_6;
  k_40 = t;
  t = (ATerm) ATinsert(ATempty, j_40);
  l_40 = t;
  t = SSL_printnl(k_40, l_40);
  t = c_40;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_121 (ATerm), ATerm t_121 (ATerm), ATerm u_121 (ATerm), ATerm t)
{
  static ATerm f_4 (ATerm t)
  {
    ATerm g_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_121(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = g_18;
        {
          ATerm j_18 = t;
          int k_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(k_18);
            }
          else
            {
              t = j_18;
              {
                ATerm l_18 = t;
                int m_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(m_18);
                  }
                else
                  {
                    t = l_18;
                    {
                      ATerm n_18 = t;
                      int o_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_4, k_4, p_4, t);
                          LocalPopChoice(o_18);
                        }
                      else
                        {
                          t = n_18;
                          {
                            ATerm r_18 = t;
                            int s_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(s_18);
                              }
                            else
                              {
                                t = r_18;
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
  static ATerm h_4 (ATerm t)
  {
    ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
    q_40 = t;
    {
      ATerm t_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm r_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_40 != NULL) && (p_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_4, t);
          LocalPopChoice(u_18);
        }
      else
        {
          t = t_18;
          t = term_v_18;
          p_40 = t;
        }
    }
    t = not_null(p_40);
    t = ReadFromFile_0_0(t);
    r_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
    t = apply_strategy_1_0(s_121, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(f_4, u_121, g_4, h_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,z_41 = NULL,a_42 = NULL,a_16 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  p_41 = t;
  if(match_cons(t, sym__2))
    {
      n_41 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_17 = NULL,q_17 = NULL,r_17 = NULL,z_15 = NULL;
            t = SSLgetAnnotations(p_41);
            f_17 = t;
            t = n_41;
            t = fetch_1_0(u_4, t);
            q_17 = t;
            t = o_41;
            t = ImplodeLayout_1_0(_fail, t);
            r_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_17, r_17);
            z_15 = t;
            t = SSLsetAnnotations(z_15, f_17);
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            t = p_41;
          }
      }
    }
  else
    {
      t = p_41;
    }
  d_41 = t;
  if(match_cons(t, sym__2))
    {
      z_40 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_41);
  y_40 = t;
  t = a_41;
  t = MetaExplode_0_0(t);
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_40, b_41);
  a_16 = t;
  t = SSLsetAnnotations(a_16, y_40);
  c_41 = t;
  if(match_cons(t, sym__2))
    {
      z_41 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_18 = NULL,p_18 = NULL,q_18 = NULL,b_16 = NULL;
            t = SSLgetAnnotations(c_41);
            h_18 = t;
            t = z_41;
            t = fetch_1_0(v_4, t);
            p_18 = t;
            t = a_42;
            t = topdown_1_0(x_4, t);
            q_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_18, q_18);
            b_16 = t;
            t = SSLsetAnnotations(b_16, h_18);
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            t = c_41;
          }
      }
    }
  else
    {
      t = c_41;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = Option_3_0(a_5, e_5, g_5, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Clean_0_0(t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_c_19;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm meta_explode_0_0 (ATerm t)
{
  t = iowrap_3_0(s_4, t_4, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = meta_explode_0_0(t);
  return(t);
}
