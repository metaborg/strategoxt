#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Hashtable_1;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Path_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
static void init_module_constructors (void)
{
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
ATerm term_t_36;
ATerm term_o_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_y_34;
ATerm term_u_34;
ATerm term_s_34;
ATerm term_m_34;
ATerm term_c_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_v_32;
ATerm term_o_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_m_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_p_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_k_27;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_b_26;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_j_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_k_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_t_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_n_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_e_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_q_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("output", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_j_11, term_p_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_u_13, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_g_14, term_h_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_m_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_t_14, term_u_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_j_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_y_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_d_16, term_e_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_a_17, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_g_17, term_h_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_r_17, term_s_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_b_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_h_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_m_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_s_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_z_18, term_a_19);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_d_19, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_h_19, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_p_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_i_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_o_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_p_22);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_n_26, term_b_26);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_w_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_27);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_g_28, term_o_12);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_i_29);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt          Produce verbatim-like output with alltt environment", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_l_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv         Produce fully formatted LaTeX output (default)", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-t|--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-w|--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_h_30);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_f_31);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_p_28, term_t_28);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_w_31, term_o_12);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__2, term_z_31, term_o_12);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__2, term_f_31, term_o_12);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym__3, term_p_28, term_t_28, (ATerm) ATempty);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_w_31);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_h_36, term_o_12);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_p_26);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm m_7 (ATerm b_17, ATerm n_207, ATerm t);
ATerm at_suffix_1_0 (ATerm l_88 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm d_88 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm p_100 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm p_7 (ATerm g_50, ATerm f_50, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm v_6 (ATerm f_26, ATerm g_26, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm create_table_file_0_0 (ATerm t);
ATerm create_abox2latex_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm w_6 (ATerm j_54, ATerm k_54, ATerm t);
static ATerm x_6 (ATerm e_103 (ATerm), ATerm g_574, ATerm t_54, ATerm t);
static ATerm s_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm t);
static ATerm y_6 (ATerm i_53, ATerm j_53, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm c_88 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm h_102 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm c_103 (ATerm), ATerm t);
static ATerm a_7 (ATerm q_33, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_113 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_113 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_113 (ATerm), ATerm t);
static ATerm c_7 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm m_22, ATerm l_22, ATerm t);
static ATerm d_7 (ATerm b_92 (ATerm), ATerm i_22, ATerm h_22, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_7 (ATerm o_29, ATerm p_29, ATerm q_29, ATerm t);
static ATerm f_7 (ATerm y_96 (ATerm), ATerm y_29, ATerm x_29, ATerm t);
static ATerm o_7 (ATerm n_14, ATerm o_14, ATerm t);
static ATerm q_21 (ATerm c_21, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_7 (ATerm p_54, ATerm t);
static ATerm h_7 (ATerm z_14, ATerm a_15, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_23 (ATerm f_22, ATerm t);
static ATerm a_24 (ATerm o_22, ATerm q_22, ATerm r_22, ATerm t);
static ATerm b_24 (ATerm a_23, ATerm b_23, ATerm d_23, ATerm t);
static ATerm i_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_99 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_30 (ATerm n_28, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm s_115 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_32 (ATerm k_32, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_7 (ATerm q_96 (ATerm), ATerm n_27, ATerm l_27, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm n_7 (ATerm s_49, ATerm t_49, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm w_7 (ATerm k_30, ATerm l_30, ATerm t);
static ATerm q_7 (ATerm w_28, ATerm x_28, ATerm t);
ATerm end_scope_1_0 (ATerm n_96 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_96 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm b_115 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_7 (ATerm f_62, ATerm g_62, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm x_7 (ATerm r_28, ATerm s_28, ATerm q_28, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm abox2latex_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_7 (ATerm z_25, ATerm a_26, ATerm t);
ATerm foldr_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_113 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm need_help_1_0 (ATerm y_80 (ATerm), ATerm t);
static ATerm a_8 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t);
static ATerm b_8 (ATerm m_33, ATerm n_33, ATerm t);
ATerm lookup_table_0_1 (ATerm d_30, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_33, ATerm s_33, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_7 (ATerm o_33, ATerm p_33, ATerm t);
static ATerm u_7 (ATerm t_33, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_88 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_105 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm parse_options_1_0 (ATerm k_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_2 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = l_1;
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
        t = (ATerm) ATmakeAppl(sym__2, m_1, e_0);
        t = p_7(m_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
        LocalPopChoice(n_8);
      }
    else
      {
        t = u_2;
        {
          ATerm o_8 = t;
          int q_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL;
              t = l_1;
              t = p_0(t);
              w_0 = t;
              {
                ATerm r_8 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_0 = NULL;
                    y_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = y_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = y_0;
                          }
                        else
                          {
                            t = y_0;
                            if((m_1 != t))
                              {
                                _fail(t);
                              }
                            t = y_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_1, w_0);
              t = p_7(m_1, w_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
              LocalPopChoice(q_8);
            }
          else
            {
              t = o_8;
              t = l_1;
              t = p_0(t);
              if((m_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
            }
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_2 = ATgetFirst((ATermList) t);
      b_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_2;
    }
  else
    {
      t = b_2;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm m_7 (ATerm b_17, ATerm n_207, ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    if((b_17 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = n_207;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  static ATerm m_3 (ATerm t);
  static ATerm m_3 (ATerm t)
  {
    ATerm s_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_88(t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = s_8;
        {
          ATerm h_3 = NULL,i_3 = NULL,l_3 = NULL,o_1 = NULL,s_1 = NULL,v_0 = NULL;
          h_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_3 = ATgetFirst((ATermList) t);
              l_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_3);
          o_1 = t;
          t = l_3;
          t = m_3(t);
          s_1 = t;
          t = (ATerm) ATinsert(CheckATermList(s_1), i_3);
          v_0 = t;
          t = SSLsetAnnotations(v_0, o_1);
        }
      }
    return(t);
  }
  t = m_3(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm s_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,z_3 = NULL,c_4 = NULL,d_4 = NULL,f_4 = NULL,g_4 = NULL,b_1 = NULL,a_1 = NULL;
    g_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_3 = ATgetFirst((ATermList) t);
        c_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_4);
    x_3 = t;
    t = z_3;
    t = d_88(t);
    d_4 = t;
    t = (ATerm) ATinsert(CheckATermList(c_4), d_4);
    a_1 = t;
    t = SSLsetAnnotations(a_1, x_3);
    f_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_3 = ATgetFirst((ATermList) t);
        v_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_4);
    s_3 = t;
    t = v_3;
    if(((q_3 != NULL) && (q_3 != t)))
      _fail(t);
    else
      q_3 = t;
    t = (ATerm) ATinsert(CheckATermList(v_3), u_3);
    b_1 = t;
    t = SSLsetAnnotations(b_1, s_3);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, not_null(q_3));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,x_4 = NULL;
  ATerm x_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(p_100, t);
      LocalPopChoice(z_8);
    }
  else
    {
      t = x_8;
      {
        ATerm n_4 = NULL;
        n_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_9 = ATgetFirst((ATermList) t);
              ATerm c_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_4;
          t = list_tokenize_1_0(p_100, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm d_9 = ATgetFirst((ATermList) t);
          ATerm e_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, r_4);
        }
      else
        {
          ATerm g_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm i_9 = ATgetFirst((ATermList) t);
              ATerm j_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_4;
          t = list_tokenize_1_0(p_100, t);
          g_5 = t;
          t = (ATerm) ATinsert(CheckATermList(g_5), r_4);
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
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,t_5 = NULL,g_1 = NULL;
  t_5 = t;
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_5);
  n_5 = t;
  t = SSL_explode_string(p_5);
  q_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_5, q_5);
  g_1 = t;
  t = SSLsetAnnotations(g_1, n_5);
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm u_5 = NULL;
      u_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_5, l_5);
      t = m_7(u_5, l_5, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  {
    ATerm l_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 = NULL;
        t = SSL_filemode(b_7);
        if(match_cons(t, sym__2))
          {
            f_2 = ATgetArgument(t, 0);
            {
              ATerm s_9 = ATgetArgument(t, 1);
              if(((ATgetType(s_9) != AT_INT) || (ATgetInt((ATermInt) s_9) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_2;
        LocalPopChoice(q_9);
      }
    else
      {
        t = l_9;
        {
          ATerm k_2 = NULL,l_2 = NULL;
          t = term_t_9;
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_9, b_7);
          t = n_7(l_2, b_7, t);
          k_2 = t;
          t = SSL_perror(k_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm p_7 (ATerm g_50, ATerm f_50, ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  d_8 = t;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_8 = NULL,j_8 = NULL;
        t = (ATerm) ATinsert(ATempty, term_x_9);
        j_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_50, (ATerm) ATinsert(ATempty, term_x_9));
        t = o_7(f_50, j_8, t);
        t = filemode_0_0(t);
        g_8 = t;
        t = SSL_S_ISDIR(g_8);
        t = d_8;
        LocalPopChoice(v_9);
        {
          ATerm k_8 = NULL,p_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_b_10), g_50);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          k_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_8), term_f_10), f_50);
          p_8 = t;
          t = SSL_concat_strings(p_8);
        }
      }
    else
      {
        t = u_9;
        t = f_50;
      }
  }
  c_8 = t;
  t = SSL_copy(g_50, c_8);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm g_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_9 = NULL,h_9 = NULL;
      t = term_m_10;
      f_9 = t;
      t = term_n_10;
      h_9 = t;
      t = term_s_10;
      t = w_7(f_9, h_9, t);
      LocalPopChoice(i_10);
    }
  else
    {
      t = g_10;
      t = term_t_10;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm a_9 = NULL;
  a_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_2 = NULL,p_2 = NULL;
      t = term_n_10;
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 = NULL,r_2 = NULL;
            t = term_m_10;
            q_2 = t;
            t = term_n_10;
            r_2 = t;
            t = term_s_10;
            t = w_7(q_2, r_2, t);
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            t = term_t_10;
          }
      }
      o_2 = t;
      t = term_z_10;
      p_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_z_10, o_2);
      t = p_7(p_2, o_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm a_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_9;
      t = copy_to_1_0(k_0, t);
    }
  return(t);
}
static ATerm v_6 (ATerm f_26, ATerm g_26, ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(f_26, g_26);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      t = SSL_subtr(f_26, g_26);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  t = term_e_11;
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_9 = NULL,w_9 = NULL;
        t = term_m_10;
        r_9 = t;
        t = term_e_11;
        w_9 = t;
        t = term_h_11;
        t = w_7(r_9, w_9, t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        t = term_j_11;
      }
  }
  n_9 = t;
  t = term_j_11;
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, term_j_11);
  t = v_6(n_9, p_9, t);
  o_9 = t;
  t = SSL_int_to_string(o_9);
  k_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_9), term_e_11);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm h_10 = NULL,j_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(match_cons(l_11, sym_Stream_1))
        {
          h_10 = ATgetArgument(l_11, 0);
        }
      else
        _fail(t);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(h_10, j_10, t);
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,c_10 = NULL;
  ATerm m_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_10 = NULL,e_10 = NULL;
      t = term_m_10;
      d_10 = t;
      t = term_q_11;
      e_10 = t;
      t = term_r_11;
      t = w_7(d_10, e_10, t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = m_11;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  y_9 = t;
  t = (ATerm) ATinsert(CheckATermList(y_9), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_n_12), term_m_12)), (ATerm) ATinsert(ATinsert(ATempty, term_l_12), term_j_12)), (ATerm) ATinsert(ATinsert(ATempty, term_i_12), term_h_12)), (ATerm) ATinsert(ATinsert(ATempty, term_f_12), term_a_12)), (ATerm) ATinsert(ATinsert(ATempty, term_x_11), term_v_11)), (ATerm) ATinsert(ATinsert(ATempty, term_t_11), term_s_11)));
  t = concat_0_0(t);
  c_10 = t;
  t = xtc_new_file_0_0(t);
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_9, c_10);
  t = x_6(n_0, z_9, c_10, t);
  t = z_9;
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,b_11 = NULL;
  t = term_o_12;
  t = create_table_file_0_0(t);
  p_10 = t;
  t = term_o_12;
  t = pass_verbose_0_0(t);
  q_10 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(q_10), p_10), term_p_12);
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_10 = NULL,v_10 = NULL,y_10 = NULL;
        t = term_m_10;
        v_10 = t;
        t = term_t_12;
        y_10 = t;
        t = term_u_12;
        t = w_7(v_10, y_10, t);
        u_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(q_10), p_10), term_p_12), u_10), term_v_12);
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
      }
  }
  b_11 = t;
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_11 = NULL,k_11 = NULL,o_11 = NULL;
        t = term_m_10;
        k_11 = t;
        t = term_a_13;
        o_11 = t;
        t = term_b_13;
        t = w_7(k_11, o_11, t);
        i_11 = t;
        t = (ATerm) ATinsert(CheckATermList(b_11), i_11);
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        t = b_11;
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm w_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_9);
      w_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_11, (ATerm) ATinsert(ATempty, term_x_9));
      t = o_7(u_11, w_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm w_6 (ATerm j_54, ATerm k_54, ATerm t)
{
  ATerm y_11 = NULL;
  t = SSL_write_term_to_stream_baf(j_54, k_54);
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_11);
  return(t);
}
static ATerm x_6 (ATerm e_103 (ATerm), ATerm g_574, ATerm t_54, ATerm t)
{
  ATerm z_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_574, term_c_13);
  t = i_7(t);
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_11, t_54);
  t = e_103(t);
  t = fclose_0_0(t);
  t = t_54;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm e_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_13 = ATgetArgument(t, 0);
      if(match_cons(d_13, sym_Stream_1))
        {
          e_12 = ATgetArgument(d_13, 0);
        }
      else
        _fail(t);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(e_12, g_12, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  d_12 = t;
  t = xtc_new_file_0_0(t);
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_12, d_12);
  t = x_6(s_0, c_12, d_12, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_12);
  t = xtc_transform_file_2_0(o_114, p_114, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm y_6 (ATerm i_53, ATerm j_53, ATerm t)
{
  t = SSL_execvp(i_53, j_53);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,t_13 = NULL,v_13 = NULL;
  n_13 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_13 = ATgetArgument(t, 0);
      {
        ATerm j_3 = NULL,k_3 = NULL;
        t = SSL_int_to_string(o_13);
        j_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_13), j_3), term_e_13);
        k_3 = t;
        t = SSL_concat_strings(k_3);
      }
    }
  else
    {
      ATerm i_4 = NULL,j_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_13 = ATgetArgument(t, 0);
          t_13 = ATgetArgument(t, 1);
          v_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_13);
      i_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_13), term_h_13), i_4), term_g_13), o_13);
      j_4 = t;
      t = SSL_concat_strings(j_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm e_14 = NULL;
  static ATerm t_0 (ATerm t);
  static ATerm t_0 (ATerm t)
  {
    t = c_88(t);
    if(((e_14 != NULL) && (e_14 != t)))
      _fail(t);
    else
      e_14 = t;
    return(t);
  }
  t = fetch_1_0(t_0, t);
  t = not_null(e_14);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t);
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm k_13 = ATgetArgument(t, 0);
              if((f_14 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm l_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_19), term_l_19), term_f_19), term_b_19), term_x_18), term_t_18), term_o_18), term_j_18), term_d_18), term_y_17), term_u_17), term_n_17), term_j_17), term_d_17), term_w_16), term_s_16), term_k_16), term_a_16), term_v_15), term_r_15), term_k_15), term_e_15), term_v_14), term_q_14), term_j_14), term_c_14), term_y_13), term_q_13);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, f_14);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_14 = NULL,l_15 = NULL;
  s_14 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_19 = ATgetArgument(t, 0);
            l_15 = ATgetArgument(t, 1);
            {
              ATerm v_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_19);
        {
          ATerm z_19 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_4 = NULL,e_5 = NULL,f_5 = NULL;
              t = l_15;
              {
                ATerm c_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              u_4 = t;
              t = term_d_20;
              e_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_4), term_e_20);
              f_5 = t;
              t = SSL_printnl(e_5, f_5);
              t = (ATerm) ATmakeAppl(sym__2, term_d_20, (ATerm) ATinsert(ATinsert(ATempty, u_4), term_e_20));
              LocalPopChoice(b_20);
            }
          else
            {
              t = z_19;
              t = s_14;
            }
        }
      }
    else
      {
        t = s_19;
        t = s_14;
      }
  }
  t = s_14;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,c_16 = NULL;
  c_16 = t;
  t = fork_0_0(t);
  z_15 = t;
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_16;
        t = h_102(t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = SSL_waitpid(z_15);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_20 = ATgetArgument(t, 0);
            if(((ATgetType(h_20) != AT_INT) || (ATgetInt((ATermInt) h_20) != 0)))
              _fail(t);
            {
              ATerm i_20 = ATgetArgument(t, 1);
            }
            {
              ATerm j_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_16;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  f_16 = t;
  t = c_103(t);
  g_16 = t;
  t = term_d_20;
  h_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_16), g_16);
  i_16 = t;
  t = SSL_printnl(h_16, i_16);
  t = f_16;
  return(t);
}
static ATerm a_7 (ATerm q_33, ATerm t)
{
  t = SSL_hashtable_keys(q_33);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_16 = NULL,l_16 = NULL;
  static ATerm x_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    ATerm m_16 = NULL,n_16 = NULL;
    m_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), m_16);
    t = w_7(not_null(j_16), m_16, t);
    n_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_16, n_16);
    return(t);
  }
  if(((j_16 != NULL) && (j_16 != t)))
    _fail(t);
  else
    j_16 = t;
  t = lookup_table_0_1(j_16, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_7(l_16, t);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm p_16 = NULL;
  p_16 = t;
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_16 = NULL,z_16 = NULL,f_17 = NULL;
        t = term_m_10;
        z_16 = t;
        t = term_e_11;
        f_17 = t;
        t = term_h_11;
        t = w_7(z_16, f_17, t);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, term_z_18);
        t = geq_0_0(t);
        t = p_16;
        t = p_113(t);
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = p_16;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_113 (ATerm), ATerm t)
{
  ATerm i_17 = NULL;
  i_17 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_17 = NULL,q_17 = NULL,t_17 = NULL;
        t = term_m_10;
        q_17 = t;
        t = term_e_11;
        t_17 = t;
        t = term_h_11;
        t = w_7(q_17, t_17, t);
        p_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_17, term_d_16);
        t = geq_0_0(t);
        t = i_17;
        t = o_113(t);
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = i_17;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_18 = NULL,i_18 = NULL,n_18 = NULL;
        t = term_m_10;
        i_18 = t;
        t = term_e_11;
        n_18 = t;
        t = term_h_11;
        t = w_7(i_18, n_18, t);
        g_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_18, term_g_14);
        t = geq_0_0(t);
        t = c_18;
        t = q_113(t);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = c_18;
      }
  }
  return(t);
}
static ATerm c_7 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = f_92(t);
  {
    static ATerm z_0 (ATerm t);
    static ATerm z_0 (ATerm t)
    {
      ATerm p_18 = NULL;
      p_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, p_18);
      t = e_92(t);
      return(t);
    }
    t = fetch_1_0(z_0, t);
  }
  t = l_22;
  return(t);
}
static ATerm d_7 (ATerm b_92 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  static ATerm r_19 (ATerm t);
  static ATerm r_19 (ATerm t)
  {
    ATerm i_19 = NULL,j_19 = NULL,o_19 = NULL;
    i_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_19 = ATgetFirst((ATermList) t);
            o_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_19;
              {
                static ATerm c_1 (ATerm t);
                static ATerm c_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = c_7(b_92, c_1, j_19, o_19, t);
              }
              t = r_19(t);
              LocalPopChoice(u_20);
            }
          else
            {
              t = t_20;
              {
                ATerm r_5 = NULL,x_5 = NULL,j_1 = NULL;
                t = SSLgetAnnotations(i_19);
                r_5 = t;
                t = o_19;
                t = r_19(t);
                x_5 = t;
                t = (ATerm) ATinsert(CheckATermList(x_5), j_19);
                j_1 = t;
                t = SSLsetAnnotations(j_1, r_5);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = r_19(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      if((k_20 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_7 (ATerm o_29, ATerm p_29, ATerm q_29, ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,a_20 = NULL;
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            ATerm y_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
        t = w_7(o_29, p_29, t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = (ATerm) ATempty;
      }
  }
  y_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_19, q_29);
  t = d_7(d_1, y_19, q_29, t);
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_29, p_29, x_19);
  t = lookup_table_0_1(o_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(p_29, x_19, a_20, t);
  t = w_19;
  return(t);
}
static ATerm f_7 (ATerm y_96 (ATerm), ATerm y_29, ATerm x_29, ATerm t)
{
  static ATerm e_1 (ATerm t);
  static ATerm e_1 (ATerm t)
  {
    ATerm l_20 = NULL,m_20 = NULL;
    if(match_cons(t, sym__2))
      {
        l_20 = ATgetArgument(t, 0);
        m_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_29, l_20, m_20);
    t = y_96(t);
    return(t);
  }
  t = x_29;
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm o_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_access(n_14, o_14);
  return(t);
}
static ATerm q_21 (ATerm c_21, ATerm t)
{
  t = SSL_fclose(c_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL;
  l_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_21 = ATgetArgument(t, 0);
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_21);
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = q_21(l_21, t);
          }
      }
    }
  else
    {
      t = q_21(l_21, t);
    }
  return(t);
}
static ATerm g_7 (ATerm p_54, ATerm t)
{
  t = SSL_read_term_from_stream(p_54);
  return(t);
}
static ATerm h_7 (ATerm z_14, ATerm a_15, ATerm t)
{
  ATerm s_21 = NULL;
  t = SSL_fopen(z_14, a_15);
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_21 = NULL;
  t = SSL_stdin_stream();
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_21 = NULL;
  t = SSL_stdout_stream();
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_21 = NULL;
  t = SSL_stderr_stream();
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_21);
  return(t);
}
static ATerm z_23 (ATerm f_22, ATerm t)
{
  ATerm g_22 = NULL;
  t = SSL_explode_term(f_22);
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_21 = ATgetArgument(t, 1);
        if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
          {
            g_22 = ATgetFirst((ATermList) d_21);
            {
              ATerm e_21 = (ATerm) ATgetNext((ATermList) d_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_24 (ATerm o_22, ATerm q_22, ATerm r_22, ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,y_22 = NULL,u_1 = NULL;
  t = SSLgetAnnotations(r_22);
  u_22 = t;
  t = o_22;
  if(match_cons(t, sym_Path_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_22, q_22);
  u_1 = t;
  t = SSLsetAnnotations(u_1, u_22);
  if(match_cons(t, sym__2))
    {
      s_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(s_22, t_22, t);
  return(t);
}
static ATerm b_24 (ATerm a_23, ATerm b_23, ATerm d_23, ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,p_23 = NULL,v_1 = NULL;
  t = SSLgetAnnotations(d_23);
  g_23 = t;
  t = SSL_is_string(a_23);
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_23, b_23);
  v_1 = t;
  t = SSLsetAnnotations(v_1, g_23);
  if(match_cons(t, sym__2))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(e_23, f_23, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,x_23 = NULL;
  u_23 = t;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_23(u_23, t);
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            {
              ATerm h_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_24(v_23, x_23, u_23, t);
                  LocalPopChoice(i_21);
                }
              else
                {
                  t = h_21;
                  t = b_24(v_23, x_23, u_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_23(u_23, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,k_24 = NULL;
  k_24 = t;
  {
    ATerm j_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_24, term_n_21);
        t = i_7(t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = j_21;
        {
          ATerm r_6 = NULL,t_6 = NULL;
          t = term_o_21;
          t_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_21, k_24);
          t = n_7(t_6, k_24, t);
          r_6 = t;
          t = SSL_perror(r_6);
          _fail(t);
        }
      }
  }
  e_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(f_24, t);
  d_24 = t;
  t = e_24;
  t = fclose_0_0(t);
  t = d_24;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_p_21;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_24 = NULL,q_24 = NULL;
      o_24 = t;
      t = (ATerm) ATinsert(ATempty, term_y_21);
      q_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, (ATerm) ATinsert(ATempty, term_y_21));
      t = o_7(o_24, q_24, t);
      LocalPopChoice(u_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = t_21;
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_22 = t;
            if((PushChoice() == 0))
              {
                ATerm r_24 = NULL,s_24 = NULL;
                r_24 = t;
                t = (ATerm) ATinsert(ATempty, term_x_9);
                s_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_24, (ATerm) ATinsert(ATempty, term_x_9));
                t = o_7(r_24, s_24, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_22;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
            t = debug_1_0(h_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_c_22;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_d_22;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,q_25 = NULL;
  m_25 = t;
  t = term_d_20;
  n_25 = t;
  t = (ATerm) ATinsert(ATempty, term_e_22);
  q_25 = t;
  t = SSL_printnl(n_25, q_25);
  t = m_25;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm r_25 = NULL,t_25 = NULL,u_25 = NULL;
  if(match_cons(t, sym__3))
    {
      r_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
      u_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_7(r_25, t_25, u_25, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,c_26 = NULL;
  v_25 = t;
  t = term_d_20;
  w_25 = t;
  t = (ATerm) ATinsert(ATempty, term_j_22);
  c_26 = t;
  t = SSL_printnl(w_25, c_26);
  t = v_25;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,j_26 = NULL;
  d_26 = t;
  t = term_d_20;
  e_26 = t;
  t = (ATerm) ATinsert(ATempty, term_e_22);
  j_26 = t;
  t = SSL_printnl(e_26, j_26);
  t = d_26;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,e_25 = NULL,f_25 = NULL,h_25 = NULL,j_25 = NULL;
  t_24 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm k_22 = t;
    if((PushChoice() == 0))
      {
        ATerm k_25 = NULL,l_25 = NULL;
        t = term_n_22;
        k_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, t_24);
        l_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATmakeAppl(sym_Imported_1, t_24));
        t = w_7(k_25, l_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_22;
      }
  }
  v_24 = t;
  t = term_n_22;
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_22, term_p_22, (ATerm) ATinsert(ATempty, t_24));
  t = lookup_table_0_1(c_25, t);
  j_25 = t;
  t = term_p_22;
  e_25 = t;
  t = (ATerm) ATinsert(ATempty, t_24);
  f_25 = t;
  t = j_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(e_25, f_25, h_25, t);
  t = v_24;
  t = if_verbose4_1_0(n_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(q_1, t);
  u_24 = t;
  t = term_n_22;
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, u_24);
  t = f_7(r_1, b_25, u_24, t);
  t = if_verbose6_1_0(t_1, t);
  t = term_n_22;
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_22, (ATerm)ATmakeAppl(sym_Imported_1, t_24), (ATerm) ATempty);
  t = lookup_table_0_1(w_24, t);
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, t_24);
  x_24 = t;
  t = (ATerm) ATempty;
  y_24 = t;
  t = a_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(x_24, y_24, z_24, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_22, (ATerm)ATmakeAppl(sym_Imported_1, t_24), (ATerm) ATempty);
  t = if_verbose4_1_0(w_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_26;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_26 = ATgetFirst((ATermList) t);
          z_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 = NULL,h_8 = NULL,i_8 = NULL,b_3 = NULL;
            t = SSLgetAnnotations(x_26);
            y_7 = t;
            t = y_26;
            t = p_99(t);
            h_8 = t;
            t = z_26;
            t = filter_1_0(p_99, t);
            i_8 = t;
            t = (ATerm) ATinsert(CheckATermList(i_8), h_8);
            b_3 = t;
            t = SSLsetAnnotations(b_3, y_7);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = z_26;
            t = filter_1_0(p_99, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t)
{
  static ATerm c_27 (ATerm t);
  static ATerm c_27 (ATerm t)
  {
    ATerm x_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_85(t);
        t = c_27(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = x_22;
        t = v_85(t);
      }
    return(t);
  }
  t = c_27(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_27 = NULL,s_27 = NULL;
      t = term_m_10;
      q_27 = t;
      t = term_i_23;
      s_27 = t;
      t = term_j_23;
      t = w_7(q_27, s_27, t);
      LocalPopChoice(h_23);
    }
  else
    {
      t = c_23;
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_27 = NULL;
            t = term_m_23;
            t_27 = t;
            t = SSL_getenv(t_27);
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_n_23;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL;
  t = term_n_22;
  c_28 = t;
  t = term_o_23;
  d_28 = t;
  t = term_q_23;
  t = w_7(c_28, d_28, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm r_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_23;
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
  t = term_s_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_27 = NULL;
  t = if_verbose5_1_0(x_1, t);
  v_27 = t;
  {
    ATerm t_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_27 = NULL,a_28 = NULL;
        t = term_n_22;
        x_27 = t;
        t = term_p_22;
        a_28 = t;
        t = term_y_23;
        t = w_7(x_27, a_28, t);
        LocalPopChoice(w_23);
      }
    else
      {
        t = t_23;
        {
          ATerm b_28 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_28 = t;
          t = repeat_2_0(z_1, _id, t);
          t = b_28;
        }
      }
  }
  t = v_27;
  t = if_verbose5_1_0(c_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_c_24;
  return(t);
}
static ATerm j_30 (ATerm n_28, ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  t = term_n_22;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, n_28);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATmakeAppl(sym_Tool_1, n_28));
  t = w_7(z_28, a_29, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_24 = ATgetFirst((ATermList) t);
      if(match_cons(g_24, sym__2))
        {
          ATerm i_24 = ATgetArgument(g_24, 0);
          y_28 = ATgetArgument(g_24, 1);
        }
      else
        _fail(t);
      {
        ATerm h_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_28;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_c_24;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_n_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_29 = NULL,c_29 = NULL,e_29 = NULL;
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      e_29 = t;
      if(match_cons(t, sym__2))
        {
          b_29 = ATgetArgument(t, 0);
          c_29 = ATgetArgument(t, 1);
          {
            ATerm n_24 = t;
            int p_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_29 = NULL,t_29 = NULL,u_29 = NULL;
                t = term_n_22;
                t_29 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_29);
                u_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATmakeAppl(sym_Tool_1, b_29));
                t = w_7(t_29, u_29, t);
                {
                  static ATerm h_2 (ATerm t);
                  static ATerm h_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_29 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((n_29 != NULL) && (n_29 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_29 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(h_2, t);
                }
                t = not_null(n_29);
                LocalPopChoice(p_24);
              }
            else
              {
                t = n_24;
                t = j_30(e_29, t);
              }
          }
        }
      else
        {
          t = j_30(e_29, t);
        }
      t = if_verbose5_1_0(i_2, t);
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
        ATerm i_30 = NULL,t_8 = NULL,u_8 = NULL;
        i_30 = t;
        t = term_d_20;
        t_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_25), i_30), term_d_25);
        u_8 = t;
        t = SSL_printnl(t_8, u_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_25), i_30), term_d_25);
        t = if_verbose5_1_0(m_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  o_30 = t;
  t = s_115(t);
  t = xtc_find_0_0(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_30, o_30);
  {
    static ATerm s_2 (ATerm t);
    static ATerm s_2 (ATerm t)
    {
      ATerm p_30 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_30, o_30);
      t = y_6(n_30, o_30, t);
      t = term_i_25;
      p_30 = t;
      t = SSL_exit(p_30);
      return(t);
    }
    t = fork_and_wait_1_0(s_2, t);
  }
  t = o_30;
  return(t);
}
ATerm at_end_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  static ATerm e_32 (ATerm t);
  static ATerm e_32 (ATerm t)
  {
    ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
    d_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_32 = ATgetFirst((ATermList) t);
        c_32 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_9 = NULL,m_9 = NULL,d_3 = NULL;
          t = SSLgetAnnotations(d_32);
          g_9 = t;
          t = c_32;
          t = e_32(t);
          m_9 = t;
          t = (ATerm) ATinsert(CheckATermList(m_9), b_32);
          d_3 = t;
          t = SSLsetAnnotations(d_3, g_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_32;
        t = h_88(t);
      }
    return(t);
  }
  t = e_32(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_30 = NULL,v_30 = NULL,b_31 = NULL;
  s_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_30;
    }
  else
    {
      static ATerm t_2 (ATerm t);
      static ATerm t_2 (ATerm t)
      {
        t = not_null(b_31);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_30 = ATgetFirst((ATermList) t);
          if(((b_31 != NULL) && (b_31 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_30;
      t = at_end_1_0(t_2, t);
    }
  return(t);
}
static ATerm w_32 (ATerm k_32, ATerm t)
{
  ATerm l_32 = NULL;
  t = SSL_explode_term(k_32);
  if(match_cons(t, sym__2))
    {
      ATerm o_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_32;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_32 = NULL,q_32 = NULL,r_32 = NULL;
  r_32 = t;
  if(match_cons(t, sym__2))
    {
      n_32 = ATgetArgument(t, 0);
      q_32 = ATgetArgument(t, 1);
      {
        ATerm p_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_2 (ATerm t);
            static ATerm v_2 (ATerm t)
            {
              t = q_32;
              return(t);
            }
            t = n_32;
            t = at_end_1_0(v_2, t);
            LocalPopChoice(s_25);
          }
        else
          {
            t = p_25;
            t = w_32(r_32, t);
          }
      }
    }
  else
    {
      t = w_32(r_32, t);
    }
  return(t);
}
static ATerm j_7 (ATerm q_96 (ATerm), ATerm n_27, ATerm l_27, ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,d_33 = NULL,e_33 = NULL,h_33 = NULL,i_33 = NULL,u_33 = NULL;
  d_33 = t;
  t = q_96(t);
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_32, n_27, l_27);
  t = x_7(z_32, n_27, l_27, t);
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_33 = NULL;
        t = term_b_26;
        v_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_32, term_b_26);
        t = w_7(z_32, v_33, t);
        {
          ATerm h_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_26;
            }
        }
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_33 = ATgetFirst((ATermList) t);
      b_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_32, term_b_26, (ATerm) ATinsert(CheckATermList(b_33), (ATerm) ATinsert(CheckATermList(a_33), n_27)));
  t = lookup_table_0_1(z_32, t);
  u_33 = t;
  t = term_b_26;
  e_33 = t;
  t = (ATerm) ATinsert(CheckATermList(b_33), (ATerm) ATinsert(CheckATermList(a_33), n_27));
  h_33 = t;
  t = u_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(e_33, h_33, i_33, t);
  t = d_33;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm x_33 = NULL;
  ATerm i_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_34 = NULL,a_10 = NULL;
      b_34 = t;
      t = term_l_26;
      a_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_34, term_l_26);
      t = n_7(b_34, a_10, t);
      x_33 = t;
      t = SSL_mkstemp(x_33);
      LocalPopChoice(k_26);
    }
  else
    {
      t = i_26;
      {
        ATerm c_34 = NULL;
        t = term_m_26;
        c_34 = t;
        t = SSL_perror(c_34);
        _fail(t);
      }
    }
  return(t);
}
static ATerm n_7 (ATerm s_49, ATerm t_49, ATerm t)
{
  t = SSL_strcat(s_49, t_49);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  t = P__tmpdir_0_0(t);
  j_34 = t;
  t = term_o_26;
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_34, term_o_26);
  t = n_7(j_34, k_34, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      h_34 = ATgetArgument(t, 0);
      g_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_o_12;
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_34, term_o_12);
  t = j_7(w_2, h_34, i_34, t);
  t = SSL_close(g_34);
  t = h_34;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  o_34 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm q_34 = NULL,t_34 = NULL;
      t = o_34;
      t = xtc_new_file_0_0(t);
      q_34 = t;
      t = r_0(t);
      t_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_34, (ATerm) ATinsert(ATinsert(ATempty, q_34), term_n_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_34);
    }
  else
    {
      ATerm v_34 = NULL,w_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_34;
      t = xtc_new_file_0_0(t);
      v_34 = t;
      t = r_0(t);
      w_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_34), term_n_10), p_34), term_p_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_34);
    }
  return(t);
}
static ATerm w_7 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm x_34 = NULL;
  t = lookup_table_0_1(k_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(l_30, x_34, t);
  return(t);
}
static ATerm q_7 (ATerm w_28, ATerm x_28, ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  a_35 = t;
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
        t = w_7(w_28, x_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_26 = ATgetFirst((ATermList) t);
            z_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_26);
        {
          ATerm b_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_28, x_28, z_34);
          t = lookup_table_0_1(w_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_8(x_28, z_34, b_35, t);
          t = (ATerm) ATmakeAppl(sym__3, w_28, x_28, z_34);
        }
      }
    else
      {
        t = q_26;
        {
          ATerm d_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
          t = lookup_table_0_1(w_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_7(x_28, d_35, t);
          t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
        }
      }
  }
  t = a_35;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  j_35 = t;
  t = n_96(t);
  h_35 = t;
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_35 = NULL;
        t = term_b_26;
        n_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_35, term_b_26);
        t = w_7(h_35, n_35, t);
        {
          ATerm v_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_26;
            }
        }
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_35 = ATgetFirst((ATermList) t);
      f_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, h_35, term_b_26, f_35);
  t = lookup_table_0_1(h_35, t);
  m_35 = t;
  t = term_b_26;
  k_35 = t;
  t = m_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(k_35, f_35, l_35, t);
  t = g_35;
  {
    static ATerm x_2 (ATerm t);
    static ATerm x_2 (ATerm t)
    {
      ATerm o_35 = NULL;
      o_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_35, o_35);
      t = q_7(h_35, o_35, t);
      return(t);
    }
    t = map_1_0(x_2, t);
  }
  t = j_35;
  return(t);
}
ATerm restore_always_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  ATerm w_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_85(t);
      t = q_85(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = w_26;
      t = q_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_96 (ATerm), ATerm t)
{
  ATerm s_35 = NULL,z_35 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
  z_35 = t;
  t = m_96(t);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_35, term_b_26);
  {
    ATerm b_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_36 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_27 = ATgetArgument(t, 0);
            ATerm f_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_26;
        n_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_35, term_b_26);
        t = w_7(s_35, n_36, t);
        LocalPopChoice(d_27);
      }
    else
      {
        t = b_27;
        t = (ATerm) ATempty;
      }
  }
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_35, term_b_26, (ATerm) ATinsert(CheckATermList(c_36), (ATerm) ATempty));
  t = lookup_table_0_1(s_35, t);
  g_36 = t;
  t = term_b_26;
  d_36 = t;
  t = (ATerm) ATinsert(CheckATermList(c_36), (ATerm) ATempty);
  e_36 = t;
  t = g_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(d_36, e_36, f_36, t);
  t = z_35;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_36);
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = z_36;
      }
  }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  ATerm r_36 = NULL;
  static ATerm z_2 (ATerm t);
  static ATerm z_2 (ATerm t)
  {
    ATerm s_36 = NULL;
    s_36 = t;
    {
      ATerm i_27 = t;
      int j_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_36 = NULL,w_36 = NULL;
          t = term_n_26;
          v_36 = t;
          t = term_b_26;
          w_36 = t;
          t = term_k_27;
          t = w_7(v_36, w_36, t);
          LocalPopChoice(j_27);
        }
      else
        {
          t = i_27;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_36 != NULL) && (r_36 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_36 = ATgetFirst((ATermList) t);
        {
          ATerm m_27 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_36;
    t = map_1_0(a_3, t);
    t = s_36;
    t = end_scope_1_0(c_3, t);
    return(t);
  }
  t = begin_scope_1_0(y_2, t);
  t = restore_always_2_0(b_115, z_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  d_37 = t;
  t = term_o_12;
  t = whoami_0_0(t);
  e_37 = t;
  t = term_d_20;
  g_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_27), e_37), term_o_27);
  h_37 = t;
  t = SSL_printnl(g_37, h_37);
  t = term_j_11;
  f_37 = t;
  t = SSL_exit(f_37);
  t = d_37;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm l_37 = NULL;
  l_37 = t;
  if(match_string(t, "-k"))
    {
      t = l_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_37;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  t = SSL_string_to_int(m_37);
  n_37 = t;
  t = term_r_27;
  o_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_27, n_37);
  t = z_7(o_37, n_37, t);
  t = m_37;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, g_3, n_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm q_37 = NULL;
  q_37 = t;
  if(match_string(t, "-S"))
    {
      t = q_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_37;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL;
  t = term_e_11;
  r_37 = t;
  t = term_w_27;
  s_37 = t;
  t = term_y_27;
  t = z_7(r_37, s_37, t);
  t = term_z_27;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_e_28;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm v_37 = NULL,y_37 = NULL,z_37 = NULL;
  v_37 = t;
  t = SSL_string_to_int(v_37);
  y_37 = t;
  t = term_e_11;
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, y_37);
  t = z_7(z_37, y_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_37);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_f_28;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  t = term_g_28;
  a_38 = t;
  t = term_o_12;
  b_38 = t;
  t = term_h_28;
  t = z_7(a_38, b_38, t);
  t = term_i_28;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_3, t_3, w_3, t);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm m_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_3, a_4, b_4, t);
            LocalPopChoice(o_28);
          }
        else
          {
            t = m_28;
            t = Option_3_0(e_4, h_4, k_4, t);
          }
      }
    }
  return(t);
}
static ATerm z_7 (ATerm f_62, ATerm g_62, ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  t = term_m_10;
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_10, f_62, g_62);
  t = lookup_table_0_1(e_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(f_62, g_62, f_38, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_10, f_62, g_62);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_38 = NULL,o_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
      t = term_o_12;
      t = g_0(t);
      q_38 = t;
      t = term_p_28;
      r_38 = t;
      t = term_t_28;
      s_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_28, term_t_28, q_38);
      t = x_7(r_38, s_38, q_38, t);
      _fail(t);
    }
  else
    {
      ATerm v_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_38 = ATgetFirst((ATermList) t);
          o_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_38;
      t = d_0(t);
      t = term_o_12;
      t = f_0(t);
      v_38 = t;
      t = (ATerm) ATinsert(CheckATermList(o_38), v_38);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm y_38 = NULL;
  y_38 = t;
  if(match_string(t, "-o"))
    {
      t = y_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_38;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm z_38 = NULL,e_39 = NULL;
  z_38 = t;
  t = term_n_10;
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, z_38);
  t = z_7(e_39, z_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_38);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, o_4, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm k_39 = NULL;
  k_39 = t;
  if(match_string(t, "-i"))
    {
      t = k_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_39;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm l_39 = NULL,o_39 = NULL;
  l_39 = t;
  t = term_p_26;
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_26, l_39);
  t = z_7(o_39, l_39, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_39);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, s_4, t);
  return(t);
}
static ATerm x_7 (ATerm r_28, ATerm s_28, ATerm q_28, ATerm t)
{
  ATerm r_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_28, s_28);
  {
    ATerm d_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_29 = ATgetArgument(t, 0);
            ATerm h_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_28, s_28);
        t = w_7(r_28, s_28, t);
        LocalPopChoice(f_29);
      }
    else
      {
        t = d_29;
        t = (ATerm) ATempty;
      }
  }
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_28, s_28, (ATerm) ATinsert(CheckATermList(v_39), q_28));
  t = lookup_table_0_1(r_28, t);
  y_39 = t;
  t = (ATerm) ATinsert(CheckATermList(v_39), q_28);
  w_39 = t;
  t = y_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(s_28, w_39, x_39, t);
  t = r_39;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm k_40 = NULL,m_40 = NULL,p_40 = NULL,q_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
      t = term_o_12;
      t = o_0(t);
      r_40 = t;
      t = term_p_28;
      s_40 = t;
      t = term_t_28;
      t_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_28, term_t_28, r_40);
      t = x_7(s_40, t_40, r_40, t);
      _fail(t);
    }
  else
    {
      ATerm x_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_40 = ATgetFirst((ATermList) t);
          m_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_40 = ATgetFirst((ATermList) t);
          q_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_40;
      t = l_0(t);
      t = p_40;
      t = m_0(t);
      x_40 = t;
      t = (ATerm) ATinsert(CheckATermList(q_40), x_40);
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alltt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  t = term_a_13;
  a_41 = t;
  t = term_i_29;
  b_41 = t;
  t = term_j_29;
  t = z_7(a_41, b_41, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_k_29;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--boxenv", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL;
  t = term_a_13;
  c_41 = t;
  t = term_l_29;
  d_41 = t;
  t = term_m_29;
  t = z_7(c_41, d_41, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_r_29;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm e_41 = NULL;
  e_41 = t;
  if(match_string(t, "-t"))
    {
      t = e_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--latex-table", 0, ATtrue)))
        _fail(t);
      t = e_41;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL;
  i_41 = t;
  t = term_s_29;
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_29, i_41);
  t = z_7(j_41, i_41, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_v_29;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm k_41 = NULL;
  k_41 = t;
  if(match_string(t, "-w"))
    {
      t = k_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = k_41;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm l_41 = NULL,o_41 = NULL;
  l_41 = t;
  t = term_t_12;
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_12, l_41);
  t = z_7(o_41, l_41, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, v_4, w_4, t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(y_4, z_4, a_5, t);
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            {
              ATerm e_30 = t;
              int f_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(b_5, c_5, d_5, t);
                  LocalPopChoice(f_30);
                }
              else
                {
                  t = e_30;
                  t = ArgOption_3_0(h_5, i_5, j_5, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_12;
  t = whoami_0_0(t);
  p_41 = t;
  t = term_d_20;
  r_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_30), p_41);
  s_41 = t;
  t = SSL_printnl(r_41, s_41);
  t = term_j_11;
  q_41 = t;
  t = SSL_exit(q_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL;
  t = term_m_10;
  t_41 = t;
  t = term_h_30;
  u_41 = t;
  t = term_m_30;
  t = w_7(t_41, u_41, t);
  return(t);
}
static ATerm r_7 (ATerm z_25, ATerm a_26, ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_25, a_26);
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      t = SSL_addr(z_25, a_26);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_41;
      t = e_95(t);
    }
  else
    {
      ATerm b_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_41 = ATgetFirst((ATermList) t);
          y_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_41;
      t = foldr_2_0(e_95, f_95, t);
      b_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_41, b_42);
      t = f_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm o_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      o_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(o_10, r_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_42 = NULL,k_10 = NULL,l_10 = NULL;
  t = times_0_0(t);
  l_10 = t;
  t = SSL_explode_term(l_10);
  if(match_cons(t, sym__2))
    {
      ATerm t_30 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10;
  t = foldr_2_0(k_5, s_5, t);
  e_42 = t;
  t = SSL_TicksToSeconds(e_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  p_42 = t;
  if(match_cons(t, sym__2))
    {
      q_42 = ATgetArgument(t, 0);
      r_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_42;
        if((q_42 != t))
          {
            _fail(t);
          }
        t = p_42;
        LocalPopChoice(w_30);
      }
    else
      {
        t = u_30;
        t = (ATerm) ATmakeAppl(sym__2, q_42, r_42);
        {
          ATerm x_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_42, r_42);
              LocalPopChoice(y_30);
            }
          else
            {
              t = x_30;
              t = SSL_gtr(q_42, r_42);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_42, r_42);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_113 (ATerm), ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
        t = term_m_10;
        y_42 = t;
        t = term_e_11;
        z_42 = t;
        t = term_h_11;
        t = w_7(y_42, z_42, t);
        x_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_42, term_j_11);
        t = geq_0_0(t);
        t = v_42;
        t = l_113(t);
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = v_42;
      }
  }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,e_43 = NULL,f_43 = NULL;
  t = run_time_0_0(t);
  b_43 = t;
  t = term_o_12;
  t = whoami_0_0(t);
  c_43 = t;
  t = term_d_20;
  e_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_31), b_43), term_g_13), c_43);
  f_43 = t;
  t = SSL_printnl(e_43, f_43);
  t = (ATerm) ATmakeAppl(sym__2, term_d_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_31), b_43), term_g_13), c_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_27;
  g_43 = t;
  t = SSL_exit(g_43);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL;
  r_43 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_43;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_43 = ATgetArgument(t, 0);
          {
            ATerm n_11 = NULL,f_3 = NULL;
            t = SSLgetAnnotations(r_43);
            n_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_43);
            f_3 = t;
            t = SSLsetAnnotations(f_3, n_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_43;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_43 = NULL,k_43 = NULL;
      t = term_m_10;
      j_43 = t;
      t = term_f_31;
      k_43 = t;
      t = term_g_31;
      t = w_7(j_43, k_43, t);
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      t = fetch_1_0(y_5, t);
    }
  t = y_80(t);
  return(t);
}
static ATerm a_8 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm t_43 = NULL;
  t = SSL_hashtable_put(l_33, j_33, k_33);
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_43);
  return(t);
}
static ATerm b_8 (ATerm m_33, ATerm n_33, ATerm t)
{
  t = SSL_hashtable_get(n_33, m_33);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_30, ATerm t)
{
  ATerm c_44 = NULL;
  t = table_hashtable_0_0(t);
  c_44 = t;
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_12 = NULL;
        t = c_44;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_8(d_30, b_12, t);
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        {
          ATerm k_12 = NULL;
          t = d_30;
          t = table_create_0_0(t);
          t = c_44;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_8(d_30, k_12, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_33, ATerm s_33, ATerm t)
{
  ATerm f_44 = NULL;
  t = SSL_hashtable_create(r_33, s_33);
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_44);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,k_44 = NULL,l_44 = NULL;
  g_44 = t;
  t = term_j_31;
  k_44 = t;
  t = term_k_31;
  l_44 = t;
  t = g_44;
  t = new_hashtable_0_2(k_44, l_44, t);
  h_44 = t;
  t = g_44;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(g_44, h_44, i_44, t);
  t = g_44;
  return(t);
}
static ATerm t_7 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm m_44 = NULL;
  t = SSL_hashtable_remove(p_33, o_33);
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_44);
  return(t);
}
static ATerm u_7 (ATerm t_33, ATerm t)
{
  ATerm n_44 = NULL;
  t = SSL_hashtable_destroy(t_33);
  n_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_44);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm o_44 = NULL;
  t = SSL_table_hashtable();
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_44);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
  p_44 = t;
  t = table_hashtable_0_0(t);
  q_44 = t;
  t = lookup_table_0_1(p_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(s_44, t);
  t = q_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(p_44, r_44, t);
  t = p_44;
  return(t);
}
ATerm map_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  static ATerm h_45 (ATerm t);
  static ATerm h_45 (ATerm t)
  {
    ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
    e_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_45;
      }
    else
      {
        ATerm s_12 = NULL,y_12 = NULL,z_12 = NULL,o_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_45 = ATgetFirst((ATermList) t);
            g_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_45);
        s_12 = t;
        t = f_45;
        t = q_87(t);
        y_12 = t;
        t = g_45;
        t = h_45(t);
        z_12 = t;
        t = (ATerm) ATinsert(CheckATermList(z_12), y_12);
        o_3 = t;
        t = SSLsetAnnotations(o_3, s_12);
      }
    return(t);
  }
  t = h_45(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_45 = ATgetFirst((ATermList) t);
      l_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_45 = NULL,q_45 = NULL;
        static ATerm z_5 (ATerm t);
        static ATerm z_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_45)), not_null(q_45));
          return(t);
        }
        t = l_45;
        t = j_0(t);
        if(((p_45 != NULL) && (p_45 != t)))
          _fail(t);
        else
          p_45 = t;
        t = k_45;
        t = h_0(t);
        if(((q_45 != NULL) && (q_45 != t)))
          _fail(t);
        else
          q_45 = t;
        t = l_45;
        t = reverse_acc_2_0(h_0, z_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_12;
      t = j_0(t);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,d_6 = NULL;
  y_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_45);
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_45);
  d_6 = t;
  t = SSLsetAnnotations(d_6, w_45);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm a_46 = NULL;
  a_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_46), term_l_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL;
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_45 = NULL,v_45 = NULL;
      t = term_m_10;
      u_45 = t;
      t = term_h_30;
      v_45 = t;
      t = term_m_30;
      t = w_7(u_45, v_45, t);
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = fetch_1_0(a_6, t);
    }
  t = term_o_31;
  t = echo_0_0(t);
  t = term_p_28;
  s_45 = t;
  t = term_t_28;
  t_45 = t;
  t = term_p_31;
  t = w_7(s_45, t_45, t);
  t = reverse_acc_2_0(_id, b_6, t);
  t = map_1_0(c_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  static ATerm x_46 (ATerm t);
  static ATerm x_46 (ATerm t)
  {
    ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
    u_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_46 = ATgetFirst((ATermList) t);
        w_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_31 = t;
      int r_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_13 = NULL,w_13 = NULL,g_6 = NULL;
          t = SSLgetAnnotations(u_46);
          r_13 = t;
          t = v_46;
          t = a_88(t);
          w_13 = t;
          t = (ATerm) ATinsert(CheckATermList(w_46), w_13);
          g_6 = t;
          t = SSLsetAnnotations(g_6, r_13);
          LocalPopChoice(r_31);
        }
      else
        {
          t = q_31;
          {
            ATerm i_14 = NULL,l_14 = NULL,h_6 = NULL;
            t = SSLgetAnnotations(u_46);
            i_14 = t;
            t = w_46;
            t = x_46(t);
            l_14 = t;
            t = (ATerm) ATinsert(CheckATermList(l_14), v_46);
            h_6 = t;
            t = SSLsetAnnotations(h_6, i_14);
          }
        }
    }
    return(t);
  }
  t = x_46(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  b_47 = t;
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_31 = ATgetFirst((ATermList) t);
                ATerm v_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_47;
          }
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = (ATerm) ATinsert(ATempty, b_47);
      }
  }
  c_47 = t;
  t = term_t_10;
  d_47 = t;
  t = SSL_printnl(d_47, c_47);
  t = b_47;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  t = term_m_10;
  h_47 = t;
  t = term_h_30;
  i_47 = t;
  t = term_m_30;
  t = w_7(h_47, i_47, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  t = term_w_31;
  j_47 = t;
  t = term_o_12;
  k_47 = t;
  t = term_x_31;
  t = z_7(j_47, k_47, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_y_31;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
  t = term_w_31;
  n_47 = t;
  t = term_o_12;
  o_47 = t;
  t = term_x_31;
  t = z_7(n_47, o_47, t);
  t = term_z_31;
  l_47 = t;
  t = term_o_12;
  m_47 = t;
  t = term_a_32;
  t = z_7(l_47, m_47, t);
  t = term_f_32;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_6, f_6, i_6, t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      t = Option_3_0(j_6, k_6, l_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,s_6 = NULL;
  u_47 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_47 = ATgetFirst((ATermList) t);
      r_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_47);
  p_47 = t;
  t = q_47;
  t = b_74(t);
  s_47 = t;
  t = r_47;
  t = c_74(t);
  t_47 = t;
  t = (ATerm) ATinsert(CheckATermList(t_47), s_47);
  s_6 = t;
  t = SSLsetAnnotations(s_6, p_47);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,j_48 = NULL,k_48 = NULL,l_7 = NULL;
  z_47 = t;
  {
    ATerm j_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_32;
        t = l_105(t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = j_32;
      }
  }
  t = z_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_48 = ATgetFirst((ATermList) t);
      c_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_47);
  a_48 = t;
  t = term_h_30;
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_30, b_48);
  t = z_7(k_48, b_48, t);
  t = c_48;
  {
    static ATerm u_48 (ATerm t);
    static ATerm u_48 (ATerm t)
    {
      ATerm p_32 = t;
      int s_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_48 = NULL;
              n_48 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_48;
              LocalPopChoice(u_32);
            }
          else
            {
              t = t_32;
              t = l_105(t);
              t = Cons_2_0(_id, u_48, t);
            }
          LocalPopChoice(s_32);
        }
      else
        {
          t = p_32;
          {
            ATerm q_48 = NULL,r_48 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_48 = ATgetFirst((ATermList) t);
                r_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_48), (ATerm) ATmakeAppl(sym_Undefined_1, q_48));
          }
        }
      return(t);
    }
    t = u_48(t);
  }
  j_48 = t;
  t = (ATerm) ATinsert(CheckATermList(j_48), (ATerm) ATmakeAppl(sym_Program_1, b_48));
  l_7 = t;
  t = SSLsetAnnotations(l_7, a_48);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm h_49 = NULL;
  h_49 = t;
  if(match_string(t, "--help"))
    {
      t = h_49;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_49;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_49;
        }
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL;
  t = term_f_31;
  i_49 = t;
  t = term_o_12;
  j_49 = t;
  t = term_v_32;
  t = z_7(i_49, j_49, t);
  t = term_x_32;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL;
  b_49 = t;
  t = term_p_28;
  c_49 = t;
  t = term_c_33;
  t = lookup_table_0_1(c_49, t);
  g_49 = t;
  t = term_t_28;
  d_49 = t;
  t = (ATerm) ATempty;
  e_49 = t;
  t = g_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(d_49, e_49, f_49, t);
  t = b_49;
  {
    static ATerm m_6 (ATerm t);
    static ATerm m_6 (ATerm t)
    {
      ATerm f_33 = t;
      int g_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_105(t);
          LocalPopChoice(g_33);
        }
      else
        {
          t = f_33;
          {
            ATerm w_33 = t;
            int y_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_6, o_6, p_6, t);
                LocalPopChoice(y_33);
              }
            else
              {
                t = w_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_6, t);
  }
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_49 = NULL;
        w_49 = t;
        {
          ATerm d_34 = t;
          int e_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_14 = NULL;
              t = w_49;
              {
                ATerm f_34 = t;
                int l_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_14 = NULL,y_14 = NULL;
                    t = term_m_10;
                    x_14 = t;
                    t = term_f_31;
                    y_14 = t;
                    t = term_g_31;
                    t = w_7(x_14, y_14, t);
                    LocalPopChoice(l_34);
                  }
                else
                  {
                    t = f_34;
                    t = fetch_1_0(q_6, t);
                  }
              }
              t = w_49;
              t = default_system_usage_0_0(t);
              t = term_w_27;
              w_14 = t;
              t = SSL_exit(w_14);
              LocalPopChoice(e_34);
            }
          else
            {
              t = d_34;
              {
                ATerm h_15 = NULL,i_15 = NULL,m_15 = NULL;
                t = term_m_10;
                i_15 = t;
                t = term_w_31;
                m_15 = t;
                t = term_m_34;
                t = w_7(i_15, m_15, t);
                t = w_49;
                t = default_system_about_0_0(t);
                t = term_w_27;
                h_15 = t;
                t = SSL_exit(h_15);
              }
            }
        }
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        {
          ATerm n_34 = t;
          int r_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
              static ATerm u_6 (ATerm t);
              static ATerm u_6 (ATerm t)
              {
                ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,v_8 = NULL;
                c_50 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_50 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_50);
                a_50 = t;
                t = b_50;
                if(((z_48 != NULL) && (z_48 != t)))
                  _fail(t);
                else
                  z_48 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_50);
                v_8 = t;
                t = SSLsetAnnotations(v_8, a_50);
                return(t);
              }
              t = fetch_1_0(u_6, t);
              t = term_d_20;
              y_49 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_48)), term_s_34);
              z_49 = t;
              t = SSL_printnl(y_49, z_49);
              t = (ATerm) ATmakeAppl(sym__2, term_d_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_48)), term_s_34));
              t = default_system_usage_0_0(t);
              t = term_j_11;
              x_49 = t;
              t = SSL_exit(x_49);
              LocalPopChoice(r_34);
            }
          else
            {
              t = n_34;
            }
        }
      }
  }
  a_49 = t;
  t = term_p_28;
  t = table_destroy_0_0(t);
  t = a_49;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  t = parse_options_1_0(a_81, t);
  k_50 = t;
  t = term_u_34;
  t = table_create_0_0(t);
  t = term_u_34;
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_34, term_y_34, k_50);
  t = lookup_table_0_1(l_50, t);
  o_50 = t;
  t = term_y_34;
  m_50 = t;
  t = o_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(m_50, k_50, n_50, t);
  t = k_50;
  t = c_81(t);
  {
    ATerm c_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_81, t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = c_35;
        {
          ATerm i_35 = t;
          int p_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_81(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_35);
            }
          else
            {
              t = i_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2latex_options_0_0(t);
      LocalPopChoice(r_35);
    }
  else
    {
      t = q_35;
      {
        ATerm t_35 = t;
        int u_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(u_35);
          }
        else
          {
            t = t_35;
            {
              ATerm v_35 = t;
              int w_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(w_35);
                }
              else
                {
                  t = v_35;
                  {
                    ATerm x_35 = t;
                    int y_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(s_7, v_7, e_8, t);
                        LocalPopChoice(y_35);
                      }
                    else
                      {
                        t = x_35;
                        {
                          ATerm a_36 = t;
                          int b_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(b_36);
                            }
                          else
                            {
                              t = a_36;
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
static ATerm k_7 (ATerm t)
{
  t = xtc_temp_files_1_0(f_8, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL;
  t = term_h_36;
  s_50 = t;
  t = term_o_12;
  t_50 = t;
  t = term_i_36;
  t = z_7(s_50, t_50, t);
  t = term_j_36;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm l_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
      t = term_m_10;
      w_50 = t;
      t = term_p_26;
      x_50 = t;
      t = term_o_36;
      t = w_7(w_50, x_50, t);
      v_50 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_50);
      LocalPopChoice(m_36);
    }
  else
    {
      t = l_36;
      t = term_z_10;
    }
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_51 = NULL,e_51 = NULL;
        e_51 = t;
        if(match_cons(t, sym_FILE_1))
          {
            d_51 = ATgetArgument(t, 0);
            {
              ATerm q_15 = NULL,y_8 = NULL;
              t = SSLgetAnnotations(e_51);
              q_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_51);
              y_8 = t;
              t = SSLsetAnnotations(y_8, q_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_51;
          }
        LocalPopChoice(q_36);
        t = xtc_transform_file_2_0(l_8, create_abox2latex_args_0_0, t);
      }
    else
      {
        t = p_36;
        t = xtc_transform_term_2_0(m_8, create_abox2latex_args_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_t_36;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_6, default_usage_0_0, _id, k_7, t);
  return(t);
}
