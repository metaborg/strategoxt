#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Meta_1;
Symbol sym_Syntax_1;
Symbol sym_TopSort_1;
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
  sym_TopSort_1 = ATmakeSymbol("TopSort", 1, ATfalse);
  ATprotectSymbol(sym_TopSort_1);
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
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_h_39;
ATerm term_p_38;
ATerm term_g_38;
ATerm term_e_38;
ATerm term_w_37;
ATerm term_o_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_s_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_j_35;
ATerm term_x_34;
ATerm term_r_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_a_33;
ATerm term_y_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_y_31;
ATerm term_m_31;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_h_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_w_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_t_28;
ATerm term_p_28;
ATerm term_n_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_x_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_y_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_e_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_y_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_i_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
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
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_z_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_d_13, term_t_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_f_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_l_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_p_14, term_s_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_a_15, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_d_16, term_f_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_p_16, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_c_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_u_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_a_18, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_f_18, term_j_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_p_18, term_q_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_v_18, term_w_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_b_19, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_f_19, term_g_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_k_19, term_l_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_p_19, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_w_19, term_x_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_e_20, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_20, term_i_20, term_j_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_t_29);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_e_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_n_21);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_c_32);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_32);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_x_21);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym__2, term_u_25, term_d_13);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym__2, term_y_32, term_a_33);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym__2, term_g_37, term_x_21);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_x_21);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym__2, term_m_35, term_x_21);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym__2, term_y_25, term_x_21);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm m_7 (ATerm z_33, ATerm a_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm n_7 (ATerm y_17, ATerm z_17, ATerm t);
static ATerm o_7 (ATerm n_66 (ATerm), ATerm n_186, ATerm i_18, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t);
static ATerm p_7 (ATerm q_14, ATerm r_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm c_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm s_85 (ATerm), ATerm t);
static ATerm r_7 (ATerm h_81 (ATerm), ATerm h_35, ATerm f_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm i_84 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm t_83 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm s_82 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
ATerm basename_1_0 (ATerm g_84 (ATerm), ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm t_7 (ATerm x_14, ATerm w_14, ATerm t);
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
static ATerm u_7 (ATerm i_39, ATerm n_466, ATerm t);
ATerm find_in_includes_1_0 (ATerm x_63 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm r_82 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm p_71 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm u_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_24 (ATerm h_24, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_7 (ATerm a_39, ATerm z_38, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm u_82 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm t_82 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm v_82 (ATerm), ATerm t);
static ATerm x_7 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm f_25, ATerm e_25, ATerm t);
static ATerm y_7 (ATerm i_75 (ATerm), ATerm b_25, ATerm a_25, ATerm t);
static ATerm p_5 (ATerm t);
static ATerm z_7 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm t);
static ATerm a_8 (ATerm x_82 (ATerm), ATerm b_38, ATerm a_38, ATerm t);
static ATerm e_8 (ATerm c_40, ATerm d_40, ATerm t);
static ATerm r_31 (ATerm j_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_8 (ATerm e_18, ATerm t);
static ATerm c_8 (ATerm l_40, ATerm m_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_33 (ATerm g_32, ATerm t);
static ATerm q_33 (ATerm n_32, ATerm q_32, ATerm r_32, ATerm t);
static ATerm r_33 (ATerm b_33, ATerm c_33, ATerm d_33, ATerm t);
static ATerm d_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm k_40 (ATerm b_39, ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm f_8 (ATerm y_14, ATerm z_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm g_8 (ATerm z_36, ATerm a_37, ATerm t);
ATerm end_scope_1_0 (ATerm e_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_81 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm e_85 (ATerm), ATerm t);
static ATerm v_8 (ATerm t);
ATerm xtc_io_1_0 (ATerm f_85 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_8 (ATerm u_38, ATerm v_38, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm m_8 (ATerm u_36, ATerm v_36, ATerm t_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_8 (ATerm t_33, ATerm u_33, ATerm t);
ATerm foldr_2_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_82 (ATerm), ATerm t);
static ATerm t_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm need_help_1_0 (ATerm u_86 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_8 (ATerm o_32, ATerm p_32, ATerm t);
ATerm debug_1_0 (ATerm l_66 (ATerm), ATerm t);
ATerm map_1_0 (ATerm d_71 (ATerm), ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm l_8 (ATerm l_38, ATerm m_38, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_58 (ATerm), ATerm d_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_88 (ATerm), ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm parse_options_1_0 (ATerm r_88 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t);
static ATerm e_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm parse_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm m_7 (ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm s_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_33, a_34);
      LocalPopChoice(y_12);
    }
  else
    {
      t = s_12;
      t = SSL_subtr(z_33, a_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,q_0 = NULL,s_0 = NULL;
  t = term_z_12;
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        t = term_d_13;
      }
  }
  b_0 = t;
  t = term_d_13;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_d_13);
  t = m_7(b_0, s_0, t);
  q_0 = t;
  t = SSL_int_to_string(q_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_z_12);
  return(t);
}
static ATerm n_7 (ATerm y_17, ATerm z_17, ATerm t)
{
  ATerm u_0 = NULL;
  t = SSL_write_term_to_stream_baf(y_17, z_17);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_0);
  return(t);
}
static ATerm o_7 (ATerm n_66 (ATerm), ATerm n_186, ATerm i_18, ATerm t)
{
  ATerm v_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_186, term_e_13);
  t = d_8(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, i_18);
  t = n_66(t);
  t = fclose_0_0(t);
  t = i_18;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      if(match_cons(f_13, sym_Stream_1))
        {
          e_1 = ATgetArgument(f_13, 0);
        }
      else
        _fail(t);
      f_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(e_1, f_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL;
  a_1 = t;
  t = xtc_new_file_0_0(t);
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_0, a_1);
  t = o_7(f_0, z_0, a_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_0);
  t = xtc_transform_file_2_0(r_84, s_84, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm p_7 (ATerm q_14, ATerm r_14, ATerm t)
{
  t = SSL_execvp(q_14, r_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,n_2 = NULL,r_2 = NULL;
  k_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      l_2 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL,w_0 = NULL;
        t = SSL_int_to_string(l_2);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_13), m_0), term_h_13);
        w_0 = t;
        t = SSL_concat_strings(w_0);
      }
    }
  else
    {
      ATerm l_1 = NULL,q_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          l_2 = ATgetArgument(t, 0);
          n_2 = ATgetArgument(t, 1);
          r_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(n_2);
      l_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_2), term_k_13), l_1), term_j_13), l_2);
      q_1 = t;
      t = SSL_concat_strings(q_1);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm u_2 = NULL;
  u_2 = t;
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm p_13 = ATgetArgument(t, 0);
              if((u_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm r_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_20), term_g_20), term_z_19), term_t_19), term_m_19), term_h_19), term_d_19), term_x_18), term_r_18), term_k_18), term_c_18), term_w_17), term_i_17), term_e_17), term_z_16), term_t_16), term_i_16), term_a_16), term_w_15), term_o_15), term_k_15), term_g_15), term_c_15), term_u_14), term_n_14), term_g_14), term_a_14), term_u_13);
        t = fetch_elem_1_0(h_0, t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, u_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_2 = NULL,h_3 = NULL;
  y_2 = t;
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            h_3 = ATgetArgument(t, 1);
            {
              ATerm r_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_20);
        {
          ATerm s_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_2 = NULL,d_2 = NULL,i_2 = NULL;
              t = h_3;
              {
                ATerm u_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_2 = t;
              t = term_w_20;
              d_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_x_20);
              i_2 = t;
              t = SSL_printnl(d_2, i_2);
              t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, a_2), term_x_20));
              LocalPopChoice(t_20);
            }
          else
            {
              t = s_20;
              t = y_2;
            }
        }
      }
    else
      {
        t = n_20;
        t = y_2;
      }
  }
  t = y_2;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm c_65 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  q_3 = t;
  t = fork_0_0(t);
  p_3 = t;
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = q_3;
        t = c_65(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = SSL_waitpid(p_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_21 = ATgetArgument(t, 0);
            if(((ATgetType(a_21) != AT_INT) || (ATgetInt((ATermInt) a_21) != 0)))
              _fail(t);
            {
              ATerm f_21 = ATgetArgument(t, 1);
            }
            {
              ATerm h_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = q_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,c_4 = NULL;
  c_4 = t;
  t = s_85(t);
  t = xtc_find_0_0(t);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_3, c_4);
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm h_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, t_3, c_4);
      t = p_7(t_3, c_4, t);
      t = term_i_21;
      h_4 = t;
      t = SSL_exit(h_4);
      return(t);
    }
    t = fork_and_wait_1_0(j_0, t);
  }
  t = c_4;
  return(t);
}
static ATerm r_7 (ATerm h_81 (ATerm), ATerm h_35, ATerm f_35, ATerm t)
{
  ATerm j_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL;
  p_4 = t;
  t = h_81(t);
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_4, h_35, f_35);
  t = m_8(j_4, h_35, f_35, t);
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL;
        t = term_n_21;
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_4, term_n_21);
        t = l_8(j_4, u_4, t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_4 = ATgetFirst((ATermList) t);
      o_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_21;
  q_4 = t;
  t = (ATerm) ATinsert(CheckATermList(o_4), (ATerm) ATinsert(CheckATermList(n_4), h_35));
  s_4 = t;
  t = SSL_table_put(j_4, q_4, s_4);
  t = p_4;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm y_4 = NULL;
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 = NULL,p_2 = NULL;
      e_5 = t;
      t = term_q_21;
      p_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_5, term_q_21);
      t = k_8(e_5, p_2, t);
      y_4 = t;
      t = SSL_mkstemp(y_4);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      {
        ATerm f_5 = NULL;
        t = term_r_21;
        f_5 = t;
        t = SSL_perror(f_5);
        _fail(t);
      }
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,n_5 = NULL;
  t = P__tmpdir_0_0(t);
  l_5 = t;
  t = term_w_21;
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_5, term_w_21);
  t = k_8(l_5, n_5, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_x_21;
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_5, term_x_21);
  t = r_7(x_0, j_5, k_5, t);
  t = SSL_close(i_5);
  t = j_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL;
  q_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_5 = NULL,t_5 = NULL;
      t = q_5;
      t = xtc_new_file_0_0(t);
      s_5 = t;
      t = t_0(t);
      t_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_5, (ATerm) ATinsert(ATinsert(ATempty, s_5), term_z_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_5);
    }
  else
    {
      ATerm v_5 = NULL,w_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_5;
      t = xtc_new_file_0_0(t);
      v_5 = t;
      t = t_0(t);
      w_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_5), term_z_21), r_5), term_a_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_5);
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm z_5 = NULL,b_6 = NULL,c_6 = NULL;
  t = basename_1_0(_id, t);
  c_6 = t;
  t = term_x_21;
  t = i_84(t);
  b_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_6), term_b_22), c_6);
  z_5 = t;
  t = SSL_concat_strings(z_5);
  return(t);
}
ATerm if_keep1_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm f_6 = NULL;
  f_6 = t;
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_6 = NULL;
        t = term_e_22;
        t = get_config_0_0(t);
        j_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_6, term_d_13);
        t = geq_0_0(t);
        t = f_6;
        t = t_83(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = f_6;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm n_6 = NULL;
  n_6 = t;
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_6 = NULL;
        t = term_z_12;
        t = get_config_0_0(t);
        q_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_6, term_c_14);
        t = geq_0_0(t);
        t = n_6;
        t = s_82(t);
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        t = n_6;
      }
  }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm w_6 = NULL;
  if(match_cons(t, sym_TopSort_1))
    {
      w_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6;
  return(t);
}
ATerm pass_sort_0_0 (ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_6 = NULL,u_6 = NULL,v_6 = NULL;
      t = get_meta_0_0(t);
      if(match_cons(t, sym_Meta_1))
        {
          v_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_6;
      t = fetch_elem_1_0(y_0, t);
      u_6 = t;
      t = SSL_is_string(u_6);
      s_6 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, s_6), term_j_22);
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm basename_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,i_8 = NULL;
  i_8 = t;
  t = SSL_explode_string(i_8);
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_10 (ATerm t)
        {
          ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
          c_10 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_10 = ATgetFirst((ATermList) t);
              e_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm n_22 = t;
            int o_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_2 = NULL,o_3 = NULL,j_1 = NULL;
                t = SSLgetAnnotations(c_10);
                z_2 = t;
                t = e_10;
                t = j_10(t);
                o_3 = t;
                t = (ATerm) ATinsert(CheckATermList(o_3), d_10);
                j_1 = t;
                t = SSLsetAnnotations(j_1, z_2);
                LocalPopChoice(o_22);
              }
            else
              {
                t = n_22;
                {
                  ATerm p_22 = t;
                  int s_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_4 = NULL,m_1 = NULL;
                      t = SSLgetAnnotations(c_10);
                      a_4 = t;
                      t = d_10;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(e_10), d_10);
                      m_1 = t;
                      t = SSLsetAnnotations(m_1, a_4);
                      LocalPopChoice(s_22);
                    }
                  else
                    {
                      t = p_22;
                      {
                        ATerm r_4 = NULL,w_4 = NULL,n_1 = NULL;
                        t = SSLgetAnnotations(c_10);
                        r_4 = t;
                        t = d_10;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = e_10;
                        t = g_84(t);
                        w_4 = t;
                        t = (ATerm) ATinsert(CheckATermList(w_4), d_10);
                        n_1 = t;
                        t = SSLsetAnnotations(n_1, r_4);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = j_10(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
      }
  }
  w_7 = t;
  t = SSL_implode_string(w_7);
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
static ATerm t_7 (ATerm x_14, ATerm w_14, ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(x_14, w_14);
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      t = get_errno_0_0(t);
      t = term_x_21;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, x_14, w_14);
      t = f_8(x_14, w_14, t);
      t = SSL_remove(x_14);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL;
        t = g_11;
        t = p_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_y_22;
        x_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_11, term_y_22);
        t = f_8(h_11, x_5, t);
        t = SSL_remove(h_11);
        t = term_y_22;
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm z_22 = t;
          int a_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_6 = NULL;
              t = g_11;
              t = p_0(t);
              l_6 = t;
              {
                ATerm c_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_6 = NULL;
                    m_6 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = m_6;
                      }
                    else
                      {
                        t = m_6;
                        if((h_11 != t))
                          {
                            _fail(t);
                          }
                        t = m_6;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_23;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_11, l_6);
              t = t_7(h_11, l_6, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_6);
              LocalPopChoice(a_23);
            }
          else
            {
              t = z_22;
              t = g_11;
              t = p_0(t);
              if((h_11 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_11);
            }
        }
      }
  }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = debug_1_0(c_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_d_23;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_e_23;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm t_11 = NULL,w_11 = NULL,x_11 = NULL;
  t_11 = t;
  t = term_w_20;
  w_11 = t;
  t = (ATerm) ATinsert(ATempty, term_g_23);
  x_11 = t;
  t = SSL_printnl(w_11, x_11);
  t = t_11;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_j_23;
  t = get_config_0_0(t);
  t = map_1_0(p_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_12), term_j_23);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_j_23;
  t = get_config_0_0(t);
  t = map_1_0(u_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_12), term_j_23);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  t = if_verbose6_1_0(b_1, t);
  n_11 = t;
  t = guarantee_extension_1_0(d_1, t);
  m_11 = t;
  t = n_11;
  {
    ATerm k_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL;
        t = m_11;
        t = find_in_includes_1_0(g_1, t);
        p_11 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_11);
        LocalPopChoice(n_23);
      }
    else
      {
        t = k_23;
        {
          ATerm s_11 = NULL;
          static ATerm v_1 (ATerm t)
          {
            t = m_11;
            return(t);
          }
          t = if_verbose2_1_0(h_1, t);
          t = guarantee_extension_1_0(i_1, t);
          s_11 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, s_11);
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_11 = NULL,a_12 = NULL,t_1 = NULL;
                a_12 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm q_23 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_12);
                z_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, s_11);
                t_1 = t;
                t = SSLsetAnnotations(t_1, z_11);
                LocalPopChoice(p_23);
                t = xtc_transform_file_2_0(k_1, o_1, t);
              }
            else
              {
                t = o_23;
                t = xtc_transform_term_2_0(r_1, s_1, t);
              }
          }
          t = rename_to_1_0(v_1, t);
        }
      }
  }
  return(t);
}
static ATerm u_7 (ATerm i_39, ATerm n_466, ATerm t)
{
  static ATerm w_1 (ATerm t)
  {
    ATerm h_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
    h_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_39), term_r_23), h_12);
    l_12 = t;
    t = SSL_concat_strings(l_12);
    j_12 = t;
    t = (ATerm) ATinsert(ATempty, term_s_23);
    k_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_12, (ATerm) ATinsert(ATempty, term_s_23));
    t = e_8(j_12, k_12, t);
    return(t);
  }
  t = n_466;
  t = fetch_elem_1_0(w_1, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm x_63 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  static ATerm y_1 (ATerm t)
  {
    t = debug_1_0(x_63, t);
    return(t);
  }
  n_12 = t;
  t = term_j_23;
  t = get_config_0_0(t);
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_12, m_12);
  t = u_7(n_12, m_12, t);
  t = if_verbose2_1_0(y_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_t_23;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_v_23;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,g_13 = NULL;
  v_12 = t;
  t = term_w_20;
  w_12 = t;
  t = (ATerm) ATinsert(ATempty, term_x_23);
  g_13 = t;
  t = SSL_printnl(w_12, g_13);
  t = v_12;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_z_23;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_z_23;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm r_12 = NULL,t_12 = NULL;
  t = if_verbose6_1_0(z_1, t);
  r_12 = t;
  t = guarantee_extension_1_0(c_2, t);
  t_12 = t;
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_12 = NULL;
        t = find_in_includes_1_0(g_2, t);
        u_12 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_12);
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
          static ATerm v_2 (ATerm t)
          {
            t = t_12;
            return(t);
          }
          t = if_verbose2_1_0(h_2, t);
          t = r_12;
          t = get_syntax_definition_0_0(t);
          {
            ATerm c_24 = t;
            int d_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_13 = NULL,q_13 = NULL;
                q_13 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    n_13 = ATgetArgument(t, 0);
                    {
                      ATerm z_6 = NULL,x_1 = NULL;
                      t = SSLgetAnnotations(q_13);
                      z_6 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, n_13);
                      x_1 = t;
                      t = SSLsetAnnotations(x_1, z_6);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = q_13;
                  }
                LocalPopChoice(d_24);
                {
                  static ATerm m_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, r_12), term_e_24);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(j_2, m_2, t);
                }
              }
            else
              {
                t = c_24;
                {
                  static ATerm q_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, r_12), term_e_24);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(o_2, q_2, t);
                }
              }
          }
          t = rename_to_1_0(v_2, t);
        }
      }
  }
  t = if_verbose6_1_0(w_2, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL;
        t = term_z_12;
        t = get_config_0_0(t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_13, term_x_13);
        t = geq_0_0(t);
        t = v_13;
        t = r_82(t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = v_13;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_71 (ATerm), ATerm t)
{
  ATerm e_14 = NULL;
  static ATerm a_3 (ATerm t)
  {
    t = p_71(t);
    if(((e_14 != NULL) && (e_14 != t)))
      _fail(t);
    else
      e_14 = t;
    return(t);
  }
  t = fetch_1_0(a_3, t);
  t = not_null(e_14);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_14 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_i_24;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm m_14 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_23);
      m_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_14, (ATerm) ATinsert(ATempty, term_s_23));
      t = e_8(k_14, m_14, t);
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
  t = term_k_24;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_l_24;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = debug_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm t_14 = NULL,t_15 = NULL,u_15 = NULL;
  t = if_verbose6_1_0(f_3, t);
  t_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_7 = NULL,i_7 = NULL,e_2 = NULL;
        t = SSLgetAnnotations(t_15);
        g_7 = t;
        t = u_15;
        t = guarantee_extension_1_0(i_3, t);
        i_7 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_7);
        e_2 = t;
        t = SSLsetAnnotations(e_2, g_7);
        t = read_from_0_0(t);
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        {
          ATerm q_8 = NULL,r_8 = NULL,u_8 = NULL,f_2 = NULL;
          t = SSLgetAnnotations(t_15);
          r_8 = t;
          t = u_15;
          t = guarantee_extension_1_0(j_3, t);
          u_8 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_8);
          f_2 = t;
          t = SSLsetAnnotations(f_2, r_8);
          t = read_from_0_0(t);
          q_8 = t;
          t = SSL_explode_term(q_8);
          if(match_cons(t, sym__2))
            {
              t_14 = ATgetArgument(t, 0);
              {
                ATerm p_24 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, t_14)));
        }
      }
  }
  t = if_verbose6_1_0(k_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = debug_1_0(n_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_q_24;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm q_16 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_16;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = debug_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm e_16 = NULL;
  t = if_verbose6_1_0(m_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      e_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_24;
        t = get_config_0_0(t);
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        {
          ATerm z_24 = t;
          int g_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm r_16 (ATerm h_16, ATerm t)
              {
                ATerm j_16 = NULL,k_16 = NULL;
                t = term_w_20;
                j_16 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_25), e_16), term_j_25), h_16), term_i_25);
                k_16 = t;
                t = SSL_printnl(j_16, k_16);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_25), e_16), term_j_25), h_16), term_i_25);
                _fail(t);
                return(t);
              }
              ATerm l_16 = NULL,o_16 = NULL;
              t = get_meta_0_0(t);
              o_16 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  l_16 = ATgetArgument(t, 0);
                  {
                    ATerm l_25 = t;
                    int m_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = l_16;
                        t = fetch_elem_1_0(r_3, t);
                        LocalPopChoice(m_25);
                      }
                    else
                      {
                        t = l_25;
                        t = r_16(o_16, t);
                      }
                  }
                }
              else
                {
                  t = r_16(o_16, t);
                }
              LocalPopChoice(g_25);
            }
          else
            {
              t = z_24;
              t = term_n_25;
            }
        }
      }
  }
  t = if_verbose2_1_0(s_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = debug_1_0(w_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_o_25;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_p_25;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_25);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_p_25;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_25);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_r_25;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm r_19 = NULL,a_20 = NULL,b_20 = NULL;
  t = pass_verbose_0_0(t);
  a_20 = t;
  t = term_u_25;
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(w_25);
        t = (ATerm) ATinsert(ATempty, term_x_25);
      }
    else
      {
        t = v_25;
        t = (ATerm) ATempty;
      }
  }
  b_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_20), a_20);
  t = concat_0_0(t);
  r_19 = t;
  t = (ATerm) ATinsert(CheckATermList(r_19), term_y_25);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_r_25;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm c_20 = NULL,l_20 = NULL,p_20 = NULL;
  t = pass_verbose_0_0(t);
  l_20 = t;
  t = term_u_25;
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(a_26);
        t = (ATerm) ATinsert(ATempty, term_x_25);
      }
    else
      {
        t = z_25;
        t = (ATerm) ATempty;
      }
  }
  p_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_20), l_20);
  t = concat_0_0(t);
  c_20 = t;
  t = (ATerm) ATinsert(CheckATermList(c_20), term_y_25);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_b_26;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  t = pass_verbose_0_0(t);
  d_21 = t;
  t = term_u_25;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(e_26);
        t = (ATerm) ATinsert(ATempty, term_u_25);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATempty;
      }
  }
  e_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_21), d_21);
  t = concat_0_0(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm g_21 = NULL,j_21 = NULL;
  t = pass_verbose_0_0(t);
  g_21 = t;
  t = term_u_25;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(g_26);
        t = (ATerm) ATinsert(ATempty, term_u_25);
      }
    else
      {
        t = f_26;
        t = (ATerm) ATempty;
      }
  }
  j_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_21), g_21);
  t = concat_0_0(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_h_26;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,s_17 = NULL,t_2 = NULL,s_2 = NULL;
  t = if_verbose6_1_0(v_3, t);
  n_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_17);
  q_17 = t;
  t = s_17;
  t = basename_1_0(_id, t);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_17);
  s_2 = t;
  t = SSLsetAnnotations(s_2, q_17);
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_17;
  if(match_cons(t, sym_FILE_1))
    {
      p_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_17);
  o_17 = t;
  t = p_17;
  t = basename_1_0(_id, t);
  if((m_17 != t))
    {
      _fail(t);
    }
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_17);
  t_2 = t;
  t = SSLsetAnnotations(t_2, o_17);
  t = pass_sort_0_0(t);
  l_17 = t;
  t = n_17;
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_18 = ATgetArgument(t, 0);
            {
              ATerm g_9 = NULL,b_3 = NULL;
              t = SSLgetAnnotations(n_17);
              g_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_18);
              b_3 = t;
              t = SSLsetAnnotations(b_3, g_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_17;
          }
        LocalPopChoice(j_26);
        {
          static ATerm y_3 (ATerm t)
          {
            ATerm t_18 = NULL,u_18 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(z_3, t);
            u_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_18, l_17);
            t = conc_0_0(t);
            t_18 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_18), k_17), term_l_26), term_k_26);
            return(t);
          }
          t = xtc_transform_file_2_0(x_3, y_3, t);
        }
      }
    else
      {
        t = i_26;
        {
          static ATerm d_4 (ATerm t)
          {
            ATerm y_18 = NULL,a_19 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(e_4, t);
            a_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_19, l_17);
            t = conc_0_0(t);
            y_18 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(y_18), k_17), term_l_26), term_k_26);
            return(t);
          }
          t = xtc_transform_term_2_0(b_4, d_4, t);
        }
      }
  }
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL,q_19 = NULL;
        q_19 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_19 = ATgetArgument(t, 0);
            {
              ATerm p_9 = NULL,c_3 = NULL;
              t = SSLgetAnnotations(q_19);
              p_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_19);
              c_3 = t;
              t = SSLsetAnnotations(c_3, p_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_19;
          }
        LocalPopChoice(n_26);
        t = xtc_transform_file_2_0(f_4, g_4, t);
      }
    else
      {
        t = m_26;
        t = xtc_transform_term_2_0(i_4, k_4, t);
      }
  }
  {
    static ATerm l_4 (ATerm t)
    {
      static ATerm m_4 (ATerm t)
      {
        t = m_17;
        t = guarantee_extension_1_0(t_4, t);
        return(t);
      }
      t = copy_to_1_0(m_4, t);
      return(t);
    }
    t = if_keep1_1_0(l_4, t);
  }
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_21 = NULL,c_21 = NULL;
        c_21 = t;
        if(match_cons(t, sym_FILE_1))
          {
            b_21 = ATgetArgument(t, 0);
            {
              ATerm n_10 = NULL,d_3 = NULL;
              t = SSLgetAnnotations(c_21);
              n_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_21);
              d_3 = t;
              t = SSLsetAnnotations(d_3, n_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_21;
          }
        LocalPopChoice(p_26);
        t = xtc_transform_file_2_0(v_4, x_4, t);
      }
    else
      {
        t = o_26;
        t = xtc_transform_term_2_0(z_4, a_5, t);
      }
  }
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL,v_21 = NULL;
        v_21 = t;
        if(match_cons(t, sym_FILE_1))
          {
            t_21 = ATgetArgument(t, 0);
            {
              ATerm v_10 = NULL,e_3 = NULL;
              t = SSLgetAnnotations(v_21);
              v_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_21);
              e_3 = t;
              t = SSLsetAnnotations(e_3, v_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_21;
          }
        LocalPopChoice(r_26);
        t = xtc_transform_file_2_0(b_5, pass_verbose_0_0, t);
      }
    else
      {
        t = q_26;
        t = xtc_transform_term_2_0(c_5, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  static ATerm y_23 (ATerm t)
  {
    ATerm l_23 = NULL,m_23 = NULL,u_23 = NULL;
    u_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_23 = ATgetFirst((ATermList) t);
        m_23 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_11 = NULL,d_12 = NULL,j_8 = NULL;
          t = SSLgetAnnotations(u_23);
          v_11 = t;
          t = m_23;
          t = y_23(t);
          d_12 = t;
          t = (ATerm) ATinsert(CheckATermList(d_12), l_23);
          j_8 = t;
          t = SSLsetAnnotations(j_8, v_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_23;
        t = u_71(t);
      }
    return(t);
  }
  t = y_23(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_22 = NULL,q_22 = NULL,t_22 = NULL;
  k_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_22;
    }
  else
    {
      static ATerm d_5 (ATerm t)
      {
        t = not_null(t_22);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_22 = ATgetFirst((ATermList) t);
          if(((t_22 != NULL) && (t_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_22;
      t = at_end_1_0(d_5, t);
    }
  return(t);
}
static ATerm x_24 (ATerm h_24, ATerm t)
{
  ATerm j_24 = NULL;
  t = SSL_explode_term(h_24);
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  u_24 = t;
  if(match_cons(t, sym__2))
    {
      s_24 = ATgetArgument(t, 0);
      t_24 = ATgetArgument(t, 1);
      {
        ATerm t_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm g_5 (ATerm t)
            {
              t = t_24;
              return(t);
            }
            t = s_24;
            t = at_end_1_0(g_5, t);
            LocalPopChoice(u_26);
          }
        else
          {
            t = t_26;
            t = x_24(u_24, t);
          }
      }
    }
  else
    {
      t = x_24(u_24, t);
    }
  return(t);
}
static ATerm v_7 (ATerm a_39, ATerm z_38, ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,h_25 = NULL;
  t = a_39;
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATempty;
      }
  }
  d_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_38, d_25);
  t = conc_0_0(t);
  c_25 = t;
  t = term_x_26;
  h_25 = t;
  t = SSL_table_put(h_25, a_39, c_25);
  t = (ATerm) ATmakeAppl(sym__3, term_x_26, a_39, c_25);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  t_25 = t;
  t = SSL_explode_string(t_25);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm g_27 (ATerm t)
        {
          ATerm c_27 = NULL,d_27 = NULL,f_27 = NULL;
          c_27 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_27 = ATgetFirst((ATermList) t);
              f_27 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_12 = NULL,a_13 = NULL,p_8 = NULL;
                t = SSLgetAnnotations(c_27);
                x_12 = t;
                t = f_27;
                t = g_27(t);
                a_13 = t;
                t = (ATerm) ATinsert(CheckATermList(a_13), d_27);
                p_8 = t;
                t = SSLsetAnnotations(p_8, x_12);
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                {
                  ATerm o_13 = NULL,s_8 = NULL;
                  t = SSLgetAnnotations(c_27);
                  o_13 = t;
                  t = d_27;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, d_27);
                  s_8 = t;
                  t = SSLsetAnnotations(s_8, o_13);
                }
              }
          }
          return(t);
        }
        t = g_27(t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATempty;
      }
  }
  s_25 = t;
  t = SSL_implode_string(s_25);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_27 = NULL;
  static ATerm h_5 (ATerm t)
  {
    ATerm q_27 = NULL,r_27 = NULL;
    q_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), q_27);
    t = l_8(not_null(n_27), q_27, t);
    r_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
    return(t);
  }
  if(((n_27 != NULL) && (n_27 != t)))
    _fail(t);
  else
    n_27 = t;
  t = SSL_table_keys(n_27);
  t = map_1_0(h_5, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm u_82 (ATerm), ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  {
    ATerm e_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_27 = NULL;
        t = term_z_12;
        t = get_config_0_0(t);
        x_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_27, term_p_19);
        t = geq_0_0(t);
        t = t_27;
        t = u_82(t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = e_27;
        t = t_27;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm d_28 = NULL;
  d_28 = t;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_28 = NULL;
        t = term_z_12;
        t = get_config_0_0(t);
        j_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_28, term_d_16);
        t = geq_0_0(t);
        t = d_28;
        t = t_82(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = d_28;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_28 = NULL;
        t = term_z_12;
        t = get_config_0_0(t);
        o_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_28, term_j_14);
        t = geq_0_0(t);
        t = m_28;
        t = v_82(t);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = m_28;
      }
  }
  return(t);
}
static ATerm x_7 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm f_25, ATerm e_25, ATerm t)
{
  t = m_75(t);
  {
    static ATerm m_5 (ATerm t)
    {
      ATerm q_28 = NULL;
      q_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_25, q_28);
      t = l_75(t);
      return(t);
    }
    t = fetch_1_0(m_5, t);
  }
  t = e_25;
  return(t);
}
static ATerm y_7 (ATerm i_75 (ATerm), ATerm b_25, ATerm a_25, ATerm t)
{
  static ATerm s_29 (ATerm t)
  {
    ATerm d_29 = NULL,f_29 = NULL,i_29 = NULL;
    d_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_29 = ATgetFirst((ATermList) t);
            i_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_27 = t;
          int o_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_29;
              {
                static ATerm o_5 (ATerm t)
                {
                  t = a_25;
                  return(t);
                }
                t = x_7(i_75, o_5, f_29, i_29, t);
              }
              t = s_29(t);
              LocalPopChoice(o_27);
            }
          else
            {
              t = m_27;
              {
                ATerm d_14 = NULL,h_14 = NULL,x_8 = NULL;
                t = SSLgetAnnotations(d_29);
                d_14 = t;
                t = i_29;
                t = s_29(t);
                h_14 = t;
                t = (ATerm) ATinsert(CheckATermList(h_14), f_29);
                x_8 = t;
                t = SSLsetAnnotations(x_8, d_14);
              }
            }
        }
      }
    return(t);
  }
  t = b_25;
  t = s_29(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm m_30 = NULL;
  if(match_cons(t, sym__2))
    {
      m_30 = ATgetArgument(t, 0);
      if((m_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,g_30 = NULL;
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_37, s_37);
  {
    ATerm p_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_27 = ATgetArgument(t, 0);
            ATerm v_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_37, s_37);
        t = l_8(r_37, s_37, t);
        LocalPopChoice(s_27);
      }
    else
      {
        t = p_27;
        t = (ATerm) ATempty;
      }
  }
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_30, t_37);
  t = y_7(p_5, g_30, t_37, t);
  d_30 = t;
  t = SSL_table_put(r_37, s_37, d_30);
  t = c_30;
  return(t);
}
static ATerm a_8 (ATerm x_82 (ATerm), ATerm b_38, ATerm a_38, ATerm t)
{
  static ATerm u_5 (ATerm t)
  {
    ATerm n_30 = NULL,q_30 = NULL;
    if(match_cons(t, sym__2))
      {
        n_30 = ATgetArgument(t, 0);
        q_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, b_38, n_30, q_30);
    t = x_82(t);
    return(t);
  }
  t = a_38;
  t = map_1_0(u_5, t);
  return(t);
}
static ATerm e_8 (ATerm c_40, ATerm d_40, ATerm t)
{
  t = SSL_access(c_40, d_40);
  return(t);
}
static ATerm r_31 (ATerm j_31, ATerm t)
{
  t = SSL_fclose(j_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  p_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_31 = ATgetArgument(t, 0);
      {
        ATerm w_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_31);
            LocalPopChoice(y_27);
          }
        else
          {
            t = w_27;
            t = r_31(p_31, t);
          }
      }
    }
  else
    {
      t = r_31(p_31, t);
    }
  return(t);
}
static ATerm b_8 (ATerm e_18, ATerm t)
{
  t = SSL_read_term_from_stream(e_18);
  return(t);
}
static ATerm c_8 (ATerm l_40, ATerm m_40, ATerm t)
{
  ATerm u_31 = NULL;
  t = SSL_fopen(l_40, m_40);
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_31 = NULL;
  t = SSL_stdin_stream();
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_31 = NULL;
  t = SSL_stdout_stream();
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  t = SSL_stderr_stream();
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_31);
  return(t);
}
static ATerm p_33 (ATerm g_32, ATerm t)
{
  ATerm h_32 = NULL;
  t = SSL_explode_term(g_32);
  if(match_cons(t, sym__2))
    {
      ATerm z_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_28 = ATgetArgument(t, 1);
        if(((ATgetType(a_28) == AT_LIST) && !(ATisEmpty(a_28))))
          {
            h_32 = ATgetFirst((ATermList) a_28);
            {
              ATerm b_28 = (ATerm) ATgetNext((ATermList) a_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_33 (ATerm n_32, ATerm q_32, ATerm r_32, ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,w_32 = NULL,z_32 = NULL,d_9 = NULL;
  t = SSLgetAnnotations(r_32);
  w_32 = t;
  t = n_32;
  if(match_cons(t, sym_Path_1))
    {
      z_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_32, q_32);
  d_9 = t;
  t = SSLsetAnnotations(d_9, w_32);
  if(match_cons(t, sym__2))
    {
      s_32 = ATgetArgument(t, 0);
      t_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(s_32, t_32, t);
  return(t);
}
static ATerm r_33 (ATerm b_33, ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,j_33 = NULL,e_9 = NULL;
  t = SSLgetAnnotations(d_33);
  g_33 = t;
  t = SSL_is_string(b_33);
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_33, c_33);
  e_9 = t;
  t = SSLsetAnnotations(e_9, g_33);
  if(match_cons(t, sym__2))
    {
      e_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(e_33, f_33, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  m_33 = t;
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
      {
        ATerm c_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_33(m_33, t);
            LocalPopChoice(e_28);
          }
        else
          {
            t = c_28;
            {
              ATerm f_28 = t;
              int g_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_33(n_33, o_33, m_33, t);
                  LocalPopChoice(g_28);
                }
              else
                {
                  t = f_28;
                  t = r_33(n_33, o_33, m_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_33(m_33, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,g_34 = NULL;
  g_34 = t;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_34, term_k_28);
        t = d_8(t);
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        {
          ATerm s_15 = NULL,v_15 = NULL;
          t = term_l_28;
          v_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_28, g_34);
          t = k_8(v_15, g_34, t);
          s_15 = t;
          t = SSL_perror(s_15);
          _fail(t);
        }
      }
  }
  w_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(x_33, t);
  v_33 = t;
  t = w_33;
  t = fclose_0_0(t);
  t = v_33;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_n_28;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_34 = NULL,m_34 = NULL;
      k_34 = t;
      t = (ATerm) ATinsert(ATempty, term_t_28);
      m_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_34, (ATerm) ATinsert(ATempty, term_t_28));
      t = e_8(k_34, m_34, t);
      LocalPopChoice(s_28);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_28;
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_28 = t;
            if((PushChoice() == 0))
              {
                ATerm n_34 = NULL,p_34 = NULL;
                n_34 = t;
                t = (ATerm) ATinsert(ATempty, term_s_23);
                p_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_34, (ATerm) ATinsert(ATempty, term_s_23));
                t = e_8(n_34, p_34, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_28;
              }
            t = debug_1_0(y_5, t);
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            t = debug_1_0(a_6, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = debug_1_0(e_6, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_x_28;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = debug_1_0(h_6, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_y_28;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,y_35 = NULL;
  v_35 = t;
  t = term_w_20;
  w_35 = t;
  t = (ATerm) ATinsert(ATempty, term_z_28);
  y_35 = t;
  t = SSL_printnl(w_35, y_35);
  t = v_35;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm z_35 = NULL,c_36 = NULL,d_36 = NULL;
  if(match_cons(t, sym__3))
    {
      z_35 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
      d_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_7(z_35, c_36, d_36, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  t = term_w_20;
  f_36 = t;
  t = (ATerm) ATinsert(ATempty, term_a_29);
  g_36 = t;
  t = SSL_printnl(f_36, g_36);
  t = e_36;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,k_36 = NULL;
  h_36 = t;
  t = term_w_20;
  i_36 = t;
  t = (ATerm) ATinsert(ATempty, term_z_28);
  k_36 = t;
  t = SSL_printnl(i_36, k_36);
  t = h_36;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  q_34 = t;
  t = if_verbose5_1_0(d_6, t);
  {
    ATerm b_29 = t;
    if((PushChoice() == 0))
      {
        ATerm t_35 = NULL,u_35 = NULL;
        t = term_c_29;
        t_35 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, q_34);
        u_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_29, (ATerm) ATmakeAppl(sym_Imported_1, q_34));
        t = l_8(t_35, u_35, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_29;
      }
  }
  t_34 = t;
  t = term_c_29;
  p_35 = t;
  t = term_e_29;
  q_35 = t;
  t = (ATerm) ATinsert(ATempty, q_34);
  r_35 = t;
  t = SSL_table_put(p_35, q_35, r_35);
  t = t_34;
  t = if_verbose4_1_0(g_6, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(i_6, t);
  s_34 = t;
  t = term_c_29;
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_29, s_34);
  t = a_8(k_6, o_35, s_34, t);
  t = if_verbose6_1_0(o_6, t);
  t = term_c_29;
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, q_34);
  v_34 = t;
  t = (ATerm) ATempty;
  w_34 = t;
  t = SSL_table_put(u_34, v_34, w_34);
  t = (ATerm) ATmakeAppl(sym__3, term_c_29, (ATerm)ATmakeAppl(sym_Imported_1, q_34), (ATerm) ATempty);
  t = if_verbose4_1_0(p_6, t);
  return(t);
}
ATerm filter_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,m_37 = NULL,n_37 = NULL;
  j_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_37;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_37 = ATgetFirst((ATermList) t);
          n_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_16 = NULL,g_16 = NULL,m_16 = NULL,k_9 = NULL;
            t = SSLgetAnnotations(j_37);
            c_16 = t;
            t = m_37;
            t = d_79(t);
            g_16 = t;
            t = n_37;
            t = filter_1_0(d_79, t);
            m_16 = t;
            t = (ATerm) ATinsert(CheckATermList(m_16), g_16);
            k_9 = t;
            t = SSLsetAnnotations(k_9, c_16);
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            t = n_37;
            t = filter_1_0(d_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm t)
{
  static ATerm y_37 (ATerm t)
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_69(t);
        t = y_37(t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = j_69(t);
      }
    return(t);
  }
  t = y_37(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_29;
      t = get_config_0_0(t);
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      {
        ATerm o_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_38 = NULL;
            t = term_q_29;
            f_38 = t;
            t = SSL_getenv(f_38);
            LocalPopChoice(p_29);
          }
        else
          {
            t = o_29;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = debug_1_0(t_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_r_29;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  t = term_c_29;
  n_38 = t;
  t = term_t_29;
  o_38 = t;
  t = term_u_29;
  t = l_8(n_38, o_38, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_29 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_29;
      }
  }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = debug_1_0(a_7, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_38 = NULL;
  t = if_verbose5_1_0(r_6, t);
  h_38 = t;
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_38 = NULL,j_38 = NULL;
        t = term_c_29;
        i_38 = t;
        t = term_e_29;
        j_38 = t;
        t = term_z_29;
        t = l_8(i_38, j_38, t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        {
          ATerm k_38 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_38 = t;
          t = repeat_2_0(x_6, _id, t);
          t = k_38;
        }
      }
  }
  t = h_38;
  t = if_verbose5_1_0(y_6, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = debug_1_0(c_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_a_30;
  return(t);
}
static ATerm k_40 (ATerm b_39, ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
  t = term_c_29;
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, b_39);
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_29, (ATerm) ATmakeAppl(sym_Tool_1, b_39));
  t = l_8(m_39, n_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_30 = ATgetFirst((ATermList) t);
      if(match_cons(b_30, sym__2))
        {
          ATerm f_30 = ATgetArgument(b_30, 0);
          l_39 = ATgetArgument(b_30, 1);
        }
      else
        _fail(t);
      {
        ATerm e_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_39;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = debug_1_0(f_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_a_30;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_c_29;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_39 = NULL,p_39 = NULL,t_39 = NULL;
      t = if_verbose5_1_0(b_7, t);
      t = xtc_load_0_0(t);
      t_39 = t;
      if(match_cons(t, sym__2))
        {
          o_39 = ATgetArgument(t, 0);
          p_39 = ATgetArgument(t, 1);
          {
            ATerm k_30 = t;
            int l_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_40 = NULL,b_40 = NULL,e_40 = NULL;
                t = term_c_29;
                b_40 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, o_39);
                e_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_c_29, (ATerm) ATmakeAppl(sym_Tool_1, o_39));
                t = l_8(b_40, e_40, t);
                {
                  static ATerm d_7 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((p_39 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((a_40 != NULL) && (a_40 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_40 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(d_7, t);
                }
                t = not_null(a_40);
                LocalPopChoice(l_30);
              }
            else
              {
                t = k_30;
                t = k_40(t_39, t);
              }
          }
        }
      else
        {
          t = k_40(t_39, t);
        }
      t = if_verbose5_1_0(e_7, t);
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      {
        ATerm j_40 = NULL,x_16 = NULL,y_16 = NULL;
        j_40 = t;
        t = term_w_20;
        x_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_30), j_40), term_o_30);
        y_16 = t;
        t = SSL_printnl(x_16, y_16);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_30), j_40), term_o_30);
        t = if_verbose5_1_0(h_7, t);
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
static ATerm f_8 (ATerm y_14, ATerm z_14, ATerm t)
{
  t = SSL_copy(y_14, z_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  s_41 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_17 = NULL;
        t = s_41;
        t = o_0(t);
        d_17 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = d_17;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = d_17;
          }
        t = (ATerm) ATmakeAppl(sym__2, t_41, d_17);
        t = f_8(t_41, d_17, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_41);
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_17 = NULL;
              t = s_41;
              t = o_0(t);
              r_17 = t;
              {
                ATerm v_30 = t;
                if((PushChoice() == 0))
                  {
                    ATerm t_17 = NULL;
                    t_17 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = t_17;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = t_17;
                          }
                        else
                          {
                            t = t_17;
                            if((t_41 != t))
                              {
                                _fail(t);
                              }
                            t = t_17;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_30;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, t_41, r_17);
              t = f_8(t_41, r_17, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_41);
              LocalPopChoice(u_30);
            }
          else
            {
              t = t_30;
              t = s_41;
              t = o_0(t);
              if((t_41 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_41);
            }
        }
      }
  }
  return(t);
}
static ATerm g_8 (ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL;
  d_42 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_36, a_37);
        t = l_8(z_36, a_37, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_30 = ATgetFirst((ATermList) t);
            c_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_30);
        t = SSL_table_put(z_36, a_37, c_42);
        t = (ATerm) ATmakeAppl(sym__3, z_36, a_37, c_42);
      }
    else
      {
        t = w_30;
        t = SSL_table_remove(z_36, a_37);
        t = (ATerm) ATmakeAppl(sym__2, z_36, a_37);
      }
  }
  t = d_42;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  m_42 = t;
  t = e_81(t);
  l_42 = t;
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_42 = NULL;
        t = term_n_21;
        t_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_42, term_n_21);
        t = l_8(l_42, t_42, t);
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_42 = ATgetFirst((ATermList) t);
      j_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_21;
  n_42 = t;
  t = SSL_table_put(l_42, n_42, j_42);
  t = k_42;
  {
    static ATerm k_7 (ATerm t)
    {
      ATerm u_42 = NULL;
      u_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_42, u_42);
      t = g_8(l_42, u_42, t);
      return(t);
    }
    t = map_1_0(k_7, t);
  }
  t = m_42;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_82(t);
      t = f_82(t);
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = f_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  x_42 = t;
  t = d_81(t);
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_42, term_n_21);
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_43 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_31 = ATgetArgument(t, 0);
            ATerm g_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_21;
        f_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_42, term_n_21);
        t = l_8(w_42, f_43, t);
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        t = (ATerm) ATempty;
      }
  }
  y_42 = t;
  t = term_n_21;
  z_42 = t;
  t = (ATerm) ATinsert(CheckATermList(y_42), (ATerm) ATempty);
  a_43 = t;
  t = SSL_table_put(w_42, z_42, a_43);
  t = x_42;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_s_21;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm o_43 = NULL;
  o_43 = t;
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(o_43);
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        t = o_43;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  ATerm i_43 = NULL;
  static ATerm q_7 (ATerm t)
  {
    ATerm j_43 = NULL;
    j_43 = t;
    {
      ATerm k_31 = t;
      int l_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_43 = NULL,l_43 = NULL;
          t = term_s_21;
          k_43 = t;
          t = term_n_21;
          l_43 = t;
          t = term_m_31;
          t = l_8(k_43, l_43, t);
          LocalPopChoice(l_31);
        }
      else
        {
          t = k_31;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_43 != NULL) && (i_43 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_43 = ATgetFirst((ATermList) t);
        {
          ATerm n_31 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = i_43;
    t = map_1_0(s_7, t);
    t = j_43;
    t = end_scope_1_0(n_8, t);
    return(t);
  }
  t = begin_scope_1_0(l_7, t);
  t = restore_always_2_0(e_85, q_7, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm q_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_21;
      t = get_config_0_0(t);
      LocalPopChoice(s_31);
    }
  else
    {
      t = q_31;
      t = term_y_22;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  static ATerm t_8 (ATerm t)
  {
    ATerm t_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_43 = NULL;
        t = term_a_22;
        t = get_config_0_0(t);
        r_43 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_43);
        LocalPopChoice(x_31);
      }
    else
      {
        t = t_31;
        t = term_i_24;
      }
    t = f_85(t);
    t = copy_to_1_0(v_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(t_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  s_43 = t;
  t = term_x_21;
  t = whoami_0_0(t);
  t_43 = t;
  t = term_w_20;
  v_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_32), t_43), term_y_31);
  w_43 = t;
  t = SSL_printnl(v_43, w_43);
  t = term_d_13;
  u_43 = t;
  t = SSL_exit(u_43);
  t = s_43;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm y_43 = NULL;
  y_43 = t;
  if(match_string(t, "-k"))
    {
      t = y_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_43;
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
  z_43 = t;
  t = SSL_string_to_int(z_43);
  a_44 = t;
  t = term_e_22;
  b_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_22, a_44);
  t = o_8(b_44, a_44, t);
  t = z_43;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_8, y_8, z_8, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  if(match_string(t, "-S"))
    {
      t = d_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_44;
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  t = term_z_12;
  e_44 = t;
  t = term_c_32;
  f_44 = t;
  t = term_d_32;
  t = o_8(e_44, f_44, t);
  t = term_e_32;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  g_44 = t;
  t = SSL_string_to_int(g_44);
  h_44 = t;
  t = term_z_12;
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, h_44);
  t = o_8(i_44, h_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_44);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_i_32;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  t = term_j_22;
  j_44 = t;
  t = term_x_21;
  k_44 = t;
  t = term_j_32;
  t = o_8(j_44, k_44, t);
  t = term_k_32;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_9, b_9, c_9, t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = m_32;
      {
        ATerm v_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_9, h_9, i_9, t);
            LocalPopChoice(x_32);
          }
        else
          {
            t = v_32;
            t = Option_3_0(j_9, l_9, m_9, t);
          }
      }
    }
  return(t);
}
static ATerm o_8 (ATerm u_38, ATerm v_38, ATerm t)
{
  ATerm l_44 = NULL;
  t = term_x_26;
  l_44 = t;
  t = SSL_table_put(l_44, u_38, v_38);
  t = (ATerm) ATmakeAppl(sym__3, term_x_26, u_38, v_38);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
      t = term_x_21;
      t = e_0(t);
      q_44 = t;
      t = term_y_32;
      r_44 = t;
      t = term_a_33;
      s_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_32, term_a_33, q_44);
      t = m_8(r_44, s_44, q_44, t);
      _fail(t);
    }
  else
    {
      ATerm v_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_44 = ATgetFirst((ATermList) t);
          p_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_44;
      t = c_0(t);
      t = term_x_21;
      t = d_0(t);
      v_44 = t;
      t = (ATerm) ATinsert(CheckATermList(p_44), v_44);
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  if(match_string(t, "-o"))
    {
      t = x_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_44;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  y_44 = t;
  t = term_z_21;
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_21, y_44);
  t = o_8(z_44, y_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_44);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_9, q_9, s_9, t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  if(match_string(t, "-i"))
    {
      t = b_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_45;
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  c_45 = t;
  t = term_a_22;
  d_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_22, c_45);
  t = o_8(d_45, c_45, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_45);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_9, u_9, x_9, t);
  return(t);
}
static ATerm m_8 (ATerm u_36, ATerm v_36, ATerm t_36, ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_33 = ATgetArgument(t, 0);
            ATerm y_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
        t = l_8(u_36, v_36, t);
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        t = (ATerm) ATempty;
      }
  }
  g_45 = t;
  t = (ATerm) ATinsert(CheckATermList(g_45), t_36);
  h_45 = t;
  t = SSL_table_put(u_36, v_36, h_45);
  t = f_45;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
      t = term_x_21;
      t = n_0(t);
      s_45 = t;
      t = term_y_32;
      t_45 = t;
      t = term_a_33;
      u_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_32, term_a_33, s_45);
      t = m_8(t_45, u_45, s_45, t);
      _fail(t);
    }
  else
    {
      ATerm y_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_45 = ATgetFirst((ATermList) t);
          p_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_45 = ATgetFirst((ATermList) t);
          r_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_45;
      t = k_0(t);
      t = q_45;
      t = l_0(t);
      y_45 = t;
      t = (ATerm) ATinsert(CheckATermList(r_45), y_45);
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm a_46 = NULL;
  a_46 = t;
  if(match_string(t, "-I"))
    {
      t = a_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = a_46;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
  b_46 = t;
  t = term_j_23;
  c_46 = t;
  t = (ATerm) ATinsert(ATempty, b_46);
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_23, (ATerm) ATinsert(ATempty, b_46));
  t = v_7(c_46, d_46, t);
  t = b_46;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL;
  e_46 = t;
  t = term_y_24;
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, e_46);
  t = o_8(f_46, e_46, t);
  t = e_46;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_c_34;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  t = term_z_12;
  h_46 = t;
  t = term_c_32;
  i_46 = t;
  t = term_d_32;
  t = o_8(h_46, i_46, t);
  t = g_46;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_d_34;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
  j_46 = t;
  t = term_u_25;
  k_46 = t;
  t = term_d_13;
  l_46 = t;
  t = term_e_34;
  t = o_8(k_46, l_46, t);
  t = j_46;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm f_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(y_9, z_9, a_10, t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = f_34;
      {
        ATerm i_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_10, g_10, h_10, t);
            LocalPopChoice(j_34);
          }
        else
          {
            t = i_34;
            {
              ATerm l_34 = t;
              int o_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_10, k_10, m_10, t);
                  LocalPopChoice(o_34);
                }
              else
                {
                  t = l_34;
                  t = Option_3_0(o_10, p_10, q_10, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_21;
  t = whoami_0_0(t);
  m_46 = t;
  t = term_w_20;
  o_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_34), m_46);
  p_46 = t;
  t = SSL_printnl(o_46, p_46);
  t = term_d_13;
  n_46 = t;
  t = SSL_exit(n_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_34;
  t = get_config_0_0(t);
  return(t);
}
static ATerm h_8 (ATerm t_33, ATerm u_33, ATerm t)
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_33, u_33);
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
      t = SSL_addr(t_33, u_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_46;
      t = z_77(t);
    }
  else
    {
      ATerm w_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_46 = ATgetFirst((ATermList) t);
          t_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_46;
      t = foldr_2_0(z_77, a_78, t);
      w_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_46, w_46);
      t = a_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_c_32;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm l_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(l_18, o_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_46 = NULL,g_18 = NULL,h_18 = NULL;
  t = times_0_0(t);
  h_18 = t;
  t = SSL_explode_term(h_18);
  if(match_cons(t, sym__2))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_18;
  t = foldr_2_0(r_10, s_10, t);
  z_46 = t;
  t = SSL_TicksToSeconds(z_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
  k_47 = t;
  if(match_cons(t, sym__2))
    {
      l_47 = ATgetArgument(t, 0);
      m_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_47;
        if((l_47 != t))
          {
            _fail(t);
          }
        t = k_47;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = (ATerm) ATmakeAppl(sym__2, l_47, m_47);
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_47, m_47);
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
              t = SSL_gtr(l_47, m_47);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_47, m_47);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  ATerm q_47 = NULL;
  q_47 = t;
  {
    ATerm g_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_47 = NULL;
        t = term_z_12;
        t = get_config_0_0(t);
        s_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_47, term_d_13);
        t = geq_0_0(t);
        t = q_47;
        t = q_82(t);
        LocalPopChoice(i_35);
      }
    else
      {
        t = g_35;
        t = q_47;
      }
  }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,x_47 = NULL,y_47 = NULL;
  t = run_time_0_0(t);
  u_47 = t;
  t = term_x_21;
  t = whoami_0_0(t);
  v_47 = t;
  t = term_w_20;
  x_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_35), u_47), term_j_13), v_47);
  y_47 = t;
  t = SSL_printnl(x_47, y_47);
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_35), u_47), term_j_13), v_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_32;
  z_47 = t;
  t = SSL_exit(z_47);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL;
  i_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_48 = ATgetArgument(t, 0);
          {
            ATerm i_19 = NULL,n_9 = NULL;
            t = SSLgetAnnotations(i_48);
            i_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_48);
            n_9 = t;
            t = SSLsetAnnotations(n_9, i_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_35;
      t = get_config_0_0(t);
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      t = fetch_1_0(w_10, t);
    }
  t = u_86(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_48 = ATgetFirst((ATermList) t);
      m_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_48 = NULL,r_48 = NULL;
        static ATerm x_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_48)), not_null(r_48));
          return(t);
        }
        t = m_48;
        t = i_0(t);
        if(((q_48 != NULL) && (q_48 != t)))
          _fail(t);
        else
          q_48 = t;
        t = l_48;
        t = g_0(t);
        if(((r_48 != NULL) && (r_48 != t)))
          _fail(t);
        else
          r_48 = t;
        t = m_48;
        t = reverse_acc_2_0(g_0, x_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_21;
      t = i_0(t);
    }
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,r_9 = NULL;
  x_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_48);
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_48);
  r_9 = t;
  t = SSLsetAnnotations(r_9, v_48);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm z_48 = NULL;
  z_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_48), term_n_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  ATerm s_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_34;
      t = get_config_0_0(t);
      LocalPopChoice(x_35);
    }
  else
    {
      t = s_35;
      t = fetch_1_0(y_10, t);
    }
  t = term_a_36;
  t = echo_0_0(t);
  t = term_y_32;
  t_48 = t;
  t = term_a_33;
  u_48 = t;
  t = term_b_36;
  t = l_8(t_48, u_48, t);
  t = reverse_acc_2_0(_id, a_11, t);
  t = map_1_0(b_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm n_71 (ATerm), ATerm t)
{
  static ATerm w_49 (ATerm t)
  {
    ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
    t_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_49 = ATgetFirst((ATermList) t);
        v_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_36 = t;
      int l_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_19 = NULL,y_19 = NULL,v_9 = NULL;
          t = SSLgetAnnotations(t_49);
          v_19 = t;
          t = u_49;
          t = n_71(t);
          y_19 = t;
          t = (ATerm) ATinsert(CheckATermList(v_49), y_19);
          v_9 = t;
          t = SSLsetAnnotations(v_9, v_19);
          LocalPopChoice(l_36);
        }
      else
        {
          t = j_36;
          {
            ATerm m_20 = NULL,v_20 = NULL,w_9 = NULL;
            t = SSLgetAnnotations(t_49);
            m_20 = t;
            t = v_49;
            t = w_49(t);
            v_20 = t;
            t = (ATerm) ATinsert(CheckATermList(v_20), u_49);
            w_9 = t;
            t = SSLsetAnnotations(w_9, m_20);
          }
        }
    }
    return(t);
  }
  t = w_49(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
  a_50 = t;
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_36 = ATgetFirst((ATermList) t);
                ATerm p_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_50;
          }
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        t = (ATerm) ATinsert(ATempty, a_50);
      }
  }
  b_50 = t;
  t = term_y_22;
  c_50 = t;
  t = SSL_printnl(c_50, b_50);
  t = a_50;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_34;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_8 (ATerm o_32, ATerm p_32, ATerm t)
{
  t = SSL_strcat(o_32, p_32);
  return(t);
}
ATerm debug_1_0 (ATerm l_66 (ATerm), ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  g_50 = t;
  t = l_66(t);
  h_50 = t;
  t = term_w_20;
  i_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_50), h_50);
  j_50 = t;
  t = SSL_printnl(i_50, j_50);
  t = g_50;
  return(t);
}
ATerm map_1_0 (ATerm d_71 (ATerm), ATerm t)
{
  static ATerm y_50 (ATerm t)
  {
    ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
    v_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_50;
      }
    else
      {
        ATerm k_21 = NULL,u_21 = NULL,y_21 = NULL,b_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_50 = ATgetFirst((ATermList) t);
            x_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_50);
        k_21 = t;
        t = w_50;
        t = d_71(t);
        u_21 = t;
        t = x_50;
        t = y_50(t);
        y_21 = t;
        t = (ATerm) ATinsert(CheckATermList(y_21), u_21);
        b_10 = t;
        t = SSLsetAnnotations(b_10, k_21);
      }
    return(t);
  }
  t = y_50(t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_s_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_51 = NULL;
      g_51 = t;
      t = SSL_is_string(g_51);
      LocalPopChoice(x_36);
    }
  else
    {
      t = w_36;
      {
        ATerm y_36 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_11, t);
            LocalPopChoice(b_37);
          }
        else
          {
            t = y_36;
            {
              ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
              m_51 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_51 = ATgetArgument(t, 0);
                  t = n_51;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_51 = ATgetArgument(t, 0);
                      t = n_51;
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
                            t = debug_1_0(d_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_51 = NULL,t_51 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_51 = ATgetArgument(t, 0);
                          o_51 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_51;
                      t = eval_config_0_0(t);
                      s_51 = t;
                      t = o_51;
                      t = eval_config_0_0(t);
                      t_51 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_51, t_51);
                      t = k_8(s_51, t_51, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_8 (ATerm l_38, ATerm m_38, ATerm t)
{
  t = SSL_table_get(l_38, m_38);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL;
  x_51 = t;
  t = term_x_26;
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_26, x_51);
  t = l_8(y_51, x_51, t);
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_51 = NULL,a_52 = NULL;
        t = eval_config_0_0(t);
        z_51 = t;
        t = term_x_26;
        a_52 = t;
        t = SSL_table_put(a_52, x_51, z_51);
        t = z_51;
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
      }
  }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL;
  t = term_g_37;
  d_52 = t;
  t = term_x_21;
  e_52 = t;
  t = term_h_37;
  t = o_8(d_52, e_52, t);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_i_37;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
  t = term_g_37;
  h_52 = t;
  t = term_x_21;
  i_52 = t;
  t = term_h_37;
  t = o_8(h_52, i_52, t);
  t = term_q_25;
  f_52 = t;
  t = term_x_21;
  g_52 = t;
  t = term_k_37;
  t = o_8(f_52, g_52, t);
  t = term_l_37;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_o_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_11, f_11, i_11, t);
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      t = Option_3_0(j_11, k_11, l_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_58 (ATerm), ATerm d_58 (ATerm), ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,l_10 = NULL;
  o_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_52 = ATgetFirst((ATermList) t);
      l_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_52);
  j_52 = t;
  t = k_52;
  t = c_58(t);
  m_52 = t;
  t = l_52;
  t = d_58(t);
  n_52 = t;
  t = (ATerm) ATinsert(CheckATermList(n_52), m_52);
  l_10 = t;
  t = SSLsetAnnotations(l_10, j_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_88 (ATerm), ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,y_52 = NULL,z_52 = NULL,u_10 = NULL;
  t_52 = t;
  {
    ATerm u_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_37;
        t = s_88(t);
        LocalPopChoice(v_37);
      }
    else
      {
        t = u_37;
      }
  }
  t = t_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_52 = ATgetFirst((ATermList) t);
      w_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_52);
  u_52 = t;
  t = term_x_34;
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_34, v_52);
  t = o_8(z_52, v_52, t);
  t = w_52;
  {
    static ATerm j_53 (ATerm t)
    {
      ATerm x_37 = t;
      int z_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_38 = t;
          int d_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_53 = NULL;
              c_53 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_53;
              LocalPopChoice(d_38);
            }
          else
            {
              t = c_38;
              t = s_88(t);
              t = Cons_2_0(_id, j_53, t);
            }
          LocalPopChoice(z_37);
        }
      else
        {
          t = x_37;
          {
            ATerm f_53 = NULL,g_53 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_53 = ATgetFirst((ATermList) t);
                g_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_53), (ATerm) ATmakeAppl(sym_Undefined_1, f_53));
          }
        }
      return(t);
    }
    t = j_53(t);
  }
  y_52 = t;
  t = (ATerm) ATinsert(CheckATermList(y_52), (ATerm) ATmakeAppl(sym_Program_1, v_52));
  u_10 = t;
  t = SSLsetAnnotations(u_10, u_52);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  if(match_string(t, "--help"))
    {
      t = v_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_53;
        }
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL;
  t = term_m_35;
  w_53 = t;
  t = term_x_21;
  x_53 = t;
  t = term_e_38;
  t = o_8(w_53, x_53, t);
  t = term_g_38;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_p_38;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_88 (ATerm), ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
  q_53 = t;
  t = term_y_32;
  s_53 = t;
  t = term_a_33;
  t_53 = t;
  t = (ATerm) ATempty;
  u_53 = t;
  t = SSL_table_put(s_53, t_53, u_53);
  t = q_53;
  {
    static ATerm o_11 (ATerm t)
    {
      ATerm q_38 = t;
      int r_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_88(t);
          LocalPopChoice(r_38);
        }
      else
        {
          t = q_38;
          {
            ATerm s_38 = t;
            int t_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_11, r_11, u_11, t);
                LocalPopChoice(t_38);
              }
            else
              {
                t = s_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_11, t);
  }
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_54 = NULL;
        e_54 = t;
        {
          ATerm y_38 = t;
          int c_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_22 = NULL;
              t = e_54;
              {
                ATerm d_39 = t;
                int e_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_35;
                    t = get_config_0_0(t);
                    LocalPopChoice(e_39);
                  }
                else
                  {
                    t = d_39;
                    t = fetch_1_0(y_11, t);
                  }
              }
              t = e_54;
              t = default_system_usage_0_0(t);
              t = term_c_32;
              r_22 = t;
              t = SSL_exit(r_22);
              LocalPopChoice(c_39);
            }
          else
            {
              t = y_38;
              {
                ATerm b_23 = NULL;
                t = term_g_37;
                t = get_config_0_0(t);
                t = e_54;
                t = default_system_about_0_0(t);
                t = term_c_32;
                b_23 = t;
                t = SSL_exit(b_23);
              }
            }
        }
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        {
          ATerm f_39 = t;
          int g_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
              static ATerm b_12 (ATerm t)
              {
                ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,z_10 = NULL;
                k_54 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_54);
                i_54 = t;
                t = j_54;
                if(((o_53 != NULL) && (o_53 != t)))
                  _fail(t);
                else
                  o_53 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_54);
                z_10 = t;
                t = SSLsetAnnotations(z_10, i_54);
                return(t);
              }
              t = fetch_1_0(b_12, t);
              t = term_w_20;
              g_54 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_53)), term_h_39);
              h_54 = t;
              t = SSL_printnl(g_54, h_54);
              t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_53)), term_h_39));
              t = default_system_usage_0_0(t);
              t = term_d_13;
              f_54 = t;
              t = SSL_exit(f_54);
              LocalPopChoice(g_39);
            }
          else
            {
              t = f_39;
            }
        }
      }
  }
  p_53 = t;
  t = term_y_32;
  r_53 = t;
  t = SSL_table_destroy(r_53);
  t = p_53;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL;
  t = parse_options_1_0(w_86, t);
  p_54 = t;
  t = term_j_39;
  s_54 = t;
  t = SSL_table_create(s_54);
  t = term_j_39;
  q_54 = t;
  t = term_k_39;
  r_54 = t;
  t = SSL_table_put(q_54, r_54, p_54);
  t = p_54;
  t = y_86(t);
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_86, t);
        LocalPopChoice(r_39);
      }
    else
      {
        t = q_39;
        {
          ATerm s_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_86(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_39);
            }
          else
            {
              t = s_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      {
        ATerm x_39 = t;
        int y_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(y_39);
          }
        else
          {
            t = x_39;
            {
              ATerm z_39 = t;
              int f_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(f_40);
                }
              else
                {
                  t = z_39;
                  {
                    ATerm g_40 = t;
                    int h_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(i_12, o_12, p_12, t);
                        LocalPopChoice(h_40);
                      }
                    else
                      {
                        t = g_40;
                        {
                          ATerm i_40 = t;
                          int n_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(n_40);
                            }
                          else
                            {
                              t = i_40;
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
static ATerm g_12 (ATerm t)
{
  t = xtc_io_1_0(q_12, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL;
  t = term_y_25;
  u_54 = t;
  t = term_x_21;
  v_54 = t;
  t = term_o_40;
  t = o_8(u_54, v_54, t);
  t = term_p_40;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_q_40;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
  x_54 = t;
  t = term_r_40;
  t = xtc_find_path_0_0(t);
  y_54 = t;
  t = term_j_23;
  z_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_54), term_s_40);
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_23, (ATerm) ATinsert(ATinsert(ATempty, y_54), term_s_40));
  t = v_7(z_54, a_55, t);
  t = x_54;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(e_12, default_usage_0_0, _id, g_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
