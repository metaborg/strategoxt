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
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_Path_2;
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
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
}
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_r_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_s_39;
ATerm term_n_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_a_38;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_l_37;
ATerm term_e_37;
ATerm term_q_36;
ATerm term_o_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_f_36;
ATerm term_a_36;
ATerm term_o_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_o_33;
ATerm term_j_33;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_a_32;
ATerm term_s_31;
ATerm term_q_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_a_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_g_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_n_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_w_23;
ATerm term_m_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_q_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_m_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_m_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_v_13, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_x_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_c_15, term_g_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_o_15, term_q_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_m_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_z_17, term_b_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_g_18, term_h_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_n_18, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_s_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_x_18, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_c_19, term_d_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_g_19, term_h_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_r_19, term_s_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_a_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_e_20, term_g_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" ** Warning: Mismatch between basename of input file (", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol(") and module name (", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol(") specified", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_b_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_k_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_y_25);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_z_26);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_a_31);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_h_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_p_30);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_f_21);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_y_21);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_z_21);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_x_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_q_21);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_v_13);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_k_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_f_36);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym__2, term_m_34, term_n_34);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym__2, term_e_37, term_q_21);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_q_21);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_f_36, term_q_21);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_e_37);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_q_21);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm k_7 (ATerm z_41, ATerm a_42, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm l_7 (ATerm r_25, ATerm s_25, ATerm t);
static ATerm m_7 (ATerm o_82 (ATerm), ATerm y_195, ATerm b_26, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t);
static ATerm n_7 (ATerm j_22, ATerm k_22, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm d_81 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm z_101 (ATerm), ATerm t);
static ATerm p_7 (ATerm o_97 (ATerm), ATerm h_43, ATerm f_43, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm check_module_name_0_1 (ATerm r_0 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm guarantee_extension_1_0 (ATerm p_100 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm a_100 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm z_98 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm r_7 (ATerm q_22, ATerm p_22, ATerm t);
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
static ATerm s_7 (ATerm d_47, ATerm v_474, ATerm t);
ATerm find_in_includes_1_0 (ATerm y_79 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm y_98 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm q_87 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm basename_1_0 (ATerm n_100 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm v_87 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm y_27 (ATerm m_26, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_7 (ATerm a_47, ATerm z_46, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm debug_1_0 (ATerm m_82 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_99 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_99 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_99 (ATerm), ATerm t);
static ATerm v_7 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm f_33, ATerm e_33, ATerm t);
static ATerm w_7 (ATerm p_91 (ATerm), ATerm b_33, ATerm a_33, ATerm t);
static ATerm j_6 (ATerm t);
static ATerm x_7 (ATerm r_45, ATerm s_45, ATerm t_45, ATerm t);
static ATerm y_7 (ATerm e_99 (ATerm), ATerm b_46, ATerm a_46, ATerm t);
static ATerm d_8 (ATerm x_47, ATerm y_47, ATerm t);
static ATerm f_35 (ATerm t_34, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_7 (ATerm x_25, ATerm t);
static ATerm a_8 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm b_8 (ATerm g_48, ATerm h_48, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_37 (ATerm v_35, ATerm t);
static ATerm j_37 (ATerm d_36, ATerm e_36, ATerm g_36, ATerm t);
static ATerm k_37 (ATerm r_36, ATerm s_36, ATerm t_36, ATerm t);
static ATerm c_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_95 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm o_42 (ATerm s_41, ATerm t);
static ATerm l_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm e_8 (ATerm r_22, ATerm s_22, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm f_8 (ATerm z_44, ATerm a_45, ATerm t);
ATerm end_scope_1_0 (ATerm l_97 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_97 (ATerm), ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_101 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
ATerm xtc_io_1_0 (ATerm m_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_8 (ATerm u_46, ATerm v_46, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm f_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm k_8 (ATerm u_44, ATerm v_44, ATerm t_44, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_8 (ATerm t_41, ATerm u_41, ATerm t);
ATerm foldr_2_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_98 (ATerm), ATerm t);
static ATerm c_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_11 (ATerm t);
ATerm need_help_1_0 (ATerm b_103 (ATerm), ATerm t);
ATerm map_1_0 (ATerm e_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm l_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_8 (ATerm l_46, ATerm m_46, ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_104 (ATerm), ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm parse_options_1_0 (ATerm y_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm parse_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm k_7 (ATerm z_41, ATerm a_42, ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_41, a_42);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      t = SSL_subtr(z_41, a_42);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,m_0 = NULL,q_0 = NULL;
  t = term_m_13;
  {
    ATerm n_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL,u_0 = NULL;
        t = term_t_13;
        s_0 = t;
        t = term_m_13;
        u_0 = t;
        t = term_u_13;
        t = j_8(s_0, u_0, t);
        LocalPopChoice(r_13);
      }
    else
      {
        t = n_13;
        t = term_v_13;
      }
  }
  b_0 = t;
  t = term_v_13;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_v_13);
  t = k_7(b_0, q_0, t);
  m_0 = t;
  t = SSL_int_to_string(m_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_m_13);
  return(t);
}
static ATerm l_7 (ATerm r_25, ATerm s_25, ATerm t)
{
  ATerm w_0 = NULL;
  t = SSL_write_term_to_stream_baf(r_25, s_25);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_0);
  return(t);
}
static ATerm m_7 (ATerm o_82 (ATerm), ATerm y_195, ATerm b_26, ATerm t)
{
  ATerm x_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_195, term_w_13);
  t = c_8(t);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_0, b_26);
  t = o_82(t);
  t = fclose_0_0(t);
  t = b_26;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_13 = ATgetArgument(t, 0);
      if(match_cons(y_13, sym_Stream_1))
        {
          e_1 = ATgetArgument(y_13, 0);
        }
      else
        _fail(t);
      f_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(e_1, f_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, b_1);
  t = m_7(f_0, a_1, b_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_1);
  t = xtc_transform_file_2_0(y_100, z_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm n_7 (ATerm j_22, ATerm k_22, ATerm t)
{
  t = SSL_execvp(j_22, k_22);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm e_2 = NULL,g_2 = NULL,i_2 = NULL,l_2 = NULL;
  e_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      g_2 = ATgetArgument(t, 0);
      {
        ATerm y_0 = NULL,z_0 = NULL;
        t = SSL_int_to_string(g_2);
        y_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_14), y_0), term_a_14);
        z_0 = t;
        t = SSL_concat_strings(z_0);
      }
    }
  else
    {
      ATerm z_1 = NULL,c_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          g_2 = ATgetArgument(t, 0);
          i_2 = ATgetArgument(t, 1);
          l_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(i_2);
      z_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_2), term_d_14), z_1), term_c_14), g_2);
      c_2 = t;
      t = SSL_concat_strings(c_2);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm q_2 = NULL;
  q_2 = t;
  {
    ATerm e_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_14 = ATgetArgument(t, 0);
              if((q_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm i_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_20), term_b_20), term_u_19), term_n_19), term_e_19), term_z_18), term_t_18), term_p_18), term_i_18), term_d_18), term_u_17), term_q_17), term_m_17), term_i_17), term_e_17), term_a_17), term_w_16), term_s_16), term_n_16), term_h_16), term_c_16), term_y_15), term_r_15), term_j_15), term_z_14), term_t_14), term_p_14), term_l_14);
        t = fetch_elem_1_0(h_0, t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = e_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, q_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm w_2 = NULL,e_3 = NULL;
  w_2 = t;
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_20 = ATgetArgument(t, 0);
            e_3 = ATgetArgument(t, 1);
            {
              ATerm n_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_20);
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_2 = NULL,r_2 = NULL,s_2 = NULL;
              t = e_3;
              {
                ATerm q_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              n_2 = t;
              t = term_r_20;
              r_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, n_2), term_t_20);
              s_2 = t;
              t = SSL_printnl(r_2, s_2);
              t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATinsert(ATinsert(ATempty, n_2), term_t_20));
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              t = w_2;
            }
        }
      }
    else
      {
        t = i_20;
        t = w_2;
      }
  }
  t = w_2;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  u_3 = t;
  t = fork_0_0(t);
  t_3 = t;
  {
    ATerm u_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_3;
        t = d_81(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = u_20;
        t = SSL_waitpid(t_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            if(((ATgetType(x_20) != AT_INT) || (ATgetInt((ATermInt) x_20) != 0)))
              _fail(t);
            {
              ATerm y_20 = ATgetArgument(t, 1);
            }
            {
              ATerm z_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_101 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  x_3 = t;
  t = z_101(t);
  t = xtc_find_0_0(t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_3, x_3);
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm i_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, w_3, x_3);
      t = n_7(w_3, x_3, t);
      t = term_c_21;
      i_4 = t;
      t = SSL_exit(i_4);
      return(t);
    }
    t = fork_and_wait_1_0(j_0, t);
  }
  t = x_3;
  return(t);
}
static ATerm p_7 (ATerm o_97 (ATerm), ATerm h_43, ATerm f_43, ATerm t)
{
  ATerm n_4 = NULL,p_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,y_4 = NULL;
  u_4 = t;
  t = o_97(t);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_4, h_43, f_43);
  t = k_8(n_4, h_43, f_43, t);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL;
        t = term_f_21;
        a_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_4, term_f_21);
        t = j_8(n_4, a_5, t);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_4 = ATgetFirst((ATermList) t);
      t_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_21;
  v_4 = t;
  t = (ATerm) ATinsert(CheckATermList(t_4), (ATerm) ATinsert(CheckATermList(p_4), h_43));
  y_4 = t;
  t = SSL_table_put(n_4, v_4, y_4);
  t = u_4;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm e_5 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 = NULL,d_3 = NULL;
      k_5 = t;
      t = term_j_21;
      d_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_5, term_j_21);
      t = a_8(k_5, d_3, t);
      e_5 = t;
      t = SSL_mkstemp(e_5);
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm l_5 = NULL;
        t = term_k_21;
        l_5 = t;
        t = SSL_perror(l_5);
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
static ATerm c_1 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,t_5 = NULL,u_5 = NULL;
  t = P__tmpdir_0_0(t);
  t_5 = t;
  t = term_m_21;
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_5, term_m_21);
  t = a_8(t_5, u_5, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_q_21;
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_5, term_q_21);
  t = p_7(c_1, q_5, r_5, t);
  t = SSL_close(p_5);
  t = q_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  x_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_5 = NULL,a_6 = NULL;
      t = x_5;
      t = xtc_new_file_0_0(t);
      z_5 = t;
      t = v_0(t);
      a_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_6, (ATerm) ATinsert(ATinsert(ATempty, z_5), term_y_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_5);
    }
  else
    {
      ATerm c_6 = NULL,d_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_5;
      t = xtc_new_file_0_0(t);
      c_6 = t;
      t = v_0(t);
      d_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_6), term_y_21), y_5), term_z_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_6);
    }
  return(t);
}
ATerm check_module_name_0_1 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,a_7 = NULL;
  y_6 = t;
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Specification_1))
          {
            ATerm c_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_22);
        t = y_6;
      }
    else
      {
        t = a_22;
        if(match_cons(t, sym_Module_2))
          {
            a_7 = ATgetArgument(t, 0);
            {
              ATerm f_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = y_6;
        {
          ATerm h_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_0;
              if((a_7 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym__2, r_0, r_0);
              LocalPopChoice(l_22);
            }
          else
            {
              t = h_22;
              {
                ATerm o_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_22), a_7), term_o_22), r_0), term_n_22);
                s_4 = t;
                t = SSL_concat_strings(s_4);
                o_4 = t;
                t = term_r_20;
                q_4 = t;
                t = (ATerm) ATinsert(ATempty, o_4);
                r_4 = t;
                t = SSL_printnl(q_4, r_4);
                t = y_6;
              }
            }
        }
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_8 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_v_22;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm n_8 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_w_22);
      n_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_8, (ATerm) ATinsert(ATempty, term_w_22));
      t = d_8(i_8, n_8, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm r_8 = NULL,u_8 = NULL,v_8 = NULL;
  t = basename_1_0(_id, t);
  v_8 = t;
  t = term_q_21;
  t = p_100(t);
  u_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_8), term_x_22), v_8);
  r_8 = t;
  t = SSL_concat_strings(r_8);
  return(t);
}
ATerm if_keep1_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm a_9 = NULL;
  a_9 = t;
  {
    ATerm y_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_9 = NULL,f_9 = NULL,g_9 = NULL;
        t = term_t_13;
        f_9 = t;
        t = term_b_23;
        g_9 = t;
        t = term_c_23;
        t = j_8(f_9, g_9, t);
        c_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_9, term_v_13);
        t = geq_0_0(t);
        t = a_9;
        t = a_100(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = y_22;
        t = a_9;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_9 = NULL,s_9 = NULL,t_9 = NULL;
        t = term_t_13;
        s_9 = t;
        t = term_m_13;
        t_9 = t;
        t = term_u_13;
        t = j_8(s_9, t_9, t);
        p_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_9, term_r_14);
        t = geq_0_0(t);
        t = m_9;
        t = z_98(t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = m_9;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm e_10 = NULL;
  if(match_cons(t, sym_TopSort_1))
    {
      e_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10;
  return(t);
}
ATerm pass_sort_0_0 (ATerm t)
{
  ATerm f_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_9 = NULL,y_9 = NULL,d_10 = NULL;
      t = get_meta_0_0(t);
      if(match_cons(t, sym_Meta_1))
        {
          d_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_10;
      t = fetch_elem_1_0(d_1, t);
      y_9 = t;
      t = SSL_is_string(y_9);
      x_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, x_9), term_m_23);
      LocalPopChoice(j_23);
    }
  else
    {
      t = f_23;
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
static ATerm r_7 (ATerm q_22, ATerm p_22, ATerm t)
{
  ATerm p_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(q_22, p_22);
      LocalPopChoice(r_23);
    }
  else
    {
      t = p_23;
      t = get_errno_0_0(t);
      t = term_q_21;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, q_22, p_22);
      t = e_8(q_22, p_22, t);
      t = SSL_remove(q_22);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL;
  y_10 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 = NULL;
        t = y_10;
        t = p_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_w_23;
        c_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_10, term_w_23);
        t = e_8(z_10, c_5, t);
        t = SSL_remove(z_10);
        t = term_w_23;
        LocalPopChoice(v_23);
      }
    else
      {
        t = t_23;
        {
          ATerm x_23 = t;
          int y_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_5 = NULL;
              t = y_10;
              t = p_0(t);
              s_5 = t;
              {
                ATerm a_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm v_5 = NULL;
                    v_5 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = v_5;
                      }
                    else
                      {
                        t = v_5;
                        if((z_10 != t))
                          {
                            _fail(t);
                          }
                        t = v_5;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, z_10, s_5);
              t = r_7(z_10, s_5, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_5);
              LocalPopChoice(y_23);
            }
          else
            {
              t = x_23;
              t = y_10;
              t = p_0(t);
              if((z_10 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_10);
            }
        }
      }
  }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_c_24;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,m_11 = NULL;
  j_11 = t;
  t = term_r_20;
  k_11 = t;
  t = (ATerm) ATinsert(ATempty, term_f_24);
  m_11 = t;
  t = SSL_printnl(k_11, m_11);
  t = j_11;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_g_24;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm p_11 = NULL,r_11 = NULL;
  t = term_t_13;
  p_11 = t;
  t = term_k_24;
  r_11 = t;
  t = term_l_24;
  t = j_8(p_11, r_11, t);
  t = map_1_0(s_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_11), term_k_24);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm v_11 = NULL,y_11 = NULL;
  t = term_t_13;
  v_11 = t;
  t = term_k_24;
  y_11 = t;
  t = term_l_24;
  t = j_8(v_11, y_11, t);
  t = map_1_0(y_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm z_11 = NULL;
  z_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_11), term_k_24);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  t = if_verbose6_1_0(g_1, t);
  f_11 = t;
  t = guarantee_extension_1_0(i_1, t);
  e_11 = t;
  t = f_11;
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL;
        t = e_11;
        t = find_in_includes_1_0(k_1, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_11);
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        {
          ATerm i_11 = NULL;
          static ATerm a_2 (ATerm t)
          {
            t = e_11;
            return(t);
          }
          t = if_verbose2_1_0(m_1, t);
          t = guarantee_extension_1_0(n_1, t);
          i_11 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, i_11);
          {
            ATerm p_24 = t;
            int q_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_11 = NULL,o_11 = NULL,j_1 = NULL;
                o_11 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm w_24 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_11);
                n_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, i_11);
                j_1 = t;
                t = SSLsetAnnotations(j_1, n_11);
                LocalPopChoice(q_24);
                t = xtc_transform_file_2_0(p_1, r_1, t);
              }
            else
              {
                t = p_24;
                t = xtc_transform_term_2_0(t_1, x_1, t);
              }
          }
          t = rename_to_1_0(a_2, t);
        }
      }
  }
  return(t);
}
static ATerm s_7 (ATerm d_47, ATerm v_474, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm b_12 = NULL,c_12 = NULL,e_12 = NULL,g_12 = NULL;
    b_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_47), term_y_24), b_12);
    g_12 = t;
    t = SSL_concat_strings(g_12);
    c_12 = t;
    t = (ATerm) ATinsert(ATempty, term_w_22);
    e_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_12, (ATerm) ATinsert(ATempty, term_w_22));
    t = d_8(c_12, e_12, t);
    return(t);
  }
  t = v_474;
  t = fetch_elem_1_0(b_2, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,l_12 = NULL;
  static ATerm d_2 (ATerm t)
  {
    t = debug_1_0(y_79, t);
    return(t);
  }
  i_12 = t;
  t = term_t_13;
  j_12 = t;
  t = term_k_24;
  l_12 = t;
  t = term_l_24;
  t = j_8(j_12, l_12, t);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_12, h_12);
  t = s_7(i_12, h_12, t);
  t = if_verbose2_1_0(d_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_z_24;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_b_25;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  t = term_r_20;
  w_12 = t;
  t = (ATerm) ATinsert(ATempty, term_c_25);
  x_12 = t;
  t = SSL_printnl(w_12, x_12);
  t = v_12;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = debug_1_0(f_3, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  t = if_verbose6_1_0(f_2, t);
  q_12 = t;
  t = guarantee_extension_1_0(j_2, t);
  r_12 = t;
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_12 = NULL;
        t = find_in_includes_1_0(k_2, t);
        u_12 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_12);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        {
          static ATerm b_3 (ATerm t)
          {
            t = r_12;
            return(t);
          }
          t = if_verbose2_1_0(p_2, t);
          t = q_12;
          t = get_syntax_definition_0_0(t);
          {
            ATerm g_25 = t;
            int h_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_13 = NULL,f_13 = NULL;
                f_13 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    e_13 = ATgetArgument(t, 0);
                    {
                      ATerm h_6 = NULL,l_1 = NULL;
                      t = SSLgetAnnotations(f_13);
                      h_6 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, e_13);
                      l_1 = t;
                      t = SSLsetAnnotations(l_1, h_6);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = f_13;
                  }
                LocalPopChoice(h_25);
                {
                  static ATerm u_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, q_12), term_i_25);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(t_2, u_2, t);
                }
              }
            else
              {
                t = g_25;
                {
                  static ATerm a_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, q_12), term_i_25);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(v_2, a_3, t);
                }
              }
          }
          t = rename_to_1_0(b_3, t);
        }
      }
  }
  t = if_verbose6_1_0(c_3, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_13 = NULL,p_13 = NULL,q_13 = NULL;
        t = term_t_13;
        p_13 = t;
        t = term_m_13;
        q_13 = t;
        t = term_u_13;
        t = j_8(p_13, q_13, t);
        l_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_13, term_n_14);
        t = geq_0_0(t);
        t = i_13;
        t = y_98(t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = i_13;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm s_13 = NULL;
  static ATerm g_3 (ATerm t)
  {
    t = q_87(t);
    if(((s_13 != NULL) && (s_13 != t)))
      _fail(t);
    else
      s_13 = t;
    return(t);
  }
  t = fetch_1_0(g_3, t);
  t = not_null(s_13);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = debug_1_0(i_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_n_25;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_l_25;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm x_13 = NULL,u_14 = NULL,w_14 = NULL;
  t = if_verbose6_1_0(h_3, t);
  u_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL,d_7 = NULL,o_1 = NULL;
        t = SSLgetAnnotations(u_14);
        z_6 = t;
        t = w_14;
        t = guarantee_extension_1_0(j_3, t);
        d_7 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_7);
        o_1 = t;
        t = SSLsetAnnotations(o_1, z_6);
        t = read_from_0_0(t);
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        {
          ATerm o_7 = NULL,u_7 = NULL,p_8 = NULL,q_1 = NULL;
          t = SSLgetAnnotations(u_14);
          u_7 = t;
          t = w_14;
          t = guarantee_extension_1_0(l_3, t);
          p_8 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, p_8);
          q_1 = t;
          t = SSLsetAnnotations(q_1, u_7);
          t = read_from_0_0(t);
          o_7 = t;
          t = SSL_explode_term(o_7);
          if(match_cons(t, sym__2))
            {
              x_13 = ATgetArgument(t, 0);
              {
                ATerm q_25 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, x_13)));
        }
      }
  }
  t = if_verbose6_1_0(n_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm s_15 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      s_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = debug_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm d_15 = NULL;
  t = if_verbose6_1_0(p_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      d_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_15 = NULL,f_15 = NULL;
        t = term_t_13;
        e_15 = t;
        t = term_y_25;
        f_15 = t;
        t = term_z_25;
        t = j_8(e_15, f_15, t);
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        {
          ATerm a_26 = t;
          int c_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm v_15 (ATerm i_15, ATerm t)
              {
                ATerm k_15 = NULL,m_15 = NULL;
                t = term_r_20;
                k_15 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_26), d_15), term_i_26), i_15), term_h_26);
                m_15 = t;
                t = SSL_printnl(k_15, m_15);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_26), d_15), term_i_26), i_15), term_h_26);
                _fail(t);
                return(t);
              }
              ATerm n_15 = NULL,p_15 = NULL;
              t = get_meta_0_0(t);
              p_15 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  n_15 = ATgetArgument(t, 0);
                  {
                    ATerm k_26 = t;
                    int l_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_15;
                        t = fetch_elem_1_0(s_3, t);
                        LocalPopChoice(l_26);
                      }
                    else
                      {
                        t = k_26;
                        t = v_15(p_15, t);
                      }
                  }
                }
              else
                {
                  t = v_15(p_15, t);
                }
              LocalPopChoice(c_26);
            }
          else
            {
              t = a_26;
              t = term_n_26;
            }
        }
      }
  }
  t = if_verbose2_1_0(v_3, t);
  return(t);
}
ATerm basename_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  j_16 = t;
  t = SSL_explode_string(j_16);
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_18 (ATerm t)
        {
          ATerm v_17 = NULL,a_18 = NULL,c_18 = NULL;
          v_17 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_18 = ATgetFirst((ATermList) t);
              c_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm q_26 = t;
            int r_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_9 = NULL,j_9 = NULL,u_1 = NULL;
                t = SSLgetAnnotations(v_17);
                d_9 = t;
                t = c_18;
                t = j_18(t);
                j_9 = t;
                t = (ATerm) ATinsert(CheckATermList(j_9), a_18);
                u_1 = t;
                t = SSLsetAnnotations(u_1, d_9);
                LocalPopChoice(r_26);
              }
            else
              {
                t = q_26;
                {
                  ATerm s_26 = t;
                  int t_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_9 = NULL,v_1 = NULL;
                      t = SSLgetAnnotations(v_17);
                      z_9 = t;
                      t = a_18;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(c_18), a_18);
                      v_1 = t;
                      t = SSLsetAnnotations(v_1, z_9);
                      LocalPopChoice(t_26);
                    }
                  else
                    {
                      t = s_26;
                      {
                        ATerm o_10 = NULL,w_10 = NULL,w_1 = NULL;
                        t = SSLgetAnnotations(v_17);
                        o_10 = t;
                        t = a_18;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = c_18;
                        t = n_100(t);
                        w_10 = t;
                        t = (ATerm) ATinsert(CheckATermList(w_10), a_18);
                        w_1 = t;
                        t = SSLsetAnnotations(w_1, o_10);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = j_18(t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
      }
  }
  i_16 = t;
  t = SSL_implode_string(i_16);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = debug_1_0(a_4, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_v_26;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_w_26;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_x_26);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_w_26;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_x_26);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm p_21 = NULL,r_21 = NULL,s_21 = NULL;
  t = pass_verbose_0_0(t);
  r_21 = t;
  t = term_z_26;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL,w_21 = NULL;
        t = term_t_13;
        t_21 = t;
        t = term_z_26;
        w_21 = t;
        t = term_c_27;
        t = j_8(t_21, w_21, t);
        LocalPopChoice(b_27);
        t = (ATerm) ATinsert(ATempty, term_e_27);
      }
    else
      {
        t = a_27;
        t = (ATerm) ATempty;
      }
  }
  s_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_21), r_21);
  t = concat_0_0(t);
  p_21 = t;
  t = (ATerm) ATinsert(CheckATermList(p_21), term_g_27);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm x_21 = NULL,d_22 = NULL,e_22 = NULL;
  t = pass_verbose_0_0(t);
  d_22 = t;
  t = term_z_26;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_22 = NULL,i_22 = NULL;
        t = term_t_13;
        g_22 = t;
        t = term_z_26;
        i_22 = t;
        t = term_c_27;
        t = j_8(g_22, i_22, t);
        LocalPopChoice(j_27);
        t = (ATerm) ATinsert(ATempty, term_e_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATempty;
      }
  }
  e_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_22), d_22);
  t = concat_0_0(t);
  x_21 = t;
  t = (ATerm) ATinsert(CheckATermList(x_21), term_g_27);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_k_27;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_l_27;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  t = pass_verbose_0_0(t);
  h_23 = t;
  t = term_z_26;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_23 = NULL,l_23 = NULL;
        t = term_t_13;
        k_23 = t;
        t = term_z_26;
        l_23 = t;
        t = term_c_27;
        t = j_8(k_23, l_23, t);
        LocalPopChoice(n_27);
        t = (ATerm) ATinsert(ATempty, term_z_26);
      }
    else
      {
        t = m_27;
        t = (ATerm) ATempty;
      }
  }
  i_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_23), h_23);
  t = concat_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_l_27;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm o_23 = NULL,q_23 = NULL;
  t = pass_verbose_0_0(t);
  o_23 = t;
  t = term_z_26;
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_23 = NULL,z_23 = NULL;
        t = term_t_13;
        s_23 = t;
        t = term_z_26;
        z_23 = t;
        t = term_c_27;
        t = j_8(s_23, z_23, t);
        LocalPopChoice(p_27);
        t = (ATerm) ATinsert(ATempty, term_z_26);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATempty;
      }
  }
  q_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_23), o_23);
  t = concat_0_0(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_q_27;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_q_27;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm i_19 = NULL,l_19 = NULL,m_19 = NULL,p_19 = NULL,q_19 = NULL,t_19 = NULL,x_19 = NULL,m_2 = NULL;
  t = if_verbose6_1_0(z_3, t);
  q_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_19);
  t_19 = t;
  t = x_19;
  t = basename_1_0(_id, t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_19);
  m_2 = t;
  t = SSLsetAnnotations(m_2, t_19);
  t = q_19;
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      i_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_19;
  t = pass_sort_0_0(t);
  l_19 = t;
  t = q_19;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_20 = ATgetArgument(t, 0);
            {
              ATerm t_11 = NULL,o_2 = NULL;
              t = SSLgetAnnotations(q_19);
              t_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
              o_2 = t;
              t = SSLsetAnnotations(o_2, t_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_19;
          }
        LocalPopChoice(s_27);
        {
          static ATerm f_4 (ATerm t)
          {
            ATerm m_20 = NULL,s_20 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(g_4, t);
            s_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_20, l_19);
            t = conc_0_0(t);
            m_20 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_20), i_19), term_u_27), term_t_27);
            return(t);
          }
          t = xtc_transform_file_2_0(c_4, f_4, t);
        }
      }
    else
      {
        t = r_27;
        {
          static ATerm j_4 (ATerm t)
          {
            ATerm a_21 = NULL,b_21 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(k_4, t);
            b_21 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_21, l_19);
            t = conc_0_0(t);
            a_21 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_21), i_19), term_u_27), term_t_27);
            return(t);
          }
          t = xtc_transform_term_2_0(h_4, j_4, t);
        }
      }
  }
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL,o_21 = NULL;
        o_21 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_21 = ATgetArgument(t, 0);
            {
              ATerm f_12 = NULL,x_2 = NULL;
              t = SSLgetAnnotations(o_21);
              f_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_21);
              x_2 = t;
              t = SSLsetAnnotations(x_2, f_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_21;
          }
        LocalPopChoice(w_27);
        t = xtc_transform_file_2_0(l_4, m_4, t);
      }
    else
      {
        t = v_27;
        t = xtc_transform_term_2_0(w_4, x_4, t);
      }
  }
  {
    static ATerm z_4 (ATerm t)
    {
      static ATerm b_5 (ATerm t)
      {
        t = m_19;
        t = guarantee_extension_1_0(d_5, t);
        return(t);
      }
      t = copy_to_1_0(b_5, t);
      return(t);
    }
    t = if_keep1_1_0(z_4, t);
  }
  {
    ATerm x_27 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_22 = NULL,g_23 = NULL;
        g_23 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_22 = ATgetArgument(t, 0);
            {
              ATerm t_12 = NULL,y_2 = NULL;
              t = SSLgetAnnotations(g_23);
              t_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_22);
              y_2 = t;
              t = SSLsetAnnotations(y_2, t_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_23;
          }
        LocalPopChoice(d_28);
        t = xtc_transform_file_2_0(f_5, h_5, t);
      }
    else
      {
        t = x_27;
        t = xtc_transform_term_2_0(i_5, m_5, t);
      }
  }
  p_19 = t;
  t = read_from_0_0(t);
  t = check_module_name_0_1(m_19, t);
  t = p_19;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_24 = ATgetArgument(t, 0);
            {
              ATerm o_13 = NULL,z_2 = NULL;
              t = SSLgetAnnotations(p_19);
              o_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_24);
              z_2 = t;
              t = SSLsetAnnotations(z_2, o_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_19;
          }
        LocalPopChoice(f_28);
        t = xtc_transform_file_2_0(n_5, pass_verbose_0_0, t);
      }
    else
      {
        t = e_28;
        t = xtc_transform_term_2_0(o_5, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  static ATerm g_26 (ATerm t)
  {
    ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
    f_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_26 = ATgetFirst((ATermList) t);
        e_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_13 = NULL,f_14 = NULL,k_3 = NULL;
          t = SSLgetAnnotations(f_26);
          z_13 = t;
          t = e_26;
          t = g_26(t);
          f_14 = t;
          t = (ATerm) ATinsert(CheckATermList(f_14), d_26);
          k_3 = t;
          t = SSLsetAnnotations(k_3, z_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_26;
        t = v_87(t);
      }
    return(t);
  }
  t = g_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,x_24 = NULL;
  s_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_24;
    }
  else
    {
      static ATerm w_5 (ATerm t)
      {
        t = not_null(x_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_24 = ATgetFirst((ATermList) t);
          if(((x_24 != NULL) && (x_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_24;
      t = at_end_1_0(w_5, t);
    }
  return(t);
}
static ATerm y_27 (ATerm m_26, ATerm t)
{
  ATerm u_26 = NULL;
  t = SSL_explode_term(m_26);
  if(match_cons(t, sym__2))
    {
      ATerm g_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_27 = NULL,f_27 = NULL,h_27 = NULL;
  h_27 = t;
  if(match_cons(t, sym__2))
    {
      d_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_6 (ATerm t)
            {
              t = f_27;
              return(t);
            }
            t = d_27;
            t = at_end_1_0(b_6, t);
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            t = y_27(h_27, t);
          }
      }
    }
  else
    {
      t = y_27(h_27, t);
    }
  return(t);
}
static ATerm t_7 (ATerm a_47, ATerm z_46, ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  t = a_47;
  {
    ATerm j_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_28 = NULL;
        t = term_t_13;
        c_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_13, a_47);
        t = j_8(c_28, a_47, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = j_28;
        t = (ATerm) ATempty;
      }
  }
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_46, a_28);
  t = conc_0_0(t);
  z_27 = t;
  t = term_t_13;
  b_28 = t;
  t = SSL_table_put(b_28, a_47, z_27);
  t = (ATerm) ATmakeAppl(sym__3, term_t_13, a_47, z_27);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  l_28 = t;
  t = SSL_explode_string(l_28);
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_29 (ATerm t)
        {
          ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
          m_29 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_29 = ATgetFirst((ATermList) t);
              o_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm p_28 = t;
            int q_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_15 = NULL,h_15 = NULL,m_3 = NULL;
                t = SSLgetAnnotations(m_29);
                b_15 = t;
                t = o_29;
                t = r_29(t);
                h_15 = t;
                t = (ATerm) ATinsert(CheckATermList(h_15), n_29);
                m_3 = t;
                t = SSLsetAnnotations(m_3, b_15);
                LocalPopChoice(q_28);
              }
            else
              {
                t = p_28;
                {
                  ATerm x_15 = NULL,q_3 = NULL;
                  t = SSLgetAnnotations(m_29);
                  x_15 = t;
                  t = n_29;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, n_29);
                  q_3 = t;
                  t = SSLsetAnnotations(q_3, x_15);
                }
              }
          }
          return(t);
        }
        t = r_29(t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATempty;
      }
  }
  k_28 = t;
  t = SSL_implode_string(k_28);
  return(t);
}
ATerm debug_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,h_30 = NULL,i_30 = NULL;
  u_29 = t;
  t = m_82(t);
  v_29 = t;
  t = term_r_20;
  h_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_29), v_29);
  i_30 = t;
  t = SSL_printnl(h_30, i_30);
  t = u_29;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_30 = NULL;
  static ATerm e_6 (ATerm t)
  {
    ATerm l_30 = NULL,m_30 = NULL;
    l_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), l_30);
    t = j_8(not_null(k_30), l_30, t);
    m_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_30, m_30);
    return(t);
  }
  if(((k_30 != NULL) && (k_30 != t)))
    _fail(t);
  else
    k_30 = t;
  t = SSL_table_keys(k_30);
  t = map_1_0(e_6, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm s_30 = NULL;
  s_30 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
        t = term_t_13;
        x_30 = t;
        t = term_m_13;
        y_30 = t;
        t = term_u_13;
        t = j_8(x_30, y_30, t);
        w_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_30, term_g_19);
        t = geq_0_0(t);
        t = s_30;
        t = b_99(t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = s_30;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm d_31 = NULL;
  d_31 = t;
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_31 = NULL,n_31 = NULL,o_31 = NULL;
        t = term_t_13;
        n_31 = t;
        t = term_m_13;
        o_31 = t;
        t = term_u_13;
        t = j_8(n_31, o_31, t);
        i_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_31, term_u_16);
        t = geq_0_0(t);
        t = d_31;
        t = a_99(t);
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
        t = d_31;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
        t = term_t_13;
        u_31 = t;
        t = term_m_13;
        v_31 = t;
        t = term_u_13;
        t = j_8(u_31, v_31, t);
        t_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_31, term_x_14);
        t = geq_0_0(t);
        t = r_31;
        t = c_99(t);
        LocalPopChoice(w_28);
      }
    else
      {
        t = v_28;
        t = r_31;
      }
  }
  return(t);
}
static ATerm v_7 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm f_33, ATerm e_33, ATerm t)
{
  t = t_91(t);
  {
    static ATerm f_6 (ATerm t)
    {
      ATerm x_31 = NULL;
      x_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_33, x_31);
      t = s_91(t);
      return(t);
    }
    t = fetch_1_0(f_6, t);
  }
  t = e_33;
  return(t);
}
static ATerm w_7 (ATerm p_91 (ATerm), ATerm b_33, ATerm a_33, ATerm t)
{
  static ATerm c_33 (ATerm t)
  {
    ATerm n_32 = NULL,s_32 = NULL,t_32 = NULL;
    n_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_33;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_32 = ATgetFirst((ATermList) t);
            t_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_28 = t;
          int y_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_32;
              {
                static ATerm g_6 (ATerm t)
                {
                  t = a_33;
                  return(t);
                }
                t = v_7(p_91, g_6, s_32, t_32, t);
              }
              t = c_33(t);
              LocalPopChoice(y_28);
            }
          else
            {
              t = x_28;
              {
                ATerm g_16 = NULL,r_16 = NULL,b_4 = NULL;
                t = SSLgetAnnotations(n_32);
                g_16 = t;
                t = t_32;
                t = c_33(t);
                r_16 = t;
                t = (ATerm) ATinsert(CheckATermList(r_16), s_32);
                b_4 = t;
                t = SSLsetAnnotations(b_4, g_16);
              }
            }
        }
      }
    return(t);
  }
  t = b_33;
  t = c_33(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm c_34 = NULL;
  if(match_cons(t, sym__2))
    {
      c_34 = ATgetArgument(t, 0);
      if((c_34 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_7 (ATerm r_45, ATerm s_45, ATerm t_45, ATerm t)
{
  ATerm n_33 = NULL,r_33 = NULL,v_33 = NULL;
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_29 = ATgetArgument(t, 0);
            ATerm c_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
        t = j_8(r_45, s_45, t);
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATempty;
      }
  }
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_33, t_45);
  t = w_7(j_6, v_33, t_45, t);
  r_33 = t;
  t = SSL_table_put(r_45, s_45, r_33);
  t = n_33;
  return(t);
}
static ATerm y_7 (ATerm e_99 (ATerm), ATerm b_46, ATerm a_46, ATerm t)
{
  static ATerm l_6 (ATerm t)
  {
    ATerm d_34 = NULL,e_34 = NULL;
    if(match_cons(t, sym__2))
      {
        d_34 = ATgetArgument(t, 0);
        e_34 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, b_46, d_34, e_34);
    t = e_99(t);
    return(t);
  }
  t = a_46;
  t = map_1_0(l_6, t);
  return(t);
}
static ATerm d_8 (ATerm x_47, ATerm y_47, ATerm t)
{
  t = SSL_access(x_47, y_47);
  return(t);
}
static ATerm f_35 (ATerm t_34, ATerm t)
{
  t = SSL_fclose(t_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  y_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_34 = ATgetArgument(t, 0);
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_34);
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            t = f_35(y_34, t);
          }
      }
    }
  else
    {
      t = f_35(y_34, t);
    }
  return(t);
}
static ATerm z_7 (ATerm x_25, ATerm t)
{
  t = SSL_read_term_from_stream(x_25);
  return(t);
}
static ATerm a_8 (ATerm o_40, ATerm p_40, ATerm t)
{
  t = SSL_strcat(o_40, p_40);
  return(t);
}
static ATerm b_8 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm g_35 = NULL;
  t = SSL_fopen(g_48, h_48);
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_35);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_35 = NULL;
  t = SSL_stdin_stream();
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_35 = NULL;
  t = SSL_stdout_stream();
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_35 = NULL;
  t = SSL_stderr_stream();
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_35);
  return(t);
}
static ATerm i_37 (ATerm v_35, ATerm t)
{
  ATerm y_35 = NULL;
  t = SSL_explode_term(v_35);
  if(match_cons(t, sym__2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_29 = ATgetArgument(t, 1);
        if(((ATgetType(g_29) == AT_LIST) && !(ATisEmpty(g_29))))
          {
            y_35 = ATgetFirst((ATermList) g_29);
            {
              ATerm h_29 = (ATerm) ATgetNext((ATermList) g_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_35;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_35;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_35;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_35;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_37 (ATerm d_36, ATerm e_36, ATerm g_36, ATerm t)
{
  ATerm h_36 = NULL,l_36 = NULL,m_36 = NULL,p_36 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(g_36);
  m_36 = t;
  t = d_36;
  if(match_cons(t, sym_Path_1))
    {
      p_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_36, e_36);
  d_4 = t;
  t = SSLsetAnnotations(d_4, m_36);
  if(match_cons(t, sym__2))
    {
      h_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(h_36, l_36, t);
  return(t);
}
static ATerm k_37 (ATerm r_36, ATerm s_36, ATerm t_36, ATerm t)
{
  ATerm u_36 = NULL,x_36 = NULL,y_36 = NULL,d_37 = NULL,e_4 = NULL;
  t = SSLgetAnnotations(t_36);
  y_36 = t;
  t = SSL_is_string(r_36);
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_37, s_36);
  e_4 = t;
  t = SSLsetAnnotations(e_4, y_36);
  if(match_cons(t, sym__2))
    {
      u_36 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(u_36, x_36, t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  if(match_cons(t, sym__2))
    {
      g_37 = ATgetArgument(t, 0);
      h_37 = ATgetArgument(t, 1);
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_37(f_37, t);
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            {
              ATerm k_29 = t;
              int l_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_37(g_37, h_37, f_37, t);
                  LocalPopChoice(l_29);
                }
              else
                {
                  t = k_29;
                  t = k_37(g_37, h_37, f_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_37(f_37, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,u_37 = NULL;
  u_37 = t;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_37, term_s_29);
        t = c_8(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        {
          ATerm w_17 = NULL,x_17 = NULL;
          t = term_t_29;
          x_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_29, u_37);
          t = a_8(x_17, u_37, t);
          w_17 = t;
          t = SSL_perror(w_17);
          _fail(t);
        }
      }
  }
  n_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(o_37, t);
  m_37 = t;
  t = n_37;
  t = fclose_0_0(t);
  t = m_37;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_w_29;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_37 = NULL,y_37 = NULL;
      x_37 = t;
      t = (ATerm) ATinsert(ATempty, term_a_30);
      y_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_37, (ATerm) ATinsert(ATempty, term_a_30));
      t = d_8(x_37, y_37, t);
      LocalPopChoice(z_29);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = y_29;
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_30 = t;
            if((PushChoice() == 0))
              {
                ATerm b_38 = NULL,c_38 = NULL;
                b_38 = t;
                t = (ATerm) ATinsert(ATempty, term_w_22);
                c_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_38, (ATerm) ATinsert(ATempty, term_w_22));
                t = d_8(b_38, c_38, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_30;
              }
            t = debug_1_0(m_6, t);
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            t = debug_1_0(n_6, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = debug_1_0(r_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = debug_1_0(t_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_f_30;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  t = term_r_20;
  a_39 = t;
  t = (ATerm) ATinsert(ATempty, term_g_30);
  b_39 = t;
  t = SSL_printnl(a_39, b_39);
  t = z_38;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,f_39 = NULL;
  if(match_cons(t, sym__3))
    {
      c_39 = ATgetArgument(t, 0);
      d_39 = ATgetArgument(t, 1);
      f_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_7(c_39, d_39, f_39, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
  g_39 = t;
  t = term_r_20;
  h_39 = t;
  t = (ATerm) ATinsert(ATempty, term_j_30);
  i_39 = t;
  t = SSL_printnl(h_39, i_39);
  t = g_39;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
  j_39 = t;
  t = term_r_20;
  k_39 = t;
  t = (ATerm) ATinsert(ATempty, term_g_30);
  l_39 = t;
  t = SSL_printnl(k_39, l_39);
  t = j_39;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,t_38 = NULL,u_38 = NULL;
  j_38 = t;
  t = if_verbose5_1_0(o_6, t);
  {
    ATerm n_30 = t;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL,y_38 = NULL;
        t = term_o_30;
        x_38 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_38);
        y_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_30, (ATerm) ATmakeAppl(sym_Imported_1, j_38));
        t = j_8(x_38, y_38, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_30;
      }
  }
  l_38 = t;
  t = term_o_30;
  r_38 = t;
  t = term_p_30;
  t_38 = t;
  t = (ATerm) ATinsert(ATempty, j_38);
  u_38 = t;
  t = SSL_table_put(r_38, t_38, u_38);
  t = l_38;
  t = if_verbose4_1_0(s_6, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(u_6, t);
  k_38 = t;
  t = term_o_30;
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_30, k_38);
  t = y_7(v_6, q_38, k_38, t);
  t = if_verbose6_1_0(x_6, t);
  t = term_o_30;
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, j_38);
  o_38 = t;
  t = (ATerm) ATempty;
  p_38 = t;
  t = SSL_table_put(m_38, o_38, p_38);
  t = (ATerm) ATmakeAppl(sym__3, term_o_30, (ATerm)ATmakeAppl(sym_Imported_1, j_38), (ATerm) ATempty);
  t = if_verbose4_1_0(b_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,m_40 = NULL;
  i_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_40;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_40 = ATgetFirst((ATermList) t);
          m_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_18 = NULL,k_18 = NULL,m_18 = NULL,g_5 = NULL;
            t = SSLgetAnnotations(i_40);
            f_18 = t;
            t = j_40;
            t = k_95(t);
            k_18 = t;
            t = m_40;
            t = filter_1_0(k_95, t);
            m_18 = t;
            t = (ATerm) ATinsert(CheckATermList(m_18), k_18);
            g_5 = t;
            t = SSLsetAnnotations(g_5, f_18);
            LocalPopChoice(r_30);
          }
        else
          {
            t = q_30;
            t = m_40;
            t = filter_1_0(k_95, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  static ATerm s_40 (ATerm t)
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_85(t);
        t = s_40(t);
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = k_85(t);
      }
    return(t);
  }
  t = s_40(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm v_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_40 = NULL,u_40 = NULL;
      t = term_t_13;
      t_40 = t;
      t = term_a_31;
      u_40 = t;
      t = term_b_31;
      t = j_8(t_40, u_40, t);
      LocalPopChoice(z_30);
    }
  else
    {
      t = v_30;
      {
        ATerm c_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_40 = NULL;
            t = term_f_31;
            v_40 = t;
            t = SSL_getenv(v_40);
            LocalPopChoice(e_31);
          }
        else
          {
            t = c_31;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = debug_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_g_31;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  t = term_o_30;
  g_41 = t;
  t = term_h_31;
  h_41 = t;
  t = term_j_31;
  t = j_8(g_41, h_41, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_31 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_31;
      }
  }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = debug_1_0(h_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm a_41 = NULL;
  t = if_verbose5_1_0(c_7, t);
  a_41 = t;
  {
    ATerm m_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_41 = NULL,c_41 = NULL;
        t = term_o_30;
        b_41 = t;
        t = term_p_30;
        c_41 = t;
        t = term_q_31;
        t = j_8(b_41, c_41, t);
        LocalPopChoice(p_31);
      }
    else
      {
        t = m_31;
        {
          ATerm f_41 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          f_41 = t;
          t = repeat_2_0(f_7, _id, t);
          t = f_41;
        }
      }
  }
  t = a_41;
  t = if_verbose5_1_0(g_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = debug_1_0(q_7, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm o_42 (ATerm s_41, ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  t = term_o_30;
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, s_41);
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_30, (ATerm) ATmakeAppl(sym_Tool_1, s_41));
  t = j_8(x_41, y_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_31 = ATgetFirst((ATermList) t);
      if(match_cons(w_31, sym__2))
        {
          ATerm z_31 = ATgetArgument(w_31, 0);
          w_41 = ATgetArgument(w_31, 1);
        }
      else
        _fail(t);
      {
        ATerm y_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_41;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = debug_1_0(o_8, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_o_30;
  t = table_getlist_0_0(t);
  t = debug_1_0(s_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
      t = if_verbose5_1_0(j_7, t);
      t = xtc_load_0_0(t);
      d_42 = t;
      if(match_cons(t, sym__2))
        {
          b_42 = ATgetArgument(t, 0);
          c_42 = ATgetArgument(t, 1);
          {
            ATerm d_32 = t;
            int e_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
                t = term_o_30;
                h_42 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_42);
                i_42 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_30, (ATerm) ATmakeAppl(sym_Tool_1, b_42));
                t = j_8(h_42, i_42, t);
                {
                  static ATerm h_8 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_42 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((g_42 != NULL) && (g_42 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_42 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(h_8, t);
                }
                t = not_null(g_42);
                LocalPopChoice(e_32);
              }
            else
              {
                t = d_32;
                t = o_42(d_42, t);
              }
          }
        }
      else
        {
          t = o_42(d_42, t);
        }
      t = if_verbose5_1_0(l_8, t);
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      {
        ATerm n_42 = NULL,v_18 = NULL,w_18 = NULL;
        n_42 = t;
        t = term_r_20;
        v_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_32), n_42), term_f_32);
        w_18 = t;
        t = SSL_printnl(v_18, w_18);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_32), n_42), term_f_32);
        t = if_verbose5_1_0(q_8, t);
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
static ATerm e_8 (ATerm r_22, ATerm s_22, ATerm t)
{
  t = SSL_copy(r_22, s_22);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL;
  w_43 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_19 = NULL;
        t = w_43;
        t = o_0(t);
        b_19 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = b_19;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = b_19;
          }
        t = (ATerm) ATmakeAppl(sym__2, x_43, b_19);
        t = e_8(x_43, b_19, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_43);
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        {
          ATerm j_32 = t;
          int k_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_19 = NULL;
              t = w_43;
              t = o_0(t);
              j_19 = t;
              {
                ATerm l_32 = t;
                if((PushChoice() == 0))
                  {
                    ATerm k_19 = NULL;
                    k_19 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = k_19;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = k_19;
                          }
                        else
                          {
                            t = k_19;
                            if((x_43 != t))
                              {
                                _fail(t);
                              }
                            t = k_19;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_32;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, x_43, j_19);
              t = e_8(x_43, j_19, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_43);
              LocalPopChoice(k_32);
            }
          else
            {
              t = j_32;
              t = w_43;
              t = o_0(t);
              if((x_43 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_43);
            }
        }
      }
  }
  return(t);
}
static ATerm f_8 (ATerm z_44, ATerm a_45, ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  c_44 = t;
  {
    ATerm m_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_44, a_45);
        t = j_8(z_44, a_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_32 = ATgetFirst((ATermList) t);
            b_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_32);
        t = SSL_table_put(z_44, a_45, b_44);
        t = (ATerm) ATmakeAppl(sym__3, z_44, a_45, b_44);
      }
    else
      {
        t = m_32;
        t = SSL_table_remove(z_44, a_45);
        t = (ATerm) ATmakeAppl(sym__2, z_44, a_45);
      }
  }
  t = c_44;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
  g_44 = t;
  t = l_97(t);
  f_44 = t;
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_44 = NULL;
        t = term_f_21;
        i_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_44, term_f_21);
        t = j_8(f_44, i_44, t);
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_44 = ATgetFirst((ATermList) t);
      d_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_21;
  h_44 = t;
  t = SSL_table_put(f_44, h_44, d_44);
  t = e_44;
  {
    static ATerm t_8 (ATerm t)
    {
      ATerm j_44 = NULL;
      j_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_44, j_44);
      t = f_8(f_44, j_44, t);
      return(t);
    }
    t = map_1_0(t_8, t);
  }
  t = g_44;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_98(t);
      t = m_98(t);
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      t = m_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  ATerm l_44 = NULL,n_44 = NULL,o_44 = NULL,w_44 = NULL,x_44 = NULL;
  n_44 = t;
  t = k_97(t);
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_44, term_f_21);
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_32 = ATgetArgument(t, 0);
            ATerm z_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_21;
        e_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_44, term_f_21);
        t = j_8(l_44, e_45, t);
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        t = (ATerm) ATempty;
      }
  }
  o_44 = t;
  t = term_f_21;
  w_44 = t;
  t = (ATerm) ATinsert(CheckATermList(o_44), (ATerm) ATempty);
  x_44 = t;
  t = SSL_table_put(l_44, w_44, x_44);
  t = n_44;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_l_21;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm n_45 = NULL;
  n_45 = t;
  {
    ATerm d_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_45);
        LocalPopChoice(g_33);
      }
    else
      {
        t = d_33;
        t = n_45;
      }
  }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm h_45 = NULL;
  static ATerm x_8 (ATerm t)
  {
    ATerm i_45 = NULL;
    i_45 = t;
    {
      ATerm h_33 = t;
      int i_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_45 = NULL,k_45 = NULL;
          t = term_l_21;
          j_45 = t;
          t = term_f_21;
          k_45 = t;
          t = term_j_33;
          t = j_8(j_45, k_45, t);
          LocalPopChoice(i_33);
        }
      else
        {
          t = h_33;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_45 != NULL) && (h_45 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_45 = ATgetFirst((ATermList) t);
        {
          ATerm k_33 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_45;
    t = map_1_0(y_8, t);
    t = i_45;
    t = end_scope_1_0(z_8, t);
    return(t);
  }
  t = begin_scope_1_0(w_8, t);
  t = restore_always_2_0(l_101, x_8, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_45 = NULL,z_45 = NULL;
      t = term_t_13;
      y_45 = t;
      t = term_y_21;
      z_45 = t;
      t = term_o_33;
      t = j_8(y_45, z_45, t);
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      t = term_w_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  static ATerm b_9 (ATerm t)
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_45 = NULL,w_45 = NULL,x_45 = NULL;
        t = term_t_13;
        w_45 = t;
        t = term_z_21;
        x_45 = t;
        t = term_s_33;
        t = j_8(w_45, x_45, t);
        q_45 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_45);
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        t = term_v_22;
      }
    t = m_101(t);
    t = copy_to_1_0(e_9, t);
    return(t);
  }
  t = xtc_temp_files_1_0(b_9, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
  e_46 = t;
  t = term_q_21;
  t = whoami_0_0(t);
  f_46 = t;
  t = term_r_20;
  h_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_33), f_46), term_t_33);
  i_46 = t;
  t = SSL_printnl(h_46, i_46);
  t = term_v_13;
  g_46 = t;
  t = SSL_exit(g_46);
  t = e_46;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  if(match_string(t, "-k"))
    {
      t = k_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_46;
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
  n_46 = t;
  t = SSL_string_to_int(n_46);
  o_46 = t;
  t = term_b_23;
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_23, o_46);
  t = m_8(p_46, o_46, t);
  t = n_46;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_9, i_9, k_9, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm r_46 = NULL;
  r_46 = t;
  if(match_string(t, "-S"))
    {
      t = r_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_46;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL;
  t = term_m_13;
  s_46 = t;
  t = term_x_33;
  t_46 = t;
  t = term_y_33;
  t = m_8(s_46, t_46, t);
  t = term_z_33;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  t = SSL_string_to_int(w_46);
  x_46 = t;
  t = term_m_13;
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_13, x_46);
  t = m_8(y_46, x_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_46);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  t = term_m_23;
  b_47 = t;
  t = term_q_21;
  c_47 = t;
  t = term_f_34;
  t = m_8(b_47, c_47, t);
  t = term_g_34;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_9, n_9, o_9, t);
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      {
        ATerm k_34 = t;
        int l_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_9, r_9, u_9, t);
            LocalPopChoice(l_34);
          }
        else
          {
            t = k_34;
            t = Option_3_0(v_9, w_9, a_10, t);
          }
      }
    }
  return(t);
}
static ATerm m_8 (ATerm u_46, ATerm v_46, ATerm t)
{
  ATerm e_47 = NULL;
  t = term_t_13;
  e_47 = t;
  t = SSL_table_put(e_47, u_46, v_46);
  t = (ATerm) ATmakeAppl(sym__3, term_t_13, u_46, v_46);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
      t = term_q_21;
      t = e_0(t);
      j_47 = t;
      t = term_m_34;
      k_47 = t;
      t = term_n_34;
      l_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_34, term_n_34, j_47);
      t = k_8(k_47, l_47, j_47, t);
      _fail(t);
    }
  else
    {
      ATerm o_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_47 = ATgetFirst((ATermList) t);
          i_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_47;
      t = c_0(t);
      t = term_q_21;
      t = d_0(t);
      o_47 = t;
      t = (ATerm) ATinsert(CheckATermList(i_47), o_47);
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm q_47 = NULL;
  q_47 = t;
  if(match_string(t, "-o"))
    {
      t = q_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_47;
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm r_47 = NULL,t_47 = NULL;
  r_47 = t;
  t = term_y_21;
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_21, r_47);
  t = m_8(t_47, r_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_47);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_10, c_10, f_10, t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm v_47 = NULL;
  v_47 = t;
  if(match_string(t, "-i"))
    {
      t = v_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_47;
    }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm w_47 = NULL,z_47 = NULL;
  w_47 = t;
  t = term_z_21;
  z_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_21, w_47);
  t = m_8(z_47, w_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_47);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_10, h_10, i_10, t);
  return(t);
}
static ATerm k_8 (ATerm u_44, ATerm v_44, ATerm t_44, ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_44, v_44);
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_34 = ATgetArgument(t, 0);
            ATerm u_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_44, v_44);
        t = j_8(u_44, v_44, t);
        LocalPopChoice(r_34);
      }
    else
      {
        t = q_34;
        t = (ATerm) ATempty;
      }
  }
  c_48 = t;
  t = (ATerm) ATinsert(CheckATermList(c_48), t_44);
  d_48 = t;
  t = SSL_table_put(u_44, v_44, d_48);
  t = b_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
      t = term_q_21;
      t = n_0(t);
      s_48 = t;
      t = term_m_34;
      t_48 = t;
      t = term_n_34;
      u_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_34, term_n_34, s_48);
      t = k_8(t_48, u_48, s_48, t);
      _fail(t);
    }
  else
    {
      ATerm l_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_48 = ATgetFirst((ATermList) t);
          p_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_48 = ATgetFirst((ATermList) t);
          r_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_48;
      t = k_0(t);
      t = q_48;
      t = l_0(t);
      l_49 = t;
      t = (ATerm) ATinsert(CheckATermList(r_48), l_49);
    }
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm n_49 = NULL;
  n_49 = t;
  if(match_string(t, "-I"))
    {
      t = n_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = n_49;
    }
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  o_49 = t;
  t = term_k_24;
  p_49 = t;
  t = (ATerm) ATinsert(ATempty, o_49);
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_24, (ATerm) ATinsert(ATempty, o_49));
  t = t_7(p_49, q_49, t);
  t = o_49;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_v_34;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm r_49 = NULL,u_49 = NULL;
  r_49 = t;
  t = term_y_25;
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_25, r_49);
  t = m_8(u_49, r_49, t);
  t = r_49;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_w_34;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm v_49 = NULL,x_49 = NULL,y_49 = NULL;
  v_49 = t;
  t = term_m_13;
  x_49 = t;
  t = term_x_33;
  y_49 = t;
  t = term_y_33;
  t = m_8(x_49, y_49, t);
  t = v_49;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_z_34;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm z_49 = NULL,b_50 = NULL,c_50 = NULL;
  z_49 = t;
  t = term_z_26;
  b_50 = t;
  t = term_v_13;
  c_50 = t;
  t = term_a_35;
  t = m_8(b_50, c_50, t);
  t = z_49;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm b_35 = t;
  int c_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(k_10, l_10, m_10, t);
      LocalPopChoice(c_35);
    }
  else
    {
      t = b_35;
      {
        ATerm d_35 = t;
        int e_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_10, p_10, q_10, t);
            LocalPopChoice(e_35);
          }
        else
          {
            t = d_35;
            {
              ATerm h_35 = t;
              int i_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(r_10, s_10, t_10, t);
                  LocalPopChoice(i_35);
                }
              else
                {
                  t = h_35;
                  t = Option_3_0(u_10, v_10, x_10, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_21;
  t = whoami_0_0(t);
  d_50 = t;
  t = term_r_20;
  f_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_35), d_50);
  g_50 = t;
  t = SSL_printnl(f_50, g_50);
  t = term_v_13;
  e_50 = t;
  t = SSL_exit(e_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  t = term_t_13;
  h_50 = t;
  t = term_k_35;
  i_50 = t;
  t = term_o_35;
  t = j_8(h_50, i_50, t);
  return(t);
}
static ATerm g_8 (ATerm t_41, ATerm u_41, ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_41, u_41);
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      t = SSL_addr(t_41, u_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_50;
      t = g_94(t);
    }
  else
    {
      ATerm u_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_50 = ATgetFirst((ATermList) t);
          r_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_50;
      t = foldr_2_0(g_94, h_94, t);
      u_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_50, u_50);
      t = h_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_x_33;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm c_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(c_20, f_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_50 = NULL,v_19 = NULL,w_19 = NULL;
  t = times_0_0(t);
  w_19 = t;
  t = SSL_explode_term(w_19);
  if(match_cons(t, sym__2))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_19;
  t = foldr_2_0(a_11, b_11, t);
  x_50 = t;
  t = SSL_TicksToSeconds(x_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  j_51 = t;
  if(match_cons(t, sym__2))
    {
      k_51 = ATgetArgument(t, 0);
      l_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_51;
        if((k_51 != t))
          {
            _fail(t);
          }
        t = j_51;
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        t = (ATerm) ATmakeAppl(sym__2, k_51, l_51);
        {
          ATerm u_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_51, l_51);
              LocalPopChoice(w_35);
            }
          else
            {
              t = u_35;
              t = SSL_gtr(k_51, l_51);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_51, l_51);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm p_51 = NULL;
  p_51 = t;
  {
    ATerm x_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
        t = term_t_13;
        s_51 = t;
        t = term_m_13;
        t_51 = t;
        t = term_u_13;
        t = j_8(s_51, t_51, t);
        r_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_51, term_v_13);
        t = geq_0_0(t);
        t = p_51;
        t = x_98(t);
        LocalPopChoice(z_35);
      }
    else
      {
        t = x_35;
        t = p_51;
      }
  }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,y_51 = NULL,z_51 = NULL;
  t = run_time_0_0(t);
  v_51 = t;
  t = term_q_21;
  t = whoami_0_0(t);
  w_51 = t;
  t = term_r_20;
  y_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_36), v_51), term_c_14), w_51);
  z_51 = t;
  t = SSL_printnl(y_51, z_51);
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_36), v_51), term_c_14), w_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_33;
  a_52 = t;
  t = SSL_exit(a_52);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL;
  l_52 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_52;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_52 = ATgetArgument(t, 0);
          {
            ATerm v_20 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(l_52);
            v_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_52);
            j_5 = t;
            t = SSLsetAnnotations(j_5, v_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_52;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_103 (ATerm), ATerm t)
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_52 = NULL,e_52 = NULL;
      t = term_t_13;
      d_52 = t;
      t = term_f_36;
      e_52 = t;
      t = term_i_36;
      t = j_8(d_52, e_52, t);
      LocalPopChoice(c_36);
    }
  else
    {
      t = b_36;
      t = fetch_1_0(d_11, t);
    }
  t = b_103(t);
  return(t);
}
ATerm map_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  static ATerm b_53 (ATerm t)
  {
    ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
    y_52 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_52;
      }
    else
      {
        ATerm i_21 = NULL,u_21 = NULL,v_21 = NULL,i_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_52 = ATgetFirst((ATermList) t);
            a_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_52);
        i_21 = t;
        t = z_52;
        t = e_87(t);
        u_21 = t;
        t = a_53;
        t = b_53(t);
        v_21 = t;
        t = (ATerm) ATinsert(CheckATermList(v_21), u_21);
        i_6 = t;
        t = SSLsetAnnotations(i_6, i_21);
      }
    return(t);
  }
  t = b_53(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_53 = ATgetFirst((ATermList) t);
      f_53 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_53 = NULL,k_53 = NULL;
        static ATerm g_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_53)), not_null(k_53));
          return(t);
        }
        t = f_53;
        t = i_0(t);
        if(((j_53 != NULL) && (j_53 != t)))
          _fail(t);
        else
          j_53 = t;
        t = e_53;
        t = g_0(t);
        if(((k_53 != NULL) && (k_53 != t)))
          _fail(t);
        else
          k_53 = t;
        t = f_53;
        t = reverse_acc_2_0(g_0, g_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_21;
      t = i_0(t);
    }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,k_6 = NULL;
  s_53 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_53);
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_53);
  k_6 = t;
  t = SSLsetAnnotations(k_6, q_53);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm u_53 = NULL;
  u_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_53), term_j_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL;
  ATerm k_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_53 = NULL,p_53 = NULL;
      t = term_t_13;
      o_53 = t;
      t = term_k_35;
      p_53 = t;
      t = term_o_35;
      t = j_8(o_53, p_53, t);
      LocalPopChoice(n_36);
    }
  else
    {
      t = k_36;
      t = fetch_1_0(l_11, t);
    }
  t = term_o_36;
  t = echo_0_0(t);
  t = term_m_34;
  m_53 = t;
  t = term_n_34;
  n_53 = t;
  t = term_q_36;
  t = j_8(m_53, n_53, t);
  t = reverse_acc_2_0(_id, q_11, t);
  t = map_1_0(s_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  static ATerm r_54 (ATerm t)
  {
    ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
    o_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_54 = ATgetFirst((ATermList) t);
        q_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_36 = t;
      int w_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_22 = NULL,u_22 = NULL,p_6 = NULL;
          t = SSLgetAnnotations(o_54);
          m_22 = t;
          t = p_54;
          t = o_87(t);
          u_22 = t;
          t = (ATerm) ATinsert(CheckATermList(q_54), u_22);
          p_6 = t;
          t = SSLsetAnnotations(p_6, m_22);
          LocalPopChoice(w_36);
        }
      else
        {
          t = v_36;
          {
            ATerm n_23 = NULL,u_23 = NULL,q_6 = NULL;
            t = SSLgetAnnotations(o_54);
            n_23 = t;
            t = q_54;
            t = r_54(t);
            u_23 = t;
            t = (ATerm) ATinsert(CheckATermList(u_23), p_54);
            q_6 = t;
            t = SSLsetAnnotations(q_6, n_23);
          }
        }
    }
    return(t);
  }
  t = r_54(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
  v_54 = t;
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_37 = ATgetFirst((ATermList) t);
                ATerm c_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_54;
          }
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        t = (ATerm) ATinsert(ATempty, v_54);
      }
  }
  w_54 = t;
  t = term_w_23;
  x_54 = t;
  t = SSL_printnl(x_54, w_54);
  t = v_54;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  t = term_t_13;
  b_55 = t;
  t = term_k_35;
  c_55 = t;
  t = term_o_35;
  t = j_8(b_55, c_55, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_8 (ATerm l_46, ATerm m_46, ATerm t)
{
  t = SSL_table_get(l_46, m_46);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL;
  t = term_e_37;
  d_55 = t;
  t = term_q_21;
  e_55 = t;
  t = term_l_37;
  t = m_8(d_55, e_55, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_p_37;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
  t = term_e_37;
  h_55 = t;
  t = term_q_21;
  i_55 = t;
  t = term_l_37;
  t = m_8(h_55, i_55, t);
  t = term_x_26;
  f_55 = t;
  t = term_q_21;
  g_55 = t;
  t = term_q_37;
  t = m_8(f_55, g_55, t);
  t = term_r_37;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_11, x_11, a_12, t);
      LocalPopChoice(v_37);
    }
  else
    {
      t = t_37;
      t = Option_3_0(d_12, k_12, m_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,w_6 = NULL;
  o_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_55 = ATgetFirst((ATermList) t);
      l_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_55);
  j_55 = t;
  t = k_55;
  t = n_66(t);
  m_55 = t;
  t = l_55;
  t = o_66(t);
  n_55 = t;
  t = (ATerm) ATinsert(CheckATermList(n_55), m_55);
  w_6 = t;
  t = SSLsetAnnotations(w_6, j_55);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,y_55 = NULL,z_55 = NULL,i_7 = NULL;
  t_55 = t;
  {
    ATerm w_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_38;
        t = z_104(t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = w_37;
      }
  }
  t = t_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_55 = ATgetFirst((ATermList) t);
      w_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_55);
  u_55 = t;
  t = term_k_35;
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_35, v_55);
  t = m_8(z_55, v_55, t);
  t = w_55;
  {
    static ATerm j_56 (ATerm t)
    {
      ATerm d_38 = t;
      int e_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_38 = t;
          int g_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_56 = NULL;
              c_56 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_56;
              LocalPopChoice(g_38);
            }
          else
            {
              t = f_38;
              t = z_104(t);
              t = Cons_2_0(_id, j_56, t);
            }
          LocalPopChoice(e_38);
        }
      else
        {
          t = d_38;
          {
            ATerm f_56 = NULL,g_56 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_56 = ATgetFirst((ATermList) t);
                g_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_56), (ATerm) ATmakeAppl(sym_Undefined_1, f_56));
          }
        }
      return(t);
    }
    t = j_56(t);
  }
  y_55 = t;
  t = (ATerm) ATinsert(CheckATermList(y_55), (ATerm) ATmakeAppl(sym_Program_1, v_55));
  i_7 = t;
  t = SSLsetAnnotations(i_7, u_55);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm v_56 = NULL;
  v_56 = t;
  if(match_string(t, "--help"))
    {
      t = v_56;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_56;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_56;
        }
    }
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL;
  t = term_f_36;
  w_56 = t;
  t = term_q_21;
  x_56 = t;
  t = term_h_38;
  t = m_8(w_56, x_56, t);
  t = term_i_38;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_n_38;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL;
  q_56 = t;
  t = term_m_34;
  s_56 = t;
  t = term_n_34;
  t_56 = t;
  t = (ATerm) ATempty;
  u_56 = t;
  t = SSL_table_put(s_56, t_56, u_56);
  t = q_56;
  {
    static ATerm n_12 (ATerm t)
    {
      ATerm s_38 = t;
      int v_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_104(t);
          LocalPopChoice(v_38);
        }
      else
        {
          t = s_38;
          {
            ATerm w_38 = t;
            int e_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_12, p_12, s_12, t);
                LocalPopChoice(e_39);
              }
            else
              {
                t = w_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_12, t);
  }
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_57 = NULL;
        i_57 = t;
        {
          ATerm o_39 = t;
          int p_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_24 = NULL;
              t = i_57;
              {
                ATerm q_39 = t;
                int r_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_24 = NULL,m_24 = NULL;
                    t = term_t_13;
                    i_24 = t;
                    t = term_f_36;
                    m_24 = t;
                    t = term_i_36;
                    t = j_8(i_24, m_24, t);
                    LocalPopChoice(r_39);
                  }
                else
                  {
                    t = q_39;
                    t = fetch_1_0(y_12, t);
                  }
              }
              t = i_57;
              t = default_system_usage_0_0(t);
              t = term_x_33;
              h_24 = t;
              t = SSL_exit(h_24);
              LocalPopChoice(p_39);
            }
          else
            {
              t = o_39;
              {
                ATerm r_24 = NULL,u_24 = NULL,v_24 = NULL;
                t = term_t_13;
                u_24 = t;
                t = term_e_37;
                v_24 = t;
                t = term_s_39;
                t = j_8(u_24, v_24, t);
                t = i_57;
                t = default_system_about_0_0(t);
                t = term_x_33;
                r_24 = t;
                t = SSL_exit(r_24);
              }
            }
        }
        LocalPopChoice(n_39);
      }
    else
      {
        t = m_39;
        {
          ATerm t_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
              static ATerm z_12 (ATerm t)
              {
                ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,j_10 = NULL;
                o_57 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_57 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_57);
                m_57 = t;
                t = n_57;
                if(((o_56 != NULL) && (o_56 != t)))
                  _fail(t);
                else
                  o_56 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_57);
                j_10 = t;
                t = SSLsetAnnotations(j_10, m_57);
                return(t);
              }
              t = fetch_1_0(z_12, t);
              t = term_r_20;
              k_57 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_56)), term_v_39);
              l_57 = t;
              t = SSL_printnl(k_57, l_57);
              t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_56)), term_v_39));
              t = default_system_usage_0_0(t);
              t = term_v_13;
              j_57 = t;
              t = SSL_exit(j_57);
              LocalPopChoice(u_39);
            }
          else
            {
              t = t_39;
            }
        }
      }
  }
  p_56 = t;
  t = term_m_34;
  r_56 = t;
  t = SSL_table_destroy(r_56);
  t = p_56;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL;
  t = parse_options_1_0(d_103, t);
  t_57 = t;
  t = term_w_39;
  w_57 = t;
  t = SSL_table_create(w_57);
  t = term_w_39;
  u_57 = t;
  t = term_x_39;
  v_57 = t;
  t = SSL_table_put(u_57, v_57, t_57);
  t = t_57;
  t = f_103(t);
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_103, t);
        LocalPopChoice(z_39);
      }
    else
      {
        t = y_39;
        {
          ATerm a_40 = t;
          int b_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_40);
            }
          else
            {
              t = a_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm c_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      LocalPopChoice(d_40);
    }
  else
    {
      t = c_40;
      {
        ATerm e_40 = t;
        int f_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(f_40);
          }
        else
          {
            t = e_40;
            {
              ATerm g_40 = t;
              int h_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(h_40);
                }
              else
                {
                  t = g_40;
                  {
                    ATerm k_40 = t;
                    int l_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(c_13, d_13, g_13, t);
                        LocalPopChoice(l_40);
                      }
                    else
                      {
                        t = k_40;
                        {
                          ATerm n_40 = t;
                          int q_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(q_40);
                            }
                          else
                            {
                              t = n_40;
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
static ATerm b_13 (ATerm t)
{
  t = xtc_io_1_0(h_13, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL;
  t = term_g_27;
  y_57 = t;
  t = term_q_21;
  z_57 = t;
  t = term_r_40;
  t = m_8(y_57, z_57, t);
  t = term_w_40;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_x_40;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL;
  b_58 = t;
  t = term_y_40;
  t = xtc_find_path_0_0(t);
  c_58 = t;
  t = term_k_24;
  d_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_58), term_z_40);
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, c_58), term_z_40));
  t = t_7(d_58, e_58, t);
  t = b_58;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_13, default_usage_0_0, _id, b_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
