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
Symbol sym_Hashtable_1;
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
Symbol sym_Specification_1;
Symbol sym_Module_2;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
}
ATerm term_d_41;
ATerm term_c_41;
ATerm term_z_40;
ATerm term_w_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_q_39;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_p_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_v_37;
ATerm term_t_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_l_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_d_37;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_f_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_l_34;
ATerm term_r_33;
ATerm term_m_33;
ATerm term_g_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_v_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_i_29;
ATerm term_d_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_a_28;
ATerm term_q_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_s_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_h_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_t_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_s_23;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
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
ATerm term_n_18;
ATerm term_m_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_v_16;
ATerm term_p_16;
ATerm term_k_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_g_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_n_13, term_g_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_n_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_a_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_k_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_w_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_k_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_a_17, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_f_17, term_i_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_u_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_h_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_n_18, term_p_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_18, term_s_18, term_t_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_z_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_d_19, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_h_19, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_p_19, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_t_19, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_y_19, term_a_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_f_20, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_20, term_k_20, term_l_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_20, term_s_20, term_t_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_a_21, term_f_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" ** Warning: Mismatch between basename of input file (", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol(") and module name (", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol(") specified", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_l_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_k_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_g_27);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_q_28);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_k_32);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_r_32);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_z_31);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_g_22);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_l_23);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_23);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_q_22);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_n_13);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_p_36);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_h_37);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_k_35);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_c_38, term_q_22);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym__2, term_o_28, term_q_22);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym__2, term_h_37, term_q_22);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__3, term_f_35, term_k_35, (ATerm) ATempty);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_c_38);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_q_22);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_r_22);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm c_8 (ATerm u_43, ATerm v_43, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm d_8 (ATerm j_27, ATerm k_27, ATerm t);
static ATerm e_8 (ATerm b_98 (ATerm), ATerm n_212, ATerm t_27, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm t);
static ATerm f_8 (ATerm b_24, ATerm c_24, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm q_96 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm u_120 (ATerm), ATerm t);
static ATerm h_8 (ATerm q_113 (ATerm), ATerm c_45, ATerm a_45, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm x_0 (ATerm), ATerm z_0 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm r_103 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm check_module_name_0_1 (ATerm u_0, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm verbosity_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm k_119 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm v_118 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm t_117 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm j_8 (ATerm i_24, ATerm h_24, ATerm t);
static ATerm x_8 (ATerm j_24, ATerm k_24, ATerm t);
ATerm rename_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
static ATerm k_8 (ATerm u_60, ATerm o_579, ATerm t);
ATerm find_in_includes_1_0 (ATerm k_95 (ATerm), ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm s_117 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm e_103 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm basename_1_0 (ATerm i_119 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_103 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_33 (ATerm n_32, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_8 (ATerm r_60, ATerm q_60, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm debug_1_0 (ATerm z_97 (ATerm), ATerm t);
static ATerm m_8 (ATerm f_60, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm v_117 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm u_117 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm w_117 (ATerm), ATerm t);
static ATerm o_8 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm x_34, ATerm w_34, ATerm t);
static ATerm p_8 (ATerm d_107 (ATerm), ATerm t_34, ATerm s_34, ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_8 (ATerm d_56, ATerm e_56, ATerm f_56, ATerm t);
static ATerm r_8 (ATerm y_117 (ATerm), ATerm n_56, ATerm m_56, ATerm t);
static ATerm w_8 (ATerm o_61, ATerm p_61, ATerm t);
static ATerm i_40 (ATerm a_40, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_8 (ATerm p_27, ATerm t);
static ATerm t_8 (ATerm g_42, ATerm h_42, ATerm t);
static ATerm u_8 (ATerm x_61, ATerm y_61, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_42 (ATerm u_40, ATerm t);
static ATerm d_42 (ATerm a_41, ATerm b_41, ATerm e_41, ATerm t);
static ATerm i_42 (ATerm m_41, ATerm n_41, ATerm o_41, ATerm t);
static ATerm v_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_111 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm j_48 (ATerm l_47, ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm e_9 (ATerm z_56, ATerm a_57, ATerm t);
static ATerm y_8 (ATerm l_55, ATerm m_55, ATerm t);
ATerm end_scope_1_0 (ATerm n_113 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_113 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_120 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_9 (ATerm l_60, ATerm m_60, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm f_9 (ATerm g_55, ATerm h_55, ATerm f_55, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_8 (ATerm o_43, ATerm p_43, ATerm t);
ATerm foldr_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_117 (ATerm), ATerm t);
static ATerm i_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_11 (ATerm t);
ATerm need_help_1_0 (ATerm w_121 (ATerm), ATerm t);
static ATerm i_9 (ATerm y_59, ATerm z_59, ATerm a_60, ATerm t);
static ATerm j_9 (ATerm b_60, ATerm c_60, ATerm t);
ATerm lookup_table_0_1 (ATerm s_56, ATerm t);
ATerm new_hashtable_0_2 (ATerm g_60, ATerm h_60, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm b_9 (ATerm d_60, ATerm e_60, ATerm t);
static ATerm c_9 (ATerm i_60, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_102 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_103 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_123 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm parse_options_1_0 (ATerm t_123 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
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
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 = NULL,i_1 = NULL;
      t = term_w_12;
      h_1 = t;
      t = term_x_12;
      i_1 = t;
      t = term_y_12;
      t = e_9(h_1, i_1, t);
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = term_z_12;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm c_1 = NULL;
  c_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_0 = NULL,c_0 = NULL;
      t = term_x_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 = NULL,i_0 = NULL;
            t = term_w_12;
            f_0 = t;
            t = term_x_12;
            i_0 = t;
            t = term_y_12;
            t = e_9(f_0, i_0, t);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            t = term_z_12;
          }
      }
      b_0 = t;
      t = term_c_13;
      c_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_13, b_0);
      t = x_8(c_0, b_0, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm d_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_1;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm c_8 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(u_43, v_43);
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = SSL_subtr(u_43, v_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
  t = term_g_13;
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_1 = NULL,r_1 = NULL;
        t = term_w_12;
        o_1 = t;
        t = term_g_13;
        r_1 = t;
        t = term_m_13;
        t = e_9(o_1, r_1, t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = term_n_13;
      }
  }
  l_1 = t;
  t = term_n_13;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_1, term_n_13);
  t = c_8(l_1, n_1, t);
  m_1 = t;
  t = SSL_int_to_string(m_1);
  k_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_1), term_g_13);
  return(t);
}
static ATerm d_8 (ATerm j_27, ATerm k_27, ATerm t)
{
  ATerm u_1 = NULL;
  t = SSL_write_term_to_stream_baf(j_27, k_27);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_1);
  return(t);
}
static ATerm e_8 (ATerm b_98 (ATerm), ATerm n_212, ATerm t_27, ATerm t)
{
  ATerm v_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_212, term_o_13);
  t = v_8(t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_1, t_27);
  t = b_98(t);
  t = fclose_0_0(t);
  t = t_27;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if(match_cons(q_13, sym_Stream_1))
        {
          z_1 = ATgetArgument(q_13, 0);
        }
      else
        _fail(t);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8(z_1, a_2, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL;
  x_1 = t;
  t = xtc_new_file_0_0(t);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
  t = e_8(k_0, w_1, x_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_1);
  t = xtc_transform_file_2_0(t_119, u_119, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm f_8 (ATerm b_24, ATerm c_24, ATerm t)
{
  t = SSL_execvp(b_24, c_24);
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
        ATerm e_1 = NULL,f_1 = NULL;
        t = SSL_int_to_string(d_3);
        e_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_13), e_1), term_r_13);
        f_1 = t;
        t = SSL_concat_strings(f_1);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_3), term_u_13), e_2), term_t_13), d_3);
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
    ATerm v_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_0 (ATerm t);
        static ATerm n_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm z_13 = ATgetArgument(t, 0);
              if((j_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm d_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_21), term_w_20), term_q_20), term_h_20), term_b_20), term_v_19), term_r_19), term_n_19), term_j_19), term_f_19), term_a_19), term_u_18), term_q_18), term_i_18), term_a_18), term_w_17), term_s_17), term_j_17), term_c_17), term_p_16), term_x_15), term_q_15), term_m_15), term_g_15), term_c_15), term_x_14), term_p_14), term_h_14);
        t = fetch_elem_1_0(n_0, t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_3 = NULL,c_4 = NULL;
  q_3 = t;
  {
    ATerm i_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            c_4 = ATgetArgument(t, 1);
            {
              ATerm o_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_21);
        {
          ATerm p_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_2 = NULL,z_2 = NULL,i_3 = NULL;
              t = c_4;
              {
                ATerm t_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_21;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              p_2 = t;
              t = term_u_21;
              z_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, p_2), term_v_21);
              i_3 = t;
              t = SSL_printnl(z_2, i_3);
              t = (ATerm) ATmakeAppl(sym__2, term_u_21, (ATerm) ATinsert(ATinsert(ATempty, p_2), term_v_21));
              LocalPopChoice(s_21);
            }
          else
            {
              t = p_21;
              t = q_3;
            }
        }
      }
    else
      {
        t = i_21;
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
ATerm fork_and_wait_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  ATerm c_5 = NULL,e_5 = NULL;
  e_5 = t;
  t = fork_0_0(t);
  c_5 = t;
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_5;
        t = q_96(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = SSL_waitpid(c_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_22 = ATgetArgument(t, 0);
            if(((ATgetType(a_22) != AT_INT) || (ATgetInt((ATermInt) a_22) != 0)))
              _fail(t);
            {
              ATerm b_22 = ATgetArgument(t, 1);
            }
            {
              ATerm c_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_5;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_120 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL;
  k_5 = t;
  t = u_120(t);
  t = xtc_find_0_0(t);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_5, k_5);
  {
    static ATerm v_0 (ATerm t);
    static ATerm v_0 (ATerm t)
    {
      ATerm m_5 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, j_5, k_5);
      t = f_8(j_5, k_5, t);
      t = term_d_22;
      m_5 = t;
      t = SSL_exit(m_5);
      return(t);
    }
    t = fork_and_wait_1_0(v_0, t);
  }
  t = k_5;
  return(t);
}
static ATerm h_8 (ATerm q_113 (ATerm), ATerm c_45, ATerm a_45, ATerm t)
{
  ATerm n_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  r_5 = t;
  t = q_113(t);
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_5, c_45, a_45);
  t = f_9(n_5, c_45, a_45, t);
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL;
        t = term_g_22;
        x_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_5, term_g_22);
        t = e_9(n_5, x_5, t);
        {
          ATerm h_22 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_22;
            }
        }
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
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
  t = (ATerm) ATmakeAppl(sym__3, n_5, term_g_22, (ATerm) ATinsert(CheckATermList(q_5), (ATerm) ATinsert(CheckATermList(p_5), c_45)));
  t = lookup_table_0_1(n_5, t);
  w_5 = t;
  t = term_g_22;
  t_5 = t;
  t = (ATerm) ATinsert(CheckATermList(q_5), (ATerm) ATinsert(CheckATermList(p_5), c_45));
  u_5 = t;
  t = w_5;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(t_5, u_5, v_5, t);
  t = r_5;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm a_6 = NULL;
  ATerm i_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_6 = NULL,n_3 = NULL;
      f_6 = t;
      t = term_l_22;
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_6, term_l_22);
      t = t_8(f_6, n_3, t);
      a_6 = t;
      t = SSL_mkstemp(a_6);
      LocalPopChoice(k_22);
    }
  else
    {
      t = i_22;
      {
        ATerm g_6 = NULL;
        t = term_m_22;
        g_6 = t;
        t = SSL_perror(g_6);
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
  t = term_n_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_6 = NULL,l_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  t = P__tmpdir_0_0(t);
  r_6 = t;
  t = term_o_22;
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_6, term_o_22);
  t = t_8(r_6, s_6, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      l_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_q_22;
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_6, term_q_22);
  t = h_8(y_0, l_6, q_6, t);
  t = SSL_close(i_6);
  t = l_6;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm x_0 (ATerm), ATerm z_0 (ATerm), ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL;
  u_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm y_6 = NULL,z_6 = NULL;
      t = u_6;
      t = xtc_new_file_0_0(t);
      y_6 = t;
      t = z_0(t);
      z_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_6, (ATerm) ATinsert(ATinsert(ATempty, y_6), term_x_12));
      t = conc_0_0(t);
      t = xtc_command_1_0(x_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_6);
    }
  else
    {
      ATerm d_7 = NULL,e_7 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_6;
      t = xtc_new_file_0_0(t);
      d_7 = t;
      t = z_0(t);
      e_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_7), term_x_12), v_6), term_r_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(x_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_7);
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  static ATerm l_9 (ATerm t);
  static ATerm l_9 (ATerm t)
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_8 = NULL,d_9 = NULL,k_9 = NULL,u_3 = NULL,d_4 = NULL,e_0 = NULL;
        g_8 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_9 = ATgetFirst((ATermList) t);
            k_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_8);
        u_3 = t;
        t = k_9;
        t = l_9(t);
        d_4 = t;
        t = (ATerm) ATinsert(CheckATermList(d_4), d_9);
        e_0 = t;
        t = SSLsetAnnotations(e_0, u_3);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = r_103(t);
      }
    return(t);
  }
  t = l_9(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  v_9 = t;
  t = SSL_explode_string(v_9);
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_1 (ATerm t);
        static ATerm a_1 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_22 = ATgetFirst((ATermList) t);
              if(((ATgetType(w_22) != AT_INT) || (ATgetInt((ATermInt) w_22) != 47)))
                _fail(t);
              if(((t_9 != NULL) && (t_9 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                t_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(a_1, t);
        t = not_null(t_9);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
      }
  }
  u_9 = t;
  t = SSL_implode_string(u_9);
  return(t);
}
ATerm check_module_name_0_1 (ATerm u_0, ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Specification_1))
          {
            ATerm z_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_22);
        t = a_11;
      }
    else
      {
        t = x_22;
        if(match_cons(t, sym_Module_2))
          {
            b_11 = ATgetArgument(t, 0);
            {
              ATerm b_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = a_11;
        {
          ATerm c_23 = t;
          int d_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_4 = NULL;
              t = u_0;
              t = get_filename_0_0(t);
              t_4 = t;
              if((b_11 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym__2, t_4, t_4);
              LocalPopChoice(d_23);
            }
          else
            {
              t = c_23;
              {
                ATerm z_5 = NULL,b_6 = NULL,j_6 = NULL,k_6 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_23), b_11), term_f_23), u_0), term_e_23);
                k_6 = t;
                t = SSL_concat_strings(k_6);
                z_5 = t;
                t = term_u_21;
                b_6 = t;
                t = (ATerm) ATinsert(ATempty, z_5);
                j_6 = t;
                t = SSL_printnl(b_6, j_6);
                t = a_11;
              }
            }
        }
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm j_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm l_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_h_23);
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_11, (ATerm) ATinsert(ATempty, term_h_23));
      t = w_8(j_11, l_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm verbosity_0_0 (ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_11 = NULL,n_11 = NULL;
      t = term_w_12;
      m_11 = t;
      t = term_g_13;
      n_11 = t;
      t = term_m_13;
      t = e_9(m_11, n_11, t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      t = term_l_23;
    }
  return(t);
}
ATerm if_not_silent_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_23 = t;
      int p_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_11 = NULL;
          v_11 = t;
          t = verbosity_0_0(t);
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
            _fail(t);
          t = v_11;
          LocalPopChoice(p_23);
        }
      else
        {
          t = o_23;
          t = t_0(t);
        }
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm q_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
            y_11 = t;
            t = term_w_12;
            z_11 = t;
            t = term_g_13;
            a_12 = t;
            t = term_m_13;
            t = e_9(z_11, a_12, t);
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
              _fail(t);
            t = y_11;
            LocalPopChoice(r_23);
          }
        else
          {
            t = q_23;
            t = t_0(t);
          }
      }
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  t = basename_1_0(_id, t);
  h_12 = t;
  t = term_q_22;
  t = k_119(t);
  g_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_12), term_s_23), h_12);
  f_12 = t;
  t = SSL_concat_strings(f_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  j_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL;
        t = j_13;
        t = q_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, k_13, b_7);
        t = x_8(k_13, b_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_13);
        LocalPopChoice(w_23);
      }
    else
      {
        t = t_23;
        {
          ATerm x_23 = t;
          int y_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_7 = NULL;
              t = j_13;
              t = q_0(t);
              n_7 = t;
              {
                ATerm e_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_7 = NULL;
                    o_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = o_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = o_7;
                          }
                        else
                          {
                            t = o_7;
                            if((k_13 != t))
                              {
                                _fail(t);
                              }
                            t = o_7;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_13, n_7);
              t = x_8(k_13, n_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_13);
              LocalPopChoice(y_23);
            }
          else
            {
              t = x_23;
              t = j_13;
              t = q_0(t);
              if((k_13 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_13);
            }
        }
      }
  }
  return(t);
}
ATerm if_keep1_1_0 (ATerm v_118 (ATerm), ATerm t)
{
  ATerm w_13 = NULL;
  w_13 = t;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_13 = NULL,b_14 = NULL,c_14 = NULL;
        t = term_w_12;
        b_14 = t;
        t = term_l_24;
        c_14 = t;
        t = term_m_24;
        t = e_9(b_14, c_14, t);
        y_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_13, term_n_13);
        t = geq_0_0(t);
        t = w_13;
        t = v_118(t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = w_13;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm t_117 (ATerm), ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_14 = NULL,j_14 = NULL,m_14 = NULL;
        t = term_w_12;
        j_14 = t;
        t = term_g_13;
        m_14 = t;
        t = term_m_13;
        t = e_9(j_14, m_14, t);
        i_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_14, term_v_14);
        t = geq_0_0(t);
        t = f_14;
        t = t_117(t);
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = f_14;
      }
  }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm t_14 = NULL;
  if(match_cons(t, sym_TopSort_1))
    {
      t_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_14;
  return(t);
}
ATerm pass_sort_0_0 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
      t = get_meta_0_0(t);
      if(match_cons(t, sym_Meta_1))
        {
          s_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_14;
      t = fetch_elem_1_0(b_1, t);
      r_14 = t;
      t = SSL_is_string(r_14);
      q_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, q_14), term_t_24);
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
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
static ATerm j_8 (ATerm i_24, ATerm h_24, ATerm t)
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(i_24, h_24);
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      t = get_errno_0_0(t);
      t = term_q_22;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, i_24, h_24);
      t = x_8(i_24, h_24, t);
      t = SSL_remove(i_24);
    }
  return(t);
}
static ATerm x_8 (ATerm j_24, ATerm k_24, ATerm t)
{
  t = SSL_copy(j_24, k_24);
  return(t);
}
ATerm rename_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm j_15 = NULL,l_15 = NULL;
  j_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_7 = NULL;
        t = j_15;
        t = r_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_z_12;
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_15, term_z_12);
        t = x_8(l_15, x_7, t);
        t = SSL_remove(l_15);
        t = term_z_12;
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        {
          ATerm z_24 = t;
          int a_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_9 = NULL;
              t = j_15;
              t = r_0(t);
              g_9 = t;
              {
                ATerm b_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_9 = NULL;
                    m_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = m_9;
                      }
                    else
                      {
                        t = m_9;
                        if((l_15 != t))
                          {
                            _fail(t);
                          }
                        t = m_9;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_25;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_15, g_9);
              t = j_8(l_15, g_9, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_9);
              LocalPopChoice(a_25);
            }
          else
            {
              t = z_24;
              t = j_15;
              t = r_0(t);
              if((l_15 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_15);
            }
        }
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = debug_1_0(g_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_c_25;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm a_16 = NULL,d_16 = NULL,e_16 = NULL;
  a_16 = t;
  t = term_u_21;
  d_16 = t;
  t = (ATerm) ATinsert(ATempty, term_g_25);
  e_16 = t;
  t = SSL_printnl(d_16, e_16);
  t = a_16;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL;
  t = term_w_12;
  h_16 = t;
  t = term_k_25;
  i_16 = t;
  t = term_l_25;
  t = e_9(h_16, i_16, t);
  t = map_1_0(b_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm j_16 = NULL;
  j_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_16), term_k_25);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  t = term_w_12;
  l_16 = t;
  t = term_k_25;
  m_16 = t;
  t = term_l_25;
  t = e_9(l_16, m_16, t);
  t = map_1_0(h_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm n_16 = NULL;
  n_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_16), term_k_25);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  t = if_verbose6_1_0(d_1, t);
  s_15 = t;
  t = guarantee_extension_1_0(j_1, t);
  r_15 = t;
  t = s_15;
  {
    ATerm m_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_15 = NULL;
        t = r_15;
        t = find_in_includes_1_0(p_1, t);
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_15);
        LocalPopChoice(o_25);
      }
    else
      {
        t = m_25;
        {
          ATerm z_15 = NULL;
          static ATerm i_2 (ATerm t);
          static ATerm i_2 (ATerm t)
          {
            t = r_15;
            return(t);
          }
          t = if_verbose2_1_0(q_1, t);
          t = guarantee_extension_1_0(s_1, t);
          z_15 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_15);
          {
            ATerm v_25 = t;
            int w_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_16 = NULL,g_16 = NULL,s_0 = NULL;
                g_16 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm x_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_16);
                f_16 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, z_15);
                s_0 = t;
                t = SSLsetAnnotations(s_0, f_16);
                LocalPopChoice(w_25);
                t = xtc_transform_file_2_0(t_1, y_1, t);
              }
            else
              {
                t = v_25;
                t = xtc_transform_term_2_0(c_2, d_2, t);
              }
          }
          t = rename_to_1_0(i_2, t);
        }
      }
  }
  return(t);
}
static ATerm k_8 (ATerm u_60, ATerm o_579, ATerm t)
{
  static ATerm k_2 (ATerm t);
  static ATerm k_2 (ATerm t)
  {
    ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
    q_16 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_60), term_b_26), q_16);
    t_16 = t;
    t = SSL_concat_strings(t_16);
    r_16 = t;
    t = (ATerm) ATinsert(ATempty, term_h_23);
    s_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_16, (ATerm) ATinsert(ATempty, term_h_23));
    t = w_8(r_16, s_16, t);
    return(t);
  }
  t = o_579;
  t = fetch_elem_1_0(k_2, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  static ATerm l_2 (ATerm t);
  static ATerm l_2 (ATerm t)
  {
    t = debug_1_0(k_95, t);
    return(t);
  }
  x_16 = t;
  t = term_w_12;
  y_16 = t;
  t = term_k_25;
  z_16 = t;
  t = term_l_25;
  t = e_9(y_16, z_16, t);
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_16, u_16);
  t = k_8(x_16, u_16, t);
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
  t = term_c_26;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_d_26;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_h_26;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,p_17 = NULL;
  k_17 = t;
  t = term_u_21;
  l_17 = t;
  t = (ATerm) ATinsert(ATempty, term_j_26);
  p_17 = t;
  t = SSL_printnl(l_17, p_17);
  t = k_17;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_k_26;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_k_26;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm e_17 = NULL,g_17 = NULL;
  t = if_verbose6_1_0(m_2, t);
  e_17 = t;
  t = guarantee_extension_1_0(o_2, t);
  g_17 = t;
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_17 = NULL;
        t = find_in_includes_1_0(t_2, t);
        h_17 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_17);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        {
          static ATerm l_3 (ATerm t);
          static ATerm l_3 (ATerm t)
          {
            t = g_17;
            return(t);
          }
          t = if_verbose2_1_0(u_2, t);
          t = e_17;
          t = get_syntax_definition_0_0(t);
          {
            ATerm n_26 = t;
            int o_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_18 = NULL,c_18 = NULL;
                c_18 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    b_18 = ATgetArgument(t, 0);
                    {
                      ATerm s_9 = NULL,w_0 = NULL;
                      t = SSLgetAnnotations(c_18);
                      s_9 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, b_18);
                      w_0 = t;
                      t = SSLsetAnnotations(w_0, s_9);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = c_18;
                  }
                LocalPopChoice(o_26);
                {
                  static ATerm w_2 (ATerm t);
                  static ATerm w_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, e_17), term_s_26);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(v_2, w_2, t);
                }
              }
            else
              {
                t = n_26;
                {
                  static ATerm k_3 (ATerm t);
                  static ATerm k_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, e_17), term_s_26);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(h_3, k_3, t);
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
ATerm if_verbose2_1_0 (ATerm s_117 (ATerm), ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  {
    ATerm t_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
        t = term_w_12;
        k_18 = t;
        t = term_g_13;
        l_18 = t;
        t = term_m_13;
        t = e_9(k_18, l_18, t);
        j_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_18, term_l_14);
        t = geq_0_0(t);
        t = f_18;
        t = s_117(t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = t_26;
        t = f_18;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_103 (ATerm), ATerm t)
{
  ATerm o_18 = NULL;
  static ATerm p_3 (ATerm t);
  static ATerm p_3 (ATerm t)
  {
    t = e_103(t);
    if(((o_18 != NULL) && (o_18 != t)))
      _fail(t);
    else
      o_18 = t;
    return(t);
  }
  t = fetch_1_0(p_3, t);
  t = not_null(o_18);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = debug_1_0(s_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_w_26;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_x_26;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = debug_1_0(x_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm w_18 = NULL,x_19 = NULL,z_19 = NULL;
  t = if_verbose6_1_0(r_3, t);
  x_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL,i_10 = NULL,g_2 = NULL;
        t = SSLgetAnnotations(x_19);
        f_10 = t;
        t = z_19;
        t = guarantee_extension_1_0(t_3, t);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_10);
        g_2 = t;
        t = SSLsetAnnotations(g_2, f_10);
        t = read_from_0_0(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        {
          ATerm s_10 = NULL,w_10 = NULL,f_11 = NULL,j_2 = NULL;
          t = SSLgetAnnotations(x_19);
          w_10 = t;
          t = z_19;
          t = guarantee_extension_1_0(v_3, t);
          f_11 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_11);
          j_2 = t;
          t = SSLsetAnnotations(j_2, w_10);
          t = read_from_0_0(t);
          s_10 = t;
          t = SSL_explode_term(s_10);
          if(match_cons(t, sym__2))
            {
              w_18 = ATgetArgument(t, 0);
              {
                ATerm b_27 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, w_18)));
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
  t = term_c_27;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm g_21 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      g_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_21;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = debug_1_0(f_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm o_20 = NULL;
  t = if_verbose6_1_0(y_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      o_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_20 = NULL,u_20 = NULL;
        t = term_w_12;
        p_20 = t;
        t = term_g_27;
        u_20 = t;
        t = term_h_27;
        t = e_9(p_20, u_20, t);
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        {
          ATerm i_27 = t;
          int l_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm j_21 (ATerm v_20, ATerm t);
              static ATerm j_21 (ATerm v_20, ATerm t)
              {
                ATerm x_20 = NULL,y_20 = NULL;
                t = term_u_21;
                x_20 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_27), o_20), term_o_27), v_20), term_m_27);
                y_20 = t;
                t = SSL_printnl(x_20, y_20);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_27), o_20), term_o_27), v_20), term_m_27);
                _fail(t);
                return(t);
              }
              ATerm b_21 = NULL,c_21 = NULL;
              t = get_meta_0_0(t);
              c_21 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  b_21 = ATgetArgument(t, 0);
                  {
                    ATerm s_27 = t;
                    int v_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = b_21;
                        t = fetch_elem_1_0(b_4, t);
                        LocalPopChoice(v_27);
                      }
                    else
                      {
                        t = s_27;
                        t = j_21(c_21, t);
                      }
                  }
                }
              else
                {
                  t = j_21(c_21, t);
                }
              LocalPopChoice(l_27);
            }
          else
            {
              t = i_27;
              t = term_a_28;
            }
        }
      }
  }
  t = if_verbose2_1_0(e_4, t);
  return(t);
}
ATerm basename_1_0 (ATerm i_119 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,z_21 = NULL;
  z_21 = t;
  t = SSL_explode_string(z_21);
  {
    ATerm c_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_24 (ATerm t);
        static ATerm n_24 (ATerm t)
        {
          ATerm z_23 = NULL,a_24 = NULL,d_24 = NULL;
          z_23 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_24 = ATgetFirst((ATermList) t);
              d_24 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm i_28 = t;
            int j_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_11 = NULL,d_12 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(z_23);
                s_11 = t;
                t = d_24;
                t = n_24(t);
                d_12 = t;
                t = (ATerm) ATinsert(CheckATermList(d_12), a_24);
                q_2 = t;
                t = SSLsetAnnotations(q_2, s_11);
                LocalPopChoice(j_28);
              }
            else
              {
                t = i_28;
                {
                  ATerm k_28 = t;
                  int l_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_12 = NULL,r_2 = NULL;
                      t = SSLgetAnnotations(z_23);
                      p_12 = t;
                      t = a_24;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(d_24), a_24);
                      r_2 = t;
                      t = SSLsetAnnotations(r_2, p_12);
                      LocalPopChoice(l_28);
                    }
                  else
                    {
                      t = k_28;
                      {
                        ATerm l_13 = NULL,p_13 = NULL,s_2 = NULL;
                        t = SSLgetAnnotations(z_23);
                        l_13 = t;
                        t = a_24;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = d_24;
                        t = i_119(t);
                        p_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(p_13), a_24);
                        s_2 = t;
                        t = SSLsetAnnotations(s_2, l_13);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = n_24(t);
        LocalPopChoice(h_28);
      }
    else
      {
        t = c_28;
      }
  }
  w_21 = t;
  t = SSL_implode_string(w_21);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = debug_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_m_28;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_n_28;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_28);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_n_28;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_28);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm u_27 = NULL,w_27 = NULL,x_27 = NULL;
  t = pass_verbose_0_0(t);
  w_27 = t;
  t = term_q_28;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_27 = NULL,z_27 = NULL;
        t = term_w_12;
        y_27 = t;
        t = term_q_28;
        z_27 = t;
        t = term_t_28;
        t = e_9(y_27, z_27, t);
        LocalPopChoice(s_28);
        t = (ATerm) ATinsert(ATempty, term_v_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATempty;
      }
  }
  x_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_27), w_27);
  t = concat_0_0(t);
  u_27 = t;
  t = (ATerm) ATinsert(CheckATermList(u_27), term_w_28);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm b_28 = NULL,d_28 = NULL,e_28 = NULL;
  t = pass_verbose_0_0(t);
  d_28 = t;
  t = term_q_28;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_28 = NULL,g_28 = NULL;
        t = term_w_12;
        f_28 = t;
        t = term_q_28;
        g_28 = t;
        t = term_t_28;
        t = e_9(f_28, g_28, t);
        LocalPopChoice(y_28);
        t = (ATerm) ATinsert(ATempty, term_v_28);
      }
    else
      {
        t = x_28;
        t = (ATerm) ATempty;
      }
  }
  e_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_28), d_28);
  t = concat_0_0(t);
  b_28 = t;
  t = (ATerm) ATinsert(CheckATermList(b_28), term_w_28);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_z_28;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_d_29;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL;
  t = pass_verbose_0_0(t);
  b_29 = t;
  t = term_q_28;
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_29 = NULL,r_29 = NULL;
        t = term_w_12;
        p_29 = t;
        t = term_q_28;
        r_29 = t;
        t = term_t_28;
        t = e_9(p_29, r_29, t);
        LocalPopChoice(f_29);
        t = (ATerm) ATinsert(ATempty, term_q_28);
      }
    else
      {
        t = e_29;
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
  t = term_d_29;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm t_29 = NULL,v_29 = NULL;
  t = pass_verbose_0_0(t);
  t_29 = t;
  t = term_q_28;
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_30 = NULL,f_30 = NULL;
        t = term_w_12;
        a_30 = t;
        t = term_q_28;
        f_30 = t;
        t = term_t_28;
        t = e_9(a_30, f_30, t);
        LocalPopChoice(h_29);
        t = (ATerm) ATinsert(ATempty, term_q_28);
      }
    else
      {
        t = g_29;
        t = (ATerm) ATempty;
      }
  }
  v_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_29), t_29);
  t = concat_0_0(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_i_29;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm n_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,x_2 = NULL;
  t = if_verbose6_1_0(g_4, t);
  y_25 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_25);
  z_25 = t;
  t = a_26;
  t = basename_1_0(_id, t);
  q_25 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_25);
  x_2 = t;
  t = SSLsetAnnotations(x_2, z_25);
  t = y_25;
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      n_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_25;
  t = pass_sort_0_0(t);
  p_25 = t;
  t = y_25;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_26 = ATgetArgument(t, 0);
            {
              ATerm a_14 = NULL,y_2 = NULL;
              t = SSLgetAnnotations(y_25);
              a_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_26);
              y_2 = t;
              t = SSLsetAnnotations(y_2, a_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_25;
          }
        LocalPopChoice(k_29);
        {
          static ATerm l_4 (ATerm t);
          static ATerm l_4 (ATerm t)
          {
            ATerm p_26 = NULL,q_26 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(m_4, t);
            q_26 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_26, p_25);
            t = conc_0_0(t);
            p_26 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_26), n_25), term_m_29), term_l_29);
            return(t);
          }
          t = xtc_transform_file_2_0(i_4, l_4, t);
        }
      }
    else
      {
        t = j_29;
        {
          static ATerm p_4 (ATerm t);
          static ATerm p_4 (ATerm t)
          {
            ATerm r_26 = NULL,u_26 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(q_4, t);
            u_26 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_26, p_25);
            t = conc_0_0(t);
            r_26 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_26), n_25), term_m_29), term_l_29);
            return(t);
          }
          t = xtc_transform_term_2_0(o_4, p_4, t);
        }
      }
  }
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_27 = NULL,r_27 = NULL;
        r_27 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_27 = ATgetArgument(t, 0);
            {
              ATerm o_14 = NULL,a_3 = NULL;
              t = SSLgetAnnotations(r_27);
              o_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_27);
              a_3 = t;
              t = SSLsetAnnotations(a_3, o_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_27;
          }
        LocalPopChoice(o_29);
        t = xtc_transform_file_2_0(r_4, s_4, t);
      }
    else
      {
        t = n_29;
        t = xtc_transform_term_2_0(u_4, x_4, t);
      }
  }
  {
    static ATerm y_4 (ATerm t);
    static ATerm y_4 (ATerm t)
    {
      static ATerm z_4 (ATerm t);
      static ATerm z_4 (ATerm t)
      {
        t = q_25;
        t = guarantee_extension_1_0(a_5, t);
        return(t);
      }
      t = copy_to_1_0(z_4, t);
      return(t);
    }
    t = if_keep1_1_0(y_4, t);
  }
  {
    ATerm q_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_28 = NULL,a_29 = NULL;
        a_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            u_28 = ATgetArgument(t, 0);
            {
              ATerm b_15 = NULL,b_3 = NULL;
              t = SSLgetAnnotations(a_29);
              b_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_28);
              b_3 = t;
              t = SSLsetAnnotations(b_3, b_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_29;
          }
        LocalPopChoice(s_29);
        t = xtc_transform_file_2_0(d_5, g_5, t);
      }
    else
      {
        t = q_29;
        t = xtc_transform_term_2_0(h_5, i_5, t);
      }
  }
  r_25 = t;
  {
    static ATerm l_5 (ATerm t);
    static ATerm l_5 (ATerm t)
    {
      t = read_from_0_0(t);
      t = check_module_name_0_1(q_25, t);
      return(t);
    }
    t = if_not_silent_1_0(l_5, t);
  }
  t = r_25;
  {
    ATerm u_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_30 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_30 = ATgetArgument(t, 0);
            {
              ATerm v_15 = NULL,g_3 = NULL;
              t = SSLgetAnnotations(r_25);
              v_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_30);
              g_3 = t;
              t = SSLsetAnnotations(g_3, v_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_25;
          }
        LocalPopChoice(w_29);
        t = xtc_transform_file_2_0(o_5, pass_verbose_0_0, t);
      }
    else
      {
        t = u_29;
        t = xtc_transform_term_2_0(s_5, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  static ATerm j_32 (ATerm t);
  static ATerm j_32 (ATerm t)
  {
    ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
    g_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_32 = ATgetFirst((ATermList) t);
        f_32 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_16 = NULL,w_16 = NULL,a_4 = NULL;
          t = SSLgetAnnotations(g_32);
          o_16 = t;
          t = f_32;
          t = j_32(t);
          w_16 = t;
          t = (ATerm) ATinsert(CheckATermList(w_16), e_32);
          a_4 = t;
          t = SSLsetAnnotations(a_4, o_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_32;
        t = j_103(t);
      }
    return(t);
  }
  t = j_32(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_30 = NULL,a_31 = NULL,h_31 = NULL;
  y_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_30;
    }
  else
    {
      static ATerm y_5 (ATerm t);
      static ATerm y_5 (ATerm t)
      {
        t = not_null(h_31);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_31 = ATgetFirst((ATermList) t);
          if(((h_31 != NULL) && (h_31 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_31;
      t = at_end_1_0(y_5, t);
    }
  return(t);
}
static ATerm k_33 (ATerm n_32, ATerm t)
{
  ATerm u_32 = NULL;
  t = SSL_explode_term(n_32);
  if(match_cons(t, sym__2))
    {
      ATerm x_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_32;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_33 = NULL,c_33 = NULL,d_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym__2))
    {
      a_33 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
      {
        ATerm y_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_6 (ATerm t);
            static ATerm d_6 (ATerm t)
            {
              t = c_33;
              return(t);
            }
            t = a_33;
            t = at_end_1_0(d_6, t);
            LocalPopChoice(z_29);
          }
        else
          {
            t = y_29;
            t = k_33(d_33, t);
          }
      }
    }
  else
    {
      t = k_33(d_33, t);
    }
  return(t);
}
static ATerm l_8 (ATerm r_60, ATerm q_60, ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
  t = r_60;
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_33 = NULL;
        t = term_w_12;
        u_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_12, r_60);
        t = e_9(u_33, r_60, t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = (ATerm) ATempty;
      }
  }
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_60, o_33);
  t = conc_0_0(t);
  n_33 = t;
  t = term_w_12;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, r_60, n_33);
  t = lookup_table_0_1(p_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(r_60, n_33, q_33, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, r_60, n_33);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL;
  g_34 = t;
  t = SSL_explode_string(g_34);
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_35 (ATerm t);
        static ATerm j_35 (ATerm t)
        {
          ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
          g_35 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_35 = ATgetFirst((ATermList) t);
              i_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm g_30 = t;
            int h_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_17 = NULL,q_17 = NULL,j_4 = NULL;
                t = SSLgetAnnotations(g_35);
                m_17 = t;
                t = i_35;
                t = j_35(t);
                q_17 = t;
                t = (ATerm) ATinsert(CheckATermList(q_17), h_35);
                j_4 = t;
                t = SSLsetAnnotations(j_4, m_17);
                LocalPopChoice(h_30);
              }
            else
              {
                t = g_30;
                {
                  ATerm g_18 = NULL,k_4 = NULL;
                  t = SSLgetAnnotations(g_35);
                  g_18 = t;
                  t = h_35;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, h_35);
                  k_4 = t;
                  t = SSLsetAnnotations(k_4, g_18);
                }
              }
          }
          return(t);
        }
        t = j_35(t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = (ATerm) ATempty;
      }
  }
  f_34 = t;
  t = SSL_implode_string(f_34);
  return(t);
}
ATerm debug_1_0 (ATerm z_97 (ATerm), ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,t_35 = NULL;
  o_35 = t;
  t = z_97(t);
  p_35 = t;
  t = term_u_21;
  q_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_35), p_35);
  t_35 = t;
  t = SSL_printnl(q_35, t_35);
  t = o_35;
  return(t);
}
static ATerm m_8 (ATerm f_60, ATerm t)
{
  t = SSL_hashtable_keys(f_60);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  static ATerm h_6 (ATerm t);
  static ATerm h_6 (ATerm t)
  {
    ATerm x_35 = NULL,y_35 = NULL;
    x_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_35), x_35);
    t = e_9(not_null(v_35), x_35, t);
    y_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_35, y_35);
    return(t);
  }
  if(((v_35 != NULL) && (v_35 != t)))
    _fail(t);
  else
    v_35 = t;
  t = lookup_table_0_1(v_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_8(w_35, t);
  t = map_1_0(h_6, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_117 (ATerm), ATerm t)
{
  ATerm f_36 = NULL;
  f_36 = t;
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_36 = NULL,i_36 = NULL,k_36 = NULL;
        t = term_w_12;
        i_36 = t;
        t = term_g_13;
        k_36 = t;
        t = term_m_13;
        t = e_9(i_36, k_36, t);
        h_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_36, term_f_20);
        t = geq_0_0(t);
        t = f_36;
        t = v_117(t);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = f_36;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_117 (ATerm), ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_36 = NULL,x_36 = NULL,y_36 = NULL;
        t = term_w_12;
        x_36 = t;
        t = term_g_13;
        y_36 = t;
        t = term_m_13;
        t = e_9(x_36, y_36, t);
        v_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_36, term_o_17);
        t = geq_0_0(t);
        t = n_36;
        t = u_117(t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        t = n_36;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_117 (ATerm), ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_37 = NULL,n_37 = NULL,q_37 = NULL;
        t = term_w_12;
        n_37 = t;
        t = term_g_13;
        q_37 = t;
        t = term_m_13;
        t = e_9(n_37, q_37, t);
        m_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_37, term_z_14);
        t = geq_0_0(t);
        t = g_37;
        t = w_117(t);
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        t = g_37;
      }
  }
  return(t);
}
static ATerm o_8 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm x_34, ATerm w_34, ATerm t)
{
  t = h_107(t);
  {
    static ATerm m_6 (ATerm t);
    static ATerm m_6 (ATerm t)
    {
      ATerm u_37 = NULL;
      u_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_34, u_37);
      t = g_107(t);
      return(t);
    }
    t = fetch_1_0(m_6, t);
  }
  t = w_34;
  return(t);
}
static ATerm p_8 (ATerm d_107 (ATerm), ATerm t_34, ATerm s_34, ATerm t)
{
  static ATerm r_38 (ATerm t);
  static ATerm r_38 (ATerm t)
  {
    ATerm j_38 = NULL,m_38 = NULL,n_38 = NULL;
    j_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_38 = ATgetFirst((ATermList) t);
            n_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_30 = t;
          int q_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_38;
              {
                static ATerm n_6 (ATerm t);
                static ATerm n_6 (ATerm t)
                {
                  t = s_34;
                  return(t);
                }
                t = o_8(d_107, n_6, m_38, n_38, t);
              }
              t = r_38(t);
              LocalPopChoice(q_30);
            }
          else
            {
              t = o_30;
              {
                ATerm v_18 = NULL,b_19 = NULL,n_4 = NULL;
                t = SSLgetAnnotations(j_38);
                v_18 = t;
                t = n_38;
                t = r_38(t);
                b_19 = t;
                t = (ATerm) ATinsert(CheckATermList(b_19), m_38);
                n_4 = t;
                t = SSLsetAnnotations(n_4, v_18);
              }
            }
        }
      }
    return(t);
  }
  t = t_34;
  t = r_38(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm j_39 = NULL;
  if(match_cons(t, sym__2))
    {
      j_39 = ATgetArgument(t, 0);
      if((j_39 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_8 (ATerm d_56, ATerm e_56, ATerm f_56, ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,e_39 = NULL;
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_56, e_56);
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_30 = ATgetArgument(t, 0);
            ATerm u_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_56, e_56);
        t = e_9(d_56, e_56, t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        t = (ATerm) ATempty;
      }
  }
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_39, f_56);
  t = p_8(o_6, b_39, f_56, t);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_56, e_56, a_39);
  t = lookup_table_0_1(d_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(e_56, a_39, e_39, t);
  t = z_38;
  return(t);
}
static ATerm r_8 (ATerm y_117 (ATerm), ATerm n_56, ATerm m_56, ATerm t)
{
  static ATerm p_6 (ATerm t);
  static ATerm p_6 (ATerm t)
  {
    ATerm m_39 = NULL,n_39 = NULL;
    if(match_cons(t, sym__2))
      {
        m_39 = ATgetArgument(t, 0);
        n_39 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, n_56, m_39, n_39);
    t = y_117(t);
    return(t);
  }
  t = m_56;
  t = map_1_0(p_6, t);
  return(t);
}
static ATerm w_8 (ATerm o_61, ATerm p_61, ATerm t)
{
  t = SSL_access(o_61, p_61);
  return(t);
}
static ATerm i_40 (ATerm a_40, ATerm t)
{
  t = SSL_fclose(a_40);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  g_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_40 = ATgetArgument(t, 0);
      {
        ATerm v_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_40);
            LocalPopChoice(w_30);
          }
        else
          {
            t = v_30;
            t = i_40(g_40, t);
          }
      }
    }
  else
    {
      t = i_40(g_40, t);
    }
  return(t);
}
static ATerm s_8 (ATerm p_27, ATerm t)
{
  t = SSL_read_term_from_stream(p_27);
  return(t);
}
static ATerm t_8 (ATerm g_42, ATerm h_42, ATerm t)
{
  t = SSL_strcat(g_42, h_42);
  return(t);
}
static ATerm u_8 (ATerm x_61, ATerm y_61, ATerm t)
{
  ATerm j_40 = NULL;
  t = SSL_fopen(x_61, y_61);
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_40);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_40 = NULL;
  t = SSL_stdin_stream();
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_40);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_40 = NULL;
  t = SSL_stdout_stream();
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_40);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_40 = NULL;
  t = SSL_stderr_stream();
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_40);
  return(t);
}
static ATerm c_42 (ATerm u_40, ATerm t)
{
  ATerm v_40 = NULL;
  t = SSL_explode_term(u_40);
  if(match_cons(t, sym__2))
    {
      ATerm x_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_30 = ATgetArgument(t, 1);
        if(((ATgetType(z_30) == AT_LIST) && !(ATisEmpty(z_30))))
          {
            v_40 = ATgetFirst((ATermList) z_30);
            {
              ATerm b_31 = (ATerm) ATgetNext((ATermList) z_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_40;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_40;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_40;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_40;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_42 (ATerm a_41, ATerm b_41, ATerm e_41, ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,k_41 = NULL,v_4 = NULL;
  t = SSLgetAnnotations(e_41);
  h_41 = t;
  t = a_41;
  if(match_cons(t, sym_Path_1))
    {
      k_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_41, b_41);
  v_4 = t;
  t = SSLsetAnnotations(v_4, h_41);
  if(match_cons(t, sym__2))
    {
      f_41 = ATgetArgument(t, 0);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(f_41, g_41, t);
  return(t);
}
static ATerm i_42 (ATerm m_41, ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,v_41 = NULL,w_4 = NULL;
  t = SSLgetAnnotations(o_41);
  r_41 = t;
  t = SSL_is_string(m_41);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_41, n_41);
  w_4 = t;
  t = SSLsetAnnotations(w_4, r_41);
  if(match_cons(t, sym__2))
    {
      p_41 = ATgetArgument(t, 0);
      q_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(p_41, q_41, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  if(match_cons(t, sym__2))
    {
      y_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_42(x_41, t);
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
            {
              ATerm e_31 = t;
              int f_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_42(y_41, z_41, x_41, t);
                  LocalPopChoice(f_31);
                }
              else
                {
                  t = e_31;
                  t = i_42(y_41, z_41, x_41, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_42(x_41, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,q_42 = NULL,x_42 = NULL;
  x_42 = t;
  {
    ATerm g_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_42, term_j_31);
        t = v_8(t);
        LocalPopChoice(i_31);
      }
    else
      {
        t = g_31;
        {
          ATerm c_20 = NULL,e_20 = NULL;
          t = term_k_31;
          e_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_31, x_42);
          t = t_8(e_20, x_42, t);
          c_20 = t;
          t = SSL_perror(c_20);
          _fail(t);
        }
      }
  }
  o_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8(q_42, t);
  n_42 = t;
  t = o_42;
  t = fclose_0_0(t);
  t = n_42;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_l_31;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_43 = NULL,e_43 = NULL;
      d_43 = t;
      t = (ATerm) ATinsert(ATempty, term_p_31);
      e_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_43, (ATerm) ATinsert(ATempty, term_p_31));
      t = w_8(d_43, e_43, t);
      LocalPopChoice(o_31);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_31;
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_31 = t;
            if((PushChoice() == 0))
              {
                ATerm f_43 = NULL,g_43 = NULL;
                f_43 = t;
                t = (ATerm) ATinsert(ATempty, term_h_23);
                g_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_43, (ATerm) ATinsert(ATempty, term_h_23));
                t = w_8(f_43, g_43, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_31;
              }
            t = debug_1_0(t_6, t);
            LocalPopChoice(r_31);
          }
        else
          {
            t = q_31;
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
  t = term_t_31;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = debug_1_0(f_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  t = term_u_21;
  i_44 = t;
  t = (ATerm) ATinsert(ATempty, term_v_31);
  j_44 = t;
  t = SSL_printnl(i_44, j_44);
  t = h_44;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  if(match_cons(t, sym__3))
    {
      k_44 = ATgetArgument(t, 0);
      l_44 = ATgetArgument(t, 1);
      m_44 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_8(k_44, l_44, m_44, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
  n_44 = t;
  t = term_u_21;
  o_44 = t;
  t = (ATerm) ATinsert(ATempty, term_w_31);
  p_44 = t;
  t = SSL_printnl(o_44, p_44);
  t = n_44;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,f_45 = NULL;
  q_44 = t;
  t = term_u_21;
  r_44 = t;
  t = (ATerm) ATinsert(ATempty, term_v_31);
  f_45 = t;
  t = SSL_printnl(r_44, f_45);
  t = q_44;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  i_43 = t;
  t = if_verbose5_1_0(x_6, t);
  {
    ATerm x_31 = t;
    if((PushChoice() == 0))
      {
        ATerm d_44 = NULL,e_44 = NULL;
        t = term_y_31;
        d_44 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, i_43);
        e_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATmakeAppl(sym_Imported_1, i_43));
        t = e_9(d_44, e_44, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_31;
      }
  }
  k_43 = t;
  t = term_y_31;
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_31, term_z_31, (ATerm) ATinsert(ATempty, i_43));
  t = lookup_table_0_1(x_43, t);
  c_44 = t;
  t = term_z_31;
  y_43 = t;
  t = (ATerm) ATinsert(ATempty, i_43);
  a_44 = t;
  t = c_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(y_43, a_44, b_44, t);
  t = k_43;
  t = if_verbose4_1_0(c_7, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(g_7, t);
  j_43 = t;
  t = term_y_31;
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_31, j_43);
  t = r_8(h_7, w_43, j_43, t);
  t = if_verbose6_1_0(i_7, t);
  t = term_y_31;
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_31, (ATerm)ATmakeAppl(sym_Imported_1, i_43), (ATerm) ATempty);
  t = lookup_table_0_1(l_43, t);
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, i_43);
  q_43 = t;
  t = (ATerm) ATempty;
  r_43 = t;
  t = t_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(q_43, r_43, s_43, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_31, (ATerm)ATmakeAppl(sym_Imported_1, i_43), (ATerm) ATempty);
  t = if_verbose4_1_0(j_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  a_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_46;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_46 = ATgetFirst((ATermList) t);
          c_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_32 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_20 = NULL,m_20 = NULL,n_20 = NULL,b_5 = NULL;
            t = SSLgetAnnotations(a_46);
            j_20 = t;
            t = b_46;
            t = k_111(t);
            m_20 = t;
            t = c_46;
            t = filter_1_0(k_111, t);
            n_20 = t;
            t = (ATerm) ATinsert(CheckATermList(n_20), m_20);
            b_5 = t;
            t = SSLsetAnnotations(b_5, j_20);
            LocalPopChoice(b_32);
          }
        else
          {
            t = a_32;
            t = c_46;
            t = filter_1_0(k_111, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  static ATerm f_46 (ATerm t);
  static ATerm f_46 (ATerm t)
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_100(t);
        t = f_46(t);
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        t = x_100(t);
      }
    return(t);
  }
  t = f_46(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_46 = NULL,i_46 = NULL;
      t = term_w_12;
      h_46 = t;
      t = term_k_32;
      i_46 = t;
      t = term_l_32;
      t = e_9(h_46, i_46, t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm m_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_46 = NULL;
            t = term_p_32;
            j_46 = t;
            t = SSL_getenv(j_46);
            LocalPopChoice(o_32);
          }
        else
          {
            t = m_32;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = debug_1_0(p_7, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_q_32;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL;
  t = term_y_31;
  a_47 = t;
  t = term_r_32;
  b_47 = t;
  t = term_s_32;
  t = e_9(a_47, b_47, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm t_32 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_32;
      }
  }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = debug_1_0(t_7, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_46 = NULL;
  t = if_verbose5_1_0(m_7, t);
  r_46 = t;
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_46 = NULL,v_46 = NULL;
        t = term_y_31;
        u_46 = t;
        t = term_z_31;
        v_46 = t;
        t = term_y_32;
        t = e_9(u_46, v_46, t);
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        {
          ATerm y_46 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_46 = t;
          t = repeat_2_0(q_7, _id, t);
          t = y_46;
        }
      }
  }
  t = r_46;
  t = if_verbose5_1_0(s_7, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = debug_1_0(v_7, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_z_32;
  return(t);
}
static ATerm j_48 (ATerm l_47, ATerm t)
{
  ATerm n_47 = NULL,q_47 = NULL,s_47 = NULL;
  t = term_y_31;
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, l_47);
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATmakeAppl(sym_Tool_1, l_47));
  t = e_9(q_47, s_47, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_33 = ATgetFirst((ATermList) t);
      if(match_cons(b_33, sym__2))
        {
          ATerm f_33 = ATgetArgument(b_33, 0);
          n_47 = ATgetArgument(b_33, 1);
        }
      else
        _fail(t);
      {
        ATerm e_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_47;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = debug_1_0(a_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_z_32;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_y_31;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_47 = NULL,u_47 = NULL,w_47 = NULL;
      t = if_verbose5_1_0(u_7, t);
      t = xtc_load_0_0(t);
      w_47 = t;
      if(match_cons(t, sym__2))
        {
          t_47 = ATgetArgument(t, 0);
          u_47 = ATgetArgument(t, 1);
          {
            ATerm j_33 = t;
            int l_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
                t = term_y_31;
                c_48 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_47);
                d_48 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATmakeAppl(sym_Tool_1, t_47));
                t = e_9(c_48, d_48, t);
                {
                  static ATerm w_7 (ATerm t);
                  static ATerm w_7 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_47 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((b_48 != NULL) && (b_48 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_48 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(w_7, t);
                }
                t = not_null(b_48);
                LocalPopChoice(l_33);
              }
            else
              {
                t = j_33;
                t = j_48(w_47, t);
              }
          }
        }
      else
        {
          t = j_48(w_47, t);
        }
      t = if_verbose5_1_0(z_7, t);
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      {
        ATerm i_48 = NULL,d_21 = NULL,e_21 = NULL;
        i_48 = t;
        t = term_u_21;
        d_21 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_33), i_48), term_m_33);
        e_21 = t;
        t = SSL_printnl(d_21, e_21);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_33), i_48), term_m_33);
        t = if_verbose5_1_0(b_8, t);
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
static ATerm e_9 (ATerm z_56, ATerm a_57, ATerm t)
{
  ATerm l_48 = NULL;
  t = lookup_table_0_1(z_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_9(a_57, l_48, t);
  return(t);
}
static ATerm y_8 (ATerm l_55, ATerm m_55, ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  o_48 = t;
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_55, m_55);
        t = e_9(l_55, m_55, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_33 = ATgetFirst((ATermList) t);
            n_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_33);
        {
          ATerm p_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, l_55, m_55, n_48);
          t = lookup_table_0_1(l_55, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_9(m_55, n_48, p_48, t);
          t = (ATerm) ATmakeAppl(sym__3, l_55, m_55, n_48);
        }
      }
    else
      {
        t = s_33;
        {
          ATerm r_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, l_55, m_55);
          t = lookup_table_0_1(l_55, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_9(m_55, r_48, t);
          t = (ATerm) ATmakeAppl(sym__2, l_55, m_55);
        }
      }
  }
  t = o_48;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_113 (ATerm), ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
  w_48 = t;
  t = n_113(t);
  v_48 = t;
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_49 = NULL;
        t = term_g_22;
        a_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_48, term_g_22);
        t = e_9(v_48, a_49, t);
        {
          ATerm y_33 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_33;
            }
        }
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_48 = ATgetFirst((ATermList) t);
      t_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_48, term_g_22, t_48);
  t = lookup_table_0_1(v_48, t);
  z_48 = t;
  t = term_g_22;
  x_48 = t;
  t = z_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(x_48, t_48, y_48, t);
  t = u_48;
  {
    static ATerm n_8 (ATerm t);
    static ATerm n_8 (ATerm t)
    {
      ATerm b_49 = NULL;
      b_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_48, b_49);
      t = y_8(v_48, b_49, t);
      return(t);
    }
    t = map_1_0(n_8, t);
  }
  t = w_48;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm t)
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_117(t);
      t = g_117(t);
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      t = g_117(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_113 (ATerm), ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
  e_49 = t;
  t = m_113(t);
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_49, term_g_22);
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_49 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_34 = ATgetArgument(t, 0);
            ATerm e_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_22;
        n_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_49, term_g_22);
        t = e_9(d_49, n_49, t);
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = (ATerm) ATempty;
      }
  }
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_49, term_g_22, (ATerm) ATinsert(CheckATermList(f_49), (ATerm) ATempty));
  t = lookup_table_0_1(d_49, t);
  j_49 = t;
  t = term_g_22;
  g_49 = t;
  t = (ATerm) ATinsert(CheckATermList(f_49), (ATerm) ATempty);
  h_49 = t;
  t = j_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(g_49, h_49, i_49, t);
  t = e_49;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm f_50 = NULL;
  f_50 = t;
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(f_50);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        t = f_50;
      }
  }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_120 (ATerm), ATerm t)
{
  ATerm t_49 = NULL;
  static ATerm n_9 (ATerm t);
  static ATerm n_9 (ATerm t)
  {
    ATerm u_49 = NULL;
    u_49 = t;
    {
      ATerm j_34 = t;
      int k_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_49 = NULL,y_49 = NULL;
          t = term_n_22;
          x_49 = t;
          t = term_g_22;
          y_49 = t;
          t = term_l_34;
          t = e_9(x_49, y_49, t);
          LocalPopChoice(k_34);
        }
      else
        {
          t = j_34;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_49 != NULL) && (t_49 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_49 = ATgetFirst((ATermList) t);
        {
          ATerm m_34 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = t_49;
    t = map_1_0(p_9, t);
    t = u_49;
    t = end_scope_1_0(q_9, t);
    return(t);
  }
  t = begin_scope_1_0(a_9, t);
  t = restore_always_2_0(g_120, n_9, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
  i_50 = t;
  t = term_q_22;
  t = whoami_0_0(t);
  j_50 = t;
  t = term_u_21;
  l_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_34), j_50), term_n_34);
  m_50 = t;
  t = SSL_printnl(l_50, m_50);
  t = term_n_13;
  k_50 = t;
  t = SSL_exit(k_50);
  t = i_50;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm o_50 = NULL;
  o_50 = t;
  if(match_string(t, "-k"))
    {
      t = o_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_50;
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  t = SSL_string_to_int(p_50);
  q_50 = t;
  t = term_l_24;
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_24, q_50);
  t = h_9(r_50, q_50, t);
  t = p_50;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_9, w_9, x_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm t_50 = NULL;
  t_50 = t;
  if(match_string(t, "-S"))
    {
      t = t_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_50;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL;
  t = term_g_13;
  u_50 = t;
  t = term_l_23;
  v_50 = t;
  t = term_q_34;
  t = h_9(u_50, v_50, t);
  t = term_r_34;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_u_34;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
  w_50 = t;
  t = SSL_string_to_int(w_50);
  x_50 = t;
  t = term_g_13;
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_13, x_50);
  t = h_9(y_50, x_50, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_50);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_v_34;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL;
  t = term_t_24;
  z_50 = t;
  t = term_q_22;
  a_51 = t;
  t = term_y_34;
  t = h_9(z_50, a_51, t);
  t = term_z_34;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_a_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_35 = t;
  int c_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_9, z_9, a_10, t);
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
            t = ArgOption_3_0(b_10, c_10, d_10, t);
            LocalPopChoice(e_35);
          }
        else
          {
            t = d_35;
            t = Option_3_0(e_10, g_10, h_10, t);
          }
      }
    }
  return(t);
}
static ATerm h_9 (ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  t = term_w_12;
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, l_60, m_60);
  t = lookup_table_0_1(b_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(l_60, m_60, c_51, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, l_60, m_60);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
      t = term_q_22;
      t = h_0(t);
      i_51 = t;
      t = term_f_35;
      j_51 = t;
      t = term_k_35;
      k_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_35, term_k_35, i_51);
      t = f_9(j_51, k_51, i_51, t);
      _fail(t);
    }
  else
    {
      ATerm n_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_51 = ATgetFirst((ATermList) t);
          h_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_51;
      t = d_0(t);
      t = term_q_22;
      t = g_0(t);
      n_51 = t;
      t = (ATerm) ATinsert(CheckATermList(h_51), n_51);
    }
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm p_51 = NULL;
  p_51 = t;
  if(match_string(t, "-o"))
    {
      t = p_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_51;
    }
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL;
  q_51 = t;
  t = term_x_12;
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_12, q_51);
  t = h_9(r_51, q_51, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_51);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_10, k_10, l_10, t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm t_51 = NULL;
  t_51 = t;
  if(match_string(t, "-i"))
    {
      t = t_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_51;
    }
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  u_51 = t;
  t = term_r_22;
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_22, u_51);
  t = h_9(v_51, u_51, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_51);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_10, n_10, o_10, t);
  return(t);
}
static ATerm f_9 (ATerm g_55, ATerm h_55, ATerm f_55, ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL;
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_55, h_55);
  {
    ATerm n_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_35 = ATgetArgument(t, 0);
            ATerm u_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_55, h_55);
        t = e_9(g_55, h_55, t);
        LocalPopChoice(r_35);
      }
    else
      {
        t = n_35;
        t = (ATerm) ATempty;
      }
  }
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_55, h_55, (ATerm) ATinsert(CheckATermList(y_51), f_55));
  t = lookup_table_0_1(g_55, t);
  b_52 = t;
  t = (ATerm) ATinsert(CheckATermList(y_51), f_55);
  z_51 = t;
  t = b_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(h_55, z_51, a_52, t);
  t = x_51;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
      t = term_q_22;
      t = p_0(t);
      m_52 = t;
      t = term_f_35;
      n_52 = t;
      t = term_k_35;
      o_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_35, term_k_35, m_52);
      t = f_9(n_52, o_52, m_52, t);
      _fail(t);
    }
  else
    {
      ATerm s_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_52 = ATgetFirst((ATermList) t);
          j_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_52;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_52 = ATgetFirst((ATermList) t);
          l_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_52;
      t = m_0(t);
      t = k_52;
      t = o_0(t);
      s_52 = t;
      t = (ATerm) ATinsert(CheckATermList(l_52), s_52);
    }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm u_52 = NULL;
  u_52 = t;
  if(match_string(t, "-I"))
    {
      t = u_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = u_52;
    }
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
  v_52 = t;
  t = term_k_25;
  w_52 = t;
  t = (ATerm) ATinsert(ATempty, v_52);
  x_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATempty, v_52));
  t = l_8(w_52, x_52, t);
  t = v_52;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_z_35;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  t = term_g_27;
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_27, y_52);
  t = h_9(z_52, y_52, t);
  t = y_52;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_a_36;
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
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL;
  a_53 = t;
  t = term_g_13;
  b_53 = t;
  t = term_l_23;
  c_53 = t;
  t = term_q_34;
  t = h_9(b_53, c_53, t);
  t = a_53;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_b_36;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
  d_53 = t;
  t = term_q_28;
  e_53 = t;
  t = term_n_13;
  f_53 = t;
  t = term_c_36;
  t = h_9(e_53, f_53, t);
  t = d_53;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(p_10, q_10, r_10, t);
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      {
        ATerm g_36 = t;
        int j_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_10, u_10, v_10, t);
            LocalPopChoice(j_36);
          }
        else
          {
            t = g_36;
            {
              ATerm l_36 = t;
              int m_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_10, y_10, z_10, t);
                  LocalPopChoice(m_36);
                }
              else
                {
                  t = l_36;
                  t = Option_3_0(c_11, d_11, e_11, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_22;
  t = whoami_0_0(t);
  g_53 = t;
  t = term_u_21;
  i_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_36), g_53);
  j_53 = t;
  t = SSL_printnl(i_53, j_53);
  t = term_n_13;
  h_53 = t;
  t = SSL_exit(h_53);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL;
  t = term_w_12;
  k_53 = t;
  t = term_p_36;
  l_53 = t;
  t = term_q_36;
  t = e_9(k_53, l_53, t);
  return(t);
}
static ATerm z_8 (ATerm o_43, ATerm p_43, ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_43, p_43);
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      t = SSL_addr(o_43, p_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
  n_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_53;
      t = g_110(t);
    }
  else
    {
      ATerm s_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_53 = ATgetFirst((ATermList) t);
          p_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_53;
      t = foldr_2_0(g_110, h_110, t);
      s_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_53, s_53);
      t = h_110(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_l_23;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym__2))
    {
      q_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8(q_21, r_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_53 = NULL,m_21 = NULL,n_21 = NULL;
  t = times_0_0(t);
  n_21 = t;
  t = SSL_explode_term(n_21);
  if(match_cons(t, sym__2))
    {
      ATerm t_36 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_21;
  t = foldr_2_0(g_11, h_11, t);
  v_53 = t;
  t = SSL_TicksToSeconds(v_53);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
  g_54 = t;
  if(match_cons(t, sym__2))
    {
      h_54 = ATgetArgument(t, 0);
      i_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_54;
        if((h_54 != t))
          {
            _fail(t);
          }
        t = g_54;
        LocalPopChoice(w_36);
      }
    else
      {
        t = u_36;
        t = (ATerm) ATmakeAppl(sym__2, h_54, i_54);
        {
          ATerm z_36 = t;
          int a_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_54, i_54);
              LocalPopChoice(a_37);
            }
          else
            {
              t = z_36;
              t = SSL_gtr(h_54, i_54);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_54, i_54);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_117 (ATerm), ATerm t)
{
  ATerm m_54 = NULL;
  m_54 = t;
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
        t = term_w_12;
        p_54 = t;
        t = term_g_13;
        q_54 = t;
        t = term_m_13;
        t = e_9(p_54, q_54, t);
        o_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_54, term_n_13);
        t = geq_0_0(t);
        t = m_54;
        t = r_117(t);
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        t = m_54;
      }
  }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,v_54 = NULL,w_54 = NULL;
  t = run_time_0_0(t);
  s_54 = t;
  t = term_q_22;
  t = whoami_0_0(t);
  t_54 = t;
  t = term_u_21;
  v_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_37), s_54), term_t_13), t_54);
  w_54 = t;
  t = SSL_printnl(v_54, w_54);
  t = (ATerm) ATmakeAppl(sym__2, term_u_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_37), s_54), term_t_13), t_54));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_23;
  x_54 = t;
  t = SSL_exit(x_54);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL;
  t_55 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_55;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_55 = ATgetArgument(t, 0);
          {
            ATerm j_22 = NULL,f_5 = NULL;
            t = SSLgetAnnotations(t_55);
            j_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_55);
            f_5 = t;
            t = SSLsetAnnotations(f_5, j_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_55;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_121 (ATerm), ATerm t)
{
  ATerm e_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_55 = NULL,j_55 = NULL;
      t = term_w_12;
      i_55 = t;
      t = term_h_37;
      j_55 = t;
      t = term_i_37;
      t = e_9(i_55, j_55, t);
      LocalPopChoice(f_37);
    }
  else
    {
      t = e_37;
      t = fetch_1_0(k_11, t);
    }
  t = w_121(t);
  return(t);
}
static ATerm i_9 (ATerm y_59, ATerm z_59, ATerm a_60, ATerm t)
{
  ATerm v_55 = NULL;
  t = SSL_hashtable_put(a_60, y_59, z_59);
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_55);
  return(t);
}
static ATerm j_9 (ATerm b_60, ATerm c_60, ATerm t)
{
  t = SSL_hashtable_get(c_60, b_60);
  return(t);
}
ATerm lookup_table_0_1 (ATerm s_56, ATerm t)
{
  ATerm j_56 = NULL;
  t = table_hashtable_0_0(t);
  j_56 = t;
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL;
        t = j_56;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_9(s_56, p_22, t);
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
        {
          ATerm a_23 = NULL;
          t = s_56;
          t = table_create_0_0(t);
          t = j_56;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_9(s_56, a_23, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm g_60, ATerm h_60, ATerm t)
{
  ATerm q_56 = NULL;
  t = SSL_hashtable_create(g_60, h_60);
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_56);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_56 = NULL,w_56 = NULL,x_56 = NULL,b_57 = NULL,c_57 = NULL;
  r_56 = t;
  t = term_l_37;
  b_57 = t;
  t = term_o_37;
  c_57 = t;
  t = r_56;
  t = new_hashtable_0_2(b_57, c_57, t);
  w_56 = t;
  t = r_56;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(r_56, w_56, x_56, t);
  t = r_56;
  return(t);
}
static ATerm b_9 (ATerm d_60, ATerm e_60, ATerm t)
{
  ATerm d_57 = NULL;
  t = SSL_hashtable_remove(e_60, d_60);
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_57);
  return(t);
}
static ATerm c_9 (ATerm i_60, ATerm t)
{
  ATerm e_57 = NULL;
  t = SSL_hashtable_destroy(i_60);
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_57);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_57 = NULL;
  t = SSL_table_hashtable();
  f_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_57);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL;
  g_57 = t;
  t = table_hashtable_0_0(t);
  h_57 = t;
  t = lookup_table_0_1(g_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_9(j_57, t);
  t = h_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_9(g_57, i_57, t);
  t = g_57;
  return(t);
}
ATerm map_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  static ATerm y_57 (ATerm t);
  static ATerm y_57 (ATerm t)
  {
    ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
    v_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_57;
      }
    else
      {
        ATerm i_23 = NULL,u_23 = NULL,v_23 = NULL,c_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_57 = ATgetFirst((ATermList) t);
            x_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_57);
        i_23 = t;
        t = w_57;
        t = s_102(t);
        u_23 = t;
        t = x_57;
        t = y_57(t);
        v_23 = t;
        t = (ATerm) ATinsert(CheckATermList(v_23), u_23);
        c_6 = t;
        t = SSLsetAnnotations(c_6, i_23);
      }
    return(t);
  }
  t = y_57(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_58 = ATgetFirst((ATermList) t);
      c_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_58 = NULL,h_58 = NULL;
        static ATerm o_11 (ATerm t);
        static ATerm o_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_58)), not_null(h_58));
          return(t);
        }
        t = c_58;
        t = l_0(t);
        if(((g_58 != NULL) && (g_58 != t)))
          _fail(t);
        else
          g_58 = t;
        t = b_58;
        t = j_0(t);
        if(((h_58 != NULL) && (h_58 != t)))
          _fail(t);
        else
          h_58 = t;
        t = c_58;
        t = reverse_acc_2_0(j_0, o_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_22;
      t = l_0(t);
    }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,e_6 = NULL;
  p_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_58);
  n_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_58);
  e_6 = t;
  t = SSLsetAnnotations(e_6, n_58);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm r_58 = NULL;
  r_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_58), term_p_37);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL;
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_58 = NULL,m_58 = NULL;
      t = term_w_12;
      l_58 = t;
      t = term_p_36;
      m_58 = t;
      t = term_q_36;
      t = e_9(l_58, m_58, t);
      LocalPopChoice(s_37);
    }
  else
    {
      t = r_37;
      t = fetch_1_0(p_11, t);
    }
  t = term_t_37;
  t = echo_0_0(t);
  t = term_f_35;
  j_58 = t;
  t = term_k_35;
  k_58 = t;
  t = term_v_37;
  t = e_9(j_58, k_58, t);
  t = reverse_acc_2_0(_id, q_11, t);
  t = map_1_0(r_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  static ATerm o_59 (ATerm t);
  static ATerm o_59 (ATerm t)
  {
    ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
    l_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_59 = ATgetFirst((ATermList) t);
        n_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_37 = t;
      int x_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_24 = NULL,w_24 = NULL,k_7 = NULL;
          t = SSLgetAnnotations(l_59);
          q_24 = t;
          t = m_59;
          t = c_103(t);
          w_24 = t;
          t = (ATerm) ATinsert(CheckATermList(n_59), w_24);
          k_7 = t;
          t = SSLsetAnnotations(k_7, q_24);
          LocalPopChoice(x_37);
        }
      else
        {
          t = w_37;
          {
            ATerm e_25 = NULL,h_25 = NULL,l_7 = NULL;
            t = SSLgetAnnotations(l_59);
            e_25 = t;
            t = n_59;
            t = o_59(t);
            h_25 = t;
            t = (ATerm) ATinsert(CheckATermList(h_25), m_59);
            l_7 = t;
            t = SSLsetAnnotations(l_7, e_25);
          }
        }
    }
    return(t);
  }
  t = o_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL;
  s_59 = t;
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_38 = ATgetFirst((ATermList) t);
                ATerm b_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_59;
          }
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        t = (ATerm) ATinsert(ATempty, s_59);
      }
  }
  t_59 = t;
  t = term_z_12;
  u_59 = t;
  t = SSL_printnl(u_59, t_59);
  t = s_59;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL;
  t = term_w_12;
  j_60 = t;
  t = term_p_36;
  k_60 = t;
  t = term_q_36;
  t = e_9(j_60, k_60, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  t = term_c_38;
  n_60 = t;
  t = term_q_22;
  o_60 = t;
  t = term_d_38;
  t = h_9(n_60, o_60, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_e_38;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm p_60 = NULL,s_60 = NULL,t_60 = NULL,v_60 = NULL;
  t = term_c_38;
  t_60 = t;
  t = term_q_22;
  v_60 = t;
  t = term_d_38;
  t = h_9(t_60, v_60, t);
  t = term_o_28;
  p_60 = t;
  t = term_q_22;
  s_60 = t;
  t = term_f_38;
  t = h_9(p_60, s_60, t);
  t = term_g_38;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_11, u_11, w_11, t);
      LocalPopChoice(k_38);
    }
  else
    {
      t = i_38;
      t = Option_3_0(x_11, b_12, c_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm t)
{
  ATerm w_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,r_7 = NULL;
  c_61 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_60 = ATgetFirst((ATermList) t);
      z_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_61);
  w_60 = t;
  t = y_60;
  t = i_80(t);
  a_61 = t;
  t = z_60;
  t = j_80(t);
  b_61 = t;
  t = (ATerm) ATinsert(CheckATermList(b_61), a_61);
  r_7 = t;
  t = SSLsetAnnotations(r_7, w_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_123 (ATerm), ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL,k_61 = NULL,l_61 = NULL,n_61 = NULL,q_61 = NULL,y_7 = NULL;
  h_61 = t;
  {
    ATerm l_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_38;
        t = u_123(t);
        LocalPopChoice(o_38);
      }
    else
      {
        t = l_38;
      }
  }
  t = h_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_61 = ATgetFirst((ATermList) t);
      l_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_61);
  i_61 = t;
  t = term_p_36;
  q_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_36, k_61);
  t = h_9(q_61, k_61, t);
  t = l_61;
  {
    static ATerm e_62 (ATerm t);
    static ATerm e_62 (ATerm t)
    {
      ATerm q_38 = t;
      int s_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_38 = t;
          int u_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_61 = NULL;
              t_61 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_61;
              LocalPopChoice(u_38);
            }
          else
            {
              t = t_38;
              t = u_123(t);
              t = Cons_2_0(_id, e_62, t);
            }
          LocalPopChoice(s_38);
        }
      else
        {
          t = q_38;
          {
            ATerm w_61 = NULL,b_62 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_61 = ATgetFirst((ATermList) t);
                b_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_62), (ATerm) ATmakeAppl(sym_Undefined_1, w_61));
          }
        }
      return(t);
    }
    t = e_62(t);
  }
  n_61 = t;
  t = (ATerm) ATinsert(CheckATermList(n_61), (ATerm) ATmakeAppl(sym_Program_1, k_61));
  y_7 = t;
  t = SSLsetAnnotations(y_7, i_61);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm e_63 = NULL;
  e_63 = t;
  if(match_string(t, "--help"))
    {
      t = e_63;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_63;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_63;
        }
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL;
  t = term_h_37;
  f_63 = t;
  t = term_q_22;
  g_63 = t;
  t = term_v_38;
  t = h_9(f_63, g_63, t);
  t = term_w_38;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,q_62 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
  l_62 = t;
  t = term_f_35;
  m_62 = t;
  t = term_y_38;
  t = lookup_table_0_1(m_62, t);
  d_63 = t;
  t = term_k_35;
  q_62 = t;
  t = (ATerm) ATempty;
  b_63 = t;
  t = d_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(q_62, b_63, c_63, t);
  t = l_62;
  {
    static ATerm e_12 (ATerm t);
    static ATerm e_12 (ATerm t)
    {
      ATerm c_39 = t;
      int d_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_123(t);
          LocalPopChoice(d_39);
        }
      else
        {
          t = c_39;
          {
            ATerm f_39 = t;
            int g_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_12, j_12, k_12, t);
                LocalPopChoice(g_39);
              }
            else
              {
                t = f_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_12, t);
  }
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_63 = NULL;
        v_63 = t;
        {
          ATerm k_39 = t;
          int l_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_25 = NULL;
              t = v_63;
              {
                ATerm o_39 = t;
                int p_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_25 = NULL,u_25 = NULL;
                    t = term_w_12;
                    t_25 = t;
                    t = term_h_37;
                    u_25 = t;
                    t = term_i_37;
                    t = e_9(t_25, u_25, t);
                    LocalPopChoice(p_39);
                  }
                else
                  {
                    t = o_39;
                    t = fetch_1_0(l_12, t);
                  }
              }
              t = v_63;
              t = default_system_usage_0_0(t);
              t = term_l_23;
              s_25 = t;
              t = SSL_exit(s_25);
              LocalPopChoice(l_39);
            }
          else
            {
              t = k_39;
              {
                ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
                t = term_w_12;
                f_26 = t;
                t = term_c_38;
                g_26 = t;
                t = term_q_39;
                t = e_9(f_26, g_26, t);
                t = v_63;
                t = default_system_about_0_0(t);
                t = term_l_23;
                e_26 = t;
                t = SSL_exit(e_26);
              }
            }
        }
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        {
          ATerm r_39 = t;
          int s_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
              static ATerm m_12 (ATerm t);
              static ATerm m_12 (ATerm t)
              {
                ATerm z_63 = NULL,a_64 = NULL,g_64 = NULL,o_9 = NULL;
                g_64 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_64 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_64);
                z_63 = t;
                t = a_64;
                if(((j_62 != NULL) && (j_62 != t)))
                  _fail(t);
                else
                  j_62 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_64);
                o_9 = t;
                t = SSLsetAnnotations(o_9, z_63);
                return(t);
              }
              t = fetch_1_0(m_12, t);
              t = term_u_21;
              x_63 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_62)), term_t_39);
              y_63 = t;
              t = SSL_printnl(x_63, y_63);
              t = (ATerm) ATmakeAppl(sym__2, term_u_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_62)), term_t_39));
              t = default_system_usage_0_0(t);
              t = term_n_13;
              w_63 = t;
              t = SSL_exit(w_63);
              LocalPopChoice(s_39);
            }
          else
            {
              t = r_39;
            }
        }
      }
  }
  k_62 = t;
  t = term_f_35;
  t = table_destroy_0_0(t);
  t = k_62;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
  t = parse_options_1_0(y_121, t);
  l_64 = t;
  t = term_u_39;
  t = table_create_0_0(t);
  t = term_u_39;
  m_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_39, term_v_39, l_64);
  t = lookup_table_0_1(m_64, t);
  p_64 = t;
  t = term_v_39;
  n_64 = t;
  t = p_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(n_64, l_64, o_64, t);
  t = l_64;
  t = a_122(t);
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_121, t);
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
        {
          ATerm y_39 = t;
          int z_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_122(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_39);
            }
          else
            {
              t = y_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      {
        ATerm d_40 = t;
        int e_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(e_40);
          }
        else
          {
            t = d_40;
            {
              ATerm h_40 = t;
              int n_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(n_40);
                }
              else
                {
                  t = h_40;
                  {
                    ATerm o_40 = t;
                    int p_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(q_12, r_12, s_12, t);
                        LocalPopChoice(p_40);
                      }
                    else
                      {
                        t = o_40;
                        {
                          ATerm q_40 = t;
                          int r_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(r_40);
                            }
                          else
                            {
                              t = q_40;
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
  t = xtc_temp_files_1_0(t_12, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL;
  t = term_w_28;
  s_64 = t;
  t = term_q_22;
  t_64 = t;
  t = term_s_40;
  t = h_9(s_64, t_64, t);
  t = term_t_40;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_w_40;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL;
  ATerm x_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL;
      t = term_w_12;
      a_65 = t;
      t = term_r_22;
      b_65 = t;
      t = term_z_40;
      t = e_9(a_65, b_65, t);
      z_64 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_64);
      LocalPopChoice(y_40);
    }
  else
    {
      t = x_40;
      t = term_c_13;
    }
  v_64 = t;
  t = term_c_41;
  t = xtc_find_path_0_0(t);
  w_64 = t;
  t = term_k_25;
  x_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_64), term_d_41);
  y_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATempty, w_64), term_d_41));
  t = l_8(x_64, y_64, t);
  t = v_64;
  t = parse_module_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_12, default_usage_0_0, _id, o_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
