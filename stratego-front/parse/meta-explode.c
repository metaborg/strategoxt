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
ATerm term_s_18;
ATerm term_r_18;
ATerm term_k_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_n_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_k_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_x_11;
ATerm term_n_11;
ATerm term_e_11;
ATerm term_u_9;
ATerm term_l_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_k_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_c_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_u_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_Cong_2, term_h_7, (ATerm) ATempty);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Op_2, term_h_7, (ATerm) ATempty);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_v_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_e_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_u_5);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_g_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_e_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_h_6);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_u_5);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_u_5);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_e_15, term_u_5);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_y_15);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_r_17, term_u_5);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_AsFix_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix          treat concrete syntax parts as AsFix trees", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm m_2 (ATerm j_1, ATerm n_1, ATerm t);
ATerm Clean_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm a_82 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm w_88 (ATerm), ATerm t);
static ATerm v_6 (ATerm u_4, ATerm t);
static ATerm y_6 (ATerm p_5, ATerm t);
ATerm str_explode_0_0 (ATerm t);
ATerm TrmOp_0_0 (ATerm t);
static ATerm l_4 (ATerm o_21, ATerm p_21, ATerm t);
ATerm foldr_3_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm o_4 (ATerm r_21, ATerm q_21, ATerm t);
static ATerm q_4 (ATerm v_115, ATerm t);
static ATerm r_4 (ATerm g_116, ATerm t);
static ATerm s_4 (ATerm k_115, ATerm t);
static ATerm s_12 (ATerm q_10, ATerm t);
ATerm trm_explode_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm MetaExplode_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm e_83 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm s_83 (ATerm), ATerm t);
ATerm ImplodeLayout_1_0 (ATerm f_80 (ATerm), ATerm t);
static ATerm w_4 (ATerm r_38, ATerm s_38, ATerm t);
static ATerm x_4 (ATerm m_23, ATerm n_23, ATerm t);
static ATerm z_4 (ATerm d_88 (ATerm), ATerm p_160, ATerm s_23, ATerm t);
static ATerm y_4 (ATerm i_23, ATerm j_23, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_105 (ATerm), ATerm t);
static ATerm x_26 (ATerm r_26, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_5 (ATerm o_23, ATerm t);
static ATerm b_5 (ATerm k_37, ATerm l_37, ATerm t);
static ATerm c_5 (ATerm t_38, ATerm u_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_28 (ATerm h_27, ATerm t);
static ATerm j_28 (ATerm l_27, ATerm m_27, ATerm n_27, ATerm t);
static ATerm k_28 (ATerm v_27, ATerm w_27, ATerm x_27, ATerm t);
static ATerm d_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm g_5 (ATerm w_54, ATerm x_54, ATerm t);
ATerm if_verbose2_1_0 (ATerm v_103 (ATerm), ATerm t);
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
static ATerm j_5 (ATerm k_48, ATerm l_48, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_5 (ATerm f_53, ATerm g_53, ATerm e_53, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_5 (ATerm n_41, ATerm o_41, ATerm t);
ATerm foldr_2_0 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_103 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm need_help_1_0 (ATerm k_106 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_88 (ATerm), ATerm t);
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
static ATerm p_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_59 (ATerm), ATerm a_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_108 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm parse_options_1_0 (ATerm m_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm iowrap_3_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
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
  t = term_u_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_z_5;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_6), b_0), term_a_6);
  o_0 = t;
  t = SSL_printnl(j_0, o_0);
  t = term_f_6;
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
      t = term_u_5;
      t = e_0(t);
      u_0 = t;
      t = term_g_6;
      v_0 = t;
      t = term_h_6;
      w_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_6, term_h_6, u_0);
      t = h_5(v_0, w_0, u_0, t);
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
      t = term_u_5;
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
      ATerm i_6 = t;
      int j_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_2(j_2, i_2, t);
          LocalPopChoice(j_6);
        }
      else
        {
          t = i_6;
          t = term_k_6;
        }
    }
  else
    {
      t = m_2(j_2, i_2, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  static ATerm h_0 (ATerm t)
  {
    t = topdown_1_0(a_82, t);
    return(t);
  }
  t = a_82(t);
  t = SRTS_all(h_0, t);
  return(t);
}
ATerm fetch_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  static ATerm u_3 (ATerm t)
  {
    ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL;
    q_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_3 = ATgetFirst((ATermList) t);
        s_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_6 = t;
      int m_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 = NULL,c_1 = NULL,p_2 = NULL;
          t = SSLgetAnnotations(q_3);
          s_0 = t;
          t = r_3;
          t = w_88(t);
          c_1 = t;
          t = (ATerm) ATinsert(CheckATermList(s_3), c_1);
          p_2 = t;
          t = SSLsetAnnotations(p_2, s_0);
          LocalPopChoice(m_6);
        }
      else
        {
          t = l_6;
          {
            ATerm l_1 = NULL,p_1 = NULL,q_2 = NULL;
            t = SSLgetAnnotations(q_3);
            l_1 = t;
            t = s_3;
            t = u_3(t);
            p_1 = t;
            t = (ATerm) ATinsert(CheckATermList(p_1), r_3);
            q_2 = t;
            t = SSLsetAnnotations(q_2, l_1);
          }
        }
    }
    return(t);
  }
  t = u_3(t);
  return(t);
}
static ATerm v_6 (ATerm u_4, ATerm t)
{
  ATerm k_5 = NULL;
  t = SSL_is_string(u_4);
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, k_5));
  return(t);
}
static ATerm y_6 (ATerm p_5, ATerm t)
{
  ATerm s_5 = NULL,x_5 = NULL,y_5 = NULL;
  t = SSL_explode_term(p_5);
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5;
  t = map_1_0(str_explode_0_0, t);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, s_5, y_5);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm b_6 = NULL,d_6 = NULL,e_6 = NULL;
  e_6 = t;
  if(match_cons(t, sym_meta_var_1))
    {
      b_6 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_6), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_FromTerm_1))
        {
          b_6 = ATgetArgument(t, 0);
          {
            ATerm n_6 = t;
            int o_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_6;
                t = s_4(b_6, t);
                LocalPopChoice(o_6);
              }
            else
              {
                t = n_6;
                {
                  ATerm p_6 = t;
                  int q_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_6(e_6, t);
                      LocalPopChoice(q_6);
                    }
                  else
                    {
                      t = p_6;
                      t = y_6(e_6, t);
                    }
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_FromStrategy_1))
            {
              b_6 = ATgetArgument(t, 0);
              {
                ATerm r_6 = t;
                int w_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = e_6;
                    t = q_4(b_6, t);
                    LocalPopChoice(w_6);
                  }
                else
                  {
                    t = r_6;
                    {
                      ATerm x_6 = t;
                      int z_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_6(e_6, t);
                          LocalPopChoice(z_6);
                        }
                      else
                        {
                          t = x_6;
                          t = y_6(e_6, t);
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_FromApp_1))
                {
                  b_6 = ATgetArgument(t, 0);
                  {
                    ATerm d_7 = t;
                    int e_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym_FromStrategy_1, b_6);
                        t = q_4(b_6, t);
                        LocalPopChoice(e_7);
                      }
                    else
                      {
                        t = d_7;
                        {
                          ATerm f_7 = t;
                          int g_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = v_6(e_6, t);
                              LocalPopChoice(g_7);
                            }
                          else
                            {
                              t = f_7;
                              t = y_6(e_6, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = term_i_7;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          b_6 = ATgetFirst((ATermList) t);
                          d_6 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm j_7 = t;
                            int k_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_6 = NULL,u_6 = NULL;
                                t = b_6;
                                t = str_explode_0_0(t);
                                s_6 = t;
                                t = d_6;
                                t = str_explode_0_0(t);
                                u_6 = t;
                                t = (ATerm) ATmakeAppl(sym_Cong_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, u_6), s_6));
                                LocalPopChoice(k_7);
                              }
                            else
                              {
                                t = j_7;
                                {
                                  ATerm o_7 = t;
                                  int t_7 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_6(e_6, t);
                                      LocalPopChoice(t_7);
                                    }
                                  else
                                    {
                                      t = o_7;
                                      t = y_6(e_6, t);
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          ATerm a_8 = t;
                          int b_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = v_6(e_6, t);
                              LocalPopChoice(b_8);
                            }
                          else
                            {
                              t = a_8;
                              t = y_6(e_6, t);
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
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  s_7 = t;
  t = SSL_explode_term(s_7);
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7;
  t = map_1_0(trm_explode_0_0, t);
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, p_7, r_7);
  return(t);
}
static ATerm l_4 (ATerm o_21, ATerm p_21, ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  t = o_21;
  t = trm_explode_0_0(t);
  v_7 = t;
  t = p_21;
  t = trm_explode_0_0(t);
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, w_7), v_7));
  return(t);
}
ATerm foldr_3_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_8;
      t = f_95(t);
    }
  else
    {
      ATerm q_8 = NULL,s_8 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_8 = ATgetFirst((ATermList) t);
          l_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_8;
      t = h_95(t);
      q_8 = t;
      t = l_8;
      t = foldr_3_0(f_95, g_95, h_95, t);
      s_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_8, s_8);
      t = g_95(t);
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm v_9 = NULL,x_9 = NULL,w_1 = NULL;
  v_9 = t;
  t = SSL_explode_term(v_9);
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_8 = ATgetArgument(t, 1);
        if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
          {
            x_9 = ATgetFirst((ATermList) o_8);
            {
              ATerm p_8 = (ATerm) ATgetNext((ATermList) o_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(v_9);
  if(match_cons(t, sym__2))
    {
      ATerm r_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
          {
            ATerm i_9 = ATgetFirst((ATermList) e_9);
            ATerm j_9 = (ATerm) ATgetNext((ATermList) e_9);
            if(((ATgetType(j_9) == AT_LIST) && !(ATisEmpty(j_9))))
              {
                w_1 = ATgetFirst((ATermList) j_9);
                {
                  ATerm k_9 = (ATerm) ATgetNext((ATermList) j_9);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, w_1), x_9));
  return(t);
}
static ATerm o_4 (ATerm r_21, ATerm q_21, ATerm t)
{
  ATerm d_9 = NULL;
  static ATerm m_0 (ATerm t)
  {
    t = q_21;
    {
      ATerm n_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_9 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              o_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, term_u_9), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, o_9))));
          LocalPopChoice(t_9);
        }
      else
        {
          t = n_9;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = r_21;
  if(match_cons(t, sym_meta_listvar_1))
    {
      d_9 = ATgetArgument(t, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, d_9)));
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
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
static ATerm q_4 (ATerm v_115, ATerm t)
{
  t = v_115;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm r_4 (ATerm g_116, ATerm t)
{
  ATerm b_10 = NULL;
  t = g_116;
  t = MetaExplode_0_0(t);
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, b_10);
  return(t);
}
static ATerm s_4 (ATerm k_115, ATerm t)
{
  t = k_115;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm s_12 (ATerm q_10, ATerm t)
{
  ATerm u_10 = NULL;
  t = SSL_is_int(q_10);
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, u_10);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm a_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_11 = NULL,g_11 = NULL;
      g_11 = t;
      if(match_cons(t, sym_meta_var_1))
        {
          f_11 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, f_11);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              f_11 = ATgetArgument(t, 0);
              {
                ATerm d_10 = t;
                int g_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, term_u_9), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, f_11))));
                    LocalPopChoice(g_10);
                  }
                else
                  {
                    t = d_10;
                    t = s_12(g_11, t);
                  }
              }
            }
          else
            {
              t = s_12(g_11, t);
            }
        }
      LocalPopChoice(c_10);
    }
  else
    {
      t = a_10;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 = NULL,z_1 = NULL;
            z_1 = t;
            t = SSL_is_string(z_1);
            y_1 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, y_1);
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm j_10 = t;
              int k_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_11 = NULL,s_11 = NULL,v_11 = NULL;
                  o_11 = t;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      s_11 = ATgetArgument(t, 0);
                      t = o_11;
                      t = s_4(s_11, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          s_11 = ATgetArgument(t, 0);
                          t = o_11;
                          t = r_4(s_11, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              s_11 = ATgetArgument(t, 0);
                              t = o_11;
                              t = q_4(s_11, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_WithAnno_2))
                                {
                                  s_11 = ATgetArgument(t, 0);
                                  v_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_2 = NULL,d_2 = NULL;
                                    t = s_11;
                                    t = trm_explode_0_0(t);
                                    c_2 = t;
                                    t = v_11;
                                    t = MetaExplode_0_0(t);
                                    d_2 = t;
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, c_2, d_2);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Conc_2))
                                    {
                                      s_11 = ATgetArgument(t, 0);
                                      v_11 = ATgetArgument(t, 1);
                                      t = o_11;
                                      t = o_4(s_11, v_11, t);
                                    }
                                  else
                                    {
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = term_u_9;
                                        }
                                      else
                                        {
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              s_11 = ATgetFirst((ATermList) t);
                                              v_11 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = o_11;
                                          t = l_4(s_11, v_11, t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  LocalPopChoice(k_10);
                }
              else
                {
                  t = j_10;
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
  ATerm y_12 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      y_12 = ATgetArgument(t, 0);
      t = y_12;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          y_12 = ATgetArgument(t, 0);
          {
            ATerm b_13 = NULL;
            t = y_12;
            t = trm_explode_0_0(t);
            b_13 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, b_13);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              y_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_12;
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
ATerm oncetd_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  static ATerm f_13 (ATerm t)
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_83(t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        t = SRTS_one(f_13, t);
      }
    return(t);
  }
  t = f_13(t);
  return(t);
}
ATerm alltd_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  static ATerm g_13 (ATerm t)
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_83(t);
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        t = SRTS_all(g_13, t);
      }
    return(t);
  }
  t = g_13(t);
  return(t);
}
ATerm ImplodeLayout_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  static ATerm e_21 (ATerm t)
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm x_20 = NULL,y_20 = NULL,b_21 = NULL,c_21 = NULL;
      y_20 = t;
      if(match_cons(t, sym_BA_2))
        {
          b_21 = ATgetArgument(t, 0);
          c_21 = ATgetArgument(t, 1);
          {
            ATerm o_2 = NULL,t_2 = NULL,u_2 = NULL,z_2 = NULL;
            t = SSLgetAnnotations(y_20);
            o_2 = t;
            t = b_21;
            t = ImplodeLayout_1_0(_fail, t);
            t_2 = t;
            t = c_21;
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
              b_21 = ATgetArgument(t, 0);
              {
                ATerm y_3 = NULL,a_4 = NULL,a_3 = NULL;
                t = SSLgetAnnotations(y_20);
                y_3 = t;
                t = b_21;
                t = ImplodeLayout_1_0(_id, t);
                a_4 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, a_4);
                a_3 = t;
                t = SSLsetAnnotations(a_3, y_3);
              }
            }
          else
            {
              if(match_cons(t, sym_AM_2))
                {
                  b_21 = ATgetArgument(t, 0);
                  c_21 = ATgetArgument(t, 1);
                  {
                    ATerm i_4 = NULL,m_4 = NULL,n_4 = NULL,b_3 = NULL;
                    t = SSLgetAnnotations(y_20);
                    i_4 = t;
                    t = b_21;
                    t = e_21(t);
                    m_4 = t;
                    t = c_21;
                    t = ImplodeLayout_1_0(_id, t);
                    n_4 = t;
                    t = (ATerm) ATmakeAppl(sym_AM_2, m_4, n_4);
                    b_3 = t;
                    t = SSLsetAnnotations(b_3, i_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RuleNoCond_2))
                    {
                      b_21 = ATgetArgument(t, 0);
                      c_21 = ATgetArgument(t, 1);
                      {
                        ATerm r_5 = NULL,v_5 = NULL,w_5 = NULL,c_3 = NULL;
                        t = SSLgetAnnotations(y_20);
                        r_5 = t;
                        t = b_21;
                        t = e_21(t);
                        v_5 = t;
                        t = c_21;
                        t = ImplodeLayout_1_0(_id, t);
                        w_5 = t;
                        t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, v_5, w_5);
                        c_3 = t;
                        t = SSLsetAnnotations(c_3, r_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Rule_3))
                        {
                          b_21 = ATgetArgument(t, 0);
                          c_21 = ATgetArgument(t, 1);
                          x_20 = ATgetArgument(t, 2);
                          {
                            ATerm t_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_3 = NULL;
                            t = SSLgetAnnotations(y_20);
                            t_6 = t;
                            t = b_21;
                            t = e_21(t);
                            a_7 = t;
                            t = c_21;
                            t = ImplodeLayout_1_0(_id, t);
                            b_7 = t;
                            t = x_20;
                            t = e_21(t);
                            c_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Rule_3, a_7, b_7, c_7);
                            d_3 = t;
                            t = SSLsetAnnotations(d_3, t_6);
                          }
                        }
                      else
                        {
                          ATerm m_7 = NULL,n_7 = NULL,u_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,i_8 = NULL,m_8 = NULL,n_8 = NULL,j_3 = NULL,i_3 = NULL,g_3 = NULL,f_3 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              b_21 = ATgetArgument(t, 0);
                              c_21 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(y_20);
                          n_7 = t;
                          t = b_21;
                          if(match_cons(t, sym_prod_3))
                            {
                              y_7 = ATgetArgument(t, 0);
                              z_7 = ATgetArgument(t, 1);
                              c_8 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(b_21);
                          x_7 = t;
                          t = z_7;
                          if(match_cons(t, sym_cf_1))
                            {
                              f_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(z_7);
                          e_8 = t;
                          t = f_8;
                          if(match_cons(t, sym_opt_1))
                            {
                              m_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(f_8);
                          i_8 = t;
                          t = m_8;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_opt_1, m_8);
                          f_3 = t;
                          t = SSLsetAnnotations(f_3, i_8);
                          n_8 = t;
                          t = (ATerm) ATmakeAppl(sym_cf_1, n_8);
                          g_3 = t;
                          t = SSLsetAnnotations(g_3, e_8);
                          g_8 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, y_7, g_8, c_8);
                          i_3 = t;
                          t = SSLsetAnnotations(i_3, x_7);
                          d_8 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, d_8, c_21);
                          j_3 = t;
                          t = SSLsetAnnotations(j_3, n_7);
                          u_7 = t;
                          {
                            ATerm y_10 = t;
                            int z_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,l_9 = NULL,m_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,w_9 = NULL,e_10 = NULL,f_10 = NULL,v_3 = NULL,o_3 = NULL,n_3 = NULL,m_3 = NULL,l_3 = NULL,k_3 = NULL;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    u_8 = ATgetArgument(t, 0);
                                    v_8 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(u_7);
                                t_8 = t;
                                t = u_8;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    y_8 = ATgetArgument(t, 0);
                                    z_8 = ATgetArgument(t, 1);
                                    a_9 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(u_8);
                                x_8 = t;
                                t = y_8;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    q_9 = ATgetFirst((ATermList) t);
                                    r_9 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(y_8);
                                p_9 = t;
                                t = q_9;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    e_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(q_9);
                                w_9 = t;
                                t = e_10;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_cf_1, e_10);
                                k_3 = t;
                                t = SSLsetAnnotations(k_3, w_9);
                                f_10 = t;
                                t = r_9;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = (ATerm) ATinsert(CheckATermList(r_9), f_10);
                                l_3 = t;
                                t = SSLsetAnnotations(l_3, p_9);
                                s_9 = t;
                                t = z_8;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    f_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(z_8);
                                c_9 = t;
                                t = f_9;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    l_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(f_9);
                                h_9 = t;
                                t = l_9;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_opt_1, l_9);
                                m_3 = t;
                                t = SSLsetAnnotations(m_3, h_9);
                                m_9 = t;
                                t = (ATerm) ATmakeAppl(sym_cf_1, m_9);
                                n_3 = t;
                                t = SSLsetAnnotations(n_3, c_9);
                                g_9 = t;
                                t = (ATerm) ATmakeAppl(sym_prod_3, s_9, g_9, a_9);
                                o_3 = t;
                                t = SSLsetAnnotations(o_3, x_8);
                                b_9 = t;
                                t = v_8;
                                {
                                  static ATerm y_0 (ATerm t)
                                  {
                                    if(match_cons(t, sym_meta_var_1))
                                      {
                                        if(((m_7 != NULL) && (m_7 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          m_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    return(t);
                                  }
                                  t = oncetd_1_0(y_0, t);
                                }
                                w_8 = t;
                                t = (ATerm) ATmakeAppl(sym_appl_2, b_9, w_8);
                                v_3 = t;
                                t = SSLsetAnnotations(v_3, t_8);
                                LocalPopChoice(z_10);
                                t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(m_7));
                              }
                            else
                              {
                                t = y_10;
                                {
                                  ATerm a_11 = t;
                                  int b_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm c_11 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = f_80(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = c_11;
                                        }
                                      t = term_k_6;
                                      LocalPopChoice(b_11);
                                    }
                                  else
                                    {
                                      t = a_11;
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
  t = e_21(t);
  return(t);
}
static ATerm w_4 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm b_22 = NULL;
  t = SSL_fputc(r_38, s_38);
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_22);
  return(t);
}
static ATerm x_4 (ATerm m_23, ATerm n_23, ATerm t)
{
  ATerm c_22 = NULL;
  t = SSL_write_term_to_stream_text(m_23, n_23);
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_22);
  return(t);
}
static ATerm z_4 (ATerm d_88 (ATerm), ATerm p_160, ATerm s_23, ATerm t)
{
  ATerm d_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_160, term_e_11);
  t = d_5(t);
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_22, s_23);
  t = d_88(t);
  t = fclose_0_0(t);
  t = s_23;
  return(t);
}
static ATerm y_4 (ATerm i_23, ATerm j_23, ATerm t)
{
  ATerm h_22 = NULL;
  t = SSL_write_term_to_stream_baf(i_23, j_23);
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_22);
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
  ATerm w_10 = NULL,x_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if(match_cons(h_11, sym_Stream_1))
        {
          w_10 = ATgetArgument(h_11, 0);
        }
      else
        _fail(t);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(w_10, x_10, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm l_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Stream_1))
        {
          r_11 = ATgetArgument(m_11, 0);
        }
      else
        _fail(t);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(r_11, t_11, t);
  l_11 = t;
  t = term_n_11;
  p_11 = t;
  t = l_11;
  if(match_cons(t, sym_Stream_1))
    {
      q_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, l_11);
  t = w_4(p_11, q_11, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,x_22 = NULL,y_22 = NULL,b_23 = NULL,d_23 = NULL,e_23 = NULL,k_25 = NULL,r_25 = NULL,l_14 = NULL,k_14 = NULL;
  s_22 = t;
  if(match_cons(t, sym__2))
    {
      b_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_22);
  y_22 = t;
  t = b_23;
  {
    ATerm u_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_22 != NULL) && (r_22 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_0, t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = u_11;
        t = term_x_11;
        r_22 = t;
      }
  }
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_23, d_23);
  k_14 = t;
  t = SSLsetAnnotations(k_14, y_22);
  t = s_22;
  if(match_cons(t, sym__2))
    {
      u_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_22);
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_22, (ATerm) ATmakeAppl(sym__2, not_null(r_22), v_22));
  l_14 = t;
  t = SSLsetAnnotations(l_14, t_22);
  x_22 = t;
  if(match_cons(t, sym__2))
    {
      k_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,v_10 = NULL,o_14 = NULL;
        t = SSLgetAnnotations(x_22);
        n_10 = t;
        t = k_25;
        t = fetch_1_0(a_1, t);
        r_10 = t;
        t = r_25;
        if(match_cons(t, sym__2))
          {
            t_10 = ATgetArgument(t, 0);
            v_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_4(d_1, t_10, v_10, t);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_10, s_10);
        o_14 = t;
        t = SSLsetAnnotations(o_14, n_10);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        {
          ATerm d_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,p_14 = NULL;
          t = SSLgetAnnotations(x_22);
          d_11 = t;
          t = r_25;
          if(match_cons(t, sym__2))
            {
              j_11 = ATgetArgument(t, 0);
              k_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_4(e_1, j_11, k_11, t);
          i_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_25, i_11);
          p_14 = t;
          t = SSLsetAnnotations(p_14, d_11);
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
ATerm apply_strategy_1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  j_26 = t;
  t = dtime_0_0(t);
  t = j_26;
  t = m_105(t);
  i_26 = t;
  t = dtime_0_0(t);
  f_26 = t;
  t = i_26;
  if(match_cons(t, sym__2))
    {
      g_26 = ATgetArgument(t, 0);
      h_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_26), (ATerm) ATmakeAppl(sym_Runtime_1, f_26)), h_26);
  return(t);
}
static ATerm x_26 (ATerm r_26, ATerm t)
{
  t = SSL_fclose(r_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  v_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_26 = ATgetArgument(t, 0);
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_26);
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            t = x_26(v_26, t);
          }
      }
    }
  else
    {
      t = x_26(v_26, t);
    }
  return(t);
}
static ATerm a_5 (ATerm o_23, ATerm t)
{
  t = SSL_read_term_from_stream(o_23);
  return(t);
}
static ATerm b_5 (ATerm k_37, ATerm l_37, ATerm t)
{
  t = SSL_strcat(k_37, l_37);
  return(t);
}
static ATerm c_5 (ATerm t_38, ATerm u_38, ATerm t)
{
  ATerm y_26 = NULL;
  t = SSL_fopen(t_38, u_38);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_26 = NULL;
  t = SSL_stdin_stream();
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_27 = NULL;
  t = SSL_stdout_stream();
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_27 = NULL;
  t = SSL_stderr_stream();
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_27);
  return(t);
}
static ATerm i_28 (ATerm h_27, ATerm t)
{
  ATerm i_27 = NULL;
  t = SSL_explode_term(h_27);
  if(match_cons(t, sym__2))
    {
      ATerm c_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_12 = ATgetArgument(t, 1);
        if(((ATgetType(d_12) == AT_LIST) && !(ATisEmpty(d_12))))
          {
            i_27 = ATgetFirst((ATermList) d_12);
            {
              ATerm e_12 = (ATerm) ATgetNext((ATermList) d_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_28 (ATerm l_27, ATerm m_27, ATerm n_27, ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,t_27 = NULL,x_14 = NULL;
  t = SSLgetAnnotations(n_27);
  q_27 = t;
  t = l_27;
  if(match_cons(t, sym_Path_1))
    {
      t_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_27, m_27);
  x_14 = t;
  t = SSLsetAnnotations(x_14, q_27);
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(o_27, p_27, t);
  return(t);
}
static ATerm k_28 (ATerm v_27, ATerm w_27, ATerm x_27, ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,d_28 = NULL,y_14 = NULL;
  t = SSLgetAnnotations(x_27);
  a_28 = t;
  t = SSL_is_string(v_27);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_28, w_27);
  y_14 = t;
  t = SSLsetAnnotations(y_14, a_28);
  if(match_cons(t, sym__2))
    {
      y_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(y_27, z_27, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_28(f_28, t);
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            {
              ATerm h_12 = t;
              int i_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_28(g_28, h_28, f_28, t);
                  LocalPopChoice(i_12);
                }
              else
                {
                  t = h_12;
                  t = k_28(g_28, h_28, f_28, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_28(f_28, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,t_28 = NULL;
  t_28 = t;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_28, term_n_12);
        t = d_5(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        {
          ATerm l_12 = NULL,m_12 = NULL;
          t = term_o_12;
          m_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_12, t_28);
          t = b_5(m_12, t_28, t);
          l_12 = t;
          t = SSL_perror(l_12);
          _fail(t);
        }
      }
  }
  n_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(o_28, t);
  m_28 = t;
  t = n_28;
  t = fclose_0_0(t);
  t = m_28;
  return(t);
}
static ATerm g_5 (ATerm w_54, ATerm x_54, ATerm t)
{
  t = SSL_table_get(w_54, x_54);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm x_28 = NULL;
  x_28 = t;
  {
    ATerm p_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
        t = term_u_12;
        a_29 = t;
        t = term_v_12;
        b_29 = t;
        t = term_x_12;
        t = g_5(a_29, b_29, t);
        z_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_28, term_z_12);
        t = geq_0_0(t);
        t = x_28;
        t = v_103(t);
        LocalPopChoice(r_12);
      }
    else
      {
        t = p_12;
        t = x_28;
      }
  }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  if(match_string(t, "-k"))
    {
      t = e_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_29;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
  f_29 = t;
  t = SSL_string_to_int(f_29);
  g_29 = t;
  t = term_a_13;
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, g_29);
  t = j_5(h_29, g_29, t);
  t = f_29;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_1, g_1, h_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  if(match_string(t, "-S"))
    {
      t = j_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_29;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL;
  t = term_v_12;
  k_29 = t;
  t = term_e_13;
  l_29 = t;
  t = term_h_13;
  t = j_5(k_29, l_29, t);
  t = term_i_13;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_j_13;
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
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  t = SSL_string_to_int(m_29);
  n_29 = t;
  t = term_v_12;
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, n_29);
  t = j_5(o_29, n_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_29);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_k_13;
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
  ATerm p_29 = NULL,q_29 = NULL;
  t = term_l_13;
  p_29 = t;
  t = term_u_5;
  q_29 = t;
  t = term_m_13;
  t = j_5(p_29, q_29, t);
  t = term_n_13;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_o_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_1, k_1, m_1, t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_1, q_1, r_1, t);
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            t = Option_3_0(s_1, u_1, v_1, t);
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm r_29 = NULL;
  t = term_u_12;
  r_29 = t;
  t = SSL_table_put(r_29, k_48, l_48);
  t = (ATerm) ATmakeAppl(sym__3, term_u_12, k_48, l_48);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm t_29 = NULL;
  t_29 = t;
  if(match_string(t, "-o"))
    {
      t = t_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_29;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL;
  u_29 = t;
  t = term_u_13;
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_13, u_29);
  t = j_5(v_29, u_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_29);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_v_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_1, a_2, b_2, t);
  return(t);
}
static ATerm h_5 (ATerm f_53, ATerm g_53, ATerm e_53, ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_53, g_53);
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_13 = ATgetArgument(t, 0);
            ATerm a_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_53, g_53);
        t = g_5(f_53, g_53, t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        t = (ATerm) ATempty;
      }
  }
  y_29 = t;
  t = (ATerm) ATinsert(CheckATermList(y_29), e_53);
  z_29 = t;
  t = SSL_table_put(f_53, g_53, z_29);
  t = x_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
      t = term_u_5;
      t = n_0(t);
      k_30 = t;
      t = term_g_6;
      l_30 = t;
      t = term_h_6;
      m_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_6, term_h_6, k_30);
      t = h_5(l_30, m_30, k_30, t);
      _fail(t);
    }
  else
    {
      ATerm u_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_30 = ATgetFirst((ATermList) t);
          h_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_30 = ATgetFirst((ATermList) t);
          j_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_30;
      t = k_0(t);
      t = i_30;
      t = l_0(t);
      u_30 = t;
      t = (ATerm) ATinsert(CheckATermList(j_30), u_30);
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  if(match_string(t, "-i"))
    {
      t = w_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_30;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  x_30 = t;
  t = term_b_14;
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, x_30);
  t = j_5(y_30, x_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_30);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_2, f_2, g_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_5;
  t = whoami_0_0(t);
  z_30 = t;
  t = term_z_5;
  b_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_14), z_30);
  c_31 = t;
  t = SSL_printnl(b_31, c_31);
  t = term_f_6;
  a_31 = t;
  t = SSL_exit(a_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  t = term_u_12;
  d_31 = t;
  t = term_g_14;
  e_31 = t;
  t = term_h_14;
  t = g_5(d_31, e_31, t);
  return(t);
}
static ATerm e_5 (ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_41, o_41);
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      t = SSL_addr(n_41, o_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_31;
      t = d_95(t);
    }
  else
    {
      ATerm l_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_31 = ATgetFirst((ATermList) t);
          i_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_31;
      t = foldr_2_0(d_95, e_95, t);
      l_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_31, l_31);
      t = e_95(t);
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
  t = term_e_13;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm w_12 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(w_12, d_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_31 = NULL,q_12 = NULL,t_12 = NULL;
  t = times_0_0(t);
  t_12 = t;
  t = SSL_explode_term(t_12);
  if(match_cons(t, sym__2))
    {
      ATerm m_14 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12;
  t = foldr_2_0(h_2, k_2, t);
  o_31 = t;
  t = SSL_TicksToSeconds(o_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  z_31 = t;
  if(match_cons(t, sym__2))
    {
      a_32 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_32;
        if((a_32 != t))
          {
            _fail(t);
          }
        t = z_31;
        LocalPopChoice(q_14);
      }
    else
      {
        t = n_14;
        t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_32, b_32);
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              t = SSL_gtr(a_32, b_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_103 (ATerm), ATerm t)
{
  ATerm f_32 = NULL;
  f_32 = t;
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
        t = term_u_12;
        i_32 = t;
        t = term_v_12;
        j_32 = t;
        t = term_x_12;
        t = g_5(i_32, j_32, t);
        h_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_32, term_f_6);
        t = geq_0_0(t);
        t = f_32;
        t = u_103(t);
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = f_32;
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,p_32 = NULL,q_32 = NULL;
  t = run_time_0_0(t);
  m_32 = t;
  t = term_u_5;
  t = whoami_0_0(t);
  n_32 = t;
  t = term_z_5;
  p_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_14), m_32), term_w_14), n_32);
  q_32 = t;
  t = SSL_printnl(p_32, q_32);
  t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_14), m_32), term_w_14), n_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_13;
  r_32 = t;
  t = SSL_exit(r_32);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  c_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_33 = ATgetArgument(t, 0);
          {
            ATerm r_13 = NULL,b_15 = NULL;
            t = SSLgetAnnotations(c_33);
            r_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_33);
            b_15 = t;
            t = SSLsetAnnotations(b_15, r_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm a_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_32 = NULL,v_32 = NULL;
      t = term_u_12;
      u_32 = t;
      t = term_e_15;
      v_32 = t;
      t = term_g_15;
      t = g_5(u_32, v_32, t);
      LocalPopChoice(c_15);
    }
  else
    {
      t = a_15;
      t = fetch_1_0(r_2, t);
    }
  t = k_106(t);
  return(t);
}
ATerm map_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  static ATerm s_33 (ATerm t)
  {
    ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
    p_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_33;
      }
    else
      {
        ATerm z_13 = NULL,d_14 = NULL,e_14 = NULL,d_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_33 = ATgetFirst((ATermList) t);
            r_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_33);
        z_13 = t;
        t = q_33;
        t = m_88(t);
        d_14 = t;
        t = r_33;
        t = s_33(t);
        e_14 = t;
        t = (ATerm) ATinsert(CheckATermList(e_14), d_14);
        d_15 = t;
        t = SSLsetAnnotations(d_15, z_13);
      }
    return(t);
  }
  t = s_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_33 = ATgetFirst((ATermList) t);
      w_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_34 = NULL,b_34 = NULL;
        static ATerm s_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_34)), not_null(b_34));
          return(t);
        }
        t = w_33;
        t = i_0(t);
        if(((a_34 != NULL) && (a_34 != t)))
          _fail(t);
        else
          a_34 = t;
        t = v_33;
        t = g_0(t);
        if(((b_34 != NULL) && (b_34 != t)))
          _fail(t);
        else
          b_34 = t;
        t = w_33;
        t = reverse_acc_2_0(g_0, s_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_5;
      t = i_0(t);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,f_15 = NULL;
  j_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_34);
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_34);
  f_15 = t;
  t = SSLsetAnnotations(f_15, h_34);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_34), term_k_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_34 = NULL,g_34 = NULL;
      t = term_u_12;
      f_34 = t;
      t = term_g_14;
      g_34 = t;
      t = term_h_14;
      t = g_5(f_34, g_34, t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      t = fetch_1_0(v_2, t);
    }
  t = term_o_15;
  t = echo_0_0(t);
  t = term_g_6;
  d_34 = t;
  t = term_h_6;
  e_34 = t;
  t = term_q_15;
  t = g_5(d_34, e_34, t);
  t = reverse_acc_2_0(_id, w_2, t);
  t = map_1_0(x_2, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  n_34 = t;
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_15 = ATgetFirst((ATermList) t);
                ATerm x_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_34;
          }
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        t = (ATerm) ATinsert(ATempty, n_34);
      }
  }
  o_34 = t;
  t = term_x_11;
  p_34 = t;
  t = SSL_printnl(p_34, o_34);
  t = n_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  t = term_u_12;
  t_34 = t;
  t = term_g_14;
  u_34 = t;
  t = term_h_14;
  t = g_5(t_34, u_34, t);
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
  ATerm v_34 = NULL,w_34 = NULL;
  t = term_y_15;
  v_34 = t;
  t = term_u_5;
  w_34 = t;
  t = term_z_15;
  t = j_5(v_34, w_34, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_a_16;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  t = term_y_15;
  z_34 = t;
  t = term_u_5;
  a_35 = t;
  t = term_z_15;
  t = j_5(z_34, a_35, t);
  t = term_b_16;
  x_34 = t;
  t = term_u_5;
  y_34 = t;
  t = term_f_16;
  t = j_5(x_34, y_34, t);
  t = term_g_16;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_2, e_3, h_3, t);
      LocalPopChoice(k_16);
    }
  else
    {
      t = i_16;
      t = Option_3_0(p_3, t_3, w_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_59 (ATerm), ATerm a_60 (ATerm), ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,j_15 = NULL;
  g_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_35 = ATgetFirst((ATermList) t);
      d_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_35);
  b_35 = t;
  t = c_35;
  t = z_59(t);
  e_35 = t;
  t = d_35;
  t = a_60(t);
  f_35 = t;
  t = (ATerm) ATinsert(CheckATermList(f_35), e_35);
  j_15 = t;
  t = SSLsetAnnotations(j_15, b_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,q_35 = NULL,r_35 = NULL,l_15 = NULL;
  l_35 = t;
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_16;
        t = n_108(t);
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
      }
  }
  t = l_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_35 = ATgetFirst((ATermList) t);
      o_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_35);
  m_35 = t;
  t = term_g_14;
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, n_35);
  t = j_5(r_35, n_35, t);
  t = o_35;
  {
    static ATerm b_36 (ATerm t)
    {
      ATerm o_16 = t;
      int p_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_16 = t;
          int r_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_35 = NULL;
              u_35 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_35;
              LocalPopChoice(r_16);
            }
          else
            {
              t = q_16;
              t = n_108(t);
              t = Cons_2_0(_id, b_36, t);
            }
          LocalPopChoice(p_16);
        }
      else
        {
          t = o_16;
          {
            ATerm x_35 = NULL,y_35 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_35 = ATgetFirst((ATermList) t);
                y_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_35), (ATerm) ATmakeAppl(sym_Undefined_1, x_35));
          }
        }
      return(t);
    }
    t = b_36(t);
  }
  q_35 = t;
  t = (ATerm) ATinsert(CheckATermList(q_35), (ATerm) ATmakeAppl(sym_Program_1, n_35));
  l_15 = t;
  t = SSLsetAnnotations(l_15, m_35);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  if(match_string(t, "--help"))
    {
      t = n_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_36;
        }
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  t = term_e_15;
  o_36 = t;
  t = term_u_5;
  p_36 = t;
  t = term_s_16;
  t = j_5(o_36, p_36, t);
  t = term_t_16;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_u_16;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
  i_36 = t;
  t = term_g_6;
  k_36 = t;
  t = term_h_6;
  l_36 = t;
  t = (ATerm) ATempty;
  m_36 = t;
  t = SSL_table_put(k_36, l_36, m_36);
  t = i_36;
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm v_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_108(t);
          LocalPopChoice(y_16);
        }
      else
        {
          t = v_16;
          {
            ATerm z_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_3, b_4, c_4, t);
                LocalPopChoice(a_17);
              }
            else
              {
                t = z_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_3, t);
  }
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_37 = NULL;
        a_37 = t;
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_14 = NULL;
              t = a_37;
              {
                ATerm f_17 = t;
                int g_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_15 = NULL,i_15 = NULL;
                    t = term_u_12;
                    h_15 = t;
                    t = term_e_15;
                    i_15 = t;
                    t = term_g_15;
                    t = g_5(h_15, i_15, t);
                    LocalPopChoice(g_17);
                  }
                else
                  {
                    t = f_17;
                    t = fetch_1_0(d_4, t);
                  }
              }
              t = a_37;
              t = default_system_usage_0_0(t);
              t = term_e_13;
              v_14 = t;
              t = SSL_exit(v_14);
              LocalPopChoice(e_17);
            }
          else
            {
              t = d_17;
              {
                ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
                t = term_u_12;
                d_16 = t;
                t = term_y_15;
                e_16 = t;
                t = term_h_17;
                t = g_5(d_16, e_16, t);
                t = a_37;
                t = default_system_about_0_0(t);
                t = term_e_13;
                c_16 = t;
                t = SSL_exit(c_16);
              }
            }
        }
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
              static ATerm e_4 (ATerm t)
              {
                ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,p_15 = NULL;
                g_37 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_37 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_37);
                e_37 = t;
                t = f_37;
                if(((g_36 != NULL) && (g_36 != t)))
                  _fail(t);
                else
                  g_36 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_37);
                p_15 = t;
                t = SSLsetAnnotations(p_15, e_37);
                return(t);
              }
              t = fetch_1_0(e_4, t);
              t = term_z_5;
              c_37 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_36)), term_k_17);
              d_37 = t;
              t = SSL_printnl(c_37, d_37);
              t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_36)), term_k_17));
              t = default_system_usage_0_0(t);
              t = term_f_6;
              b_37 = t;
              t = SSL_exit(b_37);
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
            }
        }
      }
  }
  h_36 = t;
  t = term_g_6;
  j_36 = t;
  t = SSL_table_destroy(j_36);
  t = h_36;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL;
  t = parse_options_1_0(m_106, t);
  n_37 = t;
  t = term_l_17;
  q_37 = t;
  t = SSL_table_create(q_37);
  t = term_l_17;
  o_37 = t;
  t = term_m_17;
  p_37 = t;
  t = SSL_table_put(o_37, p_37, n_37);
  t = n_37;
  t = o_106(t);
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_106, t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        {
          ATerm p_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = if_verbose2_1_0(t_4, t);
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
  ATerm r_37 = NULL,s_37 = NULL;
  t = term_r_17;
  r_37 = t;
  t = term_u_5;
  s_37 = t;
  t = term_s_17;
  t = j_5(r_37, s_37, t);
  t = term_t_17;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_u_17;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  t_37 = t;
  t = term_u_12;
  x_37 = t;
  t = term_g_14;
  y_37 = t;
  t = term_h_14;
  t = g_5(x_37, y_37, t);
  u_37 = t;
  t = term_z_5;
  v_37 = t;
  t = (ATerm) ATinsert(ATempty, u_37);
  w_37 = t;
  t = SSL_printnl(v_37, w_37);
  t = t_37;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm t)
{
  static ATerm f_4 (ATerm t)
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_105(t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        {
          ATerm x_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(y_17);
            }
          else
            {
              t = x_17;
              {
                ATerm z_17 = t;
                int b_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(b_18);
                  }
                else
                  {
                    t = z_17;
                    {
                      ATerm c_18 = t;
                      int d_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_4, k_4, p_4, t);
                          LocalPopChoice(d_18);
                        }
                      else
                        {
                          t = c_18;
                          {
                            ATerm g_18 = t;
                            int h_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(h_18);
                              }
                            else
                              {
                                t = g_18;
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
    ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
    a_38 = t;
    {
      ATerm i_18 = t;
      int j_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((z_37 != NULL) && (z_37 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_37 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_4, t);
          LocalPopChoice(j_18);
        }
      else
        {
          t = i_18;
          t = term_k_18;
          z_37 = t;
        }
    }
    t = not_null(z_37);
    t = ReadFromFile_0_0(t);
    b_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_38, b_38);
    t = apply_strategy_1_0(v_105, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(f_4, x_105, g_4, h_4, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,q_39 = NULL,r_39 = NULL,s_15 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  g_39 = t;
  if(match_cons(t, sym__2))
    {
      e_39 = ATgetArgument(t, 0);
      f_39 = ATgetArgument(t, 1);
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_16 = NULL,w_16 = NULL,x_16 = NULL,r_15 = NULL;
            t = SSLgetAnnotations(g_39);
            j_16 = t;
            t = e_39;
            t = fetch_1_0(l_5, t);
            w_16 = t;
            t = f_39;
            t = ImplodeLayout_1_0(_fail, t);
            x_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_16, x_16);
            r_15 = t;
            t = SSLsetAnnotations(r_15, j_16);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            t = g_39;
          }
      }
    }
  else
    {
      t = g_39;
    }
  n_38 = t;
  if(match_cons(t, sym__2))
    {
      j_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_38);
  i_38 = t;
  t = k_38;
  t = MetaExplode_0_0(t);
  l_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_38, l_38);
  s_15 = t;
  t = SSLsetAnnotations(s_15, i_38);
  m_38 = t;
  if(match_cons(t, sym__2))
    {
      q_39 = ATgetArgument(t, 0);
      r_39 = ATgetArgument(t, 1);
      {
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_18 = NULL,e_18 = NULL,f_18 = NULL,t_15 = NULL;
            t = SSLgetAnnotations(m_38);
            a_18 = t;
            t = q_39;
            t = fetch_1_0(m_5, t);
            e_18 = t;
            t = r_39;
            t = topdown_1_0(n_5, t);
            f_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_18, f_18);
            t_15 = t;
            t = SSLsetAnnotations(t_15, a_18);
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            t = m_38;
          }
      }
    }
  else
    {
      t = m_38;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = Option_3_0(o_5, q_5, t_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Clean_0_0(t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_r_18;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm meta_explode_0_0 (ATerm t)
{
  t = iowrap_3_0(f_5, i_5, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = meta_explode_0_0(t);
  return(t);
}
