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
ATerm term_j_41;
ATerm term_i_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_g_39;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_y_37;
ATerm term_m_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_h_36;
ATerm term_x_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_a_34;
ATerm term_v_33;
ATerm term_r_32;
ATerm term_p_32;
ATerm term_h_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_l_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_y_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_t_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_y_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_b_25;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_y_23;
ATerm term_o_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_b_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
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
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_q_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_q_12);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_g_13, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_p_14, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_x_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_y_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_j_16, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_w_16, term_x_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_k_17, term_m_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_w_17, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_i_18, term_j_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_o_18, term_p_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_18, term_s_18, term_t_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_x_18, term_y_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_19, term_d_19, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_h_19, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_r_19, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_w_19, term_x_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_20, term_c_20, term_e_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" ** Warning: Mismatch between basename of input file (", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(") and module name (", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol(") specified", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_d_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_o_24);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_n_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_k_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_c_31);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_l_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_v_30);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_e_21);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_n_21);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_o_21);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_h_34);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_34);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_m_21);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_g_13);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_t_35);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_l_36);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_x_34);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym__2, term_f_37, term_m_21);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_m_21);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_l_36, term_m_21);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_f_37);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(sym__2, term_p_27, term_m_21);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm l_7 (ATerm z_41, ATerm a_42, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm m_7 (ATerm r_25, ATerm s_25, ATerm t);
static ATerm n_7 (ATerm o_82 (ATerm), ATerm k_196, ATerm b_26, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t);
static ATerm o_7 (ATerm j_22, ATerm k_22, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm d_81 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm z_101 (ATerm), ATerm t);
static ATerm q_7 (ATerm o_97 (ATerm), ATerm h_43, ATerm f_43, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm d_88 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm check_module_name_0_1 (ATerm r_0 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm guarantee_extension_1_0 (ATerm p_100 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm a_100 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm z_98 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm s_7 (ATerm q_22, ATerm p_22, ATerm t);
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
static ATerm t_7 (ATerm d_47, ATerm h_475, ATerm t);
ATerm find_in_includes_1_0 (ATerm y_79 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm y_98 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm q_87 (ATerm), ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm basename_1_0 (ATerm n_100 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm v_87 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_29 (ATerm t_28, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_7 (ATerm a_47, ATerm z_46, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm debug_1_0 (ATerm m_82 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_99 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_99 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_99 (ATerm), ATerm t);
static ATerm w_7 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm f_33, ATerm e_33, ATerm t);
static ATerm x_7 (ATerm p_91 (ATerm), ATerm b_33, ATerm a_33, ATerm t);
static ATerm l_6 (ATerm t);
static ATerm y_7 (ATerm r_45, ATerm s_45, ATerm t_45, ATerm t);
static ATerm z_7 (ATerm e_99 (ATerm), ATerm b_46, ATerm a_46, ATerm t);
static ATerm e_8 (ATerm x_47, ATerm y_47, ATerm t);
static ATerm v_36 (ATerm k_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_8 (ATerm x_25, ATerm t);
static ATerm b_8 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm c_8 (ATerm g_48, ATerm h_48, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_38 (ATerm k_37, ATerm t);
static ATerm w_38 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm x_38 (ATerm z_37, ATerm a_38, ATerm b_38, ATerm t);
static ATerm d_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_95 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm i_44 (ATerm k_43, ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm f_8 (ATerm r_22, ATerm s_22, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm g_8 (ATerm z_44, ATerm a_45, ATerm t);
ATerm end_scope_1_0 (ATerm l_97 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_97 (ATerm), ATerm t);
static ATerm w_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_101 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
ATerm xtc_io_1_0 (ATerm m_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_8 (ATerm u_46, ATerm v_46, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm l_8 (ATerm u_44, ATerm v_44, ATerm t_44, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_8 (ATerm t_41, ATerm u_41, ATerm t);
ATerm foldr_2_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_98 (ATerm), ATerm t);
static ATerm k_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
ATerm need_help_1_0 (ATerm b_103 (ATerm), ATerm t);
ATerm map_1_0 (ATerm e_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_8 (ATerm l_46, ATerm m_46, ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_104 (ATerm), ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm parse_options_1_0 (ATerm y_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm parse_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm l_7 (ATerm z_41, ATerm a_42, ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_41, a_42);
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      t = SSL_subtr(z_41, a_42);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,q_0 = NULL,s_0 = NULL;
  t = term_q_12;
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL,w_0 = NULL;
        t = term_y_12;
        u_0 = t;
        t = term_q_12;
        w_0 = t;
        t = term_z_12;
        t = k_8(u_0, w_0, t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = term_g_13;
      }
  }
  b_0 = t;
  t = term_g_13;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_g_13);
  t = l_7(b_0, s_0, t);
  q_0 = t;
  t = SSL_int_to_string(q_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_q_12);
  return(t);
}
static ATerm m_7 (ATerm r_25, ATerm s_25, ATerm t)
{
  ATerm a_1 = NULL;
  t = SSL_write_term_to_stream_baf(r_25, s_25);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_1);
  return(t);
}
static ATerm n_7 (ATerm o_82 (ATerm), ATerm k_196, ATerm b_26, ATerm t)
{
  ATerm b_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_196, term_h_13);
  t = d_8(t);
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_1, b_26);
  t = o_82(t);
  t = fclose_0_0(t);
  t = b_26;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if(match_cons(q_13, sym_Stream_1))
        {
          h_1 = ATgetArgument(q_13, 0);
        }
      else
        _fail(t);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(h_1, i_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL;
  g_1 = t;
  t = xtc_new_file_0_0(t);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, g_1);
  t = n_7(f_0, f_1, g_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_1);
  t = xtc_transform_file_2_0(y_100, z_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm o_7 (ATerm j_22, ATerm k_22, ATerm t)
{
  t = SSL_execvp(j_22, k_22);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm j_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
  j_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      m_2 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL,x_0 = NULL;
        t = SSL_int_to_string(m_2);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_13), m_0), term_s_13);
        x_0 = t;
        t = SSL_concat_strings(x_0);
      }
    }
  else
    {
      ATerm p_1 = NULL,u_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          m_2 = ATgetArgument(t, 0);
          n_2 = ATgetArgument(t, 1);
          o_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(n_2);
      p_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_2), term_f_14), p_1), term_b_14), m_2);
      u_1 = t;
      t = SSL_concat_strings(u_1);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_2 = NULL;
  s_2 = t;
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm i_14 = ATgetArgument(t, 0);
              if((s_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm j_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_20), term_a_20), term_t_19), term_n_19), term_j_19), term_f_19), term_z_18), term_v_18), term_q_18), term_k_18), term_g_18), term_c_18), term_y_17), term_s_17), term_n_17), term_g_17), term_y_16), term_p_16), term_l_16), term_e_16), term_z_15), term_v_15), term_r_15), term_n_15), term_j_15), term_c_15), term_t_14), term_n_14);
        t = fetch_elem_1_0(h_0, t);
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, s_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm x_2 = NULL,f_3 = NULL;
  x_2 = t;
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_20 = ATgetArgument(t, 0);
            f_3 = ATgetArgument(t, 1);
            {
              ATerm k_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_20);
        {
          ATerm n_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL,l_2 = NULL,p_2 = NULL;
              t = f_3;
              {
                ATerm p_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              i_2 = t;
              t = term_q_20;
              l_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, i_2), term_r_20);
              p_2 = t;
              t = SSL_printnl(l_2, p_2);
              t = (ATerm) ATmakeAppl(sym__2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, i_2), term_r_20));
              LocalPopChoice(o_20);
            }
          else
            {
              t = n_20;
              t = x_2;
            }
        }
      }
    else
      {
        t = g_20;
        t = x_2;
      }
  }
  t = x_2;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  v_3 = t;
  t = fork_0_0(t);
  u_3 = t;
  {
    ATerm s_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = v_3;
        t = d_81(t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = s_20;
        t = SSL_waitpid(u_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_20 = ATgetArgument(t, 0);
            if(((ATgetType(w_20) != AT_INT) || (ATgetInt((ATermInt) w_20) != 0)))
              _fail(t);
            {
              ATerm z_20 = ATgetArgument(t, 1);
            }
            {
              ATerm a_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_101 (ATerm), ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  y_3 = t;
  t = z_101(t);
  t = xtc_find_0_0(t);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_3, y_3);
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm o_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, x_3, y_3);
      t = o_7(x_3, y_3, t);
      t = term_b_21;
      o_4 = t;
      t = SSL_exit(o_4);
      return(t);
    }
    t = fork_and_wait_1_0(j_0, t);
  }
  t = y_3;
  return(t);
}
static ATerm q_7 (ATerm o_97 (ATerm), ATerm h_43, ATerm f_43, ATerm t)
{
  ATerm q_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL;
  w_4 = t;
  t = o_97(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_4, h_43, f_43);
  t = l_8(q_4, h_43, f_43, t);
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 = NULL;
        t = term_e_21;
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_4, term_e_21);
        t = k_8(q_4, b_5, t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_4 = ATgetFirst((ATermList) t);
      v_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_e_21;
  x_4 = t;
  t = (ATerm) ATinsert(CheckATermList(v_4), (ATerm) ATinsert(CheckATermList(u_4), h_43));
  z_4 = t;
  t = SSL_table_put(q_4, x_4, z_4);
  t = w_4;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm f_5 = NULL;
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 = NULL,w_2 = NULL;
      l_5 = t;
      t = term_h_21;
      w_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_5, term_h_21);
      t = b_8(l_5, w_2, t);
      f_5 = t;
      t = SSL_mkstemp(f_5);
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm m_5 = NULL;
        t = term_i_21;
        m_5 = t;
        t = SSL_perror(m_5);
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
static ATerm y_0 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,u_5 = NULL;
  t = P__tmpdir_0_0(t);
  s_5 = t;
  t = term_k_21;
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_5, term_k_21);
  t = b_8(s_5, u_5, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_21;
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_5, term_m_21);
  t = q_7(y_0, q_5, r_5, t);
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
      t = (ATerm) ATmakeAppl(sym__2, a_6, (ATerm) ATinsert(ATinsert(ATempty, z_5), term_n_21));
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
      t = (ATerm) ATmakeAppl(sym__2, d_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_6), term_n_21), y_5), term_o_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_6);
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  static ATerm z_6 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL,v_6 = NULL,y_6 = NULL,o_3 = NULL,r_3 = NULL,m_1 = NULL;
        u_6 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_6 = ATgetFirst((ATermList) t);
            y_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_6);
        o_3 = t;
        t = y_6;
        t = z_6(t);
        r_3 = t;
        t = (ATerm) ATinsert(CheckATermList(r_3), v_6);
        m_1 = t;
        t = SSLsetAnnotations(m_1, o_3);
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        t = d_88(t);
      }
    return(t);
  }
  t = z_6(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL,p_7 = NULL;
  p_7 = t;
  t = SSL_explode_string(p_7);
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_22 = ATgetFirst((ATermList) t);
              if(((ATgetType(a_22) != AT_INT) || (ATgetInt((ATermInt) a_22) != 47)))
                _fail(t);
              if(((e_7 != NULL) && (e_7 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                e_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(z_0, t);
        t = not_null(e_7);
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
      }
  }
  g_7 = t;
  t = SSL_implode_string(g_7);
  return(t);
}
ATerm check_module_name_0_1 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  p_9 = t;
  {
    ATerm b_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Specification_1))
          {
            ATerm e_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_22);
        t = p_9;
      }
    else
      {
        t = b_22;
        if(match_cons(t, sym_Module_2))
          {
            q_9 = ATgetArgument(t, 0);
            {
              ATerm f_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = p_9;
        {
          ATerm g_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_4 = NULL;
              t = r_0;
              t = get_filename_0_0(t);
              l_4 = t;
              if((q_9 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym__2, l_4, l_4);
              LocalPopChoice(i_22);
            }
          else
            {
              t = g_22;
              {
                ATerm j_5 = NULL,n_5 = NULL,t_5 = NULL,v_5 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_22), q_9), term_v_22), r_0), term_u_22);
                v_5 = t;
                t = SSL_concat_strings(v_5);
                j_5 = t;
                t = term_q_20;
                n_5 = t;
                t = (ATerm) ATinsert(ATempty, j_5);
                t_5 = t;
                t = SSL_printnl(n_5, t_5);
                t = p_9;
              }
            }
        }
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm c_10 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_22;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm f_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_z_22);
      f_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_10, (ATerm) ATinsert(ATempty, term_z_22));
      t = e_8(c_10, f_10, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
  t = basename_1_0(_id, t);
  k_10 = t;
  t = term_m_21;
  t = p_100(t);
  j_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_10), term_a_23), k_10);
  i_10 = t;
  t = SSL_concat_strings(i_10);
  return(t);
}
ATerm if_keep1_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
        t = term_y_12;
        s_10 = t;
        t = term_d_23;
        t_10 = t;
        t = term_f_23;
        t = k_8(s_10, t_10, t);
        r_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_10, term_g_13);
        t = geq_0_0(t);
        t = p_10;
        t = a_100(t);
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = p_10;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm z_10 = NULL;
  z_10 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
        t = term_y_12;
        c_11 = t;
        t = term_q_12;
        d_11 = t;
        t = term_z_12;
        t = k_8(c_11, d_11, t);
        b_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_11, term_v_14);
        t = geq_0_0(t);
        t = z_10;
        t = z_98(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = z_10;
      }
  }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm j_11 = NULL;
  if(match_cons(t, sym_TopSort_1))
    {
      j_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11;
  return(t);
}
ATerm pass_sort_0_0 (ATerm t)
{
  ATerm i_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_11 = NULL,g_11 = NULL,i_11 = NULL;
      t = get_meta_0_0(t);
      if(match_cons(t, sym_Meta_1))
        {
          i_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_11;
      t = fetch_elem_1_0(c_1, t);
      g_11 = t;
      t = SSL_is_string(g_11);
      f_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_11), term_o_23);
      LocalPopChoice(m_23);
    }
  else
    {
      t = i_23;
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
static ATerm s_7 (ATerm q_22, ATerm p_22, ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(q_22, p_22);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      t = get_errno_0_0(t);
      t = term_m_21;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, q_22, p_22);
      t = f_8(q_22, p_22, t);
      t = SSL_remove(q_22);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_6 = NULL;
        t = i_12;
        t = p_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_y_23;
        h_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_12, term_y_23);
        t = f_8(j_12, h_6, t);
        t = SSL_remove(j_12);
        t = term_y_23;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm z_23 = t;
          int a_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_6 = NULL;
              t = i_12;
              t = p_0(t);
              x_6 = t;
              {
                ATerm b_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_7 = NULL;
                    a_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_7;
                      }
                    else
                      {
                        t = a_7;
                        if((j_12 != t))
                          {
                            _fail(t);
                          }
                        t = a_7;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, j_12, x_6);
              t = s_7(j_12, x_6, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_6);
              LocalPopChoice(a_24);
            }
          else
            {
              t = z_23;
              t = i_12;
              t = p_0(t);
              if((j_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_12);
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
  t = term_g_24;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm x_12 = NULL,a_13 = NULL,b_13 = NULL;
  x_12 = t;
  t = term_q_20;
  a_13 = t;
  t = (ATerm) ATinsert(ATempty, term_k_24);
  b_13 = t;
  t = SSL_printnl(a_13, b_13);
  t = x_12;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_n_24;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL;
  t = term_y_12;
  e_13 = t;
  t = term_o_24;
  f_13 = t;
  t = term_p_24;
  t = k_8(e_13, f_13, t);
  t = map_1_0(t_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_13), term_o_24);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_n_24;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  t = term_y_12;
  j_13 = t;
  t = term_o_24;
  k_13 = t;
  t = term_p_24;
  t = k_8(j_13, k_13, t);
  t = map_1_0(z_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_13), term_o_24);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm p_12 = NULL,u_12 = NULL;
  t = if_verbose6_1_0(d_1, t);
  u_12 = t;
  t = guarantee_extension_1_0(j_1, t);
  p_12 = t;
  t = u_12;
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_12 = NULL;
        t = p_12;
        t = find_in_includes_1_0(k_1, t);
        v_12 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_12);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        {
          ATerm w_12 = NULL;
          static ATerm a_2 (ATerm t)
          {
            t = p_12;
            return(t);
          }
          t = if_verbose2_1_0(l_1, t);
          t = guarantee_extension_1_0(n_1, t);
          w_12 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, w_12);
          {
            ATerm s_24 = t;
            int t_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_13 = NULL,d_13 = NULL,q_1 = NULL;
                d_13 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm u_24 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_13);
                c_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, w_12);
                q_1 = t;
                t = SSLsetAnnotations(q_1, c_13);
                LocalPopChoice(t_24);
                t = xtc_transform_file_2_0(o_1, r_1, t);
              }
            else
              {
                t = s_24;
                t = xtc_transform_term_2_0(x_1, y_1, t);
              }
          }
          t = rename_to_1_0(a_2, t);
        }
      }
  }
  return(t);
}
static ATerm t_7 (ATerm d_47, ATerm h_475, ATerm t)
{
  static ATerm d_2 (ATerm t)
  {
    ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
    m_13 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_47), term_b_25), m_13);
    p_13 = t;
    t = SSL_concat_strings(p_13);
    n_13 = t;
    t = (ATerm) ATinsert(ATempty, term_z_22);
    o_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_13, (ATerm) ATinsert(ATempty, term_z_22));
    t = e_8(n_13, o_13, t);
    return(t);
  }
  t = h_475;
  t = fetch_elem_1_0(d_2, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm r_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  static ATerm e_2 (ATerm t)
  {
    t = debug_1_0(y_79, t);
    return(t);
  }
  t_13 = t;
  t = term_y_12;
  u_13 = t;
  t = term_o_24;
  v_13 = t;
  t = term_p_24;
  t = k_8(u_13, v_13, t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_13, r_13);
  t = t_7(t_13, r_13, t);
  t = if_verbose2_1_0(e_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  c_14 = t;
  t = term_q_20;
  d_14 = t;
  t = (ATerm) ATinsert(ATempty, term_n_25);
  e_14 = t;
  t = SSL_printnl(d_14, e_14);
  t = c_14;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_o_25;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_o_25;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = debug_1_0(h_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL;
  t = if_verbose6_1_0(g_2, t);
  y_13 = t;
  t = guarantee_extension_1_0(k_2, t);
  z_13 = t;
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_14 = NULL;
        t = find_in_includes_1_0(q_2, t);
        a_14 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_14);
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        {
          static ATerm e_3 (ATerm t)
          {
            t = z_13;
            return(t);
          }
          t = if_verbose2_1_0(r_2, t);
          t = y_13;
          t = get_syntax_definition_0_0(t);
          {
            ATerm t_25 = t;
            int v_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_14 = NULL,r_14 = NULL;
                r_14 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    q_14 = ATgetArgument(t, 0);
                    {
                      ATerm i_7 = NULL,s_1 = NULL;
                      t = SSLgetAnnotations(r_14);
                      i_7 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, q_14);
                      s_1 = t;
                      t = SSLsetAnnotations(s_1, i_7);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = r_14;
                  }
                LocalPopChoice(v_25);
                {
                  static ATerm u_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, y_13), term_y_25);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(t_2, u_2, t);
                }
              }
            else
              {
                t = t_25;
                {
                  static ATerm d_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, y_13), term_y_25);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(v_2, d_3, t);
                }
              }
          }
          t = rename_to_1_0(e_3, t);
        }
      }
  }
  t = if_verbose6_1_0(g_3, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
        t = term_y_12;
        z_14 = t;
        t = term_q_12;
        a_15 = t;
        t = term_z_12;
        t = k_8(z_14, a_15, t);
        y_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_14, term_p_14);
        t = geq_0_0(t);
        t = w_14;
        t = y_98(t);
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = w_14;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm d_15 = NULL;
  static ATerm i_3 (ATerm t)
  {
    t = q_87(t);
    if(((d_15 != NULL) && (d_15 != t)))
      _fail(t);
    else
      d_15 = t;
    return(t);
  }
  t = fetch_1_0(i_3, t);
  t = not_null(d_15);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_d_26;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = debug_1_0(p_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm i_15 = NULL,g_16 = NULL,i_16 = NULL;
  t = if_verbose6_1_0(j_3, t);
  g_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      i_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_8 = NULL,r_8 = NULL,v_1 = NULL;
        t = SSLgetAnnotations(g_16);
        p_8 = t;
        t = i_16;
        t = guarantee_extension_1_0(l_3, t);
        r_8 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_8);
        v_1 = t;
        t = SSLsetAnnotations(v_1, p_8);
        t = read_from_0_0(t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        {
          ATerm y_8 = NULL,e_9 = NULL,j_9 = NULL,w_1 = NULL;
          t = SSLgetAnnotations(g_16);
          e_9 = t;
          t = i_16;
          t = guarantee_extension_1_0(m_3, t);
          j_9 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, j_9);
          w_1 = t;
          t = SSLsetAnnotations(w_1, e_9);
          t = read_from_0_0(t);
          y_8 = t;
          t = SSL_explode_term(y_8);
          if(match_cons(t, sym__2))
            {
              i_15 = ATgetArgument(t, 0);
              {
                ATerm i_26 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, i_15)));
        }
      }
  }
  t = if_verbose6_1_0(n_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = debug_1_0(s_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_j_26;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm i_17 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      i_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_17;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = debug_1_0(z_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm s_16 = NULL;
  t = if_verbose6_1_0(q_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      s_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_16 = NULL,u_16 = NULL;
        t = term_y_12;
        t_16 = t;
        t = term_n_26;
        u_16 = t;
        t = term_o_26;
        t = k_8(t_16, u_16, t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        {
          ATerm p_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm j_17 (ATerm v_16, ATerm t)
              {
                ATerm z_16 = NULL,a_17 = NULL;
                t = term_q_20;
                z_16 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_26), s_16), term_v_26), v_16), term_t_26);
                a_17 = t;
                t = SSL_printnl(z_16, a_17);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_26), s_16), term_v_26), v_16), term_t_26);
                _fail(t);
                return(t);
              }
              ATerm b_17 = NULL,d_17 = NULL;
              t = get_meta_0_0(t);
              d_17 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  b_17 = ATgetArgument(t, 0);
                  {
                    ATerm x_26 = t;
                    int y_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = b_17;
                        t = fetch_elem_1_0(t_3, t);
                        LocalPopChoice(y_26);
                      }
                    else
                      {
                        t = x_26;
                        t = j_17(d_17, t);
                      }
                  }
                }
              else
                {
                  t = j_17(d_17, t);
                }
              LocalPopChoice(r_26);
            }
          else
            {
              t = p_26;
              t = term_z_26;
            }
        }
      }
  }
  t = if_verbose2_1_0(w_3, t);
  return(t);
}
ATerm basename_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  v_17 = t;
  t = SSL_explode_string(v_17);
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_20 (ATerm t)
        {
          ATerm v_19 = NULL,z_19 = NULL,d_20 = NULL;
          v_19 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_19 = ATgetFirst((ATermList) t);
              d_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm c_27 = t;
            int d_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_9 = NULL,b_10 = NULL,b_2 = NULL;
                t = SSLgetAnnotations(v_19);
                w_9 = t;
                t = d_20;
                t = j_20(t);
                b_10 = t;
                t = (ATerm) ATinsert(CheckATermList(b_10), z_19);
                b_2 = t;
                t = SSLsetAnnotations(b_2, w_9);
                LocalPopChoice(d_27);
              }
            else
              {
                t = c_27;
                {
                  ATerm e_27 = t;
                  int f_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_10 = NULL,c_2 = NULL;
                      t = SSLgetAnnotations(v_19);
                      w_10 = t;
                      t = z_19;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(d_20), z_19);
                      c_2 = t;
                      t = SSLsetAnnotations(c_2, w_10);
                      LocalPopChoice(f_27);
                    }
                  else
                    {
                      t = e_27;
                      {
                        ATerm t_11 = NULL,y_11 = NULL,f_2 = NULL;
                        t = SSLgetAnnotations(v_19);
                        t_11 = t;
                        t = z_19;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = d_20;
                        t = n_100(t);
                        y_11 = t;
                        t = (ATerm) ATinsert(CheckATermList(y_11), z_19);
                        f_2 = t;
                        t = SSLsetAnnotations(f_2, t_11);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = j_20(t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
      }
  }
  u_17 = t;
  t = SSL_implode_string(u_17);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = debug_1_0(b_4, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_g_27;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_h_27;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_27);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_h_27;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_27);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm l_23 = NULL,t_23 = NULL,u_23 = NULL;
  t = pass_verbose_0_0(t);
  t_23 = t;
  t = term_k_27;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL,w_23 = NULL;
        t = term_y_12;
        v_23 = t;
        t = term_k_27;
        w_23 = t;
        t = term_n_27;
        t = k_8(v_23, w_23, t);
        LocalPopChoice(m_27);
        t = (ATerm) ATinsert(ATempty, term_o_27);
      }
    else
      {
        t = l_27;
        t = (ATerm) ATempty;
      }
  }
  u_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_23), t_23);
  t = concat_0_0(t);
  l_23 = t;
  t = (ATerm) ATinsert(CheckATermList(l_23), term_p_27);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm x_23 = NULL,c_24 = NULL,d_24 = NULL;
  t = pass_verbose_0_0(t);
  c_24 = t;
  t = term_k_27;
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL,l_24 = NULL;
        t = term_y_12;
        e_24 = t;
        t = term_k_27;
        l_24 = t;
        t = term_n_27;
        t = k_8(e_24, l_24, t);
        LocalPopChoice(r_27);
        t = (ATerm) ATinsert(ATempty, term_o_27);
      }
    else
      {
        t = q_27;
        t = (ATerm) ATempty;
      }
  }
  d_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_24), c_24);
  t = concat_0_0(t);
  x_23 = t;
  t = (ATerm) ATinsert(CheckATermList(x_23), term_p_27);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_s_27;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_t_27;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm z_24 = NULL,c_25 = NULL;
  t = pass_verbose_0_0(t);
  z_24 = t;
  t = term_k_27;
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL,j_25 = NULL;
        t = term_y_12;
        e_25 = t;
        t = term_k_27;
        j_25 = t;
        t = term_n_27;
        t = k_8(e_25, j_25, t);
        LocalPopChoice(v_27);
        t = (ATerm) ATinsert(ATempty, term_k_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATempty;
      }
  }
  c_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_25), z_24);
  t = concat_0_0(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_t_27;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL;
  t = pass_verbose_0_0(t);
  l_25 = t;
  t = term_k_27;
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_25 = NULL,w_25 = NULL;
        t = term_y_12;
        u_25 = t;
        t = term_k_27;
        w_25 = t;
        t = term_n_27;
        t = k_8(u_25, w_25, t);
        LocalPopChoice(x_27);
        t = (ATerm) ATinsert(ATempty, term_k_27);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATempty;
      }
  }
  m_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_25), l_25);
  t = concat_0_0(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_y_27;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_2 = NULL;
  t = if_verbose6_1_0(a_4, t);
  v_21 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_21);
  w_21 = t;
  t = x_21;
  t = basename_1_0(_id, t);
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_21);
  y_2 = t;
  t = SSLsetAnnotations(y_2, w_21);
  t = v_21;
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      p_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_21;
  t = pass_sort_0_0(t);
  q_21 = t;
  t = v_21;
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_22 = ATgetArgument(t, 0);
            {
              ATerm m_12 = NULL,z_2 = NULL;
              t = SSLgetAnnotations(v_21);
              m_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_22);
              z_2 = t;
              t = SSLsetAnnotations(z_2, m_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_21;
          }
        LocalPopChoice(a_28);
        {
          static ATerm d_4 (ATerm t)
          {
            ATerm l_22 = NULL,m_22 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(e_4, t);
            m_22 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_22, q_21);
            t = conc_0_0(t);
            l_22 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(l_22), p_21), term_c_28), term_b_28);
            return(t);
          }
          t = xtc_transform_file_2_0(c_4, d_4, t);
        }
      }
    else
      {
        t = z_27;
        {
          static ATerm i_4 (ATerm t)
          {
            ATerm n_22 = NULL,x_22 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(j_4, t);
            x_22 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_22, q_21);
            t = conc_0_0(t);
            n_22 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_22), p_21), term_c_28), term_b_28);
            return(t);
          }
          t = xtc_transform_term_2_0(g_4, i_4, t);
        }
      }
  }
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_23 = NULL,k_23 = NULL;
        k_23 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_23 = ATgetArgument(t, 0);
            {
              ATerm t_12 = NULL,a_3 = NULL;
              t = SSLgetAnnotations(k_23);
              t_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_23);
              a_3 = t;
              t = SSLsetAnnotations(a_3, t_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_23;
          }
        LocalPopChoice(e_28);
        t = xtc_transform_file_2_0(k_4, n_4, t);
      }
    else
      {
        t = d_28;
        t = xtc_transform_term_2_0(p_4, s_4, t);
      }
  }
  {
    static ATerm y_4 (ATerm t)
    {
      static ATerm c_5 (ATerm t)
      {
        t = t_21;
        t = guarantee_extension_1_0(d_5, t);
        return(t);
      }
      t = copy_to_1_0(c_5, t);
      return(t);
    }
    t = if_keep1_1_0(y_4, t);
  }
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_24 = NULL,y_24 = NULL;
        y_24 = t;
        if(match_cons(t, sym_FILE_1))
          {
            x_24 = ATgetArgument(t, 0);
            {
              ATerm w_13 = NULL,b_3 = NULL;
              t = SSLgetAnnotations(y_24);
              w_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_24);
              b_3 = t;
              t = SSLsetAnnotations(b_3, w_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_24;
          }
        LocalPopChoice(g_28);
        t = xtc_transform_file_2_0(e_5, g_5, t);
      }
    else
      {
        t = f_28;
        t = xtc_transform_term_2_0(h_5, i_5, t);
      }
  }
  u_21 = t;
  t = read_from_0_0(t);
  t = check_module_name_0_1(t_21, t);
  t = u_21;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_26 = ATgetArgument(t, 0);
            {
              ATerm l_14 = NULL,c_3 = NULL;
              t = SSLgetAnnotations(u_21);
              l_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_26);
              c_3 = t;
              t = SSLsetAnnotations(c_3, l_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_21;
          }
        LocalPopChoice(i_28);
        t = xtc_transform_file_2_0(o_5, pass_verbose_0_0, t);
      }
    else
      {
        t = h_28;
        t = xtc_transform_term_2_0(w_5, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  static ATerm m_28 (ATerm t)
  {
    ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
    l_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_28 = ATgetFirst((ATermList) t);
        k_28 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_15 = NULL,g_15 = NULL,f_4 = NULL;
          t = SSLgetAnnotations(l_28);
          b_15 = t;
          t = k_28;
          t = m_28(t);
          g_15 = t;
          t = (ATerm) ATinsert(CheckATermList(g_15), j_28);
          f_4 = t;
          t = SSLsetAnnotations(f_4, b_15);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_28;
        t = v_87(t);
      }
    return(t);
  }
  t = m_28(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_26 = NULL,s_26 = NULL,u_26 = NULL;
  q_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_26;
    }
  else
    {
      static ATerm b_6 (ATerm t)
      {
        t = not_null(u_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_26 = ATgetFirst((ATermList) t);
          if(((u_26 != NULL) && (u_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_26;
      t = at_end_1_0(b_6, t);
    }
  return(t);
}
static ATerm j_29 (ATerm t_28, ATerm t)
{
  ATerm a_29 = NULL;
  t = SSL_explode_term(t_28);
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_29;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  e_29 = t;
  if(match_cons(t, sym__2))
    {
      c_29 = ATgetArgument(t, 0);
      d_29 = ATgetArgument(t, 1);
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_6 (ATerm t)
            {
              t = d_29;
              return(t);
            }
            t = c_29;
            t = at_end_1_0(e_6, t);
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            t = j_29(e_29, t);
          }
      }
    }
  else
    {
      t = j_29(e_29, t);
    }
  return(t);
}
static ATerm u_7 (ATerm a_47, ATerm z_46, ATerm t)
{
  ATerm n_29 = NULL,q_29 = NULL,r_29 = NULL;
  t = a_47;
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_29 = NULL;
        t = term_y_12;
        s_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_12, a_47);
        t = k_8(s_29, a_47, t);
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        t = (ATerm) ATempty;
      }
  }
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_46, q_29);
  t = conc_0_0(t);
  n_29 = t;
  t = term_y_12;
  r_29 = t;
  t = SSL_table_put(r_29, a_47, n_29);
  t = (ATerm) ATmakeAppl(sym__3, term_y_12, a_47, n_29);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  z_29 = t;
  t = SSL_explode_string(z_29);
  {
    ATerm s_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_31 (ATerm t)
        {
          ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
          i_31 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_31 = ATgetFirst((ATermList) t);
              k_31 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm v_28 = t;
            int w_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_16 = NULL,f_16 = NULL,h_4 = NULL;
                t = SSLgetAnnotations(i_31);
                a_16 = t;
                t = k_31;
                t = o_31(t);
                f_16 = t;
                t = (ATerm) ATinsert(CheckATermList(f_16), j_31);
                h_4 = t;
                t = SSLsetAnnotations(h_4, a_16);
                LocalPopChoice(w_28);
              }
            else
              {
                t = v_28;
                {
                  ATerm q_16 = NULL,m_4 = NULL;
                  t = SSLgetAnnotations(i_31);
                  q_16 = t;
                  t = j_31;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, j_31);
                  m_4 = t;
                  t = SSLsetAnnotations(m_4, q_16);
                }
              }
          }
          return(t);
        }
        t = o_31(t);
        LocalPopChoice(u_28);
      }
    else
      {
        t = s_28;
        t = (ATerm) ATempty;
      }
  }
  y_29 = t;
  t = SSL_implode_string(y_29);
  return(t);
}
ATerm debug_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL;
  v_31 = t;
  t = m_82(t);
  w_31 = t;
  t = term_q_20;
  x_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_31), w_31);
  y_31 = t;
  t = SSL_printnl(x_31, y_31);
  t = v_31;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  static ATerm f_6 (ATerm t)
  {
    ATerm a_32 = NULL,b_32 = NULL;
    a_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_31), a_32);
    t = k_8(not_null(z_31), a_32, t);
    b_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
    return(t);
  }
  if(((z_31 != NULL) && (z_31 != t)))
    _fail(t);
  else
    z_31 = t;
  t = SSL_table_keys(z_31);
  t = map_1_0(f_6, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_32 = NULL,g_32 = NULL,i_32 = NULL;
        t = term_y_12;
        g_32 = t;
        t = term_q_12;
        i_32 = t;
        t = term_z_12;
        t = k_8(g_32, i_32, t);
        f_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_32, term_l_19);
        t = geq_0_0(t);
        t = d_32;
        t = b_99(t);
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = d_32;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  {
    ATerm z_28 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_32 = NULL,q_32 = NULL,t_32 = NULL;
        t = term_y_12;
        q_32 = t;
        t = term_q_12;
        t_32 = t;
        t = term_z_12;
        t = k_8(q_32, t_32, t);
        o_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_32, term_w_16);
        t = geq_0_0(t);
        t = m_32;
        t = a_99(t);
        LocalPopChoice(b_29);
      }
    else
      {
        t = z_28;
        t = m_32;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm h_33 = NULL;
  h_33 = t;
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_33 = NULL,o_33 = NULL,r_33 = NULL;
        t = term_y_12;
        o_33 = t;
        t = term_q_12;
        r_33 = t;
        t = term_z_12;
        t = k_8(o_33, r_33, t);
        m_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_33, term_f_15);
        t = geq_0_0(t);
        t = h_33;
        t = c_99(t);
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        t = h_33;
      }
  }
  return(t);
}
static ATerm w_7 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm f_33, ATerm e_33, ATerm t)
{
  t = t_91(t);
  {
    static ATerm g_6 (ATerm t)
    {
      ATerm x_33 = NULL;
      x_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_33, x_33);
      t = s_91(t);
      return(t);
    }
    t = fetch_1_0(g_6, t);
  }
  t = e_33;
  return(t);
}
static ATerm x_7 (ATerm p_91 (ATerm), ATerm b_33, ATerm a_33, ATerm t)
{
  static ATerm b_35 (ATerm t)
  {
    ATerm t_34 = NULL,v_34 = NULL,w_34 = NULL;
    t_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_33;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_34 = ATgetFirst((ATermList) t);
            w_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_29 = t;
          int i_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_34;
              {
                static ATerm j_6 (ATerm t)
                {
                  t = a_33;
                  return(t);
                }
                t = w_7(p_91, j_6, v_34, w_34, t);
              }
              t = b_35(t);
              LocalPopChoice(i_29);
            }
          else
            {
              t = h_29;
              {
                ATerm l_17 = NULL,o_17 = NULL,r_4 = NULL;
                t = SSLgetAnnotations(t_34);
                l_17 = t;
                t = w_34;
                t = b_35(t);
                o_17 = t;
                t = (ATerm) ATinsert(CheckATermList(o_17), v_34);
                r_4 = t;
                t = SSLsetAnnotations(r_4, l_17);
              }
            }
        }
      }
    return(t);
  }
  t = b_33;
  t = b_35(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm u_35 = NULL;
  if(match_cons(t, sym__2))
    {
      u_35 = ATgetArgument(t, 0);
      if((u_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_7 (ATerm r_45, ATerm s_45, ATerm t_45, ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_29 = ATgetArgument(t, 0);
            ATerm o_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
        t = k_8(r_45, s_45, t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = (ATerm) ATempty;
      }
  }
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_35, t_45);
  t = x_7(l_6, o_35, t_45, t);
  n_35 = t;
  t = SSL_table_put(r_45, s_45, n_35);
  t = m_35;
  return(t);
}
static ATerm z_7 (ATerm e_99 (ATerm), ATerm b_46, ATerm a_46, ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    ATerm v_35 = NULL,w_35 = NULL;
    if(match_cons(t, sym__2))
      {
        v_35 = ATgetArgument(t, 0);
        w_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, b_46, v_35, w_35);
    t = e_99(t);
    return(t);
  }
  t = a_46;
  t = map_1_0(n_6, t);
  return(t);
}
static ATerm e_8 (ATerm x_47, ATerm y_47, ATerm t)
{
  t = SSL_access(x_47, y_47);
  return(t);
}
static ATerm v_36 (ATerm k_36, ATerm t)
{
  t = SSL_fclose(k_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL;
  r_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_36 = ATgetArgument(t, 0);
      {
        ATerm p_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_36);
            LocalPopChoice(t_29);
          }
        else
          {
            t = p_29;
            t = v_36(r_36, t);
          }
      }
    }
  else
    {
      t = v_36(r_36, t);
    }
  return(t);
}
static ATerm a_8 (ATerm x_25, ATerm t)
{
  t = SSL_read_term_from_stream(x_25);
  return(t);
}
static ATerm b_8 (ATerm o_40, ATerm p_40, ATerm t)
{
  t = SSL_strcat(o_40, p_40);
  return(t);
}
static ATerm c_8 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm x_36 = NULL;
  t = SSL_fopen(g_48, h_48);
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_36 = NULL;
  t = SSL_stdin_stream();
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_36 = NULL;
  t = SSL_stdout_stream();
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_37 = NULL;
  t = SSL_stderr_stream();
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_37);
  return(t);
}
static ATerm v_38 (ATerm k_37, ATerm t)
{
  ATerm l_37 = NULL;
  t = SSL_explode_term(k_37);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_29 = ATgetArgument(t, 1);
        if(((ATgetType(v_29) == AT_LIST) && !(ATisEmpty(v_29))))
          {
            l_37 = ATgetFirst((ATermList) v_29);
            {
              ATerm w_29 = (ATerm) ATgetNext((ATermList) v_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_38 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,w_37 = NULL,t_4 = NULL;
  t = SSLgetAnnotations(q_37);
  t_37 = t;
  t = o_37;
  if(match_cons(t, sym_Path_1))
    {
      w_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_37, p_37);
  t_4 = t;
  t = SSLsetAnnotations(t_4, t_37);
  if(match_cons(t, sym__2))
    {
      r_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(r_37, s_37, t);
  return(t);
}
static ATerm x_38 (ATerm z_37, ATerm a_38, ATerm b_38, ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,p_38 = NULL,a_5 = NULL;
  t = SSLgetAnnotations(b_38);
  e_38 = t;
  t = SSL_is_string(z_37);
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_38, a_38);
  a_5 = t;
  t = SSLsetAnnotations(a_5, e_38);
  if(match_cons(t, sym__2))
    {
      c_38 = ATgetArgument(t, 0);
      d_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(c_38, d_38, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,u_38 = NULL;
  r_38 = t;
  if(match_cons(t, sym__2))
    {
      s_38 = ATgetArgument(t, 0);
      u_38 = ATgetArgument(t, 1);
      {
        ATerm x_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_38(r_38, t);
            LocalPopChoice(a_30);
          }
        else
          {
            t = x_29;
            {
              ATerm b_30 = t;
              int c_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_38(s_38, u_38, r_38, t);
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  t = x_38(s_38, u_38, r_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_38(r_38, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_39 = NULL,d_39 = NULL,e_39 = NULL,j_39 = NULL;
  j_39 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_39, term_f_30);
        t = d_8(t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        {
          ATerm l_18 = NULL,m_18 = NULL;
          t = term_g_30;
          m_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_30, j_39);
          t = b_8(m_18, j_39, t);
          l_18 = t;
          t = SSL_perror(l_18);
          _fail(t);
        }
      }
  }
  d_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(e_39, t);
  a_39 = t;
  t = d_39;
  t = fclose_0_0(t);
  t = a_39;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_h_30;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_39 = NULL,o_39 = NULL;
      n_39 = t;
      t = (ATerm) ATinsert(ATempty, term_l_30);
      o_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_39, (ATerm) ATinsert(ATempty, term_l_30));
      t = e_8(n_39, o_39, t);
      LocalPopChoice(k_30);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_30;
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_30 = t;
            if((PushChoice() == 0))
              {
                ATerm p_39 = NULL,q_39 = NULL;
                p_39 = t;
                t = (ATerm) ATinsert(ATempty, term_z_22);
                q_39 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_39, (ATerm) ATinsert(ATempty, term_z_22));
                t = e_8(p_39, q_39, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_30;
              }
            t = debug_1_0(o_6, t);
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            t = debug_1_0(p_6, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = debug_1_0(s_6, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_p_30;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = debug_1_0(b_7, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_q_30;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  t = term_q_20;
  r_40 = t;
  t = (ATerm) ATinsert(ATempty, term_r_30);
  s_40 = t;
  t = SSL_printnl(r_40, s_40);
  t = q_40;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  if(match_cons(t, sym__3))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
      v_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_7(t_40, u_40, v_40, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm y_40 = NULL,a_41 = NULL,b_41 = NULL;
  y_40 = t;
  t = term_q_20;
  a_41 = t;
  t = (ATerm) ATinsert(ATempty, term_s_30);
  b_41 = t;
  t = SSL_printnl(a_41, b_41);
  t = y_40;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  f_41 = t;
  t = term_q_20;
  g_41 = t;
  t = (ATerm) ATinsert(ATempty, term_r_30);
  h_41 = t;
  t = SSL_printnl(g_41, h_41);
  t = f_41;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,y_39 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
  r_39 = t;
  t = if_verbose5_1_0(q_6, t);
  {
    ATerm t_30 = t;
    if((PushChoice() == 0))
      {
        ATerm i_40 = NULL,l_40 = NULL;
        t = term_u_30;
        i_40 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, r_39);
        l_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_30, (ATerm) ATmakeAppl(sym_Imported_1, r_39));
        t = k_8(i_40, l_40, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_30;
      }
  }
  t_39 = t;
  t = term_u_30;
  c_40 = t;
  t = term_v_30;
  d_40 = t;
  t = (ATerm) ATinsert(ATempty, r_39);
  e_40 = t;
  t = SSL_table_put(c_40, d_40, e_40);
  t = t_39;
  t = if_verbose4_1_0(w_6, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(c_7, t);
  s_39 = t;
  t = term_u_30;
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, s_39);
  t = z_7(d_7, b_40, s_39, t);
  t = if_verbose6_1_0(f_7, t);
  t = term_u_30;
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, r_39);
  v_39 = t;
  t = (ATerm) ATempty;
  y_39 = t;
  t = SSL_table_put(u_39, v_39, y_39);
  t = (ATerm) ATmakeAppl(sym__3, term_u_30, (ATerm)ATmakeAppl(sym_Imported_1, r_39), (ATerm) ATempty);
  t = if_verbose4_1_0(h_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_42;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_42 = ATgetFirst((ATermList) t);
          h_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_18 = NULL,a_19 = NULL,c_19 = NULL,k_5 = NULL;
            t = SSLgetAnnotations(f_42);
            u_18 = t;
            t = g_42;
            t = k_95(t);
            a_19 = t;
            t = h_42;
            t = filter_1_0(k_95, t);
            c_19 = t;
            t = (ATerm) ATinsert(CheckATermList(c_19), a_19);
            k_5 = t;
            t = SSLsetAnnotations(k_5, u_18);
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            t = h_42;
            t = filter_1_0(k_95, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  static ATerm k_42 (ATerm t)
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_85(t);
        t = k_42(t);
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        t = k_85(t);
      }
    return(t);
  }
  t = k_42(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_42 = NULL,m_42 = NULL;
      t = term_y_12;
      l_42 = t;
      t = term_c_31;
      m_42 = t;
      t = term_d_31;
      t = k_8(l_42, m_42, t);
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_42 = NULL;
            t = term_g_31;
            n_42 = t;
            t = SSL_getenv(n_42);
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = debug_1_0(k_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_h_31;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  t = term_u_30;
  t_42 = t;
  t = term_l_31;
  u_42 = t;
  t = term_m_31;
  t = k_8(t_42, u_42, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_31 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_31;
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = debug_1_0(i_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_42 = NULL;
  t = if_verbose5_1_0(j_7, t);
  p_42 = t;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_42 = NULL,r_42 = NULL;
        t = term_u_30;
        q_42 = t;
        t = term_v_30;
        r_42 = t;
        t = term_s_31;
        t = k_8(q_42, r_42, t);
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        {
          ATerm s_42 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_42 = t;
          t = repeat_2_0(r_7, _id, t);
          t = s_42;
        }
      }
  }
  t = p_42;
  t = if_verbose5_1_0(v_7, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = debug_1_0(m_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm i_44 (ATerm k_43, ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,q_43 = NULL;
  t = term_u_30;
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, k_43);
  q_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, (ATerm) ATmakeAppl(sym_Tool_1, k_43));
  t = k_8(n_43, q_43, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_31 = ATgetFirst((ATermList) t);
      if(match_cons(u_31, sym__2))
        {
          ATerm e_32 = ATgetArgument(u_31, 0);
          m_43 = ATgetArgument(u_31, 1);
        }
      else
        _fail(t);
      {
        ATerm c_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_43;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = debug_1_0(s_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_u_30;
  t = table_getlist_0_0(t);
  t = debug_1_0(u_8, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_43 = NULL,w_43 = NULL,x_43 = NULL;
      t = if_verbose5_1_0(j_8, t);
      t = xtc_load_0_0(t);
      x_43 = t;
      if(match_cons(t, sym__2))
        {
          r_43 = ATgetArgument(t, 0);
          w_43 = ATgetArgument(t, 1);
          {
            ATerm l_32 = t;
            int n_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
                t = term_u_30;
                b_44 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, r_43);
                c_44 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_u_30, (ATerm) ATmakeAppl(sym_Tool_1, r_43));
                t = k_8(b_44, c_44, t);
                {
                  static ATerm o_8 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((w_43 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((a_44 != NULL) && (a_44 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_44 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(o_8, t);
                }
                t = not_null(a_44);
                LocalPopChoice(n_32);
              }
            else
              {
                t = l_32;
                t = i_44(x_43, t);
              }
          }
        }
      else
        {
          t = i_44(x_43, t);
        }
      t = if_verbose5_1_0(q_8, t);
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      {
        ATerm h_44 = NULL,p_19 = NULL,q_19 = NULL;
        h_44 = t;
        t = term_q_20;
        p_19 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_32), h_44), term_p_32);
        q_19 = t;
        t = SSL_printnl(p_19, q_19);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_32), h_44), term_p_32);
        t = if_verbose5_1_0(t_8, t);
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
static ATerm f_8 (ATerm r_22, ATerm s_22, ATerm t)
{
  t = SSL_copy(r_22, s_22);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL;
  k_45 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_19 = NULL;
        t = k_45;
        t = o_0(t);
        y_19 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = y_19;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = y_19;
          }
        t = (ATerm) ATmakeAppl(sym__2, l_45, y_19);
        t = f_8(l_45, y_19, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_45);
        LocalPopChoice(u_32);
      }
    else
      {
        t = s_32;
        {
          ATerm v_32 = t;
          int w_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_20 = NULL;
              t = k_45;
              t = o_0(t);
              l_20 = t;
              {
                ATerm x_32 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_20 = NULL;
                    m_20 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = m_20;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = m_20;
                          }
                        else
                          {
                            t = m_20;
                            if((l_45 != t))
                              {
                                _fail(t);
                              }
                            t = m_20;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_32;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_45, l_20);
              t = f_8(l_45, l_20, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_45);
              LocalPopChoice(w_32);
            }
          else
            {
              t = v_32;
              t = k_45;
              t = o_0(t);
              if((l_45 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_45);
            }
        }
      }
  }
  return(t);
}
static ATerm g_8 (ATerm z_44, ATerm a_45, ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL;
  q_45 = t;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_44, a_45);
        t = k_8(z_44, a_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_33 = ATgetFirst((ATermList) t);
            p_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_32);
        t = SSL_table_put(z_44, a_45, p_45);
        t = (ATerm) ATmakeAppl(sym__3, z_44, a_45, p_45);
      }
    else
      {
        t = y_32;
        t = SSL_table_remove(z_44, a_45);
        t = (ATerm) ATmakeAppl(sym__2, z_44, a_45);
      }
  }
  t = q_45;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,e_46 = NULL;
  z_45 = t;
  t = l_97(t);
  y_45 = t;
  {
    ATerm d_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_46 = NULL;
        t = term_e_21;
        f_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_45, term_e_21);
        t = k_8(y_45, f_46, t);
        LocalPopChoice(g_33);
      }
    else
      {
        t = d_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_45 = ATgetFirst((ATermList) t);
      w_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_e_21;
  e_46 = t;
  t = SSL_table_put(y_45, e_46, w_45);
  t = x_45;
  {
    static ATerm v_8 (ATerm t)
    {
      ATerm g_46 = NULL;
      g_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_45, g_46);
      t = g_8(y_45, g_46, t);
      return(t);
    }
    t = map_1_0(v_8, t);
  }
  t = z_45;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_98(t);
      t = m_98(t);
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      t = m_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,n_46 = NULL,o_46 = NULL;
  j_46 = t;
  t = k_97(t);
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, term_e_21);
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_46 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_33 = ATgetArgument(t, 0);
            ATerm p_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_21;
        s_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_46, term_e_21);
        t = k_8(i_46, s_46, t);
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        t = (ATerm) ATempty;
      }
  }
  k_46 = t;
  t = term_e_21;
  n_46 = t;
  t = (ATerm) ATinsert(CheckATermList(k_46), (ATerm) ATempty);
  o_46 = t;
  t = SSL_table_put(i_46, n_46, o_46);
  t = j_46;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_j_21;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm h_47 = NULL;
  h_47 = t;
  {
    ATerm q_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(h_47);
        LocalPopChoice(s_33);
      }
    else
      {
        t = q_33;
        t = h_47;
      }
  }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm x_46 = NULL;
  static ATerm x_8 (ATerm t)
  {
    ATerm y_46 = NULL;
    y_46 = t;
    {
      ATerm t_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_47 = NULL,c_47 = NULL;
          t = term_j_21;
          b_47 = t;
          t = term_e_21;
          c_47 = t;
          t = term_v_33;
          t = k_8(b_47, c_47, t);
          LocalPopChoice(u_33);
        }
      else
        {
          t = t_33;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_46 != NULL) && (x_46 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_46 = ATgetFirst((ATermList) t);
        {
          ATerm w_33 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = x_46;
    t = map_1_0(a_9, t);
    t = y_46;
    t = end_scope_1_0(c_9, t);
    return(t);
  }
  t = begin_scope_1_0(w_8, t);
  t = restore_always_2_0(l_101, x_8, t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_47 = NULL,o_47 = NULL;
      t = term_y_12;
      n_47 = t;
      t = term_n_21;
      o_47 = t;
      t = term_a_34;
      t = k_8(n_47, o_47, t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      t = term_y_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  static ATerm f_9 (ATerm t)
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
        t = term_y_12;
        l_47 = t;
        t = term_o_21;
        m_47 = t;
        t = term_d_34;
        t = k_8(l_47, m_47, t);
        k_47 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_47);
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = term_y_22;
      }
    t = m_101(t);
    t = copy_to_1_0(g_9, t);
    return(t);
  }
  t = xtc_temp_files_1_0(f_9, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,t_47 = NULL,u_47 = NULL;
  p_47 = t;
  t = term_m_21;
  t = whoami_0_0(t);
  q_47 = t;
  t = term_q_20;
  t_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_34), q_47), term_e_34);
  u_47 = t;
  t = SSL_printnl(t_47, u_47);
  t = term_g_13;
  r_47 = t;
  t = SSL_exit(r_47);
  t = p_47;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm w_47 = NULL;
  w_47 = t;
  if(match_string(t, "-k"))
    {
      t = w_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_47;
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  t = SSL_string_to_int(z_47);
  a_48 = t;
  t = term_d_23;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_23, a_48);
  t = n_8(b_48, a_48, t);
  t = z_47;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_9, i_9, k_9, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  if(match_string(t, "-S"))
    {
      t = d_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_48;
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL;
  t = term_q_12;
  e_48 = t;
  t = term_h_34;
  f_48 = t;
  t = term_i_34;
  t = n_8(e_48, f_48, t);
  t = term_j_34;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_k_34;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  t = SSL_string_to_int(k_48);
  l_48 = t;
  t = term_q_12;
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, l_48);
  t = n_8(m_48, l_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_48);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_l_34;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  t = term_o_23;
  n_48 = t;
  t = term_m_21;
  o_48 = t;
  t = term_m_34;
  t = n_8(n_48, o_48, t);
  t = term_n_34;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_9, m_9, n_9, t);
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      {
        ATerm r_34 = t;
        int s_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_9, r_9, s_9, t);
            LocalPopChoice(s_34);
          }
        else
          {
            t = r_34;
            t = Option_3_0(t_9, u_9, v_9, t);
          }
      }
    }
  return(t);
}
static ATerm n_8 (ATerm u_46, ATerm v_46, ATerm t)
{
  ATerm p_48 = NULL;
  t = term_y_12;
  p_48 = t;
  t = SSL_table_put(p_48, u_46, v_46);
  t = (ATerm) ATmakeAppl(sym__3, term_y_12, u_46, v_46);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_48 = NULL,v_48 = NULL,z_48 = NULL;
      t = term_m_21;
      t = e_0(t);
      u_48 = t;
      t = term_u_34;
      v_48 = t;
      t = term_x_34;
      z_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_34, term_x_34, u_48);
      t = l_8(v_48, z_48, u_48, t);
      _fail(t);
    }
  else
    {
      ATerm m_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_48 = ATgetFirst((ATermList) t);
          t_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_48;
      t = c_0(t);
      t = term_m_21;
      t = d_0(t);
      m_49 = t;
      t = (ATerm) ATinsert(CheckATermList(t_48), m_49);
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm o_49 = NULL;
  o_49 = t;
  if(match_string(t, "-o"))
    {
      t = o_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_49;
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL;
  p_49 = t;
  t = term_n_21;
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_21, p_49);
  t = n_8(q_49, p_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_49);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_9, y_9, z_9, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm u_49 = NULL;
  u_49 = t;
  if(match_string(t, "-i"))
    {
      t = u_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_49;
    }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm v_49 = NULL,x_49 = NULL;
  v_49 = t;
  t = term_o_21;
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_21, v_49);
  t = n_8(x_49, v_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_49);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_10, d_10, e_10, t);
  return(t);
}
static ATerm l_8 (ATerm u_44, ATerm v_44, ATerm t_44, ATerm t)
{
  ATerm z_49 = NULL,b_50 = NULL,c_50 = NULL;
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_44, v_44);
  {
    ATerm a_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_35 = ATgetArgument(t, 0);
            ATerm e_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_44, v_44);
        t = k_8(u_44, v_44, t);
        LocalPopChoice(c_35);
      }
    else
      {
        t = a_35;
        t = (ATerm) ATempty;
      }
  }
  b_50 = t;
  t = (ATerm) ATinsert(CheckATermList(b_50), t_44);
  c_50 = t;
  t = SSL_table_put(u_44, v_44, c_50);
  t = z_49;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
      t = term_m_21;
      t = n_0(t);
      s_50 = t;
      t = term_u_34;
      t_50 = t;
      t = term_x_34;
      u_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_34, term_x_34, s_50);
      t = l_8(t_50, u_50, s_50, t);
      _fail(t);
    }
  else
    {
      ATerm z_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_50 = ATgetFirst((ATermList) t);
          p_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_50 = ATgetFirst((ATermList) t);
          r_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_50;
      t = k_0(t);
      t = q_50;
      t = l_0(t);
      z_50 = t;
      t = (ATerm) ATinsert(CheckATermList(r_50), z_50);
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm b_51 = NULL;
  b_51 = t;
  if(match_string(t, "-I"))
    {
      t = b_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = b_51;
    }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  c_51 = t;
  t = term_o_24;
  d_51 = t;
  t = (ATerm) ATinsert(ATempty, c_51);
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_24, (ATerm) ATinsert(ATempty, c_51));
  t = u_7(d_51, e_51, t);
  t = c_51;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_f_35;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL;
  f_51 = t;
  t = term_n_26;
  g_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_26, f_51);
  t = n_8(g_51, f_51, t);
  t = f_51;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_g_35;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  t = term_q_12;
  i_51 = t;
  t = term_h_34;
  j_51 = t;
  t = term_i_34;
  t = n_8(i_51, j_51, t);
  t = h_51;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_h_35;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  k_51 = t;
  t = term_k_27;
  l_51 = t;
  t = term_g_13;
  m_51 = t;
  t = term_i_35;
  t = n_8(l_51, m_51, t);
  t = k_51;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(g_10, h_10, l_10, t);
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      {
        ATerm l_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_10, n_10, o_10, t);
            LocalPopChoice(p_35);
          }
        else
          {
            t = l_35;
            {
              ATerm q_35 = t;
              int r_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_10, u_10, v_10, t);
                  LocalPopChoice(r_35);
                }
              else
                {
                  t = q_35;
                  t = Option_3_0(x_10, y_10, a_11, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_21;
  t = whoami_0_0(t);
  n_51 = t;
  t = term_q_20;
  p_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_35), n_51);
  q_51 = t;
  t = SSL_printnl(p_51, q_51);
  t = term_g_13;
  o_51 = t;
  t = SSL_exit(o_51);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL;
  t = term_y_12;
  r_51 = t;
  t = term_t_35;
  s_51 = t;
  t = term_x_35;
  t = k_8(r_51, s_51, t);
  return(t);
}
static ATerm h_8 (ATerm t_41, ATerm u_41, ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_41, u_41);
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
      t = SSL_addr(t_41, u_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  u_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_51;
      t = g_94(t);
    }
  else
    {
      ATerm z_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_51 = ATgetFirst((ATermList) t);
          w_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_51;
      t = foldr_2_0(g_94, h_94, t);
      z_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_51, z_51);
      t = h_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_h_34;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(x_20, y_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_52 = NULL,t_20 = NULL,u_20 = NULL;
  t = times_0_0(t);
  u_20 = t;
  t = SSL_explode_term(u_20);
  if(match_cons(t, sym__2))
    {
      ATerm a_36 = ATgetArgument(t, 0);
      t_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_20;
  t = foldr_2_0(e_11, h_11, t);
  c_52 = t;
  t = SSL_TicksToSeconds(c_52);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  n_52 = t;
  if(match_cons(t, sym__2))
    {
      o_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_52;
        if((o_52 != t))
          {
            _fail(t);
          }
        t = n_52;
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = (ATerm) ATmakeAppl(sym__2, o_52, p_52);
        {
          ATerm d_36 = t;
          int e_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_52, p_52);
              LocalPopChoice(e_36);
            }
          else
            {
              t = d_36;
              t = SSL_gtr(o_52, p_52);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_52, p_52);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm t_52 = NULL;
  t_52 = t;
  {
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
        t = term_y_12;
        w_52 = t;
        t = term_q_12;
        x_52 = t;
        t = term_z_12;
        t = k_8(w_52, x_52, t);
        v_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_52, term_g_13);
        t = geq_0_0(t);
        t = t_52;
        t = x_98(t);
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
        t = t_52;
      }
  }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,c_53 = NULL,d_53 = NULL;
  t = run_time_0_0(t);
  z_52 = t;
  t = term_m_21;
  t = whoami_0_0(t);
  a_53 = t;
  t = term_q_20;
  c_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_36), z_52), term_b_14), a_53);
  d_53 = t;
  t = SSL_printnl(c_53, d_53);
  t = (ATerm) ATmakeAppl(sym__2, term_q_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_36), z_52), term_b_14), a_53));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_34;
  e_53 = t;
  t = SSL_exit(e_53);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL;
  p_53 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_53;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_53 = ATgetArgument(t, 0);
          {
            ATerm l_21 = NULL,i_6 = NULL;
            t = SSLgetAnnotations(p_53);
            l_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_53);
            i_6 = t;
            t = SSLsetAnnotations(i_6, l_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_53;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_103 (ATerm), ATerm t)
{
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_53 = NULL,i_53 = NULL;
      t = term_y_12;
      h_53 = t;
      t = term_l_36;
      i_53 = t;
      t = term_m_36;
      t = k_8(h_53, i_53, t);
      LocalPopChoice(j_36);
    }
  else
    {
      t = i_36;
      t = fetch_1_0(l_11, t);
    }
  t = b_103(t);
  return(t);
}
ATerm map_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  static ATerm f_54 (ATerm t)
  {
    ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
    c_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_54;
      }
    else
      {
        ATerm c_22 = NULL,o_22 = NULL,t_22 = NULL,k_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_54 = ATgetFirst((ATermList) t);
            e_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_54);
        c_22 = t;
        t = d_54;
        t = e_87(t);
        o_22 = t;
        t = e_54;
        t = f_54(t);
        t_22 = t;
        t = (ATerm) ATinsert(CheckATermList(t_22), o_22);
        k_6 = t;
        t = SSLsetAnnotations(k_6, c_22);
      }
    return(t);
  }
  t = f_54(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_54 = ATgetFirst((ATermList) t);
      j_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_54 = NULL,o_54 = NULL;
        static ATerm m_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_54)), not_null(o_54));
          return(t);
        }
        t = j_54;
        t = i_0(t);
        if(((n_54 != NULL) && (n_54 != t)))
          _fail(t);
        else
          n_54 = t;
        t = i_54;
        t = g_0(t);
        if(((o_54 != NULL) && (o_54 != t)))
          _fail(t);
        else
          o_54 = t;
        t = j_54;
        t = reverse_acc_2_0(g_0, m_11, t);
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
static ATerm n_11 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,m_6 = NULL;
  w_54 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_54);
  u_54 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_54);
  m_6 = t;
  t = SSLsetAnnotations(m_6, u_54);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm y_54 = NULL;
  y_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_54), term_n_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL;
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_54 = NULL,t_54 = NULL;
      t = term_y_12;
      s_54 = t;
      t = term_t_35;
      t_54 = t;
      t = term_x_35;
      t = k_8(s_54, t_54, t);
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      t = fetch_1_0(n_11, t);
    }
  t = term_s_36;
  t = echo_0_0(t);
  t = term_u_34;
  q_54 = t;
  t = term_x_34;
  r_54 = t;
  t = term_t_36;
  t = k_8(q_54, r_54, t);
  t = reverse_acc_2_0(_id, o_11, t);
  t = map_1_0(p_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  static ATerm v_55 (ATerm t)
  {
    ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
    s_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_55 = ATgetFirst((ATermList) t);
        u_55 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_36 = t;
      int w_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_23 = NULL,n_23 = NULL,r_6 = NULL;
          t = SSLgetAnnotations(s_55);
          e_23 = t;
          t = t_55;
          t = o_87(t);
          n_23 = t;
          t = (ATerm) ATinsert(CheckATermList(u_55), n_23);
          r_6 = t;
          t = SSLsetAnnotations(r_6, e_23);
          LocalPopChoice(w_36);
        }
      else
        {
          t = u_36;
          {
            ATerm f_24 = NULL,i_24 = NULL,t_6 = NULL;
            t = SSLgetAnnotations(s_55);
            f_24 = t;
            t = u_55;
            t = v_55(t);
            i_24 = t;
            t = (ATerm) ATinsert(CheckATermList(i_24), t_55);
            t_6 = t;
            t = SSLsetAnnotations(t_6, f_24);
          }
        }
    }
    return(t);
  }
  t = v_55(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
  z_55 = t;
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_55;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_37 = ATgetFirst((ATermList) t);
                ATerm e_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_55;
          }
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        t = (ATerm) ATinsert(ATempty, z_55);
      }
  }
  a_56 = t;
  t = term_y_23;
  b_56 = t;
  t = SSL_printnl(b_56, a_56);
  t = z_55;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL;
  t = term_y_12;
  f_56 = t;
  t = term_t_35;
  g_56 = t;
  t = term_x_35;
  t = k_8(f_56, g_56, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_8 (ATerm l_46, ATerm m_46, ATerm t)
{
  t = SSL_table_get(l_46, m_46);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL;
  t = term_f_37;
  h_56 = t;
  t = term_m_21;
  i_56 = t;
  t = term_g_37;
  t = n_8(h_56, i_56, t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_h_37;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL;
  t = term_f_37;
  l_56 = t;
  t = term_m_21;
  m_56 = t;
  t = term_g_37;
  t = n_8(l_56, m_56, t);
  t = term_i_27;
  j_56 = t;
  t = term_m_21;
  k_56 = t;
  t = term_i_37;
  t = n_8(j_56, k_56, t);
  t = term_j_37;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_m_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_11, r_11, s_11, t);
      LocalPopChoice(u_37);
    }
  else
    {
      t = n_37;
      t = Option_3_0(u_11, v_11, w_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,z_8 = NULL;
  s_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_56 = ATgetFirst((ATermList) t);
      p_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_56);
  n_56 = t;
  t = o_56;
  t = n_66(t);
  q_56 = t;
  t = p_56;
  t = o_66(t);
  r_56 = t;
  t = (ATerm) ATinsert(CheckATermList(r_56), q_56);
  z_8 = t;
  t = SSLsetAnnotations(z_8, n_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,c_57 = NULL,d_57 = NULL,b_9 = NULL;
  x_56 = t;
  {
    ATerm v_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_37;
        t = z_104(t);
        LocalPopChoice(x_37);
      }
    else
      {
        t = v_37;
      }
  }
  t = x_56;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_56 = ATgetFirst((ATermList) t);
      a_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_56);
  y_56 = t;
  t = term_t_35;
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, z_56);
  t = n_8(d_57, z_56, t);
  t = a_57;
  {
    static ATerm n_57 (ATerm t)
    {
      ATerm f_38 = t;
      int g_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_38 = t;
          int i_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_57 = NULL;
              g_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_57;
              LocalPopChoice(i_38);
            }
          else
            {
              t = h_38;
              t = z_104(t);
              t = Cons_2_0(_id, n_57, t);
            }
          LocalPopChoice(g_38);
        }
      else
        {
          t = f_38;
          {
            ATerm j_57 = NULL,k_57 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_57 = ATgetFirst((ATermList) t);
                k_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_57), (ATerm) ATmakeAppl(sym_Undefined_1, j_57));
          }
        }
      return(t);
    }
    t = n_57(t);
  }
  c_57 = t;
  t = (ATerm) ATinsert(CheckATermList(c_57), (ATerm) ATmakeAppl(sym_Program_1, z_56));
  b_9 = t;
  t = SSLsetAnnotations(b_9, y_56);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm z_57 = NULL;
  z_57 = t;
  if(match_string(t, "--help"))
    {
      t = z_57;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_57;
        }
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  t = term_l_36;
  a_58 = t;
  t = term_m_21;
  b_58 = t;
  t = term_j_38;
  t = n_8(a_58, b_58, t);
  t = term_k_38;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
  u_57 = t;
  t = term_u_34;
  w_57 = t;
  t = term_x_34;
  x_57 = t;
  t = (ATerm) ATempty;
  y_57 = t;
  t = SSL_table_put(w_57, x_57, y_57);
  t = u_57;
  {
    static ATerm x_11 (ATerm t)
    {
      ATerm m_38 = t;
      int n_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_104(t);
          LocalPopChoice(n_38);
        }
      else
        {
          t = m_38;
          {
            ATerm o_38 = t;
            int q_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_11, a_12, b_12, t);
                LocalPopChoice(q_38);
              }
            else
              {
                t = o_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_11, t);
  }
  {
    ATerm t_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_58 = NULL;
        m_58 = t;
        {
          ATerm z_38 = t;
          int b_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_24 = NULL;
              t = m_58;
              {
                ATerm c_39 = t;
                int f_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_24 = NULL,a_25 = NULL;
                    t = term_y_12;
                    w_24 = t;
                    t = term_l_36;
                    a_25 = t;
                    t = term_m_36;
                    t = k_8(w_24, a_25, t);
                    LocalPopChoice(f_39);
                  }
                else
                  {
                    t = c_39;
                    t = fetch_1_0(c_12, t);
                  }
              }
              t = m_58;
              t = default_system_usage_0_0(t);
              t = term_h_34;
              v_24 = t;
              t = SSL_exit(v_24);
              LocalPopChoice(b_39);
            }
          else
            {
              t = z_38;
              {
                ATerm h_25 = NULL,i_25 = NULL,k_25 = NULL;
                t = term_y_12;
                i_25 = t;
                t = term_f_37;
                k_25 = t;
                t = term_g_39;
                t = k_8(i_25, k_25, t);
                t = m_58;
                t = default_system_about_0_0(t);
                t = term_h_34;
                h_25 = t;
                t = SSL_exit(h_25);
              }
            }
        }
        LocalPopChoice(y_38);
      }
    else
      {
        t = t_38;
        {
          ATerm h_39 = t;
          int i_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
              static ATerm d_12 (ATerm t)
              {
                ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,d_9 = NULL;
                s_58 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_58 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_58);
                q_58 = t;
                t = r_58;
                if(((s_57 != NULL) && (s_57 != t)))
                  _fail(t);
                else
                  s_57 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_58);
                d_9 = t;
                t = SSLsetAnnotations(d_9, q_58);
                return(t);
              }
              t = fetch_1_0(d_12, t);
              t = term_q_20;
              o_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_57)), term_k_39);
              p_58 = t;
              t = SSL_printnl(o_58, p_58);
              t = (ATerm) ATmakeAppl(sym__2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_57)), term_k_39));
              t = default_system_usage_0_0(t);
              t = term_g_13;
              n_58 = t;
              t = SSL_exit(n_58);
              LocalPopChoice(i_39);
            }
          else
            {
              t = h_39;
            }
        }
      }
  }
  t_57 = t;
  t = term_u_34;
  v_57 = t;
  t = SSL_table_destroy(v_57);
  t = t_57;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL;
  t = parse_options_1_0(d_103, t);
  x_58 = t;
  t = term_l_39;
  a_59 = t;
  t = SSL_table_create(a_59);
  t = term_l_39;
  y_58 = t;
  t = term_m_39;
  z_58 = t;
  t = SSL_table_put(y_58, z_58, x_58);
  t = x_58;
  t = f_103(t);
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_103, t);
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
        {
          ATerm z_39 = t;
          int a_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_40);
            }
          else
            {
              t = z_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm f_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      LocalPopChoice(g_40);
    }
  else
    {
      t = f_40;
      {
        ATerm h_40 = t;
        int j_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(j_40);
          }
        else
          {
            t = h_40;
            {
              ATerm k_40 = t;
              int m_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(m_40);
                }
              else
                {
                  t = k_40;
                  {
                    ATerm n_40 = t;
                    int w_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(g_12, h_12, k_12, t);
                        LocalPopChoice(w_40);
                      }
                    else
                      {
                        t = n_40;
                        {
                          ATerm x_40 = t;
                          int z_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(z_40);
                            }
                          else
                            {
                              t = x_40;
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
static ATerm f_12 (ATerm t)
{
  t = xtc_io_1_0(l_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL;
  t = term_p_27;
  c_59 = t;
  t = term_m_21;
  d_59 = t;
  t = term_c_41;
  t = n_8(c_59, d_59, t);
  t = term_d_41;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_e_41;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL;
  f_59 = t;
  t = term_i_41;
  t = xtc_find_path_0_0(t);
  g_59 = t;
  t = term_o_24;
  h_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_59), term_j_41);
  i_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, g_59), term_j_41));
  t = u_7(h_59, i_59, t);
  t = f_59;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(e_12, default_usage_0_0, _id, f_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
