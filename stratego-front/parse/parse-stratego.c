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
Symbol sym_Path_1;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_i_41;
ATerm term_h_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_b_40;
ATerm term_j_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_u_37;
ATerm term_n_37;
ATerm term_l_37;
ATerm term_f_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_o_36;
ATerm term_l_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_y_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_f_34;
ATerm term_d_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_e_33;
ATerm term_y_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_o_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_f_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_c_26;
ATerm term_x_25;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_q_23;
ATerm term_j_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_v_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
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
ATerm term_f_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_n_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_n_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_t_13, term_k_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_m_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_t_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_a_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_w_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_b_18, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_j_18, term_k_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_s_18, term_t_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_x_18, term_y_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_f_19, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_j_19, term_k_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_p_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_t_19, term_u_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_a_20, term_d_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_20, term_i_20, term_j_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_20, term_m_20, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_s_20, term_t_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_b_23);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_c_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_n_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_r_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_s_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_z_30);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_h_30);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_c_22);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_p_22);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_v_22);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_m_33);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_33);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_j_23, term_o_22);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_t_13);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_f_35);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_c_36);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__2, term_d_34, term_f_34);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym__2, term_x_36, term_o_22);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_o_22);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_o_22);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_x_36);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_o_22);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm i_7 (ATerm g_34, ATerm h_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm j_7 (ATerm y_17, ATerm z_17, ATerm t);
static ATerm k_7 (ATerm f_67 (ATerm), ATerm m_187, ATerm i_18, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t);
static ATerm l_7 (ATerm q_14, ATerm r_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm u_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm p_86 (ATerm), ATerm t);
static ATerm n_7 (ATerm e_82 (ATerm), ATerm o_35, ATerm m_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm f_85 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm q_84 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm p_83 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm p_7 (ATerm x_14, ATerm w_14, ATerm t);
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
static ATerm q_7 (ATerm k_39, ATerm j_466, ATerm t);
ATerm find_in_includes_1_0 (ATerm p_64 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm o_83 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm h_72 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm basename_1_0 (ATerm d_85 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm m_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_26 (ATerm a_26, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_7 (ATerm h_39, ATerm g_39, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm debug_1_0 (ATerm d_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm r_83 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm q_83 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm s_83 (ATerm), ATerm t);
static ATerm t_7 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm m_25, ATerm l_25, ATerm t);
static ATerm u_7 (ATerm f_76 (ATerm), ATerm i_25, ATerm h_25, ATerm t);
static ATerm z_5 (ATerm t);
static ATerm v_7 (ATerm y_37, ATerm z_37, ATerm a_38, ATerm t);
static ATerm w_7 (ATerm u_83 (ATerm), ATerm i_38, ATerm h_38, ATerm t);
static ATerm b_8 (ATerm e_40, ATerm f_40, ATerm t);
static ATerm e_34 (ATerm s_33, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_7 (ATerm e_18, ATerm t);
static ATerm y_7 (ATerm v_32, ATerm w_32, ATerm t);
static ATerm z_7 (ATerm n_40, ATerm o_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_37 (ATerm a_35, ATerm t);
static ATerm j_37 (ATerm r_35, ATerm s_35, ATerm t_35, ATerm t);
static ATerm k_37 (ATerm f_36, ATerm i_36, ATerm j_36, ATerm t);
static ATerm a_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm a_70 (ATerm), ATerm b_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm v_43 (ATerm j_42, ATerm t);
static ATerm m_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm c_8 (ATerm y_14, ATerm z_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm d_8 (ATerm g_37, ATerm h_37, ATerm t);
ATerm end_scope_1_0 (ATerm b_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm a_82 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm b_86 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
ATerm xtc_io_1_0 (ATerm c_86 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_8 (ATerm b_39, ATerm c_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm t_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm i_8 (ATerm b_37, ATerm c_37, ATerm a_37, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm m_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_8 (ATerm a_34, ATerm b_34, ATerm t);
ATerm foldr_2_0 (ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm t_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_83 (ATerm), ATerm t);
static ATerm u_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm need_help_1_0 (ATerm r_87 (ATerm), ATerm t);
ATerm map_1_0 (ATerm v_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_8 (ATerm s_38, ATerm t_38, ATerm t);
static ATerm j_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_89 (ATerm), ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm parse_options_1_0 (ATerm o_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
ATerm parse_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm i_7 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm j_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_34, h_34);
      LocalPopChoice(l_13);
    }
  else
    {
      t = j_13;
      t = SSL_subtr(g_34, h_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,m_0 = NULL,q_0 = NULL;
  t = term_n_13;
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL,u_0 = NULL;
        t = term_q_13;
        s_0 = t;
        t = term_n_13;
        u_0 = t;
        t = term_s_13;
        t = h_8(s_0, u_0, t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = term_t_13;
      }
  }
  b_0 = t;
  t = term_t_13;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_t_13);
  t = i_7(b_0, q_0, t);
  m_0 = t;
  t = SSL_int_to_string(m_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_n_13);
  return(t);
}
static ATerm j_7 (ATerm y_17, ATerm z_17, ATerm t)
{
  ATerm v_0 = NULL;
  t = SSL_write_term_to_stream_baf(y_17, z_17);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_0);
  return(t);
}
static ATerm k_7 (ATerm f_67 (ATerm), ATerm m_187, ATerm i_18, ATerm t)
{
  ATerm w_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_187, term_u_13);
  t = a_8(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, i_18);
  t = f_67(t);
  t = fclose_0_0(t);
  t = i_18;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      if(match_cons(v_13, sym_Stream_1))
        {
          d_1 = ATgetArgument(v_13, 0);
        }
      else
        _fail(t);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(d_1, e_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL;
  a_1 = t;
  t = xtc_new_file_0_0(t);
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_0, a_1);
  t = k_7(f_0, z_0, a_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_0);
  t = xtc_transform_file_2_0(o_85, p_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm l_7 (ATerm q_14, ATerm r_14, ATerm t)
{
  t = SSL_execvp(q_14, r_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,k_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      g_2 = ATgetArgument(t, 0);
      {
        ATerm x_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(g_2);
        x_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_13), x_0), term_w_13);
        y_0 = t;
        t = SSL_concat_strings(y_0);
      }
    }
  else
    {
      ATerm w_1 = NULL,z_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          g_2 = ATgetArgument(t, 0);
          h_2 = ATgetArgument(t, 1);
          k_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(h_2);
      w_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_2), term_a_14), w_1), term_z_13), g_2);
      z_1 = t;
      t = SSL_concat_strings(z_1);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_14 = ATgetArgument(t, 0);
              if((p_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), term_p_20), term_k_20), term_f_20), term_w_19), term_r_19), term_m_19), term_h_19), term_b_19), term_u_18), term_n_18), term_g_18), term_x_17), term_t_17), term_o_17), term_g_17), term_c_17), term_w_16), term_s_16), term_o_16), term_k_16), term_g_16), term_a_16), term_v_15), term_n_15), term_j_15), term_c_15), term_l_14);
        t = fetch_elem_1_0(h_0, t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_2 = NULL,c_3 = NULL;
  u_2 = t;
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            c_3 = ATgetArgument(t, 1);
            {
              ATerm y_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_20);
        {
          ATerm a_21 = t;
          int b_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,q_2 = NULL,r_2 = NULL;
              t = c_3;
              {
                ATerm e_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_21;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              m_2 = t;
              t = term_g_21;
              q_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, m_2), term_i_21);
              r_2 = t;
              t = SSL_printnl(q_2, r_2);
              t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_i_21));
              LocalPopChoice(b_21);
            }
          else
            {
              t = a_21;
              t = u_2;
            }
        }
      }
    else
      {
        t = v_20;
        t = u_2;
      }
  }
  t = u_2;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm u_65 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = fork_0_0(t);
  r_3 = t;
  {
    ATerm m_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = s_3;
        t = u_65(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = m_21;
        t = SSL_waitpid(r_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_21 = ATgetArgument(t, 0);
            if(((ATgetType(s_21) != AT_INT) || (ATgetInt((ATermInt) s_21) != 0)))
              _fail(t);
            {
              ATerm t_21 = ATgetArgument(t, 1);
            }
            {
              ATerm u_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = s_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  v_3 = t;
  t = p_86(t);
  t = xtc_find_0_0(t);
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, v_3);
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm g_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, u_3, v_3);
      t = l_7(u_3, v_3, t);
      t = term_v_21;
      g_4 = t;
      t = SSL_exit(g_4);
      return(t);
    }
    t = fork_and_wait_1_0(j_0, t);
  }
  t = v_3;
  return(t);
}
static ATerm n_7 (ATerm e_82 (ATerm), ATerm o_35, ATerm m_35, ATerm t)
{
  ATerm l_4 = NULL,n_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,w_4 = NULL;
  s_4 = t;
  t = e_82(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_4, o_35, m_35);
  t = i_8(l_4, o_35, m_35, t);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_4 = NULL;
        t = term_c_22;
        y_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_c_22);
        t = h_8(l_4, y_4, t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_4 = ATgetFirst((ATermList) t);
      r_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_22;
  t_4 = t;
  t = (ATerm) ATinsert(CheckATermList(r_4), (ATerm) ATinsert(CheckATermList(n_4), o_35));
  w_4 = t;
  t = SSL_table_put(l_4, t_4, w_4);
  t = s_4;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm c_5 = NULL;
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_5 = NULL,d_3 = NULL;
      i_5 = t;
      t = term_f_22;
      d_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_5, term_f_22);
      t = y_7(i_5, d_3, t);
      c_5 = t;
      t = SSL_mkstemp(c_5);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm j_5 = NULL;
        t = term_g_22;
        j_5 = t;
        t = SSL_perror(j_5);
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
static ATerm b_1 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL;
  t = P__tmpdir_0_0(t);
  r_5 = t;
  t = term_n_22;
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_5, term_n_22);
  t = y_7(r_5, s_5, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_o_22;
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_5, term_o_22);
  t = n_7(b_1, o_5, p_5, t);
  t = SSL_close(n_5);
  t = o_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL;
  v_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_5 = NULL,y_5 = NULL;
      t = v_5;
      t = xtc_new_file_0_0(t);
      x_5 = t;
      t = t_0(t);
      y_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_5, (ATerm) ATinsert(ATinsert(ATempty, x_5), term_p_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_5);
    }
  else
    {
      ATerm a_6 = NULL,b_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_5;
      t = xtc_new_file_0_0(t);
      a_6 = t;
      t = t_0(t);
      b_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_6), term_p_22), w_5), term_v_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_6);
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  t = basename_1_0(_id, t);
  g_6 = t;
  t = term_o_22;
  t = f_85(t);
  f_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_6), term_y_22), g_6);
  e_6 = t;
  t = SSL_concat_strings(e_6);
  return(t);
}
ATerm if_keep1_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  ATerm j_6 = NULL;
  j_6 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_6 = NULL,r_6 = NULL,s_6 = NULL;
        t = term_q_13;
        r_6 = t;
        t = term_b_23;
        s_6 = t;
        t = term_e_23;
        t = h_8(r_6, s_6, t);
        o_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_6, term_t_13);
        t = geq_0_0(t);
        t = j_6;
        t = q_84(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = j_6;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm w_6 = NULL;
  w_6 = t;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL,g_7 = NULL,o_7 = NULL;
        t = term_q_13;
        g_7 = t;
        t = term_n_13;
        o_7 = t;
        t = term_s_13;
        t = h_8(g_7, o_7, t);
        a_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_7, term_f_15);
        t = geq_0_0(t);
        t = w_6;
        t = p_83(t);
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = w_6;
      }
  }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm l_8 = NULL;
  if(match_cons(t, sym_TopSort_1))
    {
      l_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_8;
  return(t);
}
ATerm pass_sort_0_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_8 = NULL,g_8 = NULL,j_8 = NULL;
      t = get_meta_0_0(t);
      if(match_cons(t, sym_Meta_1))
        {
          j_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_8;
      t = fetch_elem_1_0(c_1, t);
      g_8 = t;
      t = SSL_is_string(g_8);
      f_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_8), term_j_23);
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      t = (ATerm) ATempty;
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
static ATerm p_7 (ATerm x_14, ATerm w_14, ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(x_14, w_14);
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      t = get_errno_0_0(t);
      t = term_o_22;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, x_14, w_14);
      t = c_8(x_14, w_14, t);
      t = SSL_remove(x_14);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm k_9 = NULL,m_9 = NULL;
  k_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 = NULL;
        t = k_9;
        t = p_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_q_23;
        j_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_9, term_q_23);
        t = c_8(m_9, j_3, t);
        t = SSL_remove(m_9);
        t = term_q_23;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        {
          ATerm r_23 = t;
          int s_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_3 = NULL;
              t = k_9;
              t = p_0(t);
              y_3 = t;
              {
                ATerm t_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_3 = NULL;
                    z_3 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = z_3;
                      }
                    else
                      {
                        t = z_3;
                        if((m_9 != t))
                          {
                            _fail(t);
                          }
                        t = z_3;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_23;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_9, y_3);
              t = p_7(m_9, y_3, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_3);
              LocalPopChoice(s_23);
            }
          else
            {
              t = r_23;
              t = k_9;
              t = p_0(t);
              if((m_9 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_9);
            }
        }
      }
  }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = debug_1_0(g_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_u_23;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_v_23;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
  c_10 = t;
  t = term_g_21;
  d_10 = t;
  t = (ATerm) ATinsert(ATempty, term_x_23);
  e_10 = t;
  t = SSL_printnl(d_10, e_10);
  t = c_10;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_y_23;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL;
  t = term_q_13;
  h_10 = t;
  t = term_c_24;
  i_10 = t;
  t = term_e_24;
  t = h_8(h_10, i_10, t);
  t = map_1_0(r_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_10), term_c_24);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL;
  t = term_q_13;
  n_10 = t;
  t = term_c_24;
  o_10 = t;
  t = term_e_24;
  t = h_8(n_10, o_10, t);
  t = map_1_0(y_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_10), term_c_24);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  t = if_verbose6_1_0(f_1, t);
  v_9 = t;
  t = guarantee_extension_1_0(h_1, t);
  u_9 = t;
  t = v_9;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_9 = NULL;
        t = u_9;
        t = find_in_includes_1_0(j_1, t);
        w_9 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_9);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          ATerm b_10 = NULL;
          static ATerm a_2 (ATerm t)
          {
            t = u_9;
            return(t);
          }
          t = if_verbose2_1_0(k_1, t);
          t = guarantee_extension_1_0(m_1, t);
          b_10 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_10);
          {
            ATerm h_24 = t;
            int i_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_10 = NULL,g_10 = NULL,i_1 = NULL;
                g_10 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm j_24 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_10);
                f_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, b_10);
                i_1 = t;
                t = SSLsetAnnotations(i_1, f_10);
                LocalPopChoice(i_24);
                t = xtc_transform_file_2_0(n_1, q_1, t);
              }
            else
              {
                t = h_24;
                t = xtc_transform_term_2_0(s_1, v_1, t);
              }
          }
          t = rename_to_1_0(a_2, t);
        }
      }
  }
  return(t);
}
static ATerm q_7 (ATerm k_39, ATerm j_466, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm q_10 = NULL,t_10 = NULL,v_10 = NULL,w_10 = NULL;
    q_10 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_39), term_k_24), q_10);
    w_10 = t;
    t = SSL_concat_strings(w_10);
    t_10 = t;
    t = (ATerm) ATinsert(ATempty, term_l_24);
    v_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_10, (ATerm) ATinsert(ATempty, term_l_24));
    t = b_8(t_10, v_10, t);
    return(t);
  }
  t = j_466;
  t = fetch_elem_1_0(b_2, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm p_64 (ATerm), ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
  static ATerm c_2 (ATerm t)
  {
    t = debug_1_0(p_64, t);
    return(t);
  }
  y_10 = t;
  t = term_q_13;
  z_10 = t;
  t = term_c_24;
  a_11 = t;
  t = term_e_24;
  t = h_8(z_10, a_11, t);
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_10, x_10);
  t = q_7(y_10, x_10, t);
  t = if_verbose2_1_0(c_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_n_24;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_o_24;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm i_11 = NULL,k_11 = NULL,l_11 = NULL;
  i_11 = t;
  t = term_g_21;
  k_11 = t;
  t = (ATerm) ATinsert(ATempty, term_p_24);
  l_11 = t;
  t = SSL_printnl(k_11, l_11);
  t = i_11;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_q_24;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_q_24;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL;
  t = if_verbose6_1_0(d_2, t);
  f_11 = t;
  t = guarantee_extension_1_0(i_2, t);
  g_11 = t;
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL;
        t = find_in_includes_1_0(j_2, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_11);
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        {
          static ATerm a_3 (ATerm t)
          {
            t = g_11;
            return(t);
          }
          t = if_verbose2_1_0(o_2, t);
          t = f_11;
          t = get_syntax_definition_0_0(t);
          {
            ATerm t_24 = t;
            int u_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_11 = NULL,z_11 = NULL;
                z_11 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    w_11 = ATgetArgument(t, 0);
                    {
                      ATerm e_4 = NULL,l_1 = NULL;
                      t = SSLgetAnnotations(z_11);
                      e_4 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, w_11);
                      l_1 = t;
                      t = SSLsetAnnotations(l_1, e_4);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = z_11;
                  }
                LocalPopChoice(u_24);
                {
                  static ATerm t_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, f_11), term_v_24);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(s_2, t_2, t);
                }
              }
            else
              {
                t = t_24;
                {
                  static ATerm z_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, f_11), term_v_24);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(y_2, z_2, t);
                }
              }
          }
          t = rename_to_1_0(a_3, t);
        }
      }
  }
  t = if_verbose6_1_0(b_3, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
        t = term_q_13;
        h_12 = t;
        t = term_n_13;
        i_12 = t;
        t = term_s_13;
        t = h_8(h_12, i_12, t);
        g_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_12, term_t_14);
        t = geq_0_0(t);
        t = e_12;
        t = o_83(t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = e_12;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm h_72 (ATerm), ATerm t)
{
  ATerm k_12 = NULL;
  static ATerm f_3 (ATerm t)
  {
    t = h_72(t);
    if(((k_12 != NULL) && (k_12 != t)))
      _fail(t);
    else
      k_12 = t;
    return(t);
  }
  t = fetch_1_0(f_3, t);
  t = not_null(k_12);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm n_12 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_24;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm p_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_24);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_12, (ATerm) ATinsert(ATempty, term_l_24));
      t = b_8(n_12, p_12, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = debug_1_0(h_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_b_25;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm w_12 = NULL,e_14 = NULL,f_14 = NULL;
  t = if_verbose6_1_0(g_3, t);
  e_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 = NULL,q_4 = NULL,o_1 = NULL;
        t = SSLgetAnnotations(e_14);
        o_4 = t;
        t = f_14;
        t = guarantee_extension_1_0(i_3, t);
        q_4 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_4);
        o_1 = t;
        t = SSLsetAnnotations(o_1, o_4);
        t = read_from_0_0(t);
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        {
          ATerm b_5 = NULL,d_5 = NULL,k_5 = NULL,p_1 = NULL;
          t = SSLgetAnnotations(e_14);
          d_5 = t;
          t = f_14;
          t = guarantee_extension_1_0(k_3, t);
          k_5 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_5);
          p_1 = t;
          t = SSLsetAnnotations(p_1, d_5);
          t = read_from_0_0(t);
          b_5 = t;
          t = SSL_explode_term(b_5);
          if(match_cons(t, sym__2))
            {
              w_12 = ATgetArgument(t, 0);
              {
                ATerm e_25 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, w_12)));
        }
      }
  }
  t = if_verbose6_1_0(l_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm h_15 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      h_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_15;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = debug_1_0(t_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm m_14 = NULL;
  t = if_verbose6_1_0(n_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      m_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL,o_14 = NULL;
        t = term_q_13;
        n_14 = t;
        t = term_n_25;
        o_14 = t;
        t = term_o_25;
        t = h_8(n_14, o_14, t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        {
          ATerm p_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm i_15 (ATerm p_14, ATerm t)
              {
                ATerm u_14 = NULL,v_14 = NULL;
                t = term_g_21;
                u_14 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_25), m_14), term_v_25), p_14), term_r_25);
                v_14 = t;
                t = SSL_printnl(u_14, v_14);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_25), m_14), term_v_25), p_14), term_r_25);
                _fail(t);
                return(t);
              }
              ATerm a_15 = NULL,d_15 = NULL;
              t = get_meta_0_0(t);
              d_15 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  a_15 = ATgetArgument(t, 0);
                  {
                    ATerm y_25 = t;
                    int z_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = a_15;
                        t = fetch_elem_1_0(p_3, t);
                        LocalPopChoice(z_25);
                      }
                    else
                      {
                        t = y_25;
                        t = i_15(d_15, t);
                      }
                  }
                }
              else
                {
                  t = i_15(d_15, t);
                }
              LocalPopChoice(q_25);
            }
          else
            {
              t = p_25;
              t = term_c_26;
            }
        }
      }
  }
  t = if_verbose2_1_0(q_3, t);
  return(t);
}
ATerm basename_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm s_15 = NULL,u_15 = NULL;
  u_15 = t;
  t = SSL_explode_string(u_15);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_17 (ATerm t)
        {
          ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
          l_17 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_17 = ATgetFirst((ATermList) t);
              n_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm i_26 = t;
            int j_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_6 = NULL,m_6 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(l_17);
                i_6 = t;
                t = n_17;
                t = s_17(t);
                m_6 = t;
                t = (ATerm) ATinsert(CheckATermList(m_6), m_17);
                t_1 = t;
                t = SSLsetAnnotations(t_1, i_6);
                LocalPopChoice(j_26);
              }
            else
              {
                t = i_26;
                {
                  ATerm k_26 = t;
                  int l_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_7 = NULL,u_1 = NULL;
                      t = SSLgetAnnotations(l_17);
                      c_7 = t;
                      t = m_17;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(n_17), m_17);
                      u_1 = t;
                      t = SSLsetAnnotations(u_1, c_7);
                      LocalPopChoice(l_26);
                    }
                  else
                    {
                      t = k_26;
                      {
                        ATerm q_8 = NULL,t_8 = NULL,x_1 = NULL;
                        t = SSLgetAnnotations(l_17);
                        q_8 = t;
                        t = m_17;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = n_17;
                        t = d_85(t);
                        t_8 = t;
                        t = (ATerm) ATinsert(CheckATermList(t_8), m_17);
                        x_1 = t;
                        t = SSLsetAnnotations(x_1, q_8);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = s_17(t);
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
      }
  }
  s_15 = t;
  t = SSL_implode_string(s_15);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = debug_1_0(x_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_m_26;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_26);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_26);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_p_26;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm d_21 = NULL,h_21 = NULL,j_21 = NULL;
  t = pass_verbose_0_0(t);
  h_21 = t;
  t = term_r_26;
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_21 = NULL,l_21 = NULL;
        t = term_q_13;
        k_21 = t;
        t = term_r_26;
        l_21 = t;
        t = term_u_26;
        t = h_8(k_21, l_21, t);
        LocalPopChoice(t_26);
        t = (ATerm) ATinsert(ATempty, term_v_26);
      }
    else
      {
        t = s_26;
        t = (ATerm) ATempty;
      }
  }
  j_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_21), h_21);
  t = concat_0_0(t);
  d_21 = t;
  t = (ATerm) ATinsert(CheckATermList(d_21), term_x_26);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_p_26;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm n_21 = NULL,q_21 = NULL,r_21 = NULL;
  t = pass_verbose_0_0(t);
  q_21 = t;
  t = term_r_26;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL,z_21 = NULL;
        t = term_q_13;
        y_21 = t;
        t = term_r_26;
        z_21 = t;
        t = term_u_26;
        t = h_8(y_21, z_21, t);
        LocalPopChoice(z_26);
        t = (ATerm) ATinsert(ATempty, term_v_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATempty;
      }
  }
  r_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_21), q_21);
  t = concat_0_0(t);
  n_21 = t;
  t = (ATerm) ATinsert(CheckATermList(n_21), term_x_26);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_a_27;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  t = pass_verbose_0_0(t);
  l_22 = t;
  t = term_r_26;
  {
    ATerm e_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL,s_22 = NULL;
        t = term_q_13;
        r_22 = t;
        t = term_r_26;
        s_22 = t;
        t = term_u_26;
        t = h_8(r_22, s_22, t);
        LocalPopChoice(g_27);
        t = (ATerm) ATinsert(ATempty, term_r_26);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATempty;
      }
  }
  m_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_22), l_22);
  t = concat_0_0(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  t = pass_verbose_0_0(t);
  t_22 = t;
  t = term_r_26;
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_23 = NULL,d_23 = NULL;
        t = term_q_13;
        c_23 = t;
        t = term_r_26;
        d_23 = t;
        t = term_u_26;
        t = h_8(c_23, d_23, t);
        LocalPopChoice(i_27);
        t = (ATerm) ATinsert(ATempty, term_r_26);
      }
    else
      {
        t = h_27;
        t = (ATerm) ATempty;
      }
  }
  u_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_22), t_22);
  t = concat_0_0(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_j_27;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm r_18 = NULL,w_18 = NULL,z_18 = NULL,a_19 = NULL,c_19 = NULL,e_19 = NULL,l_2 = NULL;
  t = if_verbose6_1_0(w_3, t);
  a_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_19);
  c_19 = t;
  t = e_19;
  t = basename_1_0(_id, t);
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_18);
  l_2 = t;
  t = SSLsetAnnotations(l_2, c_19);
  t = a_19;
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      r_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_19;
  t = pass_sort_0_0(t);
  w_18 = t;
  t = a_19;
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_19 = ATgetArgument(t, 0);
            {
              ATerm h_9 = NULL,n_2 = NULL;
              t = SSLgetAnnotations(a_19);
              h_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_19);
              n_2 = t;
              t = SSLsetAnnotations(n_2, h_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_19;
          }
        LocalPopChoice(l_27);
        {
          static ATerm b_4 (ATerm t)
          {
            ATerm b_20 = NULL,c_20 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(c_4, t);
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_20, w_18);
            t = conc_0_0(t);
            b_20 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_20), r_18), term_n_27), term_m_27);
            return(t);
          }
          t = xtc_transform_file_2_0(a_4, b_4, t);
        }
      }
    else
      {
        t = k_27;
        {
          static ATerm f_4 (ATerm t)
          {
            ATerm e_20 = NULL,h_20 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(h_4, t);
            h_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_20, w_18);
            t = conc_0_0(t);
            e_20 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_20), r_18), term_n_27), term_m_27);
            return(t);
          }
          t = xtc_transform_term_2_0(d_4, f_4, t);
        }
      }
  }
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL,c_21 = NULL;
        c_21 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_20 = ATgetArgument(t, 0);
            {
              ATerm s_9 = NULL,v_2 = NULL;
              t = SSLgetAnnotations(c_21);
              s_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_20);
              v_2 = t;
              t = SSLsetAnnotations(v_2, s_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_21;
          }
        LocalPopChoice(p_27);
        t = xtc_transform_file_2_0(i_4, j_4, t);
      }
    else
      {
        t = o_27;
        t = xtc_transform_term_2_0(k_4, m_4, t);
      }
  }
  {
    static ATerm p_4 (ATerm t)
    {
      static ATerm u_4 (ATerm t)
      {
        t = z_18;
        t = guarantee_extension_1_0(v_4, t);
        return(t);
      }
      t = copy_to_1_0(u_4, t);
      return(t);
    }
    t = if_keep1_1_0(p_4, t);
  }
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_22 = NULL,i_22 = NULL;
        i_22 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_22 = ATgetArgument(t, 0);
            {
              ATerm k_10 = NULL,w_2 = NULL;
              t = SSLgetAnnotations(i_22);
              k_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_22);
              w_2 = t;
              t = SSLsetAnnotations(w_2, k_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_22;
          }
        LocalPopChoice(r_27);
        t = xtc_transform_file_2_0(x_4, z_4, t);
      }
    else
      {
        t = q_27;
        t = xtc_transform_term_2_0(a_5, e_5, t);
      }
  }
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_23 = NULL,n_23 = NULL;
        n_23 = t;
        if(match_cons(t, sym_FILE_1))
          {
            m_23 = ATgetArgument(t, 0);
            {
              ATerm d_11 = NULL,x_2 = NULL;
              t = SSLgetAnnotations(n_23);
              d_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_23);
              x_2 = t;
              t = SSLsetAnnotations(x_2, d_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_23;
          }
        LocalPopChoice(v_27);
        t = xtc_transform_file_2_0(f_5, pass_verbose_0_0, t);
      }
    else
      {
        t = u_27;
        t = xtc_transform_term_2_0(g_5, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm m_72 (ATerm), ATerm t)
{
  static ATerm w_25 (ATerm t)
  {
    ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
    u_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_25 = ATgetFirst((ATermList) t);
        t_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_11 = NULL,c_12 = NULL,h_5 = NULL;
          t = SSLgetAnnotations(u_25);
          x_11 = t;
          t = t_25;
          t = w_25(t);
          c_12 = t;
          t = (ATerm) ATinsert(CheckATermList(c_12), s_25);
          h_5 = t;
          t = SSLsetAnnotations(h_5, x_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_25;
        t = m_72(t);
      }
    return(t);
  }
  t = w_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,d_24 = NULL;
  z_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_23;
    }
  else
    {
      static ATerm l_5 (ATerm t)
      {
        t = not_null(d_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_24 = ATgetFirst((ATermList) t);
          if(((d_24 != NULL) && (d_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_24;
      t = at_end_1_0(l_5, t);
    }
  return(t);
}
static ATerm q_26 (ATerm a_26, ATerm t)
{
  ATerm b_26 = NULL;
  t = SSL_explode_term(a_26);
  if(match_cons(t, sym__2))
    {
      ATerm w_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,h_26 = NULL;
  h_26 = t;
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_5 (ATerm t)
            {
              t = e_26;
              return(t);
            }
            t = d_26;
            t = at_end_1_0(m_5, t);
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            t = q_26(h_26, t);
          }
      }
    }
  else
    {
      t = q_26(h_26, t);
    }
  return(t);
}
static ATerm r_7 (ATerm h_39, ATerm g_39, ATerm t)
{
  ATerm w_26 = NULL,b_27 = NULL,d_27 = NULL;
  t = h_39;
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_27 = NULL;
        t = term_q_13;
        f_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_13, h_39);
        t = h_8(f_27, h_39, t);
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATempty;
      }
  }
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_39, b_27);
  t = conc_0_0(t);
  w_26 = t;
  t = term_q_13;
  d_27 = t;
  t = SSL_table_put(d_27, h_39, w_26);
  t = (ATerm) ATmakeAppl(sym__3, term_q_13, h_39, w_26);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  t_27 = t;
  t = SSL_explode_string(t_27);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_28 (ATerm t)
        {
          ATerm r_28 = NULL,s_28 = NULL,w_28 = NULL;
          r_28 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_28 = ATgetFirst((ATermList) t);
              w_28 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm d_28 = t;
            int e_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_12 = NULL,z_12 = NULL,w_8 = NULL;
                t = SSLgetAnnotations(r_28);
                v_12 = t;
                t = w_28;
                t = y_28(t);
                z_12 = t;
                t = (ATerm) ATinsert(CheckATermList(z_12), s_28);
                w_8 = t;
                t = SSLsetAnnotations(w_8, v_12);
                LocalPopChoice(e_28);
              }
            else
              {
                t = d_28;
                {
                  ATerm k_13 = NULL,x_8 = NULL;
                  t = SSLgetAnnotations(r_28);
                  k_13 = t;
                  t = s_28;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, s_28);
                  x_8 = t;
                  t = SSLsetAnnotations(x_8, k_13);
                }
              }
          }
          return(t);
        }
        t = y_28(t);
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = (ATerm) ATempty;
      }
  }
  s_27 = t;
  t = SSL_implode_string(s_27);
  return(t);
}
ATerm debug_1_0 (ATerm d_67 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,g_29 = NULL;
  b_29 = t;
  t = d_67(t);
  c_29 = t;
  t = term_g_21;
  d_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_29), c_29);
  g_29 = t;
  t = SSL_printnl(d_29, g_29);
  t = b_29;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_29 = NULL;
  static ATerm q_5 (ATerm t)
  {
    ATerm i_29 = NULL,j_29 = NULL;
    i_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), i_29);
    t = h_8(not_null(h_29), i_29, t);
    j_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_29, j_29);
    return(t);
  }
  if(((h_29 != NULL) && (h_29 != t)))
    _fail(t);
  else
    h_29 = t;
  t = SSL_table_keys(h_29);
  t = map_1_0(q_5, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
        t = term_q_13;
        a_30 = t;
        t = term_n_13;
        b_30 = t;
        t = term_s_13;
        t = h_8(a_30, b_30, t);
        z_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_29, term_a_20);
        t = geq_0_0(t);
        t = w_29;
        t = r_83(t);
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        t = w_29;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
        t = term_q_13;
        n_30 = t;
        t = term_n_13;
        o_30 = t;
        t = term_s_13;
        t = h_8(n_30, o_30, t);
        m_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_30, term_z_16);
        t = geq_0_0(t);
        t = k_30;
        t = q_83(t);
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = k_30;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
        t = term_q_13;
        d_31 = t;
        t = term_n_13;
        e_31 = t;
        t = term_s_13;
        t = h_8(d_31, e_31, t);
        c_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_31, term_l_15);
        t = geq_0_0(t);
        t = t_30;
        t = s_83(t);
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = t_30;
      }
  }
  return(t);
}
static ATerm t_7 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm m_25, ATerm l_25, ATerm t)
{
  t = j_76(t);
  {
    static ATerm t_5 (ATerm t)
    {
      ATerm g_31 = NULL;
      g_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_25, g_31);
      t = i_76(t);
      return(t);
    }
    t = fetch_1_0(t_5, t);
  }
  t = l_25;
  return(t);
}
static ATerm u_7 (ATerm f_76 (ATerm), ATerm i_25, ATerm h_25, ATerm t)
{
  static ATerm z_31 (ATerm t)
  {
    ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
    t_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_31 = ATgetFirst((ATermList) t);
            v_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_28 = t;
          int m_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_31;
              {
                static ATerm u_5 (ATerm t)
                {
                  t = h_25;
                  return(t);
                }
                t = t_7(f_76, u_5, u_31, v_31, t);
              }
              t = z_31(t);
              LocalPopChoice(m_28);
            }
          else
            {
              t = l_28;
              {
                ATerm b_14 = NULL,j_14 = NULL,a_9 = NULL;
                t = SSLgetAnnotations(t_31);
                b_14 = t;
                t = v_31;
                t = z_31(t);
                j_14 = t;
                t = (ATerm) ATinsert(CheckATermList(j_14), u_31);
                a_9 = t;
                t = SSLsetAnnotations(a_9, b_14);
              }
            }
        }
      }
    return(t);
  }
  t = i_25;
  t = z_31(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm a_33 = NULL;
  if(match_cons(t, sym__2))
    {
      a_33 = ATgetArgument(t, 0);
      if((a_33 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm y_37, ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm i_32 = NULL,l_32 = NULL,m_32 = NULL;
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_37, z_37);
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_28 = ATgetArgument(t, 0);
            ATerm q_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_37, z_37);
        t = h_8(y_37, z_37, t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATempty;
      }
  }
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_32, a_38);
  t = u_7(z_5, m_32, a_38, t);
  l_32 = t;
  t = SSL_table_put(y_37, z_37, l_32);
  t = i_32;
  return(t);
}
static ATerm w_7 (ATerm u_83 (ATerm), ATerm i_38, ATerm h_38, ATerm t)
{
  static ATerm c_6 (ATerm t)
  {
    ATerm c_33 = NULL,g_33 = NULL;
    if(match_cons(t, sym__2))
      {
        c_33 = ATgetArgument(t, 0);
        g_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_38, c_33, g_33);
    t = u_83(t);
    return(t);
  }
  t = h_38;
  t = map_1_0(c_6, t);
  return(t);
}
static ATerm b_8 (ATerm e_40, ATerm f_40, ATerm t)
{
  t = SSL_access(e_40, f_40);
  return(t);
}
static ATerm e_34 (ATerm s_33, ATerm t)
{
  t = SSL_fclose(s_33);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_33 = NULL,c_34 = NULL;
  c_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_33 = ATgetArgument(t, 0);
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_33);
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            t = e_34(c_34, t);
          }
      }
    }
  else
    {
      t = e_34(c_34, t);
    }
  return(t);
}
static ATerm x_7 (ATerm e_18, ATerm t)
{
  t = SSL_read_term_from_stream(e_18);
  return(t);
}
static ATerm y_7 (ATerm v_32, ATerm w_32, ATerm t)
{
  t = SSL_strcat(v_32, w_32);
  return(t);
}
static ATerm z_7 (ATerm n_40, ATerm o_40, ATerm t)
{
  ATerm i_34 = NULL;
  t = SSL_fopen(n_40, o_40);
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_34);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_34 = NULL;
  t = SSL_stdin_stream();
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_34);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_34 = NULL;
  t = SSL_stdout_stream();
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_34);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_34 = NULL;
  t = SSL_stderr_stream();
  n_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_34);
  return(t);
}
static ATerm i_37 (ATerm a_35, ATerm t)
{
  ATerm b_35 = NULL;
  t = SSL_explode_term(a_35);
  if(match_cons(t, sym__2))
    {
      ATerm v_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_28 = ATgetArgument(t, 1);
        if(((ATgetType(x_28) == AT_LIST) && !(ATisEmpty(x_28))))
          {
            b_35 = ATgetFirst((ATermList) x_28);
            {
              ATerm z_28 = (ATerm) ATgetNext((ATermList) x_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_35;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_35;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_35;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_35;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_37 (ATerm r_35, ATerm s_35, ATerm t_35, ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,b_36 = NULL,e_9 = NULL;
  t = SSLgetAnnotations(t_35);
  w_35 = t;
  t = r_35;
  if(match_cons(t, sym_Path_1))
    {
      b_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_36, s_35);
  e_9 = t;
  t = SSLsetAnnotations(e_9, w_35);
  if(match_cons(t, sym__2))
    {
      u_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(u_35, v_35, t);
  return(t);
}
static ATerm k_37 (ATerm f_36, ATerm i_36, ATerm j_36, ATerm t)
{
  ATerm k_36 = NULL,m_36 = NULL,n_36 = NULL,s_36 = NULL,f_9 = NULL;
  t = SSLgetAnnotations(j_36);
  n_36 = t;
  t = SSL_is_string(f_36);
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_36, i_36);
  f_9 = t;
  t = SSLsetAnnotations(f_9, n_36);
  if(match_cons(t, sym__2))
    {
      k_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(k_36, m_36, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm v_36 = NULL,d_37 = NULL,e_37 = NULL;
  v_36 = t;
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
      {
        ATerm a_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_37(v_36, t);
            LocalPopChoice(e_29);
          }
        else
          {
            t = a_29;
            {
              ATerm f_29 = t;
              int k_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_37(d_37, e_37, v_36, t);
                  LocalPopChoice(k_29);
                }
              else
                {
                  t = f_29;
                  t = k_37(d_37, e_37, v_36, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_37(v_36, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_37 = NULL,p_37 = NULL,q_37 = NULL,x_37 = NULL;
  x_37 = t;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_37, term_n_29);
        t = a_8(t);
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        {
          ATerm o_15 = NULL,p_15 = NULL;
          t = term_o_29;
          p_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_29, x_37);
          t = y_7(p_15, x_37, t);
          o_15 = t;
          t = SSL_perror(o_15);
          _fail(t);
        }
      }
  }
  p_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(q_37, t);
  m_37 = t;
  t = p_37;
  t = fclose_0_0(t);
  t = m_37;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_38 = NULL,g_38 = NULL;
      f_38 = t;
      t = (ATerm) ATinsert(ATempty, term_t_29);
      g_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_38, (ATerm) ATinsert(ATempty, term_t_29));
      t = b_8(f_38, g_38, t);
      LocalPopChoice(s_29);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_29;
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_29 = t;
            if((PushChoice() == 0))
              {
                ATerm l_38 = NULL,m_38 = NULL;
                l_38 = t;
                t = (ATerm) ATinsert(ATempty, term_l_24);
                m_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_38, (ATerm) ATinsert(ATempty, term_l_24));
                t = b_8(l_38, m_38, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_29;
              }
            t = debug_1_0(d_6, t);
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            t = debug_1_0(h_6, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = debug_1_0(l_6, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_y_29;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = debug_1_0(p_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_c_30;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,i_39 = NULL;
  d_39 = t;
  t = term_g_21;
  e_39 = t;
  t = (ATerm) ATinsert(ATempty, term_d_30);
  i_39 = t;
  t = SSL_printnl(e_39, i_39);
  t = d_39;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm j_39 = NULL,l_39 = NULL,m_39 = NULL;
  if(match_cons(t, sym__3))
    {
      j_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
      m_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_7(j_39, l_39, m_39, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  n_39 = t;
  t = term_g_21;
  o_39 = t;
  t = (ATerm) ATinsert(ATempty, term_e_30);
  p_39 = t;
  t = SSL_printnl(o_39, p_39);
  t = n_39;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm q_39 = NULL,t_39 = NULL,u_39 = NULL;
  q_39 = t;
  t = term_g_21;
  t_39 = t;
  t = (ATerm) ATinsert(ATempty, term_d_30);
  u_39 = t;
  t = SSL_printnl(t_39, u_39);
  t = q_39;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL;
  n_38 = t;
  t = if_verbose5_1_0(k_6, t);
  {
    ATerm f_30 = t;
    if((PushChoice() == 0))
      {
        ATerm z_38 = NULL,a_39 = NULL;
        t = term_g_30;
        z_38 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, n_38);
        a_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_30, (ATerm) ATmakeAppl(sym_Imported_1, n_38));
        t = h_8(z_38, a_39, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_30;
      }
  }
  p_38 = t;
  t = term_g_30;
  w_38 = t;
  t = term_h_30;
  x_38 = t;
  t = (ATerm) ATinsert(ATempty, n_38);
  y_38 = t;
  t = SSL_table_put(w_38, x_38, y_38);
  t = p_38;
  t = if_verbose4_1_0(n_6, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(q_6, t);
  o_38 = t;
  t = term_g_30;
  v_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_30, o_38);
  t = w_7(t_6, v_38, o_38, t);
  t = if_verbose6_1_0(u_6, t);
  t = term_g_30;
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, n_38);
  r_38 = t;
  t = (ATerm) ATempty;
  u_38 = t;
  t = SSL_table_put(q_38, r_38, u_38);
  t = (ATerm) ATmakeAppl(sym__3, term_g_30, (ATerm)ATmakeAppl(sym_Imported_1, n_38), (ATerm) ATempty);
  t = if_verbose4_1_0(v_6, t);
  return(t);
}
ATerm filter_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
  x_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_40;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_40 = ATgetFirst((ATermList) t);
          z_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_15 = NULL,d_16 = NULL,e_16 = NULL,r_9 = NULL;
            t = SSLgetAnnotations(x_40);
            y_15 = t;
            t = y_40;
            t = a_80(t);
            d_16 = t;
            t = z_40;
            t = filter_1_0(a_80, t);
            e_16 = t;
            t = (ATerm) ATinsert(CheckATermList(e_16), d_16);
            r_9 = t;
            t = SSLsetAnnotations(r_9, y_15);
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            t = z_40;
            t = filter_1_0(a_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm a_70 (ATerm), ATerm b_70 (ATerm), ATerm t)
{
  static ATerm c_41 (ATerm t)
  {
    ATerm l_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_70(t);
        t = c_41(t);
        LocalPopChoice(p_30);
      }
    else
      {
        t = l_30;
        t = b_70(t);
      }
    return(t);
  }
  t = c_41(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_41 = NULL,r_41 = NULL;
      t = term_q_13;
      g_41 = t;
      t = term_s_30;
      r_41 = t;
      t = term_u_30;
      t = h_8(g_41, r_41, t);
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      {
        ATerm v_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_41 = NULL;
            t = term_x_30;
            s_41 = t;
            t = SSL_getenv(s_41);
            LocalPopChoice(w_30);
          }
        else
          {
            t = v_30;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = debug_1_0(y_6, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_y_30;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL;
  t = term_g_30;
  b_42 = t;
  t = term_z_30;
  c_42 = t;
  t = term_a_31;
  t = h_8(b_42, c_42, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm b_31 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_31;
      }
  }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = debug_1_0(d_7, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_41 = NULL;
  t = if_verbose5_1_0(x_6, t);
  u_41 = t;
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_41 = NULL,x_41 = NULL;
        t = term_g_30;
        w_41 = t;
        t = term_h_30;
        x_41 = t;
        t = term_j_31;
        t = h_8(w_41, x_41, t);
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        {
          ATerm y_41 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_41 = t;
          t = repeat_2_0(z_6, _id, t);
          t = y_41;
        }
      }
  }
  t = u_41;
  t = if_verbose5_1_0(b_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = debug_1_0(f_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_k_31;
  return(t);
}
static ATerm v_43 (ATerm j_42, ATerm t)
{
  ATerm l_42 = NULL,n_42 = NULL,p_42 = NULL;
  t = term_g_30;
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, j_42);
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_30, (ATerm) ATmakeAppl(sym_Tool_1, j_42));
  t = h_8(n_42, p_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_31 = ATgetFirst((ATermList) t);
      if(match_cons(l_31, sym__2))
        {
          ATerm n_31 = ATgetArgument(l_31, 0);
          l_42 = ATgetArgument(l_31, 1);
        }
      else
        _fail(t);
      {
        ATerm m_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_42;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = debug_1_0(s_7, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_k_31;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_g_30;
  t = table_getlist_0_0(t);
  t = debug_1_0(n_8, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
      t = if_verbose5_1_0(e_7, t);
      t = xtc_load_0_0(t);
      z_42 = t;
      if(match_cons(t, sym__2))
        {
          x_42 = ATgetArgument(t, 0);
          y_42 = ATgetArgument(t, 1);
          {
            ATerm r_31 = t;
            int s_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_43 = NULL,g_43 = NULL,i_43 = NULL;
                t = term_g_30;
                g_43 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, x_42);
                i_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_30, (ATerm) ATmakeAppl(sym_Tool_1, x_42));
                t = h_8(g_43, i_43, t);
                {
                  static ATerm h_7 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_42 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_43 != NULL) && (e_43 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_43 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(h_7, t);
                }
                t = not_null(e_43);
                LocalPopChoice(s_31);
              }
            else
              {
                t = r_31;
                t = v_43(z_42, t);
              }
          }
        }
      else
        {
          t = v_43(z_42, t);
        }
      t = if_verbose5_1_0(m_7, t);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
        ATerm t_43 = NULL,x_16 = NULL,b_17 = NULL;
        t_43 = t;
        t = term_g_21;
        x_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_31), t_43), term_w_31);
        b_17 = t;
        t = SSL_printnl(x_16, b_17);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_31), t_43), term_w_31);
        t = if_verbose5_1_0(m_8, t);
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
static ATerm c_8 (ATerm y_14, ATerm z_14, ATerm t)
{
  t = SSL_copy(y_14, z_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL;
  x_44 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_17 = NULL;
        t = x_44;
        t = o_0(t);
        k_17 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = k_17;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = k_17;
          }
        t = (ATerm) ATmakeAppl(sym__2, y_44, k_17);
        t = c_8(y_44, k_17, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_44);
        LocalPopChoice(a_32);
      }
    else
      {
        t = y_31;
        {
          ATerm b_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_18 = NULL;
              t = x_44;
              t = o_0(t);
              c_18 = t;
              {
                ATerm d_32 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_18 = NULL;
                    d_18 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = d_18;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = d_18;
                          }
                        else
                          {
                            t = d_18;
                            if((y_44 != t))
                              {
                                _fail(t);
                              }
                            t = d_18;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_32;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, y_44, c_18);
              t = c_8(y_44, c_18, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_44);
              LocalPopChoice(c_32);
            }
          else
            {
              t = b_32;
              t = x_44;
              t = o_0(t);
              if((y_44 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_44);
            }
        }
      }
  }
  return(t);
}
static ATerm d_8 (ATerm g_37, ATerm h_37, ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  d_45 = t;
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
        t = h_8(g_37, h_37, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_32 = ATgetFirst((ATermList) t);
            c_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_32);
        t = SSL_table_put(g_37, h_37, c_45);
        t = (ATerm) ATmakeAppl(sym__3, g_37, h_37, c_45);
      }
    else
      {
        t = e_32;
        t = SSL_table_remove(g_37, h_37);
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
      }
  }
  t = d_45;
  return(t);
}
ATerm end_scope_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
  h_45 = t;
  t = b_82(t);
  g_45 = t;
  {
    ATerm h_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_45 = NULL;
        t = term_c_22;
        j_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_45, term_c_22);
        t = h_8(g_45, j_45, t);
        LocalPopChoice(j_32);
      }
    else
      {
        t = h_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_45 = ATgetFirst((ATermList) t);
      e_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_22;
  i_45 = t;
  t = SSL_table_put(g_45, i_45, e_45);
  t = f_45;
  {
    static ATerm o_8 (ATerm t)
    {
      ATerm k_45 = NULL;
      k_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_45, k_45);
      t = d_8(g_45, k_45, t);
      return(t);
    }
    t = map_1_0(o_8, t);
  }
  t = h_45;
  return(t);
}
ATerm restore_always_2_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm t)
{
  ATerm k_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_83(t);
      t = c_83(t);
      LocalPopChoice(n_32);
    }
  else
    {
      t = k_32;
      t = c_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
  n_45 = t;
  t = a_82(t);
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_45, term_c_22);
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_32 = ATgetArgument(t, 0);
            ATerm r_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_22;
        u_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_45, term_c_22);
        t = h_8(m_45, u_45, t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = (ATerm) ATempty;
      }
  }
  o_45 = t;
  t = term_c_22;
  p_45 = t;
  t = (ATerm) ATinsert(CheckATermList(o_45), (ATerm) ATempty);
  q_45 = t;
  t = SSL_table_put(m_45, p_45, q_45);
  t = n_45;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_k_22;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm j_46 = NULL;
  j_46 = t;
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(j_46);
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        t = j_46;
      }
  }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm z_45 = NULL;
  static ATerm r_8 (ATerm t)
  {
    ATerm e_46 = NULL;
    e_46 = t;
    {
      ATerm u_32 = t;
      int x_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_46 = NULL,g_46 = NULL;
          t = term_k_22;
          f_46 = t;
          t = term_c_22;
          g_46 = t;
          t = term_y_32;
          t = h_8(f_46, g_46, t);
          LocalPopChoice(x_32);
        }
      else
        {
          t = u_32;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_45 != NULL) && (z_45 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_45 = ATgetFirst((ATermList) t);
        {
          ATerm z_32 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = z_45;
    t = map_1_0(s_8, t);
    t = e_46;
    t = end_scope_1_0(u_8, t);
    return(t);
  }
  t = begin_scope_1_0(p_8, t);
  t = restore_always_2_0(b_86, r_8, t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm b_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_46 = NULL,q_46 = NULL;
      t = term_q_13;
      p_46 = t;
      t = term_p_22;
      q_46 = t;
      t = term_e_33;
      t = h_8(p_46, q_46, t);
      LocalPopChoice(d_33);
    }
  else
    {
      t = b_33;
      t = term_q_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  static ATerm v_8 (ATerm t)
  {
    ATerm f_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
        t = term_q_13;
        n_46 = t;
        t = term_v_22;
        o_46 = t;
        t = term_i_33;
        t = h_8(n_46, o_46, t);
        m_46 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_46);
        LocalPopChoice(h_33);
      }
    else
      {
        t = f_33;
        t = term_y_24;
      }
    t = c_86(t);
    t = copy_to_1_0(y_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(v_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL;
  r_46 = t;
  t = term_o_22;
  t = whoami_0_0(t);
  s_46 = t;
  t = term_g_21;
  u_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_33), s_46), term_j_33);
  v_46 = t;
  t = SSL_printnl(u_46, v_46);
  t = term_t_13;
  t_46 = t;
  t = SSL_exit(t_46);
  t = r_46;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm x_46 = NULL;
  x_46 = t;
  if(match_string(t, "-k"))
    {
      t = x_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_46;
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
  y_46 = t;
  t = SSL_string_to_int(y_46);
  z_46 = t;
  t = term_b_23;
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_23, z_46);
  t = k_8(a_47, z_46, t);
  t = y_46;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_l_33;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_8, b_9, c_9, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm c_47 = NULL;
  c_47 = t;
  if(match_string(t, "-S"))
    {
      t = c_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_47;
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL;
  t = term_n_13;
  d_47 = t;
  t = term_m_33;
  e_47 = t;
  t = term_n_33;
  t = k_8(d_47, e_47, t);
  t = term_o_33;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_p_33;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  f_47 = t;
  t = SSL_string_to_int(f_47);
  g_47 = t;
  t = term_n_13;
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_13, g_47);
  t = k_8(h_47, g_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_47);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_q_33;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  t = term_j_23;
  i_47 = t;
  t = term_o_22;
  j_47 = t;
  t = term_r_33;
  t = k_8(i_47, j_47, t);
  t = term_t_33;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_u_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_9, g_9, i_9, t);
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      {
        ATerm y_33 = t;
        int z_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_9, l_9, n_9, t);
            LocalPopChoice(z_33);
          }
        else
          {
            t = y_33;
            t = Option_3_0(o_9, p_9, q_9, t);
          }
      }
    }
  return(t);
}
static ATerm k_8 (ATerm b_39, ATerm c_39, ATerm t)
{
  ATerm k_47 = NULL;
  t = term_q_13;
  k_47 = t;
  t = SSL_table_put(k_47, b_39, c_39);
  t = (ATerm) ATmakeAppl(sym__3, term_q_13, b_39, c_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
      t = term_o_22;
      t = e_0(t);
      p_47 = t;
      t = term_d_34;
      q_47 = t;
      t = term_f_34;
      r_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_34, term_f_34, p_47);
      t = i_8(q_47, r_47, p_47, t);
      _fail(t);
    }
  else
    {
      ATerm u_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_47 = ATgetFirst((ATermList) t);
          o_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_47;
      t = c_0(t);
      t = term_o_22;
      t = d_0(t);
      u_47 = t;
      t = (ATerm) ATinsert(CheckATermList(o_47), u_47);
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm w_47 = NULL;
  w_47 = t;
  if(match_string(t, "-o"))
    {
      t = w_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_47;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL;
  x_47 = t;
  t = term_p_22;
  y_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_22, x_47);
  t = k_8(y_47, x_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_47);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_k_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_9, x_9, y_9, t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm a_48 = NULL;
  a_48 = t;
  if(match_string(t, "-i"))
    {
      t = a_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_48;
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL;
  b_48 = t;
  t = term_v_22;
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, b_48);
  t = k_8(c_48, b_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_48);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_l_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_9, a_10, j_10, t);
  return(t);
}
static ATerm i_8 (ATerm b_37, ATerm c_37, ATerm a_37, ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL;
  e_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_37, c_37);
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_34 = ATgetArgument(t, 0);
            ATerm r_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_37, c_37);
        t = h_8(b_37, c_37, t);
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = (ATerm) ATempty;
      }
  }
  f_48 = t;
  t = (ATerm) ATinsert(CheckATermList(f_48), a_37);
  g_48 = t;
  t = SSL_table_put(b_37, c_37, g_48);
  t = e_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
      t = term_o_22;
      t = n_0(t);
      r_48 = t;
      t = term_d_34;
      s_48 = t;
      t = term_f_34;
      t_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_34, term_f_34, r_48);
      t = i_8(s_48, t_48, r_48, t);
      _fail(t);
    }
  else
    {
      ATerm x_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_48 = ATgetFirst((ATermList) t);
          o_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_48 = ATgetFirst((ATermList) t);
          q_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_48;
      t = k_0(t);
      t = p_48;
      t = l_0(t);
      x_48 = t;
      t = (ATerm) ATinsert(CheckATermList(q_48), x_48);
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm z_48 = NULL;
  z_48 = t;
  if(match_string(t, "-I"))
    {
      t = z_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = z_48;
    }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL;
  a_49 = t;
  t = term_c_24;
  b_49 = t;
  t = (ATerm) ATinsert(ATempty, a_49);
  c_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATinsert(ATempty, a_49));
  t = r_7(b_49, c_49, t);
  t = a_49;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_s_34;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL;
  d_49 = t;
  t = term_n_25;
  e_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_25, d_49);
  t = k_8(e_49, d_49, t);
  t = d_49;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_t_34;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
  f_49 = t;
  t = term_n_13;
  g_49 = t;
  t = term_m_33;
  h_49 = t;
  t = term_n_33;
  t = k_8(g_49, h_49, t);
  t = f_49;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_u_34;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  i_49 = t;
  t = term_r_26;
  j_49 = t;
  t = term_t_13;
  k_49 = t;
  t = term_v_34;
  t = k_8(j_49, k_49, t);
  t = i_49;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(m_10, r_10, s_10, t);
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      {
        ATerm y_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_10, b_11, c_11, t);
            LocalPopChoice(z_34);
          }
        else
          {
            t = y_34;
            {
              ATerm c_35 = t;
              int d_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(e_11, j_11, m_11, t);
                  LocalPopChoice(d_35);
                }
              else
                {
                  t = c_35;
                  t = Option_3_0(o_11, p_11, q_11, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_22;
  t = whoami_0_0(t);
  l_49 = t;
  t = term_g_21;
  n_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_35), l_49);
  o_49 = t;
  t = SSL_printnl(n_49, o_49);
  t = term_t_13;
  m_49 = t;
  t = SSL_exit(m_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL;
  t = term_q_13;
  p_49 = t;
  t = term_f_35;
  q_49 = t;
  t = term_g_35;
  t = h_8(p_49, q_49, t);
  return(t);
}
static ATerm e_8 (ATerm a_34, ATerm b_34, ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_34, b_34);
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      t = SSL_addr(a_34, b_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_49;
      t = w_78(t);
    }
  else
    {
      ATerm x_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_49 = ATgetFirst((ATermList) t);
          u_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_49;
      t = foldr_2_0(w_78, x_78, t);
      x_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_49, x_49);
      t = x_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_m_33;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_8(p_18, q_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_50 = NULL,l_18 = NULL,m_18 = NULL;
  t = times_0_0(t);
  m_18 = t;
  t = SSL_explode_term(m_18);
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_18;
  t = foldr_2_0(r_11, t_11, t);
  a_50 = t;
  t = SSL_TicksToSeconds(a_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  if(match_cons(t, sym__2))
    {
      m_50 = ATgetArgument(t, 0);
      n_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_50;
        if((m_50 != t))
          {
            _fail(t);
          }
        t = l_50;
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        t = (ATerm) ATmakeAppl(sym__2, m_50, n_50);
        {
          ATerm n_35 = t;
          int p_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_50, n_50);
              LocalPopChoice(p_35);
            }
          else
            {
              t = n_35;
              t = SSL_gtr(m_50, n_50);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_50, n_50);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  ATerm r_50 = NULL;
  r_50 = t;
  {
    ATerm q_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
        t = term_q_13;
        u_50 = t;
        t = term_n_13;
        v_50 = t;
        t = term_s_13;
        t = h_8(u_50, v_50, t);
        t_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_50, term_t_13);
        t = geq_0_0(t);
        t = r_50;
        t = n_83(t);
        LocalPopChoice(x_35);
      }
    else
      {
        t = q_35;
        t = r_50;
      }
  }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,a_51 = NULL,b_51 = NULL;
  t = run_time_0_0(t);
  x_50 = t;
  t = term_o_22;
  t = whoami_0_0(t);
  y_50 = t;
  t = term_g_21;
  a_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_35), x_50), term_z_13), y_50);
  b_51 = t;
  t = SSL_printnl(a_51, b_51);
  t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_35), x_50), term_z_13), y_50));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_33;
  c_51 = t;
  t = SSL_exit(c_51);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  n_51 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_51;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_51 = ATgetArgument(t, 0);
          {
            ATerm l_19 = NULL,n_11 = NULL;
            t = SSLgetAnnotations(n_51);
            l_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_51);
            n_11 = t;
            t = SSLsetAnnotations(n_11, l_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_51;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_51 = NULL,g_51 = NULL;
      t = term_q_13;
      f_51 = t;
      t = term_c_36;
      g_51 = t;
      t = term_d_36;
      t = h_8(f_51, g_51, t);
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      t = fetch_1_0(v_11, t);
    }
  t = r_87(t);
  return(t);
}
ATerm map_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  static ATerm d_52 (ATerm t)
  {
    ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
    a_52 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_52;
      }
    else
      {
        ATerm v_19 = NULL,y_19 = NULL,z_19 = NULL,s_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_52 = ATgetFirst((ATermList) t);
            c_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_52);
        v_19 = t;
        t = b_52;
        t = v_71(t);
        y_19 = t;
        t = c_52;
        t = d_52(t);
        z_19 = t;
        t = (ATerm) ATinsert(CheckATermList(z_19), y_19);
        s_11 = t;
        t = SSLsetAnnotations(s_11, v_19);
      }
    return(t);
  }
  t = d_52(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_52 = ATgetFirst((ATermList) t);
      h_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_52 = NULL,m_52 = NULL;
        static ATerm y_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_52)), not_null(m_52));
          return(t);
        }
        t = h_52;
        t = i_0(t);
        if(((l_52 != NULL) && (l_52 != t)))
          _fail(t);
        else
          l_52 = t;
        t = g_52;
        t = g_0(t);
        if(((m_52 != NULL) && (m_52 != t)))
          _fail(t);
        else
          m_52 = t;
        t = h_52;
        t = reverse_acc_2_0(g_0, y_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_22;
      t = i_0(t);
    }
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,a_12 = NULL;
  u_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_52);
  s_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_52);
  a_12 = t;
  t = SSLsetAnnotations(a_12, s_52);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_52), term_e_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL;
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_52 = NULL,r_52 = NULL;
      t = term_q_13;
      q_52 = t;
      t = term_f_35;
      r_52 = t;
      t = term_g_35;
      t = h_8(q_52, r_52, t);
      LocalPopChoice(h_36);
    }
  else
    {
      t = g_36;
      t = fetch_1_0(b_12, t);
    }
  t = term_l_36;
  t = echo_0_0(t);
  t = term_d_34;
  o_52 = t;
  t = term_f_34;
  p_52 = t;
  t = term_o_36;
  t = h_8(o_52, p_52, t);
  t = reverse_acc_2_0(_id, d_12, t);
  t = map_1_0(f_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  static ATerm t_53 (ATerm t)
  {
    ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
    q_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_53 = ATgetFirst((ATermList) t);
        s_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_36 = t;
      int q_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_20 = NULL,r_20 = NULL,h_13 = NULL;
          t = SSLgetAnnotations(q_53);
          n_20 = t;
          t = r_53;
          t = f_72(t);
          r_20 = t;
          t = (ATerm) ATinsert(CheckATermList(s_53), r_20);
          h_13 = t;
          t = SSLsetAnnotations(h_13, n_20);
          LocalPopChoice(q_36);
        }
      else
        {
          t = p_36;
          {
            ATerm f_21 = NULL,o_21 = NULL,i_13 = NULL;
            t = SSLgetAnnotations(q_53);
            f_21 = t;
            t = s_53;
            t = t_53(t);
            o_21 = t;
            t = (ATerm) ATinsert(CheckATermList(o_21), r_53);
            i_13 = t;
            t = SSLsetAnnotations(i_13, f_21);
          }
        }
    }
    return(t);
  }
  t = t_53(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
  x_53 = t;
  {
    ATerm r_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_36 = ATgetFirst((ATermList) t);
                ATerm w_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_53;
          }
        LocalPopChoice(t_36);
      }
    else
      {
        t = r_36;
        t = (ATerm) ATinsert(ATempty, x_53);
      }
  }
  y_53 = t;
  t = term_q_23;
  z_53 = t;
  t = SSL_printnl(z_53, y_53);
  t = x_53;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL;
  t = term_q_13;
  d_54 = t;
  t = term_f_35;
  e_54 = t;
  t = term_g_35;
  t = h_8(d_54, e_54, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_8 (ATerm s_38, ATerm t_38, ATerm t)
{
  t = SSL_table_get(s_38, t_38);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL;
  t = term_x_36;
  f_54 = t;
  t = term_o_22;
  g_54 = t;
  t = term_y_36;
  t = k_8(f_54, g_54, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_z_36;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
  t = term_x_36;
  j_54 = t;
  t = term_o_22;
  k_54 = t;
  t = term_y_36;
  t = k_8(j_54, k_54, t);
  t = term_o_26;
  h_54 = t;
  t = term_o_22;
  i_54 = t;
  t = term_f_37;
  t = k_8(h_54, i_54, t);
  t = term_l_37;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_n_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_12, l_12, m_12, t);
      LocalPopChoice(r_37);
    }
  else
    {
      t = o_37;
      t = Option_3_0(o_12, q_12, r_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,m_13 = NULL;
  q_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_54 = ATgetFirst((ATermList) t);
      n_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_54);
  l_54 = t;
  t = m_54;
  t = u_58(t);
  o_54 = t;
  t = n_54;
  t = v_58(t);
  p_54 = t;
  t = (ATerm) ATinsert(CheckATermList(p_54), o_54);
  m_13 = t;
  t = SSLsetAnnotations(m_13, l_54);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,a_55 = NULL,b_55 = NULL,r_13 = NULL;
  v_54 = t;
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_37;
        t = p_89(t);
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
      }
  }
  t = v_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_54 = ATgetFirst((ATermList) t);
      y_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_54);
  w_54 = t;
  t = term_f_35;
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_35, x_54);
  t = k_8(b_55, x_54, t);
  t = y_54;
  {
    static ATerm l_55 (ATerm t)
    {
      ATerm v_37 = t;
      int w_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_38 = t;
          int c_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_55 = NULL;
              e_55 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_55;
              LocalPopChoice(c_38);
            }
          else
            {
              t = b_38;
              t = p_89(t);
              t = Cons_2_0(_id, l_55, t);
            }
          LocalPopChoice(w_37);
        }
      else
        {
          t = v_37;
          {
            ATerm h_55 = NULL,i_55 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_55 = ATgetFirst((ATermList) t);
                i_55 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_55), (ATerm) ATmakeAppl(sym_Undefined_1, h_55));
          }
        }
      return(t);
    }
    t = l_55(t);
  }
  a_55 = t;
  t = (ATerm) ATinsert(CheckATermList(a_55), (ATerm) ATmakeAppl(sym_Program_1, x_54));
  r_13 = t;
  t = SSLsetAnnotations(r_13, w_54);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm x_55 = NULL;
  x_55 = t;
  if(match_string(t, "--help"))
    {
      t = x_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_55;
        }
    }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL;
  t = term_c_36;
  y_55 = t;
  t = term_o_22;
  z_55 = t;
  t = term_d_38;
  t = k_8(y_55, z_55, t);
  t = term_e_38;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_j_38;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  s_55 = t;
  t = term_d_34;
  u_55 = t;
  t = term_f_34;
  v_55 = t;
  t = (ATerm) ATempty;
  w_55 = t;
  t = SSL_table_put(u_55, v_55, w_55);
  t = s_55;
  {
    static ATerm s_12 (ATerm t)
    {
      ATerm k_38 = t;
      int f_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_89(t);
          LocalPopChoice(f_39);
        }
      else
        {
          t = k_38;
          {
            ATerm r_39 = t;
            int s_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_12, u_12, x_12, t);
                LocalPopChoice(s_39);
              }
            else
              {
                t = r_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_12, t);
  }
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_56 = NULL;
        k_56 = t;
        {
          ATerm x_39 = t;
          int y_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_22 = NULL;
              t = k_56;
              {
                ATerm z_39 = t;
                int a_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_22 = NULL,j_22 = NULL;
                    t = term_q_13;
                    b_22 = t;
                    t = term_c_36;
                    j_22 = t;
                    t = term_d_36;
                    t = h_8(b_22, j_22, t);
                    LocalPopChoice(a_40);
                  }
                else
                  {
                    t = z_39;
                    t = fetch_1_0(y_12, t);
                  }
              }
              t = k_56;
              t = default_system_usage_0_0(t);
              t = term_m_33;
              a_22 = t;
              t = SSL_exit(a_22);
              LocalPopChoice(y_39);
            }
          else
            {
              t = x_39;
              {
                ATerm q_22 = NULL,w_22 = NULL,x_22 = NULL;
                t = term_q_13;
                w_22 = t;
                t = term_x_36;
                x_22 = t;
                t = term_b_40;
                t = h_8(w_22, x_22, t);
                t = k_56;
                t = default_system_about_0_0(t);
                t = term_m_33;
                q_22 = t;
                t = SSL_exit(q_22);
              }
            }
        }
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        {
          ATerm c_40 = t;
          int d_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
              static ATerm a_13 (ATerm t)
              {
                ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,y_13 = NULL;
                q_56 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_56 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_56);
                o_56 = t;
                t = p_56;
                if(((q_55 != NULL) && (q_55 != t)))
                  _fail(t);
                else
                  q_55 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_56);
                y_13 = t;
                t = SSLsetAnnotations(y_13, o_56);
                return(t);
              }
              t = fetch_1_0(a_13, t);
              t = term_g_21;
              m_56 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_55)), term_g_40);
              n_56 = t;
              t = SSL_printnl(m_56, n_56);
              t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_55)), term_g_40));
              t = default_system_usage_0_0(t);
              t = term_t_13;
              l_56 = t;
              t = SSL_exit(l_56);
              LocalPopChoice(d_40);
            }
          else
            {
              t = c_40;
            }
        }
      }
  }
  r_55 = t;
  t = term_d_34;
  t_55 = t;
  t = SSL_table_destroy(t_55);
  t = r_55;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL;
  t = parse_options_1_0(t_87, t);
  v_56 = t;
  t = term_h_40;
  y_56 = t;
  t = SSL_table_create(y_56);
  t = term_h_40;
  w_56 = t;
  t = term_i_40;
  x_56 = t;
  t = SSL_table_put(w_56, x_56, v_56);
  t = v_56;
  t = v_87(t);
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_87, t);
        LocalPopChoice(k_40);
      }
    else
      {
        t = j_40;
        {
          ATerm l_40 = t;
          int m_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_87(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_40);
            }
          else
            {
              t = l_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm p_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      LocalPopChoice(q_40);
    }
  else
    {
      t = p_40;
      {
        ATerm r_40 = t;
        int s_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(s_40);
          }
        else
          {
            t = r_40;
            {
              ATerm t_40 = t;
              int u_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(u_40);
                }
              else
                {
                  t = t_40;
                  {
                    ATerm v_40 = t;
                    int w_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(d_13, e_13, f_13, t);
                        LocalPopChoice(w_40);
                      }
                    else
                      {
                        t = v_40;
                        {
                          ATerm a_41 = t;
                          int b_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(b_41);
                            }
                          else
                            {
                              t = a_41;
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
static ATerm c_13 (ATerm t)
{
  t = xtc_io_1_0(g_13, t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL;
  t = term_x_26;
  a_57 = t;
  t = term_o_22;
  b_57 = t;
  t = term_d_41;
  t = k_8(a_57, b_57, t);
  t = term_e_41;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
  d_57 = t;
  t = term_h_41;
  t = xtc_find_path_0_0(t);
  e_57 = t;
  t = term_c_24;
  f_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_57), term_i_41);
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, e_57), term_i_41));
  t = r_7(f_57, g_57, t);
  t = d_57;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(b_13, default_usage_0_0, _id, c_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
