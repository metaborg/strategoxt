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
ATerm term_q_41;
ATerm term_p_41;
ATerm term_k_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_n_39;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_j_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_q_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_i_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_t_34;
ATerm term_r_34;
ATerm term_n_34;
ATerm term_i_34;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_s_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_c_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_a_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_j_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_j_24;
ATerm term_d_24;
ATerm term_x_23;
ATerm term_s_23;
ATerm term_o_23;
ATerm term_f_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_i_21;
ATerm term_f_21;
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
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
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
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
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
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_m_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_s_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_w_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_b_13, term_b_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_r_14, term_s_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_z_14);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_m_15, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_s_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_a_16, term_b_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_m_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_p_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_x_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_f_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_18, term_k_18, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_o_18, term_s_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_w_18, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_b_19, term_d_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_h_19, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_q_19, term_r_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_v_19, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_a_20);
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
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" ** Warning: Mismatch between basename of input file (", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol(") and module name (", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol(") specified", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_s_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_e_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_e_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_y_27);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_t_31);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_z_31);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_m_31);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_i_21);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_u_21);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_v_21);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_f_23);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_23);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_t_21);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym__2, term_y_27, term_b_13);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_g_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_a_37);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym__2, term_j_35, term_k_35);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_q_37, term_t_21);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_t_21);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym__2, term_a_37, term_t_21);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_q_37);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym__2, term_g_28, term_t_21);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm o_7 (ATerm z_41, ATerm a_42, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm p_7 (ATerm r_25, ATerm s_25, ATerm t);
static ATerm q_7 (ATerm p_82 (ATerm), ATerm u_196, ATerm b_26, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t);
static ATerm r_7 (ATerm j_22, ATerm k_22, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm e_81 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm a_102 (ATerm), ATerm t);
static ATerm t_7 (ATerm p_97 (ATerm), ATerm h_43, ATerm f_43, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm e_88 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm check_module_name_0_1 (ATerm t_0 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm verbosity_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm q_100 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm b_100 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm a_99 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm v_7 (ATerm q_22, ATerm p_22, ATerm t);
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
static ATerm w_7 (ATerm d_47, ATerm r_475, ATerm t);
ATerm find_in_includes_1_0 (ATerm y_79 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm z_98 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm r_87 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm basename_1_0 (ATerm o_100 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm w_87 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_30 (ATerm u_29, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm x_7 (ATerm a_47, ATerm z_46, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm debug_1_0 (ATerm n_82 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm c_99 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm b_99 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm d_99 (ATerm), ATerm t);
static ATerm z_7 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm f_33, ATerm e_33, ATerm t);
static ATerm a_8 (ATerm q_91 (ATerm), ATerm b_33, ATerm a_33, ATerm t);
static ATerm k_6 (ATerm t);
static ATerm b_8 (ATerm r_45, ATerm s_45, ATerm t_45, ATerm t);
static ATerm c_8 (ATerm f_99 (ATerm), ATerm b_46, ATerm a_46, ATerm t);
static ATerm h_8 (ATerm x_47, ATerm y_47, ATerm t);
static ATerm r_37 (ATerm j_37, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_8 (ATerm x_25, ATerm t);
static ATerm e_8 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm f_8 (ATerm g_48, ATerm h_48, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_39 (ATerm d_38, ATerm t);
static ATerm s_39 (ATerm h_38, ATerm i_38, ATerm k_38, ATerm t);
static ATerm t_39 (ATerm a_39, ATerm b_39, ATerm c_39, ATerm t);
static ATerm g_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_95 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm m_45 (ATerm j_44, ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm i_8 (ATerm r_22, ATerm s_22, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm j_8 (ATerm z_44, ATerm a_45, ATerm t);
ATerm end_scope_1_0 (ATerm m_97 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm l_97 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm m_101 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
ATerm xtc_io_1_0 (ATerm n_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_8 (ATerm u_46, ATerm v_46, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm o_8 (ATerm u_44, ATerm v_44, ATerm t_44, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_8 (ATerm t_41, ATerm u_41, ATerm t);
ATerm foldr_2_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_98 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_11 (ATerm t);
ATerm need_help_1_0 (ATerm c_103 (ATerm), ATerm t);
ATerm map_1_0 (ATerm f_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_8 (ATerm l_46, ATerm m_46, ATerm t);
static ATerm r_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_105 (ATerm), ATerm t);
static ATerm e_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
ATerm parse_options_1_0 (ATerm z_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm t);
static ATerm m_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
ATerm parse_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm o_7 (ATerm z_41, ATerm a_42, ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_41, a_42);
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      t = SSL_subtr(z_41, a_42);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,q_0 = NULL,s_0 = NULL;
  t = term_w_12;
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL,w_0 = NULL;
        t = term_z_12;
        u_0 = t;
        t = term_w_12;
        w_0 = t;
        t = term_a_13;
        t = n_8(u_0, w_0, t);
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = term_b_13;
      }
  }
  b_0 = t;
  t = term_b_13;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_b_13);
  t = o_7(b_0, s_0, t);
  q_0 = t;
  t = SSL_int_to_string(q_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_w_12);
  return(t);
}
static ATerm p_7 (ATerm r_25, ATerm s_25, ATerm t)
{
  ATerm b_1 = NULL;
  t = SSL_write_term_to_stream_baf(r_25, s_25);
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_1);
  return(t);
}
static ATerm q_7 (ATerm p_82 (ATerm), ATerm u_196, ATerm b_26, ATerm t)
{
  ATerm c_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_196, term_c_13);
  t = g_8(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, b_26);
  t = p_82(t);
  t = fclose_0_0(t);
  t = b_26;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_13 = ATgetArgument(t, 0);
      if(match_cons(d_13, sym_Stream_1))
        {
          i_1 = ATgetArgument(d_13, 0);
        }
      else
        _fail(t);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(i_1, j_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  h_1 = t;
  t = xtc_new_file_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
  t = q_7(f_0, g_1, h_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_1);
  t = xtc_transform_file_2_0(z_100, a_101, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm r_7 (ATerm j_22, ATerm k_22, ATerm t)
{
  t = SSL_execvp(j_22, k_22);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm m_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  m_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      p_2 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(p_2);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_13), m_0), term_e_13);
        y_0 = t;
        t = SSL_concat_strings(y_0);
      }
    }
  else
    {
      ATerm p_1 = NULL,r_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          p_2 = ATgetArgument(t, 0);
          q_2 = ATgetArgument(t, 1);
          r_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_2);
      p_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_2), term_j_13), p_1), term_i_13), p_2);
      r_1 = t;
      t = SSL_concat_strings(r_1);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  {
    ATerm k_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_13 = ATgetArgument(t, 0);
              if((v_2 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_20), term_g_20), term_c_20), term_x_19), term_t_19), term_n_19), term_j_19), term_f_19), term_z_18), term_t_18), term_m_18), term_i_18), term_y_17), term_q_17), term_k_17), term_e_17), term_a_17), term_w_16), term_r_16), term_n_16), term_j_16), term_d_16), term_x_15), term_p_15), term_j_15), term_d_15), term_t_14), term_d_14);
        t = fetch_elem_1_0(h_0, t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = k_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, v_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm a_3 = NULL,i_3 = NULL;
  a_3 = t;
  {
    ATerm l_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            i_3 = ATgetArgument(t, 1);
            {
              ATerm q_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_20);
        {
          ATerm r_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_2 = NULL,l_2 = NULL,n_2 = NULL;
              t = i_3;
              {
                ATerm t_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              h_2 = t;
              t = term_w_20;
              l_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, h_2), term_x_20);
              n_2 = t;
              t = SSL_printnl(l_2, n_2);
              t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, h_2), term_x_20));
              LocalPopChoice(s_20);
            }
          else
            {
              t = r_20;
              t = a_3;
            }
        }
      }
    else
      {
        t = l_20;
        t = a_3;
      }
  }
  t = a_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  y_3 = t;
  t = fork_0_0(t);
  x_3 = t;
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = y_3;
        t = e_81(t);
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        t = SSL_waitpid(x_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_21 = ATgetArgument(t, 0);
            if(((ATgetType(c_21) != AT_INT) || (ATgetInt((ATermInt) c_21) != 0)))
              _fail(t);
            {
              ATerm d_21 = ATgetArgument(t, 1);
            }
            {
              ATerm e_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = y_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm a_102 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  b_4 = t;
  t = a_102(t);
  t = xtc_find_0_0(t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_4, b_4);
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm r_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, a_4, b_4);
      t = r_7(a_4, b_4, t);
      t = term_f_21;
      r_4 = t;
      t = SSL_exit(r_4);
      return(t);
    }
    t = fork_and_wait_1_0(j_0, t);
  }
  t = b_4;
  return(t);
}
static ATerm t_7 (ATerm p_97 (ATerm), ATerm h_43, ATerm f_43, ATerm t)
{
  ATerm t_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,c_5 = NULL;
  z_4 = t;
  t = p_97(t);
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_4, h_43, f_43);
  t = o_8(t_4, h_43, f_43, t);
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL;
        t = term_i_21;
        e_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_4, term_i_21);
        t = n_8(t_4, e_5, t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_4 = ATgetFirst((ATermList) t);
      y_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_21;
  a_5 = t;
  t = (ATerm) ATinsert(CheckATermList(y_4), (ATerm) ATinsert(CheckATermList(x_4), h_43));
  c_5 = t;
  t = SSL_table_put(t_4, a_5, c_5);
  t = z_4;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm i_5 = NULL;
  ATerm j_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_5 = NULL,x_2 = NULL;
      o_5 = t;
      t = term_o_21;
      x_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_5, term_o_21);
      t = e_8(o_5, x_2, t);
      i_5 = t;
      t = SSL_mkstemp(i_5);
      LocalPopChoice(n_21);
    }
  else
    {
      t = j_21;
      {
        ATerm p_5 = NULL;
        t = term_p_21;
        p_5 = t;
        t = SSL_perror(p_5);
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
static ATerm z_0 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,x_5 = NULL;
  t = P__tmpdir_0_0(t);
  v_5 = t;
  t = term_s_21;
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_5, term_s_21);
  t = e_8(v_5, x_5, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_21;
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_5, term_t_21);
  t = t_7(z_0, t_5, u_5, t);
  t = SSL_close(s_5);
  t = t_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL;
  a_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_6 = NULL,d_6 = NULL;
      t = a_6;
      t = xtc_new_file_0_0(t);
      c_6 = t;
      t = x_0(t);
      d_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_6, (ATerm) ATinsert(ATinsert(ATempty, c_6), term_u_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_6);
    }
  else
    {
      ATerm f_6 = NULL,g_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_6;
      t = xtc_new_file_0_0(t);
      f_6 = t;
      t = x_0(t);
      g_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_6), term_u_21), b_6), term_v_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_6);
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  static ATerm c_7 (ATerm t)
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL,y_6 = NULL,b_7 = NULL,l_3 = NULL,s_3 = NULL,n_1 = NULL;
        x_6 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_6 = ATgetFirst((ATermList) t);
            b_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_6);
        l_3 = t;
        t = b_7;
        t = c_7(t);
        s_3 = t;
        t = (ATerm) ATinsert(CheckATermList(s_3), y_6);
        n_1 = t;
        t = SSLsetAnnotations(n_1, l_3);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = e_88(t);
      }
    return(t);
  }
  t = c_7(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm h_7 = NULL,j_7 = NULL,s_7 = NULL;
  s_7 = t;
  t = SSL_explode_string(s_7);
  {
    ATerm y_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_1 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_22 = ATgetFirst((ATermList) t);
              if(((ATgetType(b_22) != AT_INT) || (ATgetInt((ATermInt) b_22) != 47)))
                _fail(t);
              if(((h_7 != NULL) && (h_7 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                h_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(a_1, t);
        t = not_null(h_7);
        LocalPopChoice(a_22);
      }
    else
      {
        t = y_21;
      }
  }
  j_7 = t;
  t = SSL_implode_string(j_7);
  return(t);
}
ATerm check_module_name_0_1 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  s_9 = t;
  {
    ATerm c_22 = t;
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
        t = s_9;
      }
    else
      {
        t = c_22;
        if(match_cons(t, sym_Module_2))
          {
            t_9 = ATgetArgument(t, 0);
            {
              ATerm f_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = s_9;
        {
          ATerm g_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_4 = NULL;
              t = t_0;
              t = get_filename_0_0(t);
              m_4 = t;
              if((t_9 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym__2, m_4, m_4);
              LocalPopChoice(i_22);
            }
          else
            {
              t = g_22;
              {
                ATerm h_5 = NULL,j_5 = NULL,m_5 = NULL,q_5 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_22), t_9), term_o_22), t_0), term_l_22);
                q_5 = t;
                t = SSL_concat_strings(q_5);
                h_5 = t;
                t = term_w_20;
                j_5 = t;
                t = (ATerm) ATinsert(ATempty, h_5);
                m_5 = t;
                t = SSL_printnl(j_5, m_5);
                t = s_9;
              }
            }
        }
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_10 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_22;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm i_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_23);
      i_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_10, (ATerm) ATinsert(ATempty, term_a_23));
      t = h_8(f_10, i_10, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm verbosity_0_0 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_10 = NULL,l_10 = NULL;
      t = term_z_12;
      k_10 = t;
      t = term_w_12;
      l_10 = t;
      t = term_a_13;
      t = n_8(k_10, l_10, t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      t = term_f_23;
    }
  return(t);
}
ATerm if_not_silent_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm g_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_10 = NULL;
          s_10 = t;
          t = verbosity_0_0(t);
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
            _fail(t);
          t = s_10;
          LocalPopChoice(k_23);
        }
      else
        {
          t = j_23;
          t = r_0(t);
        }
      LocalPopChoice(i_23);
    }
  else
    {
      t = g_23;
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
            t_10 = t;
            t = term_z_12;
            u_10 = t;
            t = term_w_12;
            v_10 = t;
            t = term_a_13;
            t = n_8(u_10, v_10, t);
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
              _fail(t);
            t = t_10;
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            t = r_0(t);
          }
      }
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  t = basename_1_0(_id, t);
  e_11 = t;
  t = term_t_21;
  t = q_100(t);
  d_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_11), term_o_23), e_11);
  c_11 = t;
  t = SSL_concat_strings(c_11);
  return(t);
}
ATerm if_keep1_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm h_11 = NULL;
  h_11 = t;
  {
    ATerm p_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_11 = NULL,l_11 = NULL,m_11 = NULL;
        t = term_z_12;
        l_11 = t;
        t = term_s_23;
        m_11 = t;
        t = term_x_23;
        t = n_8(l_11, m_11, t);
        j_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_11, term_b_13);
        t = geq_0_0(t);
        t = h_11;
        t = b_100(t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = p_23;
        t = h_11;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm q_11 = NULL;
  q_11 = t;
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL,t_11 = NULL,v_11 = NULL;
        t = term_z_12;
        t_11 = t;
        t = term_w_12;
        v_11 = t;
        t = term_a_13;
        t = n_8(t_11, v_11, t);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, term_w_14);
        t = geq_0_0(t);
        t = q_11;
        t = a_99(t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = q_11;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm g_12 = NULL;
  if(match_cons(t, sym_TopSort_1))
    {
      g_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12;
  return(t);
}
ATerm pass_sort_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL,d_12 = NULL,f_12 = NULL;
      t = get_meta_0_0(t);
      if(match_cons(t, sym_Meta_1))
        {
          f_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_12;
      t = fetch_elem_1_0(d_1, t);
      d_12 = t;
      t = SSL_is_string(d_12);
      z_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, z_11), term_d_24);
      LocalPopChoice(c_24);
    }
  else
    {
      t = a_24;
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
static ATerm v_7 (ATerm q_22, ATerm p_22, ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(q_22, p_22);
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = get_errno_0_0(t);
      t = term_t_21;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, q_22, p_22);
      t = i_8(q_22, p_22, t);
      t = SSL_remove(q_22);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL;
  f_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_6 = NULL;
        t = f_13;
        t = p_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_j_24;
        q_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_13, term_j_24);
        t = i_8(g_13, q_6, t);
        t = SSL_remove(g_13);
        t = term_j_24;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          ATerm m_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_7 = NULL;
              t = f_13;
              t = p_0(t);
              d_7 = t;
              {
                ATerm q_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_7 = NULL;
                    e_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = e_7;
                      }
                    else
                      {
                        t = e_7;
                        if((g_13 != t))
                          {
                            _fail(t);
                          }
                        t = e_7;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, g_13, d_7);
              t = v_7(g_13, d_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_7);
              LocalPopChoice(o_24);
            }
          else
            {
              t = m_24;
              t = f_13;
              t = p_0(t);
              if((g_13 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_13);
            }
        }
      }
  }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = debug_1_0(f_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_s_24;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_t_24;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  t = term_w_20;
  v_13 = t;
  t = (ATerm) ATinsert(ATempty, term_u_24);
  w_13 = t;
  t = SSL_printnl(v_13, w_13);
  t = u_13;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_c_25;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  t = term_z_12;
  z_13 = t;
  t = term_e_25;
  a_14 = t;
  t = term_g_25;
  t = n_8(z_13, a_14, t);
  t = map_1_0(u_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_14), term_e_25);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  t = term_z_12;
  e_14 = t;
  t = term_e_25;
  f_14 = t;
  t = term_g_25;
  t = n_8(e_14, f_14, t);
  t = map_1_0(a_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_14), term_e_25);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm l_13 = NULL,o_13 = NULL;
  t = if_verbose6_1_0(e_1, t);
  o_13 = t;
  t = guarantee_extension_1_0(k_1, t);
  l_13 = t;
  t = o_13;
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_13 = NULL;
        t = l_13;
        t = find_in_includes_1_0(l_1, t);
        p_13 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_13);
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        {
          ATerm t_13 = NULL;
          static ATerm b_2 (ATerm t)
          {
            t = l_13;
            return(t);
          }
          t = if_verbose2_1_0(m_1, t);
          t = guarantee_extension_1_0(o_1, t);
          t_13 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, t_13);
          {
            ATerm p_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_13 = NULL,y_13 = NULL,t_1 = NULL;
                y_13 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm t_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_13);
                x_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, t_13);
                t_1 = t;
                t = SSLsetAnnotations(t_1, x_13);
                LocalPopChoice(q_25);
                t = xtc_transform_file_2_0(q_1, s_1, t);
              }
            else
              {
                t = p_25;
                t = xtc_transform_term_2_0(w_1, x_1, t);
              }
          }
          t = rename_to_1_0(b_2, t);
        }
      }
  }
  return(t);
}
static ATerm w_7 (ATerm d_47, ATerm r_475, ATerm t)
{
  static ATerm c_2 (ATerm t)
  {
    ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
    h_14 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_47), term_u_25), h_14);
    k_14 = t;
    t = SSL_concat_strings(k_14);
    i_14 = t;
    t = (ATerm) ATinsert(ATempty, term_a_23);
    j_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_14, (ATerm) ATinsert(ATempty, term_a_23));
    t = h_8(i_14, j_14, t);
    return(t);
  }
  t = r_475;
  t = fetch_elem_1_0(c_2, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  static ATerm d_2 (ATerm t)
  {
    t = debug_1_0(y_79, t);
    return(t);
  }
  n_14 = t;
  t = term_z_12;
  o_14 = t;
  t = term_e_25;
  p_14 = t;
  t = term_g_25;
  t = n_8(o_14, p_14, t);
  l_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_14, l_14);
  t = w_7(n_14, l_14, t);
  t = if_verbose2_1_0(d_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_v_25;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_w_25;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,f_15 = NULL;
  b_15 = t;
  t = term_w_20;
  c_15 = t;
  t = (ATerm) ATinsert(ATempty, term_z_25);
  f_15 = t;
  t = SSL_printnl(c_15, f_15);
  t = b_15;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_a_26;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_a_26;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = debug_1_0(h_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm u_14 = NULL,x_14 = NULL;
  t = if_verbose6_1_0(g_2, t);
  u_14 = t;
  t = guarantee_extension_1_0(k_2, t);
  x_14 = t;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_15 = NULL;
        t = find_in_includes_1_0(o_2, t);
        a_15 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_15);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          static ATerm z_2 (ATerm t)
          {
            t = x_14;
            return(t);
          }
          t = if_verbose2_1_0(s_2, t);
          t = u_14;
          t = get_syntax_definition_0_0(t);
          {
            ATerm g_26 = t;
            int h_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_15 = NULL,n_15 = NULL;
                n_15 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    l_15 = ATgetArgument(t, 0);
                    {
                      ATerm m_7 = NULL,v_1 = NULL;
                      t = SSLgetAnnotations(n_15);
                      m_7 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, l_15);
                      v_1 = t;
                      t = SSLsetAnnotations(v_1, m_7);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = n_15;
                  }
                LocalPopChoice(h_26);
                {
                  static ATerm u_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, u_14), term_j_26);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(t_2, u_2, t);
                }
              }
            else
              {
                t = g_26;
                {
                  static ATerm y_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, u_14), term_j_26);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(w_2, y_2, t);
                }
              }
          }
          t = rename_to_1_0(z_2, t);
        }
      }
  }
  t = if_verbose6_1_0(g_3, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm r_15 = NULL;
  r_15 = t;
  {
    ATerm l_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
        t = term_z_12;
        u_15 = t;
        t = term_w_12;
        v_15 = t;
        t = term_a_13;
        t = n_8(u_15, v_15, t);
        t_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_15, term_r_14);
        t = geq_0_0(t);
        t = r_15;
        t = z_98(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = l_26;
        t = r_15;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm z_15 = NULL;
  static ATerm j_3 (ATerm t)
  {
    t = r_87(t);
    if(((z_15 != NULL) && (z_15 != t)))
      _fail(t);
    else
      z_15 = t;
    return(t);
  }
  t = fetch_1_0(j_3, t);
  t = not_null(z_15);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_r_26;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_s_26;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_v_26;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = debug_1_0(q_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm e_16 = NULL,f_17 = NULL,g_17 = NULL;
  t = if_verbose6_1_0(k_3, t);
  f_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL,v_8 = NULL,y_1 = NULL;
        t = SSLgetAnnotations(f_17);
        t_8 = t;
        t = g_17;
        t = guarantee_extension_1_0(n_3, t);
        v_8 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_8);
        y_1 = t;
        t = SSLsetAnnotations(y_1, t_8);
        t = read_from_0_0(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        {
          ATerm h_9 = NULL,i_9 = NULL,n_9 = NULL,z_1 = NULL;
          t = SSLgetAnnotations(f_17);
          i_9 = t;
          t = g_17;
          t = guarantee_extension_1_0(o_3, t);
          n_9 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_9);
          z_1 = t;
          t = SSLsetAnnotations(z_1, i_9);
          t = read_from_0_0(t);
          h_9 = t;
          t = SSL_explode_term(h_9);
          if(match_cons(t, sym__2))
            {
              e_16 = ATgetArgument(t, 0);
              {
                ATerm y_26 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, e_16)));
        }
      }
  }
  t = if_verbose6_1_0(p_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = debug_1_0(t_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_z_26;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm g_18 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      g_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_18;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = debug_1_0(w_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm o_17 = NULL;
  t = if_verbose6_1_0(r_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_17 = NULL,t_17 = NULL;
        t = term_z_12;
        s_17 = t;
        t = term_e_27;
        t_17 = t;
        t = term_f_27;
        t = n_8(s_17, t_17, t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        {
          ATerm g_27 = t;
          int h_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm h_18 (ATerm u_17, ATerm t)
              {
                ATerm z_17 = NULL,a_18 = NULL;
                t = term_w_20;
                z_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_27), o_17), term_j_27), u_17), term_i_27);
                a_18 = t;
                t = SSL_printnl(z_17, a_18);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_27), o_17), term_j_27), u_17), term_i_27);
                _fail(t);
                return(t);
              }
              ATerm d_18 = NULL,e_18 = NULL;
              t = get_meta_0_0(t);
              e_18 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  d_18 = ATgetArgument(t, 0);
                  {
                    ATerm l_27 = t;
                    int m_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = d_18;
                        t = fetch_elem_1_0(u_3, t);
                        LocalPopChoice(m_27);
                      }
                    else
                      {
                        t = l_27;
                        t = h_18(e_18, t);
                      }
                  }
                }
              else
                {
                  t = h_18(e_18, t);
                }
              LocalPopChoice(h_27);
            }
          else
            {
              t = g_27;
              t = term_n_27;
            }
        }
      }
  }
  t = if_verbose2_1_0(v_3, t);
  return(t);
}
ATerm basename_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm r_18 = NULL,v_18 = NULL;
  v_18 = t;
  t = SSL_explode_string(v_18);
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_21 (ATerm t)
        {
          ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
          k_21 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_21 = ATgetFirst((ATermList) t);
              m_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm q_27 = t;
            int r_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_10 = NULL,g_10 = NULL,e_2 = NULL;
                t = SSLgetAnnotations(k_21);
                b_10 = t;
                t = m_21;
                t = r_21(t);
                g_10 = t;
                t = (ATerm) ATinsert(CheckATermList(g_10), l_21);
                e_2 = t;
                t = SSLsetAnnotations(e_2, b_10);
                LocalPopChoice(r_27);
              }
            else
              {
                t = q_27;
                {
                  ATerm s_27 = t;
                  int t_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_11 = NULL,f_2 = NULL;
                      t = SSLgetAnnotations(k_21);
                      a_11 = t;
                      t = l_21;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(m_21), l_21);
                      f_2 = t;
                      t = SSLsetAnnotations(f_2, a_11);
                      LocalPopChoice(t_27);
                    }
                  else
                    {
                      t = s_27;
                      {
                        ATerm b_12 = NULL,h_12 = NULL,i_2 = NULL;
                        t = SSLgetAnnotations(k_21);
                        b_12 = t;
                        t = l_21;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = m_21;
                        t = o_100(t);
                        h_12 = t;
                        t = (ATerm) ATinsert(CheckATermList(h_12), l_21);
                        i_2 = t;
                        t = SSLsetAnnotations(i_2, b_12);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = r_21(t);
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
      }
  }
  r_18 = t;
  t = SSL_implode_string(r_18);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = debug_1_0(c_4, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_u_27;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_v_27;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_w_27);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_v_27;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_w_27);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_x_27;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm n_24 = NULL,p_24 = NULL,w_24 = NULL;
  t = pass_verbose_0_0(t);
  p_24 = t;
  t = term_y_27;
  {
    ATerm b_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_24 = NULL,a_25 = NULL;
        t = term_z_12;
        x_24 = t;
        t = term_y_27;
        a_25 = t;
        t = term_e_28;
        t = n_8(x_24, a_25, t);
        LocalPopChoice(d_28);
        t = (ATerm) ATinsert(ATempty, term_f_28);
      }
    else
      {
        t = b_28;
        t = (ATerm) ATempty;
      }
  }
  w_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_24), p_24);
  t = concat_0_0(t);
  n_24 = t;
  t = (ATerm) ATinsert(CheckATermList(n_24), term_g_28);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_x_27;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm b_25 = NULL,f_25 = NULL,i_25 = NULL;
  t = pass_verbose_0_0(t);
  f_25 = t;
  t = term_y_27;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_25 = NULL,k_25 = NULL;
        t = term_z_12;
        j_25 = t;
        t = term_y_27;
        k_25 = t;
        t = term_e_28;
        t = n_8(j_25, k_25, t);
        LocalPopChoice(i_28);
        t = (ATerm) ATinsert(ATempty, term_f_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATempty;
      }
  }
  i_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_25), f_25);
  t = concat_0_0(t);
  b_25 = t;
  t = (ATerm) ATinsert(CheckATermList(b_25), term_g_28);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_j_28;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_k_28;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm i_26 = NULL,k_26 = NULL;
  t = pass_verbose_0_0(t);
  i_26 = t;
  t = term_y_27;
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL,n_26 = NULL;
        t = term_z_12;
        m_26 = t;
        t = term_y_27;
        n_26 = t;
        t = term_e_28;
        t = n_8(m_26, n_26, t);
        LocalPopChoice(m_28);
        t = (ATerm) ATinsert(ATempty, term_y_27);
      }
    else
      {
        t = l_28;
        t = (ATerm) ATempty;
      }
  }
  k_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_26), i_26);
  t = concat_0_0(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_k_28;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  t = pass_verbose_0_0(t);
  p_26 = t;
  t = term_y_27;
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_26 = NULL,u_26 = NULL;
        t = term_z_12;
        t_26 = t;
        t = term_y_27;
        u_26 = t;
        t = term_e_28;
        t = n_8(t_26, u_26, t);
        LocalPopChoice(o_28);
        t = (ATerm) ATinsert(ATempty, term_y_27);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATempty;
      }
  }
  q_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_26), p_26);
  t = concat_0_0(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,d_23 = NULL,e_23 = NULL,b_3 = NULL;
  t = if_verbose6_1_0(z_3, t);
  x_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_22);
  d_23 = t;
  t = e_23;
  t = basename_1_0(_id, t);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_22);
  b_3 = t;
  t = SSLsetAnnotations(b_3, d_23);
  t = x_22;
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_22;
  t = pass_sort_0_0(t);
  u_22 = t;
  t = x_22;
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_23 = ATgetArgument(t, 0);
            {
              ATerm n_12 = NULL,c_3 = NULL;
              t = SSLgetAnnotations(x_22);
              n_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_23);
              c_3 = t;
              t = SSLsetAnnotations(c_3, n_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_22;
          }
        LocalPopChoice(r_28);
        {
          static ATerm e_4 (ATerm t)
          {
            ATerm t_23 = NULL,u_23 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(f_4, t);
            u_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_23, u_22);
            t = conc_0_0(t);
            t_23 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_23), t_22), term_t_28), term_s_28);
            return(t);
          }
          t = xtc_transform_file_2_0(d_4, e_4, t);
        }
      }
    else
      {
        t = q_28;
        {
          static ATerm j_4 (ATerm t)
          {
            ATerm v_23 = NULL,w_23 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(k_4, t);
            w_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_23, u_22);
            t = conc_0_0(t);
            v_23 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_23), t_22), term_t_28), term_s_28);
            return(t);
          }
          t = xtc_transform_term_2_0(h_4, j_4, t);
        }
      }
  }
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_24 = NULL,l_24 = NULL;
        l_24 = t;
        if(match_cons(t, sym_FILE_1))
          {
            i_24 = ATgetArgument(t, 0);
            {
              ATerm v_12 = NULL,d_3 = NULL;
              t = SSLgetAnnotations(l_24);
              v_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_24);
              d_3 = t;
              t = SSLsetAnnotations(d_3, v_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_24;
          }
        LocalPopChoice(v_28);
        t = xtc_transform_file_2_0(l_4, o_4, t);
      }
    else
      {
        t = u_28;
        t = xtc_transform_term_2_0(p_4, s_4, t);
      }
  }
  {
    static ATerm v_4 (ATerm t)
    {
      static ATerm b_5 (ATerm t)
      {
        t = v_22;
        t = guarantee_extension_1_0(d_5, t);
        return(t);
      }
      t = copy_to_1_0(b_5, t);
      return(t);
    }
    t = if_keep1_1_0(v_4, t);
  }
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_26 = NULL,d_26 = NULL;
        d_26 = t;
        if(match_cons(t, sym_FILE_1))
          {
            c_26 = ATgetArgument(t, 0);
            {
              ATerm q_13 = NULL,e_3 = NULL;
              t = SSLgetAnnotations(d_26);
              q_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_26);
              e_3 = t;
              t = SSLsetAnnotations(e_3, q_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_26;
          }
        LocalPopChoice(x_28);
        t = xtc_transform_file_2_0(f_5, g_5, t);
      }
    else
      {
        t = w_28;
        t = xtc_transform_term_2_0(k_5, l_5, t);
      }
  }
  w_22 = t;
  {
    static ATerm r_5 (ATerm t)
    {
      t = read_from_0_0(t);
      t = check_module_name_0_1(v_22, t);
      return(t);
    }
    t = if_not_silent_1_0(r_5, t);
  }
  t = w_22;
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_27 = ATgetArgument(t, 0);
            {
              ATerm q_14 = NULL,f_3 = NULL;
              t = SSLgetAnnotations(w_22);
              q_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_27);
              f_3 = t;
              t = SSLsetAnnotations(f_3, q_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_22;
          }
        LocalPopChoice(z_28);
        t = xtc_transform_file_2_0(w_5, pass_verbose_0_0, t);
      }
    else
      {
        t = y_28;
        t = xtc_transform_term_2_0(y_5, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  static ATerm o_29 (ATerm t)
  {
    ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
    n_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_29 = ATgetFirst((ATermList) t);
        m_29 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_14 = NULL,e_15 = NULL,g_4 = NULL;
          t = SSLgetAnnotations(n_29);
          y_14 = t;
          t = m_29;
          t = o_29(t);
          e_15 = t;
          t = (ATerm) ATinsert(CheckATermList(e_15), l_29);
          g_4 = t;
          t = SSLsetAnnotations(g_4, y_14);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_29;
        t = w_87(t);
      }
    return(t);
  }
  t = o_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,c_28 = NULL;
  z_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_27;
    }
  else
    {
      static ATerm z_5 (ATerm t)
      {
        t = not_null(c_28);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_28 = ATgetFirst((ATermList) t);
          if(((c_28 != NULL) && (c_28 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_28;
      t = at_end_1_0(z_5, t);
    }
  return(t);
}
static ATerm j_30 (ATerm u_29, ATerm t)
{
  ATerm y_29 = NULL;
  t = SSL_explode_term(u_29);
  if(match_cons(t, sym__2))
    {
      ATerm a_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_29;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  e_30 = t;
  if(match_cons(t, sym__2))
    {
      c_30 = ATgetArgument(t, 0);
      d_30 = ATgetArgument(t, 1);
      {
        ATerm b_29 = t;
        int c_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_6 (ATerm t)
            {
              t = d_30;
              return(t);
            }
            t = c_30;
            t = at_end_1_0(e_6, t);
            LocalPopChoice(c_29);
          }
        else
          {
            t = b_29;
            t = j_30(e_30, t);
          }
      }
    }
  else
    {
      t = j_30(e_30, t);
    }
  return(t);
}
static ATerm x_7 (ATerm a_47, ATerm z_46, ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  t = a_47;
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_30 = NULL;
        t = term_z_12;
        y_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_12, a_47);
        t = n_8(y_30, a_47, t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        t = (ATerm) ATempty;
      }
  }
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_46, l_30);
  t = conc_0_0(t);
  k_30 = t;
  t = term_z_12;
  m_30 = t;
  t = SSL_table_put(m_30, a_47, k_30);
  t = (ATerm) ATmakeAppl(sym__3, term_z_12, a_47, k_30);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm d_31 = NULL,h_31 = NULL;
  h_31 = t;
  t = SSL_explode_string(h_31);
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_32 (ATerm t)
        {
          ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
          i_32 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_32 = ATgetFirst((ATermList) t);
              k_32 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm h_29 = t;
            int i_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_16 = NULL,h_16 = NULL,i_4 = NULL;
                t = SSLgetAnnotations(i_32);
                c_16 = t;
                t = k_32;
                t = l_32(t);
                h_16 = t;
                t = (ATerm) ATinsert(CheckATermList(h_16), j_32);
                i_4 = t;
                t = SSLsetAnnotations(i_4, c_16);
                LocalPopChoice(i_29);
              }
            else
              {
                t = h_29;
                {
                  ATerm u_16 = NULL,n_4 = NULL;
                  t = SSLgetAnnotations(i_32);
                  u_16 = t;
                  t = j_32;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, j_32);
                  n_4 = t;
                  t = SSLsetAnnotations(n_4, u_16);
                }
              }
          }
          return(t);
        }
        t = l_32(t);
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        t = (ATerm) ATempty;
      }
  }
  d_31 = t;
  t = SSL_implode_string(d_31);
  return(t);
}
ATerm debug_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  o_32 = t;
  t = n_82(t);
  p_32 = t;
  t = term_w_20;
  q_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_32), p_32);
  r_32 = t;
  t = SSL_printnl(q_32, r_32);
  t = o_32;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_32 = NULL;
  static ATerm h_6 (ATerm t)
  {
    ATerm v_32 = NULL,w_32 = NULL;
    v_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_32), v_32);
    t = n_8(not_null(t_32), v_32, t);
    w_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
    return(t);
  }
  if(((t_32 != NULL) && (t_32 != t)))
    _fail(t);
  else
    t_32 = t;
  t = SSL_table_keys(t_32);
  t = map_1_0(h_6, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_33 = NULL,k_33 = NULL,p_33 = NULL;
        t = term_z_12;
        k_33 = t;
        t = term_w_12;
        p_33 = t;
        t = term_a_13;
        t = n_8(k_33, p_33, t);
        d_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_33, term_v_19);
        t = geq_0_0(t);
        t = y_32;
        t = c_99(t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = y_32;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_33 = NULL,c_34 = NULL,e_34 = NULL;
        t = term_z_12;
        c_34 = t;
        t = term_w_12;
        e_34 = t;
        t = term_a_13;
        t = n_8(c_34, e_34, t);
        z_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_33, term_y_16);
        t = geq_0_0(t);
        t = u_33;
        t = b_99(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        t = u_33;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_34 = NULL,s_34 = NULL,u_34 = NULL;
        t = term_z_12;
        s_34 = t;
        t = term_w_12;
        u_34 = t;
        t = term_a_13;
        t = n_8(s_34, u_34, t);
        p_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_34, term_h_15);
        t = geq_0_0(t);
        t = m_34;
        t = d_99(t);
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = m_34;
      }
  }
  return(t);
}
static ATerm z_7 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm f_33, ATerm e_33, ATerm t)
{
  t = u_91(t);
  {
    static ATerm i_6 (ATerm t)
    {
      ATerm z_34 = NULL;
      z_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_33, z_34);
      t = t_91(t);
      return(t);
    }
    t = fetch_1_0(i_6, t);
  }
  t = e_33;
  return(t);
}
static ATerm a_8 (ATerm q_91 (ATerm), ATerm b_33, ATerm a_33, ATerm t)
{
  static ATerm e_36 (ATerm t)
  {
    ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
    x_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_33;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_35 = ATgetFirst((ATermList) t);
            z_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_35;
              {
                static ATerm j_6 (ATerm t)
                {
                  t = a_33;
                  return(t);
                }
                t = z_7(q_91, j_6, y_35, z_35, t);
              }
              t = e_36(t);
              LocalPopChoice(v_29);
            }
          else
            {
              t = t_29;
              {
                ATerm n_17 = NULL,r_17 = NULL,q_4 = NULL;
                t = SSLgetAnnotations(x_35);
                n_17 = t;
                t = z_35;
                t = e_36(t);
                r_17 = t;
                t = (ATerm) ATinsert(CheckATermList(r_17), y_35);
                q_4 = t;
                t = SSLsetAnnotations(q_4, n_17);
              }
            }
        }
      }
    return(t);
  }
  t = b_33;
  t = e_36(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm t_36 = NULL;
  if(match_cons(t, sym__2))
    {
      t_36 = ATgetArgument(t, 0);
      if((t_36 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_8 (ATerm r_45, ATerm s_45, ATerm t_45, ATerm t)
{
  ATerm h_36 = NULL,k_36 = NULL,l_36 = NULL;
  h_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_29 = ATgetArgument(t, 0);
            ATerm a_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
        t = n_8(r_45, s_45, t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = (ATerm) ATempty;
      }
  }
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_36, t_45);
  t = a_8(k_6, l_36, t_45, t);
  k_36 = t;
  t = SSL_table_put(r_45, s_45, k_36);
  t = h_36;
  return(t);
}
static ATerm c_8 (ATerm f_99 (ATerm), ATerm b_46, ATerm a_46, ATerm t)
{
  static ATerm m_6 (ATerm t)
  {
    ATerm u_36 = NULL,v_36 = NULL;
    if(match_cons(t, sym__2))
      {
        u_36 = ATgetArgument(t, 0);
        v_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, b_46, u_36, v_36);
    t = f_99(t);
    return(t);
  }
  t = a_46;
  t = map_1_0(m_6, t);
  return(t);
}
static ATerm h_8 (ATerm x_47, ATerm y_47, ATerm t)
{
  t = SSL_access(x_47, y_47);
  return(t);
}
static ATerm r_37 (ATerm j_37, ATerm t)
{
  t = SSL_fclose(j_37);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL;
  p_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_37 = ATgetArgument(t, 0);
      {
        ATerm b_30 = t;
        int f_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_37);
            LocalPopChoice(f_30);
          }
        else
          {
            t = b_30;
            t = r_37(p_37, t);
          }
      }
    }
  else
    {
      t = r_37(p_37, t);
    }
  return(t);
}
static ATerm d_8 (ATerm x_25, ATerm t)
{
  t = SSL_read_term_from_stream(x_25);
  return(t);
}
static ATerm e_8 (ATerm o_40, ATerm p_40, ATerm t)
{
  t = SSL_strcat(o_40, p_40);
  return(t);
}
static ATerm f_8 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm u_37 = NULL;
  t = SSL_fopen(g_48, h_48);
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_37);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_37 = NULL;
  t = SSL_stdin_stream();
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_37);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_37 = NULL;
  t = SSL_stdout_stream();
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_37);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_37 = NULL;
  t = SSL_stderr_stream();
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_37);
  return(t);
}
static ATerm r_39 (ATerm d_38, ATerm t)
{
  ATerm e_38 = NULL;
  t = SSL_explode_term(d_38);
  if(match_cons(t, sym__2))
    {
      ATerm g_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_30 = ATgetArgument(t, 1);
        if(((ATgetType(h_30) == AT_LIST) && !(ATisEmpty(h_30))))
          {
            e_38 = ATgetFirst((ATermList) h_30);
            {
              ATerm i_30 = (ATerm) ATgetNext((ATermList) h_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_38;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_38;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_38;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_38;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_39 (ATerm h_38, ATerm i_38, ATerm k_38, ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,s_38 = NULL,u_4 = NULL;
  t = SSLgetAnnotations(k_38);
  n_38 = t;
  t = h_38;
  if(match_cons(t, sym_Path_1))
    {
      s_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_38, i_38);
  u_4 = t;
  t = SSLsetAnnotations(u_4, n_38);
  if(match_cons(t, sym__2))
    {
      l_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(l_38, m_38, t);
  return(t);
}
static ATerm t_39 (ATerm a_39, ATerm b_39, ATerm c_39, ATerm t)
{
  ATerm d_39 = NULL,f_39 = NULL,g_39 = NULL,k_39 = NULL,w_4 = NULL;
  t = SSLgetAnnotations(c_39);
  g_39 = t;
  t = SSL_is_string(a_39);
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_39, b_39);
  w_4 = t;
  t = SSLsetAnnotations(w_4, g_39);
  if(match_cons(t, sym__2))
    {
      d_39 = ATgetArgument(t, 0);
      f_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(d_39, f_39, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  o_39 = t;
  if(match_cons(t, sym__2))
    {
      p_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_39(o_39, t);
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            {
              ATerm p_30 = t;
              int q_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_39(p_39, q_39, o_39, t);
                  LocalPopChoice(q_30);
                }
              else
                {
                  t = p_30;
                  t = t_39(p_39, q_39, o_39, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_39(o_39, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,d_40 = NULL;
  d_40 = t;
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_40, term_t_30);
        t = g_8(t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        {
          ATerm p_18 = NULL,q_18 = NULL;
          t = term_u_30;
          q_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_30, d_40);
          t = e_8(q_18, d_40, t);
          p_18 = t;
          t = SSL_perror(p_18);
          _fail(t);
        }
      }
  }
  x_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(y_39, t);
  w_39 = t;
  t = x_39;
  t = fclose_0_0(t);
  t = w_39;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_v_30;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_w_30;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_40 = NULL,j_40 = NULL;
      g_40 = t;
      t = (ATerm) ATinsert(ATempty, term_a_31);
      j_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_40, (ATerm) ATinsert(ATempty, term_a_31));
      t = h_8(g_40, j_40, t);
      LocalPopChoice(z_30);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_30;
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_31 = t;
            if((PushChoice() == 0))
              {
                ATerm m_40 = NULL,n_40 = NULL;
                m_40 = t;
                t = (ATerm) ATinsert(ATempty, term_a_23);
                n_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_40, (ATerm) ATinsert(ATempty, term_a_23));
                t = h_8(m_40, n_40, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_31;
              }
            t = debug_1_0(o_6, t);
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            t = debug_1_0(r_6, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = debug_1_0(t_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_f_31;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = debug_1_0(z_6, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_g_31;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
  m_41 = t;
  t = term_w_20;
  n_41 = t;
  t = (ATerm) ATinsert(ATempty, term_i_31);
  o_41 = t;
  t = SSL_printnl(n_41, o_41);
  t = m_41;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm s_41 = NULL,v_41 = NULL,w_41 = NULL;
  if(match_cons(t, sym__3))
    {
      s_41 = ATgetArgument(t, 0);
      v_41 = ATgetArgument(t, 1);
      w_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_8(s_41, v_41, w_41, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm x_41 = NULL,c_42 = NULL,d_42 = NULL;
  x_41 = t;
  t = term_w_20;
  c_42 = t;
  t = (ATerm) ATinsert(ATempty, term_j_31);
  d_42 = t;
  t = SSL_printnl(c_42, d_42);
  t = x_41;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm e_42 = NULL,i_42 = NULL,m_42 = NULL;
  e_42 = t;
  t = term_w_20;
  i_42 = t;
  t = (ATerm) ATinsert(ATempty, term_i_31);
  m_42 = t;
  t = SSL_printnl(i_42, m_42);
  t = e_42;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,z_40 = NULL,c_41 = NULL,f_41 = NULL,g_41 = NULL;
  q_40 = t;
  t = if_verbose5_1_0(s_6, t);
  {
    ATerm k_31 = t;
    if((PushChoice() == 0))
      {
        ATerm j_41 = NULL,l_41 = NULL;
        t = term_l_31;
        j_41 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, q_40);
        l_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_31, (ATerm) ATmakeAppl(sym_Imported_1, q_40));
        t = n_8(j_41, l_41, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_31;
      }
  }
  s_40 = t;
  t = term_l_31;
  c_41 = t;
  t = term_m_31;
  f_41 = t;
  t = (ATerm) ATinsert(ATempty, q_40);
  g_41 = t;
  t = SSL_table_put(c_41, f_41, g_41);
  t = s_40;
  t = if_verbose4_1_0(v_6, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(a_7, t);
  r_40 = t;
  t = term_l_31;
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_31, r_40);
  t = c_8(f_7, z_40, r_40, t);
  t = if_verbose6_1_0(g_7, t);
  t = term_l_31;
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, q_40);
  u_40 = t;
  t = (ATerm) ATempty;
  v_40 = t;
  t = SSL_table_put(t_40, u_40, v_40);
  t = (ATerm) ATmakeAppl(sym__3, term_l_31, (ATerm)ATmakeAppl(sym_Imported_1, q_40), (ATerm) ATempty);
  t = if_verbose4_1_0(i_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,k_43 = NULL,l_43 = NULL;
  y_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_42;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_43 = ATgetFirst((ATermList) t);
          l_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_18 = NULL,c_19 = NULL,e_19 = NULL,n_5 = NULL;
            t = SSLgetAnnotations(y_42);
            x_18 = t;
            t = k_43;
            t = l_95(t);
            c_19 = t;
            t = l_43;
            t = filter_1_0(l_95, t);
            e_19 = t;
            t = (ATerm) ATinsert(CheckATermList(e_19), c_19);
            n_5 = t;
            t = SSLsetAnnotations(n_5, x_18);
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            t = l_43;
            t = filter_1_0(l_95, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm t)
{
  static ATerm o_43 (ATerm t)
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_85(t);
        t = o_43(t);
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = l_85(t);
      }
    return(t);
  }
  t = o_43(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_43 = NULL,q_43 = NULL;
      t = term_z_12;
      p_43 = t;
      t = term_t_31;
      q_43 = t;
      t = term_u_31;
      t = n_8(p_43, q_43, t);
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm v_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_43 = NULL;
            t = term_x_31;
            r_43 = t;
            t = SSL_getenv(r_43);
            LocalPopChoice(w_31);
          }
        else
          {
            t = v_31;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = debug_1_0(l_7, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_y_31;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL;
  t = term_l_31;
  x_43 = t;
  t = term_z_31;
  y_43 = t;
  t = term_a_32;
  t = n_8(x_43, y_43, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm b_32 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_32;
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = debug_1_0(y_7, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_43 = NULL;
  t = if_verbose5_1_0(k_7, t);
  t_43 = t;
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_43 = NULL,v_43 = NULL;
        t = term_l_31;
        u_43 = t;
        t = term_m_31;
        v_43 = t;
        t = term_f_32;
        t = n_8(u_43, v_43, t);
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
        {
          ATerm w_43 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_43 = t;
          t = repeat_2_0(n_7, _id, t);
          t = w_43;
        }
      }
  }
  t = t_43;
  t = if_verbose5_1_0(u_7, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = debug_1_0(m_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_g_32;
  return(t);
}
static ATerm m_45 (ATerm j_44, ATerm t)
{
  ATerm l_44 = NULL,n_44 = NULL,o_44 = NULL;
  t = term_l_31;
  n_44 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, j_44);
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_31, (ATerm) ATmakeAppl(sym_Tool_1, j_44));
  t = n_8(n_44, o_44, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_32 = ATgetFirst((ATermList) t);
      if(match_cons(h_32, sym__2))
        {
          ATerm n_32 = ATgetArgument(h_32, 0);
          l_44 = ATgetArgument(h_32, 1);
        }
      else
        _fail(t);
      {
        ATerm m_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_44;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = debug_1_0(s_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_g_32;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_l_31;
  t = table_getlist_0_0(t);
  t = debug_1_0(w_8, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_44 = NULL,x_44 = NULL,b_45 = NULL;
      t = if_verbose5_1_0(l_8, t);
      t = xtc_load_0_0(t);
      b_45 = t;
      if(match_cons(t, sym__2))
        {
          w_44 = ATgetArgument(t, 0);
          x_44 = ATgetArgument(t, 1);
          {
            ATerm z_32 = t;
            int c_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
                t = term_l_31;
                f_45 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, w_44);
                g_45 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_31, (ATerm) ATmakeAppl(sym_Tool_1, w_44));
                t = n_8(f_45, g_45, t);
                {
                  static ATerm p_8 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((x_44 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_45 != NULL) && (e_45 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_45 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(p_8, t);
                }
                t = not_null(e_45);
                LocalPopChoice(c_33);
              }
            else
              {
                t = z_32;
                t = m_45(b_45, t);
              }
          }
        }
      else
        {
          t = m_45(b_45, t);
        }
      t = if_verbose5_1_0(r_8, t);
      LocalPopChoice(x_32);
    }
  else
    {
      t = u_32;
      {
        ATerm l_45 = NULL,p_19 = NULL,s_19 = NULL;
        l_45 = t;
        t = term_w_20;
        p_19 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_33), l_45), term_g_33);
        s_19 = t;
        t = SSL_printnl(p_19, s_19);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_33), l_45), term_g_33);
        t = if_verbose5_1_0(u_8, t);
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
static ATerm i_8 (ATerm r_22, ATerm s_22, ATerm t)
{
  t = SSL_copy(r_22, s_22);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL;
  o_46 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_20 = NULL;
        t = o_46;
        t = o_0(t);
        b_20 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = b_20;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = b_20;
          }
        t = (ATerm) ATmakeAppl(sym__2, p_46, b_20);
        t = i_8(p_46, b_20, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_46);
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        {
          ATerm l_33 = t;
          int m_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_20 = NULL;
              t = o_46;
              t = o_0(t);
              m_20 = t;
              {
                ATerm n_33 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_20 = NULL;
                    n_20 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = n_20;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = n_20;
                          }
                        else
                          {
                            t = n_20;
                            if((p_46 != t))
                              {
                                _fail(t);
                              }
                            t = n_20;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_33;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, p_46, m_20);
              t = i_8(p_46, m_20, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_46);
              LocalPopChoice(m_33);
            }
          else
            {
              t = l_33;
              t = o_46;
              t = o_0(t);
              if((p_46 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_46);
            }
        }
      }
  }
  return(t);
}
static ATerm j_8 (ATerm z_44, ATerm a_45, ATerm t)
{
  ATerm t_46 = NULL,w_46 = NULL;
  w_46 = t;
  {
    ATerm o_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_44, a_45);
        t = n_8(z_44, a_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_33 = ATgetFirst((ATermList) t);
            t_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_33);
        t = SSL_table_put(z_44, a_45, t_46);
        t = (ATerm) ATmakeAppl(sym__3, z_44, a_45, t_46);
      }
    else
      {
        t = o_33;
        t = SSL_table_remove(z_44, a_45);
        t = (ATerm) ATmakeAppl(sym__2, z_44, a_45);
      }
  }
  t = w_46;
  return(t);
}
ATerm end_scope_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,b_47 = NULL,c_47 = NULL,e_47 = NULL;
  c_47 = t;
  t = m_97(t);
  b_47 = t;
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_47 = NULL;
        t = term_i_21;
        f_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_47, term_i_21);
        t = n_8(b_47, f_47, t);
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_46 = ATgetFirst((ATermList) t);
      x_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_21;
  e_47 = t;
  t = SSL_table_put(b_47, e_47, x_46);
  t = y_46;
  {
    static ATerm x_8 (ATerm t)
    {
      ATerm h_47 = NULL;
      h_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_47, h_47);
      t = j_8(b_47, h_47, t);
      return(t);
    }
    t = map_1_0(x_8, t);
  }
  t = c_47;
  return(t);
}
ATerm restore_always_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_98(t);
      t = n_98(t);
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      t = n_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  k_47 = t;
  t = l_97(t);
  j_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_47, term_i_21);
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_47 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_34 = ATgetArgument(t, 0);
            ATerm b_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_21;
        r_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_47, term_i_21);
        t = n_8(j_47, r_47, t);
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        t = (ATerm) ATempty;
      }
  }
  l_47 = t;
  t = term_i_21;
  m_47 = t;
  t = (ATerm) ATinsert(CheckATermList(l_47), (ATerm) ATempty);
  n_47 = t;
  t = SSL_table_put(j_47, m_47, n_47);
  t = k_47;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_q_21;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  {
    ATerm d_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(d_48);
        LocalPopChoice(f_34);
      }
    else
      {
        t = d_34;
        t = d_48;
      }
  }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm v_47 = NULL;
  static ATerm z_8 (ATerm t)
  {
    ATerm w_47 = NULL;
    w_47 = t;
    {
      ATerm g_34 = t;
      int h_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_47 = NULL,a_48 = NULL;
          t = term_q_21;
          z_47 = t;
          t = term_i_21;
          a_48 = t;
          t = term_i_34;
          t = n_8(z_47, a_48, t);
          LocalPopChoice(h_34);
        }
      else
        {
          t = g_34;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((v_47 != NULL) && (v_47 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          v_47 = ATgetFirst((ATermList) t);
        {
          ATerm j_34 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = v_47;
    t = map_1_0(a_9, t);
    t = w_47;
    t = end_scope_1_0(b_9, t);
    return(t);
  }
  t = begin_scope_1_0(y_8, t);
  t = restore_always_2_0(m_101, z_8, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_48 = NULL,o_48 = NULL;
      t = term_z_12;
      n_48 = t;
      t = term_u_21;
      o_48 = t;
      t = term_n_34;
      t = n_8(n_48, o_48, t);
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      t = term_j_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  static ATerm d_9 (ATerm t)
  {
    ATerm o_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
        t = term_z_12;
        l_48 = t;
        t = term_v_21;
        m_48 = t;
        t = term_r_34;
        t = n_8(l_48, m_48, t);
        k_48 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_48);
        LocalPopChoice(q_34);
      }
    else
      {
        t = o_34;
        t = term_z_22;
      }
    t = n_101(t);
    t = copy_to_1_0(f_9, t);
    return(t);
  }
  t = xtc_temp_files_1_0(d_9, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
  p_48 = t;
  t = term_t_21;
  t = whoami_0_0(t);
  q_48 = t;
  t = term_w_20;
  s_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_34), q_48), term_t_34);
  t_48 = t;
  t = SSL_printnl(s_48, t_48);
  t = term_b_13;
  r_48 = t;
  t = SSL_exit(r_48);
  t = p_48;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm v_48 = NULL;
  v_48 = t;
  if(match_string(t, "-k"))
    {
      t = v_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_48;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm z_48 = NULL,k_49 = NULL,l_49 = NULL;
  z_48 = t;
  t = SSL_string_to_int(z_48);
  k_49 = t;
  t = term_s_23;
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, k_49);
  t = q_8(l_49, k_49, t);
  t = z_48;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_w_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_9, k_9, l_9, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm n_49 = NULL;
  n_49 = t;
  if(match_string(t, "-S"))
    {
      t = n_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_49;
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL;
  t = term_w_12;
  o_49 = t;
  t = term_f_23;
  p_49 = t;
  t = term_x_34;
  t = q_8(o_49, p_49, t);
  t = term_y_34;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_a_35;
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
  ATerm q_49 = NULL,r_49 = NULL,u_49 = NULL;
  q_49 = t;
  t = SSL_string_to_int(q_49);
  r_49 = t;
  t = term_w_12;
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, r_49);
  t = q_8(u_49, r_49, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_49);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_b_35;
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
  ATerm v_49 = NULL,x_49 = NULL;
  t = term_d_24;
  v_49 = t;
  t = term_t_21;
  x_49 = t;
  t = term_c_35;
  t = q_8(v_49, x_49, t);
  t = term_d_35;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_9, o_9, p_9, t);
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm h_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_9, r_9, u_9, t);
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            t = Option_3_0(v_9, w_9, x_9, t);
          }
      }
    }
  return(t);
}
static ATerm q_8 (ATerm u_46, ATerm v_46, ATerm t)
{
  ATerm y_49 = NULL;
  t = term_z_12;
  y_49 = t;
  t = SSL_table_put(y_49, u_46, v_46);
  t = (ATerm) ATmakeAppl(sym__3, term_z_12, u_46, v_46);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
      t = term_t_21;
      t = e_0(t);
      e_50 = t;
      t = term_j_35;
      f_50 = t;
      t = term_k_35;
      g_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_35, term_k_35, e_50);
      t = o_8(f_50, g_50, e_50, t);
      _fail(t);
    }
  else
    {
      ATerm o_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_50 = ATgetFirst((ATermList) t);
          d_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_50;
      t = c_0(t);
      t = term_t_21;
      t = d_0(t);
      o_50 = t;
      t = (ATerm) ATinsert(CheckATermList(d_50), o_50);
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm q_50 = NULL;
  q_50 = t;
  if(match_string(t, "-o"))
    {
      t = q_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_50;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL;
  r_50 = t;
  t = term_u_21;
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_21, r_50);
  t = q_8(s_50, r_50, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_50);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_9, z_9, a_10, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm u_50 = NULL;
  u_50 = t;
  if(match_string(t, "-i"))
    {
      t = u_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_50;
    }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL;
  v_50 = t;
  t = term_v_21;
  w_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_21, v_50);
  t = q_8(w_50, v_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_50);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_10, d_10, e_10, t);
  return(t);
}
static ATerm o_8 (ATerm u_44, ATerm v_44, ATerm t_44, ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_44, v_44);
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_35 = ATgetArgument(t, 0);
            ATerm q_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_44, v_44);
        t = n_8(u_44, v_44, t);
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        t = (ATerm) ATempty;
      }
  }
  a_51 = t;
  t = (ATerm) ATinsert(CheckATermList(a_51), t_44);
  b_51 = t;
  t = SSL_table_put(u_44, v_44, b_51);
  t = z_50;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
      t = term_t_21;
      t = n_0(t);
      m_51 = t;
      t = term_j_35;
      n_51 = t;
      t = term_k_35;
      o_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_35, term_k_35, m_51);
      t = o_8(n_51, o_51, m_51, t);
      _fail(t);
    }
  else
    {
      ATerm s_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_51 = ATgetFirst((ATermList) t);
          j_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_51;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_51 = ATgetFirst((ATermList) t);
          l_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_51;
      t = k_0(t);
      t = k_51;
      t = l_0(t);
      s_51 = t;
      t = (ATerm) ATinsert(CheckATermList(l_51), s_51);
    }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm u_51 = NULL;
  u_51 = t;
  if(match_string(t, "-I"))
    {
      t = u_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = u_51;
    }
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  v_51 = t;
  t = term_e_25;
  w_51 = t;
  t = (ATerm) ATinsert(ATempty, v_51);
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, (ATerm) ATinsert(ATempty, v_51));
  t = x_7(w_51, x_51, t);
  t = v_51;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_r_35;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  y_51 = t;
  t = term_e_27;
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_27, y_51);
  t = q_8(z_51, y_51, t);
  t = y_51;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_s_35;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  t = term_w_12;
  b_52 = t;
  t = term_f_23;
  c_52 = t;
  t = term_x_34;
  t = q_8(b_52, c_52, t);
  t = a_52;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_t_35;
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
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  d_52 = t;
  t = term_y_27;
  e_52 = t;
  t = term_b_13;
  f_52 = t;
  t = term_u_35;
  t = q_8(e_52, f_52, t);
  t = d_52;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(h_10, j_10, m_10, t);
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      {
        ATerm a_36 = t;
        int b_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_10, o_10, p_10, t);
            LocalPopChoice(b_36);
          }
        else
          {
            t = a_36;
            {
              ATerm c_36 = t;
              int d_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_10, r_10, w_10, t);
                  LocalPopChoice(d_36);
                }
              else
                {
                  t = c_36;
                  t = Option_3_0(x_10, y_10, z_10, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_21;
  t = whoami_0_0(t);
  g_52 = t;
  t = term_w_20;
  i_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_36), g_52);
  j_52 = t;
  t = SSL_printnl(i_52, j_52);
  t = term_b_13;
  h_52 = t;
  t = SSL_exit(h_52);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL;
  t = term_z_12;
  k_52 = t;
  t = term_g_36;
  l_52 = t;
  t = term_i_36;
  t = n_8(k_52, l_52, t);
  return(t);
}
static ATerm k_8 (ATerm t_41, ATerm u_41, ATerm t)
{
  ATerm j_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_41, u_41);
      LocalPopChoice(m_36);
    }
  else
    {
      t = j_36;
      t = SSL_addr(t_41, u_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  n_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_52;
      t = h_94(t);
    }
  else
    {
      ATerm s_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_52 = ATgetFirst((ATermList) t);
          p_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_52;
      t = foldr_2_0(h_94, i_94, t);
      s_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_52, s_52);
      t = i_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(y_20, z_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_52 = NULL,u_20 = NULL,v_20 = NULL;
  t = times_0_0(t);
  v_20 = t;
  t = SSL_explode_term(v_20);
  if(match_cons(t, sym__2))
    {
      ATerm n_36 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_20;
  t = foldr_2_0(b_11, f_11, t);
  v_52 = t;
  t = SSL_TicksToSeconds(v_52);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
  g_53 = t;
  if(match_cons(t, sym__2))
    {
      h_53 = ATgetArgument(t, 0);
      i_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_53;
        if((h_53 != t))
          {
            _fail(t);
          }
        t = g_53;
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        t = (ATerm) ATmakeAppl(sym__2, h_53, i_53);
        {
          ATerm q_36 = t;
          int r_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_53, i_53);
              LocalPopChoice(r_36);
            }
          else
            {
              t = q_36;
              t = SSL_gtr(h_53, i_53);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_53, i_53);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm m_53 = NULL;
  m_53 = t;
  {
    ATerm s_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
        t = term_z_12;
        p_53 = t;
        t = term_w_12;
        q_53 = t;
        t = term_a_13;
        t = n_8(p_53, q_53, t);
        o_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_53, term_b_13);
        t = geq_0_0(t);
        t = m_53;
        t = y_98(t);
        LocalPopChoice(w_36);
      }
    else
      {
        t = s_36;
        t = m_53;
      }
  }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,v_53 = NULL,w_53 = NULL;
  t = run_time_0_0(t);
  s_53 = t;
  t = term_t_21;
  t = whoami_0_0(t);
  t_53 = t;
  t = term_w_20;
  v_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_36), s_53), term_i_13), t_53);
  w_53 = t;
  t = SSL_printnl(v_53, w_53);
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_36), s_53), term_i_13), t_53));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_23;
  x_53 = t;
  t = SSL_exit(x_53);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  i_54 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_54;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_54 = ATgetArgument(t, 0);
          {
            ATerm z_21 = NULL,l_6 = NULL;
            t = SSLgetAnnotations(i_54);
            z_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_54);
            l_6 = t;
            t = SSLsetAnnotations(l_6, z_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_54;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_54 = NULL,b_54 = NULL;
      t = term_z_12;
      a_54 = t;
      t = term_a_37;
      b_54 = t;
      t = term_b_37;
      t = n_8(a_54, b_54, t);
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      t = fetch_1_0(i_11, t);
    }
  t = c_103(t);
  return(t);
}
ATerm map_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  static ATerm y_54 (ATerm t)
  {
    ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
    v_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_54;
      }
    else
      {
        ATerm h_22 = NULL,m_22 = NULL,n_22 = NULL,n_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_54 = ATgetFirst((ATermList) t);
            x_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_54);
        h_22 = t;
        t = w_54;
        t = f_87(t);
        m_22 = t;
        t = x_54;
        t = y_54(t);
        n_22 = t;
        t = (ATerm) ATinsert(CheckATermList(n_22), m_22);
        n_6 = t;
        t = SSLsetAnnotations(n_6, h_22);
      }
    return(t);
  }
  t = y_54(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_55 = ATgetFirst((ATermList) t);
      c_55 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_55 = NULL,h_55 = NULL;
        static ATerm k_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_55)), not_null(h_55));
          return(t);
        }
        t = c_55;
        t = i_0(t);
        if(((g_55 != NULL) && (g_55 != t)))
          _fail(t);
        else
          g_55 = t;
        t = b_55;
        t = g_0(t);
        if(((h_55 != NULL) && (h_55 != t)))
          _fail(t);
        else
          h_55 = t;
        t = c_55;
        t = reverse_acc_2_0(g_0, k_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_21;
      t = i_0(t);
    }
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,p_6 = NULL;
  p_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_55);
  n_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_55);
  p_6 = t;
  t = SSLsetAnnotations(p_6, n_55);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm r_55 = NULL;
  r_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_55), term_c_37);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_55 = NULL,m_55 = NULL;
      t = term_z_12;
      l_55 = t;
      t = term_g_36;
      m_55 = t;
      t = term_i_36;
      t = n_8(l_55, m_55, t);
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
      t = fetch_1_0(n_11, t);
    }
  t = term_f_37;
  t = echo_0_0(t);
  t = term_j_35;
  j_55 = t;
  t = term_k_35;
  k_55 = t;
  t = term_g_37;
  t = n_8(j_55, k_55, t);
  t = reverse_acc_2_0(_id, o_11, t);
  t = map_1_0(p_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  static ATerm o_56 (ATerm t)
  {
    ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
    l_56 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_56 = ATgetFirst((ATermList) t);
        n_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_37 = t;
      int i_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_23 = NULL,n_23 = NULL,u_6 = NULL;
          t = SSLgetAnnotations(l_56);
          h_23 = t;
          t = m_56;
          t = p_87(t);
          n_23 = t;
          t = (ATerm) ATinsert(CheckATermList(n_56), n_23);
          u_6 = t;
          t = SSLsetAnnotations(u_6, h_23);
          LocalPopChoice(i_37);
        }
      else
        {
          t = h_37;
          {
            ATerm b_24 = NULL,k_24 = NULL,w_6 = NULL;
            t = SSLgetAnnotations(l_56);
            b_24 = t;
            t = n_56;
            t = o_56(t);
            k_24 = t;
            t = (ATerm) ATinsert(CheckATermList(k_24), m_56);
            w_6 = t;
            t = SSLsetAnnotations(w_6, b_24);
          }
        }
    }
    return(t);
  }
  t = o_56(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  s_56 = t;
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_37 = ATgetFirst((ATermList) t);
                ATerm n_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_56;
          }
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        t = (ATerm) ATinsert(ATempty, s_56);
      }
  }
  t_56 = t;
  t = term_j_24;
  u_56 = t;
  t = SSL_printnl(u_56, t_56);
  t = s_56;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL;
  t = term_z_12;
  y_56 = t;
  t = term_g_36;
  z_56 = t;
  t = term_i_36;
  t = n_8(y_56, z_56, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_8 (ATerm l_46, ATerm m_46, ATerm t)
{
  t = SSL_table_get(l_46, m_46);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL;
  t = term_q_37;
  a_57 = t;
  t = term_t_21;
  b_57 = t;
  t = term_s_37;
  t = q_8(a_57, b_57, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_t_37;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  t = term_q_37;
  e_57 = t;
  t = term_t_21;
  f_57 = t;
  t = term_s_37;
  t = q_8(e_57, f_57, t);
  t = term_w_27;
  c_57 = t;
  t = term_t_21;
  d_57 = t;
  t = term_y_37;
  t = q_8(c_57, d_57, t);
  t = term_z_37;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_11, u_11, w_11, t);
      LocalPopChoice(c_38);
    }
  else
    {
      t = b_38;
      t = Option_3_0(x_11, y_11, a_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,c_9 = NULL;
  l_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_57 = ATgetFirst((ATermList) t);
      i_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_57);
  g_57 = t;
  t = h_57;
  t = n_66(t);
  j_57 = t;
  t = i_57;
  t = o_66(t);
  k_57 = t;
  t = (ATerm) ATinsert(CheckATermList(k_57), j_57);
  c_9 = t;
  t = SSLsetAnnotations(c_9, g_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,v_57 = NULL,w_57 = NULL,e_9 = NULL;
  q_57 = t;
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_38;
        t = a_105(t);
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
      }
  }
  t = q_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_57 = ATgetFirst((ATermList) t);
      t_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_57);
  r_57 = t;
  t = term_g_36;
  w_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_36, s_57);
  t = q_8(w_57, s_57, t);
  t = t_57;
  {
    static ATerm g_58 (ATerm t)
    {
      ATerm o_38 = t;
      int p_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_38 = t;
          int r_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_57 = NULL;
              z_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_57;
              LocalPopChoice(r_38);
            }
          else
            {
              t = q_38;
              t = a_105(t);
              t = Cons_2_0(_id, g_58, t);
            }
          LocalPopChoice(p_38);
        }
      else
        {
          t = o_38;
          {
            ATerm c_58 = NULL,d_58 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_58 = ATgetFirst((ATermList) t);
                d_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_58), (ATerm) ATmakeAppl(sym_Undefined_1, c_58));
          }
        }
      return(t);
    }
    t = g_58(t);
  }
  v_57 = t;
  t = (ATerm) ATinsert(CheckATermList(v_57), (ATerm) ATmakeAppl(sym_Program_1, s_57));
  e_9 = t;
  t = SSLsetAnnotations(e_9, r_57);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm s_58 = NULL;
  s_58 = t;
  if(match_string(t, "--help"))
    {
      t = s_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_58;
        }
    }
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL;
  t = term_a_37;
  t_58 = t;
  t = term_t_21;
  u_58 = t;
  t = term_t_38;
  t = q_8(t_58, u_58, t);
  t = term_u_38;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_v_38;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL;
  n_58 = t;
  t = term_j_35;
  p_58 = t;
  t = term_k_35;
  q_58 = t;
  t = (ATerm) ATempty;
  r_58 = t;
  t = SSL_table_put(p_58, q_58, r_58);
  t = n_58;
  {
    static ATerm c_12 (ATerm t)
    {
      ATerm w_38 = t;
      int x_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_104(t);
          LocalPopChoice(x_38);
        }
      else
        {
          t = w_38;
          {
            ATerm y_38 = t;
            int z_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_12, i_12, j_12, t);
                LocalPopChoice(z_38);
              }
            else
              {
                t = y_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_12, t);
  }
  {
    ATerm e_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_59 = NULL;
        f_59 = t;
        {
          ATerm i_39 = t;
          int j_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_24 = NULL;
              t = f_59;
              {
                ATerm l_39 = t;
                int m_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_24 = NULL,z_24 = NULL;
                    t = term_z_12;
                    y_24 = t;
                    t = term_a_37;
                    z_24 = t;
                    t = term_b_37;
                    t = n_8(y_24, z_24, t);
                    LocalPopChoice(m_39);
                  }
                else
                  {
                    t = l_39;
                    t = fetch_1_0(k_12, t);
                  }
              }
              t = f_59;
              t = default_system_usage_0_0(t);
              t = term_f_23;
              v_24 = t;
              t = SSL_exit(v_24);
              LocalPopChoice(j_39);
            }
          else
            {
              t = i_39;
              {
                ATerm h_25 = NULL,l_25 = NULL,m_25 = NULL;
                t = term_z_12;
                l_25 = t;
                t = term_q_37;
                m_25 = t;
                t = term_n_39;
                t = n_8(l_25, m_25, t);
                t = f_59;
                t = default_system_about_0_0(t);
                t = term_f_23;
                h_25 = t;
                t = SSL_exit(h_25);
              }
            }
        }
        LocalPopChoice(h_39);
      }
    else
      {
        t = e_39;
        {
          ATerm u_39 = t;
          int v_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
              static ATerm l_12 (ATerm t)
              {
                ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,g_9 = NULL;
                l_59 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_59 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_59);
                j_59 = t;
                t = k_59;
                if(((l_58 != NULL) && (l_58 != t)))
                  _fail(t);
                else
                  l_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_59);
                g_9 = t;
                t = SSLsetAnnotations(g_9, j_59);
                return(t);
              }
              t = fetch_1_0(l_12, t);
              t = term_w_20;
              h_59 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_58)), term_z_39);
              i_59 = t;
              t = SSL_printnl(h_59, i_59);
              t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_58)), term_z_39));
              t = default_system_usage_0_0(t);
              t = term_b_13;
              g_59 = t;
              t = SSL_exit(g_59);
              LocalPopChoice(v_39);
            }
          else
            {
              t = u_39;
            }
        }
      }
  }
  m_58 = t;
  t = term_j_35;
  o_58 = t;
  t = SSL_table_destroy(o_58);
  t = m_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL;
  t = parse_options_1_0(e_103, t);
  q_59 = t;
  t = term_a_40;
  t_59 = t;
  t = SSL_table_create(t_59);
  t = term_a_40;
  r_59 = t;
  t = term_b_40;
  s_59 = t;
  t = SSL_table_put(r_59, s_59, q_59);
  t = q_59;
  t = g_103(t);
  {
    ATerm c_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_103, t);
        LocalPopChoice(e_40);
      }
    else
      {
        t = c_40;
        {
          ATerm f_40 = t;
          int h_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_40);
            }
          else
            {
              t = f_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm i_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      LocalPopChoice(k_40);
    }
  else
    {
      t = i_40;
      {
        ATerm l_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(w_40);
          }
        else
          {
            t = l_40;
            {
              ATerm x_40 = t;
              int y_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(y_40);
                }
              else
                {
                  t = x_40;
                  {
                    ATerm a_41 = t;
                    int b_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(p_12, q_12, r_12, t);
                        LocalPopChoice(b_41);
                      }
                    else
                      {
                        t = a_41;
                        {
                          ATerm d_41 = t;
                          int e_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(e_41);
                            }
                          else
                            {
                              t = d_41;
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
static ATerm o_12 (ATerm t)
{
  t = xtc_io_1_0(s_12, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL;
  t = term_g_28;
  v_59 = t;
  t = term_t_21;
  w_59 = t;
  t = term_h_41;
  t = q_8(v_59, w_59, t);
  t = term_i_41;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL;
  y_59 = t;
  t = term_p_41;
  t = xtc_find_path_0_0(t);
  z_59 = t;
  t = term_e_25;
  a_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_59), term_q_41);
  b_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, z_59), term_q_41));
  t = x_7(a_60, b_60, t);
  t = y_59;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(m_12, default_usage_0_0, _id, o_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
