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
ATerm term_w_18;
ATerm term_v_18;
ATerm term_o_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_g_13;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_t_9;
ATerm term_w_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_r_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Cong_2, term_q_7, (ATerm) ATempty);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATempty);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_e_6);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_j_6, term_k_6);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_e_16, term_e_6);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_i_16, term_e_6);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_e_6);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_e_6);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_AsFix_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix          treat concrete syntax parts as AsFix trees", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm y_1 (ATerm j_1, ATerm m_1, ATerm t);
ATerm Clean_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm d_79 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm z_85 (ATerm), ATerm t);
static ATerm p_6 (ATerm z_3, ATerm t);
static ATerm q_6 (ATerm f_4, ATerm t);
ATerm str_explode_0_0 (ATerm t);
ATerm TrmOp_0_0 (ATerm t);
static ATerm s_4 (ATerm i_21, ATerm j_21, ATerm t);
ATerm foldr_3_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm v_4 (ATerm l_21, ATerm k_21, ATerm t);
static ATerm x_4 (ATerm e_112, ATerm t);
static ATerm y_4 (ATerm p_112, ATerm t);
static ATerm z_4 (ATerm t_111, ATerm t);
static ATerm y_11 (ATerm i_10, ATerm t);
ATerm trm_explode_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm MetaExplode_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm h_80 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm v_80 (ATerm), ATerm t);
ATerm ImplodeLayout_1_0 (ATerm i_77 (ATerm), ATerm t);
static ATerm e_5 (ATerm x_37, ATerm y_37, ATerm t);
static ATerm f_5 (ATerm g_23, ATerm h_23, ATerm t);
static ATerm h_5 (ATerm g_85 (ATerm), ATerm l_156, ATerm k_23, ATerm t);
static ATerm g_5 (ATerm c_23, ATerm d_23, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm w_101 (ATerm), ATerm t);
static ATerm j_26 (ATerm d_26, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_5 (ATerm i_23, ATerm t);
static ATerm j_5 (ATerm z_37, ATerm a_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_27 (ATerm t_26, ATerm t);
static ATerm v_27 (ATerm x_26, ATerm y_26, ATerm z_26, ATerm t);
static ATerm w_27 (ATerm h_27, ATerm i_27, ATerm j_27, ATerm t);
static ATerm k_5 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm d_5 (ATerm r_36, ATerm s_36, ATerm t);
ATerm debug_1_0 (ATerm e_85 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm f_100 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_5 (ATerm t_46, ATerm u_46, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_5 (ATerm r_51, ATerm s_51, ATerm q_51, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_5 (ATerm s_40, ATerm t_40, ATerm t);
ATerm foldr_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_100 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm need_help_1_0 (ATerm u_102 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_5 (ATerm i_53, ATerm j_53, ATerm t);
static ATerm a_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_104 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm parse_options_1_0 (ATerm w_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm iowrap_3_0 (ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_6 (ATerm t);
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
  t = term_e_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_f_6;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_6), b_0), term_g_6);
  o_0 = t;
  t = SSL_printnl(j_0, o_0);
  t = term_i_6;
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
      t = term_e_6;
      t = e_0(t);
      u_0 = t;
      t = term_j_6;
      v_0 = t;
      t = term_k_6;
      w_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_6, term_k_6, u_0);
      t = o_5(v_0, w_0, u_0, t);
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
      t = term_e_6;
      t = d_0(t);
      b_1 = t;
      t = (ATerm) ATinsert(CheckATermList(t_0), b_1);
    }
  return(t);
}
static ATerm y_1 (ATerm j_1, ATerm m_1, ATerm t)
{
  ATerm o_1 = NULL;
  t = SSL_is_int(j_1);
  t = SSL_int_to_string(j_1);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, o_1);
  return(t);
}
ATerm Clean_0_0 (ATerm t)
{
  ATerm p_1 = NULL,r_1 = NULL,t_1 = NULL;
  p_1 = t;
  if(match_cons(t, sym_Op_2))
    {
      r_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_1;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = r_1;
  if(match_string(t, "Wld"))
    {
      ATerm l_6 = t;
      int n_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_1(r_1, p_1, t);
          LocalPopChoice(n_6);
        }
      else
        {
          t = l_6;
          t = term_r_6;
        }
    }
  else
    {
      t = y_1(r_1, p_1, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  static ATerm h_0 (ATerm t)
  {
    t = topdown_1_0(d_79, t);
    return(t);
  }
  t = d_79(t);
  t = SRTS_all(h_0, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_85 (ATerm), ATerm t)
{
  static ATerm s_3 (ATerm t)
  {
    ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
    p_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_3 = ATgetFirst((ATermList) t);
        r_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_6 = t;
      int t_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 = NULL,c_1 = NULL,e_2 = NULL;
          t = SSLgetAnnotations(p_3);
          s_0 = t;
          t = q_3;
          t = z_85(t);
          c_1 = t;
          t = (ATerm) ATinsert(CheckATermList(r_3), c_1);
          e_2 = t;
          t = SSLsetAnnotations(e_2, s_0);
          LocalPopChoice(t_6);
        }
      else
        {
          t = s_6;
          {
            ATerm l_1 = NULL,u_1 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(p_3);
            l_1 = t;
            t = r_3;
            t = s_3(t);
            u_1 = t;
            t = (ATerm) ATinsert(CheckATermList(u_1), q_3);
            o_2 = t;
            t = SSLsetAnnotations(o_2, l_1);
          }
        }
    }
    return(t);
  }
  t = s_3(t);
  return(t);
}
static ATerm p_6 (ATerm z_3, ATerm t)
{
  ATerm b_4 = NULL;
  t = SSL_is_string(z_3);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, b_4));
  return(t);
}
static ATerm q_6 (ATerm f_4, ATerm t)
{
  ATerm g_4 = NULL,o_4 = NULL,a_5 = NULL;
  t = SSL_explode_term(f_4);
  if(match_cons(t, sym__2))
    {
      g_4 = ATgetArgument(t, 0);
      o_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4;
  t = map_1_0(str_explode_0_0, t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, g_4, a_5);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm s_5 = NULL,v_5 = NULL,z_5 = NULL;
  z_5 = t;
  if(match_cons(t, sym_meta_var_1))
    {
      s_5 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_5), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_FromTerm_1))
        {
          s_5 = ATgetArgument(t, 0);
          {
            ATerm v_6 = t;
            int w_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_5;
                t = z_4(s_5, t);
                LocalPopChoice(w_6);
              }
            else
              {
                t = v_6;
                {
                  ATerm a_7 = t;
                  int d_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_6(z_5, t);
                      LocalPopChoice(d_7);
                    }
                  else
                    {
                      t = a_7;
                      t = q_6(z_5, t);
                    }
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_FromStrategy_1))
            {
              s_5 = ATgetArgument(t, 0);
              {
                ATerm e_7 = t;
                int j_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = z_5;
                    t = x_4(s_5, t);
                    LocalPopChoice(j_7);
                  }
                else
                  {
                    t = e_7;
                    {
                      ATerm k_7 = t;
                      int l_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_6(z_5, t);
                          LocalPopChoice(l_7);
                        }
                      else
                        {
                          t = k_7;
                          t = q_6(z_5, t);
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_FromApp_1))
                {
                  s_5 = ATgetArgument(t, 0);
                  {
                    ATerm m_7 = t;
                    int n_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym_FromStrategy_1, s_5);
                        t = x_4(s_5, t);
                        LocalPopChoice(n_7);
                      }
                    else
                      {
                        t = m_7;
                        {
                          ATerm o_7 = t;
                          int p_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = p_6(z_5, t);
                              LocalPopChoice(p_7);
                            }
                          else
                            {
                              t = o_7;
                              t = q_6(z_5, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = term_r_7;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          s_5 = ATgetFirst((ATermList) t);
                          v_5 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm u_7 = t;
                            int v_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm m_6 = NULL,o_6 = NULL;
                                t = s_5;
                                t = str_explode_0_0(t);
                                m_6 = t;
                                t = v_5;
                                t = str_explode_0_0(t);
                                o_6 = t;
                                t = (ATerm) ATmakeAppl(sym_Cong_2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, o_6), m_6));
                                LocalPopChoice(v_7);
                              }
                            else
                              {
                                t = u_7;
                                {
                                  ATerm x_7 = t;
                                  int y_7 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = p_6(z_5, t);
                                      LocalPopChoice(y_7);
                                    }
                                  else
                                    {
                                      t = x_7;
                                      t = q_6(z_5, t);
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          ATerm h_8 = t;
                          int n_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = p_6(z_5, t);
                              LocalPopChoice(n_8);
                            }
                          else
                            {
                              t = h_8;
                              t = q_6(z_5, t);
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
  ATerm u_6 = NULL,y_6 = NULL,z_6 = NULL,b_7 = NULL;
  b_7 = t;
  t = SSL_explode_term(b_7);
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6;
  t = map_1_0(trm_explode_0_0, t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, u_6, z_6);
  return(t);
}
static ATerm s_4 (ATerm i_21, ATerm j_21, ATerm t)
{
  ATerm c_7 = NULL,f_7 = NULL;
  t = i_21;
  t = trm_explode_0_0(t);
  c_7 = t;
  t = j_21;
  t = trm_explode_0_0(t);
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, f_7), c_7));
  return(t);
}
ATerm foldr_3_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,g_8 = NULL;
  b_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_8;
      t = u_91(t);
    }
  else
    {
      ATerm o_8 = NULL,p_8 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_8 = ATgetFirst((ATermList) t);
          g_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_8;
      t = w_91(t);
      o_8 = t;
      t = g_8;
      t = foldr_3_0(u_91, v_91, w_91, t);
      p_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_8, p_8);
      t = v_91(t);
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,a_2 = NULL;
  o_9 = t;
  t = SSL_explode_term(o_9);
  if(match_cons(t, sym__2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_8 = ATgetArgument(t, 1);
        if(((ATgetType(w_8) == AT_LIST) && !(ATisEmpty(w_8))))
          {
            p_9 = ATgetFirst((ATermList) w_8);
            {
              ATerm x_8 = (ATerm) ATgetNext((ATermList) w_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(o_9);
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
          {
            ATerm i_9 = ATgetFirst((ATermList) e_9);
            ATerm l_9 = (ATerm) ATgetNext((ATermList) e_9);
            if(((ATgetType(l_9) == AT_LIST) && !(ATisEmpty(l_9))))
              {
                a_2 = ATgetFirst((ATermList) l_9);
                {
                  ATerm m_9 = (ATerm) ATgetNext((ATermList) l_9);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, a_2), p_9));
  return(t);
}
static ATerm v_4 (ATerm l_21, ATerm k_21, ATerm t)
{
  ATerm v_8 = NULL;
  static ATerm m_0 (ATerm t)
  {
    t = k_21;
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_9 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              j_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, term_t_9), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, j_9))));
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = l_21;
  if(match_cons(t, sym_meta_listvar_1))
    {
      v_8 = ATgetArgument(t, 0);
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, v_8)));
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            t = l_21;
          }
      }
    }
  else
    {
      t = l_21;
    }
  t = foldr_3_0(m_0, p_0, trm_explode_0_0, t);
  return(t);
}
static ATerm x_4 (ATerm e_112, ATerm t)
{
  t = e_112;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm y_4 (ATerm p_112, ATerm t)
{
  ATerm u_9 = NULL;
  t = p_112;
  t = MetaExplode_0_0(t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, u_9);
  return(t);
}
static ATerm z_4 (ATerm t_111, ATerm t)
{
  t = t_111;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm y_11 (ATerm i_10, ATerm t)
{
  ATerm j_10 = NULL;
  t = SSL_is_int(i_10);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, j_10);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_10 = NULL,n_10 = NULL;
      n_10 = t;
      if(match_cons(t, sym_meta_var_1))
        {
          m_10 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, m_10);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              m_10 = ATgetArgument(t, 0);
              {
                ATerm k_10 = t;
                int l_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym_Op_2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, term_t_9), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, m_10))));
                    LocalPopChoice(l_10);
                  }
                else
                  {
                    t = k_10;
                    t = y_11(n_10, t);
                  }
              }
            }
          else
            {
              t = y_11(n_10, t);
            }
        }
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 = NULL,d_2 = NULL;
            d_2 = t;
            t = SSL_is_string(d_2);
            c_2 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, c_2);
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm q_10 = t;
              int r_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
                  s_10 = t;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      t_10 = ATgetArgument(t, 0);
                      t = s_10;
                      t = z_4(t_10, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          t_10 = ATgetArgument(t, 0);
                          t = s_10;
                          t = y_4(t_10, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              t_10 = ATgetArgument(t, 0);
                              t = s_10;
                              t = x_4(t_10, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_WithAnno_2))
                                {
                                  t_10 = ATgetArgument(t, 0);
                                  u_10 = ATgetArgument(t, 1);
                                  {
                                    ATerm h_2 = NULL,i_2 = NULL;
                                    t = t_10;
                                    t = trm_explode_0_0(t);
                                    h_2 = t;
                                    t = u_10;
                                    t = MetaExplode_0_0(t);
                                    i_2 = t;
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, h_2, i_2);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Conc_2))
                                    {
                                      t_10 = ATgetArgument(t, 0);
                                      u_10 = ATgetArgument(t, 1);
                                      t = s_10;
                                      t = v_4(t_10, u_10, t);
                                    }
                                  else
                                    {
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = term_t_9;
                                        }
                                      else
                                        {
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              t_10 = ATgetFirst((ATermList) t);
                                              u_10 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = s_10;
                                          t = s_4(t_10, u_10, t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  LocalPopChoice(r_10);
                }
              else
                {
                  t = q_10;
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
  ATerm e_12 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      e_12 = ATgetArgument(t, 0);
      t = e_12;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          e_12 = ATgetArgument(t, 0);
          {
            ATerm k_12 = NULL;
            t = e_12;
            t = trm_explode_0_0(t);
            k_12 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, k_12);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              e_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_12;
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
ATerm oncetd_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  static ATerm t_12 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_80(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = SRTS_one(t_12, t);
      }
    return(t);
  }
  t = t_12(t);
  return(t);
}
ATerm alltd_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  static ATerm v_12 (ATerm t)
  {
    ATerm x_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_80(t);
        LocalPopChoice(z_10);
      }
    else
      {
        t = x_10;
        t = SRTS_all(v_12, t);
      }
    return(t);
  }
  t = v_12(t);
  return(t);
}
ATerm ImplodeLayout_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  static ATerm p_20 (ATerm t)
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm i_20 = NULL,j_20 = NULL,m_20 = NULL,n_20 = NULL;
      j_20 = t;
      if(match_cons(t, sym_BA_2))
        {
          m_20 = ATgetArgument(t, 0);
          n_20 = ATgetArgument(t, 1);
          {
            ATerm q_2 = NULL,t_2 = NULL,u_2 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(j_20);
            q_2 = t;
            t = m_20;
            t = ImplodeLayout_1_0(_fail, t);
            t_2 = t;
            t = n_20;
            t = ImplodeLayout_1_0(_id, t);
            u_2 = t;
            t = (ATerm) ATmakeAppl(sym_BA_2, t_2, u_2);
            x_2 = t;
            t = SSLsetAnnotations(x_2, q_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              m_20 = ATgetArgument(t, 0);
              {
                ATerm y_3 = NULL,d_4 = NULL,z_2 = NULL;
                t = SSLgetAnnotations(j_20);
                y_3 = t;
                t = m_20;
                t = ImplodeLayout_1_0(_id, t);
                d_4 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, d_4);
                z_2 = t;
                t = SSLsetAnnotations(z_2, y_3);
              }
            }
          else
            {
              if(match_cons(t, sym_AM_2))
                {
                  m_20 = ATgetArgument(t, 0);
                  n_20 = ATgetArgument(t, 1);
                  {
                    ATerm n_4 = NULL,r_4 = NULL,t_4 = NULL,b_3 = NULL;
                    t = SSLgetAnnotations(j_20);
                    n_4 = t;
                    t = m_20;
                    t = p_20(t);
                    r_4 = t;
                    t = n_20;
                    t = ImplodeLayout_1_0(_id, t);
                    t_4 = t;
                    t = (ATerm) ATmakeAppl(sym_AM_2, r_4, t_4);
                    b_3 = t;
                    t = SSLsetAnnotations(b_3, n_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RuleNoCond_2))
                    {
                      m_20 = ATgetArgument(t, 0);
                      n_20 = ATgetArgument(t, 1);
                      {
                        ATerm x_5 = NULL,b_6 = NULL,c_6 = NULL,c_3 = NULL;
                        t = SSLgetAnnotations(j_20);
                        x_5 = t;
                        t = m_20;
                        t = p_20(t);
                        b_6 = t;
                        t = n_20;
                        t = ImplodeLayout_1_0(_id, t);
                        c_6 = t;
                        t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, b_6, c_6);
                        c_3 = t;
                        t = SSLsetAnnotations(c_3, x_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Rule_3))
                        {
                          m_20 = ATgetArgument(t, 0);
                          n_20 = ATgetArgument(t, 1);
                          i_20 = ATgetArgument(t, 2);
                          {
                            ATerm x_6 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,d_3 = NULL;
                            t = SSLgetAnnotations(j_20);
                            x_6 = t;
                            t = m_20;
                            t = p_20(t);
                            g_7 = t;
                            t = n_20;
                            t = ImplodeLayout_1_0(_id, t);
                            h_7 = t;
                            t = i_20;
                            t = p_20(t);
                            i_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Rule_3, g_7, h_7, i_7);
                            d_3 = t;
                            t = SSLsetAnnotations(d_3, x_6);
                          }
                        }
                      else
                        {
                          ATerm s_7 = NULL,t_7 = NULL,z_7 = NULL,a_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,q_8 = NULL,r_8 = NULL,i_3 = NULL,h_3 = NULL,g_3 = NULL,f_3 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              m_20 = ATgetArgument(t, 0);
                              n_20 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(j_20);
                          t_7 = t;
                          t = m_20;
                          if(match_cons(t, sym_prod_3))
                            {
                              d_8 = ATgetArgument(t, 0);
                              e_8 = ATgetArgument(t, 1);
                              f_8 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(m_20);
                          a_8 = t;
                          t = e_8;
                          if(match_cons(t, sym_cf_1))
                            {
                              k_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(e_8);
                          j_8 = t;
                          t = k_8;
                          if(match_cons(t, sym_opt_1))
                            {
                              q_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(k_8);
                          m_8 = t;
                          t = q_8;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_opt_1, q_8);
                          f_3 = t;
                          t = SSLsetAnnotations(f_3, m_8);
                          r_8 = t;
                          t = (ATerm) ATmakeAppl(sym_cf_1, r_8);
                          g_3 = t;
                          t = SSLsetAnnotations(g_3, j_8);
                          l_8 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, d_8, l_8, f_8);
                          h_3 = t;
                          t = SSLsetAnnotations(h_3, a_8);
                          i_8 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, i_8, n_20);
                          i_3 = t;
                          t = SSLsetAnnotations(i_3, t_7);
                          z_7 = t;
                          {
                            ATerm a_11 = t;
                            int b_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_8 = NULL,u_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,k_9 = NULL,n_9 = NULL,q_9 = NULL,v_9 = NULL,w_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,t_3 = NULL,n_3 = NULL,m_3 = NULL,l_3 = NULL,k_3 = NULL,j_3 = NULL;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    u_8 = ATgetArgument(t, 0);
                                    y_8 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(z_7);
                                t_8 = t;
                                t = u_8;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    b_9 = ATgetArgument(t, 0);
                                    c_9 = ATgetArgument(t, 1);
                                    f_9 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(u_8);
                                a_9 = t;
                                t = b_9;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    a_10 = ATgetFirst((ATermList) t);
                                    b_10 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(b_9);
                                z_9 = t;
                                t = a_10;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    e_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(a_10);
                                d_10 = t;
                                t = e_10;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_cf_1, e_10);
                                j_3 = t;
                                t = SSLsetAnnotations(j_3, d_10);
                                f_10 = t;
                                t = b_10;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = (ATerm) ATinsert(CheckATermList(b_10), f_10);
                                k_3 = t;
                                t = SSLsetAnnotations(k_3, z_9);
                                c_10 = t;
                                t = c_9;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    k_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(c_9);
                                h_9 = t;
                                t = k_9;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    v_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(k_9);
                                q_9 = t;
                                t = v_9;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_opt_1, v_9);
                                l_3 = t;
                                t = SSLsetAnnotations(l_3, q_9);
                                w_9 = t;
                                t = (ATerm) ATmakeAppl(sym_cf_1, w_9);
                                m_3 = t;
                                t = SSLsetAnnotations(m_3, h_9);
                                n_9 = t;
                                t = (ATerm) ATmakeAppl(sym_prod_3, c_10, n_9, f_9);
                                n_3 = t;
                                t = SSLsetAnnotations(n_3, a_9);
                                g_9 = t;
                                t = y_8;
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
                                z_8 = t;
                                t = (ATerm) ATmakeAppl(sym_appl_2, g_9, z_8);
                                t_3 = t;
                                t = SSLsetAnnotations(t_3, t_8);
                                LocalPopChoice(b_11);
                                t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(s_7));
                              }
                            else
                              {
                                t = a_11;
                                {
                                  ATerm e_11 = t;
                                  int j_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm k_11 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = i_77(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = k_11;
                                        }
                                      t = term_r_6;
                                      LocalPopChoice(j_11);
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
    t = alltd_1_0(x_0, t);
    return(t);
  }
  t = p_20(t);
  return(t);
}
static ATerm e_5 (ATerm x_37, ATerm y_37, ATerm t)
{
  ATerm x_20 = NULL;
  t = SSL_fputc(x_37, y_37);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_20);
  return(t);
}
static ATerm f_5 (ATerm g_23, ATerm h_23, ATerm t)
{
  ATerm y_20 = NULL;
  t = SSL_write_term_to_stream_text(g_23, h_23);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_20);
  return(t);
}
static ATerm h_5 (ATerm g_85 (ATerm), ATerm l_156, ATerm k_23, ATerm t)
{
  ATerm z_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_156, term_l_11);
  t = k_5(t);
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_20, k_23);
  t = g_85(t);
  t = fclose_0_0(t);
  t = k_23;
  return(t);
}
static ATerm g_5 (ATerm c_23, ATerm d_23, ATerm t)
{
  ATerm t_21 = NULL;
  t = SSL_write_term_to_stream_baf(c_23, d_23);
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_21);
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
  ATerm h_11 = NULL,i_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Stream_1))
        {
          h_11 = ATgetArgument(m_11, 0);
        }
      else
        _fail(t);
      i_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(h_11, i_11, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,d_12 = NULL,f_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(match_cons(n_11, sym_Stream_1))
        {
          f_12 = ATgetArgument(n_11, 0);
        }
      else
        _fail(t);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(f_12, g_12, t);
  a_12 = t;
  t = term_p_11;
  b_12 = t;
  t = a_12;
  if(match_cons(t, sym_Stream_1))
    {
      d_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, a_12);
  t = e_5(b_12, d_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,j_22 = NULL,k_22 = NULL,n_22 = NULL,p_22 = NULL,q_22 = NULL,w_24 = NULL,d_25 = NULL,f_14 = NULL,a_14 = NULL;
  e_22 = t;
  if(match_cons(t, sym__2))
    {
      n_22 = ATgetArgument(t, 0);
      p_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_22);
  k_22 = t;
  t = n_22;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((d_22 != NULL) && (d_22 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_0, t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = term_s_11;
        d_22 = t;
      }
  }
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_22, p_22);
  a_14 = t;
  t = SSLsetAnnotations(a_14, k_22);
  t = e_22;
  if(match_cons(t, sym__2))
    {
      g_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_22);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_22, (ATerm) ATmakeAppl(sym__2, not_null(d_22), h_22));
  f_14 = t;
  t = SSLsetAnnotations(f_14, f_22);
  j_22 = t;
  if(match_cons(t, sym__2))
    {
      w_24 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_10 = NULL,c_11 = NULL,d_11 = NULL,f_11 = NULL,g_11 = NULL,g_14 = NULL;
        t = SSLgetAnnotations(j_22);
        y_10 = t;
        t = w_24;
        t = fetch_1_0(a_1, t);
        c_11 = t;
        t = d_25;
        if(match_cons(t, sym__2))
          {
            f_11 = ATgetArgument(t, 0);
            g_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_5(d_1, f_11, g_11, t);
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_11, d_11);
        g_14 = t;
        t = SSLsetAnnotations(g_14, y_10);
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        {
          ATerm o_11 = NULL,t_11 = NULL,u_11 = NULL,z_11 = NULL,h_14 = NULL;
          t = SSLgetAnnotations(j_22);
          o_11 = t;
          t = d_25;
          if(match_cons(t, sym__2))
            {
              u_11 = ATgetArgument(t, 0);
              z_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_5(e_1, u_11, z_11, t);
          t_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_24, t_11);
          h_14 = t;
          t = SSLsetAnnotations(h_14, o_11);
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
ATerm apply_strategy_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  v_25 = t;
  t = dtime_0_0(t);
  t = v_25;
  t = w_101(t);
  u_25 = t;
  t = dtime_0_0(t);
  r_25 = t;
  t = u_25;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_25), (ATerm) ATmakeAppl(sym_Runtime_1, r_25)), t_25);
  return(t);
}
static ATerm j_26 (ATerm d_26, ATerm t)
{
  t = SSL_fclose(d_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  h_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_26 = ATgetArgument(t, 0);
      {
        ATerm x_11 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_26);
            LocalPopChoice(c_12);
          }
        else
          {
            t = x_11;
            t = j_26(h_26, t);
          }
      }
    }
  else
    {
      t = j_26(h_26, t);
    }
  return(t);
}
static ATerm i_5 (ATerm i_23, ATerm t)
{
  t = SSL_read_term_from_stream(i_23);
  return(t);
}
static ATerm j_5 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm k_26 = NULL;
  t = SSL_fopen(z_37, a_38);
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_26 = NULL;
  t = SSL_stdin_stream();
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_26 = NULL;
  t = SSL_stdout_stream();
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_26 = NULL;
  t = SSL_stderr_stream();
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_26);
  return(t);
}
static ATerm u_27 (ATerm t_26, ATerm t)
{
  ATerm u_26 = NULL;
  t = SSL_explode_term(t_26);
  if(match_cons(t, sym__2))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_12 = ATgetArgument(t, 1);
        if(((ATgetType(i_12) == AT_LIST) && !(ATisEmpty(i_12))))
          {
            u_26 = ATgetFirst((ATermList) i_12);
            {
              ATerm j_12 = (ATerm) ATgetNext((ATermList) i_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_27 (ATerm x_26, ATerm y_26, ATerm z_26, ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,f_27 = NULL,o_14 = NULL;
  t = SSLgetAnnotations(z_26);
  c_27 = t;
  t = x_26;
  if(match_cons(t, sym_Path_1))
    {
      f_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_27, y_26);
  o_14 = t;
  t = SSLsetAnnotations(o_14, c_27);
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(a_27, b_27, t);
  return(t);
}
static ATerm w_27 (ATerm h_27, ATerm i_27, ATerm j_27, ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,p_27 = NULL,p_14 = NULL;
  t = SSLgetAnnotations(j_27);
  m_27 = t;
  t = SSL_is_string(h_27);
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_27, i_27);
  p_14 = t;
  t = SSLsetAnnotations(p_14, m_27);
  if(match_cons(t, sym__2))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(k_27, l_27, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  if(match_cons(t, sym__2))
    {
      s_27 = ATgetArgument(t, 0);
      t_27 = ATgetArgument(t, 1);
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_27(r_27, t);
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            {
              ATerm n_12 = t;
              int o_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_27(s_27, t_27, r_27, t);
                  LocalPopChoice(o_12);
                }
              else
                {
                  t = n_12;
                  t = w_27(s_27, t_27, r_27, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_27(r_27, t);
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_28 = NULL;
      a_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_28, term_s_12);
      t = k_5(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      t = debug_1_0(f_1, t);
      _fail(t);
    }
  y_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(z_27, t);
  x_27 = t;
  t = y_27;
  t = fclose_0_0(t);
  t = x_27;
  return(t);
}
static ATerm d_5 (ATerm r_36, ATerm s_36, ATerm t)
{
  t = SSL_strcat(r_36, s_36);
  return(t);
}
ATerm debug_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  c_28 = t;
  t = e_85(t);
  d_28 = t;
  t = term_f_6;
  e_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_28), d_28);
  f_28 = t;
  t = SSL_printnl(e_28, f_28);
  t = c_28;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm u_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = u_12;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_28 = NULL;
      m_28 = t;
      t = SSL_is_string(m_28);
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_1, t);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
              s_28 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_28 = ATgetArgument(t, 0);
                  t = t_28;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_28 = ATgetArgument(t, 0);
                      t = t_28;
                      {
                        ATerm c_13 = t;
                        int f_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(f_13);
                          }
                        else
                          {
                            t = c_13;
                            t = debug_1_0(h_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_28 = NULL,z_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_28 = ATgetArgument(t, 0);
                          u_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_28;
                      t = eval_config_0_0(t);
                      y_28 = t;
                      t = u_28;
                      t = eval_config_0_0(t);
                      z_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_28, z_28);
                      t = d_5(y_28, z_28, t);
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
  ATerm d_29 = NULL,e_29 = NULL;
  d_29 = t;
  t = term_g_13;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_13, d_29);
  t = n_5(e_29, d_29, t);
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL,g_29 = NULL;
        t = eval_config_0_0(t);
        f_29 = t;
        t = term_g_13;
        g_29 = t;
        t = SSL_table_put(g_29, d_29, f_29);
        t = f_29;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_29 = NULL;
        t = term_n_13;
        t = get_config_0_0(t);
        m_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_29, term_o_13);
        t = geq_0_0(t);
        t = k_29;
        t = f_100(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = k_29;
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  if(match_string(t, "-k"))
    {
      t = p_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_29;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  q_29 = t;
  t = SSL_string_to_int(q_29);
  r_29 = t;
  t = term_p_13;
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, r_29);
  t = q_5(s_29, r_29, t);
  t = q_29;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_q_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_1, k_1, n_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  if(match_string(t, "-S"))
    {
      t = u_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_29;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL;
  t = term_n_13;
  v_29 = t;
  t = term_r_13;
  w_29 = t;
  t = term_s_13;
  t = q_5(v_29, w_29, t);
  t = term_t_13;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,d_30 = NULL;
  x_29 = t;
  t = SSL_string_to_int(x_29);
  y_29 = t;
  t = term_n_13;
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_13, y_29);
  t = q_5(d_30, y_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_29);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  t = term_x_13;
  e_30 = t;
  t = term_e_6;
  f_30 = t;
  t = term_y_13;
  t = q_5(e_30, f_30, t);
  t = term_z_13;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_1, s_1, v_1, t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm e_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_1, x_1, z_1, t);
            LocalPopChoice(i_14);
          }
        else
          {
            t = e_14;
            t = Option_3_0(b_2, f_2, g_2, t);
          }
      }
    }
  return(t);
}
static ATerm q_5 (ATerm t_46, ATerm u_46, ATerm t)
{
  ATerm g_30 = NULL;
  t = term_g_13;
  g_30 = t;
  t = SSL_table_put(g_30, t_46, u_46);
  t = (ATerm) ATmakeAppl(sym__3, term_g_13, t_46, u_46);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  if(match_string(t, "-o"))
    {
      t = i_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_30;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  j_30 = t;
  t = term_j_14;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, j_30);
  t = q_5(k_30, j_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_30);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_2, k_2, l_2, t);
  return(t);
}
static ATerm o_5 (ATerm r_51, ATerm s_51, ATerm q_51, ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_51, s_51);
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_14 = ATgetArgument(t, 0);
            ATerm q_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_51, s_51);
        t = n_5(r_51, s_51, t);
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = (ATerm) ATempty;
      }
  }
  n_30 = t;
  t = (ATerm) ATinsert(CheckATermList(n_30), q_51);
  o_30 = t;
  t = SSL_table_put(r_51, s_51, o_30);
  t = m_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
      t = term_e_6;
      t = n_0(t);
      z_30 = t;
      t = term_j_6;
      a_31 = t;
      t = term_k_6;
      b_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_6, term_k_6, z_30);
      t = o_5(a_31, b_31, z_30, t);
      _fail(t);
    }
  else
    {
      ATerm f_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_30 = ATgetFirst((ATermList) t);
          w_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_30 = ATgetFirst((ATermList) t);
          y_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_30;
      t = k_0(t);
      t = x_30;
      t = l_0(t);
      f_31 = t;
      t = (ATerm) ATinsert(CheckATermList(y_30), f_31);
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  if(match_string(t, "-i"))
    {
      t = h_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_31;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  i_31 = t;
  t = term_r_14;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, i_31);
  t = q_5(j_31, i_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_31);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_2, n_2, p_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_6;
  t = whoami_0_0(t);
  k_31 = t;
  t = term_f_6;
  m_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_14), k_31);
  n_31 = t;
  t = SSL_printnl(m_31, n_31);
  t = term_i_6;
  l_31 = t;
  t = SSL_exit(l_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_14;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_5 (ATerm s_40, ATerm t_40, ATerm t)
{
  ATerm z_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_40, t_40);
      LocalPopChoice(b_15);
    }
  else
    {
      t = z_14;
      t = SSL_addr(s_40, t_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_31;
      t = s_91(t);
    }
  else
    {
      ATerm v_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_31 = ATgetFirst((ATermList) t);
          r_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_31;
      t = foldr_2_0(s_91, t_91, t);
      v_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_31, v_31);
      t = t_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  if(match_cons(t, sym__2))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(h_13, i_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_31 = NULL,d_13 = NULL,e_13 = NULL;
  t = times_0_0(t);
  e_13 = t;
  t = SSL_explode_term(e_13);
  if(match_cons(t, sym__2))
    {
      ATerm e_15 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_13;
  t = foldr_2_0(r_2, s_2, t);
  y_31 = t;
  t = SSL_TicksToSeconds(y_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  j_32 = t;
  if(match_cons(t, sym__2))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_32;
        if((k_32 != t))
          {
            _fail(t);
          }
        t = j_32;
        LocalPopChoice(i_15);
      }
    else
      {
        t = g_15;
        t = (ATerm) ATmakeAppl(sym__2, k_32, l_32);
        {
          ATerm m_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_32, l_32);
              LocalPopChoice(n_15);
            }
          else
            {
              t = m_15;
              t = SSL_gtr(k_32, l_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_32, l_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_32 = NULL;
        t = term_n_13;
        t = get_config_0_0(t);
        r_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_32, term_i_6);
        t = geq_0_0(t);
        t = p_32;
        t = e_100(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = p_32;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,w_32 = NULL,x_32 = NULL;
  t = run_time_0_0(t);
  t_32 = t;
  t = term_e_6;
  t = whoami_0_0(t);
  u_32 = t;
  t = term_f_6;
  w_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_15), t_32), term_q_15), u_32);
  x_32 = t;
  t = SSL_printnl(w_32, x_32);
  t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_15), t_32), term_q_15), u_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_13;
  y_32 = t;
  t = SSL_exit(y_32);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  h_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_33 = ATgetArgument(t, 0);
          {
            ATerm w_13 = NULL,u_14 = NULL;
            t = SSLgetAnnotations(h_33);
            w_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_33);
            u_14 = t;
            t = SSLsetAnnotations(u_14, w_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_15;
      t = get_config_0_0(t);
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      t = fetch_1_0(w_2, t);
    }
  t = u_102(t);
  return(t);
}
ATerm map_1_0 (ATerm p_85 (ATerm), ATerm t)
{
  static ATerm x_33 (ATerm t)
  {
    ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
    u_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_33;
      }
    else
      {
        ATerm s_14 = NULL,y_14 = NULL,c_15 = NULL,w_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_33 = ATgetFirst((ATermList) t);
            w_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_33);
        s_14 = t;
        t = v_33;
        t = p_85(t);
        y_14 = t;
        t = w_33;
        t = x_33(t);
        c_15 = t;
        t = (ATerm) ATinsert(CheckATermList(c_15), y_14);
        w_14 = t;
        t = SSLsetAnnotations(w_14, s_14);
      }
    return(t);
  }
  t = x_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_34 = ATgetFirst((ATermList) t);
      b_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_34 = NULL,g_34 = NULL;
        static ATerm y_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_34)), not_null(g_34));
          return(t);
        }
        t = b_34;
        t = i_0(t);
        if(((f_34 != NULL) && (f_34 != t)))
          _fail(t);
        else
          f_34 = t;
        t = a_34;
        t = g_0(t);
        if(((g_34 != NULL) && (g_34 != t)))
          _fail(t);
        else
          g_34 = t;
        t = b_34;
        t = reverse_acc_2_0(g_0, y_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_6;
      t = i_0(t);
    }
  return(t);
}
static ATerm n_5 (ATerm i_53, ATerm j_53, ATerm t)
{
  t = SSL_table_get(i_53, j_53);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,a_15 = NULL;
  m_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_34);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_34);
  a_15 = t;
  t = SSLsetAnnotations(a_15, k_34);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm o_34 = NULL;
  o_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_34), term_v_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL;
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_14;
      t = get_config_0_0(t);
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      t = fetch_1_0(a_3, t);
    }
  t = term_y_15;
  t = echo_0_0(t);
  t = term_j_6;
  i_34 = t;
  t = term_k_6;
  j_34 = t;
  t = term_z_15;
  t = n_5(i_34, j_34, t);
  t = reverse_acc_2_0(_id, e_3, t);
  t = map_1_0(o_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_16 = ATgetFirst((ATermList) t);
                ATerm d_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_34;
          }
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = (ATerm) ATinsert(ATempty, q_34);
      }
  }
  r_34 = t;
  t = term_s_11;
  s_34 = t;
  t = SSL_printnl(s_34, r_34);
  t = q_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL;
  t = term_e_16;
  w_34 = t;
  t = term_e_6;
  x_34 = t;
  t = term_f_16;
  t = q_5(w_34, x_34, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_h_16;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
  t = term_e_16;
  a_35 = t;
  t = term_e_6;
  b_35 = t;
  t = term_f_16;
  t = q_5(a_35, b_35, t);
  t = term_i_16;
  y_34 = t;
  t = term_e_6;
  z_34 = t;
  t = term_j_16;
  t = q_5(y_34, z_34, t);
  t = term_k_16;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, v_3, w_3, t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      t = Option_3_0(x_3, a_4, c_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,d_15 = NULL;
  h_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_35 = ATgetFirst((ATermList) t);
      e_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_35);
  c_35 = t;
  t = d_35;
  t = i_57(t);
  f_35 = t;
  t = e_35;
  t = j_57(t);
  g_35 = t;
  t = (ATerm) ATinsert(CheckATermList(g_35), f_35);
  d_15 = t;
  t = SSLsetAnnotations(d_15, c_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,r_35 = NULL,s_35 = NULL,f_15 = NULL;
  m_35 = t;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_16;
        t = x_104(t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
      }
  }
  t = m_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_35 = ATgetFirst((ATermList) t);
      p_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_35);
  n_35 = t;
  t = term_x_14;
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, o_35);
  t = q_5(s_35, o_35, t);
  t = p_35;
  {
    static ATerm c_36 (ATerm t)
    {
      ATerm r_16 = t;
      int t_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_35 = NULL;
              v_35 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_35;
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              t = x_104(t);
              t = Cons_2_0(_id, c_36, t);
            }
          LocalPopChoice(t_16);
        }
      else
        {
          t = r_16;
          {
            ATerm y_35 = NULL,z_35 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_35 = ATgetFirst((ATermList) t);
                z_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_35), (ATerm) ATmakeAppl(sym_Undefined_1, y_35));
          }
        }
      return(t);
    }
    t = c_36(t);
  }
  r_35 = t;
  t = (ATerm) ATinsert(CheckATermList(r_35), (ATerm) ATmakeAppl(sym_Program_1, o_35));
  f_15 = t;
  t = SSLsetAnnotations(f_15, n_35);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  if(match_string(t, "--help"))
    {
      t = o_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_36;
        }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL;
  t = term_u_15;
  p_36 = t;
  t = term_e_6;
  q_36 = t;
  t = term_w_16;
  t = q_5(p_36, q_36, t);
  t = term_x_16;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_y_16;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
  j_36 = t;
  t = term_j_6;
  l_36 = t;
  t = term_k_6;
  m_36 = t;
  t = (ATerm) ATempty;
  n_36 = t;
  t = SSL_table_put(l_36, m_36, n_36);
  t = j_36;
  {
    static ATerm e_4 (ATerm t)
    {
      ATerm z_16 = t;
      int a_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_104(t);
          LocalPopChoice(a_17);
        }
      else
        {
          t = z_16;
          {
            ATerm c_17 = t;
            int d_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_4, i_4, j_4, t);
                LocalPopChoice(d_17);
              }
            else
              {
                t = c_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_4, t);
  }
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_36 = NULL;
        z_36 = t;
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_16 = NULL;
              t = z_36;
              {
                ATerm i_17 = t;
                int j_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_u_15;
                    t = get_config_0_0(t);
                    LocalPopChoice(j_17);
                  }
                else
                  {
                    t = i_17;
                    t = fetch_1_0(k_4, t);
                  }
              }
              t = z_36;
              t = default_system_usage_0_0(t);
              t = term_r_13;
              g_16 = t;
              t = SSL_exit(g_16);
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              {
                ATerm s_16 = NULL;
                t = term_e_16;
                t = get_config_0_0(t);
                t = z_36;
                t = default_system_about_0_0(t);
                t = term_r_13;
                s_16 = t;
                t = SSL_exit(s_16);
              }
            }
        }
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        {
          ATerm l_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
              static ATerm l_4 (ATerm t)
              {
                ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,h_15 = NULL;
                f_37 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_37 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_37);
                d_37 = t;
                t = e_37;
                if(((h_36 != NULL) && (h_36 != t)))
                  _fail(t);
                else
                  h_36 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_37);
                h_15 = t;
                t = SSLsetAnnotations(h_15, d_37);
                return(t);
              }
              t = fetch_1_0(l_4, t);
              t = term_f_6;
              b_37 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_36)), term_n_17);
              c_37 = t;
              t = SSL_printnl(b_37, c_37);
              t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_36)), term_n_17));
              t = default_system_usage_0_0(t);
              t = term_i_6;
              a_37 = t;
              t = SSL_exit(a_37);
              LocalPopChoice(m_17);
            }
          else
            {
              t = l_17;
            }
        }
      }
  }
  i_36 = t;
  t = term_j_6;
  k_36 = t;
  t = SSL_table_destroy(k_36);
  t = i_36;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  t = parse_options_1_0(w_102, t);
  k_37 = t;
  t = term_o_17;
  n_37 = t;
  t = SSL_table_create(n_37);
  t = term_o_17;
  l_37 = t;
  t = term_p_17;
  m_37 = t;
  t = SSL_table_put(l_37, m_37, k_37);
  t = k_37;
  t = y_102(t);
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_102, t);
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_102(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = if_verbose2_1_0(c_5, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL;
  t = term_v_17;
  o_37 = t;
  t = term_e_6;
  p_37 = t;
  t = term_w_17;
  t = q_5(o_37, p_37, t);
  t = term_x_17;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  q_37 = t;
  t = term_x_14;
  t = get_config_0_0(t);
  r_37 = t;
  t = term_f_6;
  s_37 = t;
  t = (ATerm) ATinsert(ATempty, r_37);
  t_37 = t;
  t = SSL_printnl(s_37, t_37);
  t = q_37;
  return(t);
}
ATerm iowrap_3_0 (ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm t)
{
  static ATerm m_4 (ATerm t)
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_102(t);
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              {
                ATerm d_18 = t;
                int e_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(e_18);
                  }
                else
                  {
                    t = d_18;
                    {
                      ATerm f_18 = t;
                      int h_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_4, w_4, b_5, t);
                          LocalPopChoice(h_18);
                        }
                      else
                        {
                          t = f_18;
                          {
                            ATerm i_18 = t;
                            int l_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(l_18);
                              }
                            else
                              {
                                t = i_18;
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
  static ATerm q_4 (ATerm t)
  {
    ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
    v_37 = t;
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm m_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_37 != NULL) && (u_37 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_37 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_5, t);
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
          t = term_o_18;
          u_37 = t;
        }
    }
    t = not_null(u_37);
    t = ReadFromFile_0_0(t);
    w_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_37, w_37);
    t = apply_strategy_1_0(f_102, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(m_4, h_102, p_4, q_4, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,l_39 = NULL,m_39 = NULL,k_15 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
  b_39 = t;
  if(match_cons(t, sym__2))
    {
      z_38 = ATgetArgument(t, 0);
      a_39 = ATgetArgument(t, 1);
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_17 = NULL,k_17 = NULL,q_17 = NULL,j_15 = NULL;
            t = SSLgetAnnotations(b_39);
            b_17 = t;
            t = z_38;
            t = fetch_1_0(t_5, t);
            k_17 = t;
            t = a_39;
            t = ImplodeLayout_1_0(_fail, t);
            q_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_17, q_17);
            j_15 = t;
            t = SSLsetAnnotations(j_15, b_17);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = b_39;
          }
      }
    }
  else
    {
      t = b_39;
    }
  p_38 = t;
  if(match_cons(t, sym__2))
    {
      l_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_38);
  k_38 = t;
  t = m_38;
  t = MetaExplode_0_0(t);
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_38, n_38);
  k_15 = t;
  t = SSLsetAnnotations(k_15, k_38);
  o_38 = t;
  if(match_cons(t, sym__2))
    {
      l_39 = ATgetArgument(t, 0);
      m_39 = ATgetArgument(t, 1);
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_18 = NULL,j_18 = NULL,k_18 = NULL,l_15 = NULL;
            t = SSLgetAnnotations(o_38);
            g_18 = t;
            t = l_39;
            t = fetch_1_0(u_5, t);
            j_18 = t;
            t = m_39;
            t = topdown_1_0(w_5, t);
            k_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_18, k_18);
            l_15 = t;
            t = SSLsetAnnotations(l_15, g_18);
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = o_38;
          }
      }
    }
  else
    {
      t = o_38;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = Option_3_0(y_5, a_6, d_6, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Clean_0_0(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_w_18;
  return(t);
}
ATerm meta_explode_0_0 (ATerm t)
{
  t = iowrap_3_0(p_5, r_5, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = meta_explode_0_0(t);
  return(t);
}
