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
ATerm term_j_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_t_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_d_37;
ATerm term_k_36;
ATerm term_t_35;
ATerm term_q_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_g_35;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_d_34;
ATerm term_a_34;
ATerm term_w_33;
ATerm term_m_33;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_t_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_x_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_o_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_f_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_i_26;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_k_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_w_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_y_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_p_15;
ATerm term_o_15;
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
ATerm term_z_14;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_d_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_l_13, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_t_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
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
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_o_15, term_p_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_f_16, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_n_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_v_16, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_a_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_h_17, term_i_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_s_17, term_t_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_d_18, term_f_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_o_18, term_p_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_u_18, term_v_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_z_18, term_a_19);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_d_19, term_e_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_i_19, term_l_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_r_19, term_s_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_y_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_20, term_c_20, term_e_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_j_28, term_a_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__2, term_j_28, term_k_28);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_d_21);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_n_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__2, term_a_32, term_j_21);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_l_13);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_m_33, term_w_33);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_j_21);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_j_21);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__2, term_m_35, term_j_21);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__2, term_r_39, term_j_21);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm i_7 (ATerm t_33, ATerm u_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm j_7 (ATerm w_17, ATerm x_17, ATerm t);
static ATerm k_7 (ATerm e_66 (ATerm), ATerm u_182, ATerm e_18, ATerm t);
static ATerm c_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t);
static ATerm l_7 (ATerm o_14, ATerm p_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm t_64 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm f_85 (ATerm), ATerm t);
static ATerm n_7 (ATerm u_80 (ATerm), ATerm b_35, ATerm z_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm guarantee_extension_1_0 (ATerm v_83 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm g_83 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm f_82 (ATerm), ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm p_7 (ATerm v_14, ATerm u_14, ATerm t);
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
static ATerm q_7 (ATerm c_39, ATerm u_460, ATerm t);
ATerm find_in_includes_1_0 (ATerm o_63 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm e_82 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm g_71 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm basename_1_0 (ATerm t_83 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm k_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_23 (ATerm v_22, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_7 (ATerm u_38, ATerm t_38, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm h_82 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm g_82 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm i_82 (ATerm), ATerm t);
static ATerm t_7 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm z_24, ATerm y_24, ATerm t);
static ATerm u_7 (ATerm y_74 (ATerm), ATerm v_24, ATerm u_24, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm v_7 (ATerm l_37, ATerm m_37, ATerm n_37, ATerm t);
static ATerm w_7 (ATerm k_82 (ATerm), ATerm v_37, ATerm u_37, ATerm t);
static ATerm a_8 (ATerm w_39, ATerm x_39, ATerm t);
static ATerm f_30 (ATerm x_29, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_7 (ATerm c_18, ATerm t);
static ATerm y_7 (ATerm e_40, ATerm f_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_32 (ATerm b_31, ATerm t);
static ATerm m_32 (ATerm f_31, ATerm g_31, ATerm j_31, ATerm t);
static ATerm n_32 (ATerm u_31, ATerm v_31, ATerm w_31, ATerm t);
static ATerm z_7 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm q_78 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm z_68 (ATerm), ATerm a_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_38 (ATerm f_36, ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm b_8 (ATerm w_14, ATerm x_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm c_8 (ATerm t_36, ATerm u_36, ATerm t);
ATerm end_scope_1_0 (ATerm r_80 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_80 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm r_84 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
ATerm xtc_io_1_0 (ATerm s_84 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_8 (ATerm o_38, ATerm p_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm i_8 (ATerm o_36, ATerm p_36, ATerm n_36, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_8 (ATerm n_33, ATerm o_33, ATerm t);
ATerm foldr_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_82 (ATerm), ATerm t);
static ATerm k_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
ATerm need_help_1_0 (ATerm h_86 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm t_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm g_8 (ATerm i_32, ATerm j_32, ATerm t);
ATerm debug_1_0 (ATerm c_66 (ATerm), ATerm t);
ATerm map_1_0 (ATerm u_70 (ATerm), ATerm t);
static ATerm u_11 (ATerm t);
static ATerm w_11 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm h_8 (ATerm f_38, ATerm g_38, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_88 (ATerm), ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm parse_options_1_0 (ATerm e_88 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
ATerm parse_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm i_7 (ATerm t_33, ATerm u_33, ATerm t)
{
  ATerm a_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(t_33, u_33);
      LocalPopChoice(c_13);
    }
  else
    {
      t = a_13;
      t = SSL_subtr(t_33, u_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,j_0 = NULL;
  t = term_d_13;
  {
    ATerm e_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = e_13;
        t = term_l_13;
      }
  }
  b_0 = t;
  t = term_l_13;
  j_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_l_13);
  t = i_7(b_0, j_0, t);
  e_0 = t;
  t = SSL_int_to_string(e_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_d_13);
  return(t);
}
static ATerm j_7 (ATerm w_17, ATerm x_17, ATerm t)
{
  ATerm q_0 = NULL;
  t = SSL_write_term_to_stream_baf(w_17, x_17);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_0);
  return(t);
}
static ATerm k_7 (ATerm e_66 (ATerm), ATerm u_182, ATerm e_18, ATerm t)
{
  ATerm s_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_182, term_m_13);
  t = z_7(t);
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_0, e_18);
  t = e_66(t);
  t = fclose_0_0(t);
  t = e_18;
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_13 = ATgetArgument(t, 0);
      if(match_cons(n_13, sym_Stream_1))
        {
          a_1 = ATgetArgument(n_13, 0);
        }
      else
        _fail(t);
      b_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(a_1, b_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  ATerm u_0 = NULL,w_0 = NULL;
  w_0 = t;
  t = xtc_new_file_0_0(t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, w_0);
  t = k_7(c_0, u_0, w_0, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_0);
  t = xtc_transform_file_2_0(e_84, f_84, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm l_7 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_execvp(o_14, p_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm y_1 = NULL,b_2 = NULL,f_2 = NULL,g_2 = NULL;
  y_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_2 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(b_2);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_13), m_0), term_o_13);
        y_0 = t;
        t = SSL_concat_strings(y_0);
      }
    }
  else
    {
      ATerm z_1 = NULL,a_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_2 = ATgetArgument(t, 0);
          f_2 = ATgetArgument(t, 1);
          g_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(f_2);
      z_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_2), term_s_13), z_1), term_r_13), b_2);
      a_2 = t;
      t = SSL_concat_strings(a_2);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm m_2 = NULL;
  m_2 = t;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_13 = ATgetArgument(t, 0);
              if((m_2 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_20), term_z_19), term_t_19), term_o_19), term_f_19), term_b_19), term_x_18), term_r_18), term_m_18), term_h_18), term_u_17), term_o_17), term_k_17), term_c_17), term_x_16), term_o_16), term_j_16), term_d_16), term_z_15), term_u_15), term_k_15), term_g_15), term_c_15), term_y_14), term_q_14), term_k_14), term_g_14), term_c_14);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, m_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_2 = NULL,f_3 = NULL;
  q_2 = t;
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
              ATerm j_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_20);
        {
          ATerm k_20 = t;
          int l_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL,o_2 = NULL,p_2 = NULL;
              t = f_3;
              {
                ATerm m_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              l_2 = t;
              t = term_o_20;
              o_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, l_2), term_p_20);
              p_2 = t;
              t = SSL_printnl(o_2, p_2);
              t = (ATerm) ATmakeAppl(sym__2, term_o_20, (ATerm) ATinsert(ATinsert(ATempty, l_2), term_p_20));
              LocalPopChoice(l_20);
            }
          else
            {
              t = k_20;
              t = q_2;
            }
        }
      }
    else
      {
        t = g_20;
        t = q_2;
      }
  }
  t = q_2;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm t_64 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL;
  n_3 = t;
  t = fork_0_0(t);
  m_3 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_3;
        t = t_64(t);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = SSL_waitpid(m_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_20 = ATgetArgument(t, 0);
            if(((ATgetType(t_20) != AT_INT) || (ATgetInt((ATermInt) t_20) != 0)))
              _fail(t);
            {
              ATerm u_20 = ATgetArgument(t, 1);
            }
            {
              ATerm v_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,f_4 = NULL;
  f_4 = t;
  t = f_85(t);
  t = xtc_find_0_0(t);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_4, f_4);
  {
    static ATerm h_0 (ATerm t)
    {
      ATerm j_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_4, f_4);
      t = l_7(d_4, f_4, t);
      t = term_w_20;
      j_4 = t;
      t = SSL_exit(j_4);
      return(t);
    }
    t = fork_and_wait_1_0(h_0, t);
  }
  t = f_4;
  return(t);
}
static ATerm n_7 (ATerm u_80 (ATerm), ATerm b_35, ATerm z_34, ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,o_4 = NULL,q_4 = NULL,t_4 = NULL;
  o_4 = t;
  t = u_80(t);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_4, b_35, z_34);
  t = i_8(k_4, b_35, z_34, t);
  {
    ATerm z_20 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL;
        t = term_d_21;
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_4, term_d_21);
        t = h_8(k_4, u_4, t);
        LocalPopChoice(b_21);
      }
    else
      {
        t = z_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_4 = ATgetFirst((ATermList) t);
      m_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_21;
  q_4 = t;
  t = (ATerm) ATinsert(CheckATermList(m_4), (ATerm) ATinsert(CheckATermList(l_4), b_35));
  t_4 = t;
  t = SSL_table_put(k_4, q_4, t_4);
  t = o_4;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL;
  t = P__tmpdir_0_0(t);
  a_5 = t;
  t = term_h_21;
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, term_h_21);
  t = g_8(a_5, g_5, t);
  d_5 = t;
  t = term_i_21;
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_5, term_i_21);
  t = g_8(d_5, f_5, t);
  b_5 = t;
  t = SSL_mkstemp(b_5);
  if(match_cons(t, sym__2))
    {
      x_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_j_21;
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_4, term_j_21);
  t = n_7(z_0, x_4, z_4, t);
  t = SSL_close(w_4);
  t = x_4;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL;
  j_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_5 = NULL,n_5 = NULL;
      t = j_5;
      t = xtc_new_file_0_0(t);
      m_5 = t;
      t = x_0(t);
      n_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_5, (ATerm) ATinsert(ATinsert(ATempty, m_5), term_k_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_5);
    }
  else
    {
      ATerm p_5 = NULL,q_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_5;
      t = xtc_new_file_0_0(t);
      p_5 = t;
      t = x_0(t);
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_5), term_k_21), k_5), term_l_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_5);
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm t_5 = NULL,v_5 = NULL,w_5 = NULL;
  t = basename_1_0(_id, t);
  w_5 = t;
  t = term_j_21;
  t = v_83(t);
  v_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_5), term_m_21), w_5);
  t_5 = t;
  t = SSL_concat_strings(t_5);
  return(t);
}
ATerm if_keep1_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  ATerm z_5 = NULL;
  z_5 = t;
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        t = term_p_21;
        t = get_config_0_0(t);
        b_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_6, term_l_13);
        t = geq_0_0(t);
        t = z_5;
        t = g_83(t);
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        t = z_5;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  ATerm g_6 = NULL;
  g_6 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_6 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        j_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_6, term_i_14);
        t = geq_0_0(t);
        t = g_6;
        t = f_82(t);
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = g_6;
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
static ATerm p_7 (ATerm v_14, ATerm u_14, ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(v_14, u_14);
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      t = get_errno_0_0(t);
      t = term_j_21;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, v_14, u_14);
      t = b_8(v_14, u_14, t);
      t = SSL_remove(v_14);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL;
        t = e_8;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_w_21;
        b_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_8, term_w_21);
        t = b_8(f_8, b_3, t);
        t = SSL_remove(f_8);
        t = term_w_21;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm x_21 = t;
          int y_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_3 = NULL;
              t = e_8;
              t = t_0(t);
              q_3 = t;
              {
                ATerm z_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_3 = NULL;
                    r_3 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = r_3;
                      }
                    else
                      {
                        t = r_3;
                        if((f_8 != t))
                          {
                            _fail(t);
                          }
                        t = r_3;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_21;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, f_8, q_3);
              t = p_7(f_8, q_3, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_3);
              LocalPopChoice(y_21);
            }
          else
            {
              t = x_21;
              t = e_8;
              t = t_0(t);
              if((f_8 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_8);
            }
        }
      }
  }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = debug_1_0(d_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_c_22;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,z_8 = NULL;
  v_8 = t;
  t = term_o_20;
  w_8 = t;
  t = (ATerm) ATinsert(ATempty, term_e_22);
  z_8 = t;
  t = SSL_printnl(w_8, z_8);
  t = v_8;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_i_22;
  t = get_config_0_0(t);
  t = map_1_0(o_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm e_9 = NULL;
  e_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_9), term_i_22);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_i_22;
  t = get_config_0_0(t);
  t = map_1_0(u_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_9), term_i_22);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm p_8 = NULL,s_8 = NULL;
  t = if_verbose6_1_0(c_1, t);
  s_8 = t;
  t = guarantee_extension_1_0(e_1, t);
  p_8 = t;
  t = s_8;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL;
        t = p_8;
        t = find_in_includes_1_0(f_1, t);
        t_8 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_8);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        {
          ATerm u_8 = NULL;
          static ATerm v_1 (ATerm t)
          {
            t = p_8;
            return(t);
          }
          t = if_verbose2_1_0(h_1, t);
          t = guarantee_extension_1_0(j_1, t);
          u_8 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_8);
          {
            ATerm l_22 = t;
            int o_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_9 = NULL,b_9 = NULL,g_1 = NULL;
                b_9 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm r_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_9);
                a_9 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, u_8);
                g_1 = t;
                t = SSLsetAnnotations(g_1, a_9);
                LocalPopChoice(o_22);
                t = xtc_transform_file_2_0(k_1, m_1, t);
              }
            else
              {
                t = l_22;
                t = xtc_transform_term_2_0(p_1, t_1, t);
              }
          }
          t = rename_to_1_0(v_1, t);
        }
      }
  }
  return(t);
}
static ATerm q_7 (ATerm c_39, ATerm u_460, ATerm t)
{
  static ATerm w_1 (ATerm t)
  {
    ATerm i_9 = NULL,j_9 = NULL,m_9 = NULL,n_9 = NULL;
    i_9 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_39), term_s_22), i_9);
    n_9 = t;
    t = SSL_concat_strings(n_9);
    j_9 = t;
    t = (ATerm) ATinsert(ATempty, term_t_22);
    m_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_9, (ATerm) ATinsert(ATempty, term_t_22));
    t = a_8(j_9, m_9, t);
    return(t);
  }
  t = u_460;
  t = fetch_elem_1_0(w_1, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm o_63 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  static ATerm x_1 (ATerm t)
  {
    t = debug_1_0(o_63, t);
    return(t);
  }
  r_9 = t;
  t = term_i_22;
  t = get_config_0_0(t);
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_9, q_9);
  t = q_7(r_9, q_9, t);
  t = if_verbose2_1_0(x_1, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_u_22;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_y_22;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
  b_10 = t;
  t = term_o_20;
  c_10 = t;
  t = (ATerm) ATinsert(ATempty, term_z_22);
  d_10 = t;
  t = SSL_printnl(c_10, d_10);
  t = b_10;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_b_23;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_b_23;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  t = if_verbose6_1_0(c_2, t);
  y_9 = t;
  t = guarantee_extension_1_0(e_2, t);
  z_9 = t;
  {
    ATerm c_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_10 = NULL;
        t = find_in_includes_1_0(i_2, t);
        a_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_10);
        LocalPopChoice(f_23);
      }
    else
      {
        t = c_23;
        {
          static ATerm x_2 (ATerm t)
          {
            t = z_9;
            return(t);
          }
          t = if_verbose2_1_0(j_2, t);
          t = y_9;
          t = get_syntax_definition_0_0(t);
          {
            ATerm g_23 = t;
            int h_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_10 = NULL,p_10 = NULL;
                p_10 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    m_10 = ATgetArgument(t, 0);
                    {
                      ATerm w_3 = NULL,i_1 = NULL;
                      t = SSLgetAnnotations(p_10);
                      w_3 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, m_10);
                      i_1 = t;
                      t = SSLsetAnnotations(i_1, w_3);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = p_10;
                  }
                LocalPopChoice(h_23);
                {
                  static ATerm u_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, y_9), term_i_23);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(n_2, u_2, t);
                }
              }
            else
              {
                t = g_23;
                {
                  static ATerm w_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, y_9), term_i_23);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(v_2, w_2, t);
                }
              }
          }
          t = rename_to_1_0(x_2, t);
        }
      }
  }
  t = if_verbose6_1_0(y_2, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        v_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_10, term_e_14);
        t = geq_0_0(t);
        t = t_10;
        t = e_82(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = t_10;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_71 (ATerm), ATerm t)
{
  ATerm y_10 = NULL;
  static ATerm a_3 (ATerm t)
  {
    t = g_71(t);
    if(((y_10 != NULL) && (y_10 != t)))
      _fail(t);
    else
      y_10 = t;
    return(t);
  }
  t = fetch_1_0(a_3, t);
  t = not_null(y_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm c_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_l_23;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_t_22);
      e_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_11, (ATerm) ATinsert(ATempty, term_t_22));
      t = a_8(c_11, e_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = debug_1_0(d_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_m_23;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_n_23;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_o_23;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = debug_1_0(i_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm j_11 = NULL,f_12 = NULL,h_12 = NULL;
  t = if_verbose6_1_0(c_3, t);
  f_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_4 = NULL,h_4 = NULL,l_1 = NULL;
        t = SSLgetAnnotations(f_12);
        e_4 = t;
        t = h_12;
        t = guarantee_extension_1_0(e_3, t);
        h_4 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_4);
        l_1 = t;
        t = SSLsetAnnotations(l_1, e_4);
        t = read_from_0_0(t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = p_23;
        {
          ATerm v_4 = NULL,y_4 = NULL,e_5 = NULL,n_1 = NULL;
          t = SSLgetAnnotations(f_12);
          y_4 = t;
          t = h_12;
          t = guarantee_extension_1_0(g_3, t);
          e_5 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, e_5);
          n_1 = t;
          t = SSLsetAnnotations(n_1, y_4);
          t = read_from_0_0(t);
          v_4 = t;
          t = SSL_explode_term(v_4);
          if(match_cons(t, sym__2))
            {
              j_11 = ATgetArgument(t, 0);
              {
                ATerm v_23 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, j_11)));
        }
      }
  }
  t = if_verbose6_1_0(h_3, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm j_13 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      j_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_13;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = debug_1_0(p_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm n_12 = NULL;
  t = if_verbose6_1_0(j_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      n_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_24;
        t = get_config_0_0(t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        {
          ATerm b_24 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm k_13 (ATerm r_12, ATerm t)
              {
                ATerm w_12 = NULL,f_13 = NULL;
                t = term_o_20;
                w_12 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_24), n_12), term_e_24), r_12), term_d_24);
                f_13 = t;
                t = SSL_printnl(w_12, f_13);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_24), n_12), term_e_24), r_12), term_d_24);
                _fail(t);
                return(t);
              }
              ATerm g_13 = NULL,h_13 = NULL;
              t = get_meta_0_0(t);
              h_13 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  g_13 = ATgetArgument(t, 0);
                  {
                    ATerm g_24 = t;
                    int h_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_13;
                        t = fetch_elem_1_0(l_3, t);
                        LocalPopChoice(h_24);
                      }
                    else
                      {
                        t = g_24;
                        t = k_13(h_13, t);
                      }
                  }
                }
              else
                {
                  t = k_13(h_13, t);
                }
              LocalPopChoice(c_24);
            }
          else
            {
              t = b_24;
              t = term_k_24;
            }
        }
      }
  }
  t = if_verbose2_1_0(o_3, t);
  return(t);
}
ATerm basename_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,x_13 = NULL;
  x_13 = t;
  t = SSL_explode_string(x_13);
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_15 (ATerm t)
        {
          ATerm n_15 = NULL,q_15 = NULL,s_15 = NULL;
          n_15 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_15 = ATgetFirst((ATermList) t);
              s_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm n_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_5 = NULL,f_6 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(n_15);
                y_5 = t;
                t = s_15;
                t = y_15(t);
                f_6 = t;
                t = (ATerm) ATinsert(CheckATermList(f_6), q_15);
                q_1 = t;
                t = SSLsetAnnotations(q_1, y_5);
                LocalPopChoice(o_24);
              }
            else
              {
                t = n_24;
                {
                  ATerm p_24 = t;
                  int q_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_6 = NULL,r_1 = NULL;
                      t = SSLgetAnnotations(n_15);
                      r_6 = t;
                      t = q_15;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(s_15), q_15);
                      r_1 = t;
                      t = SSLsetAnnotations(r_1, r_6);
                      LocalPopChoice(q_24);
                    }
                  else
                    {
                      t = p_24;
                      {
                        ATerm m_7 = NULL,q_8 = NULL,s_1 = NULL;
                        t = SSLgetAnnotations(n_15);
                        m_7 = t;
                        t = q_15;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = s_15;
                        t = t_83(t);
                        q_8 = t;
                        t = (ATerm) ATinsert(CheckATermList(q_8), q_15);
                        s_1 = t;
                        t = SSLsetAnnotations(s_1, m_7);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = y_15(t);
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
      }
  }
  t_13 = t;
  t = SSL_implode_string(t_13);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = debug_1_0(t_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_s_24;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_24);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_s_24;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_24);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm g_18 = NULL,k_18 = NULL;
  t = pass_verbose_0_0(t);
  g_18 = t;
  t = term_x_24;
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(b_25);
        t = (ATerm) ATinsert(ATempty, term_c_25);
      }
    else
      {
        t = a_25;
        t = (ATerm) ATempty;
      }
  }
  k_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_18), g_18);
  t = concat_0_0(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm q_18 = NULL,w_18 = NULL;
  t = pass_verbose_0_0(t);
  q_18 = t;
  t = term_x_24;
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(e_25);
        t = (ATerm) ATinsert(ATempty, term_c_25);
      }
    else
      {
        t = d_25;
        t = (ATerm) ATempty;
      }
  }
  w_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_18), q_18);
  t = concat_0_0(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  t = pass_verbose_0_0(t);
  m_19 = t;
  t = term_x_24;
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(i_25);
        t = (ATerm) ATinsert(ATempty, term_x_24);
      }
    else
      {
        t = h_25;
        t = (ATerm) ATempty;
      }
  }
  n_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_19), m_19);
  t = concat_0_0(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm u_19 = NULL,x_19 = NULL;
  t = pass_verbose_0_0(t);
  u_19 = t;
  t = term_x_24;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(k_25);
        t = (ATerm) ATinsert(ATempty, term_x_24);
      }
    else
      {
        t = j_25;
        t = (ATerm) ATempty;
      }
  }
  x_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_19), u_19);
  t = concat_0_0(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_l_25;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,h_2 = NULL;
  t = if_verbose6_1_0(s_3, t);
  s_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_16);
  t_16 = t;
  t = u_16;
  t = basename_1_0(_id, t);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_16);
  h_2 = t;
  t = SSLsetAnnotations(h_2, t_16);
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      p_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_16;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_17 = ATgetArgument(t, 0);
            {
              ATerm f_9 = NULL,k_2 = NULL;
              t = SSLgetAnnotations(s_16);
              f_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_17);
              k_2 = t;
              t = SSLsetAnnotations(k_2, f_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_16;
          }
        LocalPopChoice(n_25);
        {
          static ATerm v_3 (ATerm t)
          {
            ATerm d_17 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(x_3, t);
            d_17 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_17), p_16), term_q_25), term_o_25);
            return(t);
          }
          t = xtc_transform_file_2_0(u_3, v_3, t);
        }
      }
    else
      {
        t = m_25;
        {
          static ATerm z_3 (ATerm t)
          {
            ATerm j_17 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(a_4, t);
            j_17 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(j_17), p_16), term_q_25), term_o_25);
            return(t);
          }
          t = xtc_transform_term_2_0(y_3, z_3, t);
        }
      }
  }
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_17 = NULL,a_18 = NULL;
        a_18 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_17 = ATgetArgument(t, 0);
            {
              ATerm p_9 = NULL,r_2 = NULL;
              t = SSLgetAnnotations(a_18);
              p_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_17);
              r_2 = t;
              t = SSLsetAnnotations(r_2, p_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_18;
          }
        LocalPopChoice(s_25);
        t = xtc_transform_file_2_0(b_4, c_4, t);
      }
    else
      {
        t = r_25;
        t = xtc_transform_term_2_0(g_4, i_4, t);
      }
  }
  {
    static ATerm n_4 (ATerm t)
    {
      static ATerm p_4 (ATerm t)
      {
        t = q_16;
        t = guarantee_extension_1_0(r_4, t);
        return(t);
      }
      t = copy_to_1_0(p_4, t);
      return(t);
    }
    t = if_keep1_1_0(n_4, t);
  }
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_19 = NULL,k_19 = NULL;
        k_19 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_19 = ATgetArgument(t, 0);
            {
              ATerm f_10 = NULL,s_2 = NULL;
              t = SSLgetAnnotations(k_19);
              f_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_19);
              s_2 = t;
              t = SSLsetAnnotations(s_2, f_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_19;
          }
        LocalPopChoice(v_25);
        t = xtc_transform_file_2_0(s_4, c_5, t);
      }
    else
      {
        t = u_25;
        t = xtc_transform_term_2_0(h_5, i_5, t);
      }
  }
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_20 = NULL,q_20 = NULL;
        q_20 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_20 = ATgetArgument(t, 0);
            {
              ATerm x_10 = NULL,t_2 = NULL;
              t = SSLgetAnnotations(q_20);
              x_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_20);
              t_2 = t;
              t = SSLsetAnnotations(t_2, x_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_20;
          }
        LocalPopChoice(z_25);
        t = xtc_transform_file_2_0(l_5, pass_verbose_0_0, t);
      }
    else
      {
        t = y_25;
        t = xtc_transform_term_2_0(o_5, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm k_71 (ATerm), ATerm t)
{
  static ATerm q_22 (ATerm t)
  {
    ATerm m_22 = NULL,n_22 = NULL,p_22 = NULL;
    p_22 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_22 = ATgetFirst((ATermList) t);
        n_22 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_11 = NULL,y_11 = NULL,v_6 = NULL;
          t = SSLgetAnnotations(p_22);
          m_11 = t;
          t = n_22;
          t = q_22(t);
          y_11 = t;
          t = (ATerm) ATinsert(CheckATermList(y_11), m_22);
          v_6 = t;
          t = SSLsetAnnotations(v_6, m_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_22;
        t = k_71(t);
      }
    return(t);
  }
  t = q_22(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_20 = NULL,a_21 = NULL,c_21 = NULL;
  x_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_20;
    }
  else
    {
      static ATerm r_5 (ATerm t)
      {
        t = not_null(c_21);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_21 = ATgetFirst((ATermList) t);
          if(((c_21 != NULL) && (c_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_21;
      t = at_end_1_0(r_5, t);
    }
  return(t);
}
static ATerm q_23 (ATerm v_22, ATerm t)
{
  ATerm w_22 = NULL;
  t = SSL_explode_term(v_22);
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_22;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_23 = NULL,d_23 = NULL,e_23 = NULL;
  e_23 = t;
  if(match_cons(t, sym__2))
    {
      a_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
      {
        ATerm c_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_5 (ATerm t)
            {
              t = d_23;
              return(t);
            }
            t = a_23;
            t = at_end_1_0(s_5, t);
            LocalPopChoice(e_26);
          }
        else
          {
            t = c_26;
            t = q_23(e_23, t);
          }
      }
    }
  else
    {
      t = q_23(e_23, t);
    }
  return(t);
}
static ATerm r_7 (ATerm u_38, ATerm t_38, ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,u_23 = NULL;
  t = u_38;
  {
    ATerm f_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = f_26;
        t = (ATerm) ATempty;
      }
  }
  s_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_38, s_23);
  t = conc_0_0(t);
  r_23 = t;
  t = term_i_26;
  u_23 = t;
  t = SSL_table_put(u_23, u_38, r_23);
  t = (ATerm) ATmakeAppl(sym__3, term_i_26, u_38, r_23);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL;
  j_24 = t;
  t = SSL_explode_string(j_24);
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm x_25 (ATerm t)
        {
          ATerm p_25 = NULL,t_25 = NULL,w_25 = NULL;
          p_25 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_25 = ATgetFirst((ATermList) t);
              w_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm l_26 = t;
            int m_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_12 = NULL,s_12 = NULL,y_6 = NULL;
                t = SSLgetAnnotations(p_25);
                o_12 = t;
                t = w_25;
                t = x_25(t);
                s_12 = t;
                t = (ATerm) ATinsert(CheckATermList(s_12), t_25);
                y_6 = t;
                t = SSLsetAnnotations(y_6, o_12);
                LocalPopChoice(m_26);
              }
            else
              {
                t = l_26;
                {
                  ATerm b_13 = NULL,a_7 = NULL;
                  t = SSLgetAnnotations(p_25);
                  b_13 = t;
                  t = t_25;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, t_25);
                  a_7 = t;
                  t = SSLsetAnnotations(a_7, b_13);
                }
              }
          }
          return(t);
        }
        t = x_25(t);
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        t = (ATerm) ATempty;
      }
  }
  i_24 = t;
  t = SSL_implode_string(i_24);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_26 = NULL;
  static ATerm u_5 (ATerm t)
  {
    ATerm d_26 = NULL,g_26 = NULL;
    d_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_26), d_26);
    t = h_8(not_null(a_26), d_26, t);
    g_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_26, g_26);
    return(t);
  }
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  t = SSL_table_keys(a_26);
  t = map_1_0(u_5, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_26, term_i_19);
        t = geq_0_0(t);
        t = r_26;
        t = h_82(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = r_26;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_27 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        f_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_27, term_f_16);
        t = geq_0_0(t);
        t = a_27;
        t = g_82(t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = a_27;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        m_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_27, term_m_14);
        t = geq_0_0(t);
        t = i_27;
        t = i_82(t);
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = i_27;
      }
  }
  return(t);
}
static ATerm t_7 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm z_24, ATerm y_24, ATerm t)
{
  t = c_75(t);
  {
    static ATerm x_5 (ATerm t)
    {
      ATerm o_27 = NULL;
      o_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_24, o_27);
      t = b_75(t);
      return(t);
    }
    t = fetch_1_0(x_5, t);
  }
  t = y_24;
  return(t);
}
static ATerm u_7 (ATerm y_74 (ATerm), ATerm v_24, ATerm u_24, ATerm t)
{
  static ATerm m_28 (ATerm t)
  {
    ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
    g_28 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_28 = ATgetFirst((ATermList) t);
            i_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_28;
              {
                static ATerm a_6 (ATerm t)
                {
                  t = u_24;
                  return(t);
                }
                t = t_7(y_74, a_6, h_28, i_28, t);
              }
              t = m_28(t);
              LocalPopChoice(w_26);
            }
          else
            {
              t = v_26;
              {
                ATerm q_13 = NULL,u_13 = NULL,s_7 = NULL;
                t = SSLgetAnnotations(g_28);
                q_13 = t;
                t = i_28;
                t = m_28(t);
                u_13 = t;
                t = (ATerm) ATinsert(CheckATermList(u_13), h_28);
                s_7 = t;
                t = SSLsetAnnotations(s_7, q_13);
              }
            }
        }
      }
    return(t);
  }
  t = v_24;
  t = m_28(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm c_29 = NULL;
  if(match_cons(t, sym__2))
    {
      c_29 = ATgetArgument(t, 0);
      if((c_29 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm l_37, ATerm m_37, ATerm n_37, ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_37, m_37);
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_26 = ATgetArgument(t, 0);
            ATerm b_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_37, m_37);
        t = h_8(l_37, m_37, t);
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = (ATerm) ATempty;
      }
  }
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_28, n_37);
  t = u_7(c_6, s_28, n_37, t);
  r_28 = t;
  t = SSL_table_put(l_37, m_37, r_28);
  t = q_28;
  return(t);
}
static ATerm w_7 (ATerm k_82 (ATerm), ATerm v_37, ATerm u_37, ATerm t)
{
  static ATerm d_6 (ATerm t)
  {
    ATerm e_29 = NULL,h_29 = NULL;
    if(match_cons(t, sym__2))
      {
        e_29 = ATgetArgument(t, 0);
        h_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_37, e_29, h_29);
    t = k_82(t);
    return(t);
  }
  t = u_37;
  t = map_1_0(d_6, t);
  return(t);
}
static ATerm a_8 (ATerm w_39, ATerm x_39, ATerm t)
{
  t = SSL_access(w_39, x_39);
  return(t);
}
static ATerm f_30 (ATerm x_29, ATerm t)
{
  t = SSL_fclose(x_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  b_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_30 = ATgetArgument(t, 0);
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_30);
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            t = f_30(b_30, t);
          }
      }
    }
  else
    {
      t = f_30(b_30, t);
    }
  return(t);
}
static ATerm x_7 (ATerm c_18, ATerm t)
{
  t = SSL_read_term_from_stream(c_18);
  return(t);
}
static ATerm y_7 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm g_30 = NULL;
  t = SSL_fopen(e_40, f_40);
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_30);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_30 = NULL;
  t = SSL_stdin_stream();
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_30 = NULL;
  t = SSL_stdout_stream();
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_30 = NULL;
  t = SSL_stderr_stream();
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_30);
  return(t);
}
static ATerm l_32 (ATerm b_31, ATerm t)
{
  ATerm c_31 = NULL;
  t = SSL_explode_term(b_31);
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) == AT_LIST) && !(ATisEmpty(g_27))))
          {
            c_31 = ATgetFirst((ATermList) g_27);
            {
              ATerm h_27 = (ATerm) ATgetNext((ATermList) g_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_31;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_31;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_31;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_31;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_32 (ATerm f_31, ATerm g_31, ATerm j_31, ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,o_31 = NULL,s_31 = NULL,o_8 = NULL;
  t = SSLgetAnnotations(j_31);
  o_31 = t;
  t = f_31;
  if(match_cons(t, sym_Path_1))
    {
      s_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_31, g_31);
  o_8 = t;
  t = SSLsetAnnotations(o_8, o_31);
  if(match_cons(t, sym__2))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(k_31, l_31, t);
  return(t);
}
static ATerm n_32 (ATerm u_31, ATerm v_31, ATerm w_31, ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,c_32 = NULL,e_10 = NULL;
  t = SSLgetAnnotations(w_31);
  z_31 = t;
  t = SSL_is_string(u_31);
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_32, v_31);
  e_10 = t;
  t = SSLsetAnnotations(e_10, z_31);
  if(match_cons(t, sym__2))
    {
      x_31 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(x_31, y_31, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,k_32 = NULL;
  g_32 = t;
  if(match_cons(t, sym__2))
    {
      h_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_32(g_32, t);
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            {
              ATerm l_27 = t;
              int n_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_32(h_32, k_32, g_32, t);
                  LocalPopChoice(n_27);
                }
              else
                {
                  t = l_27;
                  t = n_32(h_32, k_32, g_32, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_32(g_32, t);
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_32 = NULL;
      r_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_32, term_s_27);
      t = z_7(t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      t = debug_1_0(e_6, t);
      _fail(t);
    }
  p_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(q_32, t);
  o_32 = t;
  t = p_32;
  t = fclose_0_0(t);
  t = o_32;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_t_27;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_32 = NULL,u_32 = NULL;
      t_32 = t;
      t = (ATerm) ATinsert(ATempty, term_x_27);
      u_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_32, (ATerm) ATinsert(ATempty, term_x_27));
      t = a_8(t_32, u_32, t);
      LocalPopChoice(w_27);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_27;
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_28 = t;
            if((PushChoice() == 0))
              {
                ATerm v_32 = NULL,w_32 = NULL;
                v_32 = t;
                t = (ATerm) ATinsert(ATempty, term_t_22);
                w_32 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_32, (ATerm) ATinsert(ATempty, term_t_22));
                t = a_8(v_32, w_32, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_28;
              }
            t = debug_1_0(h_6, t);
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            t = debug_1_0(i_6, t);
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
  t = term_b_28;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = debug_1_0(n_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_c_28;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm k_33 = NULL,p_33 = NULL,q_33 = NULL;
  k_33 = t;
  t = term_o_20;
  p_33 = t;
  t = (ATerm) ATinsert(ATempty, term_d_28);
  q_33 = t;
  t = SSL_printnl(p_33, q_33);
  t = k_33;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,v_33 = NULL;
  if(match_cons(t, sym__3))
    {
      r_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
      v_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_7(r_33, s_33, v_33, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  t = term_o_20;
  y_33 = t;
  t = (ATerm) ATinsert(ATempty, term_e_28);
  z_33 = t;
  t = SSL_printnl(y_33, z_33);
  t = x_33;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,e_34 = NULL;
  b_34 = t;
  t = term_o_20;
  c_34 = t;
  t = (ATerm) ATinsert(ATempty, term_d_28);
  e_34 = t;
  t = SSL_printnl(c_34, e_34);
  t = b_34;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  x_32 = t;
  t = if_verbose5_1_0(k_6, t);
  {
    ATerm f_28 = t;
    if((PushChoice() == 0))
      {
        ATerm i_33 = NULL,j_33 = NULL;
        t = term_j_28;
        i_33 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, x_32);
        j_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_28, (ATerm) ATmakeAppl(sym_Imported_1, x_32));
        t = h_8(i_33, j_33, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_28;
      }
  }
  z_32 = t;
  t = term_j_28;
  f_33 = t;
  t = term_k_28;
  g_33 = t;
  t = (ATerm) ATinsert(ATempty, x_32);
  h_33 = t;
  t = SSL_table_put(f_33, g_33, h_33);
  t = z_32;
  t = if_verbose4_1_0(m_6, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(o_6, t);
  y_32 = t;
  t = term_j_28;
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_28, y_32);
  t = w_7(p_6, e_33, y_32, t);
  t = if_verbose6_1_0(q_6, t);
  t = term_j_28;
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, x_32);
  c_33 = t;
  t = (ATerm) ATempty;
  d_33 = t;
  t = SSL_table_put(b_33, c_33, d_33);
  t = (ATerm) ATmakeAppl(sym__3, term_j_28, (ATerm)ATmakeAppl(sym_Imported_1, x_32), (ATerm) ATempty);
  t = if_verbose4_1_0(s_6, t);
  return(t);
}
ATerm filter_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_35;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_35 = ATgetFirst((ATermList) t);
          l_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_15 = NULL,r_15 = NULL,t_15 = NULL,k_10 = NULL;
            t = SSLgetAnnotations(j_35);
            m_15 = t;
            t = k_35;
            t = q_78(t);
            r_15 = t;
            t = l_35;
            t = filter_1_0(q_78, t);
            t_15 = t;
            t = (ATerm) ATinsert(CheckATermList(t_15), r_15);
            k_10 = t;
            t = SSLsetAnnotations(k_10, m_15);
            LocalPopChoice(n_28);
          }
        else
          {
            t = l_28;
            t = l_35;
            t = filter_1_0(q_78, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm z_68 (ATerm), ATerm a_69 (ATerm), ATerm t)
{
  static ATerm r_35 (ATerm t)
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_68(t);
        t = r_35(t);
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = a_69(t);
      }
    return(t);
  }
  t = r_35(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_28;
      t = get_config_0_0(t);
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_35 = NULL;
            t = term_y_28;
            s_35 = t;
            t = SSL_getenv(s_35);
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = debug_1_0(u_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_z_28;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  t = term_j_28;
  z_35 = t;
  t = term_a_29;
  a_36 = t;
  t = term_b_29;
  t = h_8(z_35, a_36, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_29 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_29;
      }
  }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = debug_1_0(z_6, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_35 = NULL;
  t = if_verbose5_1_0(t_6, t);
  u_35 = t;
  {
    ATerm g_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_35 = NULL,w_35 = NULL;
        t = term_j_28;
        v_35 = t;
        t = term_k_28;
        w_35 = t;
        t = term_j_29;
        t = h_8(v_35, w_35, t);
        LocalPopChoice(i_29);
      }
    else
      {
        t = g_29;
        {
          ATerm x_35 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          x_35 = t;
          t = repeat_2_0(w_6, _id, t);
          t = x_35;
        }
      }
  }
  t = u_35;
  t = if_verbose5_1_0(x_6, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = debug_1_0(c_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_k_29;
  return(t);
}
static ATerm e_38 (ATerm f_36, ATerm t)
{
  ATerm i_36 = NULL,q_36 = NULL,r_36 = NULL;
  t = term_j_28;
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, f_36);
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_28, (ATerm) ATmakeAppl(sym_Tool_1, f_36));
  t = h_8(q_36, r_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_29 = ATgetFirst((ATermList) t);
      if(match_cons(l_29, sym__2))
        {
          ATerm n_29 = ATgetArgument(l_29, 0);
          i_36 = ATgetArgument(l_29, 1);
        }
      else
        _fail(t);
      {
        ATerm m_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_36;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = debug_1_0(f_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_k_29;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_j_28;
  t = table_getlist_0_0(t);
  t = debug_1_0(h_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_o_29;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_36 = NULL,y_36 = NULL,b_37 = NULL;
      t = if_verbose5_1_0(b_7, t);
      t = xtc_load_0_0(t);
      b_37 = t;
      if(match_cons(t, sym__2))
        {
          v_36 = ATgetArgument(t, 0);
          y_36 = ATgetArgument(t, 1);
          {
            ATerm r_29 = t;
            int s_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_37 = NULL,i_37 = NULL,q_37 = NULL;
                t = term_j_28;
                i_37 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, v_36);
                q_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_28, (ATerm) ATmakeAppl(sym_Tool_1, v_36));
                t = h_8(i_37, q_37, t);
                {
                  static ATerm d_7 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_36 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_37 != NULL) && (e_37 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_37 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(d_7, t);
                }
                t = not_null(e_37);
                LocalPopChoice(s_29);
              }
            else
              {
                t = r_29;
                t = e_38(b_37, t);
              }
          }
        }
      else
        {
          t = e_38(b_37, t);
        }
      t = if_verbose5_1_0(e_7, t);
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      {
        ATerm d_38 = NULL,g_16 = NULL,h_16 = NULL;
        d_38 = t;
        t = term_o_20;
        g_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_29), d_38), term_t_29);
        h_16 = t;
        t = SSL_printnl(g_16, h_16);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_29), d_38), term_t_29);
        t = if_verbose5_1_0(g_7, t);
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
static ATerm b_8 (ATerm w_14, ATerm x_14, ATerm t)
{
  t = SSL_copy(w_14, x_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  p_39 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_16 = NULL;
        t = p_39;
        t = r_0(t);
        m_16 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = m_16;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = m_16;
          }
        t = (ATerm) ATmakeAppl(sym__2, q_39, m_16);
        t = b_8(q_39, m_16, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_39);
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        {
          ATerm y_29 = t;
          int z_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_17 = NULL;
              t = p_39;
              t = r_0(t);
              f_17 = t;
              {
                ATerm c_30 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_17 = NULL;
                    g_17 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_17;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_17;
                          }
                        else
                          {
                            t = g_17;
                            if((q_39 != t))
                              {
                                _fail(t);
                              }
                            t = g_17;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_30;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, q_39, f_17);
              t = b_8(q_39, f_17, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_39);
              LocalPopChoice(z_29);
            }
          else
            {
              t = y_29;
              t = p_39;
              t = r_0(t);
              if((q_39 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_39);
            }
        }
      }
  }
  return(t);
}
static ATerm c_8 (ATerm t_36, ATerm u_36, ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  v_39 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_36, u_36);
        t = h_8(t_36, u_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_30 = ATgetFirst((ATermList) t);
            u_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_30);
        t = SSL_table_put(t_36, u_36, u_39);
        t = (ATerm) ATmakeAppl(sym__3, t_36, u_36, u_39);
      }
    else
      {
        t = d_30;
        t = SSL_table_remove(t_36, u_36);
        t = (ATerm) ATmakeAppl(sym__2, t_36, u_36);
      }
  }
  t = v_39;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  b_40 = t;
  t = r_80(t);
  a_40 = t;
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_40 = NULL;
        t = term_d_21;
        d_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_40, term_d_21);
        t = h_8(a_40, d_40, t);
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_39 = ATgetFirst((ATermList) t);
      y_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_21;
  c_40 = t;
  t = SSL_table_put(a_40, c_40, y_39);
  t = z_39;
  {
    static ATerm o_7 (ATerm t)
    {
      ATerm i_40 = NULL;
      i_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_40, i_40);
      t = c_8(a_40, i_40, t);
      return(t);
    }
    t = map_1_0(o_7, t);
  }
  t = b_40;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_81(t);
      t = s_81(t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      t = s_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  l_40 = t;
  t = q_80(t);
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_40, term_d_21);
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_40 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_30 = ATgetArgument(t, 0);
            ATerm s_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_21;
        s_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_40, term_d_21);
        t = h_8(k_40, s_40, t);
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        t = (ATerm) ATempty;
      }
  }
  m_40 = t;
  t = term_d_21;
  n_40 = t;
  t = (ATerm) ATinsert(CheckATermList(m_40), (ATerm) ATempty);
  o_40 = t;
  t = SSL_table_put(k_40, n_40, o_40);
  t = l_40;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_e_21;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm y_41 = NULL;
  y_41 = t;
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(y_41);
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = y_41;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  ATerm i_41 = NULL;
  static ATerm l_8 (ATerm t)
  {
    ATerm j_41 = NULL;
    j_41 = t;
    {
      ATerm v_30 = t;
      int w_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_41 = NULL,n_41 = NULL;
          t = term_e_21;
          k_41 = t;
          t = term_d_21;
          n_41 = t;
          t = term_x_30;
          t = h_8(k_41, n_41, t);
          LocalPopChoice(w_30);
        }
      else
        {
          t = v_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_41 != NULL) && (i_41 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_41 = ATgetFirst((ATermList) t);
        {
          ATerm y_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = i_41;
    t = map_1_0(m_8, t);
    t = j_41;
    t = end_scope_1_0(n_8, t);
    return(t);
  }
  t = begin_scope_1_0(j_8, t);
  t = restore_always_2_0(r_84, l_8, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_21;
      t = get_config_0_0(t);
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      t = term_w_21;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  static ATerm r_8 (ATerm t)
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_42 = NULL;
        t = term_l_21;
        t = get_config_0_0(t);
        b_42 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_42);
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        t = term_l_23;
      }
    t = s_84(t);
    t = copy_to_1_0(x_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(r_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,l_42 = NULL;
  c_42 = t;
  t = term_j_21;
  t = whoami_0_0(t);
  d_42 = t;
  t = term_o_20;
  f_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_31), d_42), term_h_31);
  l_42 = t;
  t = SSL_printnl(f_42, l_42);
  t = term_l_13;
  e_42 = t;
  t = SSL_exit(e_42);
  t = c_42;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm n_42 = NULL;
  n_42 = t;
  if(match_string(t, "-k"))
    {
      t = n_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_42;
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  t = SSL_string_to_int(o_42);
  p_42 = t;
  t = term_p_21;
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_21, p_42);
  t = k_8(q_42, p_42, t);
  t = o_42;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_8, c_9, d_9, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm s_42 = NULL;
  s_42 = t;
  if(match_string(t, "-S"))
    {
      t = s_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_42;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  t = term_d_13;
  t_42 = t;
  t = term_n_31;
  u_42 = t;
  t = term_p_31;
  t = k_8(t_42, u_42, t);
  t = term_q_31;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_r_31;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  t = SSL_string_to_int(w_42);
  x_42 = t;
  t = term_d_13;
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, x_42);
  t = k_8(y_42, x_42, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_42);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  t = term_a_32;
  z_42 = t;
  t = term_j_21;
  a_43 = t;
  t = term_b_32;
  t = k_8(z_42, a_43, t);
  t = term_d_32;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_9, k_9, l_9, t);
      LocalPopChoice(s_32);
    }
  else
    {
      t = f_32;
      {
        ATerm a_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_9, s_9, t_9, t);
            LocalPopChoice(l_33);
          }
        else
          {
            t = a_33;
            t = Option_3_0(u_9, v_9, w_9, t);
          }
      }
    }
  return(t);
}
static ATerm k_8 (ATerm o_38, ATerm p_38, ATerm t)
{
  ATerm b_43 = NULL;
  t = term_i_26;
  b_43 = t;
  t = SSL_table_put(b_43, o_38, p_38);
  t = (ATerm) ATmakeAppl(sym__3, term_i_26, o_38, p_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
      t = term_j_21;
      t = i_0(t);
      g_43 = t;
      t = term_m_33;
      h_43 = t;
      t = term_w_33;
      i_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_33, term_w_33, g_43);
      t = i_8(h_43, i_43, g_43, t);
      _fail(t);
    }
  else
    {
      ATerm l_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_43 = ATgetFirst((ATermList) t);
          f_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_43;
      t = d_0(t);
      t = term_j_21;
      t = g_0(t);
      l_43 = t;
      t = (ATerm) ATinsert(CheckATermList(f_43), l_43);
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm n_43 = NULL;
  n_43 = t;
  if(match_string(t, "-o"))
    {
      t = n_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_43;
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL;
  o_43 = t;
  t = term_k_21;
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, o_43);
  t = k_8(p_43, o_43, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_43);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_9, g_10, h_10, t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm r_43 = NULL;
  r_43 = t;
  if(match_string(t, "-i"))
    {
      t = r_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_43;
    }
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL;
  s_43 = t;
  t = term_l_21;
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, s_43);
  t = k_8(t_43, s_43, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_43);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_10, j_10, l_10, t);
  return(t);
}
static ATerm i_8 (ATerm o_36, ATerm p_36, ATerm n_36, ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_34 = ATgetArgument(t, 0);
            ATerm i_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
        t = h_8(o_36, p_36, t);
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        t = (ATerm) ATempty;
      }
  }
  w_43 = t;
  t = (ATerm) ATinsert(CheckATermList(w_43), n_36);
  x_43 = t;
  t = SSL_table_put(o_36, p_36, x_43);
  t = v_43;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
      t = term_j_21;
      t = p_0(t);
      i_44 = t;
      t = term_m_33;
      j_44 = t;
      t = term_w_33;
      k_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_33, term_w_33, i_44);
      t = i_8(j_44, k_44, i_44, t);
      _fail(t);
    }
  else
    {
      ATerm o_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_44 = ATgetFirst((ATermList) t);
          f_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_44 = ATgetFirst((ATermList) t);
          h_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_44;
      t = n_0(t);
      t = g_44;
      t = o_0(t);
      o_44 = t;
      t = (ATerm) ATinsert(CheckATermList(h_44), o_44);
    }
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm q_44 = NULL;
  q_44 = t;
  if(match_string(t, "-I"))
    {
      t = q_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = q_44;
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
  r_44 = t;
  t = term_i_22;
  s_44 = t;
  t = (ATerm) ATinsert(ATempty, r_44);
  t_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_22, (ATerm) ATinsert(ATempty, r_44));
  t = r_7(s_44, t_44, t);
  t = r_44;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_j_34;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  u_44 = t;
  t = term_a_24;
  v_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_24, u_44);
  t = k_8(v_44, u_44, t);
  t = u_44;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_k_34;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
  w_44 = t;
  t = term_d_13;
  x_44 = t;
  t = term_n_31;
  y_44 = t;
  t = term_p_31;
  t = k_8(x_44, y_44, t);
  t = w_44;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_l_34;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  t = term_x_24;
  a_45 = t;
  t = term_l_13;
  b_45 = t;
  t = term_m_34;
  t = k_8(a_45, b_45, t);
  t = z_44;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(n_10, o_10, q_10, t);
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      {
        ATerm p_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_10, u_10, w_10, t);
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
                  t = Option_3_0(z_10, a_11, b_11, t);
                  LocalPopChoice(s_34);
                }
              else
                {
                  t = r_34;
                  t = Option_3_0(d_11, f_11, g_11, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_21;
  t = whoami_0_0(t);
  c_45 = t;
  t = term_o_20;
  e_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_34), c_45);
  f_45 = t;
  t = SSL_printnl(e_45, f_45);
  t = term_l_13;
  d_45 = t;
  t = SSL_exit(d_45);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_34;
  t = get_config_0_0(t);
  return(t);
}
static ATerm d_8 (ATerm n_33, ATerm o_33, ATerm t)
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_33, o_33);
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      t = SSL_addr(n_33, o_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
  h_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_45;
      t = m_77(t);
    }
  else
    {
      ATerm m_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_45 = ATgetFirst((ATermList) t);
          j_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_45;
      t = foldr_2_0(m_77, n_77, t);
      m_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_45, m_45);
      t = n_77(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_n_31;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm v_17 = NULL,b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8(v_17, b_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_45 = NULL,q_17 = NULL,r_17 = NULL;
  t = times_0_0(t);
  r_17 = t;
  t = SSL_explode_term(r_17);
  if(match_cons(t, sym__2))
    {
      ATerm x_34 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_17;
  t = foldr_2_0(h_11, i_11, t);
  p_45 = t;
  t = SSL_TicksToSeconds(p_45);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  a_46 = t;
  if(match_cons(t, sym__2))
    {
      b_46 = ATgetArgument(t, 0);
      c_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_46;
        if((b_46 != t))
          {
            _fail(t);
          }
        t = a_46;
        LocalPopChoice(a_35);
      }
    else
      {
        t = y_34;
        t = (ATerm) ATmakeAppl(sym__2, b_46, c_46);
        {
          ATerm c_35 = t;
          int d_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_46, c_46);
              LocalPopChoice(d_35);
            }
          else
            {
              t = c_35;
              t = SSL_gtr(b_46, c_46);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_46, c_46);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_82 (ATerm), ATerm t)
{
  ATerm g_46 = NULL;
  g_46 = t;
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_46 = NULL;
        t = term_d_13;
        t = get_config_0_0(t);
        i_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_46, term_l_13);
        t = geq_0_0(t);
        t = g_46;
        t = d_82(t);
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        t = g_46;
      }
  }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,n_46 = NULL,o_46 = NULL;
  t = run_time_0_0(t);
  k_46 = t;
  t = term_j_21;
  t = whoami_0_0(t);
  l_46 = t;
  t = term_o_20;
  n_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_35), k_46), term_r_13), l_46);
  o_46 = t;
  t = SSL_printnl(n_46, o_46);
  t = (ATerm) ATmakeAppl(sym__2, term_o_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_35), k_46), term_r_13), l_46));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_31;
  p_46 = t;
  t = SSL_exit(p_46);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL;
  y_46 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_46;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_46 = ATgetArgument(t, 0);
          {
            ATerm t_18 = NULL,r_10 = NULL;
            t = SSLgetAnnotations(y_46);
            t_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_46);
            r_10 = t;
            t = SSLsetAnnotations(r_10, t_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_46;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_35;
      t = get_config_0_0(t);
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      t = fetch_1_0(l_11, t);
    }
  t = h_86(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_47 = ATgetFirst((ATermList) t);
      c_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_47 = NULL,h_47 = NULL;
        static ATerm n_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_47)), not_null(h_47));
          return(t);
        }
        t = c_47;
        t = l_0(t);
        if(((g_47 != NULL) && (g_47 != t)))
          _fail(t);
        else
          g_47 = t;
        t = b_47;
        t = k_0(t);
        if(((h_47 != NULL) && (h_47 != t)))
          _fail(t);
        else
          h_47 = t;
        t = c_47;
        t = reverse_acc_2_0(k_0, n_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_21;
      t = l_0(t);
    }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_11 = NULL;
  n_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_47);
  l_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_47);
  o_11 = t;
  t = SSLsetAnnotations(o_11, l_47);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm p_47 = NULL;
  p_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_47), term_n_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  ATerm o_35 = t;
  int p_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_34;
      t = get_config_0_0(t);
      LocalPopChoice(p_35);
    }
  else
    {
      t = o_35;
      t = fetch_1_0(p_11, t);
    }
  t = term_q_35;
  t = echo_0_0(t);
  t = term_m_33;
  j_47 = t;
  t = term_w_33;
  k_47 = t;
  t = term_t_35;
  t = h_8(j_47, k_47, t);
  t = reverse_acc_2_0(_id, q_11, t);
  t = map_1_0(t_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  static ATerm m_48 (ATerm t)
  {
    ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
    j_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_48 = ATgetFirst((ATermList) t);
        l_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_35 = t;
      int b_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_19 = NULL,p_19 = NULL,r_11 = NULL;
          t = SSLgetAnnotations(j_48);
          g_19 = t;
          t = k_48;
          t = e_71(t);
          p_19 = t;
          t = (ATerm) ATinsert(CheckATermList(l_48), p_19);
          r_11 = t;
          t = SSLsetAnnotations(r_11, g_19);
          LocalPopChoice(b_36);
        }
      else
        {
          t = y_35;
          {
            ATerm a_20 = NULL,d_20 = NULL,s_11 = NULL;
            t = SSLgetAnnotations(j_48);
            a_20 = t;
            t = l_48;
            t = m_48(t);
            d_20 = t;
            t = (ATerm) ATinsert(CheckATermList(d_20), k_48);
            s_11 = t;
            t = SSLsetAnnotations(s_11, a_20);
          }
        }
    }
    return(t);
  }
  t = m_48(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
  q_48 = t;
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_48;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_36 = ATgetFirst((ATermList) t);
                ATerm g_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_48;
          }
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        t = (ATerm) ATinsert(ATempty, q_48);
      }
  }
  r_48 = t;
  t = term_w_21;
  s_48 = t;
  t = SSL_printnl(s_48, r_48);
  t = q_48;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_34;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm g_8 (ATerm i_32, ATerm j_32, ATerm t)
{
  t = SSL_strcat(i_32, j_32);
  return(t);
}
ATerm debug_1_0 (ATerm c_66 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
  w_48 = t;
  t = c_66(t);
  x_48 = t;
  t = term_o_20;
  y_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_48), x_48);
  z_48 = t;
  t = SSL_printnl(y_48, z_48);
  t = w_48;
  return(t);
}
ATerm map_1_0 (ATerm u_70 (ATerm), ATerm t)
{
  static ATerm o_49 (ATerm t)
  {
    ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
    l_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_49;
      }
    else
      {
        ATerm y_20 = NULL,f_21 = NULL,g_21 = NULL,v_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_49 = ATgetFirst((ATermList) t);
            n_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_49);
        y_20 = t;
        t = m_49;
        t = u_70(t);
        f_21 = t;
        t = n_49;
        t = o_49(t);
        g_21 = t;
        t = (ATerm) ATinsert(CheckATermList(g_21), f_21);
        v_11 = t;
        t = SSLsetAnnotations(v_11, y_20);
      }
    return(t);
  }
  t = o_49(t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm h_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(j_36);
    }
  else
    {
      t = h_36;
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_49 = NULL;
      w_49 = t;
      t = SSL_is_string(w_49);
      LocalPopChoice(m_36);
    }
  else
    {
      t = l_36;
      {
        ATerm s_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_11, t);
            LocalPopChoice(w_36);
          }
        else
          {
            t = s_36;
            {
              ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
              c_50 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_50 = ATgetArgument(t, 0);
                  t = d_50;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_50 = ATgetArgument(t, 0);
                      t = d_50;
                      {
                        ATerm x_36 = t;
                        int z_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(z_36);
                          }
                        else
                          {
                            t = x_36;
                            t = debug_1_0(w_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_50 = NULL,j_50 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_50 = ATgetArgument(t, 0);
                          e_50 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_50;
                      t = eval_config_0_0(t);
                      i_50 = t;
                      t = e_50;
                      t = eval_config_0_0(t);
                      j_50 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_50, j_50);
                      t = g_8(i_50, j_50, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_8 (ATerm f_38, ATerm g_38, ATerm t)
{
  t = SSL_table_get(f_38, g_38);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL;
  n_50 = t;
  t = term_i_26;
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_26, n_50);
  t = h_8(o_50, n_50, t);
  {
    ATerm a_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_50 = NULL,q_50 = NULL;
        t = eval_config_0_0(t);
        p_50 = t;
        t = term_i_26;
        q_50 = t;
        t = SSL_table_put(q_50, n_50, p_50);
        t = p_50;
        LocalPopChoice(c_37);
      }
    else
      {
        t = a_37;
      }
  }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  t = term_d_37;
  t_50 = t;
  t = term_j_21;
  u_50 = t;
  t = term_f_37;
  t = k_8(t_50, u_50, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_g_37;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  t = term_d_37;
  x_50 = t;
  t = term_j_21;
  y_50 = t;
  t = term_f_37;
  t = k_8(x_50, y_50, t);
  t = term_t_24;
  v_50 = t;
  t = term_j_21;
  w_50 = t;
  t = term_h_37;
  t = k_8(v_50, w_50, t);
  t = term_j_37;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_k_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_11, b_12, c_12, t);
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      t = Option_3_0(d_12, e_12, g_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,x_11 = NULL;
  e_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_51 = ATgetFirst((ATermList) t);
      b_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_51);
  z_50 = t;
  t = a_51;
  t = t_57(t);
  c_51 = t;
  t = b_51;
  t = u_57(t);
  d_51 = t;
  t = (ATerm) ATinsert(CheckATermList(d_51), c_51);
  x_11 = t;
  t = SSLsetAnnotations(x_11, z_50);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,o_51 = NULL,p_51 = NULL,a_12 = NULL;
  j_51 = t;
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_37;
        t = f_88(t);
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
      }
  }
  t = j_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_51 = ATgetFirst((ATermList) t);
      m_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_51);
  k_51 = t;
  t = term_u_34;
  p_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_34, l_51);
  t = k_8(p_51, l_51, t);
  t = m_51;
  {
    static ATerm z_51 (ATerm t)
    {
      ATerm w_37 = t;
      int x_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_37 = t;
          int z_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_51 = NULL;
              s_51 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_51;
              LocalPopChoice(z_37);
            }
          else
            {
              t = y_37;
              t = f_88(t);
              t = Cons_2_0(_id, z_51, t);
            }
          LocalPopChoice(x_37);
        }
      else
        {
          t = w_37;
          {
            ATerm v_51 = NULL,w_51 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_51 = ATgetFirst((ATermList) t);
                w_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_51), (ATerm) ATmakeAppl(sym_Undefined_1, v_51));
          }
        }
      return(t);
    }
    t = z_51(t);
  }
  o_51 = t;
  t = (ATerm) ATinsert(CheckATermList(o_51), (ATerm) ATmakeAppl(sym_Program_1, l_51));
  a_12 = t;
  t = SSLsetAnnotations(a_12, k_51);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm l_52 = NULL;
  l_52 = t;
  if(match_string(t, "--help"))
    {
      t = l_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_52;
        }
    }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL;
  t = term_m_35;
  m_52 = t;
  t = term_j_21;
  n_52 = t;
  t = term_a_38;
  t = k_8(m_52, n_52, t);
  t = term_b_38;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_c_38;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
  g_52 = t;
  t = term_m_33;
  i_52 = t;
  t = term_w_33;
  j_52 = t;
  t = (ATerm) ATempty;
  k_52 = t;
  t = SSL_table_put(i_52, j_52, k_52);
  t = g_52;
  {
    static ATerm i_12 (ATerm t)
    {
      ATerm h_38 = t;
      int i_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_88(t);
          LocalPopChoice(i_38);
        }
      else
        {
          t = h_38;
          {
            ATerm j_38 = t;
            int k_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_12, l_12, m_12, t);
                LocalPopChoice(k_38);
              }
            else
              {
                t = j_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_12, t);
  }
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_52 = NULL;
        u_52 = t;
        {
          ATerm n_38 = t;
          int q_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_22 = NULL;
              t = u_52;
              {
                ATerm r_38 = t;
                int s_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_35;
                    t = get_config_0_0(t);
                    LocalPopChoice(s_38);
                  }
                else
                  {
                    t = r_38;
                    t = fetch_1_0(p_12, t);
                  }
              }
              t = u_52;
              t = default_system_usage_0_0(t);
              t = term_n_31;
              d_22 = t;
              t = SSL_exit(d_22);
              LocalPopChoice(q_38);
            }
          else
            {
              t = n_38;
              {
                ATerm h_22 = NULL;
                t = term_d_37;
                t = get_config_0_0(t);
                t = u_52;
                t = default_system_about_0_0(t);
                t = term_n_31;
                h_22 = t;
                t = SSL_exit(h_22);
              }
            }
        }
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        {
          ATerm v_38 = t;
          int w_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
              static ATerm q_12 (ATerm t)
              {
                ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,j_12 = NULL;
                a_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_52 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_53);
                y_52 = t;
                t = z_52;
                if(((e_52 != NULL) && (e_52 != t)))
                  _fail(t);
                else
                  e_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_52);
                j_12 = t;
                t = SSLsetAnnotations(j_12, y_52);
                return(t);
              }
              t = fetch_1_0(q_12, t);
              t = term_o_20;
              w_52 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_52)), term_x_38);
              x_52 = t;
              t = SSL_printnl(w_52, x_52);
              t = (ATerm) ATmakeAppl(sym__2, term_o_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_52)), term_x_38));
              t = default_system_usage_0_0(t);
              t = term_l_13;
              v_52 = t;
              t = SSL_exit(v_52);
              LocalPopChoice(w_38);
            }
          else
            {
              t = v_38;
            }
        }
      }
  }
  f_52 = t;
  t = term_m_33;
  h_52 = t;
  t = SSL_table_destroy(h_52);
  t = f_52;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL;
  t = parse_options_1_0(j_86, t);
  f_53 = t;
  t = term_y_38;
  i_53 = t;
  t = SSL_table_create(i_53);
  t = term_y_38;
  g_53 = t;
  t = term_z_38;
  h_53 = t;
  t = SSL_table_put(g_53, h_53, f_53);
  t = f_53;
  t = l_86(t);
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_86, t);
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        {
          ATerm d_39 = t;
          int e_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_86(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_39);
            }
          else
            {
              t = d_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      LocalPopChoice(g_39);
    }
  else
    {
      t = f_39;
      {
        ATerm h_39 = t;
        int i_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(i_39);
          }
        else
          {
            t = h_39;
            {
              ATerm j_39 = t;
              int k_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(k_39);
                }
              else
                {
                  t = j_39;
                  {
                    ATerm l_39 = t;
                    int m_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_12, x_12, y_12, t);
                        LocalPopChoice(m_39);
                      }
                    else
                      {
                        t = l_39;
                        {
                          ATerm n_39 = t;
                          int o_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(o_39);
                            }
                          else
                            {
                              t = n_39;
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
static ATerm u_12 (ATerm t)
{
  t = xtc_io_1_0(z_12, t);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL;
  t = term_r_39;
  k_53 = t;
  t = term_j_21;
  l_53 = t;
  t = term_s_39;
  t = k_8(k_53, l_53, t);
  t = term_t_39;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_g_40;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  n_53 = t;
  t = term_h_40;
  t = xtc_find_path_0_0(t);
  o_53 = t;
  t = term_i_22;
  p_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_53), term_j_40);
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, o_53), term_j_40));
  t = r_7(p_53, q_53, t);
  t = n_53;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(t_12, default_usage_0_0, _id, u_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
