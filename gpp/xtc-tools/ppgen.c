#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_PlainText_0;
Symbol sym_ParseTree_0;
Symbol sym_AST_0;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
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
static void init_module_constructors (void)
{
  sym_PlainText_0 = ATmakeSymbol("PlainText", 0, ATfalse);
  ATprotectSymbol(sym_PlainText_0);
  sym_ParseTree_0 = ATmakeSymbol("ParseTree", 0, ATfalse);
  ATprotectSymbol(sym_ParseTree_0);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
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
}
ATerm term_z_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_l_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_m_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_a_33;
ATerm term_v_32;
ATerm term_q_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_e_32;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_a_30;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_m_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_b_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_o_28;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_j_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_h_21;
ATerm term_x_20;
ATerm term_o_20;
ATerm term_k_20;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_c_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_o_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_b_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_n_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_v_11, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_u_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_h_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_n_13, term_o_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_s_14, term_t_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_j_15, term_m_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_z_15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_f_16, term_h_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_c_17, term_g_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_n_17, term_q_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_x_17, term_y_17);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_i_18, term_k_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_r_18, term_s_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_w_18, term_y_18);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_g_19, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_r_19, term_u_19);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_a_24);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_i_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_t_23);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.baf", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-desugar", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SDF", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_p_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-type", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_a_27);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_h_21);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_z_28);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_28);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_q_21);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_h_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_k_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_k_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t          Output is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_q_21);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_l_31);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_j_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym__2, term_e_30, term_f_30);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_o_33, term_q_21);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_q_21);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_q_21);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__3, term_e_30, term_f_30, (ATerm) ATempty);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_o_33);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_r_21);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm r_7 (ATerm h_20, ATerm g_226, ATerm t);
ATerm at_suffix_1_0 (ATerm k_88 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm c_88 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm h_97 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm u_7 (ATerm z_14, ATerm y_14, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm a_7 (ATerm p_34, ATerm q_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm b_7 (ATerm d_18, ATerm e_18, ATerm t);
static ATerm c_7 (ATerm y_82 (ATerm), ATerm t_194, ATerm n_18, ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm t);
static ATerm d_7 (ATerm q_14, ATerm r_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm b_88 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm l_81 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm y_105 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm g_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm s_15 (ATerm h_15, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_7 (ATerm n_98 (ATerm), ATerm x_35, ATerm v_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm r_102 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm debug_1_0 (ATerm w_82 (ATerm), ATerm t);
static ATerm g_7 (ATerm l_53, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm t_102 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm s_102 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm u_102 (ATerm), ATerm t);
static ATerm i_7 (ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm s_25, ATerm r_25, ATerm t);
static ATerm j_7 (ATerm a_92 (ATerm), ATerm o_25, ATerm n_25, ATerm t);
static ATerm l_1 (ATerm t);
static ATerm k_7 (ATerm j_49, ATerm k_49, ATerm l_49, ATerm t);
static ATerm l_7 (ATerm w_102 (ATerm), ATerm t_49, ATerm s_49, ATerm t);
static ATerm t_7 (ATerm e_55, ATerm f_55, ATerm t);
static ATerm o_24 (ATerm d_24, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_7 (ATerm j_18, ATerm t);
static ATerm s_7 (ATerm b_33, ATerm c_33, ATerm t);
static ATerm n_7 (ATerm q_55, ATerm r_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_27 (ATerm i_25, ATerm t);
static ATerm k_27 (ATerm w_25, ATerm x_25, ATerm y_25, ATerm t);
static ATerm l_27 (ATerm i_26, ATerm m_26, ATerm n_26, ATerm t);
static ATerm o_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm h_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_33 (ATerm p_32, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_sglr_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm xtc_parse_sdf2_0_1 (ATerm d_58, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm pre_process_sdf_0_0 (ATerm t);
ATerm get_input_type_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm ppgen_0_0 (ATerm t);
static ATerm b_8 (ATerm f_50, ATerm g_50, ATerm t);
static ATerm v_7 (ATerm r_48, ATerm s_48, ATerm t);
ATerm end_scope_1_0 (ATerm k_98 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm j_98 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm h_105 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm ppgen_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_7 (ATerm j_34, ATerm k_34, ATerm t);
ATerm foldr_2_0 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_102 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm need_help_1_0 (ATerm f_107 (ATerm), ATerm t);
static ATerm f_8 (ATerm e_53, ATerm f_53, ATerm g_53, ATerm t);
static ATerm g_8 (ATerm h_53, ATerm i_53, ATerm t);
ATerm lookup_table_0_1 (ATerm y_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_53, ATerm n_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_7 (ATerm j_53, ATerm k_53, ATerm t);
static ATerm z_7 (ATerm o_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm p_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm e_8 (ATerm s_53, ATerm t_53, ATerm t);
static ATerm c_8 (ATerm m_48, ATerm n_48, ATerm l_48, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_109 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm parse_options_1_0 (ATerm c_109 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL;
  j_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_2 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = j_1;
        t = p_0(t);
        e_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = e_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = e_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, k_1, e_0);
        t = u_7(k_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
        LocalPopChoice(b_9);
      }
    else
      {
        t = f_2;
        {
          ATerm d_9 = t;
          int g_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_0 = NULL;
              t = j_1;
              t = p_0(t);
              z_0 = t;
              {
                ATerm h_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_1 = NULL;
                    g_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_1;
                          }
                        else
                          {
                            t = g_1;
                            if((k_1 != t))
                              {
                                _fail(t);
                              }
                            t = g_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_1, z_0);
              t = u_7(k_1, z_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
              LocalPopChoice(g_9);
            }
          else
            {
              t = d_9;
              t = j_1;
              t = p_0(t);
              if((k_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
            }
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_1 = ATgetFirst((ATermList) t);
      v_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_1;
    }
  else
    {
      t = v_1;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm r_7 (ATerm h_20, ATerm g_226, ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    if((h_20 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = g_226;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  static ATerm k_3 (ATerm t);
  static ATerm k_3 (ATerm t)
  {
    ATerm m_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_88(t);
        LocalPopChoice(o_9);
      }
    else
      {
        t = m_9;
        {
          ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,s_1 = NULL,z_1 = NULL,t_0 = NULL;
          f_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_3 = ATgetFirst((ATermList) t);
              i_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_3);
          s_1 = t;
          t = i_3;
          t = k_3(t);
          z_1 = t;
          t = (ATerm) ATinsert(CheckATermList(z_1), g_3);
          t_0 = t;
          t = SSLsetAnnotations(t_0, s_1);
        }
      }
    return(t);
  }
  t = k_3(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,p_3 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm q_3 = NULL,s_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,d_4 = NULL,w_0 = NULL,v_0 = NULL;
    d_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_3 = ATgetFirst((ATermList) t);
        y_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_4);
    v_3 = t;
    t = w_3;
    t = c_88(t);
    z_3 = t;
    t = (ATerm) ATinsert(CheckATermList(y_3), z_3);
    v_0 = t;
    t = SSLsetAnnotations(v_0, v_3);
    b_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_3 = ATgetFirst((ATermList) t);
        u_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_4);
    q_3 = t;
    t = u_3;
    if(((m_3 != NULL) && (m_3 != t)))
      _fail(t);
    else
      m_3 = t;
    t = (ATerm) ATinsert(CheckATermList(u_3), s_3);
    w_0 = t;
    t = SSLsetAnnotations(w_0, q_3);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, not_null(m_3));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm h_97 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,t_4 = NULL;
  ATerm p_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(h_97, t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = p_9;
      {
        ATerm m_4 = NULL;
        m_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_4, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm t_9 = ATgetFirst((ATermList) t);
              ATerm w_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_4;
          t = list_tokenize_1_0(h_97, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm z_9 = ATgetFirst((ATermList) t);
          ATerm a_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, q_4);
        }
      else
        {
          ATerm f_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_10 = ATgetFirst((ATermList) t);
              ATerm d_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_4;
          t = list_tokenize_1_0(h_97, t);
          f_5 = t;
          t = (ATerm) ATinsert(CheckATermList(f_5), q_4);
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  t = SSL_implode_string(v_5);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm g_5 = NULL,l_5 = NULL,m_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,c_1 = NULL;
  t_5 = t;
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      r_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_5);
  m_5 = t;
  t = SSL_explode_string(r_5);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_5, s_5);
  c_1 = t;
  t = SSLsetAnnotations(c_1, m_5);
  if(match_cons(t, sym__2))
    {
      g_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm u_5 = NULL;
      u_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_5, g_5);
      t = r_7(u_5, g_5, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm r_6 = NULL;
  r_6 = t;
  {
    ATerm e_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 = NULL;
        t = SSL_filemode(r_6);
        if(match_cons(t, sym__2))
          {
            n_2 = ATgetArgument(t, 0);
            {
              ATerm n_10 = ATgetArgument(t, 1);
              if(((ATgetType(n_10) != AT_INT) || (ATgetInt((ATermInt) n_10) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_2;
        LocalPopChoice(h_10);
      }
    else
      {
        t = e_10;
        {
          ATerm s_2 = NULL,t_2 = NULL;
          t = term_o_10;
          t_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_10, r_6);
          t = s_7(t_2, r_6, t);
          s_2 = t;
          t = SSL_perror(s_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm u_7 (ATerm z_14, ATerm y_14, ATerm t)
{
  ATerm e_7 = NULL,h_7 = NULL;
  h_7 = t;
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_8 = NULL,h_8 = NULL;
        t = (ATerm) ATinsert(ATempty, term_r_10);
        h_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_14, (ATerm) ATinsert(ATempty, term_r_10));
        t = t_7(y_14, h_8, t);
        t = filemode_0_0(t);
        a_8 = t;
        t = SSL_S_ISDIR(a_8);
        t = h_7;
        LocalPopChoice(q_10);
        {
          ATerm i_8 = NULL,l_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_u_10), z_14);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          i_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_8), term_v_10), y_14);
          l_8 = t;
          t = SSL_concat_strings(l_8);
        }
      }
    else
      {
        t = p_10;
        t = y_14;
      }
  }
  e_7 = t;
  t = SSL_copy(z_14, e_7);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm w_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_9 = NULL,f_9 = NULL;
      t = term_z_10;
      e_9 = t;
      t = term_b_11;
      f_9 = t;
      t = term_c_11;
      t = b_8(e_9, f_9, t);
      LocalPopChoice(y_10);
    }
  else
    {
      t = w_10;
      t = term_e_11;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm a_9 = NULL;
  a_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_2 = NULL,x_2 = NULL;
      t = term_b_11;
      {
        ATerm f_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 = NULL,z_2 = NULL;
            t = term_z_10;
            y_2 = t;
            t = term_b_11;
            z_2 = t;
            t = term_c_11;
            t = b_8(y_2, z_2, t);
            LocalPopChoice(h_11);
          }
        else
          {
            t = f_11;
            t = term_e_11;
          }
      }
      w_2 = t;
      t = term_i_11;
      x_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_11, w_2);
      t = u_7(x_2, w_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm j_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_9;
      t = copy_to_1_0(k_0, t);
    }
  return(t);
}
static ATerm a_7 (ATerm p_34, ATerm q_34, ATerm t)
{
  ATerm k_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(p_34, q_34);
      LocalPopChoice(m_11);
    }
  else
    {
      t = k_11;
      t = SSL_subtr(p_34, q_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_9 = NULL,n_9 = NULL,q_9 = NULL,r_9 = NULL;
  t = term_n_11;
  {
    ATerm o_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_9 = NULL,v_9 = NULL;
        t = term_z_10;
        u_9 = t;
        t = term_n_11;
        v_9 = t;
        t = term_u_11;
        t = b_8(u_9, v_9, t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = o_11;
        t = term_v_11;
      }
  }
  n_9 = t;
  t = term_v_11;
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, term_v_11);
  t = a_7(n_9, r_9, t);
  q_9 = t;
  t = SSL_int_to_string(q_9);
  k_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_9), term_n_11);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_10 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_i_11;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm g_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_r_10);
      g_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_10, (ATerm) ATinsert(ATempty, term_r_10));
      t = t_7(b_10, g_10, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm b_7 (ATerm d_18, ATerm e_18, ATerm t)
{
  ATerm i_10 = NULL;
  t = SSL_write_term_to_stream_baf(d_18, e_18);
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_10);
  return(t);
}
static ATerm c_7 (ATerm y_82 (ATerm), ATerm t_194, ATerm n_18, ATerm t)
{
  ATerm j_10 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_194, term_w_11);
  t = o_7(t);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, n_18);
  t = y_82(t);
  t = fclose_0_0(t);
  t = n_18;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm m_10 = NULL,t_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_11 = ATgetArgument(t, 0);
      if(match_cons(x_11, sym_Stream_1))
        {
          m_10 = ATgetArgument(x_11, 0);
        }
      else
        _fail(t);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(m_10, t_10, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  l_10 = t;
  t = xtc_new_file_0_0(t);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_10, l_10);
  t = c_7(n_0, k_10, l_10, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_10);
  t = xtc_transform_file_2_0(u_104, v_104, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm d_7 (ATerm q_14, ATerm r_14, ATerm t)
{
  t = SSL_execvp(q_14, r_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm p_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_11 = ATgetArgument(t, 0);
      {
        ATerm n_3 = NULL,o_3 = NULL;
        t = SSL_int_to_string(r_11);
        n_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_11), n_3), term_y_11);
        o_3 = t;
        t = SSL_concat_strings(o_3);
      }
    }
  else
    {
      ATerm i_4 = NULL,j_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          r_11 = ATgetArgument(t, 0);
          s_11 = ATgetArgument(t, 1);
          t_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(s_11);
      i_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_11), term_c_12), i_4), term_b_12), r_11);
      j_4 = t;
      t = SSL_concat_strings(j_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm a_12 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    t = b_88(t);
    if(((a_12 != NULL) && (a_12 != t)))
      _fail(t);
    else
      a_12 = t;
    return(t);
  }
  t = fetch_1_0(s_0, t);
  t = not_null(a_12);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_12 = NULL;
  d_12 = t;
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t);
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_12 = ATgetArgument(t, 0);
              if((d_12 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_19), term_o_19), term_j_19), term_a_19), term_t_18), term_o_18), term_z_17), term_u_17), term_h_17), term_x_16), term_s_16), term_o_16), term_i_16), term_a_16), term_o_15), term_e_15), term_a_15), term_o_14), term_k_14), term_f_14), term_a_14), term_s_13), term_j_13), term_e_13), term_z_12), term_v_12), term_p_12), term_l_12);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, d_12);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_12 = NULL,t_12 = NULL;
  j_12 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_20 = ATgetArgument(t, 0);
            t_12 = ATgetArgument(t, 1);
            {
              ATerm b_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_19);
        {
          ATerm c_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_4 = NULL,b_5 = NULL,h_5 = NULL;
              t = t_12;
              {
                ATerm j_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              y_4 = t;
              t = term_k_20;
              b_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, y_4), term_o_20);
              h_5 = t;
              t = SSL_printnl(b_5, h_5);
              t = (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, y_4), term_o_20));
              LocalPopChoice(f_20);
            }
          else
            {
              t = c_20;
              t = j_12;
            }
        }
      }
    else
      {
        t = y_19;
        t = j_12;
      }
  }
  t = j_12;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,k_13 = NULL;
  k_13 = t;
  t = fork_0_0(t);
  i_13 = t;
  {
    ATerm p_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_13;
        t = l_81(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = p_20;
        t = SSL_waitpid(i_13);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_20 = ATgetArgument(t, 0);
            if(((ATgetType(u_20) != AT_INT) || (ATgetInt((ATermInt) u_20) != 0)))
              _fail(t);
            {
              ATerm v_20 = ATgetArgument(t, 1);
            }
            {
              ATerm w_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_13;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  q_13 = t;
  t = y_105(t);
  t = xtc_find_0_0(t);
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_13, q_13);
  {
    static ATerm x_0 (ATerm t);
    static ATerm x_0 (ATerm t)
    {
      ATerm r_13 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_13, q_13);
      t = d_7(p_13, q_13, t);
      t = term_x_20;
      r_13 = t;
      t = SSL_exit(r_13);
      return(t);
    }
    t = fork_and_wait_1_0(x_0, t);
  }
  t = q_13;
  return(t);
}
ATerm at_end_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  static ATerm x_14 (ATerm t);
  static ATerm x_14 (ATerm t)
  {
    ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
    w_14 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_14 = ATgetFirst((ATermList) t);
        v_14 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_5 = NULL,x_5 = NULL,e_1 = NULL;
          t = SSLgetAnnotations(w_14);
          o_5 = t;
          t = v_14;
          t = x_14(t);
          x_5 = t;
          t = (ATerm) ATinsert(CheckATermList(x_5), u_14);
          e_1 = t;
          t = SSLsetAnnotations(e_1, o_5);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_14;
        t = g_88(t);
      }
    return(t);
  }
  t = x_14(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
  x_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_13;
    }
  else
    {
      static ATerm y_0 (ATerm t);
      static ATerm y_0 (ATerm t)
      {
        t = not_null(z_13);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_13 = ATgetFirst((ATermList) t);
          if(((z_13 != NULL) && (z_13 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_13;
      t = at_end_1_0(y_0, t);
    }
  return(t);
}
static ATerm s_15 (ATerm h_15, ATerm t)
{
  ATerm i_15 = NULL;
  t = SSL_explode_term(h_15);
  if(match_cons(t, sym__2))
    {
      ATerm y_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_15;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_15 = NULL,n_15 = NULL,p_15 = NULL;
  p_15 = t;
  if(match_cons(t, sym__2))
    {
      k_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
      {
        ATerm z_20 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_1 (ATerm t);
            static ATerm a_1 (ATerm t)
            {
              t = n_15;
              return(t);
            }
            t = k_15;
            t = at_end_1_0(a_1, t);
            LocalPopChoice(b_21);
          }
        else
          {
            t = z_20;
            t = s_15(p_15, t);
          }
      }
    }
  else
    {
      t = s_15(p_15, t);
    }
  return(t);
}
static ATerm f_7 (ATerm n_98 (ATerm), ATerm x_35, ATerm v_35, ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,g_16 = NULL;
  w_15 = t;
  t = n_98(t);
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_15, x_35, v_35);
  t = c_8(t_15, x_35, v_35, t);
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_16 = NULL;
        t = term_h_21;
        j_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_15, term_h_21);
        t = b_8(t_15, j_16, t);
        {
          ATerm j_21 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_21;
            }
        }
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_15 = ATgetFirst((ATermList) t);
      v_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_15, term_h_21, (ATerm) ATinsert(CheckATermList(v_15), (ATerm) ATinsert(CheckATermList(u_15), x_35)));
  t = lookup_table_0_1(t_15, t);
  g_16 = t;
  t = term_h_21;
  b_16 = t;
  t = (ATerm) ATinsert(CheckATermList(v_15), (ATerm) ATinsert(CheckATermList(u_15), x_35));
  c_16 = t;
  t = g_16;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(b_16, c_16, d_16, t);
  t = w_15;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm l_16 = NULL;
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_17 = NULL,l_6 = NULL;
      a_17 = t;
      t = term_m_21;
      l_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_17, term_m_21);
      t = s_7(a_17, l_6, t);
      l_16 = t;
      t = SSL_mkstemp(l_16);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm b_17 = NULL;
        t = term_n_21;
        b_17 = t;
        t = SSL_perror(b_17);
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
  t = term_o_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,i_17 = NULL,j_17 = NULL;
  t = P__tmpdir_0_0(t);
  i_17 = t;
  t = term_p_21;
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_17, term_p_21);
  t = s_7(i_17, j_17, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_q_21;
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_17, term_q_21);
  t = f_7(b_1, e_17, f_17, t);
  t = SSL_close(d_17);
  t = e_17;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  l_17 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_17 = NULL,p_17 = NULL;
      t = l_17;
      t = xtc_new_file_0_0(t);
      o_17 = t;
      t = r_0(t);
      p_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_17, (ATerm) ATinsert(ATinsert(ATempty, o_17), term_b_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_17);
    }
  else
    {
      ATerm r_17 = NULL,s_17 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_17;
      t = xtc_new_file_0_0(t);
      r_17 = t;
      t = r_0(t);
      s_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_17), term_b_11), m_17), term_r_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_17);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm w_17 = NULL;
  w_17 = t;
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_18 = NULL,c_18 = NULL,f_18 = NULL;
        t = term_z_10;
        c_18 = t;
        t = term_n_11;
        f_18 = t;
        t = term_u_11;
        t = b_8(c_18, f_18, t);
        a_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_18, term_s_12);
        t = geq_0_0(t);
        t = w_17;
        t = r_102(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = w_17;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_21);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(d_1, t);
  return(t);
}
ATerm debug_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,q_18 = NULL,u_18 = NULL,z_18 = NULL;
  h_18 = t;
  t = w_82(t);
  q_18 = t;
  t = term_k_20;
  u_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_18), q_18);
  z_18 = t;
  t = SSL_printnl(u_18, z_18);
  t = h_18;
  return(t);
}
static ATerm g_7 (ATerm l_53, ATerm t)
{
  t = SSL_hashtable_keys(l_53);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  static ATerm f_1 (ATerm t);
  static ATerm f_1 (ATerm t)
  {
    ATerm f_19 = NULL,h_19 = NULL;
    f_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), f_19);
    t = b_8(not_null(b_19), f_19, t);
    h_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_19, h_19);
    return(t);
  }
  if(((b_19 != NULL) && (b_19 != t)))
    _fail(t);
  else
    b_19 = t;
  t = lookup_table_0_1(b_19, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(c_19, t);
  t = map_1_0(f_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_19 = NULL,v_19 = NULL,w_19 = NULL;
        t = term_z_10;
        v_19 = t;
        t = term_n_11;
        w_19 = t;
        t = term_u_11;
        t = b_8(v_19, w_19, t);
        t_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_19, term_w_18);
        t = geq_0_0(t);
        t = n_19;
        t = t_102(t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = n_19;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm e_20 = NULL;
  e_20 = t;
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
        t = term_z_10;
        m_20 = t;
        t = term_n_11;
        n_20 = t;
        t = term_u_11;
        t = b_8(m_20, n_20, t);
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_20, term_s_14);
        t = geq_0_0(t);
        t = e_20;
        t = s_102(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = e_20;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm a_21 = NULL;
  a_21 = t;
  {
    ATerm z_21 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
        t = term_z_10;
        d_21 = t;
        t = term_n_11;
        e_21 = t;
        t = term_u_11;
        t = b_8(d_21, e_21, t);
        c_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_21, term_x_12);
        t = geq_0_0(t);
        t = a_21;
        t = u_102(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = z_21;
        t = a_21;
      }
  }
  return(t);
}
static ATerm i_7 (ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm s_25, ATerm r_25, ATerm t)
{
  t = e_92(t);
  {
    static ATerm h_1 (ATerm t);
    static ATerm h_1 (ATerm t)
    {
      ATerm i_21 = NULL;
      i_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_25, i_21);
      t = d_92(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
  }
  t = r_25;
  return(t);
}
static ATerm j_7 (ATerm a_92 (ATerm), ATerm o_25, ATerm n_25, ATerm t)
{
  static ATerm h_22 (ATerm t);
  static ATerm h_22 (ATerm t)
  {
    ATerm a_22 = NULL,d_22 = NULL,e_22 = NULL;
    a_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_22 = ATgetFirst((ATermList) t);
            e_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_22;
              {
                static ATerm i_1 (ATerm t);
                static ATerm i_1 (ATerm t)
                {
                  t = n_25;
                  return(t);
                }
                t = i_7(a_92, i_1, d_22, e_22, t);
              }
              t = h_22(t);
              LocalPopChoice(f_22);
            }
          else
            {
              t = c_22;
              {
                ATerm t_6 = NULL,w_6 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(a_22);
                t_6 = t;
                t = e_22;
                t = h_22(t);
                w_6 = t;
                t = (ATerm) ATinsert(CheckATermList(w_6), d_22);
                m_1 = t;
                t = SSLsetAnnotations(m_1, t_6);
              }
            }
        }
      }
    return(t);
  }
  t = o_25;
  t = h_22(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm k_23 = NULL;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      if((k_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm j_49, ATerm k_49, ATerm l_49, ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,c_23 = NULL;
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_49, k_49);
  {
    ATerm g_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_22 = ATgetArgument(t, 0);
            ATerm k_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_49, k_49);
        t = b_8(j_49, k_49, t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = g_22;
        t = (ATerm) ATempty;
      }
  }
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_22, l_49);
  t = j_7(l_1, y_22, l_49, t);
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_49, k_49, x_22);
  t = lookup_table_0_1(j_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(k_49, x_22, c_23, t);
  t = w_22;
  return(t);
}
static ATerm l_7 (ATerm w_102 (ATerm), ATerm t_49, ATerm s_49, ATerm t)
{
  static ATerm n_1 (ATerm t);
  static ATerm n_1 (ATerm t)
  {
    ATerm l_23 = NULL,o_23 = NULL;
    if(match_cons(t, sym__2))
      {
        l_23 = ATgetArgument(t, 0);
        o_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, t_49, l_23, o_23);
    t = w_102(t);
    return(t);
  }
  t = s_49;
  t = map_1_0(n_1, t);
  return(t);
}
static ATerm t_7 (ATerm e_55, ATerm f_55, ATerm t)
{
  t = SSL_access(e_55, f_55);
  return(t);
}
static ATerm o_24 (ATerm d_24, ATerm t)
{
  t = SSL_fclose(d_24);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_24 = NULL,m_24 = NULL;
  m_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_24 = ATgetArgument(t, 0);
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_24);
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            t = o_24(m_24, t);
          }
      }
    }
  else
    {
      t = o_24(m_24, t);
    }
  return(t);
}
static ATerm m_7 (ATerm j_18, ATerm t)
{
  t = SSL_read_term_from_stream(j_18);
  return(t);
}
static ATerm s_7 (ATerm b_33, ATerm c_33, ATerm t)
{
  t = SSL_strcat(b_33, c_33);
  return(t);
}
static ATerm n_7 (ATerm q_55, ATerm r_55, ATerm t)
{
  ATerm t_24 = NULL;
  t = SSL_fopen(q_55, r_55);
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_24);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_24 = NULL;
  t = SSL_stdin_stream();
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_24);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_24 = NULL;
  t = SSL_stdout_stream();
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_24);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_24 = NULL;
  t = SSL_stderr_stream();
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_24);
  return(t);
}
static ATerm j_27 (ATerm i_25, ATerm t)
{
  ATerm j_25 = NULL;
  t = SSL_explode_term(i_25);
  if(match_cons(t, sym__2))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_22 = ATgetArgument(t, 1);
        if(((ATgetType(o_22) == AT_LIST) && !(ATisEmpty(o_22))))
          {
            j_25 = ATgetFirst((ATermList) o_22);
            {
              ATerm p_22 = (ATerm) ATgetNext((ATermList) o_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_25;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_25;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_25;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_25;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_27 (ATerm w_25, ATerm x_25, ATerm y_25, ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,f_26 = NULL,i_2 = NULL;
  t = SSLgetAnnotations(y_25);
  b_26 = t;
  t = w_25;
  if(match_cons(t, sym_Path_1))
    {
      f_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_26, x_25);
  i_2 = t;
  t = SSLsetAnnotations(i_2, b_26);
  if(match_cons(t, sym__2))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(z_25, a_26, t);
  return(t);
}
static ATerm l_27 (ATerm i_26, ATerm m_26, ATerm n_26, ATerm t)
{
  ATerm o_26 = NULL,r_26 = NULL,s_26 = NULL,b_27 = NULL,j_2 = NULL;
  t = SSLgetAnnotations(n_26);
  s_26 = t;
  t = SSL_is_string(i_26);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_27, m_26);
  j_2 = t;
  t = SSLsetAnnotations(j_2, s_26);
  if(match_cons(t, sym__2))
    {
      o_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(o_26, r_26, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm d_27 = NULL,g_27 = NULL,i_27 = NULL;
  d_27 = t;
  if(match_cons(t, sym__2))
    {
      g_27 = ATgetArgument(t, 0);
      i_27 = ATgetArgument(t, 1);
      {
        ATerm q_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_27(d_27, t);
            LocalPopChoice(r_22);
          }
        else
          {
            t = q_22;
            {
              ATerm s_22 = t;
              int t_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_27(g_27, i_27, d_27, t);
                  LocalPopChoice(t_22);
                }
              else
                {
                  t = s_22;
                  t = l_27(g_27, i_27, d_27, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_27(d_27, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,w_27 = NULL;
  w_27 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_27, term_z_22);
        t = o_7(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm r_8 = NULL,s_8 = NULL;
          t = term_a_23;
          s_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_23, w_27);
          t = s_7(s_8, w_27, t);
          r_8 = t;
          t = SSL_perror(r_8);
          _fail(t);
        }
      }
  }
  o_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(p_27, t);
  n_27 = t;
  t = o_27;
  t = fclose_0_0(t);
  t = n_27;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_b_23;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_d_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_28 = NULL,d_28 = NULL;
      c_28 = t;
      t = (ATerm) ATinsert(ATempty, term_g_23);
      d_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_28, (ATerm) ATinsert(ATempty, term_g_23));
      t = t_7(c_28, d_28, t);
      LocalPopChoice(f_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = e_23;
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_23 = t;
            if((PushChoice() == 0))
              {
                ATerm e_28 = NULL,f_28 = NULL;
                e_28 = t;
                t = (ATerm) ATinsert(ATempty, term_r_10);
                f_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_28, (ATerm) ATinsert(ATempty, term_r_10));
                t = t_7(e_28, f_28, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_23;
              }
            t = debug_1_0(o_1, t);
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            t = debug_1_0(p_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_m_23;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_n_23;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm i_29 = NULL,l_29 = NULL,n_29 = NULL;
  i_29 = t;
  t = term_k_20;
  l_29 = t;
  t = (ATerm) ATinsert(ATempty, term_p_23);
  n_29 = t;
  t = SSL_printnl(l_29, n_29);
  t = i_29;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  if(match_cons(t, sym__3))
    {
      r_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
      t_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_7(r_29, s_29, t_29, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,z_29 = NULL;
  v_29 = t;
  t = term_k_20;
  w_29 = t;
  t = (ATerm) ATinsert(ATempty, term_q_23);
  z_29 = t;
  t = SSL_printnl(w_29, z_29);
  t = v_29;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  t = term_k_20;
  c_30 = t;
  t = (ATerm) ATinsert(ATempty, term_p_23);
  d_30 = t;
  t = SSL_printnl(c_30, d_30);
  t = b_30;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm h_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,x_28 = NULL,a_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  h_28 = t;
  t = if_verbose5_1_0(q_1, t);
  {
    ATerm r_23 = t;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL,g_29 = NULL;
        t = term_s_23;
        f_29 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, h_28);
        g_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATmakeAppl(sym_Imported_1, h_28));
        t = b_8(f_29, g_29, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_23;
      }
  }
  l_28 = t;
  t = term_s_23;
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_23, term_t_23, (ATerm) ATinsert(ATempty, h_28));
  t = lookup_table_0_1(x_28, t);
  e_29 = t;
  t = term_t_23;
  a_29 = t;
  t = (ATerm) ATinsert(ATempty, h_28);
  c_29 = t;
  t = e_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(a_29, c_29, d_29, t);
  t = l_28;
  t = if_verbose4_1_0(u_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(x_1, t);
  k_28 = t;
  t = term_s_23;
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, k_28);
  t = l_7(y_1, s_28, k_28, t);
  t = if_verbose6_1_0(a_2, t);
  t = term_s_23;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_23, (ATerm)ATmakeAppl(sym_Imported_1, h_28), (ATerm) ATempty);
  t = lookup_table_0_1(m_28, t);
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, h_28);
  n_28 = t;
  t = (ATerm) ATempty;
  p_28 = t;
  t = r_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(n_28, p_28, q_28, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_23, (ATerm)ATmakeAppl(sym_Imported_1, h_28), (ATerm) ATempty);
  t = if_verbose4_1_0(b_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm c_31 = NULL,e_31 = NULL,f_31 = NULL;
  c_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_31;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_31 = ATgetFirst((ATermList) t);
          f_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_9 = NULL,j_9 = NULL,l_9 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(c_31);
            c_9 = t;
            t = e_31;
            t = h_96(t);
            j_9 = t;
            t = f_31;
            t = filter_1_0(h_96, t);
            l_9 = t;
            t = (ATerm) ATinsert(CheckATermList(l_9), j_9);
            m_2 = t;
            t = SSLsetAnnotations(m_2, c_9);
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            t = f_31;
            t = filter_1_0(h_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm t)
{
  static ATerm s_31 (ATerm t);
  static ATerm s_31 (ATerm t)
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_85(t);
        t = s_31(t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = u_85(t);
      }
    return(t);
  }
  t = s_31(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_31 = NULL,u_31 = NULL;
      t = term_z_10;
      t_31 = t;
      t = term_a_24;
      u_31 = t;
      t = term_b_24;
      t = b_8(t_31, u_31, t);
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      {
        ATerm c_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_31 = NULL;
            t = term_f_24;
            x_31 = t;
            t = SSL_getenv(x_31);
            LocalPopChoice(e_24);
          }
        else
          {
            t = c_24;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_g_24;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  t = term_s_23;
  f_32 = t;
  t = term_i_24;
  g_32 = t;
  t = term_j_24;
  t = b_8(f_32, g_32, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_24;
      }
  }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  t = if_verbose5_1_0(c_2, t);
  z_31 = t;
  {
    ATerm n_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_32 = NULL,b_32 = NULL;
        t = term_s_23;
        a_32 = t;
        t = term_t_23;
        b_32 = t;
        t = term_q_24;
        t = b_8(a_32, b_32, t);
        LocalPopChoice(p_24);
      }
    else
      {
        t = n_24;
        {
          ATerm c_32 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          c_32 = t;
          t = repeat_2_0(e_2, _id, t);
          t = c_32;
        }
      }
  }
  t = z_31;
  t = if_verbose5_1_0(g_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm m_33 (ATerm p_32, ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,w_32 = NULL;
  t = term_s_23;
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_32);
  w_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATmakeAppl(sym_Tool_1, p_32));
  t = b_8(t_32, w_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_24 = ATgetFirst((ATermList) t);
      if(match_cons(s_24, sym__2))
        {
          ATerm w_24 = ATgetArgument(s_24, 0);
          s_32 = ATgetArgument(s_24, 1);
        }
      else
        _fail(t);
      {
        ATerm v_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_32;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_s_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
      t = if_verbose5_1_0(k_2, t);
      t = xtc_load_0_0(t);
      z_32 = t;
      if(match_cons(t, sym__2))
        {
          x_32 = ATgetArgument(t, 0);
          y_32 = ATgetArgument(t, 1);
          {
            ATerm c_25 = t;
            int d_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
                t = term_s_23;
                f_33 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, x_32);
                g_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATmakeAppl(sym_Tool_1, x_32));
                t = b_8(f_33, g_33, t);
                {
                  static ATerm o_2 (ATerm t);
                  static ATerm o_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_32 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_33 != NULL) && (e_33 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_33 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(o_2, t);
                }
                t = not_null(e_33);
                LocalPopChoice(d_25);
              }
            else
              {
                t = c_25;
                t = m_33(z_32, t);
              }
          }
        }
      else
        {
          t = m_33(z_32, t);
        }
      t = if_verbose5_1_0(p_2, t);
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm l_33 = NULL,x_9 = NULL,y_9 = NULL;
        l_33 = t;
        t = term_k_20;
        x_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_25), l_33), term_e_25);
        y_9 = t;
        t = SSL_printnl(x_9, y_9);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_25), l_33), term_e_25);
        t = if_verbose5_1_0(r_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm xtc_sglr_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t)
{
  ATerm h_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_33 = NULL,a_34 = NULL;
      a_34 = t;
      if(match_cons(t, sym_FILE_1))
        {
          z_33 = ATgetArgument(t, 0);
          {
            ATerm f_10 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(a_34);
            f_10 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, z_33);
            d_3 = t;
            t = SSLsetAnnotations(d_3, f_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_34;
        }
      LocalPopChoice(k_25);
      {
        static ATerm a_3 (ATerm t);
        static ATerm a_3 (ATerm t)
        {
          ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
          t = term_q_21;
          t = d_106(t);
          t = xtc_find_0_0(t);
          d_34 = t;
          t = term_q_21;
          t = e_106(t);
          e_34 = t;
          t = term_q_21;
          t = pass_v_verbose_0_0(t);
          f_34 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(f_34), e_34), term_p_25), d_34), term_m_25), term_l_25);
          return(t);
        }
        t = xtc_transform_file_2_0(v_2, a_3, t);
      }
    }
  else
    {
      t = h_25;
      {
        static ATerm c_3 (ATerm t);
        static ATerm c_3 (ATerm t)
        {
          ATerm h_34 = NULL,i_34 = NULL,l_34 = NULL;
          t = term_q_21;
          t = d_106(t);
          t = xtc_find_0_0(t);
          h_34 = t;
          t = term_q_21;
          t = e_106(t);
          i_34 = t;
          t = term_q_21;
          t = pass_v_verbose_0_0(t);
          l_34 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(l_34), i_34), term_p_25), h_34), term_m_25), term_l_25);
          return(t);
        }
        t = xtc_transform_term_2_0(b_3, c_3, t);
      }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_q_25;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm xtc_parse_sdf2_0_1 (ATerm d_58, ATerm t)
{
  static ATerm h_3 (ATerm t);
  static ATerm h_3 (ATerm t)
  {
    t = d_58;
    return(t);
  }
  t = xtc_sglr_2_0(e_3, h_3, t);
  {
    ATerm v_25 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_35 = NULL,b_35 = NULL;
        b_35 = t;
        if(match_cons(t, sym_FILE_1))
          {
            a_35 = ATgetArgument(t, 0);
            {
              ATerm s_10 = NULL,l_3 = NULL;
              t = SSLgetAnnotations(b_35);
              s_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_35);
              l_3 = t;
              t = SSLsetAnnotations(l_3, s_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_35;
          }
        LocalPopChoice(c_26);
        t = xtc_transform_file_2_0(j_3, pass_verbose_0_0, t);
      }
    else
      {
        t = v_25;
        t = xtc_transform_term_2_0(r_3, pass_verbose_0_0, t);
      }
  }
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_35 = NULL,k_35 = NULL;
        k_35 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_35 = ATgetArgument(t, 0);
            {
              ATerm l_11 = NULL,c_6 = NULL;
              t = SSLgetAnnotations(k_35);
              l_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_35);
              c_6 = t;
              t = SSLsetAnnotations(c_6, l_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_35;
          }
        LocalPopChoice(e_26);
        t = xtc_transform_file_2_0(t_3, pass_verbose_0_0, t);
      }
    else
      {
        t = d_26;
        t = xtc_transform_term_2_0(x_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
  z_36 = t;
  if(match_cons(t, sym__2))
    {
      a_37 = ATgetArgument(t, 0);
      b_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_37;
  if(match_cons(t, sym_AST_0))
    {
      t = b_37;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = b_37;
          {
            ATerm g_26 = t;
            int h_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_12 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    q_12 = ATgetArgument(t, 0);
                    {
                      ATerm d_13 = NULL,g_6 = NULL;
                      t = SSLgetAnnotations(b_37);
                      d_13 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, q_12);
                      g_6 = t;
                      t = SSLsetAnnotations(g_6, d_13);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = b_37;
                  }
                LocalPopChoice(h_26);
                t = xtc_transform_file_2_0(a_4, pass_verbose_0_0, t);
              }
            else
              {
                t = g_26;
                t = xtc_transform_term_2_0(c_4, pass_verbose_0_0, t);
              }
          }
        }
      else
        {
          ATerm e_37 = NULL;
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = term_j_26;
          e_37 = t;
          t = b_37;
          t = xtc_parse_sdf2_0_1(e_37, t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_37 = NULL,j_37 = NULL;
      t = term_z_10;
      i_37 = t;
      t = term_p_26;
      j_37 = t;
      t = term_q_26;
      t = b_8(i_37, j_37, t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      t = term_t_26;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_u_26;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_u_26;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_v_26;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL;
  s_37 = t;
  t = get_input_type_0_0(t);
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_37, s_37);
  t = pre_process_sdf_0_0(t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_38 = NULL,d_38 = NULL;
        d_38 = t;
        if(match_cons(t, sym_FILE_1))
          {
            c_38 = ATgetArgument(t, 0);
            {
              ATerm m_13 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(d_38);
              m_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_38);
              i_6 = t;
              t = SSLsetAnnotations(i_6, m_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_38;
          }
        LocalPopChoice(x_26);
        t = xtc_transform_file_2_0(e_4, pass_verbose_0_0, t);
      }
    else
      {
        t = w_26;
        t = xtc_transform_term_2_0(f_4, pass_verbose_0_0, t);
      }
  }
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_38 = NULL,w_13 = NULL,b_14 = NULL;
        k_38 = t;
        t = term_z_10;
        w_13 = t;
        t = term_a_27;
        b_14 = t;
        t = term_c_27;
        t = b_8(w_13, b_14, t);
        if(!(match_cons(t, sym_AST_0)))
          _fail(t);
        t = k_38;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        {
          ATerm e_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_38 = NULL,w_38 = NULL;
              w_38 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  v_38 = ATgetArgument(t, 0);
                  {
                    ATerm h_14 = NULL,k_6 = NULL;
                    t = SSLgetAnnotations(w_38);
                    h_14 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, v_38);
                    k_6 = t;
                    t = SSLsetAnnotations(k_6, h_14);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = w_38;
                }
              LocalPopChoice(f_27);
              t = xtc_transform_file_2_0(g_4, pass_verbose_0_0, t);
            }
          else
            {
              t = e_27;
              t = xtc_transform_term_2_0(h_4, pass_verbose_0_0, t);
            }
        }
      }
  }
  return(t);
}
static ATerm b_8 (ATerm f_50, ATerm g_50, ATerm t)
{
  ATerm b_39 = NULL;
  t = lookup_table_0_1(f_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(g_50, b_39, t);
  return(t);
}
static ATerm v_7 (ATerm r_48, ATerm s_48, ATerm t)
{
  ATerm h_39 = NULL,k_39 = NULL;
  k_39 = t;
  {
    ATerm h_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
        t = b_8(r_48, s_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_27 = ATgetFirst((ATermList) t);
            h_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_27);
        {
          ATerm n_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, r_48, s_48, h_39);
          t = lookup_table_0_1(r_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_8(s_48, h_39, n_39, t);
          t = (ATerm) ATmakeAppl(sym__3, r_48, s_48, h_39);
        }
      }
    else
      {
        t = h_27;
        {
          ATerm r_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
          t = lookup_table_0_1(r_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_7(s_48, r_39, t);
          t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
        }
      }
  }
  t = k_39;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  ATerm u_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,e_40 = NULL,f_40 = NULL;
  a_40 = t;
  t = k_98(t);
  z_39 = t;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_40 = NULL;
        t = term_h_21;
        g_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_39, term_h_21);
        t = b_8(z_39, g_40, t);
        {
          ATerm t_27 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_27;
            }
        }
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_39 = ATgetFirst((ATermList) t);
      u_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_39, term_h_21, u_39);
  t = lookup_table_0_1(z_39, t);
  f_40 = t;
  t = term_h_21;
  b_40 = t;
  t = f_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(b_40, u_39, e_40, t);
  t = y_39;
  {
    static ATerm k_4 (ATerm t);
    static ATerm k_4 (ATerm t)
    {
      ATerm j_40 = NULL;
      j_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_39, j_40);
      t = v_7(z_39, j_40, t);
      return(t);
    }
    t = map_1_0(k_4, t);
  }
  t = a_40;
  return(t);
}
ATerm restore_always_2_0 (ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_102(t);
      t = e_102(t);
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      t = e_102(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,p_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
  n_40 = t;
  t = j_98(t);
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_40, term_h_21);
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_40 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_27 = ATgetArgument(t, 0);
            ATerm a_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_21;
        z_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_40, term_h_21);
        t = b_8(m_40, z_40, t);
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = (ATerm) ATempty;
      }
  }
  p_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_40, term_h_21, (ATerm) ATinsert(CheckATermList(p_40), (ATerm) ATempty));
  t = lookup_table_0_1(m_40, t);
  v_40 = t;
  t = term_h_21;
  s_40 = t;
  t = (ATerm) ATinsert(CheckATermList(p_40), (ATerm) ATempty);
  t_40 = t;
  t = v_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(s_40, t_40, u_40, t);
  t = n_40;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm l_41 = NULL;
  l_41 = t;
  {
    ATerm b_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(l_41);
        LocalPopChoice(g_28);
      }
    else
      {
        t = b_28;
        t = l_41;
      }
  }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm c_41 = NULL;
  static ATerm n_4 (ATerm t);
  static ATerm n_4 (ATerm t)
  {
    ATerm d_41 = NULL;
    d_41 = t;
    {
      ATerm i_28 = t;
      int j_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_41 = NULL,g_41 = NULL;
          t = term_o_21;
          f_41 = t;
          t = term_h_21;
          g_41 = t;
          t = term_o_28;
          t = b_8(f_41, g_41, t);
          LocalPopChoice(j_28);
        }
      else
        {
          t = i_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_41 != NULL) && (c_41 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_41 = ATgetFirst((ATermList) t);
        {
          ATerm t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = c_41;
    t = map_1_0(o_4, t);
    t = d_41;
    t = end_scope_1_0(p_4, t);
    return(t);
  }
  t = begin_scope_1_0(l_4, t);
  t = restore_always_2_0(h_105, n_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  o_41 = t;
  t = term_q_21;
  t = whoami_0_0(t);
  p_41 = t;
  t = term_k_20;
  r_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_28), p_41), term_u_28);
  s_41 = t;
  t = SSL_printnl(r_41, s_41);
  t = term_v_11;
  q_41 = t;
  t = SSL_exit(q_41);
  t = o_41;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm u_41 = NULL;
  u_41 = t;
  if(match_string(t, "-k"))
    {
      t = u_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_41;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  t = SSL_string_to_int(v_41);
  w_41 = t;
  t = term_w_28;
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_28, w_41);
  t = e_8(x_41, w_41, t);
  t = v_41;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, u_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm z_41 = NULL;
  z_41 = t;
  if(match_string(t, "-S"))
    {
      t = z_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_41;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL;
  t = term_n_11;
  a_42 = t;
  t = term_z_28;
  b_42 = t;
  t = term_b_29;
  t = e_8(a_42, b_42, t);
  t = term_h_29;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_j_29;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
  c_42 = t;
  t = SSL_string_to_int(c_42);
  d_42 = t;
  t = term_n_11;
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, d_42);
  t = e_8(e_42, d_42, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_42);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_k_29;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL;
  t = term_p_25;
  f_42 = t;
  t = term_q_21;
  g_42 = t;
  t = term_m_29;
  t = e_8(f_42, g_42, t);
  t = term_o_29;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_4, w_4, x_4, t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = q_29;
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_4, a_5, c_5, t);
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            t = Option_3_0(d_5, e_5, i_5, t);
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm i_42 = NULL;
  i_42 = t;
  if(match_string(t, "-o"))
    {
      t = i_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_42;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  j_42 = t;
  t = term_b_11;
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_11, j_42);
  t = e_8(k_42, j_42, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_42);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, k_5, n_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
      t = term_q_21;
      t = o_0(t);
      s_42 = t;
      t = term_e_30;
      t_42 = t;
      t = term_f_30;
      u_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_30, term_f_30, s_42);
      t = c_8(t_42, u_42, s_42, t);
      _fail(t);
    }
  else
    {
      ATerm y_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_42 = ATgetFirst((ATermList) t);
          p_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_42 = ATgetFirst((ATermList) t);
          r_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_42;
      t = l_0(t);
      t = q_42;
      t = m_0(t);
      y_42 = t;
      t = (ATerm) ATinsert(CheckATermList(r_42), y_42);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm a_43 = NULL;
  a_43 = t;
  if(match_string(t, "-i"))
    {
      t = a_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_43;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL;
  b_43 = t;
  t = term_r_21;
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_21, b_43);
  t = e_8(c_43, b_43, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_43);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, w_5, y_5, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  d_43 = t;
  t = term_p_26;
  e_43 = t;
  t = term_h_30;
  f_43 = t;
  t = term_i_30;
  t = e_8(e_43, f_43, t);
  t = d_43;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_j_30;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  t = term_p_26;
  h_43 = t;
  t = term_k_30;
  i_43 = t;
  t = term_l_30;
  t = e_8(h_43, i_43, t);
  t = g_43;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_m_30;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL;
  j_43 = t;
  t = term_a_27;
  k_43 = t;
  t = term_k_30;
  l_43 = t;
  t = term_n_30;
  t = e_8(k_43, l_43, t);
  t = j_43;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_o_30;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL;
  t = term_p_30;
  m_43 = t;
  t = term_q_21;
  n_43 = t;
  t = term_q_30;
  t = e_8(m_43, n_43, t);
  t = term_r_30;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_s_30;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_5, a_6, b_6, t);
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
            t = Option_3_0(d_6, e_6, f_6, t);
            LocalPopChoice(w_30);
          }
        else
          {
            t = v_30;
            {
              ATerm x_30 = t;
              int y_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_6, j_6, m_6, t);
                  LocalPopChoice(y_30);
                }
              else
                {
                  t = x_30;
                  {
                    ATerm z_30 = t;
                    int a_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = input_option_0_0(t);
                        LocalPopChoice(a_31);
                      }
                    else
                      {
                        t = z_30;
                        {
                          ATerm b_31 = t;
                          int d_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = output_option_0_0(t);
                              LocalPopChoice(d_31);
                            }
                          else
                            {
                              t = b_31;
                              {
                                ATerm g_31 = t;
                                int h_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(n_6, o_6, p_6, t);
                                    LocalPopChoice(h_31);
                                  }
                                else
                                  {
                                    t = g_31;
                                    {
                                      ATerm i_31 = t;
                                      int j_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = verbose_option_0_0(t);
                                          LocalPopChoice(j_31);
                                        }
                                      else
                                        {
                                          t = i_31;
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
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_21;
  t = whoami_0_0(t);
  o_43 = t;
  t = term_k_20;
  q_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_31), o_43);
  r_43 = t;
  t = SSL_printnl(q_43, r_43);
  t = term_v_11;
  p_43 = t;
  t = SSL_exit(p_43);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL;
  t = term_z_10;
  s_43 = t;
  t = term_l_31;
  t_43 = t;
  t = term_m_31;
  t = b_8(s_43, t_43, t);
  return(t);
}
static ATerm w_7 (ATerm j_34, ATerm k_34, ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_34, k_34);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      t = SSL_addr(j_34, k_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_43;
      t = d_95(t);
    }
  else
    {
      ATerm a_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_43 = ATgetFirst((ATermList) t);
          x_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_43;
      t = foldr_2_0(d_95, e_95, t);
      a_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_43, a_44);
      t = e_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_z_28;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(x_15, y_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_44 = NULL,g_15 = NULL,l_15 = NULL;
  t = times_0_0(t);
  l_15 = t;
  t = SSL_explode_term(l_15);
  if(match_cons(t, sym__2))
    {
      ATerm p_31 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15;
  t = foldr_2_0(q_6, s_6, t);
  d_44 = t;
  t = SSL_TicksToSeconds(d_44);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  o_44 = t;
  if(match_cons(t, sym__2))
    {
      p_44 = ATgetArgument(t, 0);
      q_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_44;
        if((p_44 != t))
          {
            _fail(t);
          }
        t = o_44;
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        t = (ATerm) ATmakeAppl(sym__2, p_44, q_44);
        {
          ATerm v_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_44, q_44);
              LocalPopChoice(w_31);
            }
          else
            {
              t = v_31;
              t = SSL_gtr(p_44, q_44);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_44, q_44);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm u_44 = NULL;
  u_44 = t;
  {
    ATerm y_31 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
        t = term_z_10;
        x_44 = t;
        t = term_n_11;
        y_44 = t;
        t = term_u_11;
        t = b_8(x_44, y_44, t);
        w_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_44, term_v_11);
        t = geq_0_0(t);
        t = u_44;
        t = p_102(t);
        LocalPopChoice(d_32);
      }
    else
      {
        t = y_31;
        t = u_44;
      }
  }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,d_45 = NULL,e_45 = NULL;
  t = run_time_0_0(t);
  a_45 = t;
  t = term_q_21;
  t = whoami_0_0(t);
  b_45 = t;
  t = term_k_20;
  d_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_32), a_45), term_b_12), b_45);
  e_45 = t;
  t = SSL_printnl(d_45, e_45);
  t = (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_32), a_45), term_b_12), b_45));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_28;
  f_45 = t;
  t = SSL_exit(f_45);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL;
  q_45 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_45;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_45 = ATgetArgument(t, 0);
          {
            ATerm t_16 = NULL,y_6 = NULL;
            t = SSLgetAnnotations(q_45);
            t_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_45);
            y_6 = t;
            t = SSLsetAnnotations(y_6, t_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_45;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_45 = NULL,j_45 = NULL;
      t = term_z_10;
      i_45 = t;
      t = term_j_32;
      j_45 = t;
      t = term_k_32;
      t = b_8(i_45, j_45, t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      t = fetch_1_0(v_6, t);
    }
  t = f_107(t);
  return(t);
}
static ATerm f_8 (ATerm e_53, ATerm f_53, ATerm g_53, ATerm t)
{
  ATerm s_45 = NULL;
  t = SSL_hashtable_put(g_53, e_53, f_53);
  s_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_45);
  return(t);
}
static ATerm g_8 (ATerm h_53, ATerm i_53, ATerm t)
{
  t = SSL_hashtable_get(i_53, h_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_49, ATerm t)
{
  ATerm b_46 = NULL;
  t = table_hashtable_0_0(t);
  b_46 = t;
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_16 = NULL;
        t = b_46;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_8(y_49, z_16, t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        {
          ATerm t_17 = NULL;
          t = y_49;
          t = table_create_0_0(t);
          t = b_46;
          if(match_cons(t, sym_Hashtable_1))
            {
              t_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_8(y_49, t_17, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm e_46 = NULL;
  t = SSL_hashtable_create(m_53, n_53);
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_46);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,j_46 = NULL,k_46 = NULL;
  f_46 = t;
  t = term_n_32;
  j_46 = t;
  t = term_o_32;
  k_46 = t;
  t = f_46;
  t = new_hashtable_0_2(j_46, k_46, t);
  g_46 = t;
  t = f_46;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(f_46, g_46, h_46, t);
  t = f_46;
  return(t);
}
static ATerm y_7 (ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm l_46 = NULL;
  t = SSL_hashtable_remove(k_53, j_53);
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_46);
  return(t);
}
static ATerm z_7 (ATerm o_53, ATerm t)
{
  ATerm m_46 = NULL;
  t = SSL_hashtable_destroy(o_53);
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_46);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_46 = NULL;
  t = SSL_table_hashtable();
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_46);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
  o_46 = t;
  t = table_hashtable_0_0(t);
  p_46 = t;
  t = lookup_table_0_1(o_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(r_46, t);
  t = p_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(o_46, q_46, t);
  t = o_46;
  return(t);
}
ATerm map_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  static ATerm g_47 (ATerm t);
  static ATerm g_47 (ATerm t)
  {
    ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
    d_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_47;
      }
    else
      {
        ATerm b_18 = NULL,l_18 = NULL,m_18 = NULL,t_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_47 = ATgetFirst((ATermList) t);
            f_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_47);
        b_18 = t;
        t = e_47;
        t = p_87(t);
        l_18 = t;
        t = f_47;
        t = g_47(t);
        m_18 = t;
        t = (ATerm) ATinsert(CheckATermList(m_18), l_18);
        t_8 = t;
        t = SSLsetAnnotations(t_8, b_18);
      }
    return(t);
  }
  t = g_47(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_47 = ATgetFirst((ATermList) t);
      k_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_47 = NULL,p_47 = NULL;
        static ATerm x_6 (ATerm t);
        static ATerm x_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_47)), not_null(p_47));
          return(t);
        }
        t = k_47;
        t = j_0(t);
        if(((o_47 != NULL) && (o_47 != t)))
          _fail(t);
        else
          o_47 = t;
        t = j_47;
        t = h_0(t);
        if(((p_47 != NULL) && (p_47 != t)))
          _fail(t);
        else
          p_47 = t;
        t = k_47;
        t = reverse_acc_2_0(h_0, x_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_21;
      t = j_0(t);
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,v_8 = NULL;
  x_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_47);
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_47);
  v_8 = t;
  t = SSLsetAnnotations(v_8, v_47);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_47), term_q_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL;
  ATerm r_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_47 = NULL,u_47 = NULL;
      t = term_z_10;
      t_47 = t;
      t = term_l_31;
      u_47 = t;
      t = term_m_31;
      t = b_8(t_47, u_47, t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = r_32;
      t = fetch_1_0(z_6, t);
    }
  t = term_v_32;
  t = echo_0_0(t);
  t = term_e_30;
  r_47 = t;
  t = term_f_30;
  s_47 = t;
  t = term_a_33;
  t = b_8(r_47, s_47, t);
  t = reverse_acc_2_0(_id, p_7, t);
  t = map_1_0(q_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  static ATerm h_49 (ATerm t);
  static ATerm h_49 (ATerm t)
  {
    ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
    e_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_49 = ATgetFirst((ATermList) t);
        g_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_33 = t;
      int h_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_18 = NULL,d_19 = NULL,i_9 = NULL;
          t = SSLgetAnnotations(e_49);
          x_18 = t;
          t = f_49;
          t = z_87(t);
          d_19 = t;
          t = (ATerm) ATinsert(CheckATermList(g_49), d_19);
          i_9 = t;
          t = SSLsetAnnotations(i_9, x_18);
          LocalPopChoice(h_33);
        }
      else
        {
          t = d_33;
          {
            ATerm p_19 = NULL,s_19 = NULL,x_10 = NULL;
            t = SSLgetAnnotations(e_49);
            p_19 = t;
            t = g_49;
            t = h_49(t);
            s_19 = t;
            t = (ATerm) ATinsert(CheckATermList(s_19), f_49);
            x_10 = t;
            t = SSLsetAnnotations(x_10, p_19);
          }
        }
    }
    return(t);
  }
  t = h_49(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,w_49 = NULL;
  q_49 = t;
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_33 = ATgetFirst((ATermList) t);
                ATerm n_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_49;
          }
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        t = (ATerm) ATinsert(ATempty, q_49);
      }
  }
  r_49 = t;
  t = term_e_11;
  w_49 = t;
  t = SSL_printnl(w_49, r_49);
  t = q_49;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_50 = NULL,h_50 = NULL;
  t = term_z_10;
  e_50 = t;
  t = term_l_31;
  h_50 = t;
  t = term_m_31;
  t = b_8(e_50, h_50, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL;
  t = term_o_33;
  i_50 = t;
  t = term_q_21;
  j_50 = t;
  t = term_p_33;
  t = e_8(i_50, j_50, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_q_33;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  t = term_o_33;
  m_50 = t;
  t = term_q_21;
  n_50 = t;
  t = term_p_33;
  t = e_8(m_50, n_50, t);
  t = term_u_21;
  k_50 = t;
  t = term_q_21;
  l_50 = t;
  t = term_r_33;
  t = e_8(k_50, l_50, t);
  t = term_s_33;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_t_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_7, d_8, j_8, t);
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      t = Option_3_0(k_8, m_8, n_8, t);
    }
  return(t);
}
static ATerm e_8 (ATerm s_53, ATerm t_53, ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  t = term_z_10;
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_10, s_53, t_53);
  t = lookup_table_0_1(o_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(s_53, t_53, p_50, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_10, s_53, t_53);
  return(t);
}
static ATerm c_8 (ATerm m_48, ATerm n_48, ATerm l_48, ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_33 = ATgetArgument(t, 0);
            ATerm b_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
        t = b_8(m_48, n_48, t);
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = (ATerm) ATempty;
      }
  }
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_48, n_48, (ATerm) ATinsert(CheckATermList(t_50), l_48));
  t = lookup_table_0_1(m_48, t);
  w_50 = t;
  t = (ATerm) ATinsert(CheckATermList(t_50), l_48);
  u_50 = t;
  t = w_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(n_48, u_50, v_50, t);
  t = s_50;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
      t = term_q_21;
      t = g_0(t);
      e_51 = t;
      t = term_e_30;
      f_51 = t;
      t = term_f_30;
      g_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_30, term_f_30, e_51);
      t = c_8(f_51, g_51, e_51, t);
      _fail(t);
    }
  else
    {
      ATerm j_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_51 = ATgetFirst((ATermList) t);
          d_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_51;
      t = d_0(t);
      t = term_q_21;
      t = f_0(t);
      j_51 = t;
      t = (ATerm) ATinsert(CheckATermList(d_51), j_51);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,a_11 = NULL;
  p_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_51 = ATgetFirst((ATermList) t);
      m_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_51);
  k_51 = t;
  t = l_51;
  t = e_74(t);
  n_51 = t;
  t = m_51;
  t = f_74(t);
  o_51 = t;
  t = (ATerm) ATinsert(CheckATermList(o_51), n_51);
  a_11 = t;
  t = SSLsetAnnotations(a_11, k_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,z_51 = NULL,a_52 = NULL,d_11 = NULL;
  u_51 = t;
  {
    ATerm c_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_34;
        t = d_109(t);
        LocalPopChoice(g_34);
      }
    else
      {
        t = c_34;
      }
  }
  t = u_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_51 = ATgetFirst((ATermList) t);
      x_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_51);
  v_51 = t;
  t = term_l_31;
  a_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_31, w_51);
  t = e_8(a_52, w_51, t);
  t = x_51;
  {
    static ATerm k_52 (ATerm t);
    static ATerm k_52 (ATerm t)
    {
      ATerm n_34 = t;
      int o_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_52 = NULL;
              d_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_52;
              LocalPopChoice(s_34);
            }
          else
            {
              t = r_34;
              t = d_109(t);
              t = Cons_2_0(_id, k_52, t);
            }
          LocalPopChoice(o_34);
        }
      else
        {
          t = n_34;
          {
            ATerm g_52 = NULL,h_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_52 = ATgetFirst((ATermList) t);
                h_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_52), (ATerm) ATmakeAppl(sym_Undefined_1, g_52));
          }
        }
      return(t);
    }
    t = k_52(t);
  }
  z_51 = t;
  t = (ATerm) ATinsert(CheckATermList(z_51), (ATerm) ATmakeAppl(sym_Program_1, w_51));
  d_11 = t;
  t = SSLsetAnnotations(d_11, v_51);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm x_52 = NULL;
  x_52 = t;
  if(match_string(t, "--help"))
    {
      t = x_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_52;
        }
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL;
  t = term_j_32;
  y_52 = t;
  t = term_q_21;
  z_52 = t;
  t = term_t_34;
  t = e_8(y_52, z_52, t);
  t = term_u_34;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_v_34;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  r_52 = t;
  t = term_e_30;
  s_52 = t;
  t = term_w_34;
  t = lookup_table_0_1(s_52, t);
  w_52 = t;
  t = term_f_30;
  t_52 = t;
  t = (ATerm) ATempty;
  u_52 = t;
  t = w_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(t_52, u_52, v_52, t);
  t = r_52;
  {
    static ATerm o_8 (ATerm t);
    static ATerm o_8 (ATerm t)
    {
      ATerm x_34 = t;
      int y_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_109(t);
          LocalPopChoice(y_34);
        }
      else
        {
          t = x_34;
          {
            ATerm z_34 = t;
            int c_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_8, q_8, u_8, t);
                LocalPopChoice(c_35);
              }
            else
              {
                t = z_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_8, t);
  }
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_53 = NULL;
        x_53 = t;
        {
          ATerm f_35 = t;
          int g_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_20 = NULL;
              t = x_53;
              {
                ATerm h_35 = t;
                int i_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_20 = NULL,i_20 = NULL;
                    t = term_z_10;
                    g_20 = t;
                    t = term_j_32;
                    i_20 = t;
                    t = term_k_32;
                    t = b_8(g_20, i_20, t);
                    LocalPopChoice(i_35);
                  }
                else
                  {
                    t = h_35;
                    t = fetch_1_0(w_8, t);
                  }
              }
              t = x_53;
              t = default_system_usage_0_0(t);
              t = term_z_28;
              d_20 = t;
              t = SSL_exit(d_20);
              LocalPopChoice(g_35);
            }
          else
            {
              t = f_35;
              {
                ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
                t = term_z_10;
                r_20 = t;
                t = term_o_33;
                s_20 = t;
                t = term_l_35;
                t = b_8(r_20, s_20, t);
                t = x_53;
                t = default_system_about_0_0(t);
                t = term_z_28;
                q_20 = t;
                t = SSL_exit(q_20);
              }
            }
        }
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        {
          ATerm m_35 = t;
          int n_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
              static ATerm x_8 (ATerm t);
              static ATerm x_8 (ATerm t)
              {
                ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,g_11 = NULL;
                d_54 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_54);
                b_54 = t;
                t = c_54;
                if(((p_52 != NULL) && (p_52 != t)))
                  _fail(t);
                else
                  p_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_54);
                g_11 = t;
                t = SSLsetAnnotations(g_11, b_54);
                return(t);
              }
              t = fetch_1_0(x_8, t);
              t = term_k_20;
              z_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_52)), term_o_35);
              a_54 = t;
              t = SSL_printnl(z_53, a_54);
              t = (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_52)), term_o_35));
              t = default_system_usage_0_0(t);
              t = term_v_11;
              y_53 = t;
              t = SSL_exit(y_53);
              LocalPopChoice(n_35);
            }
          else
            {
              t = m_35;
            }
        }
      }
  }
  q_52 = t;
  t = term_e_30;
  t = table_destroy_0_0(t);
  t = q_52;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
  t = parse_options_1_0(h_107, t);
  i_54 = t;
  t = term_p_35;
  t = table_create_0_0(t);
  t = term_p_35;
  j_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_35, term_q_35, i_54);
  t = lookup_table_0_1(j_54, t);
  m_54 = t;
  t = term_q_35;
  k_54 = t;
  t = m_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(k_54, i_54, l_54, t);
  t = i_54;
  t = j_107(t);
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_107, t);
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = xtc_temp_files_1_0(z_8, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm w_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL;
      t = term_z_10;
      r_54 = t;
      t = term_r_21;
      s_54 = t;
      t = term_z_35;
      t = b_8(r_54, s_54, t);
      q_54 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_54);
      LocalPopChoice(y_35);
    }
  else
    {
      t = w_35;
      t = term_i_11;
    }
  t = ppgen_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(ppgen_options_0_0, default_usage_0_0, _id, y_8, t);
  return(t);
}
