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
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
}
ATerm term_z_40;
ATerm term_y_40;
ATerm term_v_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_n_39;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_k_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_l_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_a_37;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_u_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_p_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_n_34;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_e_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_s_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_g_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_o_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_k_29;
ATerm term_g_29;
ATerm term_d_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_i_28;
ATerm term_v_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_b_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_r_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_v_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_r_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_z_23;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_f_22;
ATerm term_b_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_z_19;
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
ATerm term_b_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_g_18;
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
ATerm term_n_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_u_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_l_13;
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
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_g_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
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
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_m_13, term_g_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_o_14);
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
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_b_15);
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
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_v_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_j_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_z_16, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_h_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_r_17);
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
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_g_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_n_18, term_o_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_18, term_s_18, term_t_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_y_18, term_z_18);
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
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_z_19);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_f_20, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_20, term_k_20, term_l_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_s_20, term_t_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_20, term_z_20, term_f_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" ** Warning: Mismatch between basename of input file (", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol(") and module name (", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(") specified", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_k_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_j_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_j_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_p_28);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_g_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym__2, term_x_31, term_p_32);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__2, term_x_31, term_y_31);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_f_22);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_q_23);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_23);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_p_22);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym__2, term_p_28, term_m_13);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_m_36);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_e_37);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym__2, term_d_35, term_e_35);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_p_22);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_p_22);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym__2, term_e_37, term_p_22);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym__3, term_d_35, term_e_35, (ATerm) ATempty);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_a_38);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_p_22);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_q_22);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm b_8 (ATerm s_42, ATerm t_42, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm c_8 (ATerm k_26, ATerm l_26, ATerm t);
static ATerm d_8 (ATerm h_86 (ATerm), ATerm g_200, ATerm u_26, ATerm t);
static ATerm m_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t);
static ATerm e_8 (ATerm c_23, ATerm d_23, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm w_84 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm f_106 (ATerm), ATerm t);
static ATerm g_8 (ATerm t_101 (ATerm), ATerm a_44, ATerm y_43, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm w_91 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm check_module_name_0_1 (ATerm t_0, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm verbosity_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm v_104 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm g_104 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm e_103 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm i_8 (ATerm j_23, ATerm i_23, ATerm t);
static ATerm w_8 (ATerm k_23, ATerm l_23, ATerm t);
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
static ATerm j_8 (ATerm b_50, ATerm r_502, ATerm t);
ATerm find_in_includes_1_0 (ATerm q_83 (ATerm), ATerm t);
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
ATerm if_verbose2_1_0 (ATerm d_103 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm j_91 (ATerm), ATerm t);
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
ATerm basename_1_0 (ATerm t_104 (ATerm), ATerm t);
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
ATerm at_end_1_0 (ATerm o_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_33 (ATerm x_32, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_8 (ATerm y_49, ATerm x_49, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm debug_1_0 (ATerm f_86 (ATerm), ATerm t);
static ATerm l_8 (ATerm m_49, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_103 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm f_103 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm h_103 (ATerm), ATerm t);
static ATerm n_8 (ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm y_33, ATerm x_33, ATerm t);
static ATerm o_8 (ATerm i_95 (ATerm), ATerm u_33, ATerm t_33, ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_8 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t);
static ATerm q_8 (ATerm j_103 (ATerm), ATerm u_46, ATerm t_46, ATerm t);
static ATerm v_8 (ATerm v_50, ATerm w_50, ATerm t);
static ATerm i_40 (ATerm c_40, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_8 (ATerm q_26, ATerm t);
static ATerm s_8 (ATerm h_41, ATerm i_41, ATerm t);
static ATerm t_8 (ATerm e_51, ATerm f_51, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_42 (ATerm w_40, ATerm t);
static ATerm d_42 (ATerm c_41, ATerm d_41, ATerm e_41, ATerm t);
static ATerm g_42 (ATerm o_41, ATerm p_41, ATerm q_41, ATerm t);
static ATerm u_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_99 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_49 (ATerm g_48, ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm d_9 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm x_8 (ATerm s_45, ATerm t_45, ATerm t);
ATerm end_scope_1_0 (ATerm q_101 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_101 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm r_105 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_9 (ATerm s_49, ATerm t_49, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm e_9 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_8 (ATerm m_42, ATerm n_42, ATerm t);
ATerm foldr_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_103 (ATerm), ATerm t);
static ATerm i_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_11 (ATerm t);
ATerm need_help_1_0 (ATerm h_107 (ATerm), ATerm t);
static ATerm h_9 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm t);
static ATerm i_9 (ATerm i_49, ATerm j_49, ATerm t);
ATerm lookup_table_0_1 (ATerm z_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm n_49, ATerm o_49, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm a_9 (ATerm k_49, ATerm l_49, ATerm t);
static ATerm b_9 (ATerm p_49, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm x_90 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm o_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_91 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_109 (ATerm), ATerm t);
static ATerm h_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm parse_options_1_0 (ATerm e_109 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t);
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
      t = d_9(h_1, i_1, t);
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
      ATerm b_0 = NULL,f_0 = NULL;
      t = term_x_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 = NULL,j_0 = NULL;
            t = term_w_12;
            h_0 = t;
            t = term_x_12;
            j_0 = t;
            t = term_y_12;
            t = d_9(h_0, j_0, t);
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
      f_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_13, b_0);
      t = w_8(f_0, b_0, t);
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
static ATerm b_8 (ATerm s_42, ATerm t_42, ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(s_42, t_42);
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = SSL_subtr(s_42, t_42);
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
        ATerm q_1 = NULL,t_1 = NULL;
        t = term_w_12;
        q_1 = t;
        t = term_g_13;
        t_1 = t;
        t = term_l_13;
        t = d_9(q_1, t_1, t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = term_m_13;
      }
  }
  l_1 = t;
  t = term_m_13;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_1, term_m_13);
  t = b_8(l_1, n_1, t);
  m_1 = t;
  t = SSL_int_to_string(m_1);
  k_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_1), term_g_13);
  return(t);
}
static ATerm c_8 (ATerm k_26, ATerm l_26, ATerm t)
{
  ATerm u_1 = NULL;
  t = SSL_write_term_to_stream_baf(k_26, l_26);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_1);
  return(t);
}
static ATerm d_8 (ATerm h_86 (ATerm), ATerm g_200, ATerm u_26, ATerm t)
{
  ATerm v_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_200, term_p_13);
  t = u_8(t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_1, u_26);
  t = h_86(t);
  t = fclose_0_0(t);
  t = u_26;
  return(t);
}
static ATerm m_0 (ATerm t)
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
  t = c_8(z_1, a_2, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,y_1 = NULL;
  y_1 = t;
  t = xtc_new_file_0_0(t);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_1, y_1);
  t = d_8(m_0, w_1, y_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_1);
  t = xtc_transform_file_2_0(e_105, f_105, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm e_8 (ATerm c_23, ATerm d_23, ATerm t)
{
  t = SSL_execvp(c_23, d_23);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_13), d_1), term_r_13);
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
        static ATerm s_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_13 = ATgetArgument(t, 0);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_21), term_w_20), term_p_20), term_h_20), term_c_20), term_v_19), term_r_19), term_n_19), term_j_19), term_f_19), term_b_19), term_u_18), term_p_18), term_i_18), term_a_18), term_w_17), term_s_17), term_i_17), term_c_17), term_o_16), term_w_15), term_q_15), term_m_15), term_g_15), term_c_15), term_x_14), term_p_14), term_h_14);
        t = fetch_elem_1_0(s_0, t);
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
  ATerm q_3 = NULL,r_4 = NULL;
  q_3 = t;
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            r_4 = ATgetArgument(t, 1);
            {
              ATerm m_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_21);
        {
          ATerm n_21 = t;
          int q_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_2 = NULL,y_2 = NULL,h_3 = NULL;
              t = r_4;
              {
                ATerm r_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_21;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              o_2 = t;
              t = term_t_21;
              y_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, o_2), term_u_21);
              h_3 = t;
              t = SSL_printnl(y_2, h_3);
              t = (ATerm) ATmakeAppl(sym__2, term_t_21, (ATerm) ATinsert(ATinsert(ATempty, o_2), term_u_21));
              LocalPopChoice(q_21);
            }
          else
            {
              t = n_21;
              t = q_3;
            }
        }
      }
    else
      {
        t = h_21;
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
ATerm fork_and_wait_1_0 (ATerm w_84 (ATerm), ATerm t)
{
  ATerm d_5 = NULL,f_5 = NULL;
  f_5 = t;
  t = fork_0_0(t);
  d_5 = t;
  {
    ATerm v_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_5;
        t = w_84(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = v_21;
        t = SSL_waitpid(d_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_21 = ATgetArgument(t, 0);
            if(((ATgetType(y_21) != AT_INT) || (ATgetInt((ATermInt) y_21) != 0)))
              _fail(t);
            {
              ATerm z_21 = ATgetArgument(t, 1);
            }
            {
              ATerm a_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_5;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,l_5 = NULL;
  l_5 = t;
  t = f_106(t);
  t = xtc_find_0_0(t);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_5, l_5);
  {
    static ATerm w_0 (ATerm t)
    {
      ATerm m_5 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, j_5, l_5);
      t = e_8(j_5, l_5, t);
      t = term_b_22;
      m_5 = t;
      t = SSL_exit(m_5);
      return(t);
    }
    t = fork_and_wait_1_0(w_0, t);
  }
  t = l_5;
  return(t);
}
static ATerm g_8 (ATerm t_101 (ATerm), ATerm a_44, ATerm y_43, ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  s_5 = t;
  t = t_101(t);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_5, a_44, y_43);
  t = e_9(o_5, a_44, y_43, t);
  {
    ATerm c_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_5 = NULL;
        t = term_f_22;
        y_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_f_22);
        t = d_9(o_5, y_5, t);
        LocalPopChoice(e_22);
      }
    else
      {
        t = c_22;
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
  t = (ATerm) ATmakeAppl(sym__3, o_5, term_f_22, (ATerm) ATinsert(CheckATermList(q_5), (ATerm) ATinsert(CheckATermList(p_5), a_44)));
  t = lookup_table_0_1(o_5, t);
  w_5 = t;
  t = term_f_22;
  t_5 = t;
  t = (ATerm) ATinsert(CheckATermList(q_5), (ATerm) ATinsert(CheckATermList(p_5), a_44));
  u_5 = t;
  t = w_5;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(t_5, u_5, v_5, t);
  t = s_5;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm b_6 = NULL;
  ATerm g_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_6 = NULL,n_3 = NULL;
      f_6 = t;
      t = term_j_22;
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_6, term_j_22);
      t = s_8(f_6, n_3, t);
      b_6 = t;
      t = SSL_mkstemp(b_6);
      LocalPopChoice(i_22);
    }
  else
    {
      t = g_22;
      {
        ATerm g_6 = NULL;
        t = term_l_22;
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
  ATerm k_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  t = P__tmpdir_0_0(t);
  r_6 = t;
  t = term_o_22;
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_6, term_o_22);
  t = s_8(r_6, s_6, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      p_6 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_p_22;
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_6, term_p_22);
  t = g_8(y_0, p_6, q_6, t);
  t = SSL_close(k_6);
  t = p_6;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm u_6 = NULL,x_6 = NULL;
  u_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm y_6 = NULL,z_6 = NULL;
      t = u_6;
      t = xtc_new_file_0_0(t);
      y_6 = t;
      t = x_0(t);
      z_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_6, (ATerm) ATinsert(ATinsert(ATempty, y_6), term_x_12));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_6);
    }
  else
    {
      ATerm d_7 = NULL,g_7 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_6;
      t = xtc_new_file_0_0(t);
      d_7 = t;
      t = x_0(t);
      g_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_7), term_x_12), x_6), term_q_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_7);
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  static ATerm n_9 (ATerm t)
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_9 = NULL,j_9 = NULL,k_9 = NULL,t_3 = NULL,c_4 = NULL,q_0 = NULL;
        c_9 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_9 = ATgetFirst((ATermList) t);
            k_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_9);
        t_3 = t;
        t = k_9;
        t = n_9(t);
        c_4 = t;
        t = (ATerm) ATinsert(CheckATermList(c_4), j_9);
        q_0 = t;
        t = SSLsetAnnotations(q_0, t_3);
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        t = w_91(t);
      }
    return(t);
  }
  t = n_9(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  v_9 = t;
  t = SSL_explode_string(v_9);
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_22 = ATgetFirst((ATermList) t);
              if(((ATgetType(v_22) != AT_INT) || (ATgetInt((ATermInt) v_22) != 47)))
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
        t = at_suffix_rev_1_0(z_0, t);
        t = not_null(t_9);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
      }
  }
  u_9 = t;
  t = SSL_implode_string(u_9);
  return(t);
}
ATerm check_module_name_0_1 (ATerm t_0, ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Specification_1))
          {
            ATerm y_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_22);
        t = a_11;
      }
    else
      {
        t = w_22;
        if(match_cons(t, sym_Module_2))
          {
            b_11 = ATgetArgument(t, 0);
            {
              ATerm a_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = a_11;
        {
          ATerm b_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_4 = NULL;
              t = t_0;
              t = get_filename_0_0(t);
              s_4 = t;
              if((b_11 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym__2, s_4, s_4);
              LocalPopChoice(e_23);
            }
          else
            {
              t = b_23;
              {
                ATerm z_5 = NULL,a_6 = NULL,i_6 = NULL,j_6 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), b_11), term_g_23), t_0), term_f_23);
                j_6 = t;
                t = SSL_concat_strings(j_6);
                z_5 = t;
                t = term_t_21;
                a_6 = t;
                t = (ATerm) ATinsert(ATempty, z_5);
                i_6 = t;
                t = SSL_printnl(a_6, i_6);
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
      t = (ATerm) ATinsert(ATempty, term_m_23);
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_11, (ATerm) ATinsert(ATempty, term_m_23));
      t = v_8(j_11, l_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm verbosity_0_0 (ATerm t)
{
  ATerm n_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_11 = NULL,p_11 = NULL;
      t = term_w_12;
      m_11 = t;
      t = term_g_13;
      p_11 = t;
      t = term_l_13;
      t = d_9(m_11, p_11, t);
      LocalPopChoice(p_23);
    }
  else
    {
      t = n_23;
      t = term_q_23;
    }
  return(t);
}
ATerm if_not_silent_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_11 = NULL;
          x_11 = t;
          t = verbosity_0_0(t);
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
            _fail(t);
          t = x_11;
          LocalPopChoice(u_23);
        }
      else
        {
          t = t_23;
          t = r_0(t);
        }
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
            y_11 = t;
            t = term_w_12;
            z_11 = t;
            t = term_g_13;
            a_12 = t;
            t = term_l_13;
            t = d_9(z_11, a_12, t);
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
              _fail(t);
            t = y_11;
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            t = r_0(t);
          }
      }
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,i_12 = NULL;
  t = basename_1_0(_id, t);
  i_12 = t;
  t = term_p_22;
  t = v_104(t);
  g_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_12), term_z_23), i_12);
  f_12 = t;
  t = SSL_concat_strings(f_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,n_13 = NULL;
  j_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL;
        t = j_13;
        t = o_0(t);
        a_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = a_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = a_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, n_13, a_7);
        t = w_8(n_13, a_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_13);
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_7 = NULL;
              t = j_13;
              t = o_0(t);
              m_7 = t;
              {
                ATerm f_24 = t;
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
                            if((n_13 != t))
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
                    t = f_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, n_13, m_7);
              t = w_8(n_13, m_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_13);
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              t = j_13;
              t = o_0(t);
              if((n_13 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_13);
            }
        }
      }
  }
  return(t);
}
ATerm if_keep1_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  ATerm w_13 = NULL;
  w_13 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
        t = term_w_12;
        b_14 = t;
        t = term_k_24;
        c_14 = t;
        t = term_l_24;
        t = d_9(b_14, c_14, t);
        a_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_14, term_m_13);
        t = geq_0_0(t);
        t = w_13;
        t = g_104(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = w_13;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm e_103 (ATerm), ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_14 = NULL,l_14 = NULL,m_14 = NULL;
        t = term_w_12;
        l_14 = t;
        t = term_g_13;
        m_14 = t;
        t = term_l_13;
        t = d_9(l_14, m_14, t);
        i_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_14, term_v_14);
        t = geq_0_0(t);
        t = f_14;
        t = e_103(t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = f_14;
      }
  }
  return(t);
}
static ATerm a_1 (ATerm t)
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
  ATerm p_24 = t;
  int q_24 = stack_ptr;
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
      t = fetch_elem_1_0(a_1, t);
      r_14 = t;
      t = SSL_is_string(r_14);
      q_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, q_14), term_r_24);
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
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
static ATerm i_8 (ATerm j_23, ATerm i_23, ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(j_23, i_23);
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      t = get_errno_0_0(t);
      t = term_p_22;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, j_23, i_23);
      t = w_8(j_23, i_23, t);
      t = SSL_remove(j_23);
    }
  return(t);
}
static ATerm w_8 (ATerm k_23, ATerm l_23, ATerm t)
{
  t = SSL_copy(k_23, l_23);
  return(t);
}
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_7 = NULL;
        t = k_15;
        t = p_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_z_12;
        w_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_15, term_z_12);
        t = w_8(l_15, w_7, t);
        t = SSL_remove(l_15);
        t = term_z_12;
        LocalPopChoice(x_24);
      }
    else
      {
        t = v_24;
        {
          ATerm y_24 = t;
          int z_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_9 = NULL;
              t = k_15;
              t = p_0(t);
              f_9 = t;
              {
                ATerm a_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_9 = NULL;
                    l_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = l_9;
                      }
                    else
                      {
                        t = l_9;
                        if((l_15 != t))
                          {
                            _fail(t);
                          }
                        t = l_9;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_25;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_15, f_9);
              t = i_8(l_15, f_9, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_9);
              LocalPopChoice(z_24);
            }
          else
            {
              t = y_24;
              t = k_15;
              t = p_0(t);
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
static ATerm f_1 (ATerm t)
{
  t = debug_1_0(g_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_b_25;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_c_25;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  t = term_t_21;
  d_16 = t;
  t = (ATerm) ATinsert(ATempty, term_f_25);
  e_16 = t;
  t = SSL_printnl(d_16, e_16);
  t = c_16;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL;
  t = term_w_12;
  h_16 = t;
  t = term_j_25;
  i_16 = t;
  t = term_k_25;
  t = d_9(h_16, i_16, t);
  t = map_1_0(b_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm k_16 = NULL;
  k_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_16), term_j_25);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  t = term_w_12;
  l_16 = t;
  t = term_j_25;
  m_16 = t;
  t = term_k_25;
  t = d_9(l_16, m_16, t);
  t = map_1_0(g_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm p_16 = NULL;
  p_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_16), term_j_25);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm r_15 = NULL,x_15 = NULL;
  t = if_verbose6_1_0(f_1, t);
  x_15 = t;
  t = guarantee_extension_1_0(j_1, t);
  r_15 = t;
  t = x_15;
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_15 = NULL;
        t = r_15;
        t = find_in_includes_1_0(o_1, t);
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_15);
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        {
          ATerm z_15 = NULL;
          static ATerm h_2 (ATerm t)
          {
            t = r_15;
            return(t);
          }
          t = if_verbose2_1_0(p_1, t);
          t = guarantee_extension_1_0(r_1, t);
          z_15 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_15);
          {
            ATerm n_25 = t;
            int t_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_16 = NULL,g_16 = NULL,u_0 = NULL;
                g_16 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm u_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_16);
                f_16 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, z_15);
                u_0 = t;
                t = SSLsetAnnotations(u_0, f_16);
                LocalPopChoice(t_25);
                t = xtc_transform_file_2_0(s_1, x_1, t);
              }
            else
              {
                t = n_25;
                t = xtc_transform_term_2_0(c_2, d_2, t);
              }
          }
          t = rename_to_1_0(h_2, t);
        }
      }
  }
  return(t);
}
static ATerm j_8 (ATerm b_50, ATerm r_502, ATerm t)
{
  static ATerm j_2 (ATerm t)
  {
    ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
    q_16 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_50), term_v_25), q_16);
    t_16 = t;
    t = SSL_concat_strings(t_16);
    r_16 = t;
    t = (ATerm) ATinsert(ATempty, term_m_23);
    s_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_16, (ATerm) ATinsert(ATempty, term_m_23));
    t = v_8(r_16, s_16, t);
    return(t);
  }
  t = r_502;
  t = fetch_elem_1_0(j_2, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,a_17 = NULL;
  static ATerm l_2 (ATerm t)
  {
    t = debug_1_0(q_83, t);
    return(t);
  }
  x_16 = t;
  t = term_w_12;
  y_16 = t;
  t = term_j_25;
  a_17 = t;
  t = term_k_25;
  t = d_9(y_16, a_17, t);
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_16, w_16);
  t = j_8(x_16, w_16, t);
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
  t = term_b_26;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_g_26;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm k_17 = NULL,o_17 = NULL,q_17 = NULL;
  k_17 = t;
  t = term_t_21;
  o_17 = t;
  t = (ATerm) ATinsert(ATempty, term_h_26);
  q_17 = t;
  t = SSL_printnl(o_17, q_17);
  t = k_17;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_i_26;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_i_26;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL;
  t = if_verbose6_1_0(m_2, t);
  f_17 = t;
  t = guarantee_extension_1_0(p_2, t);
  g_17 = t;
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 = NULL;
        t = find_in_includes_1_0(s_2, t);
        j_17 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_17);
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        {
          static ATerm l_3 (ATerm t)
          {
            t = g_17;
            return(t);
          }
          t = if_verbose2_1_0(u_2, t);
          t = f_17;
          t = get_syntax_definition_0_0(t);
          {
            ATerm o_26 = t;
            int p_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_18 = NULL,c_18 = NULL;
                c_18 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    b_18 = ATgetArgument(t, 0);
                    {
                      ATerm s_9 = NULL,b_1 = NULL;
                      t = SSLgetAnnotations(c_18);
                      s_9 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, b_18);
                      b_1 = t;
                      t = SSLsetAnnotations(b_1, s_9);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = c_18;
                  }
                LocalPopChoice(p_26);
                {
                  static ATerm w_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, f_17), term_r_26);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(v_2, w_2, t);
                }
              }
            else
              {
                t = o_26;
                {
                  static ATerm k_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, f_17), term_r_26);
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
ATerm if_verbose2_1_0 (ATerm d_103 (ATerm), ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_18 = NULL,k_18 = NULL,m_18 = NULL;
        t = term_w_12;
        k_18 = t;
        t = term_g_13;
        m_18 = t;
        t = term_l_13;
        t = d_9(k_18, m_18, t);
        j_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_18, term_k_14);
        t = geq_0_0(t);
        t = h_18;
        t = d_103(t);
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = h_18;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_91 (ATerm), ATerm t)
{
  ATerm q_18 = NULL;
  static ATerm p_3 (ATerm t)
  {
    t = j_91(t);
    if(((q_18 != NULL) && (q_18 != t)))
      _fail(t);
    else
      q_18 = t;
    return(t);
  }
  t = fetch_1_0(p_3, t);
  t = not_null(q_18);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = debug_1_0(s_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_x_26;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_b_27;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = debug_1_0(x_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm x_18 = NULL,y_19 = NULL,a_20 = NULL;
  t = if_verbose6_1_0(r_3, t);
  y_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL,h_10 = NULL,i_2 = NULL;
        t = SSLgetAnnotations(y_19);
        e_10 = t;
        t = a_20;
        t = guarantee_extension_1_0(u_3, t);
        h_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_10);
        i_2 = t;
        t = SSLsetAnnotations(i_2, e_10);
        t = read_from_0_0(t);
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        {
          ATerm r_10 = NULL,v_10 = NULL,f_11 = NULL,k_2 = NULL;
          t = SSLgetAnnotations(y_19);
          v_10 = t;
          t = a_20;
          t = guarantee_extension_1_0(v_3, t);
          f_11 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_11);
          k_2 = t;
          t = SSLsetAnnotations(k_2, v_10);
          t = read_from_0_0(t);
          r_10 = t;
          t = SSL_explode_term(r_10);
          if(match_cons(t, sym__2))
            {
              x_18 = ATgetArgument(t, 0);
              {
                ATerm e_27 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, x_18)));
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
  t = term_f_27;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm s_21 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      s_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_21;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = debug_1_0(e_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_g_27;
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
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL,u_20 = NULL;
        t = term_w_12;
        r_20 = t;
        t = term_j_27;
        u_20 = t;
        t = term_k_27;
        t = d_9(r_20, u_20, t);
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        {
          ATerm l_27 = t;
          int m_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm w_21 (ATerm v_20, ATerm t)
              {
                ATerm x_20 = NULL,a_21 = NULL;
                t = term_t_21;
                x_20 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_27), o_20), term_o_27), v_20), term_n_27);
                a_21 = t;
                t = SSL_printnl(x_20, a_21);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_27), o_20), term_o_27), v_20), term_n_27);
                _fail(t);
                return(t);
              }
              ATerm b_21 = NULL,e_21 = NULL;
              t = get_meta_0_0(t);
              e_21 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  b_21 = ATgetArgument(t, 0);
                  {
                    ATerm q_27 = t;
                    int r_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = b_21;
                        t = fetch_elem_1_0(b_4, t);
                        LocalPopChoice(r_27);
                      }
                    else
                      {
                        t = q_27;
                        t = w_21(e_21, t);
                      }
                  }
                }
              else
                {
                  t = w_21(e_21, t);
                }
              LocalPopChoice(m_27);
            }
          else
            {
              t = l_27;
              t = term_v_27;
            }
        }
      }
  }
  t = if_verbose2_1_0(d_4, t);
  return(t);
}
ATerm basename_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,k_22 = NULL;
  k_22 = t;
  t = SSL_explode_string(k_22);
  {
    ATerm a_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_24 (ATerm t)
        {
          ATerm e_24 = NULL,i_24 = NULL,j_24 = NULL;
          e_24 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_24 = ATgetFirst((ATermList) t);
              j_24 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm e_28 = t;
            int f_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_11 = NULL,c_12 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(e_24);
                s_11 = t;
                t = j_24;
                t = s_24(t);
                c_12 = t;
                t = (ATerm) ATinsert(CheckATermList(c_12), i_24);
                q_2 = t;
                t = SSLsetAnnotations(q_2, s_11);
                LocalPopChoice(f_28);
              }
            else
              {
                t = e_28;
                {
                  ATerm g_28 = t;
                  int h_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_12 = NULL,r_2 = NULL;
                      t = SSLgetAnnotations(e_24);
                      p_12 = t;
                      t = i_24;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(j_24), i_24);
                      r_2 = t;
                      t = SSLsetAnnotations(r_2, p_12);
                      LocalPopChoice(h_28);
                    }
                  else
                    {
                      t = g_28;
                      {
                        ATerm k_13 = NULL,o_13 = NULL,t_2 = NULL;
                        t = SSLgetAnnotations(e_24);
                        k_13 = t;
                        t = i_24;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = j_24;
                        t = t_104(t);
                        o_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(o_13), i_24);
                        t_2 = t;
                        t = SSLsetAnnotations(t_2, k_13);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = s_24(t);
        LocalPopChoice(c_28);
      }
    else
      {
        t = a_28;
      }
  }
  h_22 = t;
  t = SSL_implode_string(h_22);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = debug_1_0(g_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_i_28;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_m_28;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_n_28);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_m_28;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_n_28);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_o_28;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm u_27 = NULL,w_27 = NULL,x_27 = NULL;
  t = pass_verbose_0_0(t);
  w_27 = t;
  t = term_p_28;
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_27 = NULL,z_27 = NULL;
        t = term_w_12;
        y_27 = t;
        t = term_p_28;
        z_27 = t;
        t = term_s_28;
        t = d_9(y_27, z_27, t);
        LocalPopChoice(r_28);
        t = (ATerm) ATinsert(ATempty, term_t_28);
      }
    else
      {
        t = q_28;
        t = (ATerm) ATempty;
      }
  }
  x_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_27), w_27);
  t = concat_0_0(t);
  u_27 = t;
  t = (ATerm) ATinsert(CheckATermList(u_27), term_u_28);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_o_28;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm b_28 = NULL,d_28 = NULL,j_28 = NULL;
  t = pass_verbose_0_0(t);
  d_28 = t;
  t = term_p_28;
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_28 = NULL,l_28 = NULL;
        t = term_w_12;
        k_28 = t;
        t = term_p_28;
        l_28 = t;
        t = term_s_28;
        t = d_9(k_28, l_28, t);
        LocalPopChoice(w_28);
        t = (ATerm) ATinsert(ATempty, term_t_28);
      }
    else
      {
        t = v_28;
        t = (ATerm) ATempty;
      }
  }
  j_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_28), d_28);
  t = concat_0_0(t);
  b_28 = t;
  t = (ATerm) ATinsert(CheckATermList(b_28), term_u_28);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_x_28;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_y_28;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm j_29 = NULL,n_29 = NULL;
  t = pass_verbose_0_0(t);
  j_29 = t;
  t = term_p_28;
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_29 = NULL,u_29 = NULL;
        t = term_w_12;
        s_29 = t;
        t = term_p_28;
        u_29 = t;
        t = term_s_28;
        t = d_9(s_29, u_29, t);
        LocalPopChoice(a_29);
        t = (ATerm) ATinsert(ATempty, term_p_28);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATempty;
      }
  }
  n_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_29), j_29);
  t = concat_0_0(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_y_28;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm w_29 = NULL,y_29 = NULL;
  t = pass_verbose_0_0(t);
  w_29 = t;
  t = term_p_28;
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_30 = NULL,f_30 = NULL;
        t = term_w_12;
        e_30 = t;
        t = term_p_28;
        f_30 = t;
        t = term_s_28;
        t = d_9(e_30, f_30, t);
        LocalPopChoice(c_29);
        t = (ATerm) ATinsert(ATempty, term_p_28);
      }
    else
      {
        t = b_29;
        t = (ATerm) ATempty;
      }
  }
  y_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_29), w_29);
  t = concat_0_0(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_d_29;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,x_2 = NULL;
  t = if_verbose6_1_0(f_4, t);
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
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_25);
  x_2 = t;
  t = SSLsetAnnotations(x_2, z_25);
  t = y_25;
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      o_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_25;
  t = pass_sort_0_0(t);
  p_25 = t;
  t = y_25;
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_26 = ATgetArgument(t, 0);
            {
              ATerm z_13 = NULL,z_2 = NULL;
              t = SSLgetAnnotations(y_25);
              z_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_26);
              z_2 = t;
              t = SSLsetAnnotations(z_2, z_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_25;
          }
        LocalPopChoice(f_29);
        {
          static ATerm k_4 (ATerm t)
          {
            ATerm v_26 = NULL,w_26 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(l_4, t);
            w_26 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_26, p_25);
            t = conc_0_0(t);
            v_26 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_26), o_25), term_k_29), term_g_29);
            return(t);
          }
          t = xtc_transform_file_2_0(h_4, k_4, t);
        }
      }
    else
      {
        t = e_29;
        {
          static ATerm o_4 (ATerm t)
          {
            ATerm z_26 = NULL,a_27 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(p_4, t);
            a_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_27, p_25);
            t = conc_0_0(t);
            z_26 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(z_26), o_25), term_k_29), term_g_29);
            return(t);
          }
          t = xtc_transform_term_2_0(n_4, o_4, t);
        }
      }
  }
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL,t_27 = NULL;
        t_27 = t;
        if(match_cons(t, sym_FILE_1))
          {
            s_27 = ATgetArgument(t, 0);
            {
              ATerm n_14 = NULL,a_3 = NULL;
              t = SSLgetAnnotations(t_27);
              n_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_27);
              a_3 = t;
              t = SSLsetAnnotations(a_3, n_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_27;
          }
        LocalPopChoice(m_29);
        t = xtc_transform_file_2_0(q_4, t_4, t);
      }
    else
      {
        t = l_29;
        t = xtc_transform_term_2_0(w_4, x_4, t);
      }
  }
  {
    static ATerm y_4 (ATerm t)
    {
      static ATerm z_4 (ATerm t)
      {
        t = w_25;
        t = guarantee_extension_1_0(a_5, t);
        return(t);
      }
      t = copy_to_1_0(z_4, t);
      return(t);
    }
    t = if_keep1_1_0(y_4, t);
  }
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_29 = NULL,i_29 = NULL;
        i_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_29 = ATgetArgument(t, 0);
            {
              ATerm a_15 = NULL,b_3 = NULL;
              t = SSLgetAnnotations(i_29);
              a_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_29);
              b_3 = t;
              t = SSLsetAnnotations(b_3, a_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_29;
          }
        LocalPopChoice(p_29);
        t = xtc_transform_file_2_0(c_5, g_5, t);
      }
    else
      {
        t = o_29;
        t = xtc_transform_term_2_0(h_5, i_5, t);
      }
  }
  x_25 = t;
  {
    static ATerm k_5 (ATerm t)
    {
      t = read_from_0_0(t);
      t = check_module_name_0_1(w_25, t);
      return(t);
    }
    t = if_not_silent_1_0(k_5, t);
  }
  t = x_25;
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_30 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_30 = ATgetArgument(t, 0);
            {
              ATerm u_15 = NULL,g_3 = NULL;
              t = SSLgetAnnotations(x_25);
              u_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_30);
              g_3 = t;
              t = SSLsetAnnotations(g_3, u_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_25;
          }
        LocalPopChoice(r_29);
        t = xtc_transform_file_2_0(n_5, pass_verbose_0_0, t);
      }
    else
      {
        t = q_29;
        t = xtc_transform_term_2_0(r_5, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm o_91 (ATerm), ATerm t)
{
  static ATerm j_32 (ATerm t)
  {
    ATerm e_32 = NULL,h_32 = NULL,i_32 = NULL;
    i_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_32 = ATgetFirst((ATermList) t);
        h_32 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_16 = NULL,v_16 = NULL,a_4 = NULL;
          t = SSLgetAnnotations(i_32);
          n_16 = t;
          t = h_32;
          t = j_32(t);
          v_16 = t;
          t = (ATerm) ATinsert(CheckATermList(v_16), e_32);
          a_4 = t;
          t = SSLsetAnnotations(a_4, n_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_32;
        t = o_91(t);
      }
    return(t);
  }
  t = j_32(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_31;
    }
  else
    {
      static ATerm x_5 (ATerm t)
      {
        t = not_null(h_31);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_31 = ATgetFirst((ATermList) t);
          if(((h_31 != NULL) && (h_31 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_31;
      t = at_end_1_0(x_5, t);
    }
  return(t);
}
static ATerm m_33 (ATerm x_32, ATerm t)
{
  ATerm y_32 = NULL;
  t = SSL_explode_term(x_32);
  if(match_cons(t, sym__2))
    {
      ATerm t_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_32;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,g_33 = NULL;
  g_33 = t;
  if(match_cons(t, sym__2))
    {
      b_33 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
      {
        ATerm v_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_6 (ATerm t)
            {
              t = c_33;
              return(t);
            }
            t = b_33;
            t = at_end_1_0(d_6, t);
            LocalPopChoice(x_29);
          }
        else
          {
            t = v_29;
            t = m_33(g_33, t);
          }
      }
    }
  else
    {
      t = m_33(g_33, t);
    }
  return(t);
}
static ATerm k_8 (ATerm y_49, ATerm x_49, ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL;
  t = y_49;
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_33 = NULL;
        t = term_w_12;
        w_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_12, y_49);
        t = d_9(w_33, y_49, t);
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = (ATerm) ATempty;
      }
  }
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_49, o_33);
  t = conc_0_0(t);
  n_33 = t;
  t = term_w_12;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, y_49, n_33);
  t = lookup_table_0_1(p_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(y_49, n_33, s_33, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, y_49, n_33);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL;
  m_34 = t;
  t = SSL_explode_string(m_34);
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_35 (ATerm t)
        {
          ATerm i_35 = NULL,j_35 = NULL,m_35 = NULL;
          i_35 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_35 = ATgetFirst((ATermList) t);
              m_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm d_30 = t;
            int g_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_17 = NULL,p_17 = NULL,i_4 = NULL;
                t = SSLgetAnnotations(i_35);
                l_17 = t;
                t = m_35;
                t = n_35(t);
                p_17 = t;
                t = (ATerm) ATinsert(CheckATermList(p_17), j_35);
                i_4 = t;
                t = SSLsetAnnotations(i_4, l_17);
                LocalPopChoice(g_30);
              }
            else
              {
                t = d_30;
                {
                  ATerm f_18 = NULL,j_4 = NULL;
                  t = SSLgetAnnotations(i_35);
                  f_18 = t;
                  t = j_35;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, j_35);
                  j_4 = t;
                  t = SSLsetAnnotations(j_4, f_18);
                }
              }
          }
          return(t);
        }
        t = n_35(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = (ATerm) ATempty;
      }
  }
  l_34 = t;
  t = SSL_implode_string(l_34);
  return(t);
}
ATerm debug_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,t_35 = NULL,v_35 = NULL,w_35 = NULL;
  q_35 = t;
  t = f_86(t);
  t_35 = t;
  t = term_t_21;
  v_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_35), t_35);
  w_35 = t;
  t = SSL_printnl(v_35, w_35);
  t = q_35;
  return(t);
}
static ATerm l_8 (ATerm m_49, ATerm t)
{
  t = SSL_hashtable_keys(m_49);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL;
  static ATerm h_6 (ATerm t)
  {
    ATerm a_36 = NULL,d_36 = NULL;
    a_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_35), a_36);
    t = d_9(not_null(x_35), a_36, t);
    d_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_36, d_36);
    return(t);
  }
  if(((x_35 != NULL) && (x_35 != t)))
    _fail(t);
  else
    x_35 = t;
  t = lookup_table_0_1(x_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_8(y_35, t);
  t = map_1_0(h_6, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm f_36 = NULL;
  f_36 = t;
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
        t = term_w_12;
        j_36 = t;
        t = term_g_13;
        k_36 = t;
        t = term_l_13;
        t = d_9(j_36, k_36, t);
        i_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_36, term_f_20);
        t = geq_0_0(t);
        t = f_36;
        t = g_103(t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = f_36;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_36 = NULL,z_36 = NULL,b_37 = NULL;
        t = term_w_12;
        z_36 = t;
        t = term_g_13;
        b_37 = t;
        t = term_l_13;
        t = d_9(z_36, b_37, t);
        w_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_36, term_n_17);
        t = geq_0_0(t);
        t = t_36;
        t = f_103(t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = t_36;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_37 = NULL,p_37 = NULL,s_37 = NULL;
        t = term_w_12;
        p_37 = t;
        t = term_g_13;
        s_37 = t;
        t = term_l_13;
        t = d_9(p_37, s_37, t);
        o_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_37, term_z_14);
        t = geq_0_0(t);
        t = k_37;
        t = h_103(t);
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = k_37;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm y_33, ATerm x_33, ATerm t)
{
  t = m_95(t);
  {
    static ATerm l_6 (ATerm t)
    {
      ATerm v_37 = NULL;
      v_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_33, v_37);
      t = l_95(t);
      return(t);
    }
    t = fetch_1_0(l_6, t);
  }
  t = x_33;
  return(t);
}
static ATerm o_8 (ATerm i_95 (ATerm), ATerm u_33, ATerm t_33, ATerm t)
{
  static ATerm w_38 (ATerm t)
  {
    ATerm l_38 = NULL,m_38 = NULL,o_38 = NULL;
    l_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_33;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_38 = ATgetFirst((ATermList) t);
            o_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_30 = t;
          int o_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_38;
              {
                static ATerm m_6 (ATerm t)
                {
                  t = t_33;
                  return(t);
                }
                t = n_8(i_95, m_6, m_38, o_38, t);
              }
              t = w_38(t);
              LocalPopChoice(o_30);
            }
          else
            {
              t = n_30;
              {
                ATerm v_18 = NULL,a_19 = NULL,m_4 = NULL;
                t = SSLgetAnnotations(l_38);
                v_18 = t;
                t = o_38;
                t = w_38(t);
                a_19 = t;
                t = (ATerm) ATinsert(CheckATermList(a_19), m_38);
                m_4 = t;
                t = SSLsetAnnotations(m_4, v_18);
              }
            }
        }
      }
    return(t);
  }
  t = u_33;
  t = w_38(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm l_39 = NULL;
  if(match_cons(t, sym__2))
    {
      l_39 = ATgetArgument(t, 0);
      if((l_39 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_8 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm z_38 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_30 = ATgetArgument(t, 0);
            ATerm t_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
        t = d_9(k_46, l_46, t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = (ATerm) ATempty;
      }
  }
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_39, m_46);
  t = o_8(n_6, d_39, m_46, t);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_46, l_46, c_39);
  t = lookup_table_0_1(k_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(l_46, c_39, e_39, t);
  t = z_38;
  return(t);
}
static ATerm q_8 (ATerm j_103 (ATerm), ATerm u_46, ATerm t_46, ATerm t)
{
  static ATerm o_6 (ATerm t)
  {
    ATerm m_39 = NULL,p_39 = NULL;
    if(match_cons(t, sym__2))
      {
        m_39 = ATgetArgument(t, 0);
        p_39 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_46, m_39, p_39);
    t = j_103(t);
    return(t);
  }
  t = t_46;
  t = map_1_0(o_6, t);
  return(t);
}
static ATerm v_8 (ATerm v_50, ATerm w_50, ATerm t)
{
  t = SSL_access(v_50, w_50);
  return(t);
}
static ATerm i_40 (ATerm c_40, ATerm t)
{
  t = SSL_fclose(c_40);
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
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_40);
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
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
static ATerm r_8 (ATerm q_26, ATerm t)
{
  t = SSL_read_term_from_stream(q_26);
  return(t);
}
static ATerm s_8 (ATerm h_41, ATerm i_41, ATerm t)
{
  t = SSL_strcat(h_41, i_41);
  return(t);
}
static ATerm t_8 (ATerm e_51, ATerm f_51, ATerm t)
{
  ATerm j_40 = NULL;
  t = SSL_fopen(e_51, f_51);
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
  ATerm n_40 = NULL;
  t = SSL_stderr_stream();
  n_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_40);
  return(t);
}
static ATerm c_42 (ATerm w_40, ATerm t)
{
  ATerm x_40 = NULL;
  t = SSL_explode_term(w_40);
  if(match_cons(t, sym__2))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_30 = ATgetArgument(t, 1);
        if(((ATgetType(x_30) == AT_LIST) && !(ATisEmpty(x_30))))
          {
            x_40 = ATgetFirst((ATermList) x_30);
            {
              ATerm y_30 = (ATerm) ATgetNext((ATermList) x_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_40;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_40;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_40;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_40;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_42 (ATerm c_41, ATerm d_41, ATerm e_41, ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,j_41 = NULL,m_41 = NULL,u_4 = NULL;
  t = SSLgetAnnotations(e_41);
  j_41 = t;
  t = c_41;
  if(match_cons(t, sym_Path_1))
    {
      m_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_41, d_41);
  u_4 = t;
  t = SSLsetAnnotations(u_4, j_41);
  if(match_cons(t, sym__2))
    {
      f_41 = ATgetArgument(t, 0);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8(f_41, g_41, t);
  return(t);
}
static ATerm g_42 (ATerm o_41, ATerm p_41, ATerm q_41, ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,w_41 = NULL,v_4 = NULL;
  t = SSLgetAnnotations(q_41);
  t_41 = t;
  t = SSL_is_string(o_41);
  w_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_41, p_41);
  v_4 = t;
  t = SSLsetAnnotations(v_4, t_41);
  if(match_cons(t, sym__2))
    {
      r_41 = ATgetArgument(t, 0);
      s_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8(r_41, s_41, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
  z_41 = t;
  if(match_cons(t, sym__2))
    {
      a_42 = ATgetArgument(t, 0);
      b_42 = ATgetArgument(t, 1);
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_42(z_41, t);
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            {
              ATerm b_31 = t;
              int c_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_42(a_42, b_42, z_41, t);
                  LocalPopChoice(c_31);
                }
              else
                {
                  t = b_31;
                  t = g_42(a_42, b_42, z_41, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_42(z_41, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,u_42 = NULL,b_43 = NULL;
  b_43 = t;
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_43, term_i_31);
        t = u_8(t);
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        {
          ATerm b_20 = NULL,d_20 = NULL;
          t = term_j_31;
          d_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_31, b_43);
          t = s_8(d_20, b_43, t);
          b_20 = t;
          t = SSL_perror(b_20);
          _fail(t);
        }
      }
  }
  j_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_8(u_42, t);
  i_42 = t;
  t = j_42;
  t = fclose_0_0(t);
  t = i_42;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_k_31;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_43 = NULL,i_43 = NULL;
      h_43 = t;
      t = (ATerm) ATinsert(ATempty, term_o_31);
      i_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_43, (ATerm) ATinsert(ATempty, term_o_31));
      t = v_8(h_43, i_43, t);
      LocalPopChoice(n_31);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_31;
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_31 = t;
            if((PushChoice() == 0))
              {
                ATerm j_43 = NULL,k_43 = NULL;
                j_43 = t;
                t = (ATerm) ATinsert(ATempty, term_m_23);
                k_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_43, (ATerm) ATinsert(ATempty, term_m_23));
                t = v_8(j_43, k_43, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_31;
              }
            t = debug_1_0(t_6, t);
            LocalPopChoice(q_31);
          }
        else
          {
            t = p_31;
            t = debug_1_0(v_6, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = debug_1_0(b_7, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = debug_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  t = term_t_21;
  t_44 = t;
  t = (ATerm) ATinsert(ATempty, term_u_31);
  u_44 = t;
  t = SSL_printnl(t_44, u_44);
  t = s_44;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
  if(match_cons(t, sym__3))
    {
      v_44 = ATgetArgument(t, 0);
      w_44 = ATgetArgument(t, 1);
      x_44 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_8(v_44, w_44, x_44, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
  y_44 = t;
  t = term_t_21;
  z_44 = t;
  t = (ATerm) ATinsert(ATempty, term_v_31);
  a_45 = t;
  t = SSL_printnl(z_44, a_45);
  t = y_44;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,p_45 = NULL;
  d_45 = t;
  t = term_t_21;
  e_45 = t;
  t = (ATerm) ATinsert(ATempty, term_u_31);
  p_45 = t;
  t = SSL_printnl(e_45, p_45);
  t = d_45;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL;
  m_43 = t;
  t = if_verbose5_1_0(w_6, t);
  {
    ATerm w_31 = t;
    if((PushChoice() == 0))
      {
        ATerm o_44 = NULL,p_44 = NULL;
        t = term_x_31;
        o_44 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, m_43);
        p_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_31, (ATerm) ATmakeAppl(sym_Imported_1, m_43));
        t = d_9(o_44, p_44, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_31;
      }
  }
  o_43 = t;
  t = term_x_31;
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_31, term_y_31, (ATerm) ATinsert(ATempty, m_43));
  t = lookup_table_0_1(i_44, t);
  n_44 = t;
  t = term_y_31;
  j_44 = t;
  t = (ATerm) ATinsert(ATempty, m_43);
  l_44 = t;
  t = n_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(j_44, l_44, m_44, t);
  t = o_43;
  t = if_verbose4_1_0(c_7, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(f_7, t);
  n_43 = t;
  t = term_x_31;
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_31, n_43);
  t = q_8(h_7, h_44, n_43, t);
  t = if_verbose6_1_0(i_7, t);
  t = term_x_31;
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_31, (ATerm)ATmakeAppl(sym_Imported_1, m_43), (ATerm) ATempty);
  t = lookup_table_0_1(p_43, t);
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, m_43);
  d_44 = t;
  t = (ATerm) ATempty;
  e_44 = t;
  t = g_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(d_44, e_44, f_44, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_31, (ATerm)ATmakeAppl(sym_Imported_1, m_43), (ATerm) ATempty);
  t = if_verbose4_1_0(j_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
  q_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_46;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_46 = ATgetFirst((ATermList) t);
          s_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_20 = NULL,m_20 = NULL,n_20 = NULL,b_5 = NULL;
            t = SSLgetAnnotations(q_46);
            j_20 = t;
            t = r_46;
            t = p_99(t);
            m_20 = t;
            t = s_46;
            t = filter_1_0(p_99, t);
            n_20 = t;
            t = (ATerm) ATinsert(CheckATermList(n_20), m_20);
            b_5 = t;
            t = SSLsetAnnotations(b_5, j_20);
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            t = s_46;
            t = filter_1_0(p_99, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm t)
{
  static ATerm d_47 (ATerm t)
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_89(t);
        t = d_47(t);
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = d_89(t);
      }
    return(t);
  }
  t = d_47(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm d_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_47 = NULL,f_47 = NULL;
      t = term_w_12;
      e_47 = t;
      t = term_g_32;
      f_47 = t;
      t = term_k_32;
      t = d_9(e_47, f_47, t);
      LocalPopChoice(f_32);
    }
  else
    {
      t = d_32;
      {
        ATerm l_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_47 = NULL;
            t = term_n_32;
            i_47 = t;
            t = SSL_getenv(i_47);
            LocalPopChoice(m_32);
          }
        else
          {
            t = l_32;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = debug_1_0(p_7, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_o_32;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm t_47 = NULL,w_47 = NULL;
  t = term_x_31;
  t_47 = t;
  t = term_p_32;
  w_47 = t;
  t = term_q_32;
  t = d_9(t_47, w_47, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm r_32 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_32;
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
  t = term_s_32;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_47 = NULL;
  t = if_verbose5_1_0(o_7, t);
  k_47 = t;
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_47 = NULL,n_47 = NULL;
        t = term_x_31;
        m_47 = t;
        t = term_y_31;
        n_47 = t;
        t = term_v_32;
        t = d_9(m_47, n_47, t);
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        {
          ATerm o_47 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          o_47 = t;
          t = repeat_2_0(q_7, _id, t);
          t = o_47;
        }
      }
  }
  t = k_47;
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
  t = term_w_32;
  return(t);
}
static ATerm w_49 (ATerm g_48, ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  t = term_x_31;
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_48);
  n_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_31, (ATerm) ATmakeAppl(sym_Tool_1, g_48));
  t = d_9(m_48, n_48, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_32 = ATgetFirst((ATermList) t);
      if(match_cons(z_32, sym__2))
        {
          ATerm d_33 = ATgetArgument(z_32, 0);
          l_48 = ATgetArgument(z_32, 1);
        }
      else
        _fail(t);
      {
        ATerm a_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_48;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = debug_1_0(a_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_x_31;
  t = table_getlist_0_0(t);
  t = debug_1_0(h_8, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_e_33;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm f_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
      t = if_verbose5_1_0(u_7, t);
      t = xtc_load_0_0(t);
      s_48 = t;
      if(match_cons(t, sym__2))
        {
          q_48 = ATgetArgument(t, 0);
          r_48 = ATgetArgument(t, 1);
          {
            ATerm i_33 = t;
            int j_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_48 = NULL,z_48 = NULL,b_49 = NULL;
                t = term_x_31;
                z_48 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, q_48);
                b_49 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_31, (ATerm) ATmakeAppl(sym_Tool_1, q_48));
                t = d_9(z_48, b_49, t);
                {
                  static ATerm x_7 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((r_48 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((y_48 != NULL) && (y_48 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_48 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(x_7, t);
                }
                t = not_null(y_48);
                LocalPopChoice(j_33);
              }
            else
              {
                t = i_33;
                t = w_49(s_48, t);
              }
          }
        }
      else
        {
          t = w_49(s_48, t);
        }
      t = if_verbose5_1_0(y_7, t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = f_33;
      {
        ATerm v_49 = NULL,c_21 = NULL,d_21 = NULL;
        v_49 = t;
        t = term_t_21;
        c_21 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_33), v_49), term_k_33);
        d_21 = t;
        t = SSL_printnl(c_21, d_21);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_33), v_49), term_k_33);
        t = if_verbose5_1_0(f_8, t);
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
static ATerm d_9 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm a_50 = NULL;
  t = lookup_table_0_1(g_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(h_47, a_50, t);
  return(t);
}
static ATerm x_8 (ATerm s_45, ATerm t_45, ATerm t)
{
  ATerm d_50 = NULL,f_50 = NULL;
  f_50 = t;
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        t = d_9(s_45, t_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_33 = ATgetFirst((ATermList) t);
            d_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_33);
        {
          ATerm g_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, d_50);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_9(t_45, d_50, g_50, t);
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, d_50);
        }
      }
    else
      {
        t = q_33;
        {
          ATerm i_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_9(t_45, i_50, t);
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        }
      }
  }
  t = f_50;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,r_50 = NULL;
  n_50 = t;
  t = q_101(t);
  m_50 = t;
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_50 = NULL;
        t = term_f_22;
        s_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_50, term_f_22);
        t = d_9(m_50, s_50, t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_50 = ATgetFirst((ATermList) t);
      k_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_50, term_f_22, k_50);
  t = lookup_table_0_1(m_50, t);
  r_50 = t;
  t = term_f_22;
  o_50 = t;
  t = r_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(o_50, k_50, p_50, t);
  t = l_50;
  {
    static ATerm m_8 (ATerm t)
    {
      ATerm t_50 = NULL;
      t_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_50, t_50);
      t = x_8(m_50, t_50, t);
      return(t);
    }
    t = map_1_0(m_8, t);
  }
  t = n_50;
  return(t);
}
ATerm restore_always_2_0 (ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm t)
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_102(t);
      t = r_102(t);
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      t = r_102(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
  y_50 = t;
  t = p_101(t);
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_50, term_f_22);
  {
    ATerm d_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_51 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_34 = ATgetArgument(t, 0);
            ATerm g_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_22;
        l_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_50, term_f_22);
        t = d_9(x_50, l_51, t);
        LocalPopChoice(e_34);
      }
    else
      {
        t = d_34;
        t = (ATerm) ATempty;
      }
  }
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_50, term_f_22, (ATerm) ATinsert(CheckATermList(z_50), (ATerm) ATempty));
  t = lookup_table_0_1(x_50, t);
  d_51 = t;
  t = term_f_22;
  a_51 = t;
  t = (ATerm) ATinsert(CheckATermList(z_50), (ATerm) ATempty);
  b_51 = t;
  t = d_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(a_51, b_51, c_51, t);
  t = y_50;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm x_51 = NULL;
  x_51 = t;
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_51);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        t = x_51;
      }
  }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm o_51 = NULL;
  static ATerm m_9 (ATerm t)
  {
    ATerm p_51 = NULL;
    p_51 = t;
    {
      ATerm j_34 = t;
      int k_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_51 = NULL,r_51 = NULL;
          t = term_n_22;
          q_51 = t;
          t = term_f_22;
          r_51 = t;
          t = term_n_34;
          t = d_9(q_51, r_51, t);
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
        if(((o_51 != NULL) && (o_51 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_51 = ATgetFirst((ATermList) t);
        {
          ATerm o_34 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = o_51;
    t = map_1_0(o_9, t);
    t = p_51;
    t = end_scope_1_0(p_9, t);
    return(t);
  }
  t = begin_scope_1_0(z_8, t);
  t = restore_always_2_0(r_105, m_9, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL,s_52 = NULL,t_52 = NULL;
  k_52 = t;
  t = term_p_22;
  t = whoami_0_0(t);
  l_52 = t;
  t = term_t_21;
  s_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_34), l_52), term_p_34);
  t_52 = t;
  t = SSL_printnl(s_52, t_52);
  t = term_m_13;
  m_52 = t;
  t = SSL_exit(m_52);
  t = k_52;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm y_52 = NULL;
  y_52 = t;
  if(match_string(t, "-k"))
    {
      t = y_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_52;
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,f_53 = NULL;
  a_53 = t;
  t = SSL_string_to_int(a_53);
  b_53 = t;
  t = term_k_24;
  f_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_24, b_53);
  t = g_9(f_53, b_53, t);
  t = a_53;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_9, w_9, x_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm n_53 = NULL;
  n_53 = t;
  if(match_string(t, "-S"))
    {
      t = n_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_53;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL;
  t = term_g_13;
  o_53 = t;
  t = term_q_23;
  p_53 = t;
  t = term_s_34;
  t = g_9(o_53, p_53, t);
  t = term_t_34;
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
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
  q_53 = t;
  t = SSL_string_to_int(q_53);
  r_53 = t;
  t = term_g_13;
  s_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_13, r_53);
  t = g_9(s_53, r_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_53);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_v_34;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL;
  t = term_r_24;
  t_53 = t;
  t = term_p_22;
  u_53 = t;
  t = term_w_34;
  t = g_9(t_53, u_53, t);
  t = term_x_34;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_9, z_9, a_10, t);
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
      {
        ATerm b_35 = t;
        int c_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_10, c_10, d_10, t);
            LocalPopChoice(c_35);
          }
        else
          {
            t = b_35;
            t = Option_3_0(f_10, g_10, i_10, t);
          }
      }
    }
  return(t);
}
static ATerm g_9 (ATerm s_49, ATerm t_49, ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  t = term_w_12;
  v_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, s_49, t_49);
  t = lookup_table_0_1(v_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(s_49, t_49, w_53, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, s_49, t_49);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
      t = term_p_22;
      t = e_0(t);
      d_54 = t;
      t = term_d_35;
      e_54 = t;
      t = term_e_35;
      f_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_35, term_e_35, d_54);
      t = e_9(e_54, f_54, d_54, t);
      _fail(t);
    }
  else
    {
      ATerm i_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_54 = ATgetFirst((ATermList) t);
          c_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_54;
      t = c_0(t);
      t = term_p_22;
      t = d_0(t);
      i_54 = t;
      t = (ATerm) ATinsert(CheckATermList(c_54), i_54);
    }
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm k_54 = NULL;
  k_54 = t;
  if(match_string(t, "-o"))
    {
      t = k_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_54;
    }
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL;
  l_54 = t;
  t = term_x_12;
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_12, l_54);
  t = g_9(m_54, l_54, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_54);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_f_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_10, k_10, l_10, t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm o_54 = NULL;
  o_54 = t;
  if(match_string(t, "-i"))
    {
      t = o_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_54;
    }
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL;
  p_54 = t;
  t = term_q_22;
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_22, p_54);
  t = g_9(q_54, p_54, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_54);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_g_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_10, n_10, o_10, t);
  return(t);
}
static ATerm e_9 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
  s_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
  {
    ATerm h_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_35 = ATgetArgument(t, 0);
            ATerm o_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
        t = d_9(n_45, o_45, t);
        LocalPopChoice(k_35);
      }
    else
      {
        t = h_35;
        t = (ATerm) ATempty;
      }
  }
  t_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_45, o_45, (ATerm) ATinsert(CheckATermList(t_54), m_45));
  t = lookup_table_0_1(n_45, t);
  w_54 = t;
  t = (ATerm) ATinsert(CheckATermList(t_54), m_45);
  u_54 = t;
  t = w_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(o_45, u_54, v_54, t);
  t = s_54;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
      t = term_p_22;
      t = n_0(t);
      h_55 = t;
      t = term_d_35;
      i_55 = t;
      t = term_e_35;
      j_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_35, term_e_35, h_55);
      t = e_9(i_55, j_55, h_55, t);
      _fail(t);
    }
  else
    {
      ATerm n_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_55 = ATgetFirst((ATermList) t);
          e_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_55 = ATgetFirst((ATermList) t);
          g_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_55;
      t = k_0(t);
      t = f_55;
      t = l_0(t);
      n_55 = t;
      t = (ATerm) ATinsert(CheckATermList(g_55), n_55);
    }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm p_55 = NULL;
  p_55 = t;
  if(match_string(t, "-I"))
    {
      t = p_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = p_55;
    }
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  q_55 = t;
  t = term_j_25;
  r_55 = t;
  t = (ATerm) ATinsert(ATempty, q_55);
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATinsert(ATempty, q_55));
  t = k_8(r_55, s_55, t);
  t = q_55;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_p_35;
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
  ATerm t_55 = NULL,u_55 = NULL;
  t_55 = t;
  t = term_j_27;
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_27, t_55);
  t = g_9(u_55, t_55, t);
  t = t_55;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_r_35;
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
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  t = term_g_13;
  w_55 = t;
  t = term_q_23;
  x_55 = t;
  t = term_s_34;
  t = g_9(w_55, x_55, t);
  t = v_55;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_s_35;
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
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
  y_55 = t;
  t = term_p_28;
  z_55 = t;
  t = term_m_13;
  a_56 = t;
  t = term_u_35;
  t = g_9(z_55, a_56, t);
  t = y_55;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm z_35 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(p_10, q_10, s_10, t);
      LocalPopChoice(b_36);
    }
  else
    {
      t = z_35;
      {
        ATerm c_36 = t;
        int e_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_10, u_10, w_10, t);
            LocalPopChoice(e_36);
          }
        else
          {
            t = c_36;
            {
              ATerm g_36 = t;
              int h_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_10, y_10, z_10, t);
                  LocalPopChoice(h_36);
                }
              else
                {
                  t = g_36;
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
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_22;
  t = whoami_0_0(t);
  b_56 = t;
  t = term_t_21;
  d_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_36), b_56);
  e_56 = t;
  t = SSL_printnl(d_56, e_56);
  t = term_m_13;
  c_56 = t;
  t = SSL_exit(c_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL;
  t = term_w_12;
  f_56 = t;
  t = term_m_36;
  g_56 = t;
  t = term_n_36;
  t = d_9(f_56, g_56, t);
  return(t);
}
static ATerm y_8 (ATerm m_42, ATerm n_42, ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_42, n_42);
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      t = SSL_addr(m_42, n_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL;
  i_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_56;
      t = l_98(t);
    }
  else
    {
      ATerm n_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_56 = ATgetFirst((ATermList) t);
          k_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_56;
      t = foldr_2_0(l_98, m_98, t);
      n_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_56, n_56);
      t = m_98(t);
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
  t = term_q_23;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_8(o_21, p_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_56 = NULL,k_21 = NULL,l_21 = NULL;
  t = times_0_0(t);
  l_21 = t;
  t = SSL_explode_term(l_21);
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      k_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_21;
  t = foldr_2_0(g_11, h_11, t);
  q_56 = t;
  t = SSL_TicksToSeconds(q_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
  b_57 = t;
  if(match_cons(t, sym__2))
    {
      c_57 = ATgetArgument(t, 0);
      d_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_57;
        if((c_57 != t))
          {
            _fail(t);
          }
        t = b_57;
        LocalPopChoice(s_36);
      }
    else
      {
        t = r_36;
        t = (ATerm) ATmakeAppl(sym__2, c_57, d_57);
        {
          ATerm u_36 = t;
          int v_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_57, d_57);
              LocalPopChoice(v_36);
            }
          else
            {
              t = u_36;
              t = SSL_gtr(c_57, d_57);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_57, d_57);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm h_57 = NULL;
  h_57 = t;
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
        t = term_w_12;
        k_57 = t;
        t = term_g_13;
        l_57 = t;
        t = term_l_13;
        t = d_9(k_57, l_57, t);
        j_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_57, term_m_13);
        t = geq_0_0(t);
        t = h_57;
        t = c_103(t);
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        t = h_57;
      }
  }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,q_57 = NULL,r_57 = NULL;
  t = run_time_0_0(t);
  n_57 = t;
  t = term_p_22;
  t = whoami_0_0(t);
  o_57 = t;
  t = term_t_21;
  q_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_37), n_57), term_t_13), o_57);
  r_57 = t;
  t = SSL_printnl(q_57, r_57);
  t = (ATerm) ATmakeAppl(sym__2, term_t_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_37), n_57), term_t_13), o_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_23;
  s_57 = t;
  t = SSL_exit(s_57);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  d_58 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_58;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_58 = ATgetArgument(t, 0);
          {
            ATerm d_22 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(d_58);
            d_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_58);
            e_5 = t;
            t = SSLsetAnnotations(e_5, d_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_58;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_57 = NULL,w_57 = NULL;
      t = term_w_12;
      v_57 = t;
      t = term_e_37;
      w_57 = t;
      t = term_f_37;
      t = d_9(v_57, w_57, t);
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
      t = fetch_1_0(k_11, t);
    }
  t = h_107(t);
  return(t);
}
static ATerm h_9 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm t)
{
  ATerm f_58 = NULL;
  t = SSL_hashtable_put(h_49, f_49, g_49);
  f_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_58);
  return(t);
}
static ATerm i_9 (ATerm i_49, ATerm j_49, ATerm t)
{
  t = SSL_hashtable_get(j_49, i_49);
  return(t);
}
ATerm lookup_table_0_1 (ATerm z_46, ATerm t)
{
  ATerm o_58 = NULL;
  t = table_hashtable_0_0(t);
  o_58 = t;
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_22 = NULL;
        t = o_58;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_9(z_46, m_22, t);
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        {
          ATerm z_22 = NULL;
          t = z_46;
          t = table_create_0_0(t);
          t = o_58;
          if(match_cons(t, sym_Hashtable_1))
            {
              z_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_9(z_46, z_22, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm n_49, ATerm o_49, ATerm t)
{
  ATerm r_58 = NULL;
  t = SSL_hashtable_create(n_49, o_49);
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_58);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,w_58 = NULL,x_58 = NULL;
  s_58 = t;
  t = term_i_37;
  w_58 = t;
  t = term_j_37;
  x_58 = t;
  t = s_58;
  t = new_hashtable_0_2(w_58, x_58, t);
  t_58 = t;
  t = s_58;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(s_58, t_58, u_58, t);
  t = s_58;
  return(t);
}
static ATerm a_9 (ATerm k_49, ATerm l_49, ATerm t)
{
  ATerm y_58 = NULL;
  t = SSL_hashtable_remove(l_49, k_49);
  y_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_58);
  return(t);
}
static ATerm b_9 (ATerm p_49, ATerm t)
{
  ATerm z_58 = NULL;
  t = SSL_hashtable_destroy(p_49);
  z_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_58);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm a_59 = NULL;
  t = SSL_table_hashtable();
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_59);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  b_59 = t;
  t = table_hashtable_0_0(t);
  c_59 = t;
  t = lookup_table_0_1(b_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_9(e_59, t);
  t = c_59;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(b_59, d_59, t);
  t = b_59;
  return(t);
}
ATerm map_1_0 (ATerm x_90 (ATerm), ATerm t)
{
  static ATerm t_59 (ATerm t)
  {
    ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL;
    q_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_59;
      }
    else
      {
        ATerm o_23 = NULL,v_23 = NULL,w_23 = NULL,c_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_59 = ATgetFirst((ATermList) t);
            s_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_59);
        o_23 = t;
        t = r_59;
        t = x_90(t);
        v_23 = t;
        t = s_59;
        t = t_59(t);
        w_23 = t;
        t = (ATerm) ATinsert(CheckATermList(w_23), v_23);
        c_6 = t;
        t = SSLsetAnnotations(c_6, o_23);
      }
    return(t);
  }
  t = t_59(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_59 = ATgetFirst((ATermList) t);
      x_59 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_60 = NULL,c_60 = NULL;
        static ATerm n_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_60)), not_null(c_60));
          return(t);
        }
        t = x_59;
        t = i_0(t);
        if(((b_60 != NULL) && (b_60 != t)))
          _fail(t);
        else
          b_60 = t;
        t = w_59;
        t = g_0(t);
        if(((c_60 != NULL) && (c_60 != t)))
          _fail(t);
        else
          c_60 = t;
        t = x_59;
        t = reverse_acc_2_0(g_0, n_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_22;
      t = i_0(t);
    }
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL,e_6 = NULL;
  k_60 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_60);
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_60);
  e_6 = t;
  t = SSLsetAnnotations(e_6, i_60);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm m_60 = NULL;
  m_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_60), term_l_37);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL;
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_60 = NULL,h_60 = NULL;
      t = term_w_12;
      g_60 = t;
      t = term_m_36;
      h_60 = t;
      t = term_n_36;
      t = d_9(g_60, h_60, t);
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
      t = fetch_1_0(o_11, t);
    }
  t = term_q_37;
  t = echo_0_0(t);
  t = term_d_35;
  e_60 = t;
  t = term_e_35;
  f_60 = t;
  t = term_r_37;
  t = d_9(e_60, f_60, t);
  t = reverse_acc_2_0(_id, q_11, t);
  t = map_1_0(r_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  static ATerm j_61 (ATerm t)
  {
    ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL;
    g_61 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_61 = ATgetFirst((ATermList) t);
        i_61 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_37 = t;
      int u_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_24 = NULL,w_24 = NULL,k_7 = NULL;
          t = SSLgetAnnotations(g_61);
          o_24 = t;
          t = h_61;
          t = h_91(t);
          w_24 = t;
          t = (ATerm) ATinsert(CheckATermList(i_61), w_24);
          k_7 = t;
          t = SSLsetAnnotations(k_7, o_24);
          LocalPopChoice(u_37);
        }
      else
        {
          t = t_37;
          {
            ATerm e_25 = NULL,h_25 = NULL,l_7 = NULL;
            t = SSLgetAnnotations(g_61);
            e_25 = t;
            t = i_61;
            t = j_61(t);
            h_25 = t;
            t = (ATerm) ATinsert(CheckATermList(h_25), h_61);
            l_7 = t;
            t = SSLsetAnnotations(l_7, e_25);
          }
        }
    }
    return(t);
  }
  t = j_61(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL;
  n_61 = t;
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_61;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_37 = ATgetFirst((ATermList) t);
                ATerm z_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_61;
          }
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        t = (ATerm) ATinsert(ATempty, n_61);
      }
  }
  o_61 = t;
  t = term_z_12;
  p_61 = t;
  t = SSL_printnl(p_61, o_61);
  t = n_61;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL;
  t = term_w_12;
  t_61 = t;
  t = term_m_36;
  u_61 = t;
  t = term_n_36;
  t = d_9(t_61, u_61, t);
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
  ATerm v_61 = NULL,w_61 = NULL;
  t = term_a_38;
  v_61 = t;
  t = term_p_22;
  w_61 = t;
  t = term_b_38;
  t = g_9(v_61, w_61, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_c_38;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL;
  t = term_a_38;
  z_61 = t;
  t = term_p_22;
  a_62 = t;
  t = term_b_38;
  t = g_9(z_61, a_62, t);
  t = term_n_28;
  x_61 = t;
  t = term_p_22;
  y_61 = t;
  t = term_d_38;
  t = g_9(x_61, y_61, t);
  t = term_e_38;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_f_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_11, u_11, v_11, t);
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      t = Option_3_0(w_11, b_12, d_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,r_7 = NULL;
  g_62 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_62 = ATgetFirst((ATermList) t);
      d_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_62);
  b_62 = t;
  t = c_62;
  t = m_69(t);
  e_62 = t;
  t = d_62;
  t = n_69(t);
  f_62 = t;
  t = (ATerm) ATinsert(CheckATermList(f_62), e_62);
  r_7 = t;
  t = SSLsetAnnotations(r_7, b_62);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,q_62 = NULL,r_62 = NULL,z_7 = NULL;
  l_62 = t;
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_38;
        t = f_109(t);
        LocalPopChoice(j_38);
      }
    else
      {
        t = i_38;
      }
  }
  t = l_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_62 = ATgetFirst((ATermList) t);
      o_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_62);
  m_62 = t;
  t = term_m_36;
  r_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_36, n_62);
  t = g_9(r_62, n_62, t);
  t = o_62;
  {
    static ATerm b_63 (ATerm t)
    {
      ATerm n_38 = t;
      int p_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_38 = t;
          int r_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_62 = NULL;
              u_62 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_62;
              LocalPopChoice(r_38);
            }
          else
            {
              t = q_38;
              t = f_109(t);
              t = Cons_2_0(_id, b_63, t);
            }
          LocalPopChoice(p_38);
        }
      else
        {
          t = n_38;
          {
            ATerm x_62 = NULL,y_62 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_62 = ATgetFirst((ATermList) t);
                y_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_62), (ATerm) ATmakeAppl(sym_Undefined_1, x_62));
          }
        }
      return(t);
    }
    t = b_63(t);
  }
  q_62 = t;
  t = (ATerm) ATinsert(CheckATermList(q_62), (ATerm) ATmakeAppl(sym_Program_1, n_62));
  z_7 = t;
  t = SSLsetAnnotations(z_7, m_62);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm o_63 = NULL;
  o_63 = t;
  if(match_string(t, "--help"))
    {
      t = o_63;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_63;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_63;
        }
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL;
  t = term_e_37;
  p_63 = t;
  t = term_p_22;
  q_63 = t;
  t = term_s_38;
  t = g_9(p_63, q_63, t);
  t = term_t_38;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL;
  i_63 = t;
  t = term_d_35;
  j_63 = t;
  t = term_v_38;
  t = lookup_table_0_1(j_63, t);
  n_63 = t;
  t = term_e_35;
  k_63 = t;
  t = (ATerm) ATempty;
  l_63 = t;
  t = n_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(k_63, l_63, m_63, t);
  t = i_63;
  {
    static ATerm e_12 (ATerm t)
    {
      ATerm x_38 = t;
      int y_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_109(t);
          LocalPopChoice(y_38);
        }
      else
        {
          t = x_38;
          {
            ATerm a_39 = t;
            int b_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_12, j_12, k_12, t);
                LocalPopChoice(b_39);
              }
            else
              {
                t = a_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_12, t);
  }
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_64 = NULL;
        b_64 = t;
        {
          ATerm h_39 = t;
          int i_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_25 = NULL;
              t = b_64;
              {
                ATerm j_39 = t;
                int k_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_25 = NULL,s_25 = NULL;
                    t = term_w_12;
                    r_25 = t;
                    t = term_e_37;
                    s_25 = t;
                    t = term_f_37;
                    t = d_9(r_25, s_25, t);
                    LocalPopChoice(k_39);
                  }
                else
                  {
                    t = j_39;
                    t = fetch_1_0(l_12, t);
                  }
              }
              t = b_64;
              t = default_system_usage_0_0(t);
              t = term_q_23;
              q_25 = t;
              t = SSL_exit(q_25);
              LocalPopChoice(i_39);
            }
          else
            {
              t = h_39;
              {
                ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
                t = term_w_12;
                d_26 = t;
                t = term_a_38;
                e_26 = t;
                t = term_n_39;
                t = d_9(d_26, e_26, t);
                t = b_64;
                t = default_system_about_0_0(t);
                t = term_q_23;
                c_26 = t;
                t = SSL_exit(c_26);
              }
            }
        }
        LocalPopChoice(g_39);
      }
    else
      {
        t = f_39;
        {
          ATerm o_39 = t;
          int q_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
              static ATerm m_12 (ATerm t)
              {
                ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,r_9 = NULL;
                h_64 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_64 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_64);
                f_64 = t;
                t = g_64;
                if(((g_63 != NULL) && (g_63 != t)))
                  _fail(t);
                else
                  g_63 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_64);
                r_9 = t;
                t = SSLsetAnnotations(r_9, f_64);
                return(t);
              }
              t = fetch_1_0(m_12, t);
              t = term_t_21;
              d_64 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_63)), term_r_39);
              e_64 = t;
              t = SSL_printnl(d_64, e_64);
              t = (ATerm) ATmakeAppl(sym__2, term_t_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_63)), term_r_39));
              t = default_system_usage_0_0(t);
              t = term_m_13;
              c_64 = t;
              t = SSL_exit(c_64);
              LocalPopChoice(q_39);
            }
          else
            {
              t = o_39;
            }
        }
      }
  }
  h_63 = t;
  t = term_d_35;
  t = table_destroy_0_0(t);
  t = h_63;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL;
  t = parse_options_1_0(j_107, t);
  m_64 = t;
  t = term_s_39;
  t = table_create_0_0(t);
  t = term_s_39;
  n_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_39, term_t_39, m_64);
  t = lookup_table_0_1(n_64, t);
  q_64 = t;
  t = term_t_39;
  o_64 = t;
  t = q_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(o_64, m_64, p_64, t);
  t = m_64;
  t = l_107(t);
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_107, t);
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
              t = m_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_39);
            }
          else
            {
              t = w_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
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
            t = input_option_0_0(t);
            LocalPopChoice(b_40);
          }
        else
          {
            t = a_40;
            {
              ATerm d_40 = t;
              int e_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(e_40);
                }
              else
                {
                  t = d_40;
                  {
                    ATerm h_40 = t;
                    int m_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(q_12, r_12, s_12, t);
                        LocalPopChoice(m_40);
                      }
                    else
                      {
                        t = h_40;
                        {
                          ATerm o_40 = t;
                          int p_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(p_40);
                            }
                          else
                            {
                              t = o_40;
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
  t = term_u_28;
  s_64 = t;
  t = term_p_22;
  t_64 = t;
  t = term_q_40;
  t = g_9(s_64, t_64, t);
  t = term_r_40;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_s_40;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL;
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL;
      t = term_w_12;
      a_65 = t;
      t = term_q_22;
      b_65 = t;
      t = term_v_40;
      t = d_9(a_65, b_65, t);
      z_64 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_64);
      LocalPopChoice(u_40);
    }
  else
    {
      t = t_40;
      t = term_c_13;
    }
  v_64 = t;
  t = term_y_40;
  t = xtc_find_path_0_0(t);
  w_64 = t;
  t = term_j_25;
  x_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_64), term_z_40);
  y_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATinsert(ATinsert(ATempty, w_64), term_z_40));
  t = k_8(x_64, y_64, t);
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
