#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Scope_2;
Symbol sym_Rec_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Undefined_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_i_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_q_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_a_20;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_f_18;
ATerm term_x_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_n_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_o_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_g_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_r_17);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_g_16);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_g_16);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_g_16);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_g_16);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm spaste_1_0 (ATerm u_77 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm a_5 (ATerm a_21, ATerm z_20, ATerm t);
ATerm SVar_1_0 (ATerm m_61 (ATerm), ATerm t);
static ATerm l_5 (ATerm v_97 (ATerm), ATerm w_97 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_44, ATerm k_44, ATerm j_44, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm p_5 (ATerm p_97 (ATerm), ATerm q_97 (ATerm (ATerm), ATerm), ATerm d_44, ATerm g_44, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm d_98 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm k_97 (ATerm (ATerm), ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_97 (ATerm (ATerm), ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm tpaste_1_0 (ATerm q_77 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm t);
static ATerm q_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm tvars_0_0 (ATerm t);
static ATerm f_5 (ATerm g_93 (ATerm), ATerm g_41, ATerm f_41, ATerm t);
ATerm foldr_3_0 (ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t);
static ATerm g_5 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm k_41, ATerm j_41, ATerm t);
static ATerm h_5 (ATerm b_93 (ATerm), ATerm e_41, ATerm d_41, ATerm t);
ATerm at_end_1_0 (ATerm j_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm t_35 (ATerm k_35, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm j_5 (ATerm s_563, ATerm x_563, ATerm l_54, ATerm t);
ATerm while_not_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t);
ATerm for_3_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm x_38 (ATerm h_37, ATerm i_37, ATerm j_37, ATerm t);
static ATerm b_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm free_vars_3_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm p_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm d_58 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm u_5 (ATerm n_28, ATerm o_28, ATerm t);
static ATerm v_5 (ATerm i_27, ATerm j_27, ATerm t);
static ATerm x_5 (ATerm a_86 (ATerm), ATerm h_184, ATerm m_27, ATerm t);
static ATerm w_5 (ATerm e_27, ATerm f_27, ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm output_1_0 (ATerm n_102 (ATerm), ATerm t);
static ATerm l_48 (ATerm b_48, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_5 (ATerm k_27, ATerm t);
static ATerm z_5 (ATerm p_28, ATerm q_28, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_50 (ATerm z_48, ATerm t);
static ATerm g_50 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm j_50 (ATerm q_49, ATerm t_49, ATerm u_49, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm o_102 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_6 (ATerm f_32, ATerm g_32, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_6 (ATerm y_36, ATerm z_36, ATerm x_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_6 (ATerm c_35, ATerm d_35, ATerm t);
ATerm foldr_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_87 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm need_help_1_0 (ATerm e_102 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_91 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_6 (ATerm h_50, ATerm i_50, ATerm t);
ATerm debug_1_0 (ATerm y_85 (ATerm), ATerm t);
ATerm map_1_0 (ATerm t_90 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm f_6 (ATerm p_38, ATerm q_38, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_104 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm parse_options_1_0 (ATerm b_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if(((ATgetType(k_8) != AT_LIST) || !(ATisEmpty(k_8))))
        _fail(t);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(((ATgetType(l_8) != AT_LIST) || !(ATisEmpty(l_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
        {
          r_0 = ATgetFirst((ATermList) m_8);
          s_0 = (ATerm) ATgetNext((ATermList) m_8);
        }
      else
        _fail(t);
      {
        ATerm o_8 = ATgetArgument(t, 1);
        if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
          {
            t_0 = ATgetFirst((ATermList) o_8);
            u_0 = (ATerm) ATgetNext((ATermList) o_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_0, t_0), (ATerm) ATmakeAppl(sym__2, s_0, u_0));
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL;
  if(match_cons(t, sym__2))
    {
      v_0 = ATgetArgument(t, 0);
      w_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_0), v_0);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm y_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      y_0 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_0;
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm r_8 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(q_8);
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_1, a_1, b_1);
      }
    else
      {
        t = p_8;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm s_8 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
            c_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_1, a_1, b_1, c_1);
      }
  }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if(((ATgetType(t_8) != AT_LIST) || !(ATisEmpty(t_8))))
        _fail(t);
      {
        ATerm u_8 = ATgetArgument(t, 1);
        if(((ATgetType(u_8) != AT_LIST) || !(ATisEmpty(u_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm a_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      if(((ATgetType(v_8) == AT_LIST) && !(ATisEmpty(v_8))))
        {
          a_3 = ATgetFirst((ATermList) v_8);
          g_3 = (ATerm) ATgetNext((ATermList) v_8);
        }
      else
        _fail(t);
      {
        ATerm x_8 = ATgetArgument(t, 1);
        if(((ATgetType(x_8) == AT_LIST) && !(ATisEmpty(x_8))))
          {
            i_3 = ATgetFirst((ATermList) x_8);
            j_3 = (ATerm) ATgetNext((ATermList) x_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_3, i_3), (ATerm) ATmakeAppl(sym__2, g_3, j_3));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm l_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym__2))
    {
      l_3 = ATgetArgument(t, 0);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_3), l_3);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm t_3 = NULL,z_3 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3;
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm a_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_8);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_4);
      }
    else
      {
        t = y_8;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_9 = ATgetArgument(t, 0);
            z_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_4, z_3);
      }
  }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(((ATgetType(c_9) != AT_LIST) || !(ATisEmpty(c_9))))
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(((ATgetType(e_9) != AT_LIST) || !(ATisEmpty(e_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL,v_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_9 = ATgetArgument(t, 0);
      if(((ATgetType(h_9) == AT_LIST) && !(ATisEmpty(h_9))))
        {
          r_6 = ATgetFirst((ATermList) h_9);
          s_6 = (ATerm) ATgetNext((ATermList) h_9);
        }
      else
        _fail(t);
      {
        ATerm l_9 = ATgetArgument(t, 1);
        if(((ATgetType(l_9) == AT_LIST) && !(ATisEmpty(l_9))))
          {
            t_6 = ATgetFirst((ATermList) l_9);
            v_6 = (ATerm) ATgetNext((ATermList) l_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_6, t_6), (ATerm) ATmakeAppl(sym__2, s_6, v_6));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_7), z_6);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm c_7 = NULL,e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7;
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_9);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_7);
      }
    else
      {
        t = m_9;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_9 = ATgetArgument(t, 0);
            e_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_7, e_7);
      }
  }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_9 = ATgetArgument(t, 0);
      if(((ATgetType(t_9) != AT_LIST) || !(ATisEmpty(t_9))))
        _fail(t);
      {
        ATerm u_9 = ATgetArgument(t, 1);
        if(((ATgetType(u_9) != AT_LIST) || !(ATisEmpty(u_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm d_9 = NULL,f_9 = NULL,g_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
        {
          d_9 = ATgetFirst((ATermList) v_9);
          f_9 = (ATerm) ATgetNext((ATermList) v_9);
        }
      else
        _fail(t);
      {
        ATerm w_9 = ATgetArgument(t, 1);
        if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
          {
            g_9 = ATgetFirst((ATermList) w_9);
            i_9 = (ATerm) ATgetNext((ATermList) w_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_9, g_9), (ATerm) ATmakeAppl(sym__2, f_9, i_9));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      j_9 = ATgetArgument(t, 0);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_9), j_9);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm p_9 = NULL,r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      p_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_9);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_9);
      }
    else
      {
        t = x_9;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_10 = ATgetArgument(t, 0);
            r_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_9, r_9);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm d_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
      {
        ATerm h_0 = NULL,o_0 = NULL,p_0 = NULL,e_1 = NULL;
        t = SSLgetAnnotations(h_10);
        h_0 = t;
        t = i_10;
        t = u_77(t);
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_10, p_0);
        t = genzip_4_0(a_0, b_0, f_0, j_0, t);
        o_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, o_0, j_10);
        e_1 = t;
        t = SSLsetAnnotations(e_1, h_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_10 = ATgetArgument(t, 0);
          j_10 = ATgetArgument(t, 1);
          d_10 = ATgetArgument(t, 2);
          {
            ATerm g_2 = NULL,n_2 = NULL,r_2 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(h_10);
            g_2 = t;
            t = j_10;
            t = u_77(t);
            r_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_10, r_2);
            t = genzip_4_0(m_0, q_0, x_0, z_0, t);
            n_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, i_10, n_2, d_10);
            f_1 = t;
            t = SSLsetAnnotations(f_1, g_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              i_10 = ATgetArgument(t, 0);
              j_10 = ATgetArgument(t, 1);
              d_10 = ATgetArgument(t, 2);
              g_10 = ATgetArgument(t, 3);
              {
                ATerm d_5 = NULL,o_6 = NULL,p_6 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(h_10);
                d_5 = t;
                t = j_10;
                t = u_77(t);
                p_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_10, p_6);
                t = genzip_4_0(j_1, k_1, l_1, m_1, t);
                o_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_10, o_6, d_10, g_10);
                g_1 = t;
                t = SSLsetAnnotations(g_1, d_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  i_10 = ATgetArgument(t, 0);
                  j_10 = ATgetArgument(t, 1);
                  d_10 = ATgetArgument(t, 2);
                  g_10 = ATgetArgument(t, 3);
                  {
                    ATerm i_8 = NULL,n_8 = NULL,w_8 = NULL,h_1 = NULL;
                    t = SSLgetAnnotations(h_10);
                    i_8 = t;
                    t = j_10;
                    t = u_77(t);
                    w_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_10, w_8);
                    t = genzip_4_0(n_1, o_1, p_1, q_1, t);
                    n_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, i_10, n_8, d_10, g_10);
                    h_1 = t;
                    t = SSLsetAnnotations(h_1, i_8);
                  }
                }
              else
                {
                  ATerm s_10 = NULL,y_10 = NULL,i_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      i_10 = ATgetArgument(t, 0);
                      j_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_10);
                  s_10 = t;
                  t = i_10;
                  t = u_77(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_10 = ATgetFirst((ATermList) t);
                      {
                        ATerm b_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, y_10, j_10);
                  i_1 = t;
                  t = SSLsetAnnotations(i_1, s_10);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  o_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_15 = ATgetArgument(t, 0);
      q_15 = ATgetArgument(t, 1);
      {
        ATerm g_11 = NULL,n_11 = NULL,t_11 = NULL,v_1 = NULL;
        t = SSLgetAnnotations(o_15);
        g_11 = t;
        t = p_15;
        t = v_77(t);
        n_11 = t;
        t = q_15;
        t = v_77(t);
        t_11 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, n_11, t_11);
        v_1 = t;
        t = SSLsetAnnotations(v_1, g_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_15 = ATgetArgument(t, 0);
          q_15 = ATgetArgument(t, 1);
          m_15 = ATgetArgument(t, 2);
          {
            ATerm o_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(o_15);
            o_12 = t;
            t = p_15;
            t = x_77(t);
            v_12 = t;
            t = q_15;
            t = x_77(t);
            w_12 = t;
            t = m_15;
            t = v_77(t);
            x_12 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, v_12, w_12, x_12);
            x_1 = t;
            t = SSLsetAnnotations(x_1, o_12);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              p_15 = ATgetArgument(t, 0);
              q_15 = ATgetArgument(t, 1);
              m_15 = ATgetArgument(t, 2);
              n_15 = ATgetArgument(t, 3);
              {
                ATerm o_13 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,a_2 = NULL;
                t = SSLgetAnnotations(o_15);
                o_13 = t;
                t = p_15;
                t = x_77(t);
                d_14 = t;
                t = q_15;
                t = x_77(t);
                e_14 = t;
                t = m_15;
                t = x_77(t);
                f_14 = t;
                t = n_15;
                t = v_77(t);
                g_14 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_14, e_14, f_14, g_14);
                a_2 = t;
                t = SSLsetAnnotations(a_2, o_13);
              }
            }
          else
            {
              ATerm r_14 = NULL,v_14 = NULL,w_14 = NULL,b_2 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  p_15 = ATgetArgument(t, 0);
                  q_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_15);
              r_14 = t;
              t = p_15;
              t = x_77(t);
              v_14 = t;
              t = q_15;
              t = v_77(t);
              w_14 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, v_14, w_14);
              b_2 = t;
              t = SSLsetAnnotations(b_2, r_14);
            }
        }
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm f_16 = NULL;
  ATerm c_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_16 = ATgetArgument(t, 0);
          {
            ATerm f_10 = ATgetArgument(t, 1);
          }
          {
            ATerm k_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_10);
      t = f_16;
    }
  else
    {
      t = c_10;
      if(match_cons(t, sym_SDefT_4))
        {
          f_16 = ATgetArgument(t, 0);
          {
            ATerm l_10 = ATgetArgument(t, 1);
          }
          {
            ATerm m_10 = ATgetArgument(t, 2);
          }
          {
            ATerm n_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = f_16;
    }
  return(t);
}
static ATerm a_5 (ATerm a_21, ATerm z_20, ATerm t)
{
  t = a_21;
  t = map_1_0(r_1, t);
  return(t);
}
ATerm SVar_1_0 (ATerm m_61 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,s_16 = NULL,y_16 = NULL,z_16 = NULL,p_2 = NULL;
  z_16 = t;
  if(match_cons(t, sym_SVar_1))
    {
      s_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_16);
  q_16 = t;
  t = s_16;
  t = m_61(t);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, y_16);
  p_2 = t;
  t = SSLsetAnnotations(p_2, q_16);
  return(t);
}
static ATerm l_5 (ATerm v_97 (ATerm), ATerm w_97 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_44, ATerm k_44, ATerm j_44, ATerm t)
{
  static ATerm s_1 (ATerm t)
  {
    ATerm b_17 = NULL;
    b_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_17, j_44);
    t = v_97(t);
    return(t);
  }
  static ATerm t_1 (ATerm t)
  {
    ATerm c_17 = NULL;
    c_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_17, k_44);
    t = v_97(t);
    return(t);
  }
  t = l_44;
  t = w_97(s_1, t_1, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm u_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if(((ATgetType(o_10) != AT_LIST) || !(ATisEmpty(o_10))))
        _fail(t);
      {
        ATerm p_10 = ATgetArgument(t, 1);
        if(((ATgetType(p_10) != AT_LIST) || !(ATisEmpty(p_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm o_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
        {
          o_17 = ATgetFirst((ATermList) q_10);
          s_17 = (ATerm) ATgetNext((ATermList) q_10);
        }
      else
        _fail(t);
      {
        ATerm r_10 = ATgetArgument(t, 1);
        if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
          {
            t_17 = ATgetFirst((ATermList) r_10);
            u_17 = (ATerm) ATgetNext((ATermList) r_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_17, t_17), (ATerm) ATmakeAppl(sym__2, s_17, u_17));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm v_17 = NULL,y_17 = NULL;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_17), v_17);
  return(t);
}
static ATerm p_5 (ATerm p_97 (ATerm), ATerm q_97 (ATerm (ATerm), ATerm), ATerm d_44, ATerm g_44, ATerm t)
{
  ATerm f_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,m_17 = NULL;
  t = d_44;
  t = p_97(t);
  f_17 = t;
  t = map_1_0(new_0_0, t);
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_17, i_17);
  t = genzip_4_0(u_1, w_1, y_1, _id, t);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_17, g_44);
  t = conc_0_0(t);
  j_17 = t;
  t = d_44;
  {
    static ATerm z_1 (ATerm t)
    {
      t = i_17;
      return(t);
    }
    t = q_97(z_1, t);
  }
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_17, g_44, j_17);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,s_18 = NULL,t_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_18 = ATgetFirst((ATermList) t);
      t_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_18;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_18;
            if((o_18 != t))
              {
                _fail(t);
              }
            t = m_18;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = (ATerm) ATmakeAppl(sym__2, o_18, t_18);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, o_18, t_18);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  static ATerm g_20 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_98(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        {
          ATerm z_19 = NULL,e_20 = NULL,f_20 = NULL;
          static ATerm c_2 (ATerm t)
          {
            ATerm h_15 = NULL;
            h_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_15, not_null(f_20));
            t = g_20(t);
            return(t);
          }
          z_19 = t;
          if(match_cons(t, sym__2))
            {
              e_20 = ATgetArgument(t, 0);
              if(((f_20 != NULL) && (f_20 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                f_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_20;
          t = SRTS_all(c_2, t);
        }
      }
    return(t);
  }
  t = g_20(t);
  return(t);
}
ATerm rename_4_0 (ATerm k_97 (ATerm (ATerm), ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_97 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_20 = NULL;
  static ATerm p_21 (ATerm t)
  {
    static ATerm d_2 (ATerm t)
    {
      ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
      g_21 = t;
      if(match_cons(t, sym__2))
        {
          h_21 = ATgetArgument(t, 0);
          i_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm x_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_2 (ATerm t)
            {
              ATerm o_21 = NULL;
              o_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_21, i_21);
              t = lookup_0_0(t);
              return(t);
            }
            t = h_21;
            t = k_97(e_2, t);
            LocalPopChoice(z_10);
          }
        else
          {
            t = x_10;
            {
              ATerm y_15 = NULL,a_16 = NULL,c_16 = NULL;
              t = g_21;
              t = p_5(l_97, n_97, h_21, i_21, t);
              if(match_cons(t, sym__3))
                {
                  y_15 = ATgetArgument(t, 0);
                  a_16 = ATgetArgument(t, 1);
                  c_16 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_5(p_21, m_97, y_15, a_16, c_16, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(d_2, t);
    return(t);
  }
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_20, (ATerm) ATempty);
  t = p_21(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      if(((ATgetType(a_11) != AT_LIST) || !(ATisEmpty(a_11))))
        _fail(t);
      {
        ATerm b_11 = ATgetArgument(t, 1);
        if(((ATgetType(b_11) != AT_LIST) || !(ATisEmpty(b_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
        {
          g_18 = ATgetFirst((ATermList) c_11);
          h_18 = (ATerm) ATgetNext((ATermList) c_11);
        }
      else
        _fail(t);
      {
        ATerm d_11 = ATgetArgument(t, 1);
        if(((ATgetType(d_11) == AT_LIST) && !(ATisEmpty(d_11))))
          {
            i_18 = ATgetFirst((ATermList) d_11);
            j_18 = (ATerm) ATgetNext((ATermList) d_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_18, i_18), (ATerm) ATmakeAppl(sym__2, h_18, j_18));
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm k_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      k_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_18), k_18);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm x_18 = NULL,a_19 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_18;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_19);
      }
    else
      {
        t = e_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_11 = ATgetArgument(t, 0);
            a_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_19, a_19);
      }
  }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if(((ATgetType(j_11) != AT_LIST) || !(ATisEmpty(j_11))))
        _fail(t);
      {
        ATerm k_11 = ATgetArgument(t, 1);
        if(((ATgetType(k_11) != AT_LIST) || !(ATisEmpty(k_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
        {
          o_20 = ATgetFirst((ATermList) l_11);
          p_20 = (ATerm) ATgetNext((ATermList) l_11);
        }
      else
        _fail(t);
      {
        ATerm m_11 = ATgetArgument(t, 1);
        if(((ATgetType(m_11) == AT_LIST) && !(ATisEmpty(m_11))))
          {
            q_20 = ATgetFirst((ATermList) m_11);
            r_20 = (ATerm) ATgetNext((ATermList) m_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_20, q_20), (ATerm) ATmakeAppl(sym__2, p_20, r_20));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm t_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      t_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_20), t_20);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm j_21 = NULL,m_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym__2))
    {
      j_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_21;
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_21);
      }
    else
      {
        t = o_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_11 = ATgetArgument(t, 0);
            m_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_21, m_21);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  s_25 = t;
  if(match_cons(t, sym_Scope_2))
    {
      t_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
      {
        ATerm t_16 = NULL,w_16 = NULL,s_2 = NULL;
        t = SSLgetAnnotations(s_25);
        t_16 = t;
        t = t_25;
        t = q_77(t);
        w_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_16, w_25);
        s_2 = t;
        t = SSLsetAnnotations(s_2, t_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          t_25 = ATgetArgument(t, 0);
          w_25 = ATgetArgument(t, 1);
          x_25 = ATgetArgument(t, 2);
          y_25 = ATgetArgument(t, 3);
          {
            ATerm w_17 = NULL,d_18 = NULL,e_18 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(s_25);
            w_17 = t;
            t = x_25;
            t = q_77(t);
            e_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_25, e_18);
            t = genzip_4_0(f_2, h_2, i_2, j_2, t);
            d_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_25, w_25, d_18, y_25);
            t_2 = t;
            t = SSLsetAnnotations(t_2, w_17);
          }
        }
      else
        {
          ATerm c_20 = NULL,l_20 = NULL,m_20 = NULL,u_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              t_25 = ATgetArgument(t, 0);
              w_25 = ATgetArgument(t, 1);
              x_25 = ATgetArgument(t, 2);
              y_25 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_25);
          c_20 = t;
          t = x_25;
          t = q_77(t);
          m_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_25, m_20);
          t = genzip_4_0(k_2, l_2, m_2, o_2, t);
          l_20 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, t_25, w_25, l_20, y_25);
          u_2 = t;
          t = SSLsetAnnotations(u_2, c_20);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  v_29 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
      {
        ATerm d_22 = NULL,g_22 = NULL,h_22 = NULL,z_2 = NULL;
        t = SSLgetAnnotations(v_29);
        d_22 = t;
        t = w_29;
        t = t_77(t);
        g_22 = t;
        t = s_29;
        t = r_77(t);
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_22, h_22);
        z_2 = t;
        t = SSLsetAnnotations(z_2, d_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          w_29 = ATgetArgument(t, 0);
          s_29 = ATgetArgument(t, 1);
          t_29 = ATgetArgument(t, 2);
          u_29 = ATgetArgument(t, 3);
          {
            ATerm x_22 = NULL,f_23 = NULL,g_23 = NULL,k_23 = NULL,l_23 = NULL,b_3 = NULL;
            t = SSLgetAnnotations(v_29);
            x_22 = t;
            t = w_29;
            t = t_77(t);
            f_23 = t;
            t = s_29;
            t = t_77(t);
            g_23 = t;
            t = t_29;
            t = t_77(t);
            k_23 = t;
            t = u_29;
            t = r_77(t);
            l_23 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, f_23, g_23, k_23, l_23);
            b_3 = t;
            t = SSLsetAnnotations(b_3, x_22);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              w_29 = ATgetArgument(t, 0);
              s_29 = ATgetArgument(t, 1);
              t_29 = ATgetArgument(t, 2);
              u_29 = ATgetArgument(t, 3);
              {
                ATerm d_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,v_26 = NULL,c_3 = NULL;
                t = SSLgetAnnotations(v_29);
                d_26 = t;
                t = w_29;
                t = t_77(t);
                k_26 = t;
                t = s_29;
                t = t_77(t);
                l_26 = t;
                t = t_29;
                t = t_77(t);
                m_26 = t;
                t = u_29;
                t = r_77(t);
                v_26 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, k_26, l_26, m_26, v_26);
                c_3 = t;
                t = SSLsetAnnotations(c_3, d_26);
              }
            }
          else
            {
              ATerm c_28 = NULL,k_28 = NULL,d_3 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  w_29 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_29);
              c_28 = t;
              t = w_29;
              t = r_77(t);
              k_28 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, k_28);
              d_3 = t;
              t = SSLsetAnnotations(d_3, c_28);
            }
        }
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm k_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_30);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm s_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_11);
    }
  else
    {
      t = s_11;
      {
        ATerm m_30 = NULL,n_30 = NULL,q_30 = NULL,r_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_30 = ATgetArgument(t, 0);
            t = m_30;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_30 = ATgetArgument(t, 0);
                n_30 = ATgetArgument(t, 1);
                q_30 = ATgetArgument(t, 2);
                r_30 = ATgetArgument(t, 3);
                t = q_30;
                t = map_1_0(w_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_30 = ATgetArgument(t, 0);
                    n_30 = ATgetArgument(t, 1);
                    q_30 = ATgetArgument(t, 2);
                    r_30 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_30;
                t = map_1_0(x_2, t);
              }
          }
      }
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm b_31 = NULL;
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_31 = ATgetArgument(t, 0);
          {
            ATerm x_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_11);
      t = b_31;
    }
  else
    {
      t = v_11;
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
static ATerm x_2 (ATerm t)
{
  ATerm q_31 = NULL;
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_31 = ATgetArgument(t, 0);
          {
            ATerm a_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_11);
      t = q_31;
    }
  else
    {
      t = y_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_31;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(q_2, v_2, tboundin_3_0, t);
  return(t);
}
static ATerm f_5 (ATerm g_93 (ATerm), ATerm g_41, ATerm f_41, ATerm t)
{
  static ATerm v_32 (ATerm t)
  {
    ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
    l_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_41;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_32 = ATgetFirst((ATermList) t);
            n_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_12 = t;
          int c_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_32;
              {
                static ATerm y_2 (ATerm t)
                {
                  t = f_41;
                  return(t);
                }
                t = g_5(g_93, y_2, m_32, n_32, t);
              }
              t = v_32(t);
              LocalPopChoice(c_12);
            }
          else
            {
              t = b_12;
              {
                ATerm a_29 = NULL,d_29 = NULL,m_3 = NULL;
                t = SSLgetAnnotations(l_32);
                a_29 = t;
                t = n_32;
                t = v_32(t);
                d_29 = t;
                t = (ATerm) ATinsert(CheckATermList(d_29), m_32);
                m_3 = t;
                t = SSLsetAnnotations(m_3, a_29);
              }
            }
        }
      }
    return(t);
  }
  t = g_41;
  t = v_32(t);
  return(t);
}
ATerm foldr_3_0 (ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_32;
      t = w_95(t);
    }
  else
    {
      ATerm d_33 = NULL,e_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_32 = ATgetFirst((ATermList) t);
          a_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_32;
      t = y_95(t);
      d_33 = t;
      t = a_33;
      t = foldr_3_0(w_95, x_95, y_95, t);
      e_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_33, e_33);
      t = x_95(t);
    }
  return(t);
}
static ATerm g_5 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm k_41, ATerm j_41, ATerm t)
{
  t = k_93(t);
  {
    static ATerm e_3 (ATerm t)
    {
      ATerm h_33 = NULL;
      h_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_41, h_33);
      t = j_93(t);
      return(t);
    }
    t = fetch_1_0(e_3, t);
  }
  t = j_41;
  return(t);
}
static ATerm h_5 (ATerm b_93 (ATerm), ATerm e_41, ATerm d_41, ATerm t)
{
  static ATerm x_33 (ATerm t)
  {
    ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
    s_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_33;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_33 = ATgetFirst((ATermList) t);
            u_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_12 = t;
          int e_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_33;
              {
                static ATerm f_3 (ATerm t)
                {
                  t = d_41;
                  return(t);
                }
                t = g_5(b_93, f_3, t_33, u_33, t);
              }
              t = x_33(t);
              LocalPopChoice(e_12);
            }
          else
            {
              t = d_12;
              {
                ATerm r_29 = NULL,d_30 = NULL,o_3 = NULL;
                t = SSLgetAnnotations(s_33);
                r_29 = t;
                t = u_33;
                t = x_33(t);
                d_30 = t;
                t = (ATerm) ATinsert(CheckATermList(d_30), t_33);
                o_3 = t;
                t = SSLsetAnnotations(o_3, r_29);
              }
            }
        }
      }
    return(t);
  }
  t = e_41;
  t = x_33(t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_91 (ATerm), ATerm t)
{
  static ATerm z_34 (ATerm t)
  {
    ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
    y_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_34 = ATgetFirst((ATermList) t);
        x_34 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_30 = NULL,c_31 = NULL,q_3 = NULL;
          t = SSLgetAnnotations(y_34);
          p_30 = t;
          t = x_34;
          t = z_34(t);
          c_31 = t;
          t = (ATerm) ATinsert(CheckATermList(c_31), w_34);
          q_3 = t;
          t = SSLsetAnnotations(q_3, p_30);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_34;
        t = j_91(t);
      }
    return(t);
  }
  t = z_34(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_34;
    }
  else
    {
      static ATerm h_3 (ATerm t)
      {
        t = not_null(g_34);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_34 = ATgetFirst((ATermList) t);
          if(((g_34 != NULL) && (g_34 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_34;
      t = at_end_1_0(h_3, t);
    }
  return(t);
}
static ATerm t_35 (ATerm k_35, ATerm t)
{
  ATerm l_35 = NULL;
  t = SSL_explode_term(k_35);
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_35;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  q_35 = t;
  if(match_cons(t, sym__2))
    {
      o_35 = ATgetArgument(t, 0);
      p_35 = ATgetArgument(t, 1);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_3 (ATerm t)
            {
              t = p_35;
              return(t);
            }
            t = o_35;
            t = at_end_1_0(k_3, t);
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = t_35(q_35, t);
          }
      }
    }
  else
    {
      t = t_35(q_35, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm t)
{
  static ATerm a_36 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_83(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        {
          ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,v_3 = NULL;
          t = d_83(t);
          z_35 = t;
          if(match_cons(t, sym__2))
            {
              v_35 = ATgetArgument(t, 0);
              w_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_35);
          u_35 = t;
          t = v_35;
          t = f_83(t);
          x_35 = t;
          t = w_35;
          t = a_36(t);
          y_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_35, y_35);
          v_3 = t;
          t = SSLsetAnnotations(v_3, u_35);
          t = e_83(t);
        }
      }
    return(t);
  }
  t = a_36(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      if(((ATgetType(k_12) != AT_LIST) || !(ATisEmpty(k_12))))
        _fail(t);
      {
        ATerm l_12 = ATgetArgument(t, 1);
        if(((ATgetType(l_12) != AT_LIST) || !(ATisEmpty(l_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm h_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_12 = ATgetArgument(t, 0);
      if(((ATgetType(m_12) == AT_LIST) && !(ATisEmpty(m_12))))
        {
          h_36 = ATgetFirst((ATermList) m_12);
          j_36 = (ATerm) ATgetNext((ATermList) m_12);
        }
      else
        _fail(t);
      {
        ATerm n_12 = ATgetArgument(t, 1);
        if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
          {
            k_36 = ATgetFirst((ATermList) n_12);
            l_36 = (ATerm) ATgetNext((ATermList) n_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_36, k_36), (ATerm) ATmakeAppl(sym__2, j_36, l_36));
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  if(match_cons(t, sym__2))
    {
      m_36 = ATgetArgument(t, 0);
      n_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_36), m_36);
  return(t);
}
static ATerm j_5 (ATerm s_563, ATerm x_563, ATerm l_54, ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL;
  t = SSL_explode_term(x_563);
  if(match_cons(t, sym__2))
    {
      c_36 = ATgetArgument(t, 0);
      e_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_563);
  if(match_cons(t, sym__2))
    {
      if((c_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_36, e_36);
  t = genzip_4_0(n_3, p_3, s_3, _id, t);
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_36, l_54);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t)
{
  static ATerm p_36 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_85(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = d_85(t);
        t = p_36(t);
      }
    return(t);
  }
  t = p_36(t);
  return(t);
}
ATerm for_3_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm t)
{
  t = f_85(t);
  t = while_not_2_0(g_85, h_85, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_37);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,f_37 = NULL,g_37 = NULL,y_3 = NULL;
  g_37 = t;
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_37);
  c_37 = t;
  t = f_37;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_37, f_37);
  y_3 = t;
  t = SSLsetAnnotations(y_3, c_37);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  h_38 = t;
  if(match_cons(t, sym__2))
    {
      i_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_38 = ATgetFirst((ATermList) t);
      l_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_38(i_38, j_38, h_38, t);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_38), k_38), l_38);
          }
      }
    }
  else
    {
      t = x_38(i_38, j_38, h_38, t);
    }
  return(t);
}
static ATerm x_38 (ATerm h_37, ATerm i_37, ATerm j_37, ATerm t)
{
  ATerm m_37 = NULL,p_37 = NULL,a_4 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t = SSLgetAnnotations(j_37);
  m_37 = t;
  t = i_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_37 = ATgetFirst((ATermList) t);
      v_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_37;
  if(match_cons(t, sym__2))
    {
      t_37 = ATgetArgument(t, 0);
      u_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_37;
        if((t_37 != t))
          {
            _fail(t);
          }
        t = v_37;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        t = i_37;
        t = j_5(t_37, u_37, v_37, t);
      }
  }
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_37, p_37);
  a_4 = t;
  t = SSLsetAnnotations(a_4, m_37);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm w_38 = NULL;
  if(match_cons(t, sym__2))
    {
      w_38 = ATgetArgument(t, 0);
      if((w_38 != ATgetArgument(t, 1)))
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
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(u_3, w_3, x_3, t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
        r_38 = t;
        if(match_cons(t, sym__2))
          {
            s_38 = ATgetArgument(t, 0);
            t_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_38;
        t = h_5(b_4, s_38, t_38, t);
      }
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  if(match_cons(t, sym__2))
    {
      x_31 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(k_4, x_31, y_31, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm d_32 = NULL;
  if(match_cons(t, sym__2))
    {
      d_32 = ATgetArgument(t, 0);
      if((d_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm x_32 = NULL,i_33 = NULL;
  if(match_cons(t, sym__2))
    {
      x_32 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(o_4, x_32, i_33, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm j_33 = NULL;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      if((j_33 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm p_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm q_39 (ATerm t)
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_99(t);
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        {
          ATerm c_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_38 = NULL,a_39 = NULL,n_31 = NULL,s_31 = NULL;
              z_38 = t;
              t = o_99(t);
              a_39 = t;
              t = z_38;
              {
                static ATerm c_4 (ATerm t)
                {
                  ATerm c_39 = NULL;
                  t = q_39(t);
                  c_39 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_39, a_39);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_99(c_4, q_39, f_4, t);
              }
              s_31 = t;
              t = SSL_explode_term(s_31);
              if(match_cons(t, sym__2))
                {
                  ATerm e_13 = ATgetArgument(t, 0);
                  n_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_31;
              t = foldr_3_0(i_4, j_4, _id, t);
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              {
                ATerm o_32 = NULL,p_32 = NULL;
                p_32 = t;
                t = SSL_explode_term(p_32);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_13 = ATgetArgument(t, 0);
                    o_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_32;
                t = foldr_3_0(l_4, m_4, q_39, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_39(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm f_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_40);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      {
        ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_40 = ATgetArgument(t, 0);
            t = l_40;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_40 = ATgetArgument(t, 0);
                m_40 = ATgetArgument(t, 1);
                n_40 = ATgetArgument(t, 2);
                o_40 = ATgetArgument(t, 3);
                t = n_40;
                t = map_1_0(s_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_40 = ATgetArgument(t, 0);
                    m_40 = ATgetArgument(t, 1);
                    n_40 = ATgetArgument(t, 2);
                    o_40 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_40;
                t = map_1_0(t_4, t);
              }
          }
      }
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm c_41 = NULL;
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_41 = ATgetArgument(t, 0);
          {
            ATerm k_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_13);
      t = c_41;
    }
  else
    {
      t = i_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_41;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm w_41 = NULL;
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_41 = ATgetArgument(t, 0);
          {
            ATerm n_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_13);
      t = w_41;
    }
  else
    {
      t = l_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_41;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm y_39 = NULL,c_40 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      c_40 = ATgetArgument(t, 0);
      t = c_40;
      if(match_cons(t, sym_Rule_3))
        {
          y_39 = ATgetArgument(t, 0);
          {
            ATerm p_13 = ATgetArgument(t, 1);
          }
          {
            ATerm q_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = y_39;
      t = free_vars_3_0(p_4, r_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          c_40 = ATgetArgument(t, 0);
          {
            ATerm r_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_40;
    }
  return(t);
}
ATerm Var_1_0 (ATerm d_58 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,d_4 = NULL;
  i_42 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_42);
  f_42 = t;
  t = g_42;
  t = d_58(t);
  h_42 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_42);
  d_4 = t;
  t = SSLsetAnnotations(d_4, f_42);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm z_42 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            z_42 = ATgetArgument(t, 0);
            e_43 = ATgetArgument(t, 1);
            f_43 = ATgetArgument(t, 2);
            g_43 = ATgetArgument(t, 3);
            t = f_43;
            t = map_1_0(v_4, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                z_42 = ATgetArgument(t, 0);
                e_43 = ATgetArgument(t, 1);
                f_43 = ATgetArgument(t, 2);
                g_43 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = f_43;
            t = map_1_0(w_4, t);
          }
      }
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm p_43 = NULL;
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_43 = ATgetArgument(t, 0);
          {
            ATerm w_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_13);
      t = p_43;
    }
  else
    {
      t = u_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_43;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm p_44 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_44 = ATgetArgument(t, 0);
          {
            ATerm z_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_13);
      t = p_44;
    }
  else
    {
      t = x_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_44;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
  s_44 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_44 = ATgetArgument(t, 0);
      u_44 = ATgetArgument(t, 1);
      t = s_44;
      t = a_5(t_44, u_44, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_44 = ATgetArgument(t, 0);
          u_44 = ATgetArgument(t, 1);
          v_44 = ATgetArgument(t, 2);
          t = u_44;
          t = map_1_0(y_4, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              t_44 = ATgetArgument(t, 0);
              u_44 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, t_44);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  t_44 = ATgetArgument(t, 0);
                  u_44 = ATgetArgument(t, 1);
                  v_44 = ATgetArgument(t, 2);
                  w_44 = ATgetArgument(t, 3);
                  t = u_44;
                  t = map_1_0(z_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_44 = ATgetArgument(t, 0);
                      u_44 = ATgetArgument(t, 1);
                      v_44 = ATgetArgument(t, 2);
                      w_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_44;
                  t = map_1_0(e_5, t);
                }
            }
        }
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm e_45 = NULL;
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_45 = ATgetArgument(t, 0);
          {
            ATerm c_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_14);
      t = e_45;
    }
  else
    {
      t = a_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_45;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm s_45 = NULL;
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_45 = ATgetArgument(t, 0);
          {
            ATerm j_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_14);
      t = s_45;
    }
  else
    {
      t = h_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_45;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm l_46 = NULL;
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_46 = ATgetArgument(t, 0);
          {
            ATerm m_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_14);
      t = l_46;
    }
  else
    {
      t = k_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_46;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, u_4, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, x_4, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm u_5 (ATerm n_28, ATerm o_28, ATerm t)
{
  ATerm s_46 = NULL;
  t = SSL_fputc(n_28, o_28);
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_46);
  return(t);
}
static ATerm v_5 (ATerm i_27, ATerm j_27, ATerm t)
{
  ATerm v_46 = NULL;
  t = SSL_write_term_to_stream_text(i_27, j_27);
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_46);
  return(t);
}
static ATerm x_5 (ATerm a_86 (ATerm), ATerm h_184, ATerm m_27, ATerm t)
{
  ATerm x_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_184, term_n_14);
  t = a_6(t);
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_46, m_27);
  t = a_86(t);
  t = fclose_0_0(t);
  t = m_27;
  return(t);
}
static ATerm w_5 (ATerm e_27, ATerm f_27, ATerm t)
{
  ATerm b_47 = NULL;
  t = SSL_write_term_to_stream_baf(e_27, f_27);
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_47);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if(match_cons(o_14, sym_Stream_1))
        {
          f_47 = ATgetArgument(o_14, 0);
        }
      else
        _fail(t);
      g_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(f_47, g_47, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm j_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if(match_cons(p_14, sym_Stream_1))
        {
          n_47 = ATgetArgument(p_14, 0);
        }
      else
        _fail(t);
      o_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(n_47, o_47, t);
  j_47 = t;
  t = term_q_14;
  l_47 = t;
  t = j_47;
  if(match_cons(t, sym_Stream_1))
    {
      m_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, j_47);
  t = u_5(l_47, m_47, t);
  return(t);
}
ATerm output_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL;
  t = n_102(t);
  d_47 = t;
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_14;
        t = get_config_0_0(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = term_x_14;
      }
  }
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_47, d_47);
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_15;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, c_47, d_47);
        LocalPopChoice(z_14);
        if(match_cons(t, sym__2))
          {
            ATerm b_15 = ATgetArgument(t, 0);
            ATerm c_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(i_5, c_47, d_47, t);
      }
    else
      {
        t = y_14;
        if(match_cons(t, sym__2))
          {
            ATerm d_15 = ATgetArgument(t, 0);
            ATerm e_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(k_5, c_47, d_47, t);
      }
  }
  return(t);
}
static ATerm l_48 (ATerm b_48, ATerm t)
{
  t = SSL_fclose(b_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL;
  j_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_48 = ATgetArgument(t, 0);
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_48);
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            t = l_48(j_48, t);
          }
      }
    }
  else
    {
      t = l_48(j_48, t);
    }
  return(t);
}
static ATerm y_5 (ATerm k_27, ATerm t)
{
  t = SSL_read_term_from_stream(k_27);
  return(t);
}
static ATerm z_5 (ATerm p_28, ATerm q_28, ATerm t)
{
  ATerm m_48 = NULL;
  t = SSL_fopen(p_28, q_28);
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_48 = NULL;
  t = SSL_stdin_stream();
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_48 = NULL;
  t = SSL_stdout_stream();
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_48 = NULL;
  t = SSL_stderr_stream();
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_48);
  return(t);
}
static ATerm f_50 (ATerm z_48, ATerm t)
{
  ATerm c_49 = NULL;
  t = SSL_explode_term(z_48);
  if(match_cons(t, sym__2))
    {
      ATerm i_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_15 = ATgetArgument(t, 1);
        if(((ATgetType(j_15) == AT_LIST) && !(ATisEmpty(j_15))))
          {
            c_49 = ATgetFirst((ATermList) j_15);
            {
              ATerm k_15 = (ATerm) ATgetNext((ATermList) j_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_50 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,o_49 = NULL,g_4 = NULL;
  t = SSLgetAnnotations(i_49);
  l_49 = t;
  t = g_49;
  if(match_cons(t, sym_Path_1))
    {
      o_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_49, h_49);
  g_4 = t;
  t = SSLsetAnnotations(g_4, l_49);
  if(match_cons(t, sym__2))
    {
      j_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(j_49, k_49, t);
  return(t);
}
static ATerm j_50 (ATerm q_49, ATerm t_49, ATerm u_49, ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,a_50 = NULL,h_4 = NULL;
  t = SSLgetAnnotations(u_49);
  x_49 = t;
  t = SSL_is_string(q_49);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, t_49);
  h_4 = t;
  t = SSLsetAnnotations(h_4, x_49);
  if(match_cons(t, sym__2))
    {
      v_49 = ATgetArgument(t, 0);
      w_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(v_49, w_49, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
  c_50 = t;
  if(match_cons(t, sym__2))
    {
      d_50 = ATgetArgument(t, 0);
      e_50 = ATgetArgument(t, 1);
      {
        ATerm l_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_50(c_50, t);
            LocalPopChoice(r_15);
          }
        else
          {
            t = l_15;
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_50(d_50, e_50, c_50, t);
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  t = j_50(d_50, e_50, c_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_50(c_50, t);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_u_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_50 = NULL,m_50 = NULL,n_50 = NULL;
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_50 = NULL;
      o_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_50, term_x_15);
      t = a_6(t);
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
      t = debug_1_0(m_5, t);
      _fail(t);
    }
  m_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(n_50, t);
  k_50 = t;
  t = m_50;
  t = fclose_0_0(t);
  t = k_50;
  return(t);
}
ATerm input_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm z_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_16;
      t = get_config_0_0(t);
      LocalPopChoice(b_16);
    }
  else
    {
      t = z_15;
      t = term_e_16;
    }
  t = ReadFromFile_0_0(t);
  t = o_102(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
  q_50 = t;
  t = term_g_16;
  t = whoami_0_0(t);
  r_50 = t;
  t = term_h_16;
  t_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_16), r_50), term_i_16);
  u_50 = t;
  t = SSL_printnl(t_50, u_50);
  t = term_k_16;
  s_50 = t;
  t = SSL_exit(s_50);
  t = q_50;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm d_51 = NULL;
  d_51 = t;
  if(match_string(t, "-k"))
    {
      t = d_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_51;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
  e_51 = t;
  t = SSL_string_to_int(e_51);
  f_51 = t;
  t = term_l_16;
  g_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_16, f_51);
  t = i_6(g_51, f_51, t);
  t = e_51;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, q_5, r_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm j_51 = NULL;
  j_51 = t;
  if(match_string(t, "-S"))
    {
      t = j_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_51;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL;
  t = term_n_16;
  l_51 = t;
  t = term_o_16;
  m_51 = t;
  t = term_p_16;
  t = i_6(l_51, m_51, t);
  t = term_r_16;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_u_16;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,q_51 = NULL;
  n_51 = t;
  t = SSL_string_to_int(n_51);
  o_51 = t;
  t = term_n_16;
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, o_51);
  t = i_6(q_51, o_51, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_51);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm r_51 = NULL,t_51 = NULL;
  t = term_x_16;
  r_51 = t;
  t = term_g_16;
  t_51 = t;
  t = term_a_17;
  t = i_6(r_51, t_51, t);
  t = term_d_17;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_5, d_6, j_6, t);
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm l_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_6, l_6, m_6, t);
            LocalPopChoice(n_17);
          }
        else
          {
            t = l_17;
            t = Option_3_0(n_6, q_6, u_6, t);
          }
      }
    }
  return(t);
}
static ATerm i_6 (ATerm f_32, ATerm g_32, ATerm t)
{
  ATerm u_51 = NULL;
  t = term_p_17;
  u_51 = t;
  t = SSL_table_put(u_51, f_32, g_32);
  t = (ATerm) ATmakeAppl(sym__3, term_p_17, f_32, g_32);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm y_51 = NULL,f_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
      t = term_g_16;
      t = e_0(t);
      g_52 = t;
      t = term_q_17;
      h_52 = t;
      t = term_r_17;
      i_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_17, term_r_17, g_52);
      t = g_6(h_52, i_52, g_52, t);
      _fail(t);
    }
  else
    {
      ATerm m_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_51 = ATgetFirst((ATermList) t);
          f_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_51;
      t = c_0(t);
      t = term_g_16;
      t = d_0(t);
      m_52 = t;
      t = (ATerm) ATinsert(CheckATermList(f_52), m_52);
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm p_52 = NULL;
  p_52 = t;
  if(match_string(t, "-o"))
    {
      t = p_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_52;
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm q_52 = NULL,t_52 = NULL;
  q_52 = t;
  t = term_u_14;
  t_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_14, q_52);
  t = i_6(t_52, q_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_52);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_6, x_6, y_6, t);
  return(t);
}
static ATerm g_6 (ATerm y_36, ATerm z_36, ATerm x_36, ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_18 = ATgetArgument(t, 0);
            ATerm c_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
        t = f_6(y_36, z_36, t);
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATempty;
      }
  }
  w_52 = t;
  t = (ATerm) ATinsert(CheckATermList(w_52), x_36);
  x_52 = t;
  t = SSL_table_put(y_36, z_36, x_52);
  t = v_52;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
      t = term_g_16;
      t = n_0(t);
      j_53 = t;
      t = term_q_17;
      k_53 = t;
      t = term_r_17;
      l_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_17, term_r_17, j_53);
      t = g_6(k_53, l_53, j_53, t);
      _fail(t);
    }
  else
    {
      ATerm t_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_53 = ATgetFirst((ATermList) t);
          g_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_53 = ATgetFirst((ATermList) t);
          i_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_53;
      t = k_0(t);
      t = h_53;
      t = l_0(t);
      t_53 = t;
      t = (ATerm) ATinsert(CheckATermList(i_53), t_53);
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm y_53 = NULL;
  y_53 = t;
  if(match_string(t, "-i"))
    {
      t = y_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_53;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL;
  b_54 = t;
  t = term_d_16;
  c_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_16, b_54);
  t = i_6(c_54, b_54, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_54);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_7, d_7, g_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,g_54 = NULL,h_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_16;
  t = whoami_0_0(t);
  d_54 = t;
  t = term_h_16;
  g_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_18), d_54);
  h_54 = t;
  t = SSL_printnl(g_54, h_54);
  t = term_k_16;
  e_54 = t;
  t = SSL_exit(e_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_18;
  t = get_config_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm c_35, ATerm d_35, ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_35, d_35);
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      t = SSL_addr(c_35, d_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
  r_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_54;
      t = u_95(t);
    }
  else
    {
      ATerm y_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_54 = ATgetFirst((ATermList) t);
          t_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_54;
      t = foldr_2_0(u_95, v_95, t);
      y_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_54, y_54);
      t = v_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_o_16;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm b_35 = NULL,f_35 = NULL;
  if(match_cons(t, sym__2))
    {
      b_35 = ATgetArgument(t, 0);
      f_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(b_35, f_35, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_55 = NULL,l_34 = NULL,m_34 = NULL;
  t = times_0_0(t);
  m_34 = t;
  t = SSL_explode_term(m_34);
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_34;
  t = foldr_2_0(h_7, i_7, t);
  e_55 = t;
  t = SSL_TicksToSeconds(e_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
  s_55 = t;
  if(match_cons(t, sym__2))
    {
      t_55 = ATgetArgument(t, 0);
      u_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_18 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_55;
        if((t_55 != t))
          {
            _fail(t);
          }
        t = s_55;
        LocalPopChoice(c_19);
      }
    else
      {
        t = z_18;
        t = (ATerm) ATmakeAppl(sym__2, t_55, u_55);
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_55, u_55);
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              t = SSL_gtr(t_55, u_55);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_55, u_55);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm y_55 = NULL;
  y_55 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_56 = NULL;
        t = term_n_16;
        t = get_config_0_0(t);
        a_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_56, term_k_16);
        t = geq_0_0(t);
        t = y_55;
        t = q_87(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = y_55;
      }
  }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,f_56 = NULL,g_56 = NULL;
  t = run_time_0_0(t);
  c_56 = t;
  t = term_g_16;
  t = whoami_0_0(t);
  d_56 = t;
  t = term_h_16;
  f_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_19), c_56), term_h_19), d_56);
  g_56 = t;
  t = SSL_printnl(f_56, g_56);
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_19), c_56), term_h_19), d_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_16;
  h_56 = t;
  t = SSL_exit(h_56);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL;
  s_56 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_56;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_56 = ATgetArgument(t, 0);
          {
            ATerm u_36 = NULL,n_4 = NULL;
            t = SSLgetAnnotations(s_56);
            u_36 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_56);
            n_4 = t;
            t = SSLsetAnnotations(n_4, u_36);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_56;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_19;
      t = get_config_0_0(t);
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      t = fetch_1_0(k_7, t);
    }
  t = e_102(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_56 = ATgetFirst((ATermList) t);
      w_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_57 = NULL,b_57 = NULL;
        static ATerm l_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_57)), not_null(b_57));
          return(t);
        }
        t = w_56;
        t = i_0(t);
        if(((a_57 != NULL) && (a_57 != t)))
          _fail(t);
        else
          a_57 = t;
        t = v_56;
        t = g_0(t);
        if(((b_57 != NULL) && (b_57 != t)))
          _fail(t);
        else
          b_57 = t;
        t = w_56;
        t = reverse_acc_2_0(g_0, l_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_16;
      t = i_0(t);
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,q_4 = NULL;
  h_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_57);
  f_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_57);
  q_4 = t;
  t = SSLsetAnnotations(q_4, f_57);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_57), term_m_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL;
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_18;
      t = get_config_0_0(t);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      t = fetch_1_0(m_7, t);
    }
  t = term_p_19;
  t = echo_0_0(t);
  t = term_q_17;
  d_57 = t;
  t = term_r_17;
  e_57 = t;
  t = term_q_19;
  t = f_6(d_57, e_57, t);
  t = reverse_acc_2_0(_id, n_7, t);
  t = map_1_0(o_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm d_91 (ATerm), ATerm t)
{
  static ATerm h_58 (ATerm t)
  {
    ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
    e_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_58 = ATgetFirst((ATermList) t);
        g_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_38 = NULL,f_38 = NULL,b_5 = NULL;
          t = SSLgetAnnotations(e_58);
          a_38 = t;
          t = f_58;
          t = d_91(t);
          f_38 = t;
          t = (ATerm) ATinsert(CheckATermList(g_58), f_38);
          b_5 = t;
          t = SSLsetAnnotations(b_5, a_38);
          LocalPopChoice(s_19);
        }
      else
        {
          t = r_19;
          {
            ATerm r_39 = NULL,u_39 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(e_58);
            r_39 = t;
            t = g_58;
            t = h_58(t);
            u_39 = t;
            t = (ATerm) ATinsert(CheckATermList(u_39), f_58);
            c_5 = t;
            t = SSLsetAnnotations(c_5, r_39);
          }
        }
    }
    return(t);
  }
  t = h_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL;
  l_58 = t;
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_19 = ATgetFirst((ATermList) t);
                ATerm w_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_58;
          }
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        t = (ATerm) ATinsert(ATempty, l_58);
      }
  }
  m_58 = t;
  t = term_x_14;
  n_58 = t;
  t = SSL_printnl(n_58, m_58);
  t = l_58;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_18;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_6 (ATerm h_50, ATerm i_50, ATerm t)
{
  t = SSL_strcat(h_50, i_50);
  return(t);
}
ATerm debug_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL;
  r_58 = t;
  t = y_85(t);
  s_58 = t;
  t = term_h_16;
  t_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_58), s_58);
  u_58 = t;
  t = SSL_printnl(t_58, u_58);
  t = r_58;
  return(t);
}
ATerm map_1_0 (ATerm t_90 (ATerm), ATerm t)
{
  static ATerm j_59 (ATerm t)
  {
    ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
    g_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_59;
      }
    else
      {
        ATerm r_40 = NULL,y_40 = NULL,z_40 = NULL,o_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_59 = ATgetFirst((ATermList) t);
            i_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_59);
        r_40 = t;
        t = h_59;
        t = t_90(t);
        y_40 = t;
        t = i_59;
        t = j_59(t);
        z_40 = t;
        t = (ATerm) ATinsert(CheckATermList(z_40), y_40);
        o_5 = t;
        t = SSLsetAnnotations(o_5, r_40);
      }
    return(t);
  }
  t = j_59(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_59 = NULL;
      r_59 = t;
      t = SSL_is_string(r_59);
      LocalPopChoice(d_20);
    }
  else
    {
      t = b_20;
      {
        ATerm h_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_7, t);
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
            {
              ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
              x_59 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_59 = ATgetArgument(t, 0);
                  t = y_59;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_59 = ATgetArgument(t, 0);
                      t = y_59;
                      {
                        ATerm j_20 = t;
                        int k_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(k_20);
                          }
                        else
                          {
                            t = j_20;
                            t = debug_1_0(q_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_60 = NULL,e_60 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_59 = ATgetArgument(t, 0);
                          z_59 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_59;
                      t = eval_config_0_0(t);
                      d_60 = t;
                      t = z_59;
                      t = eval_config_0_0(t);
                      e_60 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_60, e_60);
                      t = e_6(d_60, e_60, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_6 (ATerm p_38, ATerm q_38, ATerm t)
{
  t = SSL_table_get(p_38, q_38);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL;
  i_60 = t;
  t = term_p_17;
  j_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, i_60);
  t = f_6(j_60, i_60, t);
  {
    ATerm n_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_60 = NULL,l_60 = NULL;
        t = eval_config_0_0(t);
        k_60 = t;
        t = term_p_17;
        l_60 = t;
        t = SSL_table_put(l_60, i_60, k_60);
        t = k_60;
        LocalPopChoice(u_20);
      }
    else
      {
        t = n_20;
      }
  }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL;
  t = term_w_20;
  o_60 = t;
  t = term_g_16;
  p_60 = t;
  t = term_x_20;
  t = i_6(o_60, p_60, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
  t = term_w_20;
  s_60 = t;
  t = term_g_16;
  t_60 = t;
  t = term_x_20;
  t = i_6(s_60, t_60, t);
  t = term_b_21;
  q_60 = t;
  t = term_g_16;
  r_60 = t;
  t = term_c_21;
  t = i_6(q_60, r_60, t);
  t = term_d_21;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_7, s_7, t_7, t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = f_21;
      t = Option_3_0(u_7, v_7, w_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,s_5 = NULL;
  z_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_60 = ATgetFirst((ATermList) t);
      w_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_60);
  u_60 = t;
  t = v_60;
  t = q_64(t);
  x_60 = t;
  t = w_60;
  t = r_64(t);
  y_60 = t;
  t = (ATerm) ATinsert(CheckATermList(y_60), x_60);
  s_5 = t;
  t = SSLsetAnnotations(s_5, u_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_104 (ATerm), ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,j_61 = NULL,k_61 = NULL,c_6 = NULL;
  e_61 = t;
  {
    ATerm l_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_21;
        t = c_104(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = l_21;
      }
  }
  t = e_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_61 = ATgetFirst((ATermList) t);
      h_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_61);
  f_61 = t;
  t = term_u_18;
  k_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_18, g_61);
  t = i_6(k_61, g_61, t);
  t = h_61;
  {
    static ATerm v_61 (ATerm t)
    {
      ATerm s_21 = t;
      int t_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_61 = NULL;
              o_61 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_61;
              LocalPopChoice(v_21);
            }
          else
            {
              t = u_21;
              t = c_104(t);
              t = Cons_2_0(_id, v_61, t);
            }
          LocalPopChoice(t_21);
        }
      else
        {
          t = s_21;
          {
            ATerm r_61 = NULL,s_61 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_61 = ATgetFirst((ATermList) t);
                s_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_61), (ATerm) ATmakeAppl(sym_Undefined_1, r_61));
          }
        }
      return(t);
    }
    t = v_61(t);
  }
  j_61 = t;
  t = (ATerm) ATinsert(CheckATermList(j_61), (ATerm) ATmakeAppl(sym_Program_1, g_61));
  c_6 = t;
  t = SSLsetAnnotations(c_6, f_61);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm h_62 = NULL;
  h_62 = t;
  if(match_string(t, "--help"))
    {
      t = h_62;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_62;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_62;
        }
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL;
  t = term_l_19;
  i_62 = t;
  t = term_g_16;
  j_62 = t;
  t = term_w_21;
  t = i_6(i_62, j_62, t);
  t = term_x_21;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
  c_62 = t;
  t = term_q_17;
  e_62 = t;
  t = term_r_17;
  f_62 = t;
  t = (ATerm) ATempty;
  g_62 = t;
  t = SSL_table_put(e_62, f_62, g_62);
  t = c_62;
  {
    static ATerm x_7 (ATerm t)
    {
      ATerm z_21 = t;
      int a_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_104(t);
          LocalPopChoice(a_22);
        }
      else
        {
          t = z_21;
          {
            ATerm b_22 = t;
            int c_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_7, z_7, a_8, t);
                LocalPopChoice(c_22);
              }
            else
              {
                t = b_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_7, t);
  }
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_62 = NULL;
        q_62 = t;
        {
          ATerm i_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_42 = NULL;
              t = q_62;
              {
                ATerm k_22 = t;
                int l_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_19;
                    t = get_config_0_0(t);
                    LocalPopChoice(l_22);
                  }
                else
                  {
                    t = k_22;
                    t = fetch_1_0(b_8, t);
                  }
              }
              t = q_62;
              t = default_system_usage_0_0(t);
              t = term_o_16;
              m_42 = t;
              t = SSL_exit(m_42);
              LocalPopChoice(j_22);
            }
          else
            {
              t = i_22;
              {
                ATerm q_42 = NULL;
                t = term_w_20;
                t = get_config_0_0(t);
                t = q_62;
                t = default_system_about_0_0(t);
                t = term_o_16;
                q_42 = t;
                t = SSL_exit(q_42);
              }
            }
        }
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          ATerm m_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
              static ATerm c_8 (ATerm t)
              {
                ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,h_6 = NULL;
                w_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_62);
                u_62 = t;
                t = v_62;
                if(((a_62 != NULL) && (a_62 != t)))
                  _fail(t);
                else
                  a_62 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_62);
                h_6 = t;
                t = SSLsetAnnotations(h_6, u_62);
                return(t);
              }
              t = fetch_1_0(c_8, t);
              t = term_h_16;
              s_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_62)), term_o_22);
              t_62 = t;
              t = SSL_printnl(s_62, t_62);
              t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_62)), term_o_22));
              t = default_system_usage_0_0(t);
              t = term_k_16;
              r_62 = t;
              t = SSL_exit(r_62);
              LocalPopChoice(n_22);
            }
          else
            {
              t = m_22;
            }
        }
      }
  }
  b_62 = t;
  t = term_q_17;
  d_62 = t;
  t = SSL_table_destroy(d_62);
  t = b_62;
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL;
  t = parse_options_1_0(g_102, t);
  b_63 = t;
  t = term_p_22;
  e_63 = t;
  t = SSL_table_create(e_63);
  t = term_p_22;
  c_63 = t;
  t = term_q_22;
  d_63 = t;
  t = SSL_table_put(c_63, d_63, b_63);
  t = b_63;
  t = i_102(t);
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_102, t);
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        {
          ATerm t_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_102(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_22);
            }
          else
            {
              t = t_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            {
              ATerm a_23 = t;
              int b_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(f_8, g_8, h_8, t);
                  LocalPopChoice(b_23);
                }
              else
                {
                  t = a_23;
                  {
                    ATerm c_23 = t;
                    int d_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(d_23);
                      }
                    else
                      {
                        t = c_23;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = input_1_0(j_8, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL;
  t = term_a_15;
  g_63 = t;
  t = term_g_16;
  h_63 = t;
  t = term_e_23;
  t = i_6(g_63, h_63, t);
  t = term_h_23;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = output_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_8, default_usage_0_0, _id, e_8, t);
  return(t);
}
