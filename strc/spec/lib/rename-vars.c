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
Symbol sym_OverrideDynamicRules_1;
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
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
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
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_n_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_l_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_c_17;
ATerm term_v_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_o_15;
ATerm term_k_15;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_b_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym__2, term_u_18, term_n_17);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_h_19, term_i_19);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_z_21, term_n_17);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_n_17);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_n_17);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_n_17);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm spaste_1_0 (ATerm b_78 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm b_5 (ATerm a_21, ATerm z_20, ATerm t);
ATerm SVar_1_0 (ATerm t_61 (ATerm), ATerm t);
static ATerm l_5 (ATerm c_98 (ATerm), ATerm d_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_44, ATerm r_44, ATerm q_44, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm p_5 (ATerm w_97 (ATerm), ATerm x_97 (ATerm (ATerm), ATerm), ATerm k_44, ATerm n_44, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm k_98 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm r_97 (ATerm (ATerm), ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_97 (ATerm (ATerm), ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm tpaste_1_0 (ATerm x_77 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm f_5 (ATerm n_93 (ATerm), ATerm l_41, ATerm k_41, ATerm t);
ATerm foldr_3_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm t);
static ATerm g_5 (ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm p_41, ATerm o_41, ATerm t);
static ATerm h_5 (ATerm i_93 (ATerm), ATerm j_41, ATerm i_41, ATerm t);
ATerm at_end_1_0 (ATerm q_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_38 (ATerm e_38, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm j_5 (ATerm y_566, ATerm d_567, ATerm s_54, ATerm t);
ATerm while_not_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t);
ATerm for_3_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm q_42 (ATerm i_40, ATerm j_40, ATerm o_40, ATerm t);
static ATerm j_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm free_vars_3_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm k_58 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm u_5 (ATerm p_28, ATerm q_28, ATerm t);
static ATerm v_5 (ATerm j_27, ATerm k_27, ATerm t);
static ATerm x_5 (ATerm h_86 (ATerm), ATerm j_185, ATerm n_27, ATerm t);
static ATerm w_5 (ATerm f_27, ATerm g_27, ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm output_1_0 (ATerm u_102 (ATerm), ATerm t);
static ATerm s_51 (ATerm a_51, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_5 (ATerm l_27, ATerm t);
static ATerm z_5 (ATerm r_28, ATerm s_28, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_53 (ATerm g_52, ATerm t);
static ATerm w_53 (ATerm k_52, ATerm l_52, ATerm m_52, ATerm t);
static ATerm x_53 (ATerm v_52, ATerm w_52, ATerm x_52, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm v_102 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_6 (ATerm k_32, ATerm l_32, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_6 (ATerm d_37, ATerm e_37, ATerm c_37, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_6 (ATerm h_35, ATerm i_35, ATerm t);
ATerm foldr_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_87 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm need_help_1_0 (ATerm l_102 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_91 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_6 (ATerm o_50, ATerm p_50, ATerm t);
ATerm debug_1_0 (ATerm f_86 (ATerm), ATerm t);
ATerm map_1_0 (ATerm a_91 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm f_6 (ATerm u_38, ATerm v_38, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm x_64 (ATerm), ATerm y_64 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_104 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm parse_options_1_0 (ATerm i_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
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
      ATerm p_8 = ATgetArgument(t, 0);
      if(((ATgetType(p_8) != AT_LIST) || !(ATisEmpty(p_8))))
        _fail(t);
      {
        ATerm q_8 = ATgetArgument(t, 1);
        if(((ATgetType(q_8) != AT_LIST) || !(ATisEmpty(q_8))))
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
      ATerm r_8 = ATgetArgument(t, 0);
      if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
        {
          r_0 = ATgetFirst((ATermList) r_8);
          s_0 = (ATerm) ATgetNext((ATermList) r_8);
        }
      else
        _fail(t);
      {
        ATerm s_8 = ATgetArgument(t, 1);
        if(((ATgetType(s_8) == AT_LIST) && !(ATisEmpty(s_8))))
          {
            t_0 = ATgetFirst((ATermList) s_8);
            u_0 = (ATerm) ATgetNext((ATermList) s_8);
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
static ATerm c_0 (ATerm t)
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
static ATerm f_0 (ATerm t)
{
  ATerm y_0 = NULL,a_1 = NULL,b_1 = NULL,d_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      y_0 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_0;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm v_8 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(u_8);
        t = (ATerm) ATmakeAppl(sym_SDef_3, n_1, a_1, b_1);
      }
    else
      {
        t = t_8;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm w_8 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
            d_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, n_1, a_1, b_1, d_1);
      }
  }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if(((ATgetType(y_8) != AT_LIST) || !(ATisEmpty(y_8))))
        _fail(t);
      {
        ATerm z_8 = ATgetArgument(t, 1);
        if(((ATgetType(z_8) != AT_LIST) || !(ATisEmpty(z_8))))
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
  ATerm b_3 = NULL,i_3 = NULL,k_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      if(((ATgetType(a_9) == AT_LIST) && !(ATisEmpty(a_9))))
        {
          b_3 = ATgetFirst((ATermList) a_9);
          i_3 = (ATerm) ATgetNext((ATermList) a_9);
        }
      else
        _fail(t);
      {
        ATerm b_9 = ATgetArgument(t, 1);
        if(((ATgetType(b_9) == AT_LIST) && !(ATisEmpty(b_9))))
          {
            k_3 = ATgetFirst((ATermList) b_9);
            m_3 = (ATerm) ATgetNext((ATermList) b_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_3, k_3), (ATerm) ATmakeAppl(sym__2, i_3, m_3));
  return(t);
}
static ATerm x_0 (ATerm t)
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
static ATerm z_0 (ATerm t)
{
  ATerm x_3 = NULL,f_4 = NULL,g_4 = NULL;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      g_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3;
  {
    ATerm c_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_9);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_4);
      }
    else
      {
        t = c_9;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_9 = ATgetArgument(t, 0);
            f_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_4, f_4);
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_9 = ATgetArgument(t, 0);
      if(((ATgetType(l_9) != AT_LIST) || !(ATisEmpty(l_9))))
        _fail(t);
      {
        ATerm n_9 = ATgetArgument(t, 1);
        if(((ATgetType(n_9) != AT_LIST) || !(ATisEmpty(n_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm t_6 = NULL,v_6 = NULL,y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_9 = ATgetArgument(t, 0);
      if(((ATgetType(o_9) == AT_LIST) && !(ATisEmpty(o_9))))
        {
          t_6 = ATgetFirst((ATermList) o_9);
          v_6 = (ATerm) ATgetNext((ATermList) o_9);
        }
      else
        _fail(t);
      {
        ATerm q_9 = ATgetArgument(t, 1);
        if(((ATgetType(q_9) == AT_LIST) && !(ATisEmpty(q_9))))
          {
            y_6 = ATgetFirst((ATermList) q_9);
            z_6 = (ATerm) ATgetNext((ATermList) q_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_6, y_6), (ATerm) ATmakeAppl(sym__2, v_6, z_6));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_7), b_7);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL,h_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7;
  {
    ATerm s_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_9);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_7);
      }
    else
      {
        t = s_9;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_9 = ATgetArgument(t, 0);
            g_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_7, g_7);
      }
  }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(((ATgetType(y_9) != AT_LIST) || !(ATisEmpty(y_9))))
        _fail(t);
      {
        ATerm z_9 = ATgetArgument(t, 1);
        if(((ATgetType(z_9) != AT_LIST) || !(ATisEmpty(z_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
        {
          g_9 = ATgetFirst((ATermList) a_10);
          h_9 = (ATerm) ATgetNext((ATermList) a_10);
        }
      else
        _fail(t);
      {
        ATerm e_10 = ATgetArgument(t, 1);
        if(((ATgetType(e_10) == AT_LIST) && !(ATisEmpty(e_10))))
          {
            i_9 = ATgetFirst((ATermList) e_10);
            k_9 = (ATerm) ATgetNext((ATermList) e_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_9, i_9), (ATerm) ATmakeAppl(sym__2, h_9, k_9));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm m_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_9), m_9);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm r_9 = NULL,t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9;
  {
    ATerm f_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_9);
      }
    else
      {
        t = f_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_10 = ATgetArgument(t, 0);
            t_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_9, t_9);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm b_78 (ATerm), ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,g_10 = NULL,h_10 = NULL;
  d_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      {
        ATerm e_0 = NULL,j_0 = NULL,m_0 = NULL,c_1 = NULL;
        t = SSLgetAnnotations(d_10);
        e_0 = t;
        t = g_10;
        t = b_78(t);
        m_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_10, m_0);
        t = genzip_4_0(a_0, b_0, c_0, f_0, t);
        j_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_0, h_10);
        c_1 = t;
        t = SSLsetAnnotations(c_1, e_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_10 = ATgetArgument(t, 0);
          h_10 = ATgetArgument(t, 1);
          b_10 = ATgetArgument(t, 2);
          {
            ATerm i_2 = NULL,s_2 = NULL,u_2 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(d_10);
            i_2 = t;
            t = h_10;
            t = b_78(t);
            u_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_10, u_2);
            t = genzip_4_0(h_0, q_0, x_0, z_0, t);
            s_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, g_10, s_2, b_10);
            e_1 = t;
            t = SSLsetAnnotations(e_1, i_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              g_10 = ATgetArgument(t, 0);
              h_10 = ATgetArgument(t, 1);
              b_10 = ATgetArgument(t, 2);
              c_10 = ATgetArgument(t, 3);
              {
                ATerm i_5 = NULL,q_6 = NULL,r_6 = NULL,f_1 = NULL;
                t = SSLgetAnnotations(d_10);
                i_5 = t;
                t = h_10;
                t = b_78(t);
                r_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_10, r_6);
                t = genzip_4_0(i_1, j_1, k_1, l_1, t);
                q_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, g_10, q_6, b_10, c_10);
                f_1 = t;
                t = SSLsetAnnotations(f_1, i_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  g_10 = ATgetArgument(t, 0);
                  h_10 = ATgetArgument(t, 1);
                  b_10 = ATgetArgument(t, 2);
                  c_10 = ATgetArgument(t, 3);
                  {
                    ATerm k_8 = NULL,x_8 = NULL,d_9 = NULL,g_1 = NULL;
                    t = SSLgetAnnotations(d_10);
                    k_8 = t;
                    t = h_10;
                    t = b_78(t);
                    d_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_10, d_9);
                    t = genzip_4_0(m_1, p_1, r_1, s_1, t);
                    x_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, g_10, x_8, b_10, c_10);
                    g_1 = t;
                    t = SSLsetAnnotations(g_1, k_8);
                  }
                }
              else
                {
                  ATerm v_10 = NULL,y_10 = NULL,h_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      g_10 = ATgetArgument(t, 0);
                      h_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_10);
                  v_10 = t;
                  t = g_10;
                  t = b_78(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_10 = ATgetFirst((ATermList) t);
                      {
                        ATerm l_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, y_10, h_10);
                  h_1 = t;
                  t = SSLsetAnnotations(h_1, v_10);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t)
{
  ATerm m_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  s_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
      {
        ATerm m_11 = NULL,v_11 = NULL,w_11 = NULL,o_1 = NULL;
        t = SSLgetAnnotations(s_15);
        m_11 = t;
        t = t_15;
        t = c_78(t);
        v_11 = t;
        t = u_15;
        t = c_78(t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, v_11, w_11);
        o_1 = t;
        t = SSLsetAnnotations(o_1, m_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_15 = ATgetArgument(t, 0);
          u_15 = ATgetArgument(t, 1);
          m_15 = ATgetArgument(t, 2);
          {
            ATerm q_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(s_15);
            q_12 = t;
            t = t_15;
            t = e_78(t);
            x_12 = t;
            t = u_15;
            t = e_78(t);
            y_12 = t;
            t = m_15;
            t = c_78(t);
            z_12 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, x_12, y_12, z_12);
            q_1 = t;
            t = SSLsetAnnotations(q_1, q_12);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              t_15 = ATgetArgument(t, 0);
              u_15 = ATgetArgument(t, 1);
              m_15 = ATgetArgument(t, 2);
              r_15 = ATgetArgument(t, 3);
              {
                ATerm q_13 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,y_1 = NULL;
                t = SSLgetAnnotations(s_15);
                q_13 = t;
                t = t_15;
                t = e_78(t);
                f_14 = t;
                t = u_15;
                t = e_78(t);
                g_14 = t;
                t = m_15;
                t = e_78(t);
                h_14 = t;
                t = r_15;
                t = c_78(t);
                i_14 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_14, g_14, h_14, i_14);
                y_1 = t;
                t = SSLsetAnnotations(y_1, q_13);
              }
            }
          else
            {
              ATerm t_14 = NULL,x_14 = NULL,y_14 = NULL,b_2 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  t_15 = ATgetArgument(t, 0);
                  u_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_15);
              t_14 = t;
              t = t_15;
              t = e_78(t);
              x_14 = t;
              t = u_15;
              t = c_78(t);
              y_14 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, x_14, y_14);
              b_2 = t;
              t = SSLsetAnnotations(b_2, t_14);
            }
        }
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm b_16 = NULL;
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_16 = ATgetArgument(t, 0);
          {
            ATerm o_10 = ATgetArgument(t, 1);
          }
          {
            ATerm p_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_10);
      t = b_16;
    }
  else
    {
      t = m_10;
      if(match_cons(t, sym_SDefT_4))
        {
          b_16 = ATgetArgument(t, 0);
          {
            ATerm q_10 = ATgetArgument(t, 1);
          }
          {
            ATerm r_10 = ATgetArgument(t, 2);
          }
          {
            ATerm s_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = b_16;
    }
  return(t);
}
static ATerm b_5 (ATerm a_21, ATerm z_20, ATerm t)
{
  t = a_21;
  t = map_1_0(t_1, t);
  return(t);
}
ATerm SVar_1_0 (ATerm t_61 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,s_16 = NULL,y_16 = NULL,n_2 = NULL;
  y_16 = t;
  if(match_cons(t, sym_SVar_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_16);
  p_16 = t;
  t = q_16;
  t = t_61(t);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, s_16);
  n_2 = t;
  t = SSLsetAnnotations(n_2, p_16);
  return(t);
}
static ATerm l_5 (ATerm c_98 (ATerm), ATerm d_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_44, ATerm r_44, ATerm q_44, ATerm t)
{
  static ATerm u_1 (ATerm t)
  {
    ATerm a_17 = NULL;
    a_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_17, q_44);
    t = c_98(t);
    return(t);
  }
  static ATerm v_1 (ATerm t)
  {
    ATerm b_17 = NULL;
    b_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_17, r_44);
    t = c_98(t);
    return(t);
  }
  t = s_44;
  t = d_98(u_1, v_1, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      if(((ATgetType(t_10) != AT_LIST) || !(ATisEmpty(t_10))))
        _fail(t);
      {
        ATerm u_10 = ATgetArgument(t, 1);
        if(((ATgetType(u_10) != AT_LIST) || !(ATisEmpty(u_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm m_17 = NULL,o_17 = NULL,s_17 = NULL,t_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_10 = ATgetArgument(t, 0);
      if(((ATgetType(w_10) == AT_LIST) && !(ATisEmpty(w_10))))
        {
          m_17 = ATgetFirst((ATermList) w_10);
          o_17 = (ATerm) ATgetNext((ATermList) w_10);
        }
      else
        _fail(t);
      {
        ATerm x_10 = ATgetArgument(t, 1);
        if(((ATgetType(x_10) == AT_LIST) && !(ATisEmpty(x_10))))
          {
            s_17 = ATgetFirst((ATermList) x_10);
            t_17 = (ATerm) ATgetNext((ATermList) x_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_17, s_17), (ATerm) ATmakeAppl(sym__2, o_17, t_17));
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  if(match_cons(t, sym__2))
    {
      u_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_17), u_17);
  return(t);
}
static ATerm p_5 (ATerm w_97 (ATerm), ATerm x_97 (ATerm (ATerm), ATerm), ATerm k_44, ATerm n_44, ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,i_17 = NULL,j_17 = NULL,l_17 = NULL;
  t = k_44;
  t = w_97(t);
  e_17 = t;
  t = map_1_0(new_0_0, t);
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_17, f_17);
  t = genzip_4_0(w_1, x_1, z_1, _id, t);
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_17, n_44);
  t = conc_0_0(t);
  i_17 = t;
  t = k_44;
  {
    static ATerm a_2 (ATerm t)
    {
      t = f_17;
      return(t);
    }
    t = x_97(a_2, t);
  }
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_17, n_44, i_17);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  l_18 = t;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_18 = ATgetFirst((ATermList) t);
      p_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_18;
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_18;
            if((m_18 != t))
              {
                _fail(t);
              }
            t = j_18;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            t = (ATerm) ATmakeAppl(sym__2, m_18, p_18);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_18, p_18);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  static ATerm g_20 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_98(t);
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        {
          ATerm b_20 = NULL,e_20 = NULL,f_20 = NULL;
          static ATerm c_2 (ATerm t)
          {
            ATerm j_15 = NULL;
            j_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_15, not_null(f_20));
            t = g_20(t);
            return(t);
          }
          b_20 = t;
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
ATerm rename_4_0 (ATerm r_97 (ATerm (ATerm), ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_97 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_20 = NULL;
  static ATerm s_21 (ATerm t)
  {
    static ATerm d_2 (ATerm t)
    {
      ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
      m_21 = t;
      if(match_cons(t, sym__2))
        {
          n_21 = ATgetArgument(t, 0);
          o_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_2 (ATerm t)
            {
              ATerm r_21 = NULL;
              r_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_21, o_21);
              t = lookup_0_0(t);
              return(t);
            }
            t = n_21;
            t = r_97(e_2, t);
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            {
              ATerm z_15 = NULL,c_16 = NULL,d_16 = NULL;
              t = m_21;
              t = p_5(s_97, u_97, n_21, o_21, t);
              if(match_cons(t, sym__3))
                {
                  z_15 = ATgetArgument(t, 0);
                  c_16 = ATgetArgument(t, 1);
                  d_16 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_5(s_21, t_97, z_15, c_16, d_16, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(d_2, t);
    return(t);
  }
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_20, (ATerm) ATempty);
  t = s_21(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if(((ATgetType(f_11) != AT_LIST) || !(ATisEmpty(f_11))))
        _fail(t);
      {
        ATerm g_11 = ATgetArgument(t, 1);
        if(((ATgetType(g_11) != AT_LIST) || !(ATisEmpty(g_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,k_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if(((ATgetType(h_11) == AT_LIST) && !(ATisEmpty(h_11))))
        {
          g_18 = ATgetFirst((ATermList) h_11);
          h_18 = (ATerm) ATgetNext((ATermList) h_11);
        }
      else
        _fail(t);
      {
        ATerm i_11 = ATgetArgument(t, 1);
        if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
          {
            k_18 = ATgetFirst((ATermList) i_11);
            q_18 = (ATerm) ATgetNext((ATermList) i_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_18, k_18), (ATerm) ATmakeAppl(sym__2, h_18, q_18));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm r_18 = NULL,x_18 = NULL;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_18), r_18);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm a_19 = NULL,f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_19;
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_19);
      }
    else
      {
        t = j_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm n_11 = ATgetArgument(t, 0);
            f_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_19, f_19);
      }
  }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_11 = ATgetArgument(t, 0);
      if(((ATgetType(o_11) != AT_LIST) || !(ATisEmpty(o_11))))
        _fail(t);
      {
        ATerm p_11 = ATgetArgument(t, 1);
        if(((ATgetType(p_11) != AT_LIST) || !(ATisEmpty(p_11))))
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
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_11 = ATgetArgument(t, 0);
      if(((ATgetType(q_11) == AT_LIST) && !(ATisEmpty(q_11))))
        {
          q_20 = ATgetFirst((ATermList) q_11);
          r_20 = (ATerm) ATgetNext((ATermList) q_11);
        }
      else
        _fail(t);
      {
        ATerm r_11 = ATgetArgument(t, 1);
        if(((ATgetType(r_11) == AT_LIST) && !(ATisEmpty(r_11))))
          {
            s_20 = ATgetFirst((ATermList) r_11);
            v_20 = (ATerm) ATgetNext((ATermList) r_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_20, s_20), (ATerm) ATmakeAppl(sym__2, r_20, v_20));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm y_20 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_21), y_20);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm f_21 = NULL,h_21 = NULL,i_21 = NULL;
  if(match_cons(t, sym__2))
    {
      f_21 = ATgetArgument(t, 0);
      i_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_21;
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm u_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_21);
      }
    else
      {
        t = s_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_11 = ATgetArgument(t, 0);
            h_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_21, h_21);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  q_26 = t;
  if(match_cons(t, sym_Scope_2))
    {
      r_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
      {
        ATerm u_16 = NULL,x_16 = NULL,q_2 = NULL;
        t = SSLgetAnnotations(q_26);
        u_16 = t;
        t = r_26;
        t = x_77(t);
        x_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, x_16, u_26);
        q_2 = t;
        t = SSLsetAnnotations(q_2, u_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          r_26 = ATgetArgument(t, 0);
          u_26 = ATgetArgument(t, 1);
          v_26 = ATgetArgument(t, 2);
          w_26 = ATgetArgument(t, 3);
          {
            ATerm y_17 = NULL,d_18 = NULL,e_18 = NULL,r_2 = NULL;
            t = SSLgetAnnotations(q_26);
            y_17 = t;
            t = v_26;
            t = x_77(t);
            e_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_26, e_18);
            t = genzip_4_0(f_2, g_2, h_2, j_2, t);
            d_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, r_26, u_26, d_18, w_26);
            r_2 = t;
            t = SSLsetAnnotations(r_2, y_17);
          }
        }
      else
        {
          ATerm c_20 = NULL,l_20 = NULL,m_20 = NULL,t_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              r_26 = ATgetArgument(t, 0);
              u_26 = ATgetArgument(t, 1);
              v_26 = ATgetArgument(t, 2);
              w_26 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_26);
          c_20 = t;
          t = v_26;
          t = x_77(t);
          m_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_26, m_20);
          t = genzip_4_0(k_2, l_2, m_2, o_2, t);
          l_20 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, r_26, u_26, l_20, w_26);
          t_2 = t;
          t = SSLsetAnnotations(t_2, c_20);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
  n_31 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
      {
        ATerm d_22 = NULL,g_22 = NULL,h_22 = NULL,z_2 = NULL;
        t = SSLgetAnnotations(n_31);
        d_22 = t;
        t = o_31;
        t = a_78(t);
        g_22 = t;
        t = k_31;
        t = y_77(t);
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
          o_31 = ATgetArgument(t, 0);
          k_31 = ATgetArgument(t, 1);
          l_31 = ATgetArgument(t, 2);
          m_31 = ATgetArgument(t, 3);
          {
            ATerm d_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(n_31);
            d_23 = t;
            t = o_31;
            t = a_78(t);
            v_23 = t;
            t = k_31;
            t = a_78(t);
            w_23 = t;
            t = l_31;
            t = a_78(t);
            x_23 = t;
            t = m_31;
            t = y_77(t);
            y_23 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_23, w_23, x_23, y_23);
            a_3 = t;
            t = SSLsetAnnotations(a_3, d_23);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              o_31 = ATgetArgument(t, 0);
              k_31 = ATgetArgument(t, 1);
              l_31 = ATgetArgument(t, 2);
              m_31 = ATgetArgument(t, 3);
              {
                ATerm g_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,c_3 = NULL;
                t = SSLgetAnnotations(n_31);
                g_25 = t;
                t = o_31;
                t = a_78(t);
                n_25 = t;
                t = k_31;
                t = a_78(t);
                o_25 = t;
                t = l_31;
                t = a_78(t);
                p_25 = t;
                t = m_31;
                t = y_77(t);
                q_25 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, n_25, o_25, p_25, q_25);
                c_3 = t;
                t = SSLsetAnnotations(c_3, g_25);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  o_31 = ATgetArgument(t, 0);
                  {
                    ATerm g_26 = NULL,i_26 = NULL,d_3 = NULL;
                    t = SSLgetAnnotations(n_31);
                    g_26 = t;
                    t = o_31;
                    t = y_77(t);
                    i_26 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, i_26);
                    d_3 = t;
                    t = SSLsetAnnotations(d_3, g_26);
                  }
                }
              else
                {
                  ATerm c_27 = NULL,e_27 = NULL,e_3 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      o_31 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_31);
                  c_27 = t;
                  t = o_31;
                  t = y_77(t);
                  e_27 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, e_27);
                  e_3 = t;
                  t = SSLsetAnnotations(e_3, c_27);
                }
            }
        }
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm g_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_32);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            {
              ATerm i_32 = NULL,j_32 = NULL,m_32 = NULL,n_32 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_32 = ATgetArgument(t, 0);
                  j_32 = ATgetArgument(t, 1);
                  m_32 = ATgetArgument(t, 2);
                  n_32 = ATgetArgument(t, 3);
                  t = m_32;
                  t = map_1_0(w_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_32 = ATgetArgument(t, 0);
                      j_32 = ATgetArgument(t, 1);
                      m_32 = ATgetArgument(t, 2);
                      n_32 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_32;
                  t = map_1_0(x_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm z_32 = NULL;
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_32 = ATgetArgument(t, 0);
          {
            ATerm e_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_12);
      t = z_32;
    }
  else
    {
      t = c_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_32;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm i_33 = NULL;
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_33 = ATgetArgument(t, 0);
          {
            ATerm h_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_12);
      t = i_33;
    }
  else
    {
      t = f_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_33;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm q_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_33);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            {
              ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_33 = ATgetArgument(t, 0);
                  t_33 = ATgetArgument(t, 1);
                  u_33 = ATgetArgument(t, 2);
                  v_33 = ATgetArgument(t, 3);
                  t = u_33;
                  t = map_1_0(g_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_33 = ATgetArgument(t, 0);
                      t_33 = ATgetArgument(t, 1);
                      u_33 = ATgetArgument(t, 2);
                      v_33 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_33;
                  t = map_1_0(h_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm e_34 = NULL;
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_34 = ATgetArgument(t, 0);
          {
            ATerm o_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_12);
      t = e_34;
    }
  else
    {
      t = m_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_34;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm p_34 = NULL;
  ATerm p_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_34 = ATgetArgument(t, 0);
          {
            ATerm s_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_12);
      t = p_34;
    }
  else
    {
      t = p_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_34;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm e_32 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      e_32 = ATgetArgument(t, 0);
      t = e_32;
      t = free_vars_3_0(p_2, v_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          e_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_32;
      t = free_vars_3_0(y_2, f_3, tboundin_3_0, t);
    }
  return(t);
}
static ATerm f_5 (ATerm n_93 (ATerm), ATerm l_41, ATerm k_41, ATerm t)
{
  static ATerm n_35 (ATerm t)
  {
    ATerm g_35 = NULL,j_35 = NULL,k_35 = NULL;
    g_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_41;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_35 = ATgetFirst((ATermList) t);
            k_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_35;
              {
                static ATerm j_3 (ATerm t)
                {
                  t = k_41;
                  return(t);
                }
                t = g_5(n_93, j_3, j_35, k_35, t);
              }
              t = n_35(t);
              LocalPopChoice(u_12);
            }
          else
            {
              t = t_12;
              {
                ATerm r_27 = NULL,u_27 = NULL,n_3 = NULL;
                t = SSLgetAnnotations(g_35);
                r_27 = t;
                t = k_35;
                t = n_35(t);
                u_27 = t;
                t = (ATerm) ATinsert(CheckATermList(u_27), j_35);
                n_3 = t;
                t = SSLsetAnnotations(n_3, r_27);
              }
            }
        }
      }
    return(t);
  }
  t = l_41;
  t = n_35(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_35;
      t = d_96(t);
    }
  else
    {
      ATerm v_35 = NULL,w_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_35 = ATgetFirst((ATermList) t);
          s_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_35;
      t = f_96(t);
      v_35 = t;
      t = s_35;
      t = foldr_3_0(d_96, e_96, f_96, t);
      w_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_35, w_35);
      t = e_96(t);
    }
  return(t);
}
static ATerm g_5 (ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm p_41, ATerm o_41, ATerm t)
{
  t = r_93(t);
  {
    static ATerm l_3 (ATerm t)
    {
      ATerm z_35 = NULL;
      z_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_41, z_35);
      t = q_93(t);
      return(t);
    }
    t = fetch_1_0(l_3, t);
  }
  t = o_41;
  return(t);
}
static ATerm h_5 (ATerm i_93 (ATerm), ATerm j_41, ATerm i_41, ATerm t)
{
  static ATerm t_36 (ATerm t)
  {
    ATerm m_36 = NULL,p_36 = NULL,q_36 = NULL;
    m_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_36;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_36 = ATgetFirst((ATermList) t);
            q_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_36;
              {
                static ATerm o_3 (ATerm t)
                {
                  t = i_41;
                  return(t);
                }
                t = g_5(i_93, o_3, p_36, q_36, t);
              }
              t = t_36(t);
              LocalPopChoice(w_12);
            }
          else
            {
              t = v_12;
              {
                ATerm i_28 = NULL,o_28 = NULL,p_3 = NULL;
                t = SSLgetAnnotations(m_36);
                i_28 = t;
                t = q_36;
                t = t_36(t);
                o_28 = t;
                t = (ATerm) ATinsert(CheckATermList(o_28), p_36);
                p_3 = t;
                t = SSLsetAnnotations(p_3, i_28);
              }
            }
        }
      }
    return(t);
  }
  t = j_41;
  t = t_36(t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  static ATerm a_38 (ATerm t)
  {
    ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
    z_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_37 = ATgetFirst((ATermList) t);
        y_37 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_29 = NULL,d_29 = NULL,r_3 = NULL;
          t = SSLgetAnnotations(z_37);
          a_29 = t;
          t = y_37;
          t = a_38(t);
          d_29 = t;
          t = (ATerm) ATinsert(CheckATermList(d_29), x_37);
          r_3 = t;
          t = SSLsetAnnotations(r_3, a_29);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_37;
        t = q_91(t);
      }
    return(t);
  }
  t = a_38(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_36;
    }
  else
    {
      static ATerm q_3 (ATerm t)
      {
        t = not_null(a_37);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_36 = ATgetFirst((ATermList) t);
          if(((a_37 != NULL) && (a_37 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_36;
      t = at_end_1_0(q_3, t);
    }
  return(t);
}
static ATerm m_38 (ATerm e_38, ATerm t)
{
  ATerm f_38 = NULL;
  t = SSL_explode_term(e_38);
  if(match_cons(t, sym__2))
    {
      ATerm a_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_38;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  j_38 = t;
  if(match_cons(t, sym__2))
    {
      h_38 = ATgetArgument(t, 0);
      i_38 = ATgetArgument(t, 1);
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_3 (ATerm t)
            {
              t = i_38;
              return(t);
            }
            t = h_38;
            t = at_end_1_0(u_3, t);
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            t = m_38(j_38, t);
          }
      }
    }
  else
    {
      t = m_38(j_38, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  static ATerm t_38 (ATerm t)
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_83(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        {
          ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,w_3 = NULL;
          t = k_83(t);
          s_38 = t;
          if(match_cons(t, sym__2))
            {
              o_38 = ATgetArgument(t, 0);
              p_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_38);
          n_38 = t;
          t = o_38;
          t = m_83(t);
          q_38 = t;
          t = p_38;
          t = t_38(t);
          r_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_38, r_38);
          w_3 = t;
          t = SSLsetAnnotations(w_3, n_38);
          t = l_83(t);
        }
      }
    return(t);
  }
  t = t_38(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      if(((ATgetType(f_13) != AT_LIST) || !(ATisEmpty(f_13))))
        _fail(t);
      {
        ATerm g_13 = ATgetArgument(t, 1);
        if(((ATgetType(g_13) != AT_LIST) || !(ATisEmpty(g_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
        {
          c_39 = ATgetFirst((ATermList) h_13);
          d_39 = (ATerm) ATgetNext((ATermList) h_13);
        }
      else
        _fail(t);
      {
        ATerm i_13 = ATgetArgument(t, 1);
        if(((ATgetType(i_13) == AT_LIST) && !(ATisEmpty(i_13))))
          {
            e_39 = ATgetFirst((ATermList) i_13);
            f_39 = (ATerm) ATgetNext((ATermList) i_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_39, e_39), (ATerm) ATmakeAppl(sym__2, d_39, f_39));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL;
  if(match_cons(t, sym__2))
    {
      g_39 = ATgetArgument(t, 0);
      h_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_39), g_39);
  return(t);
}
static ATerm j_5 (ATerm y_566, ATerm d_567, ATerm s_54, ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  t = SSL_explode_term(d_567);
  if(match_cons(t, sym__2))
    {
      x_38 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_566);
  if(match_cons(t, sym__2))
    {
      if((x_38 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      y_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_38, z_38);
  t = genzip_4_0(v_3, y_3, a_4, _id, t);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_39, s_54);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  static ATerm o_39 (ATerm t)
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_85(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = k_85(t);
        t = o_39(t);
      }
    return(t);
  }
  t = o_39(t);
  return(t);
}
ATerm for_3_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm t)
{
  t = m_85(t);
  t = while_not_2_0(n_85, o_85, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm z_39 = NULL;
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_39);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,g_40 = NULL,h_40 = NULL,z_3 = NULL;
  h_40 = t;
  if(match_cons(t, sym__2))
    {
      e_40 = ATgetArgument(t, 0);
      g_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_40);
  d_40 = t;
  t = g_40;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_40, g_40);
  z_3 = t;
  t = SSLsetAnnotations(z_3, d_40);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,b_42 = NULL,c_42 = NULL;
  w_41 = t;
  if(match_cons(t, sym__2))
    {
      x_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_42 = ATgetFirst((ATermList) t);
      c_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_42(x_41, y_41, w_41, t);
            LocalPopChoice(m_13);
          }
        else
          {
            t = l_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_41), b_42), c_42);
          }
      }
    }
  else
    {
      t = q_42(x_41, y_41, w_41, t);
    }
  return(t);
}
static ATerm q_42 (ATerm i_40, ATerm j_40, ATerm o_40, ATerm t)
{
  ATerm p_40 = NULL,s_40 = NULL,b_4 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
  t = SSLgetAnnotations(o_40);
  p_40 = t;
  t = j_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_40 = ATgetFirst((ATermList) t);
      a_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_40;
  if(match_cons(t, sym__2))
    {
      y_40 = ATgetArgument(t, 0);
      z_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_40;
        if((y_40 != t))
          {
            _fail(t);
          }
        t = a_41;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        t = j_40;
        t = j_5(y_40, z_40, a_41, t);
      }
  }
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_40, s_40);
  b_4 = t;
  t = SSLsetAnnotations(b_4, p_40);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm p_42 = NULL;
  if(match_cons(t, sym__2))
    {
      p_42 = ATgetArgument(t, 0);
      if((p_42 != ATgetArgument(t, 1)))
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
  ATerm p_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_4, d_4, h_4, t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = p_13;
      {
        ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
        k_42 = t;
        if(match_cons(t, sym__2))
          {
            l_42 = ATgetArgument(t, 0);
            m_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_42;
        t = h_5(j_4, l_42, m_42, t);
      }
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm s_30 = NULL,z_30 = NULL;
  if(match_cons(t, sym__2))
    {
      s_30 = ATgetArgument(t, 0);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(q_4, s_30, z_30, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm a_31 = NULL;
  if(match_cons(t, sym__2))
    {
      a_31 = ATgetArgument(t, 0);
      if((a_31 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  if(match_cons(t, sym__2))
    {
      w_31 = ATgetArgument(t, 0);
      x_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(u_4, w_31, x_31, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm y_31 = NULL;
  if(match_cons(t, sym__2))
    {
      y_31 = ATgetArgument(t, 0);
      if((y_31 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm q_43 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_99(t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm u_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_42 = NULL,z_42 = NULL,q_29 = NULL,m_30 = NULL;
              s_42 = t;
              t = v_99(t);
              z_42 = t;
              t = s_42;
              {
                static ATerm l_4 (ATerm t)
                {
                  ATerm b_43 = NULL;
                  t = q_43(t);
                  b_43 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_43, z_42);
                  t = diff_0_0(t);
                  return(t);
                }
                t = w_99(l_4, q_43, m_4, t);
              }
              m_30 = t;
              t = SSL_explode_term(m_30);
              if(match_cons(t, sym__2))
                {
                  ATerm w_13 = ATgetArgument(t, 0);
                  q_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_29;
              t = foldr_3_0(n_4, o_4, _id, t);
              LocalPopChoice(v_13);
            }
          else
            {
              t = u_13;
              {
                ATerm g_31 = NULL,h_31 = NULL;
                h_31 = t;
                t = SSL_explode_term(h_31);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_13 = ATgetArgument(t, 0);
                    g_31 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_31;
                t = foldr_3_0(r_4, s_4, q_43, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_43(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm d_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_44);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            {
              ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_44 = ATgetArgument(t, 0);
                  g_44 = ATgetArgument(t, 1);
                  h_44 = ATgetArgument(t, 2);
                  i_44 = ATgetArgument(t, 3);
                  t = h_44;
                  t = map_1_0(x_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_44 = ATgetArgument(t, 0);
                      g_44 = ATgetArgument(t, 1);
                      h_44 = ATgetArgument(t, 2);
                      i_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_44;
                  t = map_1_0(y_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm c_45 = NULL;
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_45 = ATgetArgument(t, 0);
          {
            ATerm e_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_14);
      t = c_45;
    }
  else
    {
      t = c_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_45;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm s_45 = NULL;
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_45 = ATgetArgument(t, 0);
          {
            ATerm l_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_14);
      t = s_45;
    }
  else
    {
      t = j_14;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_43 = NULL,a_44 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_44 = ATgetArgument(t, 0);
      t = a_44;
      if(match_cons(t, sym_Rule_3))
        {
          w_43 = ATgetArgument(t, 0);
          {
            ATerm m_14 = ATgetArgument(t, 1);
          }
          {
            ATerm n_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_43;
      t = free_vars_3_0(v_4, w_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_44 = ATgetArgument(t, 0);
          {
            ATerm o_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_44;
    }
  return(t);
}
ATerm Var_1_0 (ATerm k_58 (ATerm), ATerm t)
{
  ATerm d_46 = NULL,f_46 = NULL,i_46 = NULL,k_46 = NULL,e_4 = NULL;
  k_46 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_46);
  d_46 = t;
  t = f_46;
  t = k_58(t);
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_46);
  e_4 = t;
  t = SSLsetAnnotations(e_4, d_46);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      {
        ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            a_47 = ATgetArgument(t, 0);
            b_47 = ATgetArgument(t, 1);
            c_47 = ATgetArgument(t, 2);
            d_47 = ATgetArgument(t, 3);
            t = c_47;
            t = map_1_0(a_5, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                a_47 = ATgetArgument(t, 0);
                b_47 = ATgetArgument(t, 1);
                c_47 = ATgetArgument(t, 2);
                d_47 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = c_47;
            t = map_1_0(c_5, t);
          }
      }
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm p_47 = NULL;
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_47 = ATgetArgument(t, 0);
          {
            ATerm u_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_14);
      t = p_47;
    }
  else
    {
      t = r_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_47;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm e_48 = NULL;
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_48 = ATgetArgument(t, 0);
          {
            ATerm z_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_14);
      t = e_48;
    }
  else
    {
      t = v_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_48;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm h_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,p_48 = NULL;
  h_48 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_48 = ATgetArgument(t, 0);
      l_48 = ATgetArgument(t, 1);
      t = h_48;
      t = b_5(k_48, l_48, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_48 = ATgetArgument(t, 0);
          l_48 = ATgetArgument(t, 1);
          m_48 = ATgetArgument(t, 2);
          t = l_48;
          t = map_1_0(m_5, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              k_48 = ATgetArgument(t, 0);
              l_48 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, k_48);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  k_48 = ATgetArgument(t, 0);
                  l_48 = ATgetArgument(t, 1);
                  m_48 = ATgetArgument(t, 2);
                  p_48 = ATgetArgument(t, 3);
                  t = l_48;
                  t = map_1_0(n_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_48 = ATgetArgument(t, 0);
                      l_48 = ATgetArgument(t, 1);
                      m_48 = ATgetArgument(t, 2);
                      p_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_48;
                  t = map_1_0(o_5, t);
                }
            }
        }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm y_48 = NULL;
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_48 = ATgetArgument(t, 0);
          {
            ATerm c_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_15);
      t = y_48;
    }
  else
    {
      t = a_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_48;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm l_49 = NULL;
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_49 = ATgetArgument(t, 0);
          {
            ATerm f_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_15);
      t = l_49;
    }
  else
    {
      t = d_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_49;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm u_49 = NULL;
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_49 = ATgetArgument(t, 0);
          {
            ATerm i_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_15);
      t = u_49;
    }
  else
    {
      t = g_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_49;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, z_4, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, k_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm u_5 (ATerm p_28, ATerm q_28, ATerm t)
{
  ATerm y_49 = NULL;
  t = SSL_fputc(p_28, q_28);
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_49);
  return(t);
}
static ATerm v_5 (ATerm j_27, ATerm k_27, ATerm t)
{
  ATerm z_49 = NULL;
  t = SSL_write_term_to_stream_text(j_27, k_27);
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_49);
  return(t);
}
static ATerm x_5 (ATerm h_86 (ATerm), ATerm j_185, ATerm n_27, ATerm t)
{
  ATerm a_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_185, term_k_15);
  t = a_6(t);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, n_27);
  t = h_86(t);
  t = fclose_0_0(t);
  t = n_27;
  return(t);
}
static ATerm w_5 (ATerm f_27, ATerm g_27, ATerm t)
{
  ATerm b_50 = NULL;
  t = SSL_write_term_to_stream_baf(f_27, g_27);
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_50);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(match_cons(l_15, sym_Stream_1))
        {
          g_50 = ATgetArgument(l_15, 0);
        }
      else
        _fail(t);
      h_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(g_50, h_50, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,m_50 = NULL,n_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_15 = ATgetArgument(t, 0);
      if(match_cons(n_15, sym_Stream_1))
        {
          m_50 = ATgetArgument(n_15, 0);
        }
      else
        _fail(t);
      n_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(m_50, n_50, t);
  i_50 = t;
  t = term_o_15;
  j_50 = t;
  t = i_50;
  if(match_cons(t, sym_Stream_1))
    {
      k_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_15, i_50);
  t = u_5(j_50, k_50, t);
  return(t);
}
ATerm output_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  t = u_102(t);
  d_50 = t;
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_15;
        t = get_config_0_0(t);
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        t = term_w_15;
      }
  }
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_50, d_50);
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_16;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, c_50, d_50);
        LocalPopChoice(y_15);
        if(match_cons(t, sym__2))
          {
            ATerm e_16 = ATgetArgument(t, 0);
            ATerm f_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(q_5, c_50, d_50, t);
      }
    else
      {
        t = x_15;
        if(match_cons(t, sym__2))
          {
            ATerm g_16 = ATgetArgument(t, 0);
            ATerm h_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(s_5, c_50, d_50, t);
      }
  }
  return(t);
}
static ATerm s_51 (ATerm a_51, ATerm t)
{
  t = SSL_fclose(a_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL;
  p_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_51 = ATgetArgument(t, 0);
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_51);
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            t = s_51(p_51, t);
          }
      }
    }
  else
    {
      t = s_51(p_51, t);
    }
  return(t);
}
static ATerm y_5 (ATerm l_27, ATerm t)
{
  t = SSL_read_term_from_stream(l_27);
  return(t);
}
static ATerm z_5 (ATerm r_28, ATerm s_28, ATerm t)
{
  ATerm t_51 = NULL;
  t = SSL_fopen(r_28, s_28);
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_51 = NULL;
  t = SSL_stdin_stream();
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_51 = NULL;
  t = SSL_stdout_stream();
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_51 = NULL;
  t = SSL_stderr_stream();
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_51);
  return(t);
}
static ATerm v_53 (ATerm g_52, ATerm t)
{
  ATerm h_52 = NULL;
  t = SSL_explode_term(g_52);
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_16 = ATgetArgument(t, 1);
        if(((ATgetType(l_16) == AT_LIST) && !(ATisEmpty(l_16))))
          {
            h_52 = ATgetFirst((ATermList) l_16);
            {
              ATerm m_16 = (ATerm) ATgetNext((ATermList) l_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_53 (ATerm k_52, ATerm l_52, ATerm m_52, ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,t_52 = NULL,i_4 = NULL;
  t = SSLgetAnnotations(m_52);
  q_52 = t;
  t = k_52;
  if(match_cons(t, sym_Path_1))
    {
      t_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_52, l_52);
  i_4 = t;
  t = SSLsetAnnotations(i_4, q_52);
  if(match_cons(t, sym__2))
    {
      o_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(o_52, p_52, t);
  return(t);
}
static ATerm x_53 (ATerm v_52, ATerm w_52, ATerm x_52, ATerm t)
{
  ATerm y_52 = NULL,b_53 = NULL,e_53 = NULL,h_53 = NULL,k_4 = NULL;
  t = SSLgetAnnotations(x_52);
  e_53 = t;
  t = SSL_is_string(v_52);
  h_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_53, w_52);
  k_4 = t;
  t = SSLsetAnnotations(k_4, e_53);
  if(match_cons(t, sym__2))
    {
      y_52 = ATgetArgument(t, 0);
      b_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(y_52, b_53, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm o_53 = NULL,r_53 = NULL,u_53 = NULL;
  o_53 = t;
  if(match_cons(t, sym__2))
    {
      r_53 = ATgetArgument(t, 0);
      u_53 = ATgetArgument(t, 1);
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_53(o_53, t);
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
            {
              ATerm r_16 = t;
              int t_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_53(r_53, u_53, o_53, t);
                  LocalPopChoice(t_16);
                }
              else
                {
                  t = r_16;
                  t = x_53(r_53, u_53, o_53, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_53(o_53, t);
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
  ATerm w_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_54 = NULL;
      g_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_54, term_c_17);
      t = a_6(t);
      LocalPopChoice(z_16);
    }
  else
    {
      t = w_16;
      t = debug_1_0(t_5, t);
      _fail(t);
    }
  b_54 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(c_54, t);
  a_54 = t;
  t = b_54;
  t = fclose_0_0(t);
  t = a_54;
  return(t);
}
ATerm input_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm d_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_17;
      t = get_config_0_0(t);
      LocalPopChoice(g_17);
    }
  else
    {
      t = d_17;
      t = term_k_17;
    }
  t = ReadFromFile_0_0(t);
  t = v_102(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,n_54 = NULL,o_54 = NULL,u_54 = NULL;
  k_54 = t;
  t = term_n_17;
  t = whoami_0_0(t);
  l_54 = t;
  t = term_p_17;
  o_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_17), l_54), term_q_17);
  u_54 = t;
  t = SSL_printnl(o_54, u_54);
  t = term_w_17;
  n_54 = t;
  t = SSL_exit(n_54);
  t = k_54;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm w_54 = NULL;
  w_54 = t;
  if(match_string(t, "-k"))
    {
      t = w_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_54;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
  x_54 = t;
  t = SSL_string_to_int(x_54);
  y_54 = t;
  t = term_x_17;
  z_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_17, y_54);
  t = i_6(z_54, y_54, t);
  t = x_54;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_6, j_6, l_6, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm b_55 = NULL;
  b_55 = t;
  if(match_string(t, "-S"))
    {
      t = b_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_55;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL;
  t = term_a_18;
  c_55 = t;
  t = term_b_18;
  d_55 = t;
  t = term_c_18;
  t = i_6(c_55, d_55, t);
  t = term_f_18;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_s_18;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
  e_55 = t;
  t = SSL_string_to_int(e_55);
  f_55 = t;
  t = term_a_18;
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_18, f_55);
  t = i_6(g_55, f_55, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_55);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_t_18;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL;
  t = term_u_18;
  h_55 = t;
  t = term_n_17;
  i_55 = t;
  t = term_v_18;
  t = i_6(h_55, i_55, t);
  t = term_w_18;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_18 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_6, n_6, o_6, t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = z_18;
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_6, s_6, u_6, t);
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = Option_3_0(w_6, x_6, a_7, t);
          }
      }
    }
  return(t);
}
static ATerm i_6 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm j_55 = NULL;
  t = term_e_19;
  j_55 = t;
  t = SSL_table_put(j_55, k_32, l_32);
  t = (ATerm) ATmakeAppl(sym__3, term_e_19, k_32, l_32);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
      t = term_n_17;
      t = i_0(t);
      o_55 = t;
      t = term_h_19;
      p_55 = t;
      t = term_i_19;
      q_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_19, term_i_19, o_55);
      t = g_6(p_55, q_55, o_55, t);
      _fail(t);
    }
  else
    {
      ATerm t_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_55 = ATgetFirst((ATermList) t);
          n_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_55;
      t = d_0(t);
      t = term_n_17;
      t = g_0(t);
      t_55 = t;
      t = (ATerm) ATinsert(CheckATermList(n_55), t_55);
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm v_55 = NULL;
  v_55 = t;
  if(match_string(t, "-o"))
    {
      t = v_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_55;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL;
  w_55 = t;
  t = term_v_15;
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_15, w_55);
  t = i_6(x_55, w_55, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_55);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_7, f_7, i_7, t);
  return(t);
}
static ATerm g_6 (ATerm d_37, ATerm e_37, ATerm c_37, ATerm t)
{
  ATerm z_55 = NULL,c_56 = NULL,d_56 = NULL;
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_37, e_37);
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_19 = ATgetArgument(t, 0);
            ATerm n_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_37, e_37);
        t = f_6(d_37, e_37, t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = (ATerm) ATempty;
      }
  }
  c_56 = t;
  t = (ATerm) ATinsert(CheckATermList(c_56), c_37);
  d_56 = t;
  t = SSL_table_put(d_37, e_37, d_56);
  t = z_55;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
      t = term_n_17;
      t = p_0(t);
      o_56 = t;
      t = term_h_19;
      p_56 = t;
      t = term_i_19;
      q_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_19, term_i_19, o_56);
      t = g_6(p_56, q_56, o_56, t);
      _fail(t);
    }
  else
    {
      ATerm u_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_56 = ATgetFirst((ATermList) t);
          l_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_56 = ATgetFirst((ATermList) t);
          n_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_56;
      t = n_0(t);
      t = m_56;
      t = o_0(t);
      u_56 = t;
      t = (ATerm) ATinsert(CheckATermList(n_56), u_56);
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm w_56 = NULL;
  w_56 = t;
  if(match_string(t, "-i"))
    {
      t = w_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_56;
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL;
  x_56 = t;
  t = term_h_17;
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_17, x_56);
  t = i_6(y_56, x_56, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_56);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_7, k_7, l_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_17;
  t = whoami_0_0(t);
  z_56 = t;
  t = term_p_17;
  b_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_19), z_56);
  c_57 = t;
  t = SSL_printnl(b_57, c_57);
  t = term_w_17;
  a_57 = t;
  t = SSL_exit(a_57);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_19;
  t = get_config_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_35, i_35);
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
      t = SSL_addr(h_35, i_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
  e_57 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_57;
      t = b_96(t);
    }
  else
    {
      ATerm j_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_57 = ATgetFirst((ATermList) t);
          g_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_57;
      t = foldr_2_0(b_96, c_96, t);
      j_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_57, j_57);
      t = c_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_b_18;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(n_33, o_33, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_57 = NULL,v_32 = NULL,w_32 = NULL;
  t = times_0_0(t);
  w_32 = t;
  t = SSL_explode_term(w_32);
  if(match_cons(t, sym__2))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      v_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_32;
  t = foldr_2_0(m_7, n_7, t);
  m_57 = t;
  t = SSL_TicksToSeconds(m_57);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
  x_57 = t;
  if(match_cons(t, sym__2))
    {
      y_57 = ATgetArgument(t, 0);
      z_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_57;
        if((y_57 != t))
          {
            _fail(t);
          }
        t = x_57;
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = (ATerm) ATmakeAppl(sym__2, y_57, z_57);
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_57, z_57);
              LocalPopChoice(x_19);
            }
          else
            {
              t = w_19;
              t = SSL_gtr(y_57, z_57);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_57, z_57);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm d_58 = NULL;
  d_58 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_58 = NULL;
        t = term_a_18;
        t = get_config_0_0(t);
        f_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_58, term_w_17);
        t = geq_0_0(t);
        t = d_58;
        t = x_87(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = d_58;
      }
  }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,l_58 = NULL,m_58 = NULL;
  t = run_time_0_0(t);
  h_58 = t;
  t = term_n_17;
  t = whoami_0_0(t);
  i_58 = t;
  t = term_p_17;
  l_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_20), h_58), term_a_20), i_58);
  m_58 = t;
  t = SSL_printnl(l_58, m_58);
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_20), h_58), term_a_20), i_58));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_18;
  n_58 = t;
  t = SSL_exit(n_58);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL;
  w_58 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_58;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_58 = ATgetArgument(t, 0);
          {
            ATerm p_35 = NULL,p_4 = NULL;
            t = SSLgetAnnotations(w_58);
            p_35 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_58);
            p_4 = t;
            t = SSLsetAnnotations(p_4, p_35);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_58;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_20;
      t = get_config_0_0(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      t = fetch_1_0(p_7, t);
    }
  t = l_102(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_58 = ATgetFirst((ATermList) t);
      a_59 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_59 = NULL,f_59 = NULL;
        static ATerm q_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_59)), not_null(f_59));
          return(t);
        }
        t = a_59;
        t = l_0(t);
        if(((e_59 != NULL) && (e_59 != t)))
          _fail(t);
        else
          e_59 = t;
        t = z_58;
        t = k_0(t);
        if(((f_59 != NULL) && (f_59 != t)))
          _fail(t);
        else
          f_59 = t;
        t = a_59;
        t = reverse_acc_2_0(k_0, q_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_17;
      t = l_0(t);
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,t_4 = NULL;
  l_59 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_59);
  j_59 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_59);
  t_4 = t;
  t = SSLsetAnnotations(t_4, j_59);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm n_59 = NULL;
  n_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_59), term_k_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL;
  ATerm n_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_19;
      t = get_config_0_0(t);
      LocalPopChoice(p_20);
    }
  else
    {
      t = n_20;
      t = fetch_1_0(r_7, t);
    }
  t = term_t_20;
  t = echo_0_0(t);
  t = term_h_19;
  h_59 = t;
  t = term_i_19;
  i_59 = t;
  t = term_u_20;
  t = f_6(h_59, i_59, t);
  t = reverse_acc_2_0(_id, s_7, t);
  t = map_1_0(t_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  static ATerm k_60 (ATerm t)
  {
    ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
    h_60 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_60 = ATgetFirst((ATermList) t);
        j_60 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_20 = t;
      int x_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_36 = NULL,i_37 = NULL,d_5 = NULL;
          t = SSLgetAnnotations(h_60);
          v_36 = t;
          t = i_60;
          t = k_91(t);
          i_37 = t;
          t = (ATerm) ATinsert(CheckATermList(j_60), i_37);
          d_5 = t;
          t = SSLsetAnnotations(d_5, v_36);
          LocalPopChoice(x_20);
        }
      else
        {
          t = w_20;
          {
            ATerm d_38 = NULL,j_39 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(h_60);
            d_38 = t;
            t = j_60;
            t = k_60(t);
            j_39 = t;
            t = (ATerm) ATinsert(CheckATermList(j_39), i_60);
            e_5 = t;
            t = SSLsetAnnotations(e_5, d_38);
          }
        }
    }
    return(t);
  }
  t = k_60(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
  o_60 = t;
  {
    ATerm b_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_60;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_21 = ATgetFirst((ATermList) t);
                ATerm g_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_60;
          }
        LocalPopChoice(d_21);
      }
    else
      {
        t = b_21;
        t = (ATerm) ATinsert(ATempty, o_60);
      }
  }
  p_60 = t;
  t = term_w_15;
  q_60 = t;
  t = SSL_printnl(q_60, p_60);
  t = o_60;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_6 (ATerm o_50, ATerm p_50, ATerm t)
{
  t = SSL_strcat(o_50, p_50);
  return(t);
}
ATerm debug_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL;
  u_60 = t;
  t = f_86(t);
  v_60 = t;
  t = term_p_17;
  w_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_60), v_60);
  x_60 = t;
  t = SSL_printnl(w_60, x_60);
  t = u_60;
  return(t);
}
ATerm map_1_0 (ATerm a_91 (ATerm), ATerm t)
{
  static ATerm m_61 (ATerm t)
  {
    ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL;
    j_61 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_61;
      }
    else
      {
        ATerm t_39 = NULL,w_39 = NULL,x_39 = NULL,r_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_61 = ATgetFirst((ATermList) t);
            l_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_61);
        t_39 = t;
        t = k_61;
        t = a_91(t);
        w_39 = t;
        t = l_61;
        t = m_61(t);
        x_39 = t;
        t = (ATerm) ATinsert(CheckATermList(x_39), w_39);
        r_5 = t;
        t = SSLsetAnnotations(r_5, t_39);
      }
    return(t);
  }
  t = m_61(t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_61 = NULL;
      v_61 = t;
      t = SSL_is_string(v_61);
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_7, t);
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            {
              ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
              b_62 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_62 = ATgetArgument(t, 0);
                  t = c_62;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_62 = ATgetArgument(t, 0);
                      t = c_62;
                      {
                        ATerm v_21 = t;
                        int w_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(w_21);
                          }
                        else
                          {
                            t = v_21;
                            t = debug_1_0(v_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_62 = NULL,i_62 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_62 = ATgetArgument(t, 0);
                          d_62 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_62;
                      t = eval_config_0_0(t);
                      h_62 = t;
                      t = d_62;
                      t = eval_config_0_0(t);
                      i_62 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_62, i_62);
                      t = e_6(h_62, i_62, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_6 (ATerm u_38, ATerm v_38, ATerm t)
{
  t = SSL_table_get(u_38, v_38);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL;
  m_62 = t;
  t = term_e_19;
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_19, m_62);
  t = f_6(n_62, m_62, t);
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_62 = NULL,p_62 = NULL;
        t = eval_config_0_0(t);
        o_62 = t;
        t = term_e_19;
        p_62 = t;
        t = SSL_table_put(p_62, m_62, o_62);
        t = o_62;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
      }
  }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL;
  t = term_z_21;
  s_62 = t;
  t = term_n_17;
  t_62 = t;
  t = term_a_22;
  t = i_6(s_62, t_62, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL;
  t = term_z_21;
  w_62 = t;
  t = term_n_17;
  x_62 = t;
  t = term_a_22;
  t = i_6(w_62, x_62, t);
  t = term_c_22;
  u_62 = t;
  t = term_n_17;
  v_62 = t;
  t = term_e_22;
  t = i_6(u_62, v_62, t);
  t = term_f_22;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_7, x_7, y_7, t);
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      t = Option_3_0(z_7, a_8, b_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_64 (ATerm), ATerm y_64 (ATerm), ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,c_6 = NULL;
  d_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_62 = ATgetFirst((ATermList) t);
      a_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_63);
  y_62 = t;
  t = z_62;
  t = x_64(t);
  b_63 = t;
  t = a_63;
  t = y_64(t);
  c_63 = t;
  t = (ATerm) ATinsert(CheckATermList(c_63), b_63);
  c_6 = t;
  t = SSLsetAnnotations(c_6, y_62);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,n_63 = NULL,o_63 = NULL,h_6 = NULL;
  i_63 = t;
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_22;
        t = j_104(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
      }
  }
  t = i_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_63 = ATgetFirst((ATermList) t);
      l_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_63);
  j_63 = t;
  t = term_q_19;
  o_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_19, k_63);
  t = i_6(o_63, k_63, t);
  t = l_63;
  {
    static ATerm y_63 (ATerm t)
    {
      ATerm o_22 = t;
      int p_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_63 = NULL;
              r_63 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_63;
              LocalPopChoice(r_22);
            }
          else
            {
              t = q_22;
              t = j_104(t);
              t = Cons_2_0(_id, y_63, t);
            }
          LocalPopChoice(p_22);
        }
      else
        {
          t = o_22;
          {
            ATerm u_63 = NULL,v_63 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_63 = ATgetFirst((ATermList) t);
                v_63 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_63), (ATerm) ATmakeAppl(sym_Undefined_1, u_63));
          }
        }
      return(t);
    }
    t = y_63(t);
  }
  n_63 = t;
  t = (ATerm) ATinsert(CheckATermList(n_63), (ATerm) ATmakeAppl(sym_Program_1, k_63));
  h_6 = t;
  t = SSLsetAnnotations(h_6, j_63);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm k_64 = NULL;
  k_64 = t;
  if(match_string(t, "--help"))
    {
      t = k_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_64;
        }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL;
  t = term_j_20;
  l_64 = t;
  t = term_n_17;
  m_64 = t;
  t = term_s_22;
  t = i_6(l_64, m_64, t);
  t = term_t_22;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_u_22;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL;
  f_64 = t;
  t = term_h_19;
  h_64 = t;
  t = term_i_19;
  i_64 = t;
  t = (ATerm) ATempty;
  j_64 = t;
  t = SSL_table_put(h_64, i_64, j_64);
  t = f_64;
  {
    static ATerm c_8 (ATerm t)
    {
      ATerm v_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_104(t);
          LocalPopChoice(w_22);
        }
      else
        {
          t = v_22;
          {
            ATerm x_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_8, e_8, f_8, t);
                LocalPopChoice(y_22);
              }
            else
              {
                t = x_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_8, t);
  }
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_64 = NULL;
        t_64 = t;
        {
          ATerm b_23 = t;
          int c_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_41 = NULL;
              t = t_64;
              {
                ATerm e_23 = t;
                int f_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_j_20;
                    t = get_config_0_0(t);
                    LocalPopChoice(f_23);
                  }
                else
                  {
                    t = e_23;
                    t = fetch_1_0(g_8, t);
                  }
              }
              t = t_64;
              t = default_system_usage_0_0(t);
              t = term_b_18;
              e_41 = t;
              t = SSL_exit(e_41);
              LocalPopChoice(c_23);
            }
          else
            {
              t = b_23;
              {
                ATerm t_41 = NULL;
                t = term_z_21;
                t = get_config_0_0(t);
                t = t_64;
                t = default_system_about_0_0(t);
                t = term_b_18;
                t_41 = t;
                t = SSL_exit(t_41);
              }
            }
        }
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        {
          ATerm g_23 = t;
          int h_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL;
              static ATerm h_8 (ATerm t)
              {
                ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,k_6 = NULL;
                b_65 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_65);
                z_64 = t;
                t = a_65;
                if(((d_64 != NULL) && (d_64 != t)))
                  _fail(t);
                else
                  d_64 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_65);
                k_6 = t;
                t = SSLsetAnnotations(k_6, z_64);
                return(t);
              }
              t = fetch_1_0(h_8, t);
              t = term_p_17;
              v_64 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_64)), term_i_23);
              w_64 = t;
              t = SSL_printnl(v_64, w_64);
              t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_64)), term_i_23));
              t = default_system_usage_0_0(t);
              t = term_w_17;
              u_64 = t;
              t = SSL_exit(u_64);
              LocalPopChoice(h_23);
            }
          else
            {
              t = g_23;
            }
        }
      }
  }
  e_64 = t;
  t = term_h_19;
  g_64 = t;
  t = SSL_table_destroy(g_64);
  t = e_64;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
  t = parse_options_1_0(n_102, t);
  g_65 = t;
  t = term_j_23;
  j_65 = t;
  t = SSL_table_create(j_65);
  t = term_j_23;
  h_65 = t;
  t = term_k_23;
  i_65 = t;
  t = SSL_table_put(h_65, i_65, g_65);
  t = g_65;
  t = p_102(t);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_102, t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          ATerm n_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_102(t);
              t = report_success_0_0(t);
              LocalPopChoice(o_23);
            }
          else
            {
              t = n_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            {
              ATerm t_23 = t;
              int u_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_8, m_8, n_8, t);
                  LocalPopChoice(u_23);
                }
              else
                {
                  t = t_23;
                  {
                    ATerm z_23 = t;
                    int a_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(a_24);
                      }
                    else
                      {
                        t = z_23;
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
static ATerm j_8 (ATerm t)
{
  t = input_1_0(o_8, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL;
  t = term_a_16;
  l_65 = t;
  t = term_n_17;
  m_65 = t;
  t = term_b_24;
  t = i_6(l_65, m_65, t);
  t = term_c_24;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_d_24;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = output_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(i_8, default_usage_0_0, _id, j_8, t);
  return(t);
}
