#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Meta_1;
Symbol sym_Syntax_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_ErrorNumber_1;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
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
  sym_Meta_1 = ATmakeSymbol("Meta", 1, ATfalse);
  ATprotectSymbol(sym_Meta_1);
  sym_Syntax_1 = ATmakeSymbol("Syntax", 1, ATfalse);
  ATprotectSymbol(sym_Syntax_1);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
  ATprotectSymbol(sym_ErrorNumber_1);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
ATerm term_m_40;
ATerm term_l_40;
ATerm term_j_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_z_37;
ATerm term_s_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_v_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_u_35;
ATerm term_o_35;
ATerm term_l_35;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_x_32;
ATerm term_n_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_f_31;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_x_29;
ATerm term_t_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_e_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_m_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_d_28;
ATerm term_r_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_w_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_k_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_d_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_h_13, term_w_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_g_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_w_14, term_x_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_r_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_d_17, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_i_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_o_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_u_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_c_18, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_j_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_s_18, term_t_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_x_18, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_b_19, term_c_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_g_19, term_h_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_p_19, term_r_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_w_19, term_x_19);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_j_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_x_28);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_y_20);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_r_31);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_b_32, term_m_21);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_n_25, term_h_13);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_x_32, term_b_33);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_m_21);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_l_25, term_m_21);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym__2, term_o_35, term_m_21);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym__2, term_e_40, term_m_21);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm h_7 (ATerm r_33, ATerm s_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm i_7 (ATerm s_17, ATerm t_17, ATerm t);
static ATerm j_7 (ATerm b_65 (ATerm), ATerm y_180, ATerm a_18, ATerm t);
static ATerm f_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm t);
static ATerm k_7 (ATerm o_14, ATerm p_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm q_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm m_83 (ATerm), ATerm t);
static ATerm m_7 (ATerm x_79 (ATerm), ATerm z_34, ATerm x_34, ATerm t);
static ATerm m_5 (ATerm y_4, ATerm t);
static ATerm n_5 (ATerm a_5, ATerm c_5, ATerm e_5, ATerm t);
static ATerm b_1 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm q_78 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm e_82 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm d_81 (ATerm), ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm o_7 (ATerm t_14, ATerm s_14, ATerm t);
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
static ATerm p_7 (ATerm e_38, ATerm s_456, ATerm t);
ATerm find_in_includes_1_0 (ATerm l_62 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm c_81 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm e_70 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm basename_1_0 (ATerm o_78 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm i_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_25 (ATerm n_24, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_7 (ATerm w_37, ATerm v_37, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm f_81 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm e_81 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm g_81 (ATerm), ATerm t);
static ATerm s_7 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm v_24, ATerm u_24, ATerm t);
static ATerm t_7 (ATerm w_73 (ATerm), ATerm r_24, ATerm q_24, ATerm t);
static ATerm x_5 (ATerm t);
static ATerm u_7 (ATerm n_36, ATerm o_36, ATerm p_36, ATerm t);
static ATerm v_7 (ATerm i_81 (ATerm), ATerm x_36, ATerm w_36, ATerm t);
static ATerm z_7 (ATerm u_38, ATerm v_38, ATerm t);
static ATerm s_31 (ATerm h_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_7 (ATerm y_17, ATerm t);
static ATerm x_7 (ATerm c_39, ATerm d_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_33 (ATerm c_32, ATerm t);
static ATerm n_33 (ATerm i_32, ATerm j_32, ATerm k_32, ATerm t);
static ATerm p_33 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t);
static ATerm y_7 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_77 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm z_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm u_40 (ATerm k_39, ATerm t);
static ATerm r_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm a_8 (ATerm u_14, ATerm v_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm b_8 (ATerm v_35, ATerm w_35, ATerm t);
ATerm end_scope_1_0 (ATerm u_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_79 (ATerm), ATerm t);
static ATerm o_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm y_82 (ATerm), ATerm t);
static ATerm v_8 (ATerm t);
ATerm xtc_io_1_0 (ATerm z_82 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_8 (ATerm q_37, ATerm r_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm h_8 (ATerm q_35, ATerm r_35, ATerm p_35, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm k_11 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_8 (ATerm l_33, ATerm m_33, ATerm t);
ATerm foldr_2_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_81 (ATerm), ATerm t);
static ATerm o_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_11 (ATerm t);
ATerm need_help_1_0 (ATerm a_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm s_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_8 (ATerm g_32, ATerm h_32, ATerm t);
ATerm debug_1_0 (ATerm z_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm s_69 (ATerm), ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm g_8 (ATerm h_37, ATerm i_37, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_56 (ATerm), ATerm r_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_86 (ATerm), ATerm t);
static ATerm m_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
ATerm parse_options_1_0 (ATerm x_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm t);
static ATerm v_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
ATerm parse_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm h_7 (ATerm r_33, ATerm s_33, ATerm t)
{
  ATerm y_5 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_33, s_33);
      LocalPopChoice(c_13);
    }
  else
    {
      t = y_5;
      t = SSL_subtr(r_33, s_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,m_0 = NULL,q_0 = NULL;
  t = term_d_13;
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = term_h_13;
      }
  }
  b_0 = t;
  t = term_h_13;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_h_13);
  t = h_7(b_0, q_0, t);
  m_0 = t;
  t = SSL_int_to_string(m_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_d_13);
  return(t);
}
static ATerm i_7 (ATerm s_17, ATerm t_17, ATerm t)
{
  ATerm s_0 = NULL;
  t = SSL_write_term_to_stream_baf(s_17, t_17);
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_0);
  return(t);
}
static ATerm j_7 (ATerm b_65 (ATerm), ATerm y_180, ATerm a_18, ATerm t)
{
  ATerm u_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_180, term_i_13);
  t = y_7(t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, a_18);
  t = b_65(t);
  t = fclose_0_0(t);
  t = a_18;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_13 = ATgetArgument(t, 0);
      if(match_cons(j_13, sym_Stream_1))
        {
          z_0 = ATgetArgument(j_13, 0);
        }
      else
        _fail(t);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(z_0, a_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL;
  v_0 = t;
  t = xtc_new_file_0_0(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, v_0);
  t = j_7(f_0, w_0, v_0, t);
  t = SSL_close_file(w_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(v_83, w_83, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm k_7 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_execvp(o_14, p_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm x_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL;
  x_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      a_2 = ATgetArgument(t, 0);
      {
        ATerm x_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(a_2);
        x_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_13), x_0), term_k_13);
        y_0 = t;
        t = SSL_concat_strings(y_0);
      }
    }
  else
    {
      ATerm z_1 = NULL,b_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          a_2 = ATgetArgument(t, 0);
          c_2 = ATgetArgument(t, 1);
          d_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_2);
      z_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_2), term_n_13), z_1), term_m_13), a_2);
      b_2 = t;
      t = SSL_concat_strings(b_2);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_2 = NULL;
  g_2 = t;
  {
    ATerm o_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm t_13 = ATgetArgument(t, 0);
              if((g_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm u_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_19), term_t_19), term_n_19), term_i_19), term_d_19), term_z_18), term_u_18), term_k_18), term_e_18), term_w_17), term_q_17), term_l_17), term_f_17), term_a_17), term_s_16), term_m_16), term_i_16), term_e_16), term_a_16), term_w_15), term_s_15), term_o_15), term_k_15), term_g_15), term_y_14), term_q_14), term_h_14), term_z_13);
        t = fetch_elem_1_0(h_0, t);
        LocalPopChoice(s_13);
      }
    else
      {
        t = o_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm p_2 = NULL,w_2 = NULL;
  p_2 = t;
  {
    ATerm z_19 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_20 = ATgetArgument(t, 0);
            w_2 = ATgetArgument(t, 1);
            {
              ATerm d_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_20);
        {
          ATerm e_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,o_2 = NULL,x_2 = NULL;
              t = w_2;
              {
                ATerm g_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              m_2 = t;
              t = term_l_20;
              o_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, m_2), term_n_20);
              x_2 = t;
              t = SSL_printnl(o_2, x_2);
              t = (ATerm) ATmakeAppl(sym__2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_n_20));
              LocalPopChoice(f_20);
            }
          else
            {
              t = e_20;
              t = p_2;
            }
        }
      }
    else
      {
        t = z_19;
        t = p_2;
      }
  }
  t = p_2;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm q_63 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL;
  m_3 = t;
  t = fork_0_0(t);
  l_3 = t;
  {
    ATerm o_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_3;
        t = q_63(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = o_20;
        t = SSL_waitpid(l_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_20 = ATgetArgument(t, 0);
            if(((ATgetType(s_20) != AT_INT) || (ATgetInt((ATermInt) s_20) != 0)))
              _fail(t);
            {
              ATerm t_20 = ATgetArgument(t, 1);
            }
            {
              ATerm u_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm m_83 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,u_3 = NULL;
  u_3 = t;
  t = m_83(t);
  t = xtc_find_0_0(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, u_3);
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm c_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_3, u_3);
      t = k_7(p_3, u_3, t);
      t = term_v_20;
      c_4 = t;
      t = SSL_exit(c_4);
      return(t);
    }
    t = fork_and_wait_1_0(j_0, t);
  }
  t = u_3;
  return(t);
}
static ATerm m_7 (ATerm x_79 (ATerm), ATerm z_34, ATerm x_34, ATerm t)
{
  ATerm e_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,n_4 = NULL,p_4 = NULL;
  k_4 = t;
  t = x_79(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_4, z_34, x_34);
  t = h_8(e_4, z_34, x_34, t);
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 = NULL;
        t = term_y_20;
        s_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_4, term_y_20);
        t = g_8(e_4, s_4, t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_4 = ATgetFirst((ATermList) t);
      j_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_y_20;
  n_4 = t;
  t = (ATerm) ATinsert(CheckATermList(j_4), (ATerm) ATinsert(CheckATermList(i_4), z_34));
  p_4 = t;
  t = SSL_table_put(e_4, n_4, p_4);
  t = k_4;
  return(t);
}
static ATerm m_5 (ATerm y_4, ATerm t)
{
  t = y_4;
  {
    ATerm e_21 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_21 = ATgetArgument(t, 0);
            ATerm g_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_21;
      }
  }
  t = term_h_21;
  t = debug_1_0(b_1, t);
  t = (ATerm) ATmakeAppl(sym__2, y_4, term_i_13);
  t = open_file_0_0(t);
  return(t);
}
static ATerm n_5 (ATerm a_5, ATerm c_5, ATerm e_5, ATerm t)
{
  t = SSL_open_file(a_5, c_5);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,l_5 = NULL;
  i_5 = t;
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
      {
        ATerm j_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_5(i_5, t);
            LocalPopChoice(l_21);
          }
        else
          {
            t = j_21;
            t = n_5(j_5, l_5, i_5, t);
          }
      }
    }
  else
    {
      t = m_5(i_5, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,u_5 = NULL;
  t = term_m_21;
  t = new_0_0(t);
  p_5 = t;
  t = term_p_21;
  q_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_5, term_p_21);
  t = f_8(p_5, q_5, t);
  u_5 = t;
  {
    ATerm q_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_5 = NULL;
        t = (ATerm) ATinsert(ATempty, term_u_21);
        w_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_5, (ATerm) ATinsert(ATempty, term_u_21));
        t = z_7(u_5, w_5, t);
        t = new_file_0_0(t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = q_21;
        t = u_5;
      }
  }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL;
  t = new_file_0_0(t);
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_5, term_i_13);
  t = open_file_0_0(t);
  t = term_m_21;
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_5, term_m_21);
  t = m_7(c_1, z_5, a_6, t);
  t = z_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  q_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_3 = NULL,c_3 = NULL;
      t = q_6;
      t = xtc_new_file_0_0(t);
      a_3 = t;
      t = t_0(t);
      c_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_3, (ATerm) ATinsert(ATinsert(ATempty, a_3), term_w_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(a_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_3);
    }
  else
    {
      ATerm o_3 = NULL,q_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_6;
      t = xtc_new_file_0_0(t);
      o_3 = t;
      t = t_0(t);
      q_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_3), term_w_21), r_6), term_x_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(o_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_3);
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm z_6 = NULL,c_7 = NULL,l_7 = NULL;
  t = basename_1_0(_id, t);
  l_7 = t;
  t = term_m_21;
  t = q_78(t);
  c_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_7), term_y_21), l_7);
  z_6 = t;
  t = SSL_concat_strings(z_6);
  return(t);
}
ATerm if_keep1_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm i_8 = NULL;
  i_8 = t;
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL;
        t = term_b_22;
        t = get_config_0_0(t);
        n_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_8, term_h_13);
        t = geq_0_0(t);
        t = i_8;
        t = e_82(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = i_8;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm q_8 = NULL;
  q_8 = t;
  {
    ATerm c_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        t_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_8, term_m_14);
        t = geq_0_0(t);
        t = q_8;
        t = d_81(t);
        LocalPopChoice(f_22);
      }
    else
      {
        t = c_22;
        t = q_8;
      }
  }
  return(t);
}
ATerm EXDEV_0_0 (ATerm t)
{
  t = SSL_EXDEV();
  return(t);
}
ATerm get_errno_0_0 (ATerm t)
{
  t = SSL_get_errno();
  return(t);
}
static ATerm o_7 (ATerm t_14, ATerm s_14, ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(t_14, s_14);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      t = get_errno_0_0(t);
      t = term_m_21;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, t_14, s_14);
      t = a_8(t_14, s_14, t);
      t = SSL_remove(t_14);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  t_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL;
        t = t_9;
        t = p_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_k_22;
        x_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_9, term_k_22);
        t = a_8(u_9, x_3, t);
        t = SSL_remove(u_9);
        t = term_k_22;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_4 = NULL;
              t = t_9;
              t = p_0(t);
              f_4 = t;
              {
                ATerm q_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_4 = NULL;
                    g_4 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_4;
                      }
                    else
                      {
                        t = g_4;
                        if((u_9 != t))
                          {
                            _fail(t);
                          }
                        t = g_4;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_22;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, u_9, f_4);
              t = o_7(u_9, f_4, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_4);
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              t = t_9;
              t = p_0(t);
              if((u_9 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_9);
            }
        }
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = debug_1_0(e_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_r_22;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_s_22;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm g_10 = NULL,i_10 = NULL,j_10 = NULL;
  g_10 = t;
  t = term_l_20;
  i_10 = t;
  t = (ATerm) ATinsert(ATempty, term_u_22);
  j_10 = t;
  t = SSL_printnl(i_10, j_10);
  t = g_10;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_x_22;
  t = get_config_0_0(t);
  t = map_1_0(s_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_10), term_x_22);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_x_22;
  t = get_config_0_0(t);
  t = map_1_0(v_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_10), term_x_22);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL;
  t = if_verbose6_1_0(d_1, t);
  b_10 = t;
  t = guarantee_extension_1_0(g_1, t);
  a_10 = t;
  t = b_10;
  {
    ATerm y_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = a_10;
        t = find_in_includes_1_0(i_1, t);
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, c_10);
        LocalPopChoice(a_23);
      }
    else
      {
        t = y_22;
        {
          ATerm d_10 = NULL;
          static ATerm w_1 (ATerm t)
          {
            t = a_10;
            return(t);
          }
          t = if_verbose2_1_0(l_1, t);
          t = guarantee_extension_1_0(m_1, t);
          d_10 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, d_10);
          {
            ATerm b_23 = t;
            int c_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_10 = NULL,l_10 = NULL,f_1 = NULL;
                l_10 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm e_23 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_10);
                k_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, d_10);
                f_1 = t;
                t = SSLsetAnnotations(f_1, k_10);
                LocalPopChoice(c_23);
                t = xtc_transform_file_2_0(n_1, o_1, t);
              }
            else
              {
                t = b_23;
                t = xtc_transform_term_2_0(t_1, u_1, t);
              }
          }
          t = rename_to_1_0(w_1, t);
        }
      }
  }
  return(t);
}
static ATerm p_7 (ATerm e_38, ATerm s_456, ATerm t)
{
  static ATerm y_1 (ATerm t)
  {
    ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,u_10 = NULL;
    q_10 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_38), term_f_23), q_10);
    u_10 = t;
    t = SSL_concat_strings(u_10);
    r_10 = t;
    t = (ATerm) ATinsert(ATempty, term_u_21);
    s_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_10, (ATerm) ATinsert(ATempty, term_u_21));
    t = z_7(r_10, s_10, t);
    return(t);
  }
  t = s_456;
  t = fetch_elem_1_0(y_1, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm l_62 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  static ATerm h_2 (ATerm t)
  {
    t = debug_1_0(l_62, t);
    return(t);
  }
  w_10 = t;
  t = term_x_22;
  t = get_config_0_0(t);
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_10, v_10);
  t = p_7(w_10, v_10, t);
  t = if_verbose2_1_0(h_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm e_11 = NULL,h_11 = NULL,i_11 = NULL;
  e_11 = t;
  t = term_l_20;
  h_11 = t;
  t = (ATerm) ATinsert(ATempty, term_j_23);
  i_11 = t;
  t = SSL_printnl(h_11, i_11);
  t = e_11;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_k_23;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_k_23;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = debug_1_0(d_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  t = if_verbose6_1_0(i_2, t);
  a_11 = t;
  t = guarantee_extension_1_0(k_2, t);
  b_11 = t;
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_11 = NULL;
        t = find_in_includes_1_0(l_2, t);
        c_11 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, c_11);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          static ATerm z_2 (ATerm t)
          {
            t = b_11;
            return(t);
          }
          t = if_verbose2_1_0(n_2, t);
          t = a_11;
          t = get_syntax_definition_0_0(t);
          {
            ATerm n_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_11 = NULL,t_11 = NULL;
                t_11 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    r_11 = ATgetArgument(t, 0);
                    {
                      ATerm q_4 = NULL,h_1 = NULL;
                      t = SSLgetAnnotations(t_11);
                      q_4 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, r_11);
                      h_1 = t;
                      t = SSLsetAnnotations(h_1, q_4);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = t_11;
                  }
                LocalPopChoice(o_23);
                {
                  static ATerm u_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, a_11), term_p_23);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(t_2, u_2, t);
                }
              }
            else
              {
                t = n_23;
                {
                  static ATerm y_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, a_11), term_p_23);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(v_2, y_2, t);
                }
              }
          }
          t = rename_to_1_0(z_2, t);
        }
      }
  }
  t = if_verbose6_1_0(b_3, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_12 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        b_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_12, term_c_14);
        t = geq_0_0(t);
        t = w_11;
        t = c_81(t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        t = w_11;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_70 (ATerm), ATerm t)
{
  ATerm d_12 = NULL;
  static ATerm e_3 (ATerm t)
  {
    t = e_70(t);
    if(((d_12 != NULL) && (d_12 != t)))
      _fail(t);
    else
      d_12 = t;
    return(t);
  }
  t = fetch_1_0(e_3, t);
  t = not_null(d_12);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm h_12 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_23;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm k_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_u_21);
      k_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_12, (ATerm) ATinsert(ATempty, term_u_21));
      t = z_7(h_12, k_12, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_t_23;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_u_23;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_v_23;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_13 = NULL,r_13 = NULL;
  t = if_verbose6_1_0(f_3, t);
  p_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 = NULL,h_5 = NULL,j_1 = NULL;
        t = SSLgetAnnotations(p_13);
        b_5 = t;
        t = r_13;
        t = guarantee_extension_1_0(h_3, t);
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_5);
        j_1 = t;
        t = SSLsetAnnotations(j_1, b_5);
        t = read_from_0_0(t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        {
          ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL,k_1 = NULL;
          t = SSLgetAnnotations(p_13);
          c_6 = t;
          t = r_13;
          t = guarantee_extension_1_0(i_3, t);
          e_6 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, e_6);
          k_1 = t;
          t = SSLsetAnnotations(k_1, c_6);
          t = read_from_0_0(t);
          b_6 = t;
          t = SSL_explode_term(b_6);
          if(match_cons(t, sym__2))
            {
              o_12 = ATgetArgument(t, 0);
              {
                ATerm y_23 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, o_12)));
        }
      }
  }
  t = if_verbose6_1_0(j_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_z_23;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm j_14 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      j_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm x_13 = NULL;
  t = if_verbose6_1_0(n_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      x_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_24;
        t = get_config_0_0(t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = e_24;
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm k_14 (ATerm y_13, ATerm t)
              {
                ATerm a_14 = NULL,d_14 = NULL;
                t = term_l_20;
                a_14 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), x_13), term_l_24), y_13), term_k_24);
                d_14 = t;
                t = SSL_printnl(a_14, d_14);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), x_13), term_l_24), y_13), term_k_24);
                _fail(t);
                return(t);
              }
              ATerm e_14 = NULL,f_14 = NULL;
              t = get_meta_0_0(t);
              f_14 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  e_14 = ATgetArgument(t, 0);
                  {
                    ATerm p_24 = t;
                    int t_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = e_14;
                        t = fetch_elem_1_0(s_3, t);
                        LocalPopChoice(t_24);
                      }
                    else
                      {
                        t = p_24;
                        t = k_14(f_14, t);
                      }
                  }
                }
              else
                {
                  t = k_14(f_14, t);
                }
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              t = term_w_24;
            }
        }
      }
  }
  t = if_verbose2_1_0(t_3, t);
  return(t);
}
ATerm basename_1_0 (ATerm o_78 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,e_15 = NULL;
  e_15 = t;
  t = SSL_explode_string(e_15);
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_17 (ATerm t)
        {
          ATerm p_16 = NULL,t_16 = NULL,v_16 = NULL;
          p_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_16 = ATgetFirst((ATermList) t);
              v_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm b_25 = t;
            int c_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_6 = NULL,b_7 = NULL,p_1 = NULL;
                t = SSLgetAnnotations(p_16);
                x_6 = t;
                t = v_16;
                t = c_17(t);
                b_7 = t;
                t = (ATerm) ATinsert(CheckATermList(b_7), t_16);
                p_1 = t;
                t = SSLsetAnnotations(p_1, x_6);
                LocalPopChoice(c_25);
              }
            else
              {
                t = b_25;
                {
                  ATerm d_25 = t;
                  int e_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_8 = NULL,q_1 = NULL;
                      t = SSLgetAnnotations(p_16);
                      l_8 = t;
                      t = t_16;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(v_16), t_16);
                      q_1 = t;
                      t = SSLsetAnnotations(q_1, l_8);
                      LocalPopChoice(e_25);
                    }
                  else
                    {
                      t = d_25;
                      {
                        ATerm b_9 = NULL,e_9 = NULL,r_1 = NULL;
                        t = SSLgetAnnotations(p_16);
                        b_9 = t;
                        t = t_16;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = v_16;
                        t = o_78(t);
                        e_9 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_9), t_16);
                        r_1 = t;
                        t = SSLsetAnnotations(r_1, b_9);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = c_17(t);
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
      }
  }
  c_15 = t;
  t = SSL_implode_string(c_15);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = debug_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_l_25);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_l_25);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  t = pass_verbose_0_0(t);
  j_20 = t;
  t = term_n_25;
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(p_25);
        t = (ATerm) ATinsert(ATempty, term_s_25);
      }
    else
      {
        t = o_25;
        t = (ATerm) ATempty;
      }
  }
  k_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_20), j_20);
  t = concat_0_0(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm m_20 = NULL,p_20 = NULL;
  t = pass_verbose_0_0(t);
  m_20 = t;
  t = term_n_25;
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(u_25);
        t = (ATerm) ATinsert(ATempty, term_s_25);
      }
    else
      {
        t = t_25;
        t = (ATerm) ATempty;
      }
  }
  p_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_20), m_20);
  t = concat_0_0(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_v_25;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_w_25;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL;
  t = pass_verbose_0_0(t);
  c_21 = t;
  t = term_n_25;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_25);
        t = (ATerm) ATinsert(ATempty, term_n_25);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATempty;
      }
  }
  d_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_21), c_21);
  t = concat_0_0(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_w_25;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm k_21 = NULL,o_21 = NULL;
  t = pass_verbose_0_0(t);
  k_21 = t;
  t = term_n_25;
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(a_26);
        t = (ATerm) ATinsert(ATempty, term_n_25);
      }
    else
      {
        t = z_25;
        t = (ATerm) ATempty;
      }
  }
  o_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_21), k_21);
  t = concat_0_0(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_b_26;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,w_18 = NULL,e_2 = NULL;
  t = if_verbose6_1_0(w_3, t);
  q_18 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_18);
  r_18 = t;
  t = w_18;
  t = basename_1_0(_id, t);
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_18);
  e_2 = t;
  t = SSLsetAnnotations(e_2, r_18);
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_18;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_19 = ATgetArgument(t, 0);
            {
              ATerm w_9 = NULL,f_2 = NULL;
              t = SSLgetAnnotations(q_18);
              w_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_19);
              f_2 = t;
              t = SSLsetAnnotations(f_2, w_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_18;
          }
        LocalPopChoice(d_26);
        {
          static ATerm a_4 (ATerm t)
          {
            ATerm q_19 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(b_4, t);
            q_19 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_19), o_18), term_f_26), term_e_26);
            return(t);
          }
          t = xtc_transform_file_2_0(z_3, a_4, t);
        }
      }
    else
      {
        t = c_26;
        {
          static ATerm h_4 (ATerm t)
          {
            ATerm s_19 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(l_4, t);
            s_19 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_19), o_18), term_f_26), term_e_26);
            return(t);
          }
          t = xtc_transform_term_2_0(d_4, h_4, t);
        }
      }
  }
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL,i_20 = NULL;
        i_20 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_20 = ATgetArgument(t, 0);
            {
              ATerm m_10 = NULL,q_2 = NULL;
              t = SSLgetAnnotations(i_20);
              m_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_20);
              q_2 = t;
              t = SSLsetAnnotations(q_2, m_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_20;
          }
        LocalPopChoice(h_26);
        t = xtc_transform_file_2_0(m_4, o_4, t);
      }
    else
      {
        t = g_26;
        t = xtc_transform_term_2_0(r_4, t_4, t);
      }
  }
  {
    static ATerm u_4 (ATerm t)
    {
      static ATerm v_4 (ATerm t)
      {
        t = p_18;
        t = guarantee_extension_1_0(w_4, t);
        return(t);
      }
      t = copy_to_1_0(v_4, t);
      return(t);
    }
    t = if_keep1_1_0(u_4, t);
  }
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL,b_21 = NULL;
        b_21 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_20 = ATgetArgument(t, 0);
            {
              ATerm f_11 = NULL,r_2 = NULL;
              t = SSLgetAnnotations(b_21);
              f_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_20);
              r_2 = t;
              t = SSLsetAnnotations(r_2, f_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_21;
          }
        LocalPopChoice(j_26);
        t = xtc_transform_file_2_0(x_4, z_4, t);
      }
    else
      {
        t = i_26;
        t = xtc_transform_term_2_0(d_5, f_5, t);
      }
  }
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL,e_22 = NULL;
        e_22 = t;
        if(match_cons(t, sym_FILE_1))
          {
            d_22 = ATgetArgument(t, 0);
            {
              ATerm x_11 = NULL,s_2 = NULL;
              t = SSLgetAnnotations(e_22);
              x_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_22);
              s_2 = t;
              t = SSLsetAnnotations(s_2, x_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_22;
          }
        LocalPopChoice(l_26);
        t = xtc_transform_file_2_0(g_5, pass_verbose_0_0, t);
      }
    else
      {
        t = k_26;
        t = xtc_transform_term_2_0(k_5, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm i_70 (ATerm), ATerm t)
{
  static ATerm f_24 (ATerm t)
  {
    ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
    d_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_24 = ATgetFirst((ATermList) t);
        c_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_12 = NULL,w_12 = NULL,i_6 = NULL;
          t = SSLgetAnnotations(d_24);
          n_12 = t;
          t = c_24;
          t = f_24(t);
          w_12 = t;
          t = (ATerm) ATinsert(CheckATermList(w_12), b_24);
          i_6 = t;
          t = SSLsetAnnotations(i_6, n_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_24;
        t = i_70(t);
      }
    return(t);
  }
  t = f_24(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,p_22 = NULL;
  l_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_22;
    }
  else
    {
      static ATerm o_5 (ATerm t)
      {
        t = not_null(p_22);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_22 = ATgetFirst((ATermList) t);
          if(((p_22 != NULL) && (p_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_22;
      t = at_end_1_0(o_5, t);
    }
  return(t);
}
static ATerm h_25 (ATerm n_24, ATerm t)
{
  ATerm o_24 = NULL;
  t = SSL_explode_term(n_24);
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_24 = NULL,z_24 = NULL,a_25 = NULL;
  a_25 = t;
  if(match_cons(t, sym__2))
    {
      s_24 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_5 (ATerm t)
            {
              t = z_24;
              return(t);
            }
            t = s_24;
            t = at_end_1_0(r_5, t);
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = h_25(a_25, t);
          }
      }
    }
  else
    {
      t = h_25(a_25, t);
    }
  return(t);
}
static ATerm q_7 (ATerm w_37, ATerm v_37, ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  t = w_37;
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = (ATerm) ATempty;
      }
  }
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_37, j_25);
  t = conc_0_0(t);
  i_25 = t;
  t = term_r_26;
  k_25 = t;
  t = SSL_table_put(k_25, w_37, i_25);
  t = (ATerm) ATmakeAppl(sym__3, term_r_26, w_37, i_25);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  r_25 = t;
  t = SSL_explode_string(r_25);
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_27 (ATerm t)
        {
          ATerm z_26 = NULL,d_27 = NULL,i_27 = NULL;
          z_26 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_27 = ATgetFirst((ATermList) t);
              i_27 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm u_26 = t;
            int v_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_13 = NULL,q_13 = NULL,l_6 = NULL;
                t = SSLgetAnnotations(z_26);
                e_13 = t;
                t = i_27;
                t = j_27(t);
                q_13 = t;
                t = (ATerm) ATinsert(CheckATermList(q_13), d_27);
                l_6 = t;
                t = SSLsetAnnotations(l_6, e_13);
                LocalPopChoice(v_26);
              }
            else
              {
                t = u_26;
                {
                  ATerm i_14 = NULL,m_6 = NULL;
                  t = SSLgetAnnotations(z_26);
                  i_14 = t;
                  t = d_27;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, d_27);
                  m_6 = t;
                  t = SSLsetAnnotations(m_6, i_14);
                }
              }
          }
          return(t);
        }
        t = j_27(t);
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = (ATerm) ATempty;
      }
  }
  q_25 = t;
  t = SSL_implode_string(q_25);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm m_27 = NULL;
  static ATerm s_5 (ATerm t)
  {
    ATerm n_27 = NULL,o_27 = NULL;
    n_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_27), n_27);
    t = g_8(not_null(m_27), n_27, t);
    o_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_27, o_27);
    return(t);
  }
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  t = SSL_table_keys(m_27);
  t = map_1_0(s_5, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        s_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_27, term_g_19);
        t = geq_0_0(t);
        t = q_27;
        t = f_81(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = q_27;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  {
    ATerm y_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_27 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        z_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_27, term_g_16);
        t = geq_0_0(t);
        t = v_27;
        t = e_81(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = y_26;
        t = v_27;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_28 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        f_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_28, term_w_14);
        t = geq_0_0(t);
        t = c_28;
        t = g_81(t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = c_28;
      }
  }
  return(t);
}
static ATerm s_7 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm v_24, ATerm u_24, ATerm t)
{
  t = a_74(t);
  {
    static ATerm t_5 (ATerm t)
    {
      ATerm n_28 = NULL;
      n_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_24, n_28);
      t = z_73(t);
      return(t);
    }
    t = fetch_1_0(t_5, t);
  }
  t = u_24;
  return(t);
}
static ATerm t_7 (ATerm w_73 (ATerm), ATerm r_24, ATerm q_24, ATerm t)
{
  static ATerm y_29 (ATerm t)
  {
    ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
    q_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_29 = ATgetFirst((ATermList) t);
            s_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_29;
              {
                static ATerm v_5 (ATerm t)
                {
                  t = q_24;
                  return(t);
                }
                t = s_7(w_73, v_5, r_29, s_29, t);
              }
              t = y_29(t);
              LocalPopChoice(f_27);
            }
          else
            {
              t = e_27;
              {
                ATerm z_14 = NULL,d_15 = NULL,u_6 = NULL;
                t = SSLgetAnnotations(q_29);
                z_14 = t;
                t = s_29;
                t = y_29(t);
                d_15 = t;
                t = (ATerm) ATinsert(CheckATermList(d_15), r_29);
                u_6 = t;
                t = SSLsetAnnotations(u_6, z_14);
              }
            }
        }
      }
    return(t);
  }
  t = r_24;
  t = y_29(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm q_30 = NULL;
  if(match_cons(t, sym__2))
    {
      q_30 = ATgetArgument(t, 0);
      if((q_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_7 (ATerm n_36, ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,m_30 = NULL;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_36, o_36);
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_27 = ATgetArgument(t, 0);
            ATerm l_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_36, o_36);
        t = g_8(n_36, o_36, t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = (ATerm) ATempty;
      }
  }
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_30, p_36);
  t = t_7(x_5, m_30, p_36, t);
  g_30 = t;
  t = SSL_table_put(n_36, o_36, g_30);
  t = f_30;
  return(t);
}
static ATerm v_7 (ATerm i_81 (ATerm), ATerm x_36, ATerm w_36, ATerm t)
{
  static ATerm d_6 (ATerm t)
  {
    ATerm u_30 = NULL,w_30 = NULL;
    if(match_cons(t, sym__2))
      {
        u_30 = ATgetArgument(t, 0);
        w_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_36, u_30, w_30);
    t = i_81(t);
    return(t);
  }
  t = w_36;
  t = map_1_0(d_6, t);
  return(t);
}
static ATerm z_7 (ATerm u_38, ATerm v_38, ATerm t)
{
  t = SSL_access(u_38, v_38);
  return(t);
}
static ATerm s_31 (ATerm h_31, ATerm t)
{
  t = SSL_fclose(h_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_31 = NULL,n_31 = NULL;
  n_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_31 = ATgetArgument(t, 0);
      {
        ATerm p_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_31);
            LocalPopChoice(r_27);
          }
        else
          {
            t = p_27;
            t = s_31(n_31, t);
          }
      }
    }
  else
    {
      t = s_31(n_31, t);
    }
  return(t);
}
static ATerm w_7 (ATerm y_17, ATerm t)
{
  t = SSL_read_term_from_stream(y_17);
  return(t);
}
static ATerm x_7 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm t_31 = NULL;
  t = SSL_fopen(c_39, d_39);
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_31 = NULL;
  t = SSL_stdin_stream();
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_31 = NULL;
  t = SSL_stdout_stream();
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_31 = NULL;
  t = SSL_stderr_stream();
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_31);
  return(t);
}
static ATerm k_33 (ATerm c_32, ATerm t)
{
  ATerm d_32 = NULL;
  t = SSL_explode_term(c_32);
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_27 = ATgetArgument(t, 1);
        if(((ATgetType(u_27) == AT_LIST) && !(ATisEmpty(u_27))))
          {
            d_32 = ATgetFirst((ATermList) u_27);
            {
              ATerm w_27 = (ATerm) ATgetNext((ATermList) u_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_33 (ATerm i_32, ATerm j_32, ATerm k_32, ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,o_32 = NULL,r_32 = NULL,g_9 = NULL;
  t = SSLgetAnnotations(k_32);
  o_32 = t;
  t = i_32;
  if(match_cons(t, sym_Path_1))
    {
      r_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_32, j_32);
  g_9 = t;
  t = SSLsetAnnotations(g_9, o_32);
  if(match_cons(t, sym__2))
    {
      l_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(l_32, m_32, t);
  return(t);
}
static ATerm p_33 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,e_33 = NULL,j_9 = NULL;
  t = SSLgetAnnotations(v_32);
  a_33 = t;
  t = SSL_is_string(t_32);
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_33, u_32);
  j_9 = t;
  t = SSLsetAnnotations(j_9, a_33);
  if(match_cons(t, sym__2))
    {
      y_32 = ATgetArgument(t, 0);
      z_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(y_32, z_32, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
  g_33 = t;
  if(match_cons(t, sym__2))
    {
      h_33 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_33(g_33, t);
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            {
              ATerm a_28 = t;
              int b_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_33(h_33, i_33, g_33, t);
                  LocalPopChoice(b_28);
                }
              else
                {
                  t = a_28;
                  t = p_33(h_33, i_33, g_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_33(g_33, t);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_33 = NULL,u_33 = NULL,v_33 = NULL;
  ATerm e_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_33 = NULL;
      w_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_33, term_h_28);
      t = y_7(t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = e_28;
      t = debug_1_0(f_6, t);
      _fail(t);
    }
  u_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(v_33, t);
  q_33 = t;
  t = u_33;
  t = fclose_0_0(t);
  t = q_33;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_i_28;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_34 = NULL,f_34 = NULL;
      e_34 = t;
      t = (ATerm) ATinsert(ATempty, term_m_28);
      f_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_34, (ATerm) ATinsert(ATempty, term_m_28));
      t = z_7(e_34, f_34, t);
      LocalPopChoice(l_28);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_28;
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_28 = t;
            if((PushChoice() == 0))
              {
                ATerm g_34 = NULL,i_34 = NULL;
                g_34 = t;
                t = (ATerm) ATinsert(ATempty, term_u_21);
                i_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_34, (ATerm) ATinsert(ATempty, term_u_21));
                t = z_7(g_34, i_34, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_28;
              }
            t = debug_1_0(g_6, t);
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            t = debug_1_0(h_6, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = debug_1_0(k_6, t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_r_28;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = debug_1_0(o_6, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_s_28;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm k_35 = NULL,s_35 = NULL,t_35 = NULL;
  k_35 = t;
  t = term_l_20;
  s_35 = t;
  t = (ATerm) ATinsert(ATempty, term_t_28);
  t_35 = t;
  t = SSL_printnl(s_35, t_35);
  t = k_35;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  if(match_cons(t, sym__3))
    {
      y_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
      a_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_7(y_35, z_35, a_36, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
  b_36 = t;
  t = term_l_20;
  c_36 = t;
  t = (ATerm) ATinsert(ATempty, term_u_28);
  d_36 = t;
  t = SSL_printnl(c_36, d_36);
  t = b_36;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  t = term_l_20;
  f_36 = t;
  t = (ATerm) ATinsert(ATempty, term_t_28);
  g_36 = t;
  t = SSL_printnl(f_36, g_36);
  t = e_36;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,p_34 = NULL,q_34 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  j_34 = t;
  t = if_verbose5_1_0(j_6, t);
  {
    ATerm v_28 = t;
    if((PushChoice() == 0))
      {
        ATerm h_35 = NULL,j_35 = NULL;
        t = term_w_28;
        h_35 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_34);
        j_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_28, (ATerm) ATmakeAppl(sym_Imported_1, j_34));
        t = g_8(h_35, j_35, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_28;
      }
  }
  l_34 = t;
  t = term_w_28;
  e_35 = t;
  t = term_x_28;
  f_35 = t;
  t = (ATerm) ATinsert(ATempty, j_34);
  g_35 = t;
  t = SSL_table_put(e_35, f_35, g_35);
  t = l_34;
  t = if_verbose4_1_0(n_6, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(p_6, t);
  k_34 = t;
  t = term_w_28;
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_28, k_34);
  t = v_7(s_6, q_34, k_34, t);
  t = if_verbose6_1_0(t_6, t);
  t = term_w_28;
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, j_34);
  n_34 = t;
  t = (ATerm) ATempty;
  p_34 = t;
  t = SSL_table_put(m_34, n_34, p_34);
  t = (ATerm) ATmakeAppl(sym__3, term_w_28, (ATerm)ATmakeAppl(sym_Imported_1, j_34), (ATerm) ATempty);
  t = if_verbose4_1_0(v_6, t);
  return(t);
}
ATerm filter_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm g_37 = NULL,j_37 = NULL,k_37 = NULL;
  g_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_37;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_37 = ATgetFirst((ATermList) t);
          k_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_16 = NULL,u_16 = NULL,w_16 = NULL,o_9 = NULL;
            t = SSLgetAnnotations(g_37);
            q_16 = t;
            t = j_37;
            t = o_77(t);
            u_16 = t;
            t = k_37;
            t = filter_1_0(o_77, t);
            w_16 = t;
            t = (ATerm) ATinsert(CheckATermList(w_16), u_16);
            o_9 = t;
            t = SSLsetAnnotations(o_9, q_16);
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            t = k_37;
            t = filter_1_0(o_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm z_67 (ATerm), ATerm t)
{
  static ATerm l_38 (ATerm t)
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_67(t);
        t = l_38(t);
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
      }
    return(t);
  }
  t = l_38(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_29;
      t = get_config_0_0(t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_38 = NULL;
            t = term_h_29;
            m_38 = t;
            t = SSL_getenv(m_38);
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = debug_1_0(y_6, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_i_29;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm t_38 = NULL,z_38 = NULL;
  t = term_w_28;
  t_38 = t;
  t = term_j_29;
  z_38 = t;
  t = term_k_29;
  t = g_8(t_38, z_38, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm l_29 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_29;
      }
  }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = debug_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm n_38 = NULL;
  t = if_verbose5_1_0(w_6, t);
  n_38 = t;
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_38 = NULL,r_38 = NULL;
        t = term_w_28;
        o_38 = t;
        t = term_x_28;
        r_38 = t;
        t = term_p_29;
        t = g_8(o_38, r_38, t);
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        {
          ATerm s_38 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_38 = t;
          t = repeat_1_0(a_7, t);
          t = s_38;
        }
      }
  }
  t = n_38;
  t = if_verbose5_1_0(d_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = debug_1_0(g_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm u_40 (ATerm k_39, ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,y_39 = NULL;
  t = term_w_28;
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, k_39);
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_28, (ATerm) ATmakeAppl(sym_Tool_1, k_39));
  t = g_8(n_39, y_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_29 = ATgetFirst((ATermList) t);
      if(match_cons(u_29, sym__2))
        {
          ATerm w_29 = ATgetArgument(u_29, 0);
          m_39 = ATgetArgument(u_29, 1);
        }
      else
        _fail(t);
      {
        ATerm v_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_39;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = debug_1_0(d_8, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_w_28;
  t = table_getlist_0_0(t);
  t = debug_1_0(k_8, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_39 = NULL,c_40 = NULL,d_40 = NULL;
      t = if_verbose5_1_0(f_7, t);
      t = xtc_load_0_0(t);
      d_40 = t;
      if(match_cons(t, sym__2))
        {
          z_39 = ATgetArgument(t, 0);
          c_40 = ATgetArgument(t, 1);
          {
            ATerm b_30 = t;
            int c_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_40 = NULL,i_40 = NULL,k_40 = NULL;
                t = term_w_28;
                i_40 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, z_39);
                k_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_28, (ATerm) ATmakeAppl(sym_Tool_1, z_39));
                t = g_8(i_40, k_40, t);
                {
                  static ATerm n_7 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_40 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((h_40 != NULL) && (h_40 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_40 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_7, t);
                }
                t = not_null(h_40);
                LocalPopChoice(c_30);
              }
            else
              {
                t = b_30;
                t = u_40(d_40, t);
              }
          }
        }
      else
        {
          t = u_40(d_40, t);
        }
      t = if_verbose5_1_0(r_7, t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm q_40 = NULL,j_17 = NULL,k_17 = NULL;
        q_40 = t;
        t = term_l_20;
        j_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_30), q_40), term_d_30);
        k_17 = t;
        t = SSL_printnl(j_17, k_17);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_30), q_40), term_d_30);
        t = if_verbose5_1_0(e_8, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm a_8 (ATerm u_14, ATerm v_14, ATerm t)
{
  t = SSL_copy(u_14, v_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  x_41 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_17 = NULL;
        t = x_41;
        t = o_0(t);
        p_17 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = p_17;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = p_17;
          }
        t = (ATerm) ATmakeAppl(sym__2, y_41, p_17);
        t = a_8(y_41, p_17, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_41);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        {
          ATerm j_30 = t;
          int k_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_17 = NULL;
              t = x_41;
              t = o_0(t);
              z_17 = t;
              {
                ATerm l_30 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_18 = NULL;
                    b_18 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = b_18;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = b_18;
                          }
                        else
                          {
                            t = b_18;
                            if((y_41 != t))
                              {
                                _fail(t);
                              }
                            t = b_18;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_30;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, y_41, z_17);
              t = a_8(y_41, z_17, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_41);
              LocalPopChoice(k_30);
            }
          else
            {
              t = j_30;
              t = x_41;
              t = o_0(t);
              if((y_41 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_41);
            }
        }
      }
  }
  return(t);
}
static ATerm b_8 (ATerm v_35, ATerm w_35, ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL;
  d_42 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_35, w_35);
        t = g_8(v_35, w_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_30 = ATgetFirst((ATermList) t);
            c_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_30);
        t = SSL_table_put(v_35, w_35, c_42);
        t = (ATerm) ATmakeAppl(sym__3, v_35, w_35, c_42);
      }
    else
      {
        t = n_30;
        t = SSL_table_remove(v_35, w_35);
        t = (ATerm) ATmakeAppl(sym__2, v_35, w_35);
      }
  }
  t = d_42;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  h_42 = t;
  t = u_79(t);
  g_42 = t;
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_42 = NULL;
        t = term_y_20;
        j_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_42, term_y_20);
        t = g_8(g_42, j_42, t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_42 = ATgetFirst((ATermList) t);
      e_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_y_20;
  i_42 = t;
  t = SSL_table_put(g_42, i_42, e_42);
  t = f_42;
  {
    static ATerm m_8 (ATerm t)
    {
      ATerm k_42 = NULL;
      k_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_42, k_42);
      t = b_8(g_42, k_42, t);
      return(t);
    }
    t = map_1_0(m_8, t);
  }
  t = h_42;
  return(t);
}
ATerm restore_always_2_0 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm t)
{
  ATerm t_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_80(t);
      t = q_80(t);
      LocalPopChoice(v_30);
    }
  else
    {
      t = t_30;
      t = q_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_79 (ATerm), ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
  n_42 = t;
  t = t_79(t);
  m_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_42, term_y_20);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_42 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_30 = ATgetArgument(t, 0);
            ATerm a_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_20;
        u_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_42, term_y_20);
        t = g_8(m_42, u_42, t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        t = (ATerm) ATempty;
      }
  }
  o_42 = t;
  t = term_y_20;
  p_42 = t;
  t = (ATerm) ATinsert(CheckATermList(o_42), (ATerm) ATempty);
  q_42 = t;
  t = SSL_table_put(m_42, p_42, q_42);
  t = n_42;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm d_43 = NULL;
  d_43 = t;
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(d_43);
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = d_43;
      }
  }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm x_42 = NULL;
  static ATerm p_8 (ATerm t)
  {
    ATerm y_42 = NULL;
    y_42 = t;
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_42 = NULL,a_43 = NULL;
          t = term_v_21;
          z_42 = t;
          t = term_y_20;
          a_43 = t;
          t = term_f_31;
          t = g_8(z_42, a_43, t);
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_42 != NULL) && (x_42 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_42 = ATgetFirst((ATermList) t);
        {
          ATerm g_31 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = x_42;
    t = map_1_0(r_8, t);
    t = y_42;
    t = end_scope_1_0(s_8, t);
    return(t);
  }
  t = begin_scope_1_0(o_8, t);
  t = restore_always_2_0(y_82, p_8, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_21;
      t = get_config_0_0(t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      t = term_k_22;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  static ATerm u_8 (ATerm t)
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_43 = NULL;
        t = term_x_21;
        t = get_config_0_0(t);
        g_43 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_43);
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = term_s_23;
      }
    t = z_82(t);
    t = copy_to_1_0(v_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(u_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  h_43 = t;
  t = term_m_21;
  t = whoami_0_0(t);
  i_43 = t;
  t = term_l_20;
  k_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_31), i_43), term_o_31);
  l_43 = t;
  t = SSL_printnl(k_43, l_43);
  t = term_h_13;
  j_43 = t;
  t = SSL_exit(j_43);
  t = h_43;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm n_43 = NULL;
  n_43 = t;
  if(match_string(t, "-k"))
    {
      t = n_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_43;
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
  o_43 = t;
  t = SSL_string_to_int(o_43);
  p_43 = t;
  t = term_b_22;
  q_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_22, p_43);
  t = j_8(q_43, p_43, t);
  t = o_43;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_8, x_8, y_8, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm s_43 = NULL;
  s_43 = t;
  if(match_string(t, "-S"))
    {
      t = s_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_43;
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  t = term_d_13;
  t_43 = t;
  t = term_r_31;
  u_43 = t;
  t = term_x_31;
  t = j_8(t_43, u_43, t);
  t = term_y_31;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_z_31;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  t = SSL_string_to_int(v_43);
  w_43 = t;
  t = term_d_13;
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, w_43);
  t = j_8(x_43, w_43, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_43);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_a_32;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  t = term_b_32;
  y_43 = t;
  t = term_m_21;
  z_43 = t;
  t = term_e_32;
  t = j_8(y_43, z_43, t);
  t = term_f_32;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_8, a_9, c_9, t);
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      {
        ATerm s_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_9, f_9, h_9, t);
            LocalPopChoice(w_32);
          }
        else
          {
            t = s_32;
            t = Option_3_0(i_9, k_9, l_9, t);
          }
      }
    }
  return(t);
}
static ATerm j_8 (ATerm q_37, ATerm r_37, ATerm t)
{
  ATerm a_44 = NULL;
  t = term_r_26;
  a_44 = t;
  t = SSL_table_put(a_44, q_37, r_37);
  t = (ATerm) ATmakeAppl(sym__3, term_r_26, q_37, r_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL;
      t = term_m_21;
      t = e_0(t);
      f_44 = t;
      t = term_x_32;
      g_44 = t;
      t = term_b_33;
      h_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_32, term_b_33, f_44);
      t = h_8(g_44, h_44, f_44, t);
      _fail(t);
    }
  else
    {
      ATerm k_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_44 = ATgetFirst((ATermList) t);
          e_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_44;
      t = c_0(t);
      t = term_m_21;
      t = d_0(t);
      k_44 = t;
      t = (ATerm) ATinsert(CheckATermList(e_44), k_44);
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm m_44 = NULL;
  m_44 = t;
  if(match_string(t, "-o"))
    {
      t = m_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_44;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  n_44 = t;
  t = term_w_21;
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_21, n_44);
  t = j_8(o_44, n_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_44);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_9, n_9, p_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm q_44 = NULL;
  q_44 = t;
  if(match_string(t, "-i"))
    {
      t = q_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_44;
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL;
  r_44 = t;
  t = term_x_21;
  s_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_21, r_44);
  t = j_8(s_44, r_44, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_44);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_9, v_9, x_9, t);
  return(t);
}
static ATerm h_8 (ATerm q_35, ATerm r_35, ATerm p_35, ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
  u_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_35, r_35);
  {
    ATerm f_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_33 = ATgetArgument(t, 0);
            ATerm t_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_35, r_35);
        t = g_8(q_35, r_35, t);
        LocalPopChoice(j_33);
      }
    else
      {
        t = f_33;
        t = (ATerm) ATempty;
      }
  }
  v_44 = t;
  t = (ATerm) ATinsert(CheckATermList(v_44), p_35);
  w_44 = t;
  t = SSL_table_put(q_35, r_35, w_44);
  t = u_44;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
      t = term_m_21;
      t = n_0(t);
      h_45 = t;
      t = term_x_32;
      i_45 = t;
      t = term_b_33;
      j_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_32, term_b_33, h_45);
      t = h_8(i_45, j_45, h_45, t);
      _fail(t);
    }
  else
    {
      ATerm n_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_45 = ATgetFirst((ATermList) t);
          e_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_45 = ATgetFirst((ATermList) t);
          g_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_45;
      t = k_0(t);
      t = f_45;
      t = l_0(t);
      n_45 = t;
      t = (ATerm) ATinsert(CheckATermList(g_45), n_45);
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm p_45 = NULL;
  p_45 = t;
  if(match_string(t, "-I"))
    {
      t = p_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = p_45;
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL;
  q_45 = t;
  t = term_x_22;
  r_45 = t;
  t = (ATerm) ATinsert(ATempty, q_45);
  s_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_22, (ATerm) ATinsert(ATempty, q_45));
  t = q_7(r_45, s_45, t);
  t = q_45;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_x_33;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  t_45 = t;
  t = term_h_24;
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_24, t_45);
  t = j_8(u_45, t_45, t);
  t = t_45;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_y_33;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL;
  v_45 = t;
  t = term_d_13;
  w_45 = t;
  t = term_r_31;
  x_45 = t;
  t = term_x_31;
  t = j_8(w_45, x_45, t);
  t = v_45;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_z_33;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  t = term_n_25;
  z_45 = t;
  t = term_h_13;
  a_46 = t;
  t = term_a_34;
  t = j_8(z_45, a_46, t);
  t = y_45;
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(y_9, e_10, f_10, t);
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      {
        ATerm d_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_10, n_10, t_10, t);
            LocalPopChoice(h_34);
          }
        else
          {
            t = d_34;
            {
              ATerm o_34 = t;
              int r_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_10, y_10, z_10, t);
                  LocalPopChoice(r_34);
                }
              else
                {
                  t = o_34;
                  t = Option_3_0(d_11, g_11, k_11, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_21;
  t = whoami_0_0(t);
  b_46 = t;
  t = term_l_20;
  d_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_34), b_46);
  e_46 = t;
  t = SSL_printnl(d_46, e_46);
  t = term_h_13;
  c_46 = t;
  t = SSL_exit(c_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_34;
  t = get_config_0_0(t);
  return(t);
}
static ATerm c_8 (ATerm l_33, ATerm m_33, ATerm t)
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_33, m_33);
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      t = SSL_addr(l_33, m_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_46;
      t = k_76(t);
    }
  else
    {
      ATerm l_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_46 = ATgetFirst((ATermList) t);
          i_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_46;
      t = foldr_2_0(k_76, l_76, t);
      l_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_46, l_46);
      t = l_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_r_31;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(l_18, m_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_46 = NULL,h_18 = NULL,i_18 = NULL;
  t = times_0_0(t);
  i_18 = t;
  t = SSL_explode_term(i_18);
  if(match_cons(t, sym__2))
    {
      ATerm w_34 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_18;
  t = foldr_2_0(l_11, m_11, t);
  o_46 = t;
  t = SSL_TicksToSeconds(o_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
  z_46 = t;
  if(match_cons(t, sym__2))
    {
      a_47 = ATgetArgument(t, 0);
      b_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_47;
        if((a_47 != t))
          {
            _fail(t);
          }
        t = z_46;
        LocalPopChoice(a_35);
      }
    else
      {
        t = y_34;
        t = (ATerm) ATmakeAppl(sym__2, a_47, b_47);
        {
          ATerm b_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_47, b_47);
              LocalPopChoice(c_35);
            }
          else
            {
              t = b_35;
              t = SSL_gtr(a_47, b_47);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_47, b_47);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm f_47 = NULL;
  f_47 = t;
  {
    ATerm d_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_47 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        h_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_47, term_h_13);
        t = geq_0_0(t);
        t = f_47;
        t = b_81(t);
        LocalPopChoice(i_35);
      }
    else
      {
        t = d_35;
        t = f_47;
      }
  }
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,m_47 = NULL,n_47 = NULL;
  t = run_time_0_0(t);
  j_47 = t;
  t = term_m_21;
  t = whoami_0_0(t);
  k_47 = t;
  t = term_l_20;
  m_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_35), j_47), term_m_13), k_47);
  n_47 = t;
  t = SSL_printnl(m_47, n_47);
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_35), j_47), term_m_13), k_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_31;
  o_47 = t;
  t = SSL_exit(o_47);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL;
  x_47 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_47;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_47 = ATgetArgument(t, 0);
          {
            ATerm j_19 = NULL,q_9 = NULL;
            t = SSLgetAnnotations(x_47);
            j_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_47);
            q_9 = t;
            t = SSLsetAnnotations(q_9, j_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_47;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_85 (ATerm), ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_35;
      t = get_config_0_0(t);
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      t = fetch_1_0(p_11, t);
    }
  t = a_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_48 = ATgetFirst((ATermList) t);
      b_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_48 = NULL,g_48 = NULL;
        static ATerm q_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_48)), not_null(g_48));
          return(t);
        }
        t = b_48;
        t = i_0(t);
        if(((f_48 != NULL) && (f_48 != t)))
          _fail(t);
        else
          f_48 = t;
        t = a_48;
        t = g_0(t);
        if(((g_48 != NULL) && (g_48 != t)))
          _fail(t);
        else
          g_48 = t;
        t = b_48;
        t = reverse_acc_2_0(g_0, q_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_21;
      t = i_0(t);
    }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,s_9 = NULL;
  m_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_48);
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_48);
  s_9 = t;
  t = SSLsetAnnotations(s_9, k_48);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm o_48 = NULL;
  o_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_48), term_u_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL;
  ATerm x_35 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_34;
      t = get_config_0_0(t);
      LocalPopChoice(h_36);
    }
  else
    {
      t = x_35;
      t = fetch_1_0(s_11, t);
    }
  t = term_i_36;
  t = echo_0_0(t);
  t = term_x_32;
  i_48 = t;
  t = term_b_33;
  j_48 = t;
  t = term_j_36;
  t = g_8(i_48, j_48, t);
  t = reverse_acc_2_0(_id, v_11, t);
  t = map_1_0(y_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_70 (ATerm), ATerm t)
{
  static ATerm l_49 (ATerm t)
  {
    ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
    i_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_49 = ATgetFirst((ATermList) t);
        k_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_36 = t;
      int l_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_19 = NULL,a_20 = NULL,z_9 = NULL;
          t = SSLgetAnnotations(i_49);
          v_19 = t;
          t = j_49;
          t = c_70(t);
          a_20 = t;
          t = (ATerm) ATinsert(CheckATermList(k_49), a_20);
          z_9 = t;
          t = SSLsetAnnotations(z_9, v_19);
          LocalPopChoice(l_36);
        }
      else
        {
          t = k_36;
          {
            ATerm q_20 = NULL,a_21 = NULL,j_11 = NULL;
            t = SSLgetAnnotations(i_49);
            q_20 = t;
            t = k_49;
            t = l_49(t);
            a_21 = t;
            t = (ATerm) ATinsert(CheckATermList(a_21), j_49);
            j_11 = t;
            t = SSLsetAnnotations(j_11, q_20);
          }
        }
    }
    return(t);
  }
  t = l_49(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  {
    ATerm m_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_36 = ATgetFirst((ATermList) t);
                ATerm s_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_49;
          }
        LocalPopChoice(q_36);
      }
    else
      {
        t = m_36;
        t = (ATerm) ATinsert(ATempty, p_49);
      }
  }
  q_49 = t;
  t = term_k_22;
  r_49 = t;
  t = SSL_printnl(r_49, q_49);
  t = p_49;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_34;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_8 (ATerm g_32, ATerm h_32, ATerm t)
{
  t = SSL_strcat(g_32, h_32);
  return(t);
}
ATerm debug_1_0 (ATerm z_64 (ATerm), ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
  v_49 = t;
  t = z_64(t);
  w_49 = t;
  t = term_l_20;
  x_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_49), w_49);
  y_49 = t;
  t = SSL_printnl(x_49, y_49);
  t = v_49;
  return(t);
}
ATerm map_1_0 (ATerm s_69 (ATerm), ATerm t)
{
  static ATerm n_50 (ATerm t)
  {
    ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
    k_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_50;
      }
    else
      {
        ATerm n_21 = NULL,r_21 = NULL,t_21 = NULL,n_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_50 = ATgetFirst((ATermList) t);
            m_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_50);
        n_21 = t;
        t = l_50;
        t = s_69(t);
        r_21 = t;
        t = m_50;
        t = n_50(t);
        t_21 = t;
        t = (ATerm) ATinsert(CheckATermList(t_21), r_21);
        n_11 = t;
        t = SSLsetAnnotations(n_11, n_21);
      }
    return(t);
  }
  t = n_50(t);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm t_36 = t;
  int u_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(u_36);
    }
  else
    {
      t = t_36;
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_v_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_50 = NULL;
      v_50 = t;
      t = SSL_is_string(v_50);
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      {
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_11, t);
            LocalPopChoice(b_37);
          }
        else
          {
            t = a_37;
            {
              ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
              b_51 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_51 = ATgetArgument(t, 0);
                  t = c_51;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_51 = ATgetArgument(t, 0);
                      t = c_51;
                      {
                        ATerm c_37 = t;
                        int d_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(d_37);
                          }
                        else
                          {
                            t = c_37;
                            t = debug_1_0(a_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_51 = NULL,i_51 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_51 = ATgetArgument(t, 0);
                          d_51 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_51;
                      t = eval_config_0_0(t);
                      h_51 = t;
                      t = d_51;
                      t = eval_config_0_0(t);
                      i_51 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_51, i_51);
                      t = f_8(h_51, i_51, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_8 (ATerm h_37, ATerm i_37, ATerm t)
{
  t = SSL_table_get(h_37, i_37);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  m_51 = t;
  t = term_r_26;
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_26, m_51);
  t = g_8(n_51, m_51, t);
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_51 = NULL,p_51 = NULL;
        t = eval_config_0_0(t);
        o_51 = t;
        t = term_r_26;
        p_51 = t;
        t = SSL_table_put(p_51, m_51, o_51);
        t = o_51;
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
      }
  }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL;
  t = term_l_37;
  s_51 = t;
  t = term_m_21;
  t_51 = t;
  t = term_m_37;
  t = j_8(s_51, t_51, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_n_37;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL;
  t = term_l_37;
  w_51 = t;
  t = term_m_21;
  x_51 = t;
  t = term_m_37;
  t = j_8(w_51, x_51, t);
  t = term_l_25;
  u_51 = t;
  t = term_m_21;
  v_51 = t;
  t = term_o_37;
  t = j_8(u_51, v_51, t);
  t = term_p_37;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_12, e_12, f_12, t);
      LocalPopChoice(u_37);
    }
  else
    {
      t = t_37;
      t = Option_3_0(g_12, i_12, j_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_56 (ATerm), ATerm r_56 (ATerm), ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,u_11 = NULL;
  d_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_51 = ATgetFirst((ATermList) t);
      a_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_52);
  y_51 = t;
  t = z_51;
  t = q_56(t);
  b_52 = t;
  t = a_52;
  t = r_56(t);
  c_52 = t;
  t = (ATerm) ATinsert(CheckATermList(c_52), b_52);
  u_11 = t;
  t = SSLsetAnnotations(u_11, y_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,n_52 = NULL,o_52 = NULL,q_12 = NULL;
  i_52 = t;
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_37;
        t = y_86(t);
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
      }
  }
  t = i_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_52 = ATgetFirst((ATermList) t);
      l_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_52);
  j_52 = t;
  t = term_t_34;
  o_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_34, k_52);
  t = j_8(o_52, k_52, t);
  t = l_52;
  {
    static ATerm y_52 (ATerm t)
    {
      ATerm a_38 = t;
      int b_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_38 = t;
          int d_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_52 = NULL;
              r_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_52;
              LocalPopChoice(d_38);
            }
          else
            {
              t = c_38;
              t = y_86(t);
              t = Cons_2_0(_id, y_52, t);
            }
          LocalPopChoice(b_38);
        }
      else
        {
          t = a_38;
          {
            ATerm u_52 = NULL,v_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_52 = ATgetFirst((ATermList) t);
                v_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_52), (ATerm) ATmakeAppl(sym_Undefined_1, u_52));
          }
        }
      return(t);
    }
    t = y_52(t);
  }
  n_52 = t;
  t = (ATerm) ATinsert(CheckATermList(n_52), (ATerm) ATmakeAppl(sym_Program_1, k_52));
  q_12 = t;
  t = SSLsetAnnotations(q_12, j_52);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm k_53 = NULL;
  k_53 = t;
  if(match_string(t, "--help"))
    {
      t = k_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_53;
        }
    }
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL;
  t = term_o_35;
  l_53 = t;
  t = term_m_21;
  m_53 = t;
  t = term_f_38;
  t = j_8(l_53, m_53, t);
  t = term_g_38;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_h_38;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL;
  f_53 = t;
  t = term_x_32;
  h_53 = t;
  t = term_b_33;
  i_53 = t;
  t = (ATerm) ATempty;
  j_53 = t;
  t = SSL_table_put(h_53, i_53, j_53);
  t = f_53;
  {
    static ATerm l_12 (ATerm t)
    {
      ATerm i_38 = t;
      int j_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_86(t);
          LocalPopChoice(j_38);
        }
      else
        {
          t = i_38;
          {
            ATerm k_38 = t;
            int p_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_12, p_12, r_12, t);
                LocalPopChoice(p_38);
              }
            else
              {
                t = k_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_12, t);
  }
  {
    ATerm q_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_53 = NULL;
        t_53 = t;
        {
          ATerm x_38 = t;
          int y_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_22 = NULL;
              t = t_53;
              {
                ATerm a_39 = t;
                int b_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_o_35;
                    t = get_config_0_0(t);
                    LocalPopChoice(b_39);
                  }
                else
                  {
                    t = a_39;
                    t = fetch_1_0(s_12, t);
                  }
              }
              t = t_53;
              t = default_system_usage_0_0(t);
              t = term_r_31;
              z_22 = t;
              t = SSL_exit(z_22);
              LocalPopChoice(y_38);
            }
          else
            {
              t = x_38;
              {
                ATerm d_23 = NULL;
                t = term_l_37;
                t = get_config_0_0(t);
                t = t_53;
                t = default_system_about_0_0(t);
                t = term_r_31;
                d_23 = t;
                t = SSL_exit(d_23);
              }
            }
        }
        LocalPopChoice(w_38);
      }
    else
      {
        t = q_38;
        {
          ATerm e_39 = t;
          int f_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
              static ATerm u_12 (ATerm t)
              {
                ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,t_12 = NULL;
                z_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_53 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_53);
                x_53 = t;
                t = y_53;
                if(((d_53 != NULL) && (d_53 != t)))
                  _fail(t);
                else
                  d_53 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_53);
                t_12 = t;
                t = SSLsetAnnotations(t_12, x_53);
                return(t);
              }
              t = fetch_1_0(u_12, t);
              t = term_l_20;
              v_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_53)), term_g_39);
              w_53 = t;
              t = SSL_printnl(v_53, w_53);
              t = (ATerm) ATmakeAppl(sym__2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_53)), term_g_39));
              t = default_system_usage_0_0(t);
              t = term_h_13;
              u_53 = t;
              t = SSL_exit(u_53);
              LocalPopChoice(f_39);
            }
          else
            {
              t = e_39;
            }
        }
      }
  }
  e_53 = t;
  t = term_x_32;
  g_53 = t;
  t = SSL_table_destroy(g_53);
  t = e_53;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
  t = parse_options_1_0(c_85, t);
  e_54 = t;
  t = term_h_39;
  h_54 = t;
  t = SSL_table_create(h_54);
  t = term_h_39;
  f_54 = t;
  t = term_i_39;
  g_54 = t;
  t = SSL_table_put(f_54, g_54, e_54);
  t = e_54;
  t = e_85(t);
  {
    ATerm j_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_85, t);
        LocalPopChoice(l_39);
      }
    else
      {
        t = j_39;
        {
          ATerm o_39 = t;
          int p_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_85(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_39);
            }
          else
            {
              t = o_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
      {
        ATerm s_39 = t;
        int t_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(t_39);
          }
        else
          {
            t = s_39;
            {
              ATerm u_39 = t;
              int v_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(v_39);
                }
              else
                {
                  t = u_39;
                  {
                    ATerm w_39 = t;
                    int x_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_12, z_12, a_13, t);
                        LocalPopChoice(x_39);
                      }
                    else
                      {
                        t = w_39;
                        {
                          ATerm a_40 = t;
                          int b_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(b_40);
                            }
                          else
                            {
                              t = a_40;
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
static ATerm x_12 (ATerm t)
{
  t = xtc_io_1_0(b_13, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL;
  t = term_e_40;
  j_54 = t;
  t = term_m_21;
  k_54 = t;
  t = term_f_40;
  t = j_8(j_54, k_54, t);
  t = term_g_40;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_j_40;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  m_54 = t;
  t = term_l_40;
  t = xtc_find_path_0_0(t);
  n_54 = t;
  t = term_x_22;
  o_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_54), term_m_40);
  p_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, n_54), term_m_40));
  t = q_7(o_54, p_54, t);
  t = m_54;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_12, default_usage_0_0, _id, x_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
