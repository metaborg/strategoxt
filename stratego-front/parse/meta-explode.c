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
ATerm term_g_16;
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
ATerm term_u_14;
ATerm term_r_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
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
ATerm term_t_12;
ATerm term_q_12;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_t_9;
ATerm term_w_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_s_6;
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
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Wld_0);
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
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
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
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_w_13, term_e_6);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
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
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
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
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm u_1 (ATerm j_1, ATerm k_1, ATerm t);
ATerm Clean_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm h_80 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm d_87 (ATerm), ATerm t);
static ATerm p_6 (ATerm z_3, ATerm t);
static ATerm q_6 (ATerm d_4, ATerm t);
ATerm str_explode_0_0 (ATerm t);
ATerm TrmOp_0_0 (ATerm t);
static ATerm t_4 (ATerm k_21, ATerm l_21, ATerm t);
ATerm foldr_3_0 (ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm w_4 (ATerm n_21, ATerm m_21, ATerm t);
static ATerm y_4 (ATerm l_113, ATerm t);
static ATerm z_4 (ATerm w_113, ATerm t);
static ATerm a_5 (ATerm a_113, ATerm t);
static ATerm y_11 (ATerm i_10, ATerm t);
ATerm trm_explode_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm MetaExplode_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm l_81 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm z_81 (ATerm), ATerm t);
ATerm ImplodeLayout_1_0 (ATerm m_78 (ATerm), ATerm t);
static ATerm f_5 (ATerm b_38, ATerm c_38, ATerm t);
static ATerm g_5 (ATerm i_23, ATerm j_23, ATerm t);
static ATerm i_5 (ATerm k_86 (ATerm), ATerm s_157, ATerm m_23, ATerm t);
static ATerm h_5 (ATerm e_23, ATerm f_23, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm f_103 (ATerm), ATerm t);
static ATerm i_26 (ATerm c_26, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_5 (ATerm k_23, ATerm t);
static ATerm k_5 (ATerm d_38, ATerm e_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_27 (ATerm s_26, ATerm t);
static ATerm u_27 (ATerm w_26, ATerm x_26, ATerm y_26, ATerm t);
static ATerm v_27 (ATerm g_27, ATerm h_27, ATerm i_27, ATerm t);
static ATerm l_5 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm e_5 (ATerm v_36, ATerm w_36, ATerm t);
ATerm debug_1_0 (ATerm i_86 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm o_101 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_5 (ATerm t_47, ATerm u_47, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t_52, ATerm u_52, ATerm s_52, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_5 (ATerm w_40, ATerm x_40, ATerm t);
ATerm foldr_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_101 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm need_help_1_0 (ATerm d_104 (ATerm), ATerm t);
ATerm map_1_0 (ATerm t_86 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm o_5 (ATerm k_54, ATerm l_54, ATerm t);
static ATerm b_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_106 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm parse_options_1_0 (ATerm f_106 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm iowrap_3_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL;
  a_0 = t;
  t = term_e_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_f_6;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_6), b_0), term_g_6);
  f_0 = t;
  t = SSL_printnl(e_0, f_0);
  t = term_i_6;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL;
      t = term_e_6;
      t = i_0(t);
      u_0 = t;
      t = term_j_6;
      v_0 = t;
      t = term_k_6;
      w_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_6, term_k_6, u_0);
      t = p_5(v_0, w_0, u_0, t);
      _fail(t);
    }
  else
    {
      ATerm a_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_0 = ATgetFirst((ATermList) t);
          s_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_0;
      t = d_0(t);
      t = term_e_6;
      t = g_0(t);
      a_1 = t;
      t = (ATerm) ATinsert(CheckATermList(s_0), a_1);
    }
  return(t);
}
static ATerm u_1 (ATerm j_1, ATerm k_1, ATerm t)
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
  ATerm p_1 = NULL,q_1 = NULL,s_1 = NULL;
  p_1 = t;
  if(match_cons(t, sym_Op_2))
    {
      q_1 = ATgetArgument(t, 0);
      s_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_1;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = q_1;
  if(match_string(t, "Wld"))
    {
      ATerm l_6 = t;
      int o_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_1(q_1, p_1, t);
          LocalPopChoice(o_6);
        }
      else
        {
          t = l_6;
          t = term_s_6;
        }
    }
  else
    {
      t = u_1(q_1, p_1, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  static ATerm h_0 (ATerm t)
  {
    t = topdown_1_0(h_80, t);
    return(t);
  }
  t = h_80(t);
  t = SRTS_all(h_0, t);
  return(t);
}
ATerm fetch_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  static ATerm s_3 (ATerm t)
  {
    ATerm o_3 = NULL,q_3 = NULL,r_3 = NULL;
    o_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_3 = ATgetFirst((ATermList) t);
        r_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_6 = t;
      int u_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_0 = NULL,c_1 = NULL,e_2 = NULL;
          t = SSLgetAnnotations(o_3);
          t_0 = t;
          t = q_3;
          t = d_87(t);
          c_1 = t;
          t = (ATerm) ATinsert(CheckATermList(r_3), c_1);
          e_2 = t;
          t = SSLsetAnnotations(e_2, t_0);
          LocalPopChoice(u_6);
        }
      else
        {
          t = t_6;
          {
            ATerm m_1 = NULL,v_1 = NULL,f_2 = NULL;
            t = SSLgetAnnotations(o_3);
            m_1 = t;
            t = r_3;
            t = s_3(t);
            v_1 = t;
            t = (ATerm) ATinsert(CheckATermList(v_1), q_3);
            f_2 = t;
            t = SSLsetAnnotations(f_2, m_1);
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
  ATerm a_4 = NULL;
  t = SSL_is_string(z_3);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, a_4));
  return(t);
}
static ATerm q_6 (ATerm d_4, ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,p_4 = NULL;
  t = SSL_explode_term(d_4);
  if(match_cons(t, sym__2))
    {
      g_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_4;
  t = map_1_0(str_explode_0_0, t);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, g_4, p_4);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,w_5 = NULL;
  w_5 = t;
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
            ATerm w_6 = t;
            int x_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_5;
                t = a_5(s_5, t);
                LocalPopChoice(x_6);
              }
            else
              {
                t = w_6;
                {
                  ATerm b_7 = t;
                  int e_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_6(w_5, t);
                      LocalPopChoice(e_7);
                    }
                  else
                    {
                      t = b_7;
                      t = q_6(w_5, t);
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
                ATerm f_7 = t;
                int g_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_5;
                    t = y_4(s_5, t);
                    LocalPopChoice(g_7);
                  }
                else
                  {
                    t = f_7;
                    {
                      ATerm k_7 = t;
                      int l_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_6(w_5, t);
                          LocalPopChoice(l_7);
                        }
                      else
                        {
                          t = k_7;
                          t = q_6(w_5, t);
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
                        t = y_4(s_5, t);
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
                              t = p_6(w_5, t);
                              LocalPopChoice(p_7);
                            }
                          else
                            {
                              t = o_7;
                              t = q_6(w_5, t);
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
                          t_5 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm s_7 = t;
                            int v_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm m_6 = NULL,n_6 = NULL;
                                t = s_5;
                                t = str_explode_0_0(t);
                                m_6 = t;
                                t = t_5;
                                t = str_explode_0_0(t);
                                n_6 = t;
                                t = (ATerm) ATmakeAppl(sym_Cong_2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, n_6), m_6));
                                LocalPopChoice(v_7);
                              }
                            else
                              {
                                t = s_7;
                                {
                                  ATerm x_7 = t;
                                  int y_7 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = p_6(w_5, t);
                                      LocalPopChoice(y_7);
                                    }
                                  else
                                    {
                                      t = x_7;
                                      t = q_6(w_5, t);
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
                              t = p_6(w_5, t);
                              LocalPopChoice(i_8);
                            }
                          else
                            {
                              t = h_8;
                              t = q_6(w_5, t);
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
  ATerm r_6 = NULL,v_6 = NULL,z_6 = NULL,a_7 = NULL;
  a_7 = t;
  t = SSL_explode_term(a_7);
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6;
  t = map_1_0(trm_explode_0_0, t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, r_6, z_6);
  return(t);
}
static ATerm t_4 (ATerm k_21, ATerm l_21, ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  t = k_21;
  t = trm_explode_0_0(t);
  c_7 = t;
  t = l_21;
  t = trm_explode_0_0(t);
  d_7 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, d_7), c_7));
  return(t);
}
ATerm foldr_3_0 (ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,c_8 = NULL,d_8 = NULL;
  z_7 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_7;
      t = y_92(t);
    }
  else
    {
      ATerm o_8 = NULL,p_8 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_8 = ATgetFirst((ATermList) t);
          d_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_8;
      t = a_93(t);
      o_8 = t;
      t = d_8;
      t = foldr_3_0(y_92, z_92, a_93, t);
      p_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_8, p_8);
      t = z_92(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm n_9 = NULL,p_9 = NULL,a_2 = NULL;
  n_9 = t;
  t = SSL_explode_term(n_9);
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
  t = SSL_explode_term(n_9);
  if(match_cons(t, sym__2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
          {
            ATerm f_9 = ATgetFirst((ATermList) e_9);
            ATerm k_9 = (ATerm) ATgetNext((ATermList) e_9);
            if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
              {
                a_2 = ATgetFirst((ATermList) k_9);
                {
                  ATerm m_9 = (ATerm) ATgetNext((ATermList) k_9);
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
static ATerm w_4 (ATerm n_21, ATerm m_21, ATerm t)
{
  ATerm t_8 = NULL;
  static ATerm j_0 (ATerm t)
  {
    t = m_21;
    {
      ATerm q_9 = t;
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
          t = q_9;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = n_21;
  if(match_cons(t, sym_meta_listvar_1))
    {
      t_8 = ATgetArgument(t, 0);
      {
        ATerm v_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, t_8)));
            LocalPopChoice(y_9);
          }
        else
          {
            t = v_9;
            t = n_21;
          }
      }
    }
  else
    {
      t = n_21;
    }
  t = foldr_3_0(j_0, m_0, trm_explode_0_0, t);
  return(t);
}
static ATerm y_4 (ATerm l_113, ATerm t)
{
  t = l_113;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm z_4 (ATerm w_113, ATerm t)
{
  ATerm u_9 = NULL;
  t = w_113;
  t = MetaExplode_0_0(t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, u_9);
  return(t);
}
static ATerm a_5 (ATerm a_113, ATerm t)
{
  t = a_113;
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
                      t = a_5(t_10, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          t_10 = ATgetArgument(t, 0);
                          t = s_10;
                          t = z_4(t_10, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              t_10 = ATgetArgument(t, 0);
                              t = s_10;
                              t = y_4(t_10, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_WithAnno_2))
                                {
                                  t_10 = ATgetArgument(t, 0);
                                  u_10 = ATgetArgument(t, 1);
                                  {
                                    ATerm i_2 = NULL,j_2 = NULL;
                                    t = t_10;
                                    t = trm_explode_0_0(t);
                                    i_2 = t;
                                    t = u_10;
                                    t = MetaExplode_0_0(t);
                                    j_2 = t;
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, i_2, j_2);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Conc_2))
                                    {
                                      t_10 = ATgetArgument(t, 0);
                                      u_10 = ATgetArgument(t, 1);
                                      t = s_10;
                                      t = w_4(t_10, u_10, t);
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
                                          t = t_4(t_10, u_10, t);
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
  ATerm d_12 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      d_12 = ATgetArgument(t, 0);
      t = d_12;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          d_12 = ATgetArgument(t, 0);
          {
            ATerm k_12 = NULL;
            t = d_12;
            t = trm_explode_0_0(t);
            k_12 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, k_12);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              d_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_12;
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
ATerm oncetd_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  static ATerm p_12 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_81(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = SRTS_one(p_12, t);
      }
    return(t);
  }
  t = p_12(t);
  return(t);
}
ATerm alltd_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  static ATerm u_12 (ATerm t)
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_81(t);
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = SRTS_all(u_12, t);
      }
    return(t);
  }
  t = u_12(t);
  return(t);
}
ATerm ImplodeLayout_1_0 (ATerm m_78 (ATerm), ATerm t)
{
  static ATerm o_20 (ATerm t)
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,n_20 = NULL;
      j_20 = t;
      if(match_cons(t, sym_BA_2))
        {
          k_20 = ATgetArgument(t, 0);
          n_20 = ATgetArgument(t, 1);
          {
            ATerm q_2 = NULL,t_2 = NULL,v_2 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(j_20);
            q_2 = t;
            t = k_20;
            t = ImplodeLayout_1_0(_fail, t);
            t_2 = t;
            t = n_20;
            t = ImplodeLayout_1_0(_id, t);
            v_2 = t;
            t = (ATerm) ATmakeAppl(sym_BA_2, t_2, v_2);
            x_2 = t;
            t = SSLsetAnnotations(x_2, q_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              k_20 = ATgetArgument(t, 0);
              {
                ATerm y_3 = NULL,e_4 = NULL,y_2 = NULL;
                t = SSLgetAnnotations(j_20);
                y_3 = t;
                t = k_20;
                t = ImplodeLayout_1_0(_id, t);
                e_4 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, e_4);
                y_2 = t;
                t = SSLsetAnnotations(y_2, y_3);
              }
            }
          else
            {
              if(match_cons(t, sym_AM_2))
                {
                  k_20 = ATgetArgument(t, 0);
                  n_20 = ATgetArgument(t, 1);
                  {
                    ATerm o_4 = NULL,s_4 = NULL,u_4 = NULL,a_3 = NULL;
                    t = SSLgetAnnotations(j_20);
                    o_4 = t;
                    t = k_20;
                    t = o_20(t);
                    s_4 = t;
                    t = n_20;
                    t = ImplodeLayout_1_0(_id, t);
                    u_4 = t;
                    t = (ATerm) ATmakeAppl(sym_AM_2, s_4, u_4);
                    a_3 = t;
                    t = SSLsetAnnotations(a_3, o_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RuleNoCond_2))
                    {
                      k_20 = ATgetArgument(t, 0);
                      n_20 = ATgetArgument(t, 1);
                      {
                        ATerm y_5 = NULL,c_6 = NULL,d_6 = NULL,c_3 = NULL;
                        t = SSLgetAnnotations(j_20);
                        y_5 = t;
                        t = k_20;
                        t = o_20(t);
                        c_6 = t;
                        t = n_20;
                        t = ImplodeLayout_1_0(_id, t);
                        d_6 = t;
                        t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, c_6, d_6);
                        c_3 = t;
                        t = SSLsetAnnotations(c_3, y_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Rule_3))
                        {
                          k_20 = ATgetArgument(t, 0);
                          n_20 = ATgetArgument(t, 1);
                          i_20 = ATgetArgument(t, 2);
                          {
                            ATerm y_6 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,d_3 = NULL;
                            t = SSLgetAnnotations(j_20);
                            y_6 = t;
                            t = k_20;
                            t = o_20(t);
                            h_7 = t;
                            t = n_20;
                            t = ImplodeLayout_1_0(_id, t);
                            i_7 = t;
                            t = i_20;
                            t = o_20(t);
                            j_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Rule_3, h_7, i_7, j_7);
                            d_3 = t;
                            t = SSLsetAnnotations(d_3, y_6);
                          }
                        }
                      else
                        {
                          ATerm t_7 = NULL,u_7 = NULL,a_8 = NULL,b_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,q_8 = NULL,r_8 = NULL,i_3 = NULL,h_3 = NULL,g_3 = NULL,e_3 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              k_20 = ATgetArgument(t, 0);
                              n_20 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(j_20);
                          u_7 = t;
                          t = k_20;
                          if(match_cons(t, sym_prod_3))
                            {
                              e_8 = ATgetArgument(t, 0);
                              f_8 = ATgetArgument(t, 1);
                              g_8 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(k_20);
                          b_8 = t;
                          t = f_8;
                          if(match_cons(t, sym_cf_1))
                            {
                              l_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(f_8);
                          k_8 = t;
                          t = l_8;
                          if(match_cons(t, sym_opt_1))
                            {
                              q_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(l_8);
                          n_8 = t;
                          t = q_8;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_opt_1, q_8);
                          e_3 = t;
                          t = SSLsetAnnotations(e_3, n_8);
                          r_8 = t;
                          t = (ATerm) ATmakeAppl(sym_cf_1, r_8);
                          g_3 = t;
                          t = SSLsetAnnotations(g_3, k_8);
                          m_8 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, e_8, m_8, g_8);
                          h_3 = t;
                          t = SSLsetAnnotations(h_3, b_8);
                          j_8 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, j_8, n_20);
                          i_3 = t;
                          t = SSLsetAnnotations(i_3, u_7);
                          a_8 = t;
                          {
                            ATerm a_11 = t;
                            int b_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm u_8 = NULL,v_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,l_9 = NULL,o_9 = NULL,r_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,t_3 = NULL,n_3 = NULL,m_3 = NULL,l_3 = NULL,k_3 = NULL,j_3 = NULL;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    v_8 = ATgetArgument(t, 0);
                                    z_8 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(a_8);
                                u_8 = t;
                                t = v_8;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    c_9 = ATgetArgument(t, 0);
                                    d_9 = ATgetArgument(t, 1);
                                    g_9 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(v_8);
                                b_9 = t;
                                t = c_9;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    a_10 = ATgetFirst((ATermList) t);
                                    b_10 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(c_9);
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
                                t = d_9;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    l_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(d_9);
                                i_9 = t;
                                t = l_9;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    w_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(l_9);
                                r_9 = t;
                                t = w_9;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_opt_1, w_9);
                                l_3 = t;
                                t = SSLsetAnnotations(l_3, r_9);
                                x_9 = t;
                                t = (ATerm) ATmakeAppl(sym_cf_1, x_9);
                                m_3 = t;
                                t = SSLsetAnnotations(m_3, i_9);
                                o_9 = t;
                                t = (ATerm) ATmakeAppl(sym_prod_3, c_10, o_9, g_9);
                                n_3 = t;
                                t = SSLsetAnnotations(n_3, b_9);
                                h_9 = t;
                                t = z_8;
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
                                a_9 = t;
                                t = (ATerm) ATmakeAppl(sym_appl_2, h_9, a_9);
                                t_3 = t;
                                t = SSLsetAnnotations(t_3, u_8);
                                LocalPopChoice(b_11);
                                t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(t_7));
                              }
                            else
                              {
                                t = a_11;
                                {
                                  ATerm c_11 = t;
                                  int f_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm k_11 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = m_78(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = k_11;
                                        }
                                      t = term_s_6;
                                      LocalPopChoice(f_11);
                                    }
                                  else
                                    {
                                      t = c_11;
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
  t = o_20(t);
  return(t);
}
static ATerm f_5 (ATerm b_38, ATerm c_38, ATerm t)
{
  ATerm x_20 = NULL;
  t = SSL_fputc(b_38, c_38);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_20);
  return(t);
}
static ATerm g_5 (ATerm i_23, ATerm j_23, ATerm t)
{
  ATerm y_20 = NULL;
  t = SSL_write_term_to_stream_text(i_23, j_23);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_20);
  return(t);
}
static ATerm i_5 (ATerm k_86 (ATerm), ATerm s_157, ATerm m_23, ATerm t)
{
  ATerm z_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_157, term_l_11);
  t = l_5(t);
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_20, m_23);
  t = k_86(t);
  t = fclose_0_0(t);
  t = m_23;
  return(t);
}
static ATerm h_5 (ATerm e_23, ATerm f_23, ATerm t)
{
  ATerm a_21 = NULL;
  t = SSL_write_term_to_stream_baf(e_23, f_23);
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_21);
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
  ATerm i_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Stream_1))
        {
          i_11 = ATgetArgument(m_11, 0);
        }
      else
        _fail(t);
      j_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(i_11, j_11, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,e_12 = NULL,g_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(match_cons(n_11, sym_Stream_1))
        {
          g_12 = ATgetArgument(n_11, 0);
        }
      else
        _fail(t);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(g_12, h_12, t);
  a_12 = t;
  t = term_o_11;
  b_12 = t;
  t = a_12;
  if(match_cons(t, sym_Stream_1))
    {
      e_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_11, a_12);
  t = f_5(b_12, e_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,n_22 = NULL,p_22 = NULL,v_24 = NULL,w_24 = NULL,b_14 = NULL,a_14 = NULL;
  d_22 = t;
  if(match_cons(t, sym__2))
    {
      k_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_22);
  j_22 = t;
  t = k_22;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((b_22 != NULL) && (b_22 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_22 = ATgetArgument(t, 0);
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
        b_22 = t;
      }
  }
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_22, n_22);
  a_14 = t;
  t = SSLsetAnnotations(a_14, j_22);
  t = d_22;
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_22);
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_22, (ATerm) ATmakeAppl(sym__2, not_null(b_22), g_22));
  b_14 = t;
  t = SSLsetAnnotations(b_14, e_22);
  i_22 = t;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_10 = NULL,d_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL,g_14 = NULL;
        t = SSLgetAnnotations(i_22);
        z_10 = t;
        t = v_24;
        t = fetch_1_0(b_1, t);
        d_11 = t;
        t = w_24;
        if(match_cons(t, sym__2))
          {
            g_11 = ATgetArgument(t, 0);
            h_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_5(d_1, g_11, h_11, t);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_11, e_11);
        g_14 = t;
        t = SSLsetAnnotations(g_14, z_10);
        LocalPopChoice(w_11);
      }
    else
      {
        t = t_11;
        {
          ATerm p_11 = NULL,u_11 = NULL,v_11 = NULL,z_11 = NULL,h_14 = NULL;
          t = SSLgetAnnotations(i_22);
          p_11 = t;
          t = w_24;
          if(match_cons(t, sym__2))
            {
              v_11 = ATgetArgument(t, 0);
              z_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_5(e_1, v_11, z_11, t);
          u_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_24, u_11);
          h_14 = t;
          t = SSLsetAnnotations(h_14, p_11);
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
ATerm apply_strategy_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  u_25 = t;
  t = dtime_0_0(t);
  t = u_25;
  t = f_103(t);
  t_25 = t;
  t = dtime_0_0(t);
  q_25 = t;
  t = t_25;
  if(match_cons(t, sym__2))
    {
      r_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_25), (ATerm) ATmakeAppl(sym_Runtime_1, q_25)), s_25);
  return(t);
}
static ATerm i_26 (ATerm c_26, ATerm t)
{
  t = SSL_fclose(c_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  g_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_26 = ATgetArgument(t, 0);
      {
        ATerm x_11 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_26);
            LocalPopChoice(c_12);
          }
        else
          {
            t = x_11;
            t = i_26(g_26, t);
          }
      }
    }
  else
    {
      t = i_26(g_26, t);
    }
  return(t);
}
static ATerm j_5 (ATerm k_23, ATerm t)
{
  t = SSL_read_term_from_stream(k_23);
  return(t);
}
static ATerm k_5 (ATerm d_38, ATerm e_38, ATerm t)
{
  ATerm j_26 = NULL;
  t = SSL_fopen(d_38, e_38);
  j_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_26 = NULL;
  t = SSL_stdin_stream();
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_26 = NULL;
  t = SSL_stdout_stream();
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_26 = NULL;
  t = SSL_stderr_stream();
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_26);
  return(t);
}
static ATerm t_27 (ATerm s_26, ATerm t)
{
  ATerm t_26 = NULL;
  t = SSL_explode_term(s_26);
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_12 = ATgetArgument(t, 1);
        if(((ATgetType(i_12) == AT_LIST) && !(ATisEmpty(i_12))))
          {
            t_26 = ATgetFirst((ATermList) i_12);
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
  t = t_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_27 (ATerm w_26, ATerm x_26, ATerm y_26, ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,e_27 = NULL,o_14 = NULL;
  t = SSLgetAnnotations(y_26);
  b_27 = t;
  t = w_26;
  if(match_cons(t, sym_Path_1))
    {
      e_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_27, x_26);
  o_14 = t;
  t = SSLsetAnnotations(o_14, b_27);
  if(match_cons(t, sym__2))
    {
      z_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(z_26, a_27, t);
  return(t);
}
static ATerm v_27 (ATerm g_27, ATerm h_27, ATerm i_27, ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,o_27 = NULL,p_14 = NULL;
  t = SSLgetAnnotations(i_27);
  l_27 = t;
  t = SSL_is_string(g_27);
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_27, h_27);
  p_14 = t;
  t = SSLsetAnnotations(p_14, l_27);
  if(match_cons(t, sym__2))
    {
      j_27 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(j_27, k_27, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  q_27 = t;
  if(match_cons(t, sym__2))
    {
      r_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_27(q_27, t);
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
                  t = u_27(r_27, s_27, q_27, t);
                  LocalPopChoice(o_12);
                }
              else
                {
                  t = n_12;
                  t = v_27(r_27, s_27, q_27, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_27(q_27, t);
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_27 = NULL;
      z_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_27, term_t_12);
      t = l_5(t);
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      t = debug_1_0(f_1, t);
      _fail(t);
    }
  x_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_5(y_27, t);
  w_27 = t;
  t = x_27;
  t = fclose_0_0(t);
  t = w_27;
  return(t);
}
static ATerm e_5 (ATerm v_36, ATerm w_36, ATerm t)
{
  t = SSL_strcat(v_36, w_36);
  return(t);
}
ATerm debug_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
  b_28 = t;
  t = i_86(t);
  c_28 = t;
  t = term_f_6;
  d_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_28), c_28);
  e_28 = t;
  t = SSL_printnl(d_28, e_28);
  t = b_28;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
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
      ATerm l_28 = NULL;
      l_28 = t;
      t = SSL_is_string(l_28);
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
              ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
              r_28 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_28 = ATgetArgument(t, 0);
                  t = s_28;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_28 = ATgetArgument(t, 0);
                      t = s_28;
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
                      ATerm x_28 = NULL,y_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_28 = ATgetArgument(t, 0);
                          t_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_28;
                      t = eval_config_0_0(t);
                      x_28 = t;
                      t = t_28;
                      t = eval_config_0_0(t);
                      y_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_28, y_28);
                      t = e_5(x_28, y_28, t);
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
  ATerm c_29 = NULL,d_29 = NULL;
  c_29 = t;
  t = term_g_13;
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_13, c_29);
  t = o_5(d_29, c_29, t);
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_29 = NULL,f_29 = NULL;
        t = eval_config_0_0(t);
        e_29 = t;
        t = term_g_13;
        f_29 = t;
        t = SSL_table_put(f_29, c_29, e_29);
        t = e_29;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_29 = NULL;
        t = term_n_13;
        t = get_config_0_0(t);
        l_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_29, term_o_13);
        t = geq_0_0(t);
        t = j_29;
        t = o_101(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = j_29;
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  if(match_string(t, "-k"))
    {
      t = o_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_29;
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  t = SSL_string_to_int(p_29);
  q_29 = t;
  t = term_p_13;
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, q_29);
  t = r_5(r_29, q_29, t);
  t = p_29;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_q_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_1, l_1, n_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm t_29 = NULL;
  t_29 = t;
  if(match_string(t, "-S"))
    {
      t = t_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_29;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL;
  t = term_n_13;
  u_29 = t;
  t = term_r_13;
  v_29 = t;
  t = term_s_13;
  t = r_5(u_29, v_29, t);
  t = term_t_13;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  w_29 = t;
  t = SSL_string_to_int(w_29);
  x_29 = t;
  t = term_n_13;
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_13, x_29);
  t = r_5(y_29, x_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_29);
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
static ATerm g_2 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  t = term_w_13;
  z_29 = t;
  t = term_e_6;
  a_30 = t;
  t = term_y_13;
  t = r_5(z_29, a_30, t);
  t = term_z_13;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_1, t_1, w_1, t);
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm f_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_1, y_1, z_1, t);
            LocalPopChoice(i_14);
          }
        else
          {
            t = f_14;
            t = Option_3_0(b_2, g_2, h_2, t);
          }
      }
    }
  return(t);
}
static ATerm r_5 (ATerm t_47, ATerm u_47, ATerm t)
{
  ATerm f_30 = NULL;
  t = term_g_13;
  f_30 = t;
  t = SSL_table_put(f_30, t_47, u_47);
  t = (ATerm) ATmakeAppl(sym__3, term_g_13, t_47, u_47);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm h_30 = NULL;
  h_30 = t;
  if(match_string(t, "-o"))
    {
      t = h_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_30;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  i_30 = t;
  t = term_j_14;
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, i_30);
  t = r_5(j_30, i_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_30);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_2, l_2, m_2, t);
  return(t);
}
static ATerm p_5 (ATerm t_52, ATerm u_52, ATerm s_52, ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
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
        t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
        t = o_5(t_52, u_52, t);
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = (ATerm) ATempty;
      }
  }
  m_30 = t;
  t = (ATerm) ATinsert(CheckATermList(m_30), s_52);
  n_30 = t;
  t = SSL_table_put(t_52, u_52, n_30);
  t = l_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
      t = term_e_6;
      t = p_0(t);
      y_30 = t;
      t = term_j_6;
      z_30 = t;
      t = term_k_6;
      a_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_6, term_k_6, y_30);
      t = p_5(z_30, a_31, y_30, t);
      _fail(t);
    }
  else
    {
      ATerm e_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_30 = ATgetFirst((ATermList) t);
          v_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_30 = ATgetFirst((ATermList) t);
          x_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_30;
      t = n_0(t);
      t = w_30;
      t = o_0(t);
      e_31 = t;
      t = (ATerm) ATinsert(CheckATermList(x_30), e_31);
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  if(match_string(t, "-i"))
    {
      t = g_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_31;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL;
  h_31 = t;
  t = term_r_14;
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, h_31);
  t = r_5(i_31, h_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_31);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_2, o_2, p_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_6;
  t = whoami_0_0(t);
  j_31 = t;
  t = term_f_6;
  l_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_14), j_31);
  m_31 = t;
  t = SSL_printnl(l_31, m_31);
  t = term_i_6;
  k_31 = t;
  t = SSL_exit(k_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_14;
  t = get_config_0_0(t);
  return(t);
}
static ATerm m_5 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm y_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_40, x_40);
      LocalPopChoice(b_15);
    }
  else
    {
      t = y_14;
      t = SSL_addr(w_40, x_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_31;
      t = w_92(t);
    }
  else
    {
      ATerm t_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_31 = ATgetFirst((ATermList) t);
          q_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_31;
      t = foldr_2_0(w_92, x_92, t);
      t_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_31, t_31);
      t = x_92(t);
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
  t = m_5(h_13, i_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_31 = NULL,d_13 = NULL,e_13 = NULL;
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
  x_31 = t;
  t = SSL_TicksToSeconds(x_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  if(match_cons(t, sym__2))
    {
      j_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_32;
        if((j_32 != t))
          {
            _fail(t);
          }
        t = i_32;
        LocalPopChoice(i_15);
      }
    else
      {
        t = g_15;
        t = (ATerm) ATmakeAppl(sym__2, j_32, k_32);
        {
          ATerm m_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_32, k_32);
              LocalPopChoice(n_15);
            }
          else
            {
              t = m_15;
              t = SSL_gtr(j_32, k_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_32, k_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_32 = NULL;
        t = term_n_13;
        t = get_config_0_0(t);
        q_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_32, term_i_6);
        t = geq_0_0(t);
        t = o_32;
        t = n_101(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = o_32;
      }
  }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,v_32 = NULL,w_32 = NULL;
  t = run_time_0_0(t);
  s_32 = t;
  t = term_e_6;
  t = whoami_0_0(t);
  t_32 = t;
  t = term_f_6;
  v_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_15), s_32), term_q_15), t_32);
  w_32 = t;
  t = SSL_printnl(v_32, w_32);
  t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_15), s_32), term_q_15), t_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_13;
  x_32 = t;
  t = SSL_exit(x_32);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  g_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_33 = ATgetArgument(t, 0);
          {
            ATerm x_13 = NULL,s_14 = NULL;
            t = SSLgetAnnotations(g_33);
            x_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_33);
            s_14 = t;
            t = SSLsetAnnotations(s_14, x_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_104 (ATerm), ATerm t)
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
  t = d_104(t);
  return(t);
}
ATerm map_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  static ATerm w_33 (ATerm t)
  {
    ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
    t_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_33;
      }
    else
      {
        ATerm t_14 = NULL,z_14 = NULL,d_15 = NULL,w_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_33 = ATgetFirst((ATermList) t);
            v_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_33);
        t_14 = t;
        t = u_33;
        t = t_86(t);
        z_14 = t;
        t = v_33;
        t = w_33(t);
        d_15 = t;
        t = (ATerm) ATinsert(CheckATermList(d_15), z_14);
        w_14 = t;
        t = SSLsetAnnotations(w_14, t_14);
      }
    return(t);
  }
  t = w_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_33 = ATgetFirst((ATermList) t);
      a_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_34 = NULL,f_34 = NULL;
        static ATerm z_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_34)), not_null(f_34));
          return(t);
        }
        t = a_34;
        t = l_0(t);
        if(((e_34 != NULL) && (e_34 != t)))
          _fail(t);
        else
          e_34 = t;
        t = z_33;
        t = k_0(t);
        if(((f_34 != NULL) && (f_34 != t)))
          _fail(t);
        else
          f_34 = t;
        t = a_34;
        t = reverse_acc_2_0(k_0, z_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_6;
      t = l_0(t);
    }
  return(t);
}
static ATerm o_5 (ATerm k_54, ATerm l_54, ATerm t)
{
  t = SSL_table_get(k_54, l_54);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,a_15 = NULL;
  l_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_34);
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_34);
  a_15 = t;
  t = SSLsetAnnotations(a_15, j_34);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_34), term_v_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
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
      t = fetch_1_0(b_3, t);
    }
  t = term_y_15;
  t = echo_0_0(t);
  t = term_j_6;
  h_34 = t;
  t = term_k_6;
  i_34 = t;
  t = term_z_15;
  t = o_5(h_34, i_34, t);
  t = reverse_acc_2_0(_id, f_3, t);
  t = map_1_0(p_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_34;
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
            t = p_34;
          }
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = (ATerm) ATinsert(ATempty, p_34);
      }
  }
  q_34 = t;
  t = term_s_11;
  r_34 = t;
  t = SSL_printnl(r_34, q_34);
  t = p_34;
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
  ATerm v_34 = NULL,w_34 = NULL;
  t = term_e_16;
  v_34 = t;
  t = term_e_6;
  w_34 = t;
  t = term_f_16;
  t = r_5(v_34, w_34, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_g_16;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  t = term_e_16;
  z_34 = t;
  t = term_e_6;
  a_35 = t;
  t = term_f_16;
  t = r_5(z_34, a_35, t);
  t = term_i_16;
  x_34 = t;
  t = term_e_6;
  y_34 = t;
  t = term_j_16;
  t = r_5(x_34, y_34, t);
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
      t = Option_3_0(x_3, b_4, c_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,c_15 = NULL;
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
  t = k_58(t);
  e_35 = t;
  t = d_35;
  t = l_58(t);
  f_35 = t;
  t = (ATerm) ATinsert(CheckATermList(f_35), e_35);
  c_15 = t;
  t = SSLsetAnnotations(c_15, b_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,q_35 = NULL,r_35 = NULL,f_15 = NULL;
  l_35 = t;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_16;
        t = g_106(t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
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
  t = term_x_14;
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, n_35);
  t = r_5(r_35, n_35, t);
  t = o_35;
  {
    static ATerm b_36 (ATerm t)
    {
      ATerm r_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_35 = NULL;
              u_35 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_35;
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              t = g_106(t);
              t = Cons_2_0(_id, b_36, t);
            }
          LocalPopChoice(s_16);
        }
      else
        {
          t = r_16;
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
  f_15 = t;
  t = SSLsetAnnotations(f_15, m_35);
  return(t);
}
static ATerm i_4 (ATerm t)
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
static ATerm j_4 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  t = term_u_15;
  o_36 = t;
  t = term_e_6;
  p_36 = t;
  t = term_w_16;
  t = r_5(o_36, p_36, t);
  t = term_x_16;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_y_16;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
  i_36 = t;
  t = term_j_6;
  k_36 = t;
  t = term_k_6;
  l_36 = t;
  t = (ATerm) ATempty;
  m_36 = t;
  t = SSL_table_put(k_36, l_36, m_36);
  t = i_36;
  {
    static ATerm f_4 (ATerm t)
    {
      ATerm z_16 = t;
      int a_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_106(t);
          LocalPopChoice(a_17);
        }
      else
        {
          t = z_16;
          {
            ATerm b_17 = t;
            int d_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_4, j_4, k_4, t);
                LocalPopChoice(d_17);
              }
            else
              {
                t = b_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_4, t);
  }
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_36 = NULL;
        y_36 = t;
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_16 = NULL;
              t = y_36;
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
                    t = fetch_1_0(l_4, t);
                  }
              }
              t = y_36;
              t = default_system_usage_0_0(t);
              t = term_r_13;
              h_16 = t;
              t = SSL_exit(h_16);
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              {
                ATerm t_16 = NULL;
                t = term_e_16;
                t = get_config_0_0(t);
                t = y_36;
                t = default_system_about_0_0(t);
                t = term_r_13;
                t_16 = t;
                t = SSL_exit(t_16);
              }
            }
        }
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        {
          ATerm k_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
              static ATerm m_4 (ATerm t)
              {
                ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,h_15 = NULL;
                e_37 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_37 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_37);
                c_37 = t;
                t = d_37;
                if(((g_36 != NULL) && (g_36 != t)))
                  _fail(t);
                else
                  g_36 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_37);
                h_15 = t;
                t = SSLsetAnnotations(h_15, c_37);
                return(t);
              }
              t = fetch_1_0(m_4, t);
              t = term_f_6;
              a_37 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_36)), term_n_17);
              b_37 = t;
              t = SSL_printnl(a_37, b_37);
              t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_36)), term_n_17));
              t = default_system_usage_0_0(t);
              t = term_i_6;
              z_36 = t;
              t = SSL_exit(z_36);
              LocalPopChoice(m_17);
            }
          else
            {
              t = k_17;
            }
        }
      }
  }
  h_36 = t;
  t = term_j_6;
  j_36 = t;
  t = SSL_table_destroy(j_36);
  t = h_36;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  t = parse_options_1_0(f_104, t);
  j_37 = t;
  t = term_o_17;
  m_37 = t;
  t = SSL_table_create(m_37);
  t = term_o_17;
  k_37 = t;
  t = term_p_17;
  l_37 = t;
  t = SSL_table_put(k_37, l_37, j_37);
  t = j_37;
  t = h_104(t);
  {
    ATerm q_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_104, t);
        LocalPopChoice(s_17);
      }
    else
      {
        t = q_17;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_104(t);
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
static ATerm q_4 (ATerm t)
{
  t = if_verbose2_1_0(c_5, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL;
  t = term_v_17;
  n_37 = t;
  t = term_e_6;
  o_37 = t;
  t = term_w_17;
  t = r_5(n_37, o_37, t);
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
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  p_37 = t;
  t = term_x_14;
  t = get_config_0_0(t);
  q_37 = t;
  t = term_f_6;
  r_37 = t;
  t = (ATerm) ATinsert(ATempty, q_37);
  s_37 = t;
  t = SSL_printnl(r_37, s_37);
  t = p_37;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm t)
{
  static ATerm n_4 (ATerm t)
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_103(t);
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
                      int g_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(v_4, x_4, b_5, t);
                          LocalPopChoice(g_18);
                        }
                      else
                        {
                          t = f_18;
                          {
                            ATerm i_18 = t;
                            int j_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(j_18);
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
  static ATerm r_4 (ATerm t)
  {
    ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
    u_37 = t;
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_37 != NULL) && (t_37 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_37 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_5, t);
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
          t = term_o_18;
          t_37 = t;
        }
    }
    t = not_null(t_37);
    t = ReadFromFile_0_0(t);
    v_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
    t = apply_strategy_1_0(o_103, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(n_4, q_103, q_4, r_4, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,k_39 = NULL,l_39 = NULL,k_15 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  a_39 = t;
  if(match_cons(t, sym__2))
    {
      y_38 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_17 = NULL,l_17 = NULL,r_17 = NULL,j_15 = NULL;
            t = SSLgetAnnotations(a_39);
            c_17 = t;
            t = y_38;
            t = fetch_1_0(u_5, t);
            l_17 = t;
            t = z_38;
            t = ImplodeLayout_1_0(_fail, t);
            r_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_17, r_17);
            j_15 = t;
            t = SSLsetAnnotations(j_15, c_17);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = a_39;
          }
      }
    }
  else
    {
      t = a_39;
    }
  o_38 = t;
  if(match_cons(t, sym__2))
    {
      j_38 = ATgetArgument(t, 0);
      l_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_38);
  i_38 = t;
  t = l_38;
  t = MetaExplode_0_0(t);
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_38, m_38);
  k_15 = t;
  t = SSLsetAnnotations(k_15, i_38);
  n_38 = t;
  if(match_cons(t, sym__2))
    {
      k_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_18 = NULL,k_18 = NULL,l_18 = NULL,l_15 = NULL;
            t = SSLgetAnnotations(n_38);
            h_18 = t;
            t = k_39;
            t = fetch_1_0(v_5, t);
            k_18 = t;
            t = l_39;
            t = topdown_1_0(x_5, t);
            l_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_18, l_18);
            l_15 = t;
            t = SSLsetAnnotations(l_15, h_18);
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = n_38;
          }
      }
    }
  else
    {
      t = n_38;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = Option_3_0(z_5, a_6, b_6, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
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
static ATerm z_5 (ATerm t)
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
static ATerm b_6 (ATerm t)
{
  t = term_w_18;
  return(t);
}
ATerm meta_explode_0_0 (ATerm t)
{
  t = iowrap_3_0(n_5, q_5, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = meta_explode_0_0(t);
  return(t);
}
