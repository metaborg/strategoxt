#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Conc_2;
Symbol sym_AsFix_0;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_opt_1;
Symbol sym_layout_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Cong_2;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Str_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Anno_2;
Symbol sym_RootApp_1;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_AM_2;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_BA_2;
Symbol sym_Path_2;
static void init_module_constructors (void)
{
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
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
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
ATerm term_r_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_u_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_l_15;
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
ATerm term_n_13;
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
ATerm term_v_11;
ATerm term_j_11;
ATerm term_b_10;
ATerm term_s_7;
ATerm term_p_7;
ATerm term_n_7;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_c_6;
ATerm term_h_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_stderr_0);
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
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Cong_2, term_n_7, (ATerm) ATempty);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATempty);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(10);
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
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_h_5);
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
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_h_6, term_i_6);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_i_16, term_h_5);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_l_16, term_h_5);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_h_5);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, (ATerm) ATempty);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_i_16);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_h_5);
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
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm m_2 (ATerm j_1, ATerm n_1, ATerm t);
ATerm Clean_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm l_83 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm h_90 (ATerm), ATerm t);
static ATerm h_7 (ATerm m_4, ATerm t);
static ATerm i_7 (ATerm z_4, ATerm t);
ATerm str_explode_0_0 (ATerm t);
ATerm TrmOp_0_0 (ATerm t);
static ATerm x_4 (ATerm o_21, ATerm p_21, ATerm t);
ATerm foldr_3_0 (ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm a_5 (ATerm r_21, ATerm q_21, ATerm t);
static ATerm c_5 (ATerm p_117, ATerm t);
static ATerm d_5 (ATerm a_118, ATerm t);
static ATerm e_5 (ATerm e_117, ATerm t);
static ATerm z_12 (ATerm u_10, ATerm t);
ATerm trm_explode_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm MetaExplode_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm p_84 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm ImplodeLayout_1_0 (ATerm q_81 (ATerm), ATerm t);
static ATerm i_5 (ATerm r_38, ATerm s_38, ATerm t);
static ATerm j_5 (ATerm m_23, ATerm n_23, ATerm t);
static ATerm l_5 (ATerm o_89 (ATerm), ATerm j_162, ATerm s_23, ATerm t);
static ATerm k_5 (ATerm i_23, ATerm j_23, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm f_107 (ATerm), ATerm t);
static ATerm f_27 (ATerm z_26, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_5 (ATerm o_23, ATerm t);
static ATerm n_5 (ATerm k_37, ATerm l_37, ATerm t);
static ATerm o_5 (ATerm t_38, ATerm u_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_29 (ATerm j_28, ATerm t);
static ATerm l_29 (ATerm n_28, ATerm o_28, ATerm p_28, ATerm t);
static ATerm m_29 (ATerm x_28, ATerm y_28, ATerm z_28, ATerm t);
static ATerm p_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm u_5 (ATerm y_54, ATerm z_54, ATerm t);
ATerm if_verbose2_1_0 (ATerm o_105 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_5 (ATerm k_48, ATerm l_48, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_5 (ATerm f_53, ATerm g_53, ATerm e_53, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_5 (ATerm n_41, ATerm o_41, ATerm t);
ATerm foldr_2_0 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_105 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm need_help_1_0 (ATerm d_108 (ATerm), ATerm t);
static ATerm y_5 (ATerm q_56, ATerm r_56, ATerm s_56, ATerm t);
static ATerm z_5 (ATerm t_56, ATerm u_56, ATerm t);
ATerm lookup_table_0_1 (ATerm r_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm y_56, ATerm z_56, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm s_5 (ATerm v_56, ATerm w_56, ATerm t);
static ATerm t_5 (ATerm a_57, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm x_89 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_61 (ATerm), ATerm l_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_110 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm parse_options_1_0 (ATerm f_110 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm iowrap_3_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,j_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_h_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_c_6;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_6), b_0), term_e_6);
  o_0 = t;
  t = SSL_printnl(j_0, o_0);
  t = term_g_6;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_0 = NULL,t_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL;
      t = term_h_5;
      t = e_0(t);
      u_0 = t;
      t = term_h_6;
      v_0 = t;
      t = term_i_6;
      w_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, u_0);
      t = v_5(v_0, w_0, u_0, t);
      _fail(t);
    }
  else
    {
      ATerm b_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_0 = ATgetFirst((ATermList) t);
          t_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_0;
      t = c_0(t);
      t = term_h_5;
      t = d_0(t);
      b_1 = t;
      t = (ATerm) ATinsert(CheckATermList(t_0), b_1);
    }
  return(t);
}
static ATerm m_2 (ATerm j_1, ATerm n_1, ATerm t)
{
  ATerm t_1 = NULL;
  t = SSL_is_int(j_1);
  t = SSL_int_to_string(j_1);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, t_1);
  return(t);
}
ATerm Clean_0_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL;
  i_2 = t;
  if(match_cons(t, sym_Op_2))
    {
      j_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_2;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = j_2;
  if(match_string(t, "Wld"))
    {
      ATerm j_6 = t;
      int k_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_2(j_2, i_2, t);
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
      t = m_2(j_2, i_2, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  static ATerm h_0 (ATerm t)
  {
    t = topdown_1_0(l_83, t);
    return(t);
  }
  t = l_83(t);
  t = SRTS_all(h_0, t);
  return(t);
}
ATerm fetch_1_0 (ATerm h_90 (ATerm), ATerm t)
{
  static ATerm w_3 (ATerm t)
  {
    ATerm s_3 = NULL,u_3 = NULL,v_3 = NULL;
    s_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_3 = ATgetFirst((ATermList) t);
        v_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_6 = t;
      int r_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 = NULL,c_1 = NULL,p_2 = NULL;
          t = SSLgetAnnotations(s_3);
          s_0 = t;
          t = u_3;
          t = h_90(t);
          c_1 = t;
          t = (ATerm) ATinsert(CheckATermList(v_3), c_1);
          p_2 = t;
          t = SSLsetAnnotations(p_2, s_0);
          LocalPopChoice(r_6);
        }
      else
        {
          t = m_6;
          {
            ATerm l_1 = NULL,p_1 = NULL,q_2 = NULL;
            t = SSLgetAnnotations(s_3);
            l_1 = t;
            t = v_3;
            t = w_3(t);
            p_1 = t;
            t = (ATerm) ATinsert(CheckATermList(p_1), u_3);
            q_2 = t;
            t = SSLsetAnnotations(q_2, l_1);
          }
        }
    }
    return(t);
  }
  t = w_3(t);
  return(t);
}
static ATerm h_7 (ATerm m_4, ATerm t)
{
  ATerm n_4 = NULL;
  t = SSL_is_string(m_4);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, n_4));
  return(t);
}
static ATerm i_7 (ATerm z_4, ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,d_6 = NULL;
  t = SSL_explode_term(z_4);
  if(match_cons(t, sym__2))
    {
      a_6 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6;
  t = map_1_0(str_explode_0_0, t);
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, a_6, d_6);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,q_6 = NULL;
  q_6 = t;
  if(match_cons(t, sym_meta_var_1))
    {
      n_6 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_6), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_FromTerm_1))
        {
          n_6 = ATgetArgument(t, 0);
          {
            ATerm s_6 = t;
            int t_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = q_6;
                t = e_5(n_6, t);
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
                      t = h_7(q_6, t);
                      LocalPopChoice(v_6);
                    }
                  else
                    {
                      t = u_6;
                      t = i_7(q_6, t);
                    }
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_FromStrategy_1))
            {
              n_6 = ATgetArgument(t, 0);
              {
                ATerm w_6 = t;
                int x_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = q_6;
                    t = c_5(n_6, t);
                    LocalPopChoice(x_6);
                  }
                else
                  {
                    t = w_6;
                    {
                      ATerm y_6 = t;
                      int a_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = h_7(q_6, t);
                          LocalPopChoice(a_7);
                        }
                      else
                        {
                          t = y_6;
                          t = i_7(q_6, t);
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_FromApp_1))
                {
                  n_6 = ATgetArgument(t, 0);
                  {
                    ATerm f_7 = t;
                    int g_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym_FromStrategy_1, n_6);
                        t = c_5(n_6, t);
                        LocalPopChoice(g_7);
                      }
                    else
                      {
                        t = f_7;
                        {
                          ATerm j_7 = t;
                          int m_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = h_7(q_6, t);
                              LocalPopChoice(m_7);
                            }
                          else
                            {
                              t = j_7;
                              t = i_7(q_6, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = term_p_7;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          n_6 = ATgetFirst((ATermList) t);
                          o_6 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm q_7 = t;
                            int r_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_6 = NULL,c_7 = NULL;
                                t = n_6;
                                t = str_explode_0_0(t);
                                z_6 = t;
                                t = o_6;
                                t = str_explode_0_0(t);
                                c_7 = t;
                                t = (ATerm) ATmakeAppl(sym_Cong_2, term_s_7, (ATerm) ATinsert(ATinsert(ATempty, c_7), z_6));
                                LocalPopChoice(r_7);
                              }
                            else
                              {
                                t = q_7;
                                {
                                  ATerm v_7 = t;
                                  int w_7 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = h_7(q_6, t);
                                      LocalPopChoice(w_7);
                                    }
                                  else
                                    {
                                      t = v_7;
                                      t = i_7(q_6, t);
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          ATerm g_8 = t;
                          int j_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = h_7(q_6, t);
                              LocalPopChoice(j_8);
                            }
                          else
                            {
                              t = g_8;
                              t = i_7(q_6, t);
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
  ATerm k_7 = NULL,l_7 = NULL,o_7 = NULL,d_8 = NULL;
  d_8 = t;
  t = SSL_explode_term(d_8);
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7;
  t = map_1_0(trm_explode_0_0, t);
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, k_7, o_7);
  return(t);
}
static ATerm x_4 (ATerm o_21, ATerm p_21, ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL;
  t = o_21;
  t = trm_explode_0_0(t);
  e_8 = t;
  t = p_21;
  t = trm_explode_0_0(t);
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_7, (ATerm) ATinsert(ATinsert(ATempty, f_8), e_8));
  return(t);
}
ATerm foldr_3_0 (ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm t)
{
  ATerm p_8 = NULL,v_8 = NULL,w_8 = NULL;
  p_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_8;
      t = y_96(t);
    }
  else
    {
      ATerm a_9 = NULL,b_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_8 = ATgetFirst((ATermList) t);
          w_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_8;
      t = a_97(t);
      a_9 = t;
      t = w_8;
      t = foldr_3_0(y_96, z_96, a_97, t);
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_9, b_9);
      t = z_96(t);
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm c_10 = NULL,h_10 = NULL,w_1 = NULL;
  c_10 = t;
  t = SSL_explode_term(c_10);
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_8 = ATgetArgument(t, 1);
        if(((ATgetType(q_8) == AT_LIST) && !(ATisEmpty(q_8))))
          {
            h_10 = ATgetFirst((ATermList) q_8);
            {
              ATerm x_8 = (ATerm) ATgetNext((ATermList) q_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(c_10);
  if(match_cons(t, sym__2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_9 = ATgetArgument(t, 1);
        if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
          {
            ATerm p_9 = ATgetFirst((ATermList) m_9);
            ATerm s_9 = (ATerm) ATgetNext((ATermList) m_9);
            if(((ATgetType(s_9) == AT_LIST) && !(ATisEmpty(s_9))))
              {
                w_1 = ATgetFirst((ATermList) s_9);
                {
                  ATerm t_9 = (ATerm) ATgetNext((ATermList) s_9);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_7, (ATerm) ATinsert(ATinsert(ATempty, w_1), h_10));
  return(t);
}
static ATerm a_5 (ATerm r_21, ATerm q_21, ATerm t)
{
  ATerm l_9 = NULL;
  static ATerm m_0 (ATerm t)
  {
    t = q_21;
    {
      ATerm u_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_9 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              x_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_s_7, (ATerm) ATinsert(ATinsert(ATempty, term_b_10), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, x_9))));
          LocalPopChoice(y_9);
        }
      else
        {
          t = u_9;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = r_21;
  if(match_cons(t, sym_meta_listvar_1))
    {
      l_9 = ATgetArgument(t, 0);
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, l_9)));
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            t = r_21;
          }
      }
    }
  else
    {
      t = r_21;
    }
  t = foldr_3_0(m_0, p_0, trm_explode_0_0, t);
  return(t);
}
static ATerm c_5 (ATerm p_117, ATerm t)
{
  t = p_117;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm d_5 (ATerm a_118, ATerm t)
{
  ATerm m_10 = NULL;
  t = a_118;
  t = MetaExplode_0_0(t);
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, m_10);
  return(t);
}
static ATerm e_5 (ATerm e_117, ATerm t)
{
  t = e_117;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm z_12 (ATerm u_10, ATerm t)
{
  ATerm v_10 = NULL;
  t = SSL_is_int(u_10);
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, v_10);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11 = NULL,k_11 = NULL;
      k_11 = t;
      if(match_cons(t, sym_meta_var_1))
        {
          e_11 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, e_11);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              e_11 = ATgetArgument(t, 0);
              {
                ATerm i_10 = t;
                int j_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym_Op_2, term_s_7, (ATerm) ATinsert(ATinsert(ATempty, term_b_10), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, e_11))));
                    LocalPopChoice(j_10);
                  }
                else
                  {
                    t = i_10;
                    t = z_12(k_11, t);
                  }
              }
            }
          else
            {
              t = z_12(k_11, t);
            }
        }
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 = NULL,z_1 = NULL;
            z_1 = t;
            t = SSL_is_string(z_1);
            y_1 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, y_1);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm n_10 = t;
              int o_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
                  w_11 = t;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      x_11 = ATgetArgument(t, 0);
                      t = w_11;
                      t = e_5(x_11, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          x_11 = ATgetArgument(t, 0);
                          t = w_11;
                          t = d_5(x_11, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              x_11 = ATgetArgument(t, 0);
                              t = w_11;
                              t = c_5(x_11, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_WithAnno_2))
                                {
                                  x_11 = ATgetArgument(t, 0);
                                  y_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_2 = NULL,d_2 = NULL;
                                    t = x_11;
                                    t = trm_explode_0_0(t);
                                    c_2 = t;
                                    t = y_11;
                                    t = MetaExplode_0_0(t);
                                    d_2 = t;
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, c_2, d_2);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Conc_2))
                                    {
                                      x_11 = ATgetArgument(t, 0);
                                      y_11 = ATgetArgument(t, 1);
                                      t = w_11;
                                      t = a_5(x_11, y_11, t);
                                    }
                                  else
                                    {
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = term_b_10;
                                        }
                                      else
                                        {
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              x_11 = ATgetFirst((ATermList) t);
                                              y_11 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = w_11;
                                          t = x_4(x_11, y_11, t);
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
static ATerm q_0 (ATerm t)
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
  t = alltd_1_0(q_0, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  static ATerm o_13 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_84(t);
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = SRTS_one(o_13, t);
      }
    return(t);
  }
  t = o_13(t);
  return(t);
}
ATerm alltd_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  static ATerm p_13 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_85(t);
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = SRTS_all(p_13, t);
      }
    return(t);
  }
  t = p_13(t);
  return(t);
}
ATerm ImplodeLayout_1_0 (ATerm q_81 (ATerm), ATerm t)
{
  static ATerm j_21 (ATerm t)
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm z_20 = NULL,a_21 = NULL,d_21 = NULL,f_21 = NULL;
      a_21 = t;
      if(match_cons(t, sym_BA_2))
        {
          d_21 = ATgetArgument(t, 0);
          f_21 = ATgetArgument(t, 1);
          {
            ATerm o_2 = NULL,t_2 = NULL,u_2 = NULL,z_2 = NULL;
            t = SSLgetAnnotations(a_21);
            o_2 = t;
            t = d_21;
            t = ImplodeLayout_1_0(_fail, t);
            t_2 = t;
            t = f_21;
            t = ImplodeLayout_1_0(_id, t);
            u_2 = t;
            t = (ATerm) ATmakeAppl(sym_BA_2, t_2, u_2);
            z_2 = t;
            t = SSLsetAnnotations(z_2, o_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              d_21 = ATgetArgument(t, 0);
              {
                ATerm t_3 = NULL,a_4 = NULL,a_3 = NULL;
                t = SSLgetAnnotations(a_21);
                t_3 = t;
                t = d_21;
                t = ImplodeLayout_1_0(_id, t);
                a_4 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, a_4);
                a_3 = t;
                t = SSLsetAnnotations(a_3, t_3);
              }
            }
          else
            {
              if(match_cons(t, sym_AM_2))
                {
                  d_21 = ATgetArgument(t, 0);
                  f_21 = ATgetArgument(t, 1);
                  {
                    ATerm i_4 = NULL,l_4 = NULL,o_4 = NULL,b_3 = NULL;
                    t = SSLgetAnnotations(a_21);
                    i_4 = t;
                    t = d_21;
                    t = j_21(t);
                    l_4 = t;
                    t = f_21;
                    t = ImplodeLayout_1_0(_id, t);
                    o_4 = t;
                    t = (ATerm) ATmakeAppl(sym_AM_2, l_4, o_4);
                    b_3 = t;
                    t = SSLsetAnnotations(b_3, i_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RuleNoCond_2))
                    {
                      d_21 = ATgetArgument(t, 0);
                      f_21 = ATgetArgument(t, 1);
                      {
                        ATerm f_5 = NULL,r_5 = NULL,w_5 = NULL,c_3 = NULL;
                        t = SSLgetAnnotations(a_21);
                        f_5 = t;
                        t = d_21;
                        t = j_21(t);
                        r_5 = t;
                        t = f_21;
                        t = ImplodeLayout_1_0(_id, t);
                        w_5 = t;
                        t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, r_5, w_5);
                        c_3 = t;
                        t = SSLsetAnnotations(c_3, f_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Rule_3))
                        {
                          d_21 = ATgetArgument(t, 0);
                          f_21 = ATgetArgument(t, 1);
                          z_20 = ATgetArgument(t, 2);
                          {
                            ATerm p_6 = NULL,b_7 = NULL,d_7 = NULL,e_7 = NULL,d_3 = NULL;
                            t = SSLgetAnnotations(a_21);
                            p_6 = t;
                            t = d_21;
                            t = j_21(t);
                            b_7 = t;
                            t = f_21;
                            t = ImplodeLayout_1_0(_id, t);
                            d_7 = t;
                            t = z_20;
                            t = j_21(t);
                            e_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Rule_3, b_7, d_7, e_7);
                            d_3 = t;
                            t = SSLsetAnnotations(d_3, p_6);
                          }
                        }
                      else
                        {
                          ATerm t_7 = NULL,u_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,h_8 = NULL,i_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,j_3 = NULL,i_3 = NULL,g_3 = NULL,f_3 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              d_21 = ATgetArgument(t, 0);
                              f_21 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(a_21);
                          u_7 = t;
                          t = d_21;
                          if(match_cons(t, sym_prod_3))
                            {
                              z_7 = ATgetArgument(t, 0);
                              a_8 = ATgetArgument(t, 1);
                              b_8 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(d_21);
                          y_7 = t;
                          t = a_8;
                          if(match_cons(t, sym_cf_1))
                            {
                              i_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(a_8);
                          h_8 = t;
                          t = i_8;
                          if(match_cons(t, sym_opt_1))
                            {
                              n_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(i_8);
                          m_8 = t;
                          t = n_8;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_opt_1, n_8);
                          f_3 = t;
                          t = SSLsetAnnotations(f_3, m_8);
                          o_8 = t;
                          t = (ATerm) ATmakeAppl(sym_cf_1, o_8);
                          g_3 = t;
                          t = SSLsetAnnotations(g_3, h_8);
                          l_8 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, z_7, l_8, b_8);
                          i_3 = t;
                          t = SSLsetAnnotations(i_3, y_7);
                          c_8 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, c_8, f_21);
                          j_3 = t;
                          t = SSLsetAnnotations(j_3, u_7);
                          x_7 = t;
                          {
                            ATerm c_11 = t;
                            int d_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,z_8 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,n_9 = NULL,o_9 = NULL,q_9 = NULL,r_9 = NULL,v_9 = NULL,w_9 = NULL,z_9 = NULL,a_10 = NULL,y_3 = NULL,r_3 = NULL,q_3 = NULL,p_3 = NULL,o_3 = NULL,n_3 = NULL;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    s_8 = ATgetArgument(t, 0);
                                    t_8 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(x_7);
                                r_8 = t;
                                t = s_8;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    c_9 = ATgetArgument(t, 0);
                                    d_9 = ATgetArgument(t, 1);
                                    e_9 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(s_8);
                                z_8 = t;
                                t = c_9;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    q_9 = ATgetFirst((ATermList) t);
                                    r_9 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(c_9);
                                o_9 = t;
                                t = q_9;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    z_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(q_9);
                                w_9 = t;
                                t = z_9;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_cf_1, z_9);
                                n_3 = t;
                                t = SSLsetAnnotations(n_3, w_9);
                                a_10 = t;
                                t = r_9;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = (ATerm) ATinsert(CheckATermList(r_9), a_10);
                                o_3 = t;
                                t = SSLsetAnnotations(o_3, o_9);
                                v_9 = t;
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
                                    k_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(h_9);
                                j_9 = t;
                                t = k_9;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_opt_1, k_9);
                                p_3 = t;
                                t = SSLsetAnnotations(p_3, j_9);
                                n_9 = t;
                                t = (ATerm) ATmakeAppl(sym_cf_1, n_9);
                                q_3 = t;
                                t = SSLsetAnnotations(q_3, g_9);
                                i_9 = t;
                                t = (ATerm) ATmakeAppl(sym_prod_3, v_9, i_9, e_9);
                                r_3 = t;
                                t = SSLsetAnnotations(r_3, z_8);
                                f_9 = t;
                                t = t_8;
                                {
                                  static ATerm y_0 (ATerm t)
                                  {
                                    if(match_cons(t, sym_meta_var_1))
                                      {
                                        if(((t_7 != NULL) && (t_7 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          t_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    return(t);
                                  }
                                  t = oncetd_1_0(y_0, t);
                                }
                                u_8 = t;
                                t = (ATerm) ATmakeAppl(sym_appl_2, f_9, u_8);
                                y_3 = t;
                                t = SSLsetAnnotations(y_3, r_8);
                                LocalPopChoice(d_11);
                                t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(t_7));
                              }
                            else
                              {
                                t = c_11;
                                {
                                  ATerm f_11 = t;
                                  int g_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm h_11 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = q_81(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = h_11;
                                        }
                                      t = term_l_6;
                                      LocalPopChoice(g_11);
                                    }
                                  else
                                    {
                                      t = f_11;
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
    t = alltd_1_0(x_0, t);
    return(t);
  }
  t = j_21(t);
  return(t);
}
static ATerm i_5 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm l_22 = NULL;
  t = SSL_fputc(r_38, s_38);
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_22);
  return(t);
}
static ATerm j_5 (ATerm m_23, ATerm n_23, ATerm t)
{
  ATerm o_22 = NULL;
  t = SSL_write_term_to_stream_text(m_23, n_23);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_22);
  return(t);
}
static ATerm l_5 (ATerm o_89 (ATerm), ATerm j_162, ATerm s_23, ATerm t)
{
  ATerm q_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_162, term_j_11);
  t = p_5(t);
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_22, s_23);
  t = o_89(t);
  t = fclose_0_0(t);
  t = s_23;
  return(t);
}
static ATerm k_5 (ATerm i_23, ATerm j_23, ATerm t)
{
  ATerm r_22 = NULL;
  t = SSL_write_term_to_stream_baf(i_23, j_23);
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_22);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(match_cons(l_11, sym_Stream_1))
        {
          a_11 = ATgetArgument(l_11, 0);
        }
      else
        _fail(t);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(a_11, b_11, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,t_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      if(match_cons(s_11, sym_Stream_1))
        {
          t_11 = ATgetArgument(s_11, 0);
        }
      else
        _fail(t);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(t_11, u_11, t);
  p_11 = t;
  t = term_v_11;
  q_11 = t;
  t = p_11;
  if(match_cons(t, sym_Stream_1))
    {
      r_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, p_11);
  t = i_5(q_11, r_11, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,k_23 = NULL,t_23 = NULL,p_25 = NULL,q_25 = NULL,s_14 = NULL,r_14 = NULL;
  a_23 = t;
  if(match_cons(t, sym__2))
    {
      h_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_23);
  g_23 = t;
  t = h_23;
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_22 != NULL) && (z_22 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_0, t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = term_b_12;
        z_22 = t;
      }
  }
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_23, k_23);
  r_14 = t;
  t = SSLsetAnnotations(r_14, g_23);
  t = a_23;
  if(match_cons(t, sym__2))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_23);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_23, (ATerm) ATmakeAppl(sym__2, not_null(z_22), d_23));
  s_14 = t;
  t = SSLsetAnnotations(s_14, b_23);
  f_23 = t;
  if(match_cons(t, sym__2))
    {
      p_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,v_14 = NULL;
        t = SSLgetAnnotations(f_23);
        r_10 = t;
        t = p_25;
        t = fetch_1_0(a_1, t);
        w_10 = t;
        t = q_25;
        if(match_cons(t, sym__2))
          {
            y_10 = ATgetArgument(t, 0);
            z_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_5(d_1, y_10, z_10, t);
        x_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
        v_14 = t;
        t = SSLsetAnnotations(v_14, r_10);
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        {
          ATerm i_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,w_14 = NULL;
          t = SSLgetAnnotations(f_23);
          i_11 = t;
          t = q_25;
          if(match_cons(t, sym__2))
            {
              n_11 = ATgetArgument(t, 0);
              o_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_5(e_1, n_11, o_11, t);
          m_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_25, m_11);
          w_14 = t;
          t = SSLsetAnnotations(w_14, i_11);
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
ATerm apply_strategy_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  d_26 = t;
  t = dtime_0_0(t);
  t = d_26;
  t = f_107(t);
  c_26 = t;
  t = dtime_0_0(t);
  z_25 = t;
  t = c_26;
  if(match_cons(t, sym__2))
    {
      a_26 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_26), (ATerm) ATmakeAppl(sym_Runtime_1, z_25)), b_26);
  return(t);
}
static ATerm f_27 (ATerm z_26, ATerm t)
{
  t = SSL_fclose(z_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  d_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_27 = ATgetArgument(t, 0);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_27);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = f_27(d_27, t);
          }
      }
    }
  else
    {
      t = f_27(d_27, t);
    }
  return(t);
}
static ATerm m_5 (ATerm o_23, ATerm t)
{
  t = SSL_read_term_from_stream(o_23);
  return(t);
}
static ATerm n_5 (ATerm k_37, ATerm l_37, ATerm t)
{
  t = SSL_strcat(k_37, l_37);
  return(t);
}
static ATerm o_5 (ATerm t_38, ATerm u_38, ATerm t)
{
  ATerm i_27 = NULL;
  t = SSL_fopen(t_38, u_38);
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_27);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_27 = NULL;
  t = SSL_stdin_stream();
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_27 = NULL;
  t = SSL_stdout_stream();
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_27 = NULL;
  t = SSL_stderr_stream();
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_27);
  return(t);
}
static ATerm k_29 (ATerm j_28, ATerm t)
{
  ATerm k_28 = NULL;
  t = SSL_explode_term(j_28);
  if(match_cons(t, sym__2))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_12 = ATgetArgument(t, 1);
        if(((ATgetType(h_12) == AT_LIST) && !(ATisEmpty(h_12))))
          {
            k_28 = ATgetFirst((ATermList) h_12);
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
  t = k_28;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_28;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_28;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_28;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_29 (ATerm n_28, ATerm o_28, ATerm p_28, ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,v_28 = NULL,f_15 = NULL;
  t = SSLgetAnnotations(p_28);
  s_28 = t;
  t = n_28;
  if(match_cons(t, sym_Path_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_28, o_28);
  f_15 = t;
  t = SSLsetAnnotations(f_15, s_28);
  if(match_cons(t, sym__2))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(q_28, r_28, t);
  return(t);
}
static ATerm m_29 (ATerm x_28, ATerm y_28, ATerm z_28, ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,f_29 = NULL,g_15 = NULL;
  t = SSLgetAnnotations(z_28);
  c_29 = t;
  t = SSL_is_string(x_28);
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_29, y_28);
  g_15 = t;
  t = SSLsetAnnotations(g_15, c_29);
  if(match_cons(t, sym__2))
    {
      a_29 = ATgetArgument(t, 0);
      b_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(a_29, b_29, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  h_29 = t;
  if(match_cons(t, sym__2))
    {
      i_29 = ATgetArgument(t, 0);
      j_29 = ATgetArgument(t, 1);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_29(h_29, t);
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm l_12 = t;
              int m_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_29(i_29, j_29, h_29, t);
                  LocalPopChoice(m_12);
                }
              else
                {
                  t = l_12;
                  t = m_29(i_29, j_29, h_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_29(h_29, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,v_29 = NULL;
  v_29 = t;
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_29, term_r_12);
        t = p_5(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm n_12 = NULL,o_12 = NULL;
          t = term_s_12;
          o_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_12, v_29);
          t = n_5(o_12, v_29, t);
          n_12 = t;
          t = SSL_perror(n_12);
          _fail(t);
        }
      }
  }
  p_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(q_29, t);
  o_29 = t;
  t = p_29;
  t = fclose_0_0(t);
  t = o_29;
  return(t);
}
static ATerm u_5 (ATerm y_54, ATerm z_54, ATerm t)
{
  ATerm y_29 = NULL;
  t = lookup_table_0_1(y_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(z_54, y_29, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  {
    ATerm u_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
        t = term_x_12;
        e_30 = t;
        t = term_y_12;
        f_30 = t;
        t = term_c_13;
        t = u_5(e_30, f_30, t);
        d_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_30, term_d_13);
        t = geq_0_0(t);
        t = b_30;
        t = o_105(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = u_12;
        t = b_30;
      }
  }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  if(match_string(t, "-k"))
    {
      t = i_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_30;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  t = SSL_string_to_int(j_30);
  k_30 = t;
  t = term_e_13;
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, k_30);
  t = x_5(l_30, k_30, t);
  t = j_30;
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
static ATerm i_1 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  if(match_string(t, "-S"))
    {
      t = n_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_30;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  t = term_y_12;
  o_30 = t;
  t = term_h_13;
  p_30 = t;
  t = term_i_13;
  t = x_5(o_30, p_30, t);
  t = term_j_13;
  return(t);
}
static ATerm m_1 (ATerm t)
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
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  t = SSL_string_to_int(u_30);
  v_30 = t;
  t = term_y_12;
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, v_30);
  t = x_5(w_30, v_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_30);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_m_13;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  t = term_n_13;
  x_30 = t;
  t = term_h_5;
  y_30 = t;
  t = term_q_13;
  t = x_5(x_30, y_30, t);
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
      t = Option_3_0(i_1, k_1, m_1, t);
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
            t = Option_3_0(s_1, u_1, v_1, t);
          }
      }
    }
  return(t);
}
static ATerm x_5 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  t = term_x_12;
  z_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_12, k_48, l_48);
  t = lookup_table_0_1(z_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(k_48, l_48, a_31, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_12, k_48, l_48);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm d_31 = NULL;
  d_31 = t;
  if(match_string(t, "-o"))
    {
      t = d_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_31;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  e_31 = t;
  t = term_y_13;
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, e_31);
  t = x_5(f_31, e_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_31);
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
static ATerm v_5 (ATerm f_53, ATerm g_53, ATerm e_53, ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_53, g_53);
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
        t = (ATerm) ATmakeAppl(sym__2, f_53, g_53);
        t = u_5(f_53, g_53, t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATempty;
      }
  }
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_53, g_53, (ATerm) ATinsert(CheckATermList(i_31), e_53));
  t = lookup_table_0_1(f_53, t);
  l_31 = t;
  t = (ATerm) ATinsert(CheckATermList(i_31), e_53);
  j_31 = t;
  t = l_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(g_53, j_31, k_31, t);
  t = h_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
      t = term_h_5;
      t = n_0(t);
      w_31 = t;
      t = term_h_6;
      x_31 = t;
      t = term_i_6;
      y_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_6, term_i_6, w_31);
      t = v_5(x_31, y_31, w_31, t);
      _fail(t);
    }
  else
    {
      ATerm c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_31 = ATgetFirst((ATermList) t);
          t_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_31 = ATgetFirst((ATermList) t);
          v_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_31;
      t = k_0(t);
      t = u_31;
      t = l_0(t);
      c_32 = t;
      t = (ATerm) ATinsert(CheckATermList(v_31), c_32);
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  if(match_string(t, "-i"))
    {
      t = e_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_32;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  f_32 = t;
  t = term_f_14;
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, f_32);
  t = x_5(g_32, f_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_32);
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
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_5;
  t = whoami_0_0(t);
  h_32 = t;
  t = term_c_6;
  j_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_14), h_32);
  k_32 = t;
  t = SSL_printnl(j_32, k_32);
  t = term_g_6;
  i_32 = t;
  t = SSL_exit(i_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL;
  t = term_x_12;
  m_32 = t;
  t = term_j_14;
  n_32 = t;
  t = term_k_14;
  t = u_5(m_32, n_32, t);
  return(t);
}
static ATerm q_5 (ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_41, o_41);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = SSL_addr(n_41, o_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_32;
      t = w_96(t);
    }
  else
    {
      ATerm u_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_32 = ATgetFirst((ATermList) t);
          r_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_32;
      t = foldr_2_0(w_96, x_96, t);
      u_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_32, u_32);
      t = x_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_h_13;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  if(match_cons(t, sym__2))
    {
      a_13 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(a_13, b_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_32 = NULL,t_12 = NULL,v_12 = NULL;
  t = times_0_0(t);
  v_12 = t;
  t = SSL_explode_term(v_12);
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12;
  t = foldr_2_0(h_2, k_2, t);
  x_32 = t;
  t = SSL_TicksToSeconds(x_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_33;
        if((j_33 != t))
          {
            _fail(t);
          }
        t = i_33;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
        {
          ATerm t_14 = t;
          int x_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_33, k_33);
              LocalPopChoice(x_14);
            }
          else
            {
              t = t_14;
              t = SSL_gtr(j_33, k_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
        t = term_x_12;
        r_33 = t;
        t = term_y_12;
        s_33 = t;
        t = term_c_13;
        t = u_5(r_33, s_33, t);
        q_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_33, term_g_6);
        t = geq_0_0(t);
        t = o_33;
        t = n_105(t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = o_33;
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,x_33 = NULL,y_33 = NULL;
  t = run_time_0_0(t);
  u_33 = t;
  t = term_h_5;
  t = whoami_0_0(t);
  v_33 = t;
  t = term_c_6;
  x_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_15), u_33), term_b_15), v_33);
  y_33 = t;
  t = SSL_printnl(x_33, y_33);
  t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_15), u_33), term_b_15), v_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_13;
  z_33 = t;
  t = SSL_exit(z_33);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  k_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_34 = ATgetArgument(t, 0);
          {
            ATerm v_13 = NULL,m_15 = NULL;
            t = SSLgetAnnotations(k_34);
            v_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_34);
            m_15 = t;
            t = SSLsetAnnotations(m_15, v_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_34 = NULL,d_34 = NULL;
      t = term_x_12;
      c_34 = t;
      t = term_h_15;
      d_34 = t;
      t = term_i_15;
      t = u_5(c_34, d_34, t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      t = fetch_1_0(r_2, t);
    }
  t = d_108(t);
  return(t);
}
static ATerm y_5 (ATerm q_56, ATerm r_56, ATerm s_56, ATerm t)
{
  ATerm m_34 = NULL;
  t = SSL_hashtable_put(s_56, q_56, r_56);
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_34);
  return(t);
}
static ATerm z_5 (ATerm t_56, ATerm u_56, ATerm t)
{
  t = SSL_hashtable_get(u_56, t_56);
  return(t);
}
ATerm lookup_table_0_1 (ATerm r_54, ATerm t)
{
  ATerm v_34 = NULL;
  t = table_hashtable_0_0(t);
  v_34 = t;
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL;
        t = v_34;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_5(r_54, b_14, t);
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        {
          ATerm g_14 = NULL;
          t = r_54;
          t = table_create_0_0(t);
          t = v_34;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_5(r_54, g_14, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm y_56, ATerm z_56, ATerm t)
{
  ATerm y_34 = NULL;
  t = SSL_hashtable_create(y_56, z_56);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_34);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,d_35 = NULL,e_35 = NULL;
  z_34 = t;
  t = term_l_15;
  d_35 = t;
  t = term_n_15;
  e_35 = t;
  t = z_34;
  t = new_hashtable_0_2(d_35, e_35, t);
  a_35 = t;
  t = z_34;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(z_34, a_35, b_35, t);
  t = z_34;
  return(t);
}
static ATerm s_5 (ATerm v_56, ATerm w_56, ATerm t)
{
  ATerm f_35 = NULL;
  t = SSL_hashtable_remove(w_56, v_56);
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_35);
  return(t);
}
static ATerm t_5 (ATerm a_57, ATerm t)
{
  ATerm g_35 = NULL;
  t = SSL_hashtable_destroy(a_57);
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_35);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_35 = NULL;
  t = SSL_table_hashtable();
  h_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_35);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
  i_35 = t;
  t = table_hashtable_0_0(t);
  j_35 = t;
  t = lookup_table_0_1(i_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(l_35, t);
  t = j_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(i_35, k_35, t);
  t = i_35;
  return(t);
}
ATerm map_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  static ATerm a_36 (ATerm t)
  {
    ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
    x_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_35;
      }
    else
      {
        ATerm l_14 = NULL,u_14 = NULL,y_14 = NULL,o_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_35 = ATgetFirst((ATermList) t);
            z_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_35);
        l_14 = t;
        t = y_35;
        t = x_89(t);
        u_14 = t;
        t = z_35;
        t = a_36(t);
        y_14 = t;
        t = (ATerm) ATinsert(CheckATermList(y_14), u_14);
        o_15 = t;
        t = SSLsetAnnotations(o_15, l_14);
      }
    return(t);
  }
  t = a_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_36 = ATgetFirst((ATermList) t);
      e_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_36 = NULL,j_36 = NULL;
        static ATerm s_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_36)), not_null(j_36));
          return(t);
        }
        t = e_36;
        t = i_0(t);
        if(((i_36 != NULL) && (i_36 != t)))
          _fail(t);
        else
          i_36 = t;
        t = d_36;
        t = g_0(t);
        if(((j_36 != NULL) && (j_36 != t)))
          _fail(t);
        else
          j_36 = t;
        t = e_36;
        t = reverse_acc_2_0(g_0, s_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_5;
      t = i_0(t);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,q_15 = NULL;
  r_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_36);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_36);
  q_15 = t;
  t = SSLsetAnnotations(q_15, p_36);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_36), term_p_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  ATerm r_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_36 = NULL,o_36 = NULL;
      t = term_x_12;
      n_36 = t;
      t = term_j_14;
      o_36 = t;
      t = term_k_14;
      t = u_5(n_36, o_36, t);
      LocalPopChoice(t_15);
    }
  else
    {
      t = r_15;
      t = fetch_1_0(v_2, t);
    }
  t = term_v_15;
  t = echo_0_0(t);
  t = term_h_6;
  l_36 = t;
  t = term_i_6;
  m_36 = t;
  t = term_y_15;
  t = u_5(l_36, m_36, t);
  t = reverse_acc_2_0(_id, w_2, t);
  t = map_1_0(x_2, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_36;
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
            t = v_36;
          }
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = (ATerm) ATinsert(ATempty, v_36);
      }
  }
  w_36 = t;
  t = term_b_12;
  x_36 = t;
  t = SSL_printnl(x_36, w_36);
  t = v_36;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  t = term_x_12;
  b_37 = t;
  t = term_j_14;
  c_37 = t;
  t = term_k_14;
  t = u_5(b_37, c_37, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL;
  t = term_i_16;
  d_37 = t;
  t = term_h_5;
  e_37 = t;
  t = term_j_16;
  t = x_5(d_37, e_37, t);
  return(t);
}
static ATerm h_3 (ATerm t)
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
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
  t = term_i_16;
  h_37 = t;
  t = term_h_5;
  i_37 = t;
  t = term_j_16;
  t = x_5(h_37, i_37, t);
  t = term_l_16;
  f_37 = t;
  t = term_h_5;
  g_37 = t;
  t = term_m_16;
  t = x_5(f_37, g_37, t);
  t = term_n_16;
  return(t);
}
static ATerm m_3 (ATerm t)
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
      t = Option_3_0(y_2, e_3, h_3, t);
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      t = Option_3_0(k_3, l_3, m_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_61 (ATerm), ATerm l_61 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,s_15 = NULL;
  q_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_37 = ATgetFirst((ATermList) t);
      n_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_37);
  j_37 = t;
  t = m_37;
  t = k_61(t);
  o_37 = t;
  t = n_37;
  t = l_61(t);
  p_37 = t;
  t = (ATerm) ATinsert(CheckATermList(p_37), o_37);
  s_15 = t;
  t = SSLsetAnnotations(s_15, j_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_110 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,a_38 = NULL,b_38 = NULL,u_15 = NULL;
  v_37 = t;
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_16;
        t = g_110(t);
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
      }
  }
  t = v_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_37 = ATgetFirst((ATermList) t);
      y_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_37);
  w_37 = t;
  t = term_j_14;
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, x_37);
  t = x_5(b_38, x_37, t);
  t = y_37;
  {
    static ATerm l_38 (ATerm t)
    {
      ATerm v_16 = t;
      int w_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_38 = NULL;
              e_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_38;
              LocalPopChoice(y_16);
            }
          else
            {
              t = x_16;
              t = g_110(t);
              t = Cons_2_0(_id, l_38, t);
            }
          LocalPopChoice(w_16);
        }
      else
        {
          t = v_16;
          {
            ATerm h_38 = NULL,i_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_38 = ATgetFirst((ATermList) t);
                i_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_38), (ATerm) ATmakeAppl(sym_Undefined_1, h_38));
          }
        }
      return(t);
    }
    t = l_38(t);
  }
  a_38 = t;
  t = (ATerm) ATinsert(CheckATermList(a_38), (ATerm) ATmakeAppl(sym_Program_1, x_37));
  u_15 = t;
  t = SSLsetAnnotations(u_15, w_37);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  if(match_string(t, "--help"))
    {
      t = f_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_39;
        }
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL;
  t = term_h_15;
  g_39 = t;
  t = term_h_5;
  h_39 = t;
  t = term_z_16;
  t = x_5(g_39, h_39, t);
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
ATerm parse_options_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm q_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
  y_38 = t;
  t = term_h_6;
  z_38 = t;
  t = term_e_17;
  t = lookup_table_0_1(z_38, t);
  e_39 = t;
  t = term_i_6;
  a_39 = t;
  t = (ATerm) ATempty;
  c_39 = t;
  t = e_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(a_39, c_39, d_39, t);
  t = y_38;
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm f_17 = t;
      int h_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_110(t);
          LocalPopChoice(h_17);
        }
      else
        {
          t = f_17;
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
    t = parse_options_p__1_0(x_3, t);
  }
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_39 = NULL;
        s_39 = t;
        {
          ATerm n_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_15 = NULL;
              t = s_39;
              {
                ATerm p_17 = t;
                int q_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_15 = NULL,f_16 = NULL;
                    t = term_x_12;
                    z_15 = t;
                    t = term_h_15;
                    f_16 = t;
                    t = term_i_15;
                    t = u_5(z_15, f_16, t);
                    LocalPopChoice(q_17);
                  }
                else
                  {
                    t = p_17;
                    t = fetch_1_0(d_4, t);
                  }
              }
              t = s_39;
              t = default_system_usage_0_0(t);
              t = term_h_13;
              x_15 = t;
              t = SSL_exit(x_15);
              LocalPopChoice(o_17);
            }
          else
            {
              t = n_17;
              {
                ATerm t_16 = NULL,a_17 = NULL,b_17 = NULL;
                t = term_x_12;
                a_17 = t;
                t = term_i_16;
                b_17 = t;
                t = term_r_17;
                t = u_5(a_17, b_17, t);
                t = s_39;
                t = default_system_about_0_0(t);
                t = term_h_13;
                t_16 = t;
                t = SSL_exit(t_16);
              }
            }
        }
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
              static ATerm e_4 (ATerm t)
              {
                ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,w_15 = NULL;
                y_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_39);
                w_39 = t;
                t = x_39;
                if(((q_38 != NULL) && (q_38 != t)))
                  _fail(t);
                else
                  q_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_39);
                w_15 = t;
                t = SSLsetAnnotations(w_15, w_39);
                return(t);
              }
              t = fetch_1_0(e_4, t);
              t = term_c_6;
              u_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_38)), term_v_17);
              v_39 = t;
              t = SSL_printnl(u_39, v_39);
              t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_38)), term_v_17));
              t = default_system_usage_0_0(t);
              t = term_g_6;
              t_39 = t;
              t = SSL_exit(t_39);
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
            }
        }
      }
  }
  x_38 = t;
  t = term_h_6;
  t = table_destroy_0_0(t);
  t = x_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  t = parse_options_1_0(f_108, t);
  d_40 = t;
  t = term_w_17;
  t = table_create_0_0(t);
  t = term_w_17;
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, d_40);
  t = lookup_table_0_1(e_40, t);
  h_40 = t;
  t = term_x_17;
  f_40 = t;
  t = h_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(f_40, d_40, g_40, t);
  t = d_40;
  t = h_108(t);
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_108, t);
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
              t = i_108(t);
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
  ATerm i_40 = NULL,j_40 = NULL;
  t = term_c_18;
  i_40 = t;
  t = term_h_5;
  j_40 = t;
  t = term_d_18;
  t = x_5(i_40, j_40, t);
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
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  k_40 = t;
  t = term_x_12;
  o_40 = t;
  t = term_j_14;
  p_40 = t;
  t = term_k_14;
  t = u_5(o_40, p_40, t);
  l_40 = t;
  t = term_c_6;
  m_40 = t;
  t = (ATerm) ATinsert(ATempty, l_40);
  n_40 = t;
  t = SSL_printnl(m_40, n_40);
  t = k_40;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm t)
{
  static ATerm f_4 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_107(t);
        LocalPopChoice(h_18);
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
                ATerm m_18 = t;
                int n_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(n_18);
                  }
                else
                  {
                    t = m_18;
                    {
                      ATerm o_18 = t;
                      int p_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_4, k_4, p_4, t);
                          LocalPopChoice(p_18);
                        }
                      else
                        {
                          t = o_18;
                          {
                            ATerm q_18 = t;
                            int s_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(s_18);
                              }
                            else
                              {
                                t = q_18;
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
    ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
    r_40 = t;
    {
      ATerm t_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm r_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((q_40 != NULL) && (q_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_40 = ATgetArgument(t, 0);
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
          q_40 = t;
        }
    }
    t = not_null(q_40);
    t = ReadFromFile_0_0(t);
    s_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_40, s_40);
    t = apply_strategy_1_0(o_107, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(f_4, q_107, g_4, h_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,c_42 = NULL,d_42 = NULL,b_16 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  s_41 = t;
  if(match_cons(t, sym__2))
    {
      q_41 = ATgetArgument(t, 0);
      r_41 = ATgetArgument(t, 1);
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_17 = NULL,k_17 = NULL,s_17 = NULL,a_16 = NULL;
            t = SSLgetAnnotations(s_41);
            g_17 = t;
            t = q_41;
            t = fetch_1_0(u_4, t);
            k_17 = t;
            t = r_41;
            t = ImplodeLayout_1_0(_fail, t);
            s_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_17, s_17);
            a_16 = t;
            t = SSLsetAnnotations(a_16, g_17);
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            t = s_41;
          }
      }
    }
  else
    {
      t = s_41;
    }
  e_41 = t;
  if(match_cons(t, sym__2))
    {
      a_41 = ATgetArgument(t, 0);
      b_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_41);
  z_40 = t;
  t = b_41;
  t = MetaExplode_0_0(t);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_41, c_41);
  b_16 = t;
  t = SSLsetAnnotations(b_16, z_40);
  d_41 = t;
  if(match_cons(t, sym__2))
    {
      c_42 = ATgetArgument(t, 0);
      d_42 = ATgetArgument(t, 1);
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_18 = NULL,l_18 = NULL,r_18 = NULL,c_16 = NULL;
            t = SSLgetAnnotations(d_41);
            i_18 = t;
            t = c_42;
            t = fetch_1_0(v_4, t);
            l_18 = t;
            t = d_42;
            t = topdown_1_0(w_4, t);
            r_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_18, r_18);
            c_16 = t;
            t = SSLsetAnnotations(c_16, i_18);
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            t = d_41;
          }
      }
    }
  else
    {
      t = d_41;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = Option_3_0(y_4, b_5, g_5, t);
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
static ATerm w_4 (ATerm t)
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
static ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
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
