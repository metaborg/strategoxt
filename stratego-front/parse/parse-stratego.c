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
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_c_40;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_y_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_y_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_q_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_m_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_f_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
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
ATerm term_d_34;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_d_33;
ATerm term_r_32;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_u_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_j_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_c_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_k_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_q_23;
ATerm term_j_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
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
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_q_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_z_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_f_13, term_e_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_s_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_c_15, term_d_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_n_15, term_r_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_d_16, term_g_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_o_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_t_16, term_v_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_c_17, term_d_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_i_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_o_17, term_p_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_t_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_b_18, term_c_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_h_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_v_18, term_w_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_i_19, term_j_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_n_19, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_s_19, term_t_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_y_19, term_z_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_g_20, term_h_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_t_20, term_u_20);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" ** Warning: Mismatch between basename of input file (", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol(") and module name (", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol(") specified", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_d_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_e_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_b_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_e_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_y_31);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_o_31, term_g_32);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_o_31, term_p_31);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_a_22);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_j_23);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_23);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_k_24, term_h_22);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym__2, term_e_28, term_f_13);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_z_35);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_u_36);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__2, term_t_34, term_u_34);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_h_22);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_h_22);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_u_36, term_h_22);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_l_37);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_h_22);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_i_22);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm p_7 (ATerm a_42, ATerm b_42, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm q_7 (ATerm s_25, ATerm t_25, ATerm t);
static ATerm r_7 (ATerm d_83 (ATerm), ATerm l_197, ATerm c_26, ATerm t);
static ATerm m_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t);
static ATerm s_7 (ATerm k_22, ATerm l_22, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm s_81 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm s_102 (ATerm), ATerm t);
static ATerm u_7 (ATerm h_98 (ATerm), ATerm i_43, ATerm g_43, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm s_88 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm check_module_name_0_1 (ATerm t_0, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm verbosity_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm i_101 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm t_100 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm s_99 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm w_7 (ATerm r_22, ATerm q_22, ATerm t);
static ATerm j_8 (ATerm s_22, ATerm t_22, ATerm t);
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
static ATerm x_7 (ATerm p_47, ATerm i_479, ATerm t);
ATerm find_in_includes_1_0 (ATerm m_80 (ATerm), ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm r_99 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm f_88 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm basename_1_0 (ATerm g_101 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm k_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_32 (ATerm j_32, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm y_7 (ATerm m_47, ATerm l_47, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm debug_1_0 (ATerm b_83 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm u_99 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm t_99 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm v_99 (ATerm), ATerm t);
static ATerm a_8 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm g_33, ATerm f_33, ATerm t);
static ATerm b_8 (ATerm e_92 (ATerm), ATerm c_33, ATerm b_33, ATerm t);
static ATerm r_6 (ATerm t);
static ATerm c_8 (ATerm s_45, ATerm t_45, ATerm u_45, ATerm t);
static ATerm d_8 (ATerm x_99 (ATerm), ATerm c_46, ATerm b_46, ATerm t);
static ATerm i_8 (ATerm j_48, ATerm k_48, ATerm t);
static ATerm j_39 (ATerm v_38, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_8 (ATerm y_25, ATerm t);
static ATerm f_8 (ATerm p_40, ATerm q_40, ATerm t);
static ATerm g_8 (ATerm s_48, ATerm t_48, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_41 (ATerm x_39, ATerm t);
static ATerm n_41 (ATerm b_40, ATerm d_40, ATerm e_40, ATerm t);
static ATerm o_41 (ATerm m_40, ATerm n_40, ATerm r_40, ATerm t);
static ATerm h_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm j_47 (ATerm p_46, ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm o_8 (ATerm m_46, ATerm n_46, ATerm t);
static ATerm k_8 (ATerm a_45, ATerm b_45, ATerm t);
ATerm end_scope_1_0 (ATerm e_98 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_98 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm e_102 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_8 (ATerm g_47, ATerm h_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_8 (ATerm v_44, ATerm w_44, ATerm u_44, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_8 (ATerm u_41, ATerm v_41, ATerm t);
ATerm foldr_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm d_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_99 (ATerm), ATerm t);
static ATerm f_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm need_help_1_0 (ATerm u_103 (ATerm), ATerm t);
ATerm map_1_0 (ATerm t_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_88 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_67 (ATerm), ATerm b_67 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_105 (ATerm), ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm parse_options_1_0 (ATerm r_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm parse_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 = NULL,i_1 = NULL;
      t = term_p_12;
      h_1 = t;
      t = term_q_12;
      i_1 = t;
      t = term_r_12;
      t = o_8(h_1, i_1, t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      t = term_s_12;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm c_1 = NULL;
  c_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_0 = NULL,f_0 = NULL;
      t = term_q_12;
      {
        ATerm t_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 = NULL,j_0 = NULL;
            t = term_p_12;
            h_0 = t;
            t = term_q_12;
            j_0 = t;
            t = term_r_12;
            t = o_8(h_0, j_0, t);
            LocalPopChoice(u_12);
          }
        else
          {
            t = t_12;
            t = term_s_12;
          }
      }
      b_0 = t;
      t = term_v_12;
      f_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_12, b_0);
      t = j_8(f_0, b_0, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm w_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_1;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm p_7 (ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(a_42, b_42);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      t = SSL_subtr(a_42, b_42);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
  t = term_z_12;
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 = NULL,t_1 = NULL;
        t = term_p_12;
        q_1 = t;
        t = term_z_12;
        t_1 = t;
        t = term_e_13;
        t = o_8(q_1, t_1, t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = term_f_13;
      }
  }
  l_1 = t;
  t = term_f_13;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_1, term_f_13);
  t = p_7(l_1, n_1, t);
  m_1 = t;
  t = SSL_int_to_string(m_1);
  k_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_1), term_z_12);
  return(t);
}
static ATerm q_7 (ATerm s_25, ATerm t_25, ATerm t)
{
  ATerm u_1 = NULL;
  t = SSL_write_term_to_stream_baf(s_25, t_25);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_1);
  return(t);
}
static ATerm r_7 (ATerm d_83 (ATerm), ATerm l_197, ATerm c_26, ATerm t)
{
  ATerm v_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_197, term_g_13);
  t = h_8(t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_1, c_26);
  t = d_83(t);
  t = fclose_0_0(t);
  t = c_26;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_13 = ATgetArgument(t, 0);
      if(match_cons(j_13, sym_Stream_1))
        {
          z_1 = ATgetArgument(j_13, 0);
        }
      else
        _fail(t);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(z_1, a_2, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,y_1 = NULL;
  y_1 = t;
  t = xtc_new_file_0_0(t);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_1, y_1);
  t = r_7(m_0, w_1, y_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_1);
  t = xtc_transform_file_2_0(r_101, s_101, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm s_7 (ATerm k_22, ATerm l_22, ATerm t)
{
  t = SSL_execvp(k_22, l_22);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  c_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_3 = ATgetArgument(t, 0);
      {
        ATerm d_1 = NULL,e_1 = NULL;
        t = SSL_int_to_string(d_3);
        d_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_13), d_1), term_k_13);
        e_1 = t;
        t = SSL_concat_strings(e_1);
      }
    }
  else
    {
      ATerm e_2 = NULL,f_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_3 = ATgetArgument(t, 0);
          e_3 = ATgetArgument(t, 1);
          f_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_3);
      e_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_3), term_r_13), e_2), term_q_13), d_3);
      f_2 = t;
      t = SSL_concat_strings(f_2);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_13 = ATgetArgument(t, 0);
              if((j_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm z_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_20), term_p_20), term_k_20), term_b_20), term_u_19), term_p_19), term_k_19), term_g_19), term_c_19), term_x_18), term_s_18), term_o_18), term_k_18), term_d_18), term_w_17), term_q_17), term_j_17), term_f_17), term_y_16), term_q_16), term_i_16), term_y_15), term_e_15), term_z_14), term_u_14), term_p_14), term_l_14), term_h_14);
        t = fetch_elem_1_0(s_0, t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_3 = NULL,r_4 = NULL;
  q_3 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_21 = ATgetArgument(t, 0);
            r_4 = ATgetArgument(t, 1);
            {
              ATerm d_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_20);
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_2 = NULL,y_2 = NULL,h_3 = NULL;
              t = r_4;
              {
                ATerm m_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_21;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              o_2 = t;
              t = term_n_21;
              y_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, o_2), term_o_21);
              h_3 = t;
              t = SSL_printnl(y_2, h_3);
              t = (ATerm) ATmakeAppl(sym__2, term_n_21, (ATerm) ATinsert(ATinsert(ATempty, o_2), term_o_21));
              LocalPopChoice(j_21);
            }
          else
            {
              t = i_21;
              t = q_3;
            }
        }
      }
    else
      {
        t = w_20;
        t = q_3;
      }
  }
  t = q_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm d_5 = NULL,f_5 = NULL;
  f_5 = t;
  t = fork_0_0(t);
  d_5 = t;
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_5;
        t = s_81(t);
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = SSL_waitpid(d_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_21 = ATgetArgument(t, 0);
            if(((ATgetType(r_21) != AT_INT) || (ATgetInt((ATermInt) r_21) != 0)))
              _fail(t);
            {
              ATerm s_21 = ATgetArgument(t, 1);
            }
            {
              ATerm v_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_5;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,l_5 = NULL;
  l_5 = t;
  t = s_102(t);
  t = xtc_find_0_0(t);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_5, l_5);
  {
    static ATerm w_0 (ATerm t)
    {
      ATerm m_5 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, j_5, l_5);
      t = s_7(j_5, l_5, t);
      t = term_w_21;
      m_5 = t;
      t = SSL_exit(m_5);
      return(t);
    }
    t = fork_and_wait_1_0(w_0, t);
  }
  t = l_5;
  return(t);
}
static ATerm u_7 (ATerm h_98 (ATerm), ATerm i_43, ATerm g_43, ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  t = h_98(t);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_5, i_43, g_43);
  t = p_8(o_5, i_43, g_43, t);
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_5 = NULL;
        t = term_a_22;
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_a_22);
        t = o_8(o_5, v_5, t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_5 = ATgetFirst((ATermList) t);
      q_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_a_22;
  t_5 = t;
  t = (ATerm) ATinsert(CheckATermList(q_5), (ATerm) ATinsert(CheckATermList(p_5), i_43));
  u_5 = t;
  t = SSL_table_put(o_5, t_5, u_5);
  t = s_5;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm y_5 = NULL;
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 = NULL,n_3 = NULL;
      d_6 = t;
      t = term_d_22;
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_6, term_d_22);
      t = f_8(d_6, n_3, t);
      y_5 = t;
      t = SSL_mkstemp(y_5);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm e_6 = NULL;
        t = term_e_22;
        e_6 = t;
        t = SSL_perror(e_6);
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
  t = term_f_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,k_6 = NULL,m_6 = NULL,n_6 = NULL;
  t = P__tmpdir_0_0(t);
  m_6 = t;
  t = term_g_22;
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_6, term_g_22);
  t = f_8(m_6, n_6, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      h_6 = ATgetArgument(t, 0);
      g_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_h_22;
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_6, term_h_22);
  t = u_7(y_0, h_6, k_6, t);
  t = SSL_close(g_6);
  t = h_6;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL;
  p_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm t_6 = NULL,u_6 = NULL;
      t = p_6;
      t = xtc_new_file_0_0(t);
      t_6 = t;
      t = x_0(t);
      u_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_6, (ATerm) ATinsert(ATinsert(ATempty, t_6), term_q_12));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_6);
    }
  else
    {
      ATerm y_6 = NULL,z_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_6;
      t = xtc_new_file_0_0(t);
      y_6 = t;
      t = x_0(t);
      z_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_6), term_q_12), q_6), term_i_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_6);
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm s_88 (ATerm), ATerm t)
{
  static ATerm c_9 (ATerm t)
  {
    ATerm j_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL,w_8 = NULL,z_8 = NULL,t_3 = NULL,c_4 = NULL,q_0 = NULL;
        t_8 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_8 = ATgetFirst((ATermList) t);
            z_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_8);
        t_3 = t;
        t = z_8;
        t = c_9(t);
        c_4 = t;
        t = (ATerm) ATinsert(CheckATermList(c_4), w_8);
        q_0 = t;
        t = SSLsetAnnotations(q_0, t_3);
        LocalPopChoice(m_22);
      }
    else
      {
        t = j_22;
        t = s_88(t);
      }
    return(t);
  }
  t = c_9(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
  h_9 = t;
  t = SSL_explode_string(h_9);
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm p_22 = ATgetFirst((ATermList) t);
              if(((ATgetType(p_22) != AT_INT) || (ATgetInt((ATermInt) p_22) != 47)))
                _fail(t);
              if(((f_9 != NULL) && (f_9 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                f_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(z_0, t);
        t = not_null(f_9);
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
      }
  }
  g_9 = t;
  t = SSL_implode_string(g_9);
  return(t);
}
ATerm check_module_name_0_1 (ATerm t_0, ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  m_10 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Specification_1))
          {
            ATerm w_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_22);
        t = m_10;
      }
    else
      {
        t = u_22;
        if(match_cons(t, sym_Module_2))
          {
            n_10 = ATgetArgument(t, 0);
            {
              ATerm x_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = m_10;
        {
          ATerm y_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_4 = NULL;
              t = t_0;
              t = get_filename_0_0(t);
              s_4 = t;
              if((n_10 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym__2, s_4, s_4);
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              {
                ATerm x_5 = NULL,a_6 = NULL,i_6 = NULL,j_6 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_23), n_10), term_c_23), t_0), term_b_23);
                j_6 = t;
                t = SSL_concat_strings(j_6);
                x_5 = t;
                t = term_n_21;
                a_6 = t;
                t = (ATerm) ATinsert(ATempty, x_5);
                i_6 = t;
                t = SSL_printnl(a_6, i_6);
                t = m_10;
              }
            }
        }
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_10 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_v_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm x_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_23);
      x_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_10, (ATerm) ATinsert(ATempty, term_e_23));
      t = i_8(v_10, x_10, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm verbosity_0_0 (ATerm t)
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_11 = NULL,c_11 = NULL;
      t = term_p_12;
      a_11 = t;
      t = term_z_12;
      c_11 = t;
      t = term_e_13;
      t = o_8(a_11, c_11, t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = term_j_23;
    }
  return(t);
}
ATerm if_not_silent_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_23 = t;
      int n_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_11 = NULL;
          h_11 = t;
          t = verbosity_0_0(t);
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
            _fail(t);
          t = h_11;
          LocalPopChoice(n_23);
        }
      else
        {
          t = m_23;
          t = r_0(t);
        }
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_11 = NULL,k_11 = NULL,m_11 = NULL;
            j_11 = t;
            t = term_p_12;
            k_11 = t;
            t = term_z_12;
            m_11 = t;
            t = term_e_13;
            t = o_8(k_11, m_11, t);
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
              _fail(t);
            t = j_11;
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
            t = r_0(t);
          }
      }
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm i_101 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
  t = basename_1_0(_id, t);
  t_11 = t;
  t = term_h_22;
  t = i_101(t);
  s_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_11), term_q_23), t_11);
  r_11 = t;
  t = SSL_concat_strings(r_11);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL;
        t = a_13;
        t = o_0(t);
        b_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = b_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = b_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, b_13, b_7);
        t = j_8(b_13, b_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_13);
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm t_23 = t;
          int x_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_7 = NULL;
              t = a_13;
              t = o_0(t);
              m_7 = t;
              {
                ATerm z_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_7 = NULL;
                    n_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = n_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = n_7;
                          }
                        else
                          {
                            t = n_7;
                            if((b_13 != t))
                              {
                                _fail(t);
                              }
                            t = n_7;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_23;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, b_13, m_7);
              t = j_8(b_13, m_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_13);
              LocalPopChoice(x_23);
            }
          else
            {
              t = t_23;
              t = a_13;
              t = o_0(t);
              if((b_13 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_13);
            }
        }
      }
  }
  return(t);
}
ATerm if_keep1_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  {
    ATerm a_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_13 = NULL,m_13 = NULL,p_13 = NULL;
        t = term_p_12;
        m_13 = t;
        t = term_d_24;
        p_13 = t;
        t = term_e_24;
        t = o_8(m_13, p_13, t);
        l_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_13, term_f_13);
        t = geq_0_0(t);
        t = i_13;
        t = t_100(t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = a_24;
        t = i_13;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm s_99 (ATerm), ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
        t = term_p_12;
        x_13 = t;
        t = term_z_12;
        y_13 = t;
        t = term_e_13;
        t = o_8(x_13, y_13, t);
        w_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_13, term_n_14);
        t = geq_0_0(t);
        t = u_13;
        t = s_99(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = u_13;
      }
  }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm f_14 = NULL;
  if(match_cons(t, sym_TopSort_1))
    {
      f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14;
  return(t);
}
ATerm pass_sort_0_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_14 = NULL,b_14 = NULL,d_14 = NULL;
      t = get_meta_0_0(t);
      if(match_cons(t, sym_Meta_1))
        {
          d_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_14;
      t = fetch_elem_1_0(a_1, t);
      b_14 = t;
      t = SSL_is_string(b_14);
      a_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, a_14), term_k_24);
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
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
static ATerm w_7 (ATerm r_22, ATerm q_22, ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(r_22, q_22);
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = get_errno_0_0(t);
      t = term_h_22;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, r_22, q_22);
      t = j_8(r_22, q_22, t);
      t = SSL_remove(r_22);
    }
  return(t);
}
static ATerm j_8 (ATerm s_22, ATerm t_22, ATerm t)
{
  t = SSL_copy(s_22, t_22);
  return(t);
}
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,b_15 = NULL;
  y_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_8 = NULL;
        t = y_14;
        t = p_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_s_12;
        v_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_15, term_s_12);
        t = j_8(b_15, v_8, t);
        t = SSL_remove(b_15);
        t = term_s_12;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        {
          ATerm q_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_9 = NULL;
              t = y_14;
              t = p_0(t);
              i_9 = t;
              {
                ATerm t_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_9 = NULL;
                    j_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = j_9;
                      }
                    else
                      {
                        t = j_9;
                        if((b_15 != t))
                          {
                            _fail(t);
                          }
                        t = j_9;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, b_15, i_9);
              t = w_7(b_15, i_9, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_9);
              LocalPopChoice(r_24);
            }
          else
            {
              t = q_24;
              t = y_14;
              t = p_0(t);
              if((b_15 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_15);
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
  t = term_u_24;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_v_24;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,o_15 = NULL;
  l_15 = t;
  t = term_n_21;
  m_15 = t;
  t = (ATerm) ATinsert(ATempty, term_x_24);
  o_15 = t;
  t = SSL_printnl(m_15, o_15);
  t = l_15;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_y_24;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_c_25;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  t = term_p_12;
  s_15 = t;
  t = term_e_25;
  t_15 = t;
  t = term_f_25;
  t = o_8(s_15, t_15, t);
  t = map_1_0(b_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_15), term_e_25);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_c_25;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  t = term_p_12;
  v_15 = t;
  t = term_e_25;
  w_15 = t;
  t = term_f_25;
  t = o_8(v_15, w_15, t);
  t = map_1_0(g_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_15), term_e_25);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  t = if_verbose6_1_0(f_1, t);
  i_15 = t;
  t = guarantee_extension_1_0(j_1, t);
  h_15 = t;
  t = i_15;
  {
    ATerm n_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_15 = NULL;
        t = h_15;
        t = find_in_includes_1_0(o_1, t);
        j_15 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_15);
        LocalPopChoice(q_25);
      }
    else
      {
        t = n_25;
        {
          ATerm k_15 = NULL;
          static ATerm h_2 (ATerm t)
          {
            t = h_15;
            return(t);
          }
          t = if_verbose2_1_0(p_1, t);
          t = guarantee_extension_1_0(r_1, t);
          k_15 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_15);
          {
            ATerm r_25 = t;
            int u_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_15 = NULL,q_15 = NULL,u_0 = NULL;
                q_15 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm v_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_15);
                p_15 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, k_15);
                u_0 = t;
                t = SSLsetAnnotations(u_0, p_15);
                LocalPopChoice(u_25);
                t = xtc_transform_file_2_0(s_1, x_1, t);
              }
            else
              {
                t = r_25;
                t = xtc_transform_term_2_0(c_2, d_2, t);
              }
          }
          t = rename_to_1_0(h_2, t);
        }
      }
  }
  return(t);
}
static ATerm x_7 (ATerm p_47, ATerm i_479, ATerm t)
{
  static ATerm j_2 (ATerm t)
  {
    ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,f_16 = NULL;
    a_16 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_47), term_w_25), a_16);
    f_16 = t;
    t = SSL_concat_strings(f_16);
    b_16 = t;
    t = (ATerm) ATinsert(ATempty, term_e_23);
    c_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_16, (ATerm) ATinsert(ATempty, term_e_23));
    t = i_8(b_16, c_16, t);
    return(t);
  }
  t = i_479;
  t = fetch_elem_1_0(j_2, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,j_16 = NULL,k_16 = NULL,n_16 = NULL;
  static ATerm l_2 (ATerm t)
  {
    t = debug_1_0(m_80, t);
    return(t);
  }
  j_16 = t;
  t = term_p_12;
  k_16 = t;
  t = term_e_25;
  n_16 = t;
  t = term_f_25;
  t = o_8(k_16, n_16, t);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_16, h_16);
  t = x_7(j_16, h_16, t);
  t = if_verbose2_1_0(l_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_z_25;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_a_26;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,e_17 = NULL;
  a_17 = t;
  t = term_n_21;
  b_17 = t;
  t = (ATerm) ATinsert(ATempty, term_b_26);
  e_17 = t;
  t = SSL_printnl(b_17, e_17);
  t = a_17;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_d_26;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_d_26;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm u_16 = NULL,w_16 = NULL;
  t = if_verbose6_1_0(m_2, t);
  u_16 = t;
  t = guarantee_extension_1_0(p_2, t);
  w_16 = t;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_16 = NULL;
        t = find_in_includes_1_0(s_2, t);
        x_16 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_16);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          static ATerm l_3 (ATerm t)
          {
            t = w_16;
            return(t);
          }
          t = if_verbose2_1_0(u_2, t);
          t = u_16;
          t = get_syntax_definition_0_0(t);
          {
            ATerm g_26 = t;
            int h_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_17 = NULL,n_17 = NULL;
                n_17 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    m_17 = ATgetArgument(t, 0);
                    {
                      ATerm q_9 = NULL,b_1 = NULL;
                      t = SSLgetAnnotations(n_17);
                      q_9 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, m_17);
                      b_1 = t;
                      t = SSLsetAnnotations(b_1, q_9);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = n_17;
                  }
                LocalPopChoice(h_26);
                {
                  static ATerm w_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, u_16), term_j_26);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(v_2, w_2, t);
                }
              }
            else
              {
                t = g_26;
                {
                  static ATerm k_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, u_16), term_j_26);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(i_3, k_3, t);
                }
              }
          }
          t = rename_to_1_0(l_3, t);
        }
      }
  }
  t = if_verbose6_1_0(m_3, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm u_17 = NULL;
  u_17 = t;
  {
    ATerm k_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
        t = term_p_12;
        z_17 = t;
        t = term_z_12;
        a_18 = t;
        t = term_e_13;
        t = o_8(z_17, a_18, t);
        y_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_17, term_j_14);
        t = geq_0_0(t);
        t = u_17;
        t = r_99(t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = k_26;
        t = u_17;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm e_18 = NULL;
  static ATerm p_3 (ATerm t)
  {
    t = f_88(t);
    if(((e_18 != NULL) && (e_18 != t)))
      _fail(t);
    else
      e_18 = t;
    return(t);
  }
  t = fetch_1_0(p_3, t);
  t = not_null(e_18);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = debug_1_0(s_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_q_26;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_r_26;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_s_26;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = debug_1_0(x_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm i_18 = NULL,m_19 = NULL,r_19 = NULL;
  t = if_verbose6_1_0(r_3, t);
  m_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL,g_10 = NULL,i_2 = NULL;
        t = SSLgetAnnotations(m_19);
        e_10 = t;
        t = r_19;
        t = guarantee_extension_1_0(u_3, t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_10);
        i_2 = t;
        t = SSLsetAnnotations(i_2, e_10);
        t = read_from_0_0(t);
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        {
          ATerm z_10 = NULL,b_11 = NULL,e_11 = NULL,k_2 = NULL;
          t = SSLgetAnnotations(m_19);
          b_11 = t;
          t = r_19;
          t = guarantee_extension_1_0(v_3, t);
          e_11 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, e_11);
          k_2 = t;
          t = SSLsetAnnotations(k_2, b_11);
          t = read_from_0_0(t);
          z_10 = t;
          t = SSL_explode_term(z_10);
          if(match_cons(t, sym__2))
            {
              i_18 = ATgetArgument(t, 0);
              {
                ATerm v_26 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, i_18)));
        }
      }
  }
  t = if_verbose6_1_0(w_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = debug_1_0(z_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_w_26;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm k_21 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      k_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_21;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = debug_1_0(e_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm a_20 = NULL;
  t = if_verbose6_1_0(y_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      a_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_20 = NULL,e_20 = NULL;
        t = term_p_12;
        d_20 = t;
        t = term_b_27;
        e_20 = t;
        t = term_c_27;
        t = o_8(d_20, e_20, t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        {
          ATerm f_27 = t;
          int h_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm l_21 (ATerm l_20, ATerm t)
              {
                ATerm b_21 = NULL,c_21 = NULL;
                t = term_n_21;
                b_21 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_27), a_20), term_j_27), l_20), term_i_27);
                c_21 = t;
                t = SSL_printnl(b_21, c_21);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_27), a_20), term_j_27), l_20), term_i_27);
                _fail(t);
                return(t);
              }
              ATerm f_21 = NULL,g_21 = NULL;
              t = get_meta_0_0(t);
              g_21 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  f_21 = ATgetArgument(t, 0);
                  {
                    ATerm n_27 = t;
                    int o_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = f_21;
                        t = fetch_elem_1_0(b_4, t);
                        LocalPopChoice(o_27);
                      }
                    else
                      {
                        t = n_27;
                        t = l_21(g_21, t);
                      }
                  }
                }
              else
                {
                  t = l_21(g_21, t);
                }
              LocalPopChoice(h_27);
            }
          else
            {
              t = f_27;
              t = term_p_27;
            }
        }
      }
  }
  t = if_verbose2_1_0(d_4, t);
  return(t);
}
ATerm basename_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL;
  u_21 = t;
  t = SSL_explode_string(u_21);
  {
    ATerm q_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_24 (ATerm t)
        {
          ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
          u_23 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_23 = ATgetFirst((ATermList) t);
              w_23 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm t_27 = t;
            int u_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_11 = NULL,a_12 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(u_23);
                x_11 = t;
                t = w_23;
                t = f_24(t);
                a_12 = t;
                t = (ATerm) ATinsert(CheckATermList(a_12), v_23);
                q_2 = t;
                t = SSLsetAnnotations(q_2, x_11);
                LocalPopChoice(u_27);
              }
            else
              {
                t = t_27;
                {
                  ATerm w_27 = t;
                  int x_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_12 = NULL,r_2 = NULL;
                      t = SSLgetAnnotations(u_23);
                      k_12 = t;
                      t = v_23;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(w_23), v_23);
                      r_2 = t;
                      t = SSLsetAnnotations(r_2, k_12);
                      LocalPopChoice(x_27);
                    }
                  else
                    {
                      t = w_27;
                      {
                        ATerm h_13 = NULL,o_13 = NULL,t_2 = NULL;
                        t = SSLgetAnnotations(u_23);
                        h_13 = t;
                        t = v_23;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = w_23;
                        t = g_101(t);
                        o_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(o_13), v_23);
                        t_2 = t;
                        t = SSLsetAnnotations(t_2, h_13);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = f_24(t);
        LocalPopChoice(s_27);
      }
    else
      {
        t = q_27;
      }
  }
  t_21 = t;
  t = SSL_implode_string(t_21);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = debug_1_0(g_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_y_27;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_z_27;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_a_28);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_z_27;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_a_28);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_c_28;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm e_27 = NULL,g_27 = NULL,k_27 = NULL;
  t = pass_verbose_0_0(t);
  g_27 = t;
  t = term_e_28;
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL,r_27 = NULL;
        t = term_p_12;
        l_27 = t;
        t = term_e_28;
        r_27 = t;
        t = term_i_28;
        t = o_8(l_27, r_27, t);
        LocalPopChoice(h_28);
        t = (ATerm) ATinsert(ATempty, term_k_28);
      }
    else
      {
        t = g_28;
        t = (ATerm) ATempty;
      }
  }
  k_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_27), g_27);
  t = concat_0_0(t);
  e_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), term_l_28);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_c_28;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm v_27 = NULL,b_28 = NULL,d_28 = NULL;
  t = pass_verbose_0_0(t);
  b_28 = t;
  t = term_e_28;
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_28 = NULL,j_28 = NULL;
        t = term_p_12;
        f_28 = t;
        t = term_e_28;
        j_28 = t;
        t = term_i_28;
        t = o_8(f_28, j_28, t);
        LocalPopChoice(n_28);
        t = (ATerm) ATinsert(ATempty, term_k_28);
      }
    else
      {
        t = m_28;
        t = (ATerm) ATempty;
      }
  }
  d_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_28), b_28);
  t = concat_0_0(t);
  v_27 = t;
  t = (ATerm) ATinsert(CheckATermList(v_27), term_l_28);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_o_28;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL;
  t = pass_verbose_0_0(t);
  b_29 = t;
  t = term_e_28;
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL,m_29 = NULL;
        t = term_p_12;
        f_29 = t;
        t = term_e_28;
        m_29 = t;
        t = term_i_28;
        t = o_8(f_29, m_29, t);
        LocalPopChoice(r_28);
        t = (ATerm) ATinsert(ATempty, term_e_28);
      }
    else
      {
        t = q_28;
        t = (ATerm) ATempty;
      }
  }
  c_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_29), b_29);
  t = concat_0_0(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  t = pass_verbose_0_0(t);
  n_29 = t;
  t = term_e_28;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_29 = NULL,t_29 = NULL;
        t = term_p_12;
        q_29 = t;
        t = term_e_28;
        t_29 = t;
        t = term_i_28;
        t = o_8(q_29, t_29, t);
        LocalPopChoice(t_28);
        t = (ATerm) ATinsert(ATempty, term_e_28);
      }
    else
      {
        t = s_28;
        t = (ATerm) ATempty;
      }
  }
  o_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_29), n_29);
  t = concat_0_0(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_u_28;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm d_25 = NULL,g_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,o_25 = NULL,p_25 = NULL,x_2 = NULL;
  t = if_verbose6_1_0(f_4, t);
  l_25 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  o_25 = t;
  t = p_25;
  t = basename_1_0(_id, t);
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_25);
  x_2 = t;
  t = SSLsetAnnotations(x_2, o_25);
  t = l_25;
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      d_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_25;
  t = pass_sort_0_0(t);
  g_25 = t;
  t = l_25;
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_26 = ATgetArgument(t, 0);
            {
              ATerm g_14 = NULL,z_2 = NULL;
              t = SSLgetAnnotations(l_25);
              g_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_26);
              z_2 = t;
              t = SSLsetAnnotations(z_2, g_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_25;
          }
        LocalPopChoice(w_28);
        {
          static ATerm k_4 (ATerm t)
          {
            ATerm l_26 = NULL,m_26 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(l_4, t);
            m_26 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_26, g_25);
            t = conc_0_0(t);
            l_26 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(l_26), d_25), term_a_29), term_z_28);
            return(t);
          }
          t = xtc_transform_file_2_0(h_4, k_4, t);
        }
      }
    else
      {
        t = v_28;
        {
          static ATerm o_4 (ATerm t)
          {
            ATerm n_26 = NULL,o_26 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(p_4, t);
            o_26 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_26, g_25);
            t = conc_0_0(t);
            n_26 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_26), d_25), term_a_29), term_z_28);
            return(t);
          }
          t = xtc_transform_term_2_0(n_4, o_4, t);
        }
      }
  }
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL,d_27 = NULL;
        d_27 = t;
        if(match_cons(t, sym_FILE_1))
          {
            a_27 = ATgetArgument(t, 0);
            {
              ATerm r_14 = NULL,a_3 = NULL;
              t = SSLgetAnnotations(d_27);
              r_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_27);
              a_3 = t;
              t = SSLsetAnnotations(a_3, r_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_27;
          }
        LocalPopChoice(e_29);
        t = xtc_transform_file_2_0(q_4, t_4, t);
      }
    else
      {
        t = d_29;
        t = xtc_transform_term_2_0(w_4, x_4, t);
      }
  }
  {
    static ATerm y_4 (ATerm t)
    {
      static ATerm z_4 (ATerm t)
      {
        t = j_25;
        t = guarantee_extension_1_0(a_5, t);
        return(t);
      }
      t = copy_to_1_0(z_4, t);
      return(t);
    }
    t = if_keep1_1_0(y_4, t);
  }
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_28 = NULL,y_28 = NULL;
        y_28 = t;
        if(match_cons(t, sym_FILE_1))
          {
            x_28 = ATgetArgument(t, 0);
            {
              ATerm f_15 = NULL,b_3 = NULL;
              t = SSLgetAnnotations(y_28);
              f_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_28);
              b_3 = t;
              t = SSLsetAnnotations(b_3, f_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_28;
          }
        LocalPopChoice(h_29);
        t = xtc_transform_file_2_0(c_5, g_5, t);
      }
    else
      {
        t = g_29;
        t = xtc_transform_term_2_0(h_5, i_5, t);
      }
  }
  k_25 = t;
  {
    static ATerm k_5 (ATerm t)
    {
      t = read_from_0_0(t);
      t = check_module_name_0_1(j_25, t);
      return(t);
    }
    t = if_not_silent_1_0(k_5, t);
  }
  t = k_25;
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_30 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_30 = ATgetArgument(t, 0);
            {
              ATerm e_16 = NULL,g_3 = NULL;
              t = SSLgetAnnotations(k_25);
              e_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_30);
              g_3 = t;
              t = SSLsetAnnotations(g_3, e_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_25;
          }
        LocalPopChoice(j_29);
        t = xtc_transform_file_2_0(n_5, pass_verbose_0_0, t);
      }
    else
      {
        t = i_29;
        t = xtc_transform_term_2_0(r_5, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  static ATerm f_32 (ATerm t)
  {
    ATerm v_31 = NULL,w_31 = NULL,a_32 = NULL;
    a_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_31 = ATgetFirst((ATermList) t);
        w_31 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_16 = NULL,s_16 = NULL,a_4 = NULL;
          t = SSLgetAnnotations(a_32);
          p_16 = t;
          t = w_31;
          t = f_32(t);
          s_16 = t;
          t = (ATerm) ATinsert(CheckATermList(s_16), v_31);
          a_4 = t;
          t = SSLsetAnnotations(a_4, p_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_32;
        t = k_88(t);
      }
    return(t);
  }
  t = f_32(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  l_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_30;
    }
  else
    {
      static ATerm w_5 (ATerm t)
      {
        t = not_null(n_30);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_30 = ATgetFirst((ATermList) t);
          if(((n_30 != NULL) && (n_30 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_30;
      t = at_end_1_0(w_5, t);
    }
  return(t);
}
static ATerm w_32 (ATerm j_32, ATerm t)
{
  ATerm k_32 = NULL;
  t = SSL_explode_term(j_32);
  if(match_cons(t, sym__2))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_32;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,t_32 = NULL;
  t_32 = t;
  if(match_cons(t, sym__2))
    {
      p_32 = ATgetArgument(t, 0);
      q_32 = ATgetArgument(t, 1);
      {
        ATerm l_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_6 (ATerm t)
            {
              t = q_32;
              return(t);
            }
            t = p_32;
            t = at_end_1_0(b_6, t);
            LocalPopChoice(p_29);
          }
        else
          {
            t = l_29;
            t = w_32(t_32, t);
          }
      }
    }
  else
    {
      t = w_32(t_32, t);
    }
  return(t);
}
static ATerm y_7 (ATerm m_47, ATerm l_47, ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  t = m_47;
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_33 = NULL;
        t = term_p_12;
        a_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_12, m_47);
        t = o_8(a_33, m_47, t);
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = (ATerm) ATempty;
      }
  }
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_47, y_32);
  t = conc_0_0(t);
  x_32 = t;
  t = term_p_12;
  z_32 = t;
  t = SSL_table_put(z_32, m_47, x_32);
  t = (ATerm) ATmakeAppl(sym__3, term_p_12, m_47, x_32);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  n_33 = t;
  t = SSL_explode_string(n_33);
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_35 (ATerm t)
        {
          ATerm z_34 = NULL,b_35 = NULL,c_35 = NULL;
          z_34 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_35 = ATgetFirst((ATermList) t);
              c_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm w_29 = t;
            int x_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_17 = NULL,r_17 = NULL,i_4 = NULL;
                t = SSLgetAnnotations(z_34);
                k_17 = t;
                t = c_35;
                t = d_35(t);
                r_17 = t;
                t = (ATerm) ATinsert(CheckATermList(r_17), b_35);
                i_4 = t;
                t = SSLsetAnnotations(i_4, k_17);
                LocalPopChoice(x_29);
              }
            else
              {
                t = w_29;
                {
                  ATerm f_18 = NULL,j_4 = NULL;
                  t = SSLgetAnnotations(z_34);
                  f_18 = t;
                  t = b_35;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, b_35);
                  j_4 = t;
                  t = SSLsetAnnotations(j_4, f_18);
                }
              }
          }
          return(t);
        }
        t = d_35(t);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATempty;
      }
  }
  m_33 = t;
  t = SSL_implode_string(m_33);
  return(t);
}
ATerm debug_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm g_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
  g_35 = t;
  t = b_83(t);
  j_35 = t;
  t = term_n_21;
  k_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_35), j_35);
  l_35 = t;
  t = SSL_printnl(k_35, l_35);
  t = g_35;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_35 = NULL;
  static ATerm f_6 (ATerm t)
  {
    ATerm o_35 = NULL,r_35 = NULL;
    o_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_35), o_35);
    t = o_8(not_null(n_35), o_35, t);
    r_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_35, r_35);
    return(t);
  }
  if(((n_35 != NULL) && (n_35 != t)))
    _fail(t);
  else
    n_35 = t;
  t = SSL_table_keys(n_35);
  t = map_1_0(f_6, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm t_35 = NULL;
  t_35 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_35 = NULL,c_36 = NULL,d_36 = NULL;
        t = term_p_12;
        c_36 = t;
        t = term_z_12;
        d_36 = t;
        t = term_e_13;
        t = o_8(c_36, d_36, t);
        w_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_35, term_y_19);
        t = geq_0_0(t);
        t = t_35;
        t = u_99(t);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = t_35;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
        t = term_p_12;
        m_36 = t;
        t = term_z_12;
        n_36 = t;
        t = term_e_13;
        t = o_8(m_36, n_36, t);
        l_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_36, term_h_17);
        t = geq_0_0(t);
        t = j_36;
        t = t_99(t);
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = j_36;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm v_99 (ATerm), ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_36 = NULL,a_37 = NULL,b_37 = NULL;
        t = term_p_12;
        a_37 = t;
        t = term_z_12;
        b_37 = t;
        t = term_e_13;
        t = o_8(a_37, b_37, t);
        x_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_36, term_s_14);
        t = geq_0_0(t);
        t = t_36;
        t = v_99(t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = t_36;
      }
  }
  return(t);
}
static ATerm a_8 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm g_33, ATerm f_33, ATerm t)
{
  t = i_92(t);
  {
    static ATerm l_6 (ATerm t)
    {
      ATerm e_37 = NULL;
      e_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_33, e_37);
      t = h_92(t);
      return(t);
    }
    t = fetch_1_0(l_6, t);
  }
  t = f_33;
  return(t);
}
static ATerm b_8 (ATerm e_92 (ATerm), ATerm c_33, ATerm b_33, ATerm t)
{
  static ATerm b_38 (ATerm t)
  {
    ATerm s_37 = NULL,v_37 = NULL,w_37 = NULL;
    s_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_33;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_37 = ATgetFirst((ATermList) t);
            w_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_30 = t;
          int g_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_37;
              {
                static ATerm o_6 (ATerm t)
                {
                  t = b_33;
                  return(t);
                }
                t = a_8(e_92, o_6, v_37, w_37, t);
              }
              t = b_38(t);
              LocalPopChoice(g_30);
            }
          else
            {
              t = f_30;
              {
                ATerm u_18 = NULL,y_18 = NULL,m_4 = NULL;
                t = SSLgetAnnotations(s_37);
                u_18 = t;
                t = w_37;
                t = b_38(t);
                y_18 = t;
                t = (ATerm) ATinsert(CheckATermList(y_18), v_37);
                m_4 = t;
                t = SSLsetAnnotations(m_4, u_18);
              }
            }
        }
      }
    return(t);
  }
  t = c_33;
  t = b_38(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm k_38 = NULL;
  if(match_cons(t, sym__2))
    {
      k_38 = ATgetArgument(t, 0);
      if((k_38 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_8 (ATerm s_45, ATerm t_45, ATerm u_45, ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_30 = ATgetArgument(t, 0);
            ATerm k_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        t = o_8(s_45, t_45, t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = (ATerm) ATempty;
      }
  }
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_38, u_45);
  t = b_8(r_6, g_38, u_45, t);
  f_38 = t;
  t = SSL_table_put(s_45, t_45, f_38);
  t = e_38;
  return(t);
}
static ATerm d_8 (ATerm x_99 (ATerm), ATerm c_46, ATerm b_46, ATerm t)
{
  static ATerm s_6 (ATerm t)
  {
    ATerm l_38 = NULL,m_38 = NULL;
    if(match_cons(t, sym__2))
      {
        l_38 = ATgetArgument(t, 0);
        m_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, c_46, l_38, m_38);
    t = x_99(t);
    return(t);
  }
  t = b_46;
  t = map_1_0(s_6, t);
  return(t);
}
static ATerm i_8 (ATerm j_48, ATerm k_48, ATerm t)
{
  t = SSL_access(j_48, k_48);
  return(t);
}
static ATerm j_39 (ATerm v_38, ATerm t)
{
  t = SSL_fclose(v_38);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_39 = NULL,h_39 = NULL;
  h_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_39 = ATgetArgument(t, 0);
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_39);
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            t = j_39(h_39, t);
          }
      }
    }
  else
    {
      t = j_39(h_39, t);
    }
  return(t);
}
static ATerm e_8 (ATerm y_25, ATerm t)
{
  t = SSL_read_term_from_stream(y_25);
  return(t);
}
static ATerm f_8 (ATerm p_40, ATerm q_40, ATerm t)
{
  t = SSL_strcat(p_40, q_40);
  return(t);
}
static ATerm g_8 (ATerm s_48, ATerm t_48, ATerm t)
{
  ATerm k_39 = NULL;
  t = SSL_fopen(s_48, t_48);
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_39);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_39 = NULL;
  t = SSL_stdin_stream();
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_39);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_39 = NULL;
  t = SSL_stdout_stream();
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_39);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_39 = NULL;
  t = SSL_stderr_stream();
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_39);
  return(t);
}
static ATerm m_41 (ATerm x_39, ATerm t)
{
  ATerm y_39 = NULL;
  t = SSL_explode_term(x_39);
  if(match_cons(t, sym__2))
    {
      ATerm q_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_30 = ATgetArgument(t, 1);
        if(((ATgetType(r_30) == AT_LIST) && !(ATisEmpty(r_30))))
          {
            y_39 = ATgetFirst((ATermList) r_30);
            {
              ATerm s_30 = (ATerm) ATgetNext((ATermList) r_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_39;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_39;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_39;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_39;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_41 (ATerm b_40, ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,k_40 = NULL,u_4 = NULL;
  t = SSLgetAnnotations(e_40);
  h_40 = t;
  t = b_40;
  if(match_cons(t, sym_Path_1))
    {
      k_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_40, d_40);
  u_4 = t;
  t = SSLsetAnnotations(u_4, h_40);
  if(match_cons(t, sym__2))
    {
      f_40 = ATgetArgument(t, 0);
      g_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(f_40, g_40, t);
  return(t);
}
static ATerm o_41 (ATerm m_40, ATerm n_40, ATerm r_40, ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,a_41 = NULL,v_4 = NULL;
  t = SSLgetAnnotations(r_40);
  u_40 = t;
  t = SSL_is_string(m_40);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_41, n_40);
  v_4 = t;
  t = SSLsetAnnotations(v_4, u_40);
  if(match_cons(t, sym__2))
    {
      s_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(s_40, t_40, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm c_41 = NULL,g_41 = NULL,j_41 = NULL;
  c_41 = t;
  if(match_cons(t, sym__2))
    {
      g_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
      {
        ATerm t_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_41(c_41, t);
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
            {
              ATerm v_30 = t;
              int w_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_41(g_41, j_41, c_41, t);
                  LocalPopChoice(w_30);
                }
              else
                {
                  t = v_30;
                  t = o_41(g_41, j_41, c_41, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_41(c_41, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_41 = NULL,w_41 = NULL,x_41 = NULL,j_42 = NULL;
  j_42 = t;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_42, term_z_30);
        t = h_8(t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          ATerm v_19 = NULL,w_19 = NULL;
          t = term_a_31;
          w_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_31, j_42);
          t = f_8(w_19, j_42, t);
          v_19 = t;
          t = SSL_perror(v_19);
          _fail(t);
        }
      }
  }
  w_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(x_41, t);
  s_41 = t;
  t = w_41;
  t = fclose_0_0(t);
  t = s_41;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_b_31;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_c_31;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_42 = NULL,t_42 = NULL;
      p_42 = t;
      t = (ATerm) ATinsert(ATempty, term_f_31);
      t_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_42, (ATerm) ATinsert(ATempty, term_f_31));
      t = i_8(p_42, t_42, t);
      LocalPopChoice(e_31);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_31;
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_31 = t;
            if((PushChoice() == 0))
              {
                ATerm u_42 = NULL,v_42 = NULL;
                u_42 = t;
                t = (ATerm) ATinsert(ATempty, term_e_23);
                v_42 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_42, (ATerm) ATinsert(ATempty, term_e_23));
                t = i_8(u_42, v_42, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_31;
              }
            t = debug_1_0(v_6, t);
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            t = debug_1_0(w_6, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = debug_1_0(a_7, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_j_31;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = debug_1_0(d_7, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_k_31;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t_43 = t;
  t = term_n_21;
  u_43 = t;
  t = (ATerm) ATinsert(ATempty, term_l_31);
  v_43 = t;
  t = SSL_printnl(u_43, v_43);
  t = t_43;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
  if(match_cons(t, sym__3))
    {
      w_43 = ATgetArgument(t, 0);
      x_43 = ATgetArgument(t, 1);
      y_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_8(w_43, x_43, y_43, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
  z_43 = t;
  t = term_n_21;
  a_44 = t;
  t = (ATerm) ATinsert(ATempty, term_m_31);
  b_44 = t;
  t = SSL_printnl(a_44, b_44);
  t = z_43;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
  c_44 = t;
  t = term_n_21;
  d_44 = t;
  t = (ATerm) ATinsert(ATempty, term_l_31);
  e_44 = t;
  t = SSL_printnl(d_44, e_44);
  t = c_44;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
  w_42 = t;
  t = if_verbose5_1_0(x_6, t);
  {
    ATerm n_31 = t;
    if((PushChoice() == 0))
      {
        ATerm r_43 = NULL,s_43 = NULL;
        t = term_o_31;
        r_43 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_42);
        s_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_31, (ATerm) ATmakeAppl(sym_Imported_1, w_42));
        t = o_8(r_43, s_43, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_31;
      }
  }
  y_42 = t;
  t = term_o_31;
  o_43 = t;
  t = term_p_31;
  p_43 = t;
  t = (ATerm) ATinsert(ATempty, w_42);
  q_43 = t;
  t = SSL_table_put(o_43, p_43, q_43);
  t = y_42;
  t = if_verbose4_1_0(c_7, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(e_7, t);
  x_42 = t;
  t = term_o_31;
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_31, x_42);
  t = d_8(h_7, n_43, x_42, t);
  t = if_verbose6_1_0(i_7, t);
  t = term_o_31;
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, w_42);
  l_43 = t;
  t = (ATerm) ATempty;
  m_43 = t;
  t = SSL_table_put(z_42, l_43, m_43);
  t = (ATerm) ATmakeAppl(sym__3, term_o_31, (ATerm)ATmakeAppl(sym_Imported_1, w_42), (ATerm) ATempty);
  t = if_verbose4_1_0(j_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t)
{
  ATerm y_44 = NULL,c_45 = NULL,d_45 = NULL;
  y_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_44;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_45 = ATgetFirst((ATermList) t);
          d_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_20 = NULL,i_20 = NULL,j_20 = NULL,b_5 = NULL;
            t = SSLgetAnnotations(y_44);
            f_20 = t;
            t = c_45;
            t = d_96(t);
            i_20 = t;
            t = d_45;
            t = filter_1_0(d_96, t);
            j_20 = t;
            t = (ATerm) ATinsert(CheckATermList(j_20), i_20);
            b_5 = t;
            t = SSLsetAnnotations(b_5, f_20);
            LocalPopChoice(r_31);
          }
        else
          {
            t = q_31;
            t = d_45;
            t = filter_1_0(d_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t)
{
  static ATerm g_45 (ATerm t)
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_85(t);
        t = g_45(t);
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = z_85(t);
      }
    return(t);
  }
  t = g_45(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_45 = NULL,i_45 = NULL;
      t = term_p_12;
      h_45 = t;
      t = term_y_31;
      i_45 = t;
      t = term_z_31;
      t = o_8(h_45, i_45, t);
      LocalPopChoice(x_31);
    }
  else
    {
      t = u_31;
      {
        ATerm b_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_45 = NULL;
            t = term_d_32;
            j_45 = t;
            t = SSL_getenv(j_45);
            LocalPopChoice(c_32);
          }
        else
          {
            t = b_32;
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
  t = term_e_32;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  t = term_o_31;
  h_46 = t;
  t = term_g_32;
  i_46 = t;
  t = term_h_32;
  t = o_8(h_46, i_46, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm i_32 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_32;
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = debug_1_0(m_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_45 = NULL;
  t = if_verbose5_1_0(k_7, t);
  o_45 = t;
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_45 = NULL,x_45 = NULL;
        t = term_o_31;
        r_45 = t;
        t = term_p_31;
        x_45 = t;
        t = term_o_32;
        t = o_8(r_45, x_45, t);
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        {
          ATerm y_45 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_45 = t;
          t = repeat_2_0(t_7, _id, t);
          t = y_45;
        }
      }
  }
  t = o_45;
  t = if_verbose5_1_0(v_7, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = debug_1_0(q_8, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_r_32;
  return(t);
}
static ATerm j_47 (ATerm p_46, ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  t = term_o_31;
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_46);
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_31, (ATerm) ATmakeAppl(sym_Tool_1, p_46));
  t = o_8(s_46, t_46, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_32 = ATgetFirst((ATermList) t);
      if(match_cons(s_32, sym__2))
        {
          ATerm v_32 = ATgetArgument(s_32, 0);
          r_46 = ATgetArgument(s_32, 1);
        }
      else
        _fail(t);
      {
        ATerm u_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_46;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = debug_1_0(x_8, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_r_32;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_o_31;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_9, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
      t = if_verbose5_1_0(n_8, t);
      t = xtc_load_0_0(t);
      w_46 = t;
      if(match_cons(t, sym__2))
        {
          u_46 = ATgetArgument(t, 0);
          v_46 = ATgetArgument(t, 1);
          {
            ATerm i_33 = t;
            int j_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
                t = term_o_31;
                a_47 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_46);
                b_47 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_31, (ATerm) ATmakeAppl(sym_Tool_1, u_46));
                t = o_8(a_47, b_47, t);
                {
                  static ATerm s_8 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((v_46 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((z_46 != NULL) && (z_46 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_46 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(s_8, t);
                }
                t = not_null(z_46);
                LocalPopChoice(j_33);
              }
            else
              {
                t = i_33;
                t = j_47(w_46, t);
              }
          }
        }
      else
        {
          t = j_47(w_46, t);
        }
      t = if_verbose5_1_0(u_8, t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = e_33;
      {
        ATerm i_47 = NULL,r_20 = NULL,s_20 = NULL;
        i_47 = t;
        t = term_n_21;
        r_20 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_33), i_47), term_k_33);
        s_20 = t;
        t = SSL_printnl(r_20, s_20);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_33), i_47), term_k_33);
        t = if_verbose5_1_0(y_8, t);
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
static ATerm o_8 (ATerm m_46, ATerm n_46, ATerm t)
{
  t = SSL_table_get(m_46, n_46);
  return(t);
}
static ATerm k_8 (ATerm a_45, ATerm b_45, ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  o_47 = t;
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_45, b_45);
        t = o_8(a_45, b_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_33 = ATgetFirst((ATermList) t);
            n_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_33);
        t = SSL_table_put(a_45, b_45, n_47);
        t = (ATerm) ATmakeAppl(sym__3, a_45, b_45, n_47);
      }
    else
      {
        t = o_33;
        t = SSL_table_remove(a_45, b_45);
        t = (ATerm) ATmakeAppl(sym__2, a_45, b_45);
      }
  }
  t = o_47;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_98 (ATerm), ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  u_47 = t;
  t = e_98(t);
  t_47 = t;
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_47 = NULL;
        t = term_a_22;
        w_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_47, term_a_22);
        t = o_8(t_47, w_47, t);
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_47 = ATgetFirst((ATermList) t);
      q_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_a_22;
  v_47 = t;
  t = SSL_table_put(t_47, v_47, q_47);
  t = r_47;
  {
    static ATerm b_9 (ATerm t)
    {
      ATerm x_47 = NULL;
      x_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_47, x_47);
      t = k_8(t_47, x_47, t);
      return(t);
    }
    t = map_1_0(b_9, t);
  }
  t = u_47;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_99(t);
      t = f_99(t);
      LocalPopChoice(u_33);
    }
  else
    {
      t = t_33;
      t = f_99(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL;
  a_48 = t;
  t = d_98(t);
  z_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_47, term_a_22);
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_48 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_33 = ATgetArgument(t, 0);
            ATerm y_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_a_22;
        i_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_47, term_a_22);
        t = o_8(z_47, i_48, t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = (ATerm) ATempty;
      }
  }
  b_48 = t;
  t = term_a_22;
  c_48 = t;
  t = (ATerm) ATinsert(CheckATermList(b_48), (ATerm) ATempty);
  d_48 = t;
  t = SSL_table_put(z_47, c_48, d_48);
  t = a_48;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm x_48 = NULL;
  x_48 = t;
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_48);
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = x_48;
      }
  }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm n_48 = NULL;
  static ATerm k_9 (ATerm t)
  {
    ATerm o_48 = NULL;
    o_48 = t;
    {
      ATerm b_34 = t;
      int c_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_48 = NULL,q_48 = NULL;
          t = term_f_22;
          p_48 = t;
          t = term_a_22;
          q_48 = t;
          t = term_d_34;
          t = o_8(p_48, q_48, t);
          LocalPopChoice(c_34);
        }
      else
        {
          t = b_34;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_48 != NULL) && (n_48 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_48 = ATgetFirst((ATermList) t);
        {
          ATerm e_34 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = n_48;
    t = map_1_0(l_9, t);
    t = o_48;
    t = end_scope_1_0(m_9, t);
    return(t);
  }
  t = begin_scope_1_0(e_9, t);
  t = restore_always_2_0(e_102, k_9, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
  a_49 = t;
  t = term_h_22;
  t = whoami_0_0(t);
  b_49 = t;
  t = term_n_21;
  d_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_34), b_49), term_f_34);
  e_49 = t;
  t = SSL_printnl(d_49, e_49);
  t = term_f_13;
  c_49 = t;
  t = SSL_exit(c_49);
  t = a_49;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm g_49 = NULL;
  g_49 = t;
  if(match_string(t, "-k"))
    {
      t = g_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_49;
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm h_49 = NULL,l_49 = NULL,w_49 = NULL;
  h_49 = t;
  t = SSL_string_to_int(h_49);
  l_49 = t;
  t = term_d_24;
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_24, l_49);
  t = r_8(w_49, l_49, t);
  t = h_49;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_9, o_9, p_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm y_49 = NULL;
  y_49 = t;
  if(match_string(t, "-S"))
    {
      t = y_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_49;
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL;
  t = term_z_12;
  z_49 = t;
  t = term_j_23;
  a_50 = t;
  t = term_i_34;
  t = r_8(z_49, a_50, t);
  t = term_j_34;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_k_34;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  t = SSL_string_to_int(b_50);
  c_50 = t;
  t = term_z_12;
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, c_50);
  t = r_8(d_50, c_50, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_50);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_l_34;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL;
  t = term_k_24;
  g_50 = t;
  t = term_h_22;
  h_50 = t;
  t = term_m_34;
  t = r_8(g_50, h_50, t);
  t = term_n_34;
  return(t);
}
static ATerm z_9 (ATerm t)
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
      t = Option_3_0(r_9, s_9, t_9, t);
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
            t = ArgOption_3_0(u_9, v_9, w_9, t);
            LocalPopChoice(s_34);
          }
        else
          {
            t = r_34;
            t = Option_3_0(x_9, y_9, z_9, t);
          }
      }
    }
  return(t);
}
static ATerm r_8 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm j_50 = NULL;
  t = term_p_12;
  j_50 = t;
  t = SSL_table_put(j_50, g_47, h_47);
  t = (ATerm) ATmakeAppl(sym__3, term_p_12, g_47, h_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm m_50 = NULL,o_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
      t = term_h_22;
      t = e_0(t);
      p_50 = t;
      t = term_t_34;
      q_50 = t;
      t = term_u_34;
      r_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_34, term_u_34, p_50);
      t = p_8(q_50, r_50, p_50, t);
      _fail(t);
    }
  else
    {
      ATerm u_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_50 = ATgetFirst((ATermList) t);
          o_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_50;
      t = c_0(t);
      t = term_h_22;
      t = d_0(t);
      u_50 = t;
      t = (ATerm) ATinsert(CheckATermList(o_50), u_50);
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm b_51 = NULL;
  b_51 = t;
  if(match_string(t, "-o"))
    {
      t = b_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_51;
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL;
  c_51 = t;
  t = term_q_12;
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, c_51);
  t = r_8(d_51, c_51, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_51);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_10, b_10, c_10, t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm f_51 = NULL;
  f_51 = t;
  if(match_string(t, "-i"))
    {
      t = f_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_51;
    }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  g_51 = t;
  t = term_i_22;
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_22, g_51);
  t = r_8(h_51, g_51, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_51);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_w_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_10, f_10, h_10, t);
  return(t);
}
static ATerm p_8 (ATerm v_44, ATerm w_44, ATerm u_44, ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,m_51 = NULL;
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_35 = ATgetArgument(t, 0);
            ATerm e_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
        t = o_8(v_44, w_44, t);
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        t = (ATerm) ATempty;
      }
  }
  k_51 = t;
  t = (ATerm) ATinsert(CheckATermList(k_51), u_44);
  m_51 = t;
  t = SSL_table_put(v_44, w_44, m_51);
  t = j_51;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
      t = term_h_22;
      t = n_0(t);
      x_51 = t;
      t = term_t_34;
      y_51 = t;
      t = term_u_34;
      z_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_34, term_u_34, x_51);
      t = p_8(y_51, z_51, x_51, t);
      _fail(t);
    }
  else
    {
      ATerm d_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_51 = ATgetFirst((ATermList) t);
          u_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_51;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_51 = ATgetFirst((ATermList) t);
          w_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_51;
      t = k_0(t);
      t = v_51;
      t = l_0(t);
      d_52 = t;
      t = (ATerm) ATinsert(CheckATermList(w_51), d_52);
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm f_52 = NULL;
  f_52 = t;
  if(match_string(t, "-I"))
    {
      t = f_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = f_52;
    }
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  t = term_e_25;
  h_52 = t;
  t = (ATerm) ATinsert(ATempty, g_52);
  i_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, (ATerm) ATinsert(ATempty, g_52));
  t = y_7(h_52, i_52, t);
  t = g_52;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_f_35;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL;
  j_52 = t;
  t = term_b_27;
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_27, j_52);
  t = r_8(k_52, j_52, t);
  t = j_52;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_h_35;
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
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
  l_52 = t;
  t = term_z_12;
  m_52 = t;
  t = term_j_23;
  n_52 = t;
  t = term_i_34;
  t = r_8(m_52, n_52, t);
  t = l_52;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_i_35;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL;
  o_52 = t;
  t = term_e_28;
  p_52 = t;
  t = term_f_13;
  q_52 = t;
  t = term_m_35;
  t = r_8(p_52, q_52, t);
  t = o_52;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(i_10, j_10, k_10, t);
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      {
        ATerm s_35 = t;
        int u_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_10, o_10, p_10, t);
            LocalPopChoice(u_35);
          }
        else
          {
            t = s_35;
            {
              ATerm v_35 = t;
              int x_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_10, r_10, s_10, t);
                  LocalPopChoice(x_35);
                }
              else
                {
                  t = v_35;
                  t = Option_3_0(t_10, u_10, w_10, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_22;
  t = whoami_0_0(t);
  r_52 = t;
  t = term_n_21;
  t_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_35), r_52);
  u_52 = t;
  t = SSL_printnl(t_52, u_52);
  t = term_f_13;
  s_52 = t;
  t = SSL_exit(s_52);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL;
  t = term_p_12;
  v_52 = t;
  t = term_z_35;
  w_52 = t;
  t = term_a_36;
  t = o_8(v_52, w_52, t);
  return(t);
}
static ATerm l_8 (ATerm u_41, ATerm v_41, ATerm t)
{
  ATerm b_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_41, v_41);
      LocalPopChoice(e_36);
    }
  else
    {
      t = b_36;
      t = SSL_addr(u_41, v_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
  y_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_52;
      t = z_94(t);
    }
  else
    {
      ATerm d_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_52 = ATgetFirst((ATermList) t);
          a_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_53;
      t = foldr_2_0(z_94, a_95, t);
      d_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_52, d_53);
      t = a_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_j_23;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm e_21 = NULL,h_21 = NULL;
  if(match_cons(t, sym__2))
    {
      e_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_8(e_21, h_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_53 = NULL,y_20 = NULL,z_20 = NULL;
  t = times_0_0(t);
  z_20 = t;
  t = SSL_explode_term(z_20);
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_20;
  t = foldr_2_0(y_10, d_11, t);
  g_53 = t;
  t = SSL_TicksToSeconds(g_53);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
  r_53 = t;
  if(match_cons(t, sym__2))
    {
      s_53 = ATgetArgument(t, 0);
      t_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_53;
        if((s_53 != t))
          {
            _fail(t);
          }
        t = r_53;
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = (ATerm) ATmakeAppl(sym__2, s_53, t_53);
        {
          ATerm i_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_53, t_53);
              LocalPopChoice(k_36);
            }
          else
            {
              t = i_36;
              t = SSL_gtr(s_53, t_53);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_53, t_53);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm x_53 = NULL;
  x_53 = t;
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
        t = term_p_12;
        a_54 = t;
        t = term_z_12;
        b_54 = t;
        t = term_e_13;
        t = o_8(a_54, b_54, t);
        z_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_53, term_f_13);
        t = geq_0_0(t);
        t = x_53;
        t = q_99(t);
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        t = x_53;
      }
  }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,g_54 = NULL,h_54 = NULL;
  t = run_time_0_0(t);
  d_54 = t;
  t = term_h_22;
  t = whoami_0_0(t);
  e_54 = t;
  t = term_n_21;
  g_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_36), d_54), term_q_13), e_54);
  h_54 = t;
  t = SSL_printnl(g_54, h_54);
  t = (ATerm) ATmakeAppl(sym__2, term_n_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_36), d_54), term_q_13), e_54));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_23;
  i_54 = t;
  t = SSL_exit(i_54);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  t_54 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_54;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_54 = ATgetArgument(t, 0);
          {
            ATerm z_21 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(t_54);
            z_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_54);
            e_5 = t;
            t = SSLsetAnnotations(e_5, z_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_54;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_103 (ATerm), ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_54 = NULL,m_54 = NULL;
      t = term_p_12;
      l_54 = t;
      t = term_u_36;
      m_54 = t;
      t = term_v_36;
      t = o_8(l_54, m_54, t);
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      t = fetch_1_0(g_11, t);
    }
  t = u_103(t);
  return(t);
}
ATerm map_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  static ATerm j_55 (ATerm t)
  {
    ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
    g_55 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_55;
      }
    else
      {
        ATerm a_23 = NULL,h_23 = NULL,i_23 = NULL,z_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_55 = ATgetFirst((ATermList) t);
            i_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_55);
        a_23 = t;
        t = h_55;
        t = t_87(t);
        h_23 = t;
        t = i_55;
        t = j_55(t);
        i_23 = t;
        t = (ATerm) ATinsert(CheckATermList(i_23), h_23);
        z_5 = t;
        t = SSLsetAnnotations(z_5, a_23);
      }
    return(t);
  }
  t = j_55(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_55 = ATgetFirst((ATermList) t);
      n_55 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_55 = NULL,s_55 = NULL;
        static ATerm i_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_55)), not_null(s_55));
          return(t);
        }
        t = n_55;
        t = i_0(t);
        if(((r_55 != NULL) && (r_55 != t)))
          _fail(t);
        else
          r_55 = t;
        t = m_55;
        t = g_0(t);
        if(((s_55 != NULL) && (s_55 != t)))
          _fail(t);
        else
          s_55 = t;
        t = n_55;
        t = reverse_acc_2_0(g_0, i_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_22;
      t = i_0(t);
    }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,c_6 = NULL;
  a_56 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_56);
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_55);
  c_6 = t;
  t = SSLsetAnnotations(c_6, y_55);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm c_56 = NULL;
  c_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_56), term_w_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL;
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_55 = NULL,x_55 = NULL;
      t = term_p_12;
      w_55 = t;
      t = term_z_35;
      x_55 = t;
      t = term_a_36;
      t = o_8(w_55, x_55, t);
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      t = fetch_1_0(l_11, t);
    }
  t = term_c_37;
  t = echo_0_0(t);
  t = term_t_34;
  u_55 = t;
  t = term_u_34;
  v_55 = t;
  t = term_d_37;
  t = o_8(u_55, v_55, t);
  t = reverse_acc_2_0(_id, n_11, t);
  t = map_1_0(o_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  static ATerm z_56 (ATerm t)
  {
    ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
    w_56 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_56 = ATgetFirst((ATermList) t);
        y_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_37 = t;
      int g_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_23 = NULL,b_24 = NULL,f_7 = NULL;
          t = SSLgetAnnotations(w_56);
          y_23 = t;
          t = x_56;
          t = d_88(t);
          b_24 = t;
          t = (ATerm) ATinsert(CheckATermList(y_56), b_24);
          f_7 = t;
          t = SSLsetAnnotations(f_7, y_23);
          LocalPopChoice(g_37);
        }
      else
        {
          t = f_37;
          {
            ATerm p_24 = NULL,s_24 = NULL,g_7 = NULL;
            t = SSLgetAnnotations(w_56);
            p_24 = t;
            t = y_56;
            t = z_56(t);
            s_24 = t;
            t = (ATerm) ATinsert(CheckATermList(s_24), x_56);
            g_7 = t;
            t = SSLsetAnnotations(g_7, p_24);
          }
        }
    }
    return(t);
  }
  t = z_56(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL;
  d_57 = t;
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_57;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_37 = ATgetFirst((ATermList) t);
                ATerm k_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_57;
          }
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        t = (ATerm) ATinsert(ATempty, d_57);
      }
  }
  e_57 = t;
  t = term_s_12;
  f_57 = t;
  t = SSL_printnl(f_57, e_57);
  t = d_57;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL;
  t = term_p_12;
  j_57 = t;
  t = term_z_35;
  k_57 = t;
  t = term_a_36;
  t = o_8(j_57, k_57, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  t = term_l_37;
  l_57 = t;
  t = term_h_22;
  m_57 = t;
  t = term_m_37;
  t = r_8(l_57, m_57, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_n_37;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL;
  t = term_l_37;
  p_57 = t;
  t = term_h_22;
  q_57 = t;
  t = term_m_37;
  t = r_8(p_57, q_57, t);
  t = term_a_28;
  n_57 = t;
  t = term_h_22;
  o_57 = t;
  t = term_o_37;
  t = r_8(n_57, o_57, t);
  t = term_p_37;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_11, q_11, u_11, t);
      LocalPopChoice(t_37);
    }
  else
    {
      t = r_37;
      t = Option_3_0(v_11, w_11, y_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_67 (ATerm), ATerm b_67 (ATerm), ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,o_7 = NULL;
  w_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_57 = ATgetFirst((ATermList) t);
      t_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_57);
  r_57 = t;
  t = s_57;
  t = a_67(t);
  u_57 = t;
  t = t_57;
  t = b_67(t);
  v_57 = t;
  t = (ATerm) ATinsert(CheckATermList(v_57), u_57);
  o_7 = t;
  t = SSLsetAnnotations(o_7, r_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,g_58 = NULL,h_58 = NULL,z_7 = NULL;
  b_58 = t;
  {
    ATerm u_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_37;
        t = s_105(t);
        LocalPopChoice(x_37);
      }
    else
      {
        t = u_37;
      }
  }
  t = b_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_58 = ATgetFirst((ATermList) t);
      e_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_58);
  c_58 = t;
  t = term_z_35;
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_35, d_58);
  t = r_8(h_58, d_58, t);
  t = e_58;
  {
    static ATerm r_58 (ATerm t)
    {
      ATerm z_37 = t;
      int a_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_38 = t;
          int d_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_58 = NULL;
              k_58 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_58;
              LocalPopChoice(d_38);
            }
          else
            {
              t = c_38;
              t = s_105(t);
              t = Cons_2_0(_id, r_58, t);
            }
          LocalPopChoice(a_38);
        }
      else
        {
          t = z_37;
          {
            ATerm n_58 = NULL,o_58 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_58 = ATgetFirst((ATermList) t);
                o_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_58), (ATerm) ATmakeAppl(sym_Undefined_1, n_58));
          }
        }
      return(t);
    }
    t = r_58(t);
  }
  g_58 = t;
  t = (ATerm) ATinsert(CheckATermList(g_58), (ATerm) ATmakeAppl(sym_Program_1, d_58));
  z_7 = t;
  t = SSLsetAnnotations(z_7, c_58);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm d_59 = NULL;
  d_59 = t;
  if(match_string(t, "--help"))
    {
      t = d_59;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_59;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_59;
        }
    }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL;
  t = term_u_36;
  e_59 = t;
  t = term_h_22;
  f_59 = t;
  t = term_h_38;
  t = r_8(e_59, f_59, t);
  t = term_i_38;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_j_38;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL;
  y_58 = t;
  t = term_t_34;
  a_59 = t;
  t = term_u_34;
  b_59 = t;
  t = (ATerm) ATempty;
  c_59 = t;
  t = SSL_table_put(a_59, b_59, c_59);
  t = y_58;
  {
    static ATerm z_11 (ATerm t)
    {
      ATerm n_38 = t;
      int o_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_105(t);
          LocalPopChoice(o_38);
        }
      else
        {
          t = n_38;
          {
            ATerm p_38 = t;
            int q_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_12, c_12, d_12, t);
                LocalPopChoice(q_38);
              }
            else
              {
                t = p_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_11, t);
  }
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_59 = NULL;
        q_59 = t;
        {
          ATerm t_38 = t;
          int u_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_24 = NULL;
              t = q_59;
              {
                ATerm w_38 = t;
                int x_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_25 = NULL,b_25 = NULL;
                    t = term_p_12;
                    a_25 = t;
                    t = term_u_36;
                    b_25 = t;
                    t = term_v_36;
                    t = o_8(a_25, b_25, t);
                    LocalPopChoice(x_38);
                  }
                else
                  {
                    t = w_38;
                    t = fetch_1_0(e_12, t);
                  }
              }
              t = q_59;
              t = default_system_usage_0_0(t);
              t = term_j_23;
              z_24 = t;
              t = SSL_exit(z_24);
              LocalPopChoice(u_38);
            }
          else
            {
              t = t_38;
              {
                ATerm h_25 = NULL,i_25 = NULL,m_25 = NULL;
                t = term_p_12;
                i_25 = t;
                t = term_l_37;
                m_25 = t;
                t = term_y_38;
                t = o_8(i_25, m_25, t);
                t = q_59;
                t = default_system_about_0_0(t);
                t = term_j_23;
                h_25 = t;
                t = SSL_exit(h_25);
              }
            }
        }
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        {
          ATerm z_38 = t;
          int b_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
              static ATerm f_12 (ATerm t)
              {
                ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,d_9 = NULL;
                w_59 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_59 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_59);
                u_59 = t;
                t = v_59;
                if(((w_58 != NULL) && (w_58 != t)))
                  _fail(t);
                else
                  w_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_59);
                d_9 = t;
                t = SSLsetAnnotations(d_9, u_59);
                return(t);
              }
              t = fetch_1_0(f_12, t);
              t = term_n_21;
              s_59 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_58)), term_c_39);
              t_59 = t;
              t = SSL_printnl(s_59, t_59);
              t = (ATerm) ATmakeAppl(sym__2, term_n_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_58)), term_c_39));
              t = default_system_usage_0_0(t);
              t = term_f_13;
              r_59 = t;
              t = SSL_exit(r_59);
              LocalPopChoice(b_39);
            }
          else
            {
              t = z_38;
            }
        }
      }
  }
  x_58 = t;
  t = term_t_34;
  z_58 = t;
  t = SSL_table_destroy(z_58);
  t = x_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
  t = parse_options_1_0(w_103, t);
  b_60 = t;
  t = term_d_39;
  e_60 = t;
  t = SSL_table_create(e_60);
  t = term_d_39;
  c_60 = t;
  t = term_e_39;
  d_60 = t;
  t = SSL_table_put(c_60, d_60, b_60);
  t = b_60;
  t = y_103(t);
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_103, t);
        LocalPopChoice(g_39);
      }
    else
      {
        t = f_39;
        {
          ATerm i_39 = t;
          int l_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_39);
            }
          else
            {
              t = i_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(s_39);
          }
        else
          {
            t = r_39;
            {
              ATerm t_39 = t;
              int u_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(u_39);
                }
              else
                {
                  t = t_39;
                  {
                    ATerm v_39 = t;
                    int w_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(i_12, j_12, l_12, t);
                        LocalPopChoice(w_39);
                      }
                    else
                      {
                        t = v_39;
                        {
                          ATerm z_39 = t;
                          int a_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(a_40);
                            }
                          else
                            {
                              t = z_39;
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
static ATerm h_12 (ATerm t)
{
  t = xtc_temp_files_1_0(m_12, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL;
  t = term_l_28;
  g_60 = t;
  t = term_h_22;
  h_60 = t;
  t = term_c_40;
  t = r_8(g_60, h_60, t);
  t = term_i_40;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_j_40;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
  ATerm l_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL;
      t = term_p_12;
      o_60 = t;
      t = term_i_22;
      p_60 = t;
      t = term_v_40;
      t = o_8(o_60, p_60, t);
      n_60 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_60);
      LocalPopChoice(o_40);
    }
  else
    {
      t = l_40;
      t = term_v_12;
    }
  j_60 = t;
  t = term_w_40;
  t = xtc_find_path_0_0(t);
  k_60 = t;
  t = term_e_25;
  l_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_60), term_x_40);
  m_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, k_60), term_x_40));
  t = y_7(l_60, m_60, t);
  t = j_60;
  t = parse_module_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_12, default_usage_0_0, _id, h_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
