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
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
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
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
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
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_w_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_y_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_d_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_k_19;
ATerm term_g_19;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_j_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_p_19);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_z_20);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_h_23, term_p_19);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym__2, term_n_23, term_p_19);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_p_19);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_b_18, term_p_19);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm spaste_1_0 (ATerm b_79 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm d_5 (ATerm c_21, ATerm b_21, ATerm t);
ATerm SVar_1_0 (ATerm t_62 (ATerm), ATerm t);
static ATerm n_5 (ATerm h_99 (ATerm), ATerm i_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_45, ATerm p_45, ATerm o_45, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm r_5 (ATerm b_99 (ATerm), ATerm c_99 (ATerm (ATerm), ATerm), ATerm i_45, ATerm l_45, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm p_99 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm w_98 (ATerm (ATerm), ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_98 (ATerm (ATerm), ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm tpaste_1_0 (ATerm x_78 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm t);
static ATerm q_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm h_5 (ATerm s_94 (ATerm), ATerm j_42, ATerm i_42, ATerm t);
ATerm foldr_3_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm t);
static ATerm i_5 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm n_42, ATerm m_42, ATerm t);
static ATerm j_5 (ATerm n_94 (ATerm), ATerm h_42, ATerm g_42, ATerm t);
ATerm at_end_1_0 (ATerm v_92 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_43 (ATerm a_43, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm l_5 (ATerm y_573, ATerm d_574, ATerm q_55, ATerm t);
ATerm while_not_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t);
ATerm for_3_0 (ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm s_47 (ATerm d_46, ATerm e_46, ATerm f_46, ATerm t);
static ATerm u_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm free_vars_3_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm i_59 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm w_5 (ATerm s_28, ATerm t_28, ATerm t);
static ATerm x_5 (ATerm n_27, ATerm o_27, ATerm t);
static ATerm z_5 (ATerm h_87 (ATerm), ATerm c_188, ATerm r_27, ATerm t);
static ATerm y_5 (ATerm j_27, ATerm k_27, ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm output_1_0 (ATerm z_103 (ATerm), ATerm t);
static ATerm g_56 (ATerm a_56, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_6 (ATerm p_27, ATerm t);
static ATerm b_6 (ATerm u_28, ATerm v_28, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_58 (ATerm d_57, ATerm t);
static ATerm n_58 (ATerm j_57, ATerm k_57, ATerm l_57, ATerm t);
static ATerm o_58 (ATerm z_57, ATerm a_58, ATerm b_58, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm a_104 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_6 (ATerm m_32, ATerm n_32, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_6 (ATerm b_38, ATerm c_38, ATerm a_38, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_6 (ATerm j_35, ATerm k_35, ATerm t);
ATerm foldr_2_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_88 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm need_help_1_0 (ATerm q_103 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_92 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm g_6 (ATerm m_51, ATerm n_51, ATerm t);
ATerm debug_1_0 (ATerm f_87 (ATerm), ATerm t);
ATerm map_1_0 (ATerm f_92 (ATerm), ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm h_6 (ATerm s_39, ATerm t_39, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm x_65 (ATerm), ATerm y_65 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_105 (ATerm), ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm parse_options_1_0 (ATerm n_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
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
      ATerm a_9 = ATgetArgument(t, 0);
      if(((ATgetType(a_9) != AT_LIST) || !(ATisEmpty(a_9))))
        _fail(t);
      {
        ATerm b_9 = ATgetArgument(t, 1);
        if(((ATgetType(b_9) != AT_LIST) || !(ATisEmpty(b_9))))
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
      ATerm c_9 = ATgetArgument(t, 0);
      if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
        {
          r_0 = ATgetFirst((ATermList) c_9);
          s_0 = (ATerm) ATgetNext((ATermList) c_9);
        }
      else
        _fail(t);
      {
        ATerm d_9 = ATgetArgument(t, 1);
        if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
          {
            t_0 = ATgetFirst((ATermList) d_9);
            u_0 = (ATerm) ATgetNext((ATermList) d_9);
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
  ATerm y_0 = NULL,a_1 = NULL,b_1 = NULL,f_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      y_0 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_0;
  {
    ATerm e_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm h_9 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(g_9);
        t = (ATerm) ATmakeAppl(sym_SDef_3, p_1, a_1, b_1);
      }
    else
      {
        t = e_9;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm l_9 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
            f_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_1, a_1, b_1, f_1);
      }
  }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_9 = ATgetArgument(t, 0);
      if(((ATgetType(n_9) != AT_LIST) || !(ATisEmpty(n_9))))
        _fail(t);
      {
        ATerm p_9 = ATgetArgument(t, 1);
        if(((ATgetType(p_9) != AT_LIST) || !(ATisEmpty(p_9))))
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
  ATerm d_3 = NULL,k_3 = NULL,m_3 = NULL,o_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_9 = ATgetArgument(t, 0);
      if(((ATgetType(q_9) == AT_LIST) && !(ATisEmpty(q_9))))
        {
          d_3 = ATgetFirst((ATermList) q_9);
          k_3 = (ATerm) ATgetNext((ATermList) q_9);
        }
      else
        _fail(t);
      {
        ATerm s_9 = ATgetArgument(t, 1);
        if(((ATgetType(s_9) == AT_LIST) && !(ATisEmpty(s_9))))
          {
            m_3 = ATgetFirst((ATermList) s_9);
            o_3 = (ATerm) ATgetNext((ATermList) s_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_3, m_3), (ATerm) ATmakeAppl(sym__2, k_3, o_3));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_3), u_3);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm z_3 = NULL,h_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  {
    ATerm u_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_9);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_4);
      }
    else
      {
        t = u_9;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_9 = ATgetArgument(t, 0);
            h_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_4, h_4);
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      if(((ATgetType(a_10) != AT_LIST) || !(ATisEmpty(a_10))))
        _fail(t);
      {
        ATerm g_10 = ATgetArgument(t, 1);
        if(((ATgetType(g_10) != AT_LIST) || !(ATisEmpty(g_10))))
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
  ATerm v_6 = NULL,x_6 = NULL,a_7 = NULL,b_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(((ATgetType(h_10) == AT_LIST) && !(ATisEmpty(h_10))))
        {
          v_6 = ATgetFirst((ATermList) h_10);
          x_6 = (ATerm) ATgetNext((ATermList) h_10);
        }
      else
        _fail(t);
      {
        ATerm i_10 = ATgetArgument(t, 1);
        if(((ATgetType(i_10) == AT_LIST) && !(ATisEmpty(i_10))))
          {
            a_7 = ATgetFirst((ATermList) i_10);
            b_7 = (ATerm) ATgetNext((ATermList) i_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_6, a_7), (ATerm) ATmakeAppl(sym__2, x_6, b_7));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_7), d_7);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm g_7 = NULL,i_7 = NULL,j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7;
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_7);
      }
    else
      {
        t = j_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_10 = ATgetArgument(t, 0);
            i_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_7, i_7);
      }
  }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      if(((ATgetType(n_10) != AT_LIST) || !(ATisEmpty(n_10))))
        _fail(t);
      {
        ATerm o_10 = ATgetArgument(t, 1);
        if(((ATgetType(o_10) != AT_LIST) || !(ATisEmpty(o_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
        {
          i_9 = ATgetFirst((ATermList) p_10);
          j_9 = (ATerm) ATgetNext((ATermList) p_10);
        }
      else
        _fail(t);
      {
        ATerm q_10 = ATgetArgument(t, 1);
        if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
          {
            k_9 = ATgetFirst((ATermList) q_10);
            m_9 = (ATerm) ATgetNext((ATermList) q_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_9, k_9), (ATerm) ATmakeAppl(sym__2, j_9, m_9));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm o_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      o_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_9), o_9);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm t_9 = NULL,v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_9);
      }
    else
      {
        t = r_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_10 = ATgetArgument(t, 0);
            v_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_9, v_9);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
      {
        ATerm e_0 = NULL,j_0 = NULL,m_0 = NULL,c_1 = NULL;
        t = SSLgetAnnotations(d_10);
        e_0 = t;
        t = e_10;
        t = b_79(t);
        m_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, m_0);
        t = genzip_4_0(a_0, b_0, c_0, f_0, t);
        j_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_0, f_10);
        c_1 = t;
        t = SSLsetAnnotations(c_1, e_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_10 = ATgetArgument(t, 0);
          f_10 = ATgetArgument(t, 1);
          b_10 = ATgetArgument(t, 2);
          {
            ATerm k_2 = NULL,u_2 = NULL,w_2 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(d_10);
            k_2 = t;
            t = f_10;
            t = b_79(t);
            w_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_10, w_2);
            t = genzip_4_0(h_0, q_0, x_0, z_0, t);
            u_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, e_10, u_2, b_10);
            d_1 = t;
            t = SSLsetAnnotations(d_1, k_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              e_10 = ATgetArgument(t, 0);
              f_10 = ATgetArgument(t, 1);
              b_10 = ATgetArgument(t, 2);
              c_10 = ATgetArgument(t, 3);
              {
                ATerm k_5 = NULL,s_6 = NULL,t_6 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(d_10);
                k_5 = t;
                t = f_10;
                t = b_79(t);
                t_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_10, t_6);
                t = genzip_4_0(i_1, j_1, k_1, l_1, t);
                s_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, e_10, s_6, b_10, c_10);
                e_1 = t;
                t = SSLsetAnnotations(e_1, k_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  e_10 = ATgetArgument(t, 0);
                  f_10 = ATgetArgument(t, 1);
                  b_10 = ATgetArgument(t, 2);
                  c_10 = ATgetArgument(t, 3);
                  {
                    ATerm m_8 = NULL,z_8 = NULL,f_9 = NULL,g_1 = NULL;
                    t = SSLgetAnnotations(d_10);
                    m_8 = t;
                    t = f_10;
                    t = b_79(t);
                    f_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_10, f_9);
                    t = genzip_4_0(m_1, r_1, t_1, u_1, t);
                    z_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, e_10, z_8, b_10, c_10);
                    g_1 = t;
                    t = SSLsetAnnotations(g_1, m_8);
                  }
                }
              else
                {
                  ATerm v_10 = NULL,y_10 = NULL,h_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      e_10 = ATgetArgument(t, 0);
                      f_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_10);
                  v_10 = t;
                  t = e_10;
                  t = b_79(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_10 = ATgetFirst((ATermList) t);
                      {
                        ATerm w_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, y_10, f_10);
                  h_1 = t;
                  t = SSLsetAnnotations(h_1, v_10);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,j_15 = NULL,o_15 = NULL,t_15 = NULL,y_15 = NULL;
  o_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
      {
        ATerm o_11 = NULL,x_11 = NULL,y_11 = NULL,n_1 = NULL;
        t = SSLgetAnnotations(o_15);
        o_11 = t;
        t = t_15;
        t = c_79(t);
        x_11 = t;
        t = y_15;
        t = c_79(t);
        y_11 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_11, y_11);
        n_1 = t;
        t = SSLsetAnnotations(n_1, o_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_15 = ATgetArgument(t, 0);
          y_15 = ATgetArgument(t, 1);
          y_14 = ATgetArgument(t, 2);
          {
            ATerm s_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(o_15);
            s_12 = t;
            t = t_15;
            t = e_79(t);
            z_12 = t;
            t = y_15;
            t = e_79(t);
            a_13 = t;
            t = y_14;
            t = c_79(t);
            b_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, z_12, a_13, b_13);
            o_1 = t;
            t = SSLsetAnnotations(o_1, s_12);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              t_15 = ATgetArgument(t, 0);
              y_15 = ATgetArgument(t, 1);
              y_14 = ATgetArgument(t, 2);
              j_15 = ATgetArgument(t, 3);
              {
                ATerm s_13 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(o_15);
                s_13 = t;
                t = t_15;
                t = e_79(t);
                h_14 = t;
                t = y_15;
                t = e_79(t);
                i_14 = t;
                t = y_14;
                t = e_79(t);
                j_14 = t;
                t = j_15;
                t = c_79(t);
                k_14 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, h_14, i_14, j_14, k_14);
                q_1 = t;
                t = SSLsetAnnotations(q_1, s_13);
              }
            }
          else
            {
              ATerm v_14 = NULL,z_14 = NULL,a_15 = NULL,s_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  t_15 = ATgetArgument(t, 0);
                  y_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_15);
              v_14 = t;
              t = t_15;
              t = e_79(t);
              z_14 = t;
              t = y_15;
              t = c_79(t);
              a_15 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, z_14, a_15);
              s_1 = t;
              t = SSLsetAnnotations(s_1, v_14);
            }
        }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm j_16 = NULL;
  ATerm x_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_16 = ATgetArgument(t, 0);
          {
            ATerm a_11 = ATgetArgument(t, 1);
          }
          {
            ATerm b_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_10);
      t = j_16;
    }
  else
    {
      t = x_10;
      if(match_cons(t, sym_SDefT_4))
        {
          j_16 = ATgetArgument(t, 0);
          {
            ATerm c_11 = ATgetArgument(t, 1);
          }
          {
            ATerm d_11 = ATgetArgument(t, 2);
          }
          {
            ATerm e_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = j_16;
    }
  return(t);
}
static ATerm d_5 (ATerm c_21, ATerm b_21, ATerm t)
{
  t = c_21;
  t = map_1_0(v_1, t);
  return(t);
}
ATerm SVar_1_0 (ATerm t_62 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,m_2 = NULL;
  t_16 = t;
  if(match_cons(t, sym_SVar_1))
    {
      r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  p_16 = t;
  t = r_16;
  t = t_62(t);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, s_16);
  m_2 = t;
  t = SSLsetAnnotations(m_2, p_16);
  return(t);
}
static ATerm n_5 (ATerm h_99 (ATerm), ATerm i_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_45, ATerm p_45, ATerm o_45, ATerm t)
{
  static ATerm w_1 (ATerm t)
  {
    ATerm v_16 = NULL;
    v_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_16, o_45);
    t = h_99(t);
    return(t);
  }
  static ATerm x_1 (ATerm t)
  {
    ATerm a_17 = NULL;
    a_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_17, p_45);
    t = h_99(t);
    return(t);
  }
  t = q_45;
  t = i_99(w_1, x_1, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm y_1 (ATerm t)
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
static ATerm z_1 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if(((ATgetType(h_11) == AT_LIST) && !(ATisEmpty(h_11))))
        {
          l_17 = ATgetFirst((ATermList) h_11);
          m_17 = (ATerm) ATgetNext((ATermList) h_11);
        }
      else
        _fail(t);
      {
        ATerm i_11 = ATgetArgument(t, 1);
        if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
          {
            n_17 = ATgetFirst((ATermList) i_11);
            o_17 = (ATerm) ATgetNext((ATermList) i_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_17, n_17), (ATerm) ATmakeAppl(sym__2, m_17, o_17));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm q_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_17), q_17);
  return(t);
}
static ATerm r_5 (ATerm b_99 (ATerm), ATerm c_99 (ATerm (ATerm), ATerm), ATerm i_45, ATerm l_45, ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,k_17 = NULL;
  t = i_45;
  t = b_99(t);
  d_17 = t;
  t = map_1_0(new_0_0, t);
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_17, e_17);
  t = genzip_4_0(y_1, z_1, a_2, _id, t);
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_17, l_45);
  t = conc_0_0(t);
  f_17 = t;
  t = i_45;
  {
    static ATerm b_2 (ATerm t)
    {
      t = e_17;
      return(t);
    }
    t = c_99(b_2, t);
  }
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_17, l_45, f_17);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm e_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  k_18 = t;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_18 = ATgetFirst((ATermList) t);
      o_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_18;
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_18;
            if((l_18 != t))
              {
                _fail(t);
              }
            t = j_18;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = (ATerm) ATmakeAppl(sym__2, l_18, o_18);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_18, o_18);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  static ATerm f_20 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_99(t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        {
          ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
          static ATerm c_2 (ATerm t)
          {
            ATerm l_15 = NULL;
            l_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_15, not_null(e_20));
            t = f_20(t);
            return(t);
          }
          c_20 = t;
          if(match_cons(t, sym__2))
            {
              d_20 = ATgetArgument(t, 0);
              if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                e_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_20;
          t = SRTS_all(c_2, t);
        }
      }
    return(t);
  }
  t = f_20(t);
  return(t);
}
ATerm rename_4_0 (ATerm w_98 (ATerm (ATerm), ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_98 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm n_20 = NULL;
  static ATerm x_21 (ATerm t)
  {
    static ATerm d_2 (ATerm t)
    {
      ATerm f_21 = NULL,o_21 = NULL,p_21 = NULL;
      f_21 = t;
      if(match_cons(t, sym__2))
        {
          o_21 = ATgetArgument(t, 0);
          p_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm n_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_2 (ATerm t)
            {
              ATerm v_21 = NULL;
              v_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_21, p_21);
              t = lookup_0_0(t);
              return(t);
            }
            t = o_21;
            t = w_98(e_2, t);
            LocalPopChoice(p_11);
          }
        else
          {
            t = n_11;
            {
              ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
              t = f_21;
              t = r_5(x_98, z_98, o_21, p_21, t);
              if(match_cons(t, sym__3))
                {
                  u_15 = ATgetArgument(t, 0);
                  v_15 = ATgetArgument(t, 1);
                  w_15 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_5(x_21, y_98, u_15, v_15, w_15, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(d_2, t);
    return(t);
  }
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_20, (ATerm) ATempty);
  t = x_21(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_11 = ATgetArgument(t, 0);
      if(((ATgetType(q_11) != AT_LIST) || !(ATisEmpty(q_11))))
        _fail(t);
      {
        ATerm r_11 = ATgetArgument(t, 1);
        if(((ATgetType(r_11) != AT_LIST) || !(ATisEmpty(r_11))))
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
  ATerm h_18 = NULL,i_18 = NULL,s_18 = NULL,t_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      if(((ATgetType(s_11) == AT_LIST) && !(ATisEmpty(s_11))))
        {
          h_18 = ATgetFirst((ATermList) s_11);
          i_18 = (ATerm) ATgetNext((ATermList) s_11);
        }
      else
        _fail(t);
      {
        ATerm t_11 = ATgetArgument(t, 1);
        if(((ATgetType(t_11) == AT_LIST) && !(ATisEmpty(t_11))))
          {
            s_18 = ATgetFirst((ATermList) t_11);
            t_18 = (ATerm) ATgetNext((ATermList) t_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_18, s_18), (ATerm) ATmakeAppl(sym__2, i_18, t_18));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm z_18 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_19), z_18);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm d_19 = NULL,f_19 = NULL,h_19 = NULL;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_19);
      }
    else
      {
        t = u_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_11 = ATgetArgument(t, 0);
            f_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_19, f_19);
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      if(((ATgetType(a_12) != AT_LIST) || !(ATisEmpty(a_12))))
        _fail(t);
      {
        ATerm b_12 = ATgetArgument(t, 1);
        if(((ATgetType(b_12) != AT_LIST) || !(ATisEmpty(b_12))))
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
  ATerm p_20 = NULL,q_20 = NULL,s_20 = NULL,t_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_12 = ATgetArgument(t, 0);
      if(((ATgetType(c_12) == AT_LIST) && !(ATisEmpty(c_12))))
        {
          p_20 = ATgetFirst((ATermList) c_12);
          q_20 = (ATerm) ATgetNext((ATermList) c_12);
        }
      else
        _fail(t);
      {
        ATerm d_12 = ATgetArgument(t, 1);
        if(((ATgetType(d_12) == AT_LIST) && !(ATisEmpty(d_12))))
          {
            s_20 = ATgetFirst((ATermList) d_12);
            t_20 = (ATerm) ATgetNext((ATermList) d_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_20, s_20), (ATerm) ATmakeAppl(sym__2, q_20, t_20));
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm x_20 = NULL,a_21 = NULL;
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_21), x_20);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm h_21 = NULL,j_21 = NULL,k_21 = NULL;
  if(match_cons(t, sym__2))
    {
      h_21 = ATgetArgument(t, 0);
      k_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_21;
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_12);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_21);
      }
    else
      {
        t = e_12;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_12 = ATgetArgument(t, 0);
            j_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_21, j_21);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  k_26 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
      {
        ATerm w_16 = NULL,z_16 = NULL,p_2 = NULL;
        t = SSLgetAnnotations(k_26);
        w_16 = t;
        t = l_26;
        t = x_78(t);
        z_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, z_16, m_26);
        p_2 = t;
        t = SSLsetAnnotations(p_2, w_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          l_26 = ATgetArgument(t, 0);
          m_26 = ATgetArgument(t, 1);
          n_26 = ATgetArgument(t, 2);
          o_26 = ATgetArgument(t, 3);
          {
            ATerm y_17 = NULL,d_18 = NULL,f_18 = NULL,r_2 = NULL;
            t = SSLgetAnnotations(k_26);
            y_17 = t;
            t = n_26;
            t = x_78(t);
            f_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_26, f_18);
            t = genzip_4_0(f_2, g_2, h_2, i_2, t);
            d_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, l_26, m_26, d_18, o_26);
            r_2 = t;
            t = SSLsetAnnotations(r_2, y_17);
          }
        }
      else
        {
          ATerm a_20 = NULL,l_20 = NULL,m_20 = NULL,s_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              l_26 = ATgetArgument(t, 0);
              m_26 = ATgetArgument(t, 1);
              n_26 = ATgetArgument(t, 2);
              o_26 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_26);
          a_20 = t;
          t = n_26;
          t = x_78(t);
          m_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_26, m_20);
          t = genzip_4_0(j_2, l_2, n_2, o_2, t);
          l_20 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, l_26, m_26, l_20, o_26);
          s_2 = t;
          t = SSLsetAnnotations(s_2, a_20);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,g_33 = NULL,i_33 = NULL;
  g_33 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_33 = ATgetArgument(t, 0);
      b_33 = ATgetArgument(t, 1);
      {
        ATerm d_22 = NULL,g_22 = NULL,h_22 = NULL,y_2 = NULL;
        t = SSLgetAnnotations(g_33);
        d_22 = t;
        t = i_33;
        t = a_79(t);
        g_22 = t;
        t = b_33;
        t = y_78(t);
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_22, h_22);
        y_2 = t;
        t = SSLsetAnnotations(y_2, d_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          i_33 = ATgetArgument(t, 0);
          b_33 = ATgetArgument(t, 1);
          c_33 = ATgetArgument(t, 2);
          d_33 = ATgetArgument(t, 3);
          {
            ATerm x_22 = NULL,i_23 = NULL,j_23 = NULL,m_23 = NULL,s_23 = NULL,z_2 = NULL;
            t = SSLgetAnnotations(g_33);
            x_22 = t;
            t = i_33;
            t = a_79(t);
            i_23 = t;
            t = b_33;
            t = a_79(t);
            j_23 = t;
            t = c_33;
            t = a_79(t);
            m_23 = t;
            t = d_33;
            t = y_78(t);
            s_23 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, i_23, j_23, m_23, s_23);
            z_2 = t;
            t = SSLsetAnnotations(z_2, x_22);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              i_33 = ATgetArgument(t, 0);
              b_33 = ATgetArgument(t, 1);
              c_33 = ATgetArgument(t, 2);
              d_33 = ATgetArgument(t, 3);
              {
                ATerm u_24 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,t_25 = NULL,b_3 = NULL;
                t = SSLgetAnnotations(g_33);
                u_24 = t;
                t = i_33;
                t = a_79(t);
                l_25 = t;
                t = b_33;
                t = a_79(t);
                m_25 = t;
                t = c_33;
                t = a_79(t);
                n_25 = t;
                t = d_33;
                t = y_78(t);
                t_25 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, l_25, m_25, n_25, t_25);
                b_3 = t;
                t = SSLsetAnnotations(b_3, u_24);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  i_33 = ATgetArgument(t, 0);
                  {
                    ATerm u_26 = NULL,w_26 = NULL,c_3 = NULL;
                    t = SSLgetAnnotations(g_33);
                    u_26 = t;
                    t = i_33;
                    t = y_78(t);
                    w_26 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, w_26);
                    c_3 = t;
                    t = SSLsetAnnotations(c_3, u_26);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      i_33 = ATgetArgument(t, 0);
                      {
                        ATerm c_27 = NULL,e_27 = NULL,e_3 = NULL;
                        t = SSLgetAnnotations(g_33);
                        c_27 = t;
                        t = i_33;
                        t = y_78(t);
                        e_27 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, e_27);
                        e_3 = t;
                        t = SSLsetAnnotations(e_3, c_27);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          i_33 = ATgetArgument(t, 0);
                          {
                            ATerm t_27 = NULL,z_27 = NULL,f_3 = NULL;
                            t = SSLgetAnnotations(g_33);
                            t_27 = t;
                            t = i_33;
                            t = y_78(t);
                            z_27 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, z_27);
                            f_3 = t;
                            t = SSLsetAnnotations(f_3, t_27);
                          }
                        }
                      else
                        {
                          ATerm q_28 = NULL,w_28 = NULL,g_3 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              i_33 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(g_33);
                          q_28 = t;
                          t = i_33;
                          t = y_78(t);
                          w_28 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, w_28);
                          g_3 = t;
                          t = SSLsetAnnotations(g_3, q_28);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm r_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_34);
  return(t);
}
static ATerm t_2 (ATerm t)
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
              ATerm t_34 = NULL,u_34 = NULL,x_34 = NULL,y_34 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_34 = ATgetArgument(t, 0);
                  u_34 = ATgetArgument(t, 1);
                  x_34 = ATgetArgument(t, 2);
                  y_34 = ATgetArgument(t, 3);
                  t = x_34;
                  t = map_1_0(v_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_34 = ATgetArgument(t, 0);
                      u_34 = ATgetArgument(t, 1);
                      x_34 = ATgetArgument(t, 2);
                      y_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_34;
                  t = map_1_0(x_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm f_35 = NULL;
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_35 = ATgetArgument(t, 0);
          {
            ATerm o_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_12);
      t = f_35;
    }
  else
    {
      t = m_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_35;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm q_35 = NULL;
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_35 = ATgetArgument(t, 0);
          {
            ATerm r_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_12);
      t = q_35;
    }
  else
    {
      t = p_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_35;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm u_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_35);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            {
              ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_35 = ATgetArgument(t, 0);
                  x_35 = ATgetArgument(t, 1);
                  y_35 = ATgetArgument(t, 2);
                  z_35 = ATgetArgument(t, 3);
                  t = y_35;
                  t = map_1_0(i_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_35 = ATgetArgument(t, 0);
                      x_35 = ATgetArgument(t, 1);
                      y_35 = ATgetArgument(t, 2);
                      z_35 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_35;
                  t = map_1_0(j_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm g_36 = NULL;
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_36 = ATgetArgument(t, 0);
          {
            ATerm c_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_12);
      t = g_36;
    }
  else
    {
      t = x_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_36;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_36 = NULL;
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_36 = ATgetArgument(t, 0);
          {
            ATerm f_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_13);
      t = u_36;
    }
  else
    {
      t = d_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_36;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm y_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_36);
  return(t);
}
static ATerm n_3 (ATerm t)
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
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm a_37 = NULL,b_37 = NULL,e_37 = NULL,f_37 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_37 = ATgetArgument(t, 0);
                  b_37 = ATgetArgument(t, 1);
                  e_37 = ATgetArgument(t, 2);
                  f_37 = ATgetArgument(t, 3);
                  t = e_37;
                  t = map_1_0(p_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_37 = ATgetArgument(t, 0);
                      b_37 = ATgetArgument(t, 1);
                      e_37 = ATgetArgument(t, 2);
                      f_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_37;
                  t = map_1_0(q_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm m_37 = NULL;
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_37 = ATgetArgument(t, 0);
          {
            ATerm m_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_13);
      t = m_37;
    }
  else
    {
      t = k_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_37;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm e_38 = NULL;
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_38 = ATgetArgument(t, 0);
          {
            ATerm p_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_13);
      t = e_38;
    }
  else
    {
      t = n_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_38;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm i_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_38);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            {
              ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_38 = ATgetArgument(t, 0);
                  l_38 = ATgetArgument(t, 1);
                  m_38 = ATgetArgument(t, 2);
                  n_38 = ATgetArgument(t, 3);
                  t = m_38;
                  t = map_1_0(x_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_38 = ATgetArgument(t, 0);
                      l_38 = ATgetArgument(t, 1);
                      m_38 = ATgetArgument(t, 2);
                      n_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_38;
                  t = map_1_0(a_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm u_38 = NULL;
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_38 = ATgetArgument(t, 0);
          {
            ATerm x_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_13);
      t = u_38;
    }
  else
    {
      t = v_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_38;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm d_39 = NULL;
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_39 = ATgetArgument(t, 0);
          {
            ATerm a_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_13);
      t = d_39;
    }
  else
    {
      t = y_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_39;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm p_34 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      p_34 = ATgetArgument(t, 0);
      t = p_34;
      t = free_vars_3_0(q_2, t_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          p_34 = ATgetArgument(t, 0);
          t = p_34;
          t = free_vars_3_0(a_3, h_3, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              p_34 = ATgetArgument(t, 0);
              t = p_34;
              t = free_vars_3_0(l_3, n_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  p_34 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_34;
              t = free_vars_3_0(s_3, w_3, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm h_5 (ATerm s_94 (ATerm), ATerm j_42, ATerm i_42, ATerm t)
{
  static ATerm a_40 (ATerm t)
  {
    ATerm u_39 = NULL,v_39 = NULL,x_39 = NULL;
    u_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_39 = ATgetFirst((ATermList) t);
            x_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_39;
              {
                static ATerm c_4 (ATerm t)
                {
                  t = i_42;
                  return(t);
                }
                t = i_5(s_94, c_4, v_39, x_39, t);
              }
              t = a_40(t);
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              {
                ATerm g_29 = NULL,l_29 = NULL,r_3 = NULL;
                t = SSLgetAnnotations(u_39);
                g_29 = t;
                t = x_39;
                t = a_40(t);
                l_29 = t;
                t = (ATerm) ATinsert(CheckATermList(l_29), v_39);
                r_3 = t;
                t = SSLsetAnnotations(r_3, g_29);
              }
            }
        }
      }
    return(t);
  }
  t = j_42;
  t = a_40(t);
  return(t);
}
ATerm foldr_3_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm t)
{
  ATerm f_40 = NULL,l_40 = NULL,m_40 = NULL;
  f_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_40;
      t = i_97(t);
    }
  else
    {
      ATerm p_40 = NULL,q_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_40 = ATgetFirst((ATermList) t);
          m_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_40;
      t = k_97(t);
      p_40 = t;
      t = m_40;
      t = foldr_3_0(i_97, j_97, k_97, t);
      q_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_40, q_40);
      t = j_97(t);
    }
  return(t);
}
static ATerm i_5 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm n_42, ATerm m_42, ATerm t)
{
  t = w_94(t);
  {
    static ATerm d_4 (ATerm t)
    {
      ATerm t_40 = NULL;
      t_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_42, t_40);
      t = v_94(t);
      return(t);
    }
    t = fetch_1_0(d_4, t);
  }
  t = m_42;
  return(t);
}
static ATerm j_5 (ATerm n_94 (ATerm), ATerm h_42, ATerm g_42, ATerm t)
{
  static ATerm r_41 (ATerm t)
  {
    ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
    m_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_41;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_41 = ATgetFirst((ATermList) t);
            o_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_41;
              {
                static ATerm g_4 (ATerm t)
                {
                  t = g_42;
                  return(t);
                }
                t = i_5(n_94, g_4, n_41, o_41, t);
              }
              t = r_41(t);
              LocalPopChoice(e_14);
            }
          else
            {
              t = d_14;
              {
                ATerm w_29 = NULL,o_30 = NULL,t_3 = NULL;
                t = SSLgetAnnotations(m_41);
                w_29 = t;
                t = o_41;
                t = r_41(t);
                o_30 = t;
                t = (ATerm) ATinsert(CheckATermList(o_30), n_41);
                t_3 = t;
                t = SSLsetAnnotations(t_3, w_29);
              }
            }
        }
      }
    return(t);
  }
  t = h_42;
  t = r_41(t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  static ATerm w_42 (ATerm t)
  {
    ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
    v_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_42 = ATgetFirst((ATermList) t);
        u_42 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_31 = NULL,d_31 = NULL,y_3 = NULL;
          t = SSLgetAnnotations(v_42);
          a_31 = t;
          t = u_42;
          t = w_42(t);
          d_31 = t;
          t = (ATerm) ATinsert(CheckATermList(d_31), t_42);
          y_3 = t;
          t = SSLsetAnnotations(y_3, a_31);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_42;
        t = v_92(t);
      }
    return(t);
  }
  t = w_42(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
  u_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_41;
    }
  else
    {
      static ATerm j_4 (ATerm t)
      {
        t = not_null(w_41);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_41 = ATgetFirst((ATermList) t);
          if(((w_41 != NULL) && (w_41 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_41;
      t = at_end_1_0(j_4, t);
    }
  return(t);
}
static ATerm m_43 (ATerm a_43, ATerm t)
{
  ATerm f_43 = NULL;
  t = SSL_explode_term(a_43);
  if(match_cons(t, sym__2))
    {
      ATerm f_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_43;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL;
  j_43 = t;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
      {
        ATerm g_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_4 (ATerm t)
            {
              t = i_43;
              return(t);
            }
            t = h_43;
            t = at_end_1_0(l_4, t);
            LocalPopChoice(l_14);
          }
        else
          {
            t = g_14;
            t = m_43(j_43, t);
          }
      }
    }
  else
    {
      t = m_43(j_43, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm t)
{
  static ATerm d_44 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_84(t);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        {
          ATerm n_43 = NULL,o_43 = NULL,r_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,b_4 = NULL;
          t = k_84(t);
          y_43 = t;
          if(match_cons(t, sym__2))
            {
              o_43 = ATgetArgument(t, 0);
              r_43 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_43);
          n_43 = t;
          t = o_43;
          t = m_84(t);
          w_43 = t;
          t = r_43;
          t = d_44(t);
          x_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_43, x_43);
          b_4 = t;
          t = SSLsetAnnotations(b_4, n_43);
          t = l_84(t);
        }
      }
    return(t);
  }
  t = d_44(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if(((ATgetType(o_14) != AT_LIST) || !(ATisEmpty(o_14))))
        _fail(t);
      {
        ATerm p_14 = ATgetArgument(t, 1);
        if(((ATgetType(p_14) != AT_LIST) || !(ATisEmpty(p_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      if(((ATgetType(q_14) == AT_LIST) && !(ATisEmpty(q_14))))
        {
          m_44 = ATgetFirst((ATermList) q_14);
          n_44 = (ATerm) ATgetNext((ATermList) q_14);
        }
      else
        _fail(t);
      {
        ATerm r_14 = ATgetArgument(t, 1);
        if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
          {
            o_44 = ATgetFirst((ATermList) r_14);
            p_44 = (ATerm) ATgetNext((ATermList) r_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_44, o_44), (ATerm) ATmakeAppl(sym__2, n_44, p_44));
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  if(match_cons(t, sym__2))
    {
      v_44 = ATgetArgument(t, 0);
      w_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_44), v_44);
  return(t);
}
static ATerm l_5 (ATerm y_573, ATerm d_574, ATerm q_55, ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
  t = SSL_explode_term(d_574);
  if(match_cons(t, sym__2))
    {
      f_44 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_573);
  if(match_cons(t, sym__2))
    {
      if((f_44 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_44, h_44);
  t = genzip_4_0(m_4, p_4, q_4, _id, t);
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_44, q_55);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t)
{
  static ATerm y_44 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_86(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = k_86(t);
        t = y_44(t);
      }
    return(t);
  }
  t = y_44(t);
  return(t);
}
ATerm for_3_0 (ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t)
{
  t = m_86(t);
  t = while_not_2_0(n_86, o_86, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_45);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,c_46 = NULL,e_4 = NULL;
  c_46 = t;
  if(match_cons(t, sym__2))
    {
      w_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_46);
  v_45 = t;
  t = x_45;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_45, x_45);
  e_4 = t;
  t = SSLsetAnnotations(e_4, v_45);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  e_47 = t;
  if(match_cons(t, sym__2))
    {
      f_47 = ATgetArgument(t, 0);
      g_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_47 = ATgetFirst((ATermList) t);
      i_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_47(f_47, g_47, e_47, t);
            LocalPopChoice(w_14);
          }
        else
          {
            t = u_14;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_47), h_47), i_47);
          }
      }
    }
  else
    {
      t = s_47(f_47, g_47, e_47, t);
    }
  return(t);
}
static ATerm s_47 (ATerm d_46, ATerm e_46, ATerm f_46, ATerm t)
{
  ATerm g_46 = NULL,j_46 = NULL,f_4 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,w_46 = NULL;
  t = SSLgetAnnotations(f_46);
  g_46 = t;
  t = e_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_46 = ATgetFirst((ATermList) t);
      w_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_46;
  if(match_cons(t, sym__2))
    {
      p_46 = ATgetArgument(t, 0);
      q_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_46;
        if((p_46 != t))
          {
            _fail(t);
          }
        t = w_46;
        LocalPopChoice(b_15);
      }
    else
      {
        t = x_14;
        t = e_46;
        t = l_5(p_46, q_46, w_46, t);
      }
  }
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_46, j_46);
  f_4 = t;
  t = SSLsetAnnotations(f_4, g_46);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm r_47 = NULL;
  if(match_cons(t, sym__2))
    {
      r_47 = ATgetArgument(t, 0);
      if((r_47 != ATgetArgument(t, 1)))
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
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(r_4, s_4, t_4, t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
        m_47 = t;
        if(match_cons(t, sym__2))
          {
            n_47 = ATgetArgument(t, 0);
            o_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_47;
        t = j_5(u_4, n_47, o_47, t);
      }
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  if(match_cons(t, sym__2))
    {
      x_31 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(a_5, x_31, y_31, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm z_31 = NULL;
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      if((z_31 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm h_32 = NULL,l_32 = NULL;
  if(match_cons(t, sym__2))
    {
      h_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(e_5, h_32, l_32, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm o_32 = NULL;
  if(match_cons(t, sym__2))
    {
      o_32 = ATgetArgument(t, 0);
      if((o_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm p_48 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_100(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        {
          ATerm g_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_47 = NULL,v_47 = NULL,o_31 = NULL,p_31 = NULL;
              u_47 = t;
              t = a_101(t);
              v_47 = t;
              t = u_47;
              {
                static ATerm w_4 (ATerm t)
                {
                  ATerm x_47 = NULL;
                  t = p_48(t);
                  x_47 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_47, v_47);
                  t = diff_0_0(t);
                  return(t);
                }
                t = b_101(w_4, p_48, x_4, t);
              }
              p_31 = t;
              t = SSL_explode_term(p_31);
              if(match_cons(t, sym__2))
                {
                  ATerm i_15 = ATgetArgument(t, 0);
                  o_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_31;
              t = foldr_3_0(y_4, z_4, _id, t);
              LocalPopChoice(h_15);
            }
          else
            {
              t = g_15;
              {
                ATerm c_32 = NULL,d_32 = NULL;
                d_32 = t;
                t = SSL_explode_term(d_32);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_15 = ATgetArgument(t, 0);
                    c_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_32;
                t = foldr_3_0(b_5, c_5, p_48, t);
              }
            }
        }
      }
    return(t);
  }
  t = p_48(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm q_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_49);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            {
              ATerm u_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_49 = ATgetArgument(t, 0);
                  w_49 = ATgetArgument(t, 1);
                  x_49 = ATgetArgument(t, 2);
                  y_49 = ATgetArgument(t, 3);
                  t = x_49;
                  t = map_1_0(p_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_49 = ATgetArgument(t, 0);
                      w_49 = ATgetArgument(t, 1);
                      x_49 = ATgetArgument(t, 2);
                      y_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_49;
                  t = map_1_0(q_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm i_50 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_50 = ATgetArgument(t, 0);
          {
            ATerm x_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_15);
      t = i_50;
    }
  else
    {
      t = r_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_50;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm x_50 = NULL;
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_50 = ATgetArgument(t, 0);
          {
            ATerm b_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_16);
      t = x_50;
    }
  else
    {
      t = z_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_50;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm b_49 = NULL,m_49 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      m_49 = ATgetArgument(t, 0);
      t = m_49;
      if(match_cons(t, sym_Rule_3))
        {
          b_49 = ATgetArgument(t, 0);
          {
            ATerm c_16 = ATgetArgument(t, 1);
          }
          {
            ATerm d_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = b_49;
      t = free_vars_3_0(g_5, o_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          m_49 = ATgetArgument(t, 0);
          {
            ATerm e_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_49;
    }
  return(t);
}
ATerm Var_1_0 (ATerm i_59 (ATerm), ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,i_51 = NULL,k_4 = NULL;
  i_51 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_51);
  d_51 = t;
  t = e_51;
  t = i_59(t);
  f_51 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_51);
  k_4 = t;
  t = SSLsetAnnotations(k_4, d_51);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            w_51 = ATgetArgument(t, 0);
            x_51 = ATgetArgument(t, 1);
            y_51 = ATgetArgument(t, 2);
            z_51 = ATgetArgument(t, 3);
            t = y_51;
            t = map_1_0(u_5, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                w_51 = ATgetArgument(t, 0);
                x_51 = ATgetArgument(t, 1);
                y_51 = ATgetArgument(t, 2);
                z_51 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = y_51;
            t = map_1_0(v_5, t);
          }
      }
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm n_52 = NULL;
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_52 = ATgetArgument(t, 0);
          {
            ATerm k_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_16);
      t = n_52;
    }
  else
    {
      t = h_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_52;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm x_52 = NULL;
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_52 = ATgetArgument(t, 0);
          {
            ATerm n_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_16);
      t = x_52;
    }
  else
    {
      t = l_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_52;
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
  a_53 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_53 = ATgetArgument(t, 0);
      c_53 = ATgetArgument(t, 1);
      t = a_53;
      t = d_5(b_53, c_53, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_53 = ATgetArgument(t, 0);
          c_53 = ATgetArgument(t, 1);
          d_53 = ATgetArgument(t, 2);
          t = c_53;
          t = map_1_0(l_6, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              b_53 = ATgetArgument(t, 0);
              c_53 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, b_53);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  b_53 = ATgetArgument(t, 0);
                  c_53 = ATgetArgument(t, 1);
                  d_53 = ATgetArgument(t, 2);
                  e_53 = ATgetArgument(t, 3);
                  t = c_53;
                  t = map_1_0(n_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_53 = ATgetArgument(t, 0);
                      c_53 = ATgetArgument(t, 1);
                      d_53 = ATgetArgument(t, 2);
                      e_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_53;
                  t = map_1_0(p_6, t);
                }
            }
        }
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm n_53 = NULL;
  ATerm o_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_53 = ATgetArgument(t, 0);
          {
            ATerm u_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_16);
      t = n_53;
    }
  else
    {
      t = o_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_53;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm c_54 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_54 = ATgetArgument(t, 0);
          {
            ATerm b_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
      t = c_54;
    }
  else
    {
      t = x_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_54;
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm t_54 = NULL;
  ATerm c_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_54 = ATgetArgument(t, 0);
          {
            ATerm i_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_17);
      t = t_54;
    }
  else
    {
      t = c_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_54;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, t_5, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, f_6, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm w_5 (ATerm s_28, ATerm t_28, ATerm t)
{
  ATerm x_54 = NULL;
  t = SSL_fputc(s_28, t_28);
  x_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_54);
  return(t);
}
static ATerm x_5 (ATerm n_27, ATerm o_27, ATerm t)
{
  ATerm y_54 = NULL;
  t = SSL_write_term_to_stream_text(n_27, o_27);
  y_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_54);
  return(t);
}
static ATerm z_5 (ATerm h_87 (ATerm), ATerm c_188, ATerm r_27, ATerm t)
{
  ATerm a_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_188, term_j_17);
  t = c_6(t);
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_55, r_27);
  t = h_87(t);
  t = fclose_0_0(t);
  t = r_27;
  return(t);
}
static ATerm y_5 (ATerm j_27, ATerm k_27, ATerm t)
{
  ATerm b_55 = NULL;
  t = SSL_write_term_to_stream_baf(j_27, k_27);
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_55);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_17 = ATgetArgument(t, 0);
      if(match_cons(p_17, sym_Stream_1))
        {
          g_55 = ATgetArgument(p_17, 0);
        }
      else
        _fail(t);
      h_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(g_55, h_55, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,l_55 = NULL,m_55 = NULL,r_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      if(match_cons(r_17, sym_Stream_1))
        {
          m_55 = ATgetArgument(r_17, 0);
        }
      else
        _fail(t);
      r_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(m_55, r_55, t);
  i_55 = t;
  t = term_s_17;
  j_55 = t;
  t = i_55;
  if(match_cons(t, sym_Stream_1))
    {
      l_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_17, i_55);
  t = w_5(j_55, l_55, t);
  return(t);
}
ATerm output_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL;
  t = z_103(t);
  f_55 = t;
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_17;
        t = get_config_0_0(t);
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = term_x_17;
      }
  }
  e_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_55, f_55);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_18;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, e_55, f_55);
        LocalPopChoice(a_18);
        if(match_cons(t, sym__2))
          {
            ATerm c_18 = ATgetArgument(t, 0);
            ATerm g_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_5(q_6, e_55, f_55, t);
      }
    else
      {
        t = z_17;
        if(match_cons(t, sym__2))
          {
            ATerm p_18 = ATgetArgument(t, 0);
            ATerm q_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_5(r_6, e_55, f_55, t);
      }
  }
  return(t);
}
static ATerm g_56 (ATerm a_56, ATerm t)
{
  t = SSL_fclose(a_56);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL;
  e_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_56 = ATgetArgument(t, 0);
      {
        ATerm r_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_56);
            LocalPopChoice(u_18);
          }
        else
          {
            t = r_18;
            t = g_56(e_56, t);
          }
      }
    }
  else
    {
      t = g_56(e_56, t);
    }
  return(t);
}
static ATerm a_6 (ATerm p_27, ATerm t)
{
  t = SSL_read_term_from_stream(p_27);
  return(t);
}
static ATerm b_6 (ATerm u_28, ATerm v_28, ATerm t)
{
  ATerm h_56 = NULL;
  t = SSL_fopen(u_28, v_28);
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_56);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_56 = NULL;
  t = SSL_stdin_stream();
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_56);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_56 = NULL;
  t = SSL_stdout_stream();
  n_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_56);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_56 = NULL;
  t = SSL_stderr_stream();
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_56);
  return(t);
}
static ATerm m_58 (ATerm d_57, ATerm t)
{
  ATerm e_57 = NULL;
  t = SSL_explode_term(d_57);
  if(match_cons(t, sym__2))
    {
      ATerm v_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_18 = ATgetArgument(t, 1);
        if(((ATgetType(w_18) == AT_LIST) && !(ATisEmpty(w_18))))
          {
            e_57 = ATgetFirst((ATermList) w_18);
            {
              ATerm x_18 = (ATerm) ATgetNext((ATermList) w_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_57;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_57;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_57;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_57;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_58 (ATerm j_57, ATerm k_57, ATerm l_57, ATerm t)
{
  ATerm p_57 = NULL,t_57 = NULL,u_57 = NULL,x_57 = NULL,n_4 = NULL;
  t = SSLgetAnnotations(l_57);
  u_57 = t;
  t = j_57;
  if(match_cons(t, sym_Path_1))
    {
      x_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_57, k_57);
  n_4 = t;
  t = SSLsetAnnotations(n_4, u_57);
  if(match_cons(t, sym__2))
    {
      p_57 = ATgetArgument(t, 0);
      t_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(p_57, t_57, t);
  return(t);
}
static ATerm o_58 (ATerm z_57, ATerm a_58, ATerm b_58, ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL,h_58 = NULL,o_4 = NULL;
  t = SSLgetAnnotations(b_58);
  e_58 = t;
  t = SSL_is_string(z_57);
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_58, a_58);
  o_4 = t;
  t = SSLsetAnnotations(o_4, e_58);
  if(match_cons(t, sym__2))
    {
      c_58 = ATgetArgument(t, 0);
      d_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(c_58, d_58, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  if(match_cons(t, sym__2))
    {
      k_58 = ATgetArgument(t, 0);
      l_58 = ATgetArgument(t, 1);
      {
        ATerm y_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_58(j_58, t);
            LocalPopChoice(a_19);
          }
        else
          {
            t = y_18;
            {
              ATerm c_19 = t;
              int e_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_58(k_58, l_58, j_58, t);
                  LocalPopChoice(e_19);
                }
              else
                {
                  t = c_19;
                  t = o_58(k_58, l_58, j_58, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_58(j_58, t);
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_58 = NULL;
      s_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_58, term_k_19);
      t = c_6(t);
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      t = debug_1_0(u_6, t);
      _fail(t);
    }
  q_58 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(r_58, t);
  p_58 = t;
  t = q_58;
  t = fclose_0_0(t);
  t = p_58;
  return(t);
}
ATerm input_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_19;
      t = get_config_0_0(t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      t = term_o_19;
    }
  t = ReadFromFile_0_0(t);
  t = a_104(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,a_59 = NULL;
  u_58 = t;
  t = term_p_19;
  t = whoami_0_0(t);
  v_58 = t;
  t = term_q_19;
  x_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_19), v_58), term_r_19);
  a_59 = t;
  t = SSL_printnl(x_58, a_59);
  t = term_t_19;
  w_58 = t;
  t = SSL_exit(w_58);
  t = u_58;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm c_59 = NULL;
  c_59 = t;
  if(match_string(t, "-k"))
    {
      t = c_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_59;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
  d_59 = t;
  t = SSL_string_to_int(d_59);
  e_59 = t;
  t = term_u_19;
  f_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, e_59);
  t = k_6(f_59, e_59, t);
  t = d_59;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_6, y_6, z_6, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm h_59 = NULL;
  h_59 = t;
  if(match_string(t, "-S"))
    {
      t = h_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_59;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  t = term_w_19;
  j_59 = t;
  t = term_x_19;
  k_59 = t;
  t = term_y_19;
  t = k_6(j_59, k_59, t);
  t = term_z_19;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
  l_59 = t;
  t = SSL_string_to_int(l_59);
  m_59 = t;
  t = term_w_19;
  n_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_19, m_59);
  t = k_6(n_59, m_59, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_59);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_g_20;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL;
  t = term_h_20;
  o_59 = t;
  t = term_p_19;
  p_59 = t;
  t = term_i_20;
  t = k_6(o_59, p_59, t);
  t = term_j_20;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_k_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_7, f_7, h_7, t);
      LocalPopChoice(r_20);
    }
  else
    {
      t = o_20;
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_7, l_7, m_7, t);
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = Option_3_0(n_7, o_7, p_7, t);
          }
      }
    }
  return(t);
}
static ATerm k_6 (ATerm m_32, ATerm n_32, ATerm t)
{
  ATerm q_59 = NULL;
  t = term_w_20;
  q_59 = t;
  t = SSL_table_put(q_59, m_32, n_32);
  t = (ATerm) ATmakeAppl(sym__3, term_w_20, m_32, n_32);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL;
      t = term_p_19;
      t = i_0(t);
      v_59 = t;
      t = term_y_20;
      w_59 = t;
      t = term_z_20;
      x_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_20, term_z_20, v_59);
      t = i_6(w_59, x_59, v_59, t);
      _fail(t);
    }
  else
    {
      ATerm a_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_59 = ATgetFirst((ATermList) t);
          u_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_59;
      t = d_0(t);
      t = term_p_19;
      t = g_0(t);
      a_60 = t;
      t = (ATerm) ATinsert(CheckATermList(u_59), a_60);
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm c_60 = NULL;
  c_60 = t;
  if(match_string(t, "-o"))
    {
      t = c_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_60;
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL;
  d_60 = t;
  t = term_v_17;
  e_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, d_60);
  t = k_6(e_60, d_60, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_60);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_7, r_7, s_7, t);
  return(t);
}
static ATerm i_6 (ATerm b_38, ATerm c_38, ATerm a_38, ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL;
  g_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_38, c_38);
  {
    ATerm e_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            ATerm l_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_38, c_38);
        t = h_6(b_38, c_38, t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = e_21;
        t = (ATerm) ATempty;
      }
  }
  h_60 = t;
  t = (ATerm) ATinsert(CheckATermList(h_60), a_38);
  i_60 = t;
  t = SSL_table_put(b_38, c_38, i_60);
  t = g_60;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
      t = term_p_19;
      t = p_0(t);
      t_60 = t;
      t = term_y_20;
      u_60 = t;
      t = term_z_20;
      v_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_20, term_z_20, t_60);
      t = i_6(u_60, v_60, t_60, t);
      _fail(t);
    }
  else
    {
      ATerm z_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_60 = ATgetFirst((ATermList) t);
          q_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_60 = ATgetFirst((ATermList) t);
          s_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_60;
      t = n_0(t);
      t = r_60;
      t = o_0(t);
      z_60 = t;
      t = (ATerm) ATinsert(CheckATermList(s_60), z_60);
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm b_61 = NULL;
  b_61 = t;
  if(match_string(t, "-i"))
    {
      t = b_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_61;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL;
  c_61 = t;
  t = term_n_19;
  d_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_19, c_61);
  t = k_6(d_61, c_61, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_61);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_7, u_7, v_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_19;
  t = whoami_0_0(t);
  e_61 = t;
  t = term_q_19;
  g_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_21), e_61);
  h_61 = t;
  t = SSL_printnl(g_61, h_61);
  t = term_t_19;
  f_61 = t;
  t = SSL_exit(f_61);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_21;
  t = get_config_0_0(t);
  return(t);
}
static ATerm d_6 (ATerm j_35, ATerm k_35, ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_35, k_35);
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      t = SSL_addr(j_35, k_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL;
  j_61 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_61;
      t = g_97(t);
    }
  else
    {
      ATerm o_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_61 = ATgetFirst((ATermList) t);
          l_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_61;
      t = foldr_2_0(g_97, h_97, t);
      o_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_61, o_61);
      t = h_97(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_x_19;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm h_33 = NULL,q_33 = NULL;
  if(match_cons(t, sym__2))
    {
      h_33 = ATgetArgument(t, 0);
      q_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(h_33, q_33, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_61 = NULL,y_32 = NULL,z_32 = NULL;
  t = times_0_0(t);
  z_32 = t;
  t = SSL_explode_term(z_32);
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_32;
  t = foldr_2_0(w_7, x_7, t);
  r_61 = t;
  t = SSL_TicksToSeconds(r_61);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
  c_62 = t;
  if(match_cons(t, sym__2))
    {
      d_62 = ATgetArgument(t, 0);
      e_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_62;
        if((d_62 != t))
          {
            _fail(t);
          }
        t = c_62;
        LocalPopChoice(w_21);
      }
    else
      {
        t = u_21;
        t = (ATerm) ATmakeAppl(sym__2, d_62, e_62);
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_62, e_62);
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              t = SSL_gtr(d_62, e_62);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_62, e_62);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_88 (ATerm), ATerm t)
{
  ATerm i_62 = NULL;
  i_62 = t;
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_62 = NULL;
        t = term_w_19;
        t = get_config_0_0(t);
        k_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_62, term_t_19);
        t = geq_0_0(t);
        t = i_62;
        t = x_88(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = i_62;
      }
  }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,p_62 = NULL,q_62 = NULL;
  t = run_time_0_0(t);
  m_62 = t;
  t = term_p_19;
  t = whoami_0_0(t);
  n_62 = t;
  t = term_q_19;
  p_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_22), m_62), term_c_22), n_62);
  q_62 = t;
  t = SSL_printnl(p_62, q_62);
  t = (ATerm) ATmakeAppl(sym__2, term_q_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_22), m_62), term_c_22), n_62));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_62 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_19;
  r_62 = t;
  t = SSL_exit(r_62);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  b_63 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_63;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_63 = ATgetArgument(t, 0);
          {
            ATerm c_34 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(b_63);
            c_34 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_63);
            v_4 = t;
            t = SSLsetAnnotations(v_4, c_34);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_63;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  ATerm f_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_22;
      t = get_config_0_0(t);
      LocalPopChoice(i_22);
    }
  else
    {
      t = f_22;
      t = fetch_1_0(z_7, t);
    }
  t = q_103(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_63 = ATgetFirst((ATermList) t);
      f_63 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_63 = NULL,k_63 = NULL;
        static ATerm a_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_63)), not_null(k_63));
          return(t);
        }
        t = f_63;
        t = l_0(t);
        if(((j_63 != NULL) && (j_63 != t)))
          _fail(t);
        else
          j_63 = t;
        t = e_63;
        t = k_0(t);
        if(((k_63 != NULL) && (k_63 != t)))
          _fail(t);
        else
          k_63 = t;
        t = f_63;
        t = reverse_acc_2_0(k_0, a_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_19;
      t = l_0(t);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL,f_5 = NULL;
  q_63 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_63);
  o_63 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_63);
  f_5 = t;
  t = SSLsetAnnotations(f_5, o_63);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm s_63 = NULL;
  s_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_63), term_k_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL;
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_21;
      t = get_config_0_0(t);
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      t = fetch_1_0(b_8, t);
    }
  t = term_n_22;
  t = echo_0_0(t);
  t = term_y_20;
  m_63 = t;
  t = term_z_20;
  n_63 = t;
  t = term_o_22;
  t = h_6(m_63, n_63, t);
  t = reverse_acc_2_0(_id, c_8, t);
  t = map_1_0(d_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  static ATerm p_64 (ATerm t)
  {
    ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL;
    m_64 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_64 = ATgetFirst((ATermList) t);
        o_64 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_22 = t;
      int q_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_34 = NULL,o_34 = NULL,m_5 = NULL;
          t = SSLgetAnnotations(m_64);
          l_34 = t;
          t = n_64;
          t = p_92(t);
          o_34 = t;
          t = (ATerm) ATinsert(CheckATermList(o_64), o_34);
          m_5 = t;
          t = SSLsetAnnotations(m_5, l_34);
          LocalPopChoice(q_22);
        }
      else
        {
          t = p_22;
          {
            ATerm c_37 = NULL,r_37 = NULL,s_5 = NULL;
            t = SSLgetAnnotations(m_64);
            c_37 = t;
            t = o_64;
            t = p_64(t);
            r_37 = t;
            t = (ATerm) ATinsert(CheckATermList(r_37), n_64);
            s_5 = t;
            t = SSLsetAnnotations(s_5, c_37);
          }
        }
    }
    return(t);
  }
  t = p_64(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
  t_64 = t;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_64;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_22 = ATgetFirst((ATermList) t);
                ATerm u_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_64;
          }
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        t = (ATerm) ATinsert(ATempty, t_64);
      }
  }
  u_64 = t;
  t = term_x_17;
  v_64 = t;
  t = SSL_printnl(v_64, u_64);
  t = t_64;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm g_6 (ATerm m_51, ATerm n_51, ATerm t)
{
  t = SSL_strcat(m_51, n_51);
  return(t);
}
ATerm debug_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL;
  z_64 = t;
  t = f_87(t);
  a_65 = t;
  t = term_q_19;
  b_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_64), a_65);
  c_65 = t;
  t = SSL_printnl(b_65, c_65);
  t = z_64;
  return(t);
}
ATerm map_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  static ATerm r_65 (ATerm t)
  {
    ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
    o_65 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_65;
      }
    else
      {
        ATerm j_39 = NULL,d_40 = NULL,e_40 = NULL,e_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_65 = ATgetFirst((ATermList) t);
            q_65 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_65);
        j_39 = t;
        t = p_65;
        t = f_92(t);
        d_40 = t;
        t = q_65;
        t = r_65(t);
        e_40 = t;
        t = (ATerm) ATinsert(CheckATermList(e_40), d_40);
        e_6 = t;
        t = SSLsetAnnotations(e_6, j_39);
      }
    return(t);
  }
  t = r_65(t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_66 = NULL;
      b_66 = t;
      t = SSL_is_string(b_66);
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_8, t);
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            {
              ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL;
              h_66 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_66 = ATgetArgument(t, 0);
                  t = i_66;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_66 = ATgetArgument(t, 0);
                      t = i_66;
                      {
                        ATerm d_23 = t;
                        int e_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(e_23);
                          }
                        else
                          {
                            t = d_23;
                            t = debug_1_0(f_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_66 = NULL,o_66 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_66 = ATgetArgument(t, 0);
                          j_66 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_66;
                      t = eval_config_0_0(t);
                      n_66 = t;
                      t = j_66;
                      t = eval_config_0_0(t);
                      o_66 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_66, o_66);
                      t = g_6(n_66, o_66, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_6 (ATerm s_39, ATerm t_39, ATerm t)
{
  t = SSL_table_get(s_39, t_39);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL;
  s_66 = t;
  t = term_w_20;
  t_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, s_66);
  t = h_6(t_66, s_66, t);
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_66 = NULL,v_66 = NULL;
        t = eval_config_0_0(t);
        u_66 = t;
        t = term_w_20;
        v_66 = t;
        t = SSL_table_put(v_66, s_66, u_66);
        t = u_66;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
      }
  }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL;
  t = term_h_23;
  y_66 = t;
  t = term_p_19;
  z_66 = t;
  t = term_k_23;
  t = k_6(y_66, z_66, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_l_23;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL;
  t = term_h_23;
  c_67 = t;
  t = term_p_19;
  d_67 = t;
  t = term_k_23;
  t = k_6(c_67, d_67, t);
  t = term_n_23;
  a_67 = t;
  t = term_p_19;
  b_67 = t;
  t = term_o_23;
  t = k_6(a_67, b_67, t);
  t = term_p_23;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_8, h_8, i_8, t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = r_23;
      t = Option_3_0(j_8, k_8, l_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_65 (ATerm), ATerm y_65 (ATerm), ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,j_6 = NULL;
  j_67 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_67 = ATgetFirst((ATermList) t);
      g_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_67);
  e_67 = t;
  t = f_67;
  t = x_65(t);
  h_67 = t;
  t = g_67;
  t = y_65(t);
  i_67 = t;
  t = (ATerm) ATinsert(CheckATermList(i_67), h_67);
  j_6 = t;
  t = SSLsetAnnotations(j_6, e_67);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,t_67 = NULL,u_67 = NULL,m_6 = NULL;
  o_67 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_23;
        t = o_105(t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
      }
  }
  t = o_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_67 = ATgetFirst((ATermList) t);
      r_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_67);
  p_67 = t;
  t = term_q_21;
  u_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_21, q_67);
  t = k_6(u_67, q_67, t);
  t = r_67;
  {
    static ATerm e_68 (ATerm t)
    {
      ATerm x_23 = t;
      int y_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_23 = t;
          int a_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_67 = NULL;
              x_67 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_67;
              LocalPopChoice(a_24);
            }
          else
            {
              t = z_23;
              t = o_105(t);
              t = Cons_2_0(_id, e_68, t);
            }
          LocalPopChoice(y_23);
        }
      else
        {
          t = x_23;
          {
            ATerm a_68 = NULL,b_68 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_68 = ATgetFirst((ATermList) t);
                b_68 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_68), (ATerm) ATmakeAppl(sym_Undefined_1, a_68));
          }
        }
      return(t);
    }
    t = e_68(t);
  }
  t_67 = t;
  t = (ATerm) ATinsert(CheckATermList(t_67), (ATerm) ATmakeAppl(sym_Program_1, q_67));
  m_6 = t;
  t = SSLsetAnnotations(m_6, p_67);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm q_68 = NULL;
  q_68 = t;
  if(match_string(t, "--help"))
    {
      t = q_68;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_68;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_68;
        }
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL;
  t = term_j_22;
  r_68 = t;
  t = term_p_19;
  s_68 = t;
  t = term_b_24;
  t = k_6(r_68, s_68, t);
  t = term_c_24;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_d_24;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL;
  l_68 = t;
  t = term_y_20;
  n_68 = t;
  t = term_z_20;
  o_68 = t;
  t = (ATerm) ATempty;
  p_68 = t;
  t = SSL_table_put(n_68, o_68, p_68);
  t = l_68;
  {
    static ATerm n_8 (ATerm t)
    {
      ATerm e_24 = t;
      int f_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_105(t);
          LocalPopChoice(f_24);
        }
      else
        {
          t = e_24;
          {
            ATerm g_24 = t;
            int h_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_8, p_8, q_8, t);
                LocalPopChoice(h_24);
              }
            else
              {
                t = g_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_8, t);
  }
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_68 = NULL;
        z_68 = t;
        {
          ATerm k_24 = t;
          int l_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_41 = NULL;
              t = z_68;
              {
                ATerm m_24 = t;
                int n_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_j_22;
                    t = get_config_0_0(t);
                    LocalPopChoice(n_24);
                  }
                else
                  {
                    t = m_24;
                    t = fetch_1_0(r_8, t);
                  }
              }
              t = z_68;
              t = default_system_usage_0_0(t);
              t = term_x_19;
              h_41 = t;
              t = SSL_exit(h_41);
              LocalPopChoice(l_24);
            }
          else
            {
              t = k_24;
              {
                ATerm o_42 = NULL;
                t = term_h_23;
                t = get_config_0_0(t);
                t = z_68;
                t = default_system_about_0_0(t);
                t = term_x_19;
                o_42 = t;
                t = SSL_exit(o_42);
              }
            }
        }
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        {
          ATerm o_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL;
              static ATerm s_8 (ATerm t)
              {
                ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL,o_6 = NULL;
                f_69 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_69 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_69);
                d_69 = t;
                t = e_69;
                if(((j_68 != NULL) && (j_68 != t)))
                  _fail(t);
                else
                  j_68 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_69);
                o_6 = t;
                t = SSLsetAnnotations(o_6, d_69);
                return(t);
              }
              t = fetch_1_0(s_8, t);
              t = term_q_19;
              b_69 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_68)), term_q_24);
              c_69 = t;
              t = SSL_printnl(b_69, c_69);
              t = (ATerm) ATmakeAppl(sym__2, term_q_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_68)), term_q_24));
              t = default_system_usage_0_0(t);
              t = term_t_19;
              a_69 = t;
              t = SSL_exit(a_69);
              LocalPopChoice(p_24);
            }
          else
            {
              t = o_24;
            }
        }
      }
  }
  k_68 = t;
  t = term_y_20;
  m_68 = t;
  t = SSL_table_destroy(m_68);
  t = k_68;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL;
  t = parse_options_1_0(s_103, t);
  k_69 = t;
  t = term_r_24;
  n_69 = t;
  t = SSL_table_create(n_69);
  t = term_r_24;
  l_69 = t;
  t = term_s_24;
  m_69 = t;
  t = SSL_table_put(l_69, m_69, k_69);
  t = k_69;
  t = u_103(t);
  {
    ATerm t_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_103, t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = t_24;
        {
          ATerm w_24 = t;
          int x_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_24);
            }
          else
            {
              t = w_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            {
              ATerm c_25 = t;
              int d_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(v_8, w_8, x_8, t);
                  LocalPopChoice(d_25);
                }
              else
                {
                  t = c_25;
                  {
                    ATerm e_25 = t;
                    int f_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(f_25);
                      }
                    else
                      {
                        t = e_25;
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
static ATerm u_8 (ATerm t)
{
  t = input_1_0(y_8, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL;
  t = term_b_18;
  p_69 = t;
  t = term_p_19;
  q_69 = t;
  t = term_g_25;
  t = k_6(p_69, q_69, t);
  t = term_h_25;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = output_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(t_8, default_usage_0_0, _id, u_8, t);
  return(t);
}
