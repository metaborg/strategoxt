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
ATerm term_r_36;
ATerm term_n_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_g_36;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_u_34;
ATerm term_l_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_n_33;
ATerm term_q_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_b_32;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_p_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_y_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_k_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_u_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_d_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_v_23;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_y_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_i_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_d_9;
ATerm term_z_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_r_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_d_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_n_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_x_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("output", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_j_9, term_c_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_l_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_p_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_v_12, term_w_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_c_13, term_d_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_i_13, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_p_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_h_14, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_n_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_w_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_l_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_v_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_u_16, term_v_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_o_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_r_17, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_w_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_l_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_t_18, term_u_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_d_19, term_e_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_e_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__2, term_t_22, term_m_23);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_t_22, term_u_22);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_f_25, term_u_24);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_d_9, term_v_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_r_10);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_j_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt          Produce verbatim-like output with alltt environment", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_p_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv         Produce fully formatted LaTeX output (default)", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-t|--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-w|--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_n_29);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_q_30);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_v_27);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_b_32, term_r_10);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_r_10);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_r_10);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__3, term_t_27, term_v_27, (ATerm) ATempty);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_b_32);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_g_36, term_r_10);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_h_25);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm c_7 (ATerm z_46, ATerm a_47, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm l_6 (ATerm q_25, ATerm r_25, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm create_table_file_0_0 (ATerm t);
ATerm create_abox2latex_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm m_6 (ATerm y_50, ATerm z_50, ATerm t);
static ATerm n_6 (ATerm i_99 (ATerm), ATerm v_546, ATerm i_51, ATerm t);
static ATerm c_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t);
static ATerm o_6 (ATerm b_50, ATerm c_50, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm j_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_98 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm g_99 (ATerm), ATerm t);
static ATerm q_6 (ATerm b_33, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm t_109 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm s_109 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm u_109 (ATerm), ATerm t);
static ATerm s_6 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm x_21, ATerm w_21, ATerm t);
static ATerm t_6 (ATerm i_88 (ATerm), ATerm t_21, ATerm s_21, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm u_6 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t);
static ATerm v_6 (ATerm f_93 (ATerm), ATerm j_29, ATerm i_29, ATerm t);
static ATerm z_6 (ATerm c_14, ATerm d_14, ATerm t);
static ATerm x_14 (ATerm p_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_6 (ATerm e_51, ATerm t);
static ATerm x_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_17 (ATerm j_15, ATerm t);
static ATerm b_17 (ATerm n_15, ATerm o_15, ATerm p_15, ATerm t);
static ATerm c_17 (ATerm y_15, ATerm z_15, ATerm a_16, ATerm t);
static ATerm y_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm v_95 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm l_23 (ATerm h_22, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm r_111 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_25 (ATerm x_24, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_7 (ATerm x_92 (ATerm), ATerm y_26, ATerm w_26, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm b_7 (ATerm p_46, ATerm q_46, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm j_7 (ATerm v_29, ATerm w_29, ATerm t);
static ATerm d_7 (ATerm h_28, ATerm i_28, ATerm t);
ATerm end_scope_1_0 (ATerm u_92 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_92 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm d_111 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_7 (ATerm u_58, ATerm v_58, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm k_7 (ATerm c_28, ATerm d_28, ATerm b_28, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm abox2latex_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_7 (ATerm k_25, ATerm l_25, ATerm t);
ATerm foldr_2_0 (ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_109 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm need_help_1_0 (ATerm g_77 (ATerm), ATerm t);
static ATerm n_7 (ATerm u_32, ATerm v_32, ATerm w_32, ATerm t);
static ATerm o_7 (ATerm x_32, ATerm y_32, ATerm t);
ATerm lookup_table_0_1 (ATerm o_29, ATerm t);
ATerm new_hashtable_0_2 (ATerm c_33, ATerm d_33, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm g_7 (ATerm z_32, ATerm a_33, ATerm t);
static ATerm h_7 (ATerm e_33, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm x_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_101 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm parse_options_1_0 (ATerm o_101 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
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
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = l_1;
        t = q_0(t);
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
        t = c_7(m_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        {
          ATerm j_8 = t;
          int l_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL;
              t = l_1;
              t = q_0(t);
              w_0 = t;
              {
                ATerm n_8 = t;
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
                    t = n_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_1, w_0);
              t = c_7(m_1, w_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
              LocalPopChoice(l_8);
            }
          else
            {
              t = j_8;
              t = l_1;
              t = q_0(t);
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
static ATerm c_7 (ATerm z_46, ATerm a_47, ATerm t)
{
  t = SSL_copy(z_46, a_47);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 = NULL,w_2 = NULL;
      t = term_q_8;
      v_2 = t;
      t = term_r_8;
      w_2 = t;
      t = term_s_8;
      t = j_7(v_2, w_2, t);
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      t = term_t_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm t_2 = NULL;
  t_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_1 = NULL,n_1 = NULL;
      t = term_r_8;
      {
        ATerm u_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 = NULL,p_1 = NULL;
            t = term_q_8;
            o_1 = t;
            t = term_r_8;
            p_1 = t;
            t = term_s_8;
            t = j_7(o_1, p_1, t);
            LocalPopChoice(w_8);
          }
        else
          {
            t = u_8;
            t = term_t_8;
          }
      }
      i_1 = t;
      t = term_z_8;
      n_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_z_8, i_1);
      t = c_7(n_1, i_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm a_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm l_6 (ATerm q_25, ATerm r_25, ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(q_25, r_25);
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      t = SSL_subtr(q_25, r_25);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_2 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  t = term_d_9;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL,f_3 = NULL;
        t = term_q_8;
        e_3 = t;
        t = term_d_9;
        f_3 = t;
        t = term_i_9;
        t = j_7(e_3, f_3, t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        t = term_j_9;
      }
  }
  b_3 = t;
  t = term_j_9;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_3, term_j_9);
  t = l_6(b_3, d_3, t);
  c_3 = t;
  t = SSL_int_to_string(c_3);
  y_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_2), term_d_9);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm l_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if(match_cons(k_9, sym_Stream_1))
        {
          l_3 = ATgetArgument(k_9, 0);
        }
      else
        _fail(t);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(l_3, n_3, t);
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 = NULL,k_3 = NULL;
      t = term_q_8;
      j_3 = t;
      t = term_n_9;
      k_3 = t;
      t = term_o_9;
      t = j_7(j_3, k_3, t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  g_3 = t;
  t = (ATerm) ATinsert(CheckATermList(g_3), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_n_10), term_l_10)), (ATerm) ATinsert(ATinsert(ATempty, term_j_10), term_f_10)), (ATerm) ATinsert(ATinsert(ATempty, term_e_10), term_b_10)), (ATerm) ATinsert(ATinsert(ATempty, term_a_10), term_x_9)), (ATerm) ATinsert(ATinsert(ATempty, term_v_9), term_t_9)), (ATerm) ATinsert(ATinsert(ATempty, term_s_9), term_r_9)));
  t = concat_0_0(t);
  i_3 = t;
  t = xtc_new_file_0_0(t);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, i_3);
  t = n_6(b_0, h_3, i_3, t);
  t = h_3;
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm t_3 = NULL,v_3 = NULL,e_4 = NULL;
  t = term_r_10;
  t = create_table_file_0_0(t);
  t_3 = t;
  t = term_r_10;
  t = pass_verbose_0_0(t);
  v_3 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(v_3), t_3), term_s_10);
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
        t = term_q_8;
        z_3 = t;
        t = term_x_10;
        a_4 = t;
        t = term_a_11;
        t = j_7(z_3, a_4, t);
        y_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(v_3), t_3), term_s_10), y_3), term_b_11);
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
      }
  }
  e_4 = t;
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_4 = NULL,i_4 = NULL,l_4 = NULL;
        t = term_q_8;
        i_4 = t;
        t = term_g_11;
        l_4 = t;
        t = term_h_11;
        t = j_7(i_4, l_4, t);
        g_4 = t;
        t = (ATerm) ATinsert(CheckATermList(e_4), g_4);
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = e_4;
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm q_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm w_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_11);
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_4, (ATerm) ATinsert(ATempty, term_i_11));
      t = z_6(q_4, w_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm y_50, ATerm z_50, ATerm t)
{
  ATerm b_5 = NULL;
  t = SSL_write_term_to_stream_baf(y_50, z_50);
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_5);
  return(t);
}
static ATerm n_6 (ATerm i_99 (ATerm), ATerm v_546, ATerm i_51, ATerm t)
{
  ATerm c_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_546, term_m_11);
  t = y_6(t);
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_5, i_51);
  t = i_99(t);
  t = fclose_0_0(t);
  t = i_51;
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(match_cons(n_11, sym_Stream_1))
        {
          f_5 = ATgetArgument(n_11, 0);
        }
      else
        _fail(t);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(f_5, g_5, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL;
  e_5 = t;
  t = xtc_new_file_0_0(t);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_5, e_5);
  t = n_6(c_0, d_5, e_5, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_5);
  t = xtc_transform_file_2_0(q_110, r_110, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm o_6 (ATerm b_50, ATerm c_50, ATerm t)
{
  t = SSL_execvp(b_50, c_50);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm l_7 = NULL,p_7 = NULL,q_7 = NULL,t_7 = NULL;
  l_7 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      p_7 = ATgetArgument(t, 0);
      {
        ATerm x_1 = NULL,y_1 = NULL;
        t = SSL_int_to_string(p_7);
        x_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), x_1), term_o_11);
        y_1 = t;
        t = SSL_concat_strings(y_1);
      }
    }
  else
    {
      ATerm m_2 = NULL,o_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          p_7 = ATgetArgument(t, 0);
          q_7 = ATgetArgument(t, 1);
          t_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_7);
      m_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_7), term_u_11), m_2), term_t_11), p_7);
      o_2 = t;
      t = SSL_concat_strings(o_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm c_8 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = j_84(t);
    if(((c_8 != NULL) && (c_8 != t)))
      _fail(t);
    else
      c_8 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(c_8);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_8 = NULL;
  d_8 = t;
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm i_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_11 = ATgetArgument(t, 0);
              if((d_8 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm a_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_19), term_v_18), term_m_18), term_c_18), term_y_17), term_t_17), term_p_17), term_i_17), term_e_17), term_w_16), term_p_16), term_l_16), term_f_16), term_x_15), term_m_15), term_g_15), term_c_15), term_r_14), term_j_14), term_b_14), term_q_13), term_m_13), term_f_13), term_z_12), term_q_12), term_m_12), term_i_12), term_d_12);
        t = fetch_elem_1_0(i_0, t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, d_8);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm m_8 = NULL,x_8 = NULL;
  m_8 = t;
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_19 = ATgetArgument(t, 0);
            x_8 = ATgetArgument(t, 1);
            {
              ATerm p_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_19);
        {
          ATerm r_19 = t;
          int y_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_3 = NULL,o_3 = NULL,p_3 = NULL;
              t = x_8;
              {
                ATerm z_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_3 = t;
              t = term_c_20;
              o_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_3), term_d_20);
              p_3 = t;
              t = SSL_printnl(o_3, p_3);
              t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATinsert(ATinsert(ATempty, a_3), term_d_20));
              LocalPopChoice(y_19);
            }
          else
            {
              t = r_19;
              t = m_8;
            }
        }
      }
    else
      {
        t = m_19;
        t = m_8;
      }
  }
  t = m_8;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  q_9 = t;
  t = fork_0_0(t);
  p_9 = t;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = q_9;
        t = n_98(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = SSL_waitpid(p_9);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            if(((ATgetType(g_20) != AT_INT) || (ATgetInt((ATermInt) g_20) != 0)))
              _fail(t);
            {
              ATerm h_20 = ATgetArgument(t, 1);
            }
            {
              ATerm i_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = q_9;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,w_9 = NULL,z_9 = NULL,c_10 = NULL;
  u_9 = t;
  t = g_99(t);
  w_9 = t;
  t = term_c_20;
  z_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_9), w_9);
  c_10 = t;
  t = SSL_printnl(z_9, c_10);
  t = u_9;
  return(t);
}
static ATerm q_6 (ATerm b_33, ATerm t)
{
  t = SSL_hashtable_keys(b_33);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm d_10 = NULL,g_10 = NULL;
  static ATerm k_0 (ATerm t)
  {
    ATerm h_10 = NULL,i_10 = NULL;
    h_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), h_10);
    t = j_7(not_null(d_10), h_10, t);
    i_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_10, i_10);
    return(t);
  }
  if(((d_10 != NULL) && (d_10 != t)))
    _fail(t);
  else
    d_10 = t;
  t = lookup_table_0_1(d_10, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6(g_10, t);
  t = map_1_0(k_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm t_109 (ATerm), ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
        t = term_q_8;
        p_10 = t;
        t = term_d_9;
        q_10 = t;
        t = term_i_9;
        t = j_7(p_10, q_10, t);
        o_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_10, term_a_18);
        t = geq_0_0(t);
        t = m_10;
        t = t_109(t);
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = m_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_10 = NULL,z_10 = NULL,e_11 = NULL;
        t = term_q_8;
        z_10 = t;
        t = term_d_9;
        e_11 = t;
        t = term_i_9;
        t = j_7(z_10, e_11, t);
        y_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_10, term_t_14);
        t = geq_0_0(t);
        t = v_10;
        t = s_109(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = v_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm u_109 (ATerm), ATerm t)
{
  ATerm l_11 = NULL;
  l_11 = t;
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL;
        t = term_q_8;
        q_11 = t;
        t = term_d_9;
        r_11 = t;
        t = term_i_9;
        t = j_7(q_11, r_11, t);
        p_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_11, term_o_12);
        t = geq_0_0(t);
        t = l_11;
        t = u_109(t);
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = l_11;
      }
  }
  return(t);
}
static ATerm s_6 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm x_21, ATerm w_21, ATerm t)
{
  t = m_88(t);
  {
    static ATerm n_0 (ATerm t)
    {
      ATerm v_11 = NULL;
      v_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_21, v_11);
      t = l_88(t);
      return(t);
    }
    t = fetch_1_0(n_0, t);
  }
  t = w_21;
  return(t);
}
static ATerm t_6 (ATerm i_88 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  static ATerm b_13 (ATerm t)
  {
    ATerm r_12 = NULL,s_12 = NULL,y_12 = NULL;
    r_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_12 = ATgetFirst((ATermList) t);
            y_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_12;
              {
                static ATerm s_0 (ATerm t)
                {
                  t = s_21;
                  return(t);
                }
                t = s_6(i_88, s_0, s_12, y_12, t);
              }
              t = b_13(t);
              LocalPopChoice(q_20);
            }
          else
            {
              t = p_20;
              {
                ATerm x_3 = NULL,j_4 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(r_12);
                x_3 = t;
                t = y_12;
                t = b_13(t);
                j_4 = t;
                t = (ATerm) ATinsert(CheckATermList(j_4), s_12);
                v_0 = t;
                t = SSLsetAnnotations(v_0, x_3);
              }
            }
        }
      }
    return(t);
  }
  t = t_21;
  t = b_13(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm r_13 = NULL;
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      if((r_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm e_13 = NULL,h_13 = NULL,j_13 = NULL,k_13 = NULL;
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_20 = ATgetArgument(t, 0);
            ATerm u_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
        t = j_7(z_28, a_29, t);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = (ATerm) ATempty;
      }
  }
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_13, b_29);
  t = t_6(u_0, j_13, b_29, t);
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_28, a_29, h_13);
  t = lookup_table_0_1(z_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(a_29, h_13, k_13, t);
  t = e_13;
  return(t);
}
static ATerm v_6 (ATerm f_93 (ATerm), ATerm j_29, ATerm i_29, ATerm t)
{
  static ATerm x_0 (ATerm t)
  {
    ATerm t_13 = NULL,u_13 = NULL;
    if(match_cons(t, sym__2))
      {
        t_13 = ATgetArgument(t, 0);
        u_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, j_29, t_13, u_13);
    t = f_93(t);
    return(t);
  }
  t = i_29;
  t = map_1_0(x_0, t);
  return(t);
}
static ATerm z_6 (ATerm c_14, ATerm d_14, ATerm t)
{
  t = SSL_access(c_14, d_14);
  return(t);
}
static ATerm x_14 (ATerm p_14, ATerm t)
{
  t = SSL_fclose(p_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  v_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_14 = ATgetArgument(t, 0);
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_14);
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            t = x_14(v_14, t);
          }
      }
    }
  else
    {
      t = x_14(v_14, t);
    }
  return(t);
}
static ATerm w_6 (ATerm e_51, ATerm t)
{
  t = SSL_read_term_from_stream(e_51);
  return(t);
}
static ATerm x_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  ATerm y_14 = NULL;
  t = SSL_fopen(l_14, m_14);
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  t = SSL_stdin_stream();
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  t = SSL_stdout_stream();
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  t = SSL_stderr_stream();
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_15);
  return(t);
}
static ATerm a_17 (ATerm j_15, ATerm t)
{
  ATerm k_15 = NULL;
  t = SSL_explode_term(j_15);
  if(match_cons(t, sym__2))
    {
      ATerm x_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_20 = ATgetArgument(t, 1);
        if(((ATgetType(y_20) == AT_LIST) && !(ATisEmpty(y_20))))
          {
            k_15 = ATgetFirst((ATermList) y_20);
            {
              ATerm z_20 = (ATerm) ATgetNext((ATermList) y_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_17 (ATerm n_15, ATerm o_15, ATerm p_15, ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,w_15 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(p_15);
  s_15 = t;
  t = n_15;
  if(match_cons(t, sym_Path_1))
    {
      w_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_15, o_15);
  a_1 = t;
  t = SSLsetAnnotations(a_1, s_15);
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(q_15, r_15, t);
  return(t);
}
static ATerm c_17 (ATerm y_15, ATerm z_15, ATerm a_16, ATerm t)
{
  ATerm b_16 = NULL,j_16 = NULL,k_16 = NULL,q_16 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(a_16);
  k_16 = t;
  t = SSL_is_string(y_15);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_16, z_15);
  b_1 = t;
  t = SSLsetAnnotations(b_1, k_16);
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(b_16, j_16, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,x_16 = NULL;
  s_16 = t;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_17(s_16, t);
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            {
              ATerm c_21 = t;
              int d_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_17(t_16, x_16, s_16, t);
                  LocalPopChoice(d_21);
                }
              else
                {
                  t = c_21;
                  t = c_17(t_16, x_16, s_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_17(s_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,x_17 = NULL;
  x_17 = t;
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_17, term_j_21);
        t = y_6(t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        {
          ATerm i_5 = NULL,j_5 = NULL;
          t = term_k_21;
          j_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_21, x_17);
          t = b_7(j_5, x_17, t);
          i_5 = t;
          t = SSL_perror(i_5);
          _fail(t);
        }
      }
  }
  k_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(l_17, t);
  j_17 = t;
  t = k_17;
  t = fclose_0_0(t);
  t = j_17;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_p_21;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_18 = NULL,g_18 = NULL;
      f_18 = t;
      t = (ATerm) ATinsert(ATempty, term_d_22);
      g_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_18, (ATerm) ATinsert(ATempty, term_d_22));
      t = z_6(f_18, g_18, t);
      LocalPopChoice(c_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_22;
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_22 = t;
            if((PushChoice() == 0))
              {
                ATerm h_18 = NULL,i_18 = NULL;
                h_18 = t;
                t = (ATerm) ATinsert(ATempty, term_i_11);
                i_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_18, (ATerm) ATinsert(ATempty, term_i_11));
                t = z_6(h_18, i_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_22;
              }
            t = debug_1_0(z_0, t);
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            t = debug_1_0(c_1, t);
          }
      }
      t = (ATerm) ATempty;
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
  t = term_i_22;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  t = term_c_20;
  k_19 = t;
  t = (ATerm) ATinsert(ATempty, term_q_22);
  l_19 = t;
  t = SSL_printnl(k_19, l_19);
  t = j_19;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm q_19 = NULL,s_19 = NULL,t_19 = NULL;
  if(match_cons(t, sym__3))
    {
      q_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
      t_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_6(q_19, s_19, t_19, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  t = term_c_20;
  v_19 = t;
  t = (ATerm) ATinsert(ATempty, term_r_22);
  w_19 = t;
  t = SSL_printnl(v_19, w_19);
  t = u_19;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm x_19 = NULL,a_20 = NULL,b_20 = NULL;
  x_19 = t;
  t = term_c_20;
  a_20 = t;
  t = (ATerm) ATinsert(ATempty, term_q_22);
  b_20 = t;
  t = SSL_printnl(a_20, b_20);
  t = x_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,r_18 = NULL,s_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,f_19 = NULL;
  j_18 = t;
  t = if_verbose5_1_0(d_1, t);
  {
    ATerm s_22 = t;
    if((PushChoice() == 0))
      {
        ATerm g_19 = NULL,h_19 = NULL;
        t = term_t_22;
        g_19 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_18);
        h_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_22, (ATerm) ATmakeAppl(sym_Imported_1, j_18));
        t = j_7(g_19, h_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_22;
      }
  }
  n_18 = t;
  t = term_t_22;
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_22, term_u_22, (ATerm) ATinsert(ATempty, j_18));
  t = lookup_table_0_1(z_18, t);
  f_19 = t;
  t = term_u_22;
  a_19 = t;
  t = (ATerm) ATinsert(ATempty, j_18);
  b_19 = t;
  t = f_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(a_19, b_19, c_19, t);
  t = n_18;
  t = if_verbose4_1_0(f_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(k_1, t);
  k_18 = t;
  t = term_t_22;
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_22, k_18);
  t = v_6(q_1, y_18, k_18, t);
  t = if_verbose6_1_0(s_1, t);
  t = term_t_22;
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_22, (ATerm)ATmakeAppl(sym_Imported_1, j_18), (ATerm) ATempty);
  t = lookup_table_0_1(o_18, t);
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, j_18);
  p_18 = t;
  t = (ATerm) ATempty;
  r_18 = t;
  t = x_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(p_18, r_18, s_18, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_22, (ATerm)ATmakeAppl(sym_Imported_1, j_18), (ATerm) ATempty);
  t = if_verbose4_1_0(t_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm v_95 (ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_21 = ATgetFirst((ATermList) t);
          g_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 = NULL,x_5 = NULL,y_5 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(e_21);
            q_5 = t;
            t = f_21;
            t = v_95(t);
            x_5 = t;
            t = g_21;
            t = filter_1_0(v_95, t);
            y_5 = t;
            t = (ATerm) ATinsert(CheckATermList(y_5), x_5);
            g_1 = t;
            t = SSLsetAnnotations(g_1, q_5);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = g_21;
            t = filter_1_0(v_95, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm t)
{
  static ATerm l_21 (ATerm t)
  {
    ATerm x_22 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_82(t);
        t = l_21(t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = x_22;
        t = c_82(t);
      }
    return(t);
  }
  t = l_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_21 = NULL,n_21 = NULL;
      t = term_q_8;
      m_21 = t;
      t = term_e_23;
      n_21 = t;
      t = term_f_23;
      t = j_7(m_21, n_21, t);
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_21 = NULL;
            t = term_i_23;
            o_21 = t;
            t = SSL_getenv(o_21);
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_j_23;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm z_21 = NULL,b_22 = NULL;
  t = term_t_22;
  z_21 = t;
  t = term_m_23;
  b_22 = t;
  t = term_q_23;
  t = j_7(z_21, b_22, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm u_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_23;
      }
  }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm q_21 = NULL;
  t = if_verbose5_1_0(u_1, t);
  q_21 = t;
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_21 = NULL,u_21 = NULL;
        t = term_t_22;
        r_21 = t;
        t = term_u_22;
        u_21 = t;
        t = term_y_23;
        t = j_7(r_21, u_21, t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        {
          ATerm v_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          v_21 = t;
          t = repeat_2_0(w_1, _id, t);
          t = v_21;
        }
      }
  }
  t = q_21;
  t = if_verbose5_1_0(z_1, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_z_23;
  return(t);
}
static ATerm l_23 (ATerm h_22, ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,m_22 = NULL;
  t = term_t_22;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_22);
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_22, (ATerm) ATmakeAppl(sym_Tool_1, h_22));
  t = j_7(k_22, m_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_24 = ATgetFirst((ATermList) t);
      if(match_cons(a_24, sym__2))
        {
          ATerm c_24 = ATgetArgument(a_24, 0);
          j_22 = ATgetArgument(a_24, 1);
        }
      else
        _fail(t);
      {
        ATerm b_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_22;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_z_23;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_t_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
      t = if_verbose5_1_0(d_2, t);
      t = xtc_load_0_0(t);
      p_22 = t;
      if(match_cons(t, sym__2))
        {
          n_22 = ATgetArgument(t, 0);
          o_22 = ATgetArgument(t, 1);
          {
            ATerm g_24 = t;
            int h_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
                t = term_t_22;
                z_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, n_22);
                a_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_22, (ATerm) ATmakeAppl(sym_Tool_1, n_22));
                t = j_7(z_22, a_23, t);
                {
                  static ATerm f_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((o_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((y_22 != NULL) && (y_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(f_2, t);
                }
                t = not_null(y_22);
                LocalPopChoice(h_24);
              }
            else
              {
                t = g_24;
                t = l_23(p_22, t);
              }
          }
        }
      else
        {
          t = l_23(p_22, t);
        }
      t = if_verbose5_1_0(g_2, t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      {
        ATerm k_23 = NULL,i_6 = NULL,k_6 = NULL;
        k_23 = t;
        t = term_c_20;
        i_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_24), k_23), term_i_24);
        k_6 = t;
        t = SSL_printnl(i_6, k_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_24), k_23), term_i_24);
        t = if_verbose5_1_0(i_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  o_23 = t;
  t = r_111(t);
  t = xtc_find_0_0(t);
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_23, o_23);
  {
    static ATerm k_2 (ATerm t)
    {
      ATerm p_23 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_23, o_23);
      t = o_6(n_23, o_23, t);
      t = term_k_24;
      p_23 = t;
      t = SSL_exit(p_23);
      return(t);
    }
    t = fork_and_wait_1_0(k_2, t);
  }
  t = o_23;
  return(t);
}
ATerm at_end_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  static ATerm r_24 (ATerm t)
  {
    ATerm m_24 = NULL,n_24 = NULL,q_24 = NULL;
    q_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_24 = ATgetFirst((ATermList) t);
        n_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_7 = NULL,b_8 = NULL,j_1 = NULL;
          t = SSLgetAnnotations(q_24);
          y_7 = t;
          t = n_24;
          t = r_24(t);
          b_8 = t;
          t = (ATerm) ATinsert(CheckATermList(b_8), m_24);
          j_1 = t;
          t = SSLsetAnnotations(j_1, y_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_24;
        t = o_84(t);
      }
    return(t);
  }
  t = r_24(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_23;
    }
  else
    {
      static ATerm l_2 (ATerm t)
      {
        t = not_null(t_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_23 = ATgetFirst((ATermList) t);
          if(((t_23 != NULL) && (t_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_23;
      t = at_end_1_0(l_2, t);
    }
  return(t);
}
static ATerm j_25 (ATerm x_24, ATerm t)
{
  ATerm z_24 = NULL;
  t = SSL_explode_term(x_24);
  if(match_cons(t, sym__2))
    {
      ATerm l_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,e_25 = NULL;
  e_25 = t;
  if(match_cons(t, sym__2))
    {
      b_25 = ATgetArgument(t, 0);
      c_25 = ATgetArgument(t, 1);
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_2 (ATerm t)
            {
              t = c_25;
              return(t);
            }
            t = b_25;
            t = at_end_1_0(p_2, t);
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            t = j_25(e_25, t);
          }
      }
    }
  else
    {
      t = j_25(e_25, t);
    }
  return(t);
}
static ATerm a_7 (ATerm x_92 (ATerm), ATerm y_26, ATerm w_26, ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,a_26 = NULL;
  s_25 = t;
  t = x_92(t);
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_25, y_26, w_26);
  t = k_7(m_25, y_26, w_26, t);
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_26 = NULL;
        t = term_u_24;
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_25, term_u_24);
        t = j_7(m_25, d_26, t);
        {
          ATerm v_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_24;
            }
        }
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_25 = ATgetFirst((ATermList) t);
      o_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_25, term_u_24, (ATerm) ATinsert(CheckATermList(o_25), (ATerm) ATinsert(CheckATermList(n_25), y_26)));
  t = lookup_table_0_1(m_25, t);
  a_26 = t;
  t = term_u_24;
  t_25 = t;
  t = (ATerm) ATinsert(CheckATermList(o_25), (ATerm) ATinsert(CheckATermList(n_25), y_26));
  u_25 = t;
  t = a_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(t_25, u_25, v_25, t);
  t = s_25;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_26 = NULL;
  ATerm w_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_26 = NULL,k_8 = NULL;
      k_26 = t;
      t = term_a_25;
      k_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_26, term_a_25);
      t = b_7(k_26, k_8, t);
      g_26 = t;
      t = SSL_mkstemp(g_26);
      LocalPopChoice(y_24);
    }
  else
    {
      t = w_24;
      {
        ATerm l_26 = NULL;
        t = term_d_25;
        l_26 = t;
        t = SSL_perror(l_26);
        _fail(t);
      }
    }
  return(t);
}
static ATerm b_7 (ATerm p_46, ATerm q_46, ATerm t)
{
  t = SSL_strcat(p_46, q_46);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_27 = NULL,d_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  t = P__tmpdir_0_0(t);
  i_27 = t;
  t = term_g_25;
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_27, term_g_25);
  t = b_7(i_27, j_27, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      d_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_r_10;
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_27, term_r_10);
  t = a_7(q_2, d_27, h_27, t);
  t = SSL_close(b_27);
  t = d_27;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  m_27 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_27 = NULL,q_27 = NULL;
      t = m_27;
      t = xtc_new_file_0_0(t);
      o_27 = t;
      t = t_0(t);
      q_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_27, (ATerm) ATinsert(ATinsert(ATempty, o_27), term_r_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_27);
    }
  else
    {
      ATerm u_27 = NULL,a_28 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_27;
      t = xtc_new_file_0_0(t);
      u_27 = t;
      t = t_0(t);
      a_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_27), term_r_8), n_27), term_h_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_27);
    }
  return(t);
}
static ATerm j_7 (ATerm v_29, ATerm w_29, ATerm t)
{
  ATerm f_28 = NULL;
  t = lookup_table_0_1(v_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(w_29, f_28, t);
  return(t);
}
static ATerm d_7 (ATerm h_28, ATerm i_28, ATerm t)
{
  ATerm k_28 = NULL,n_28 = NULL;
  n_28 = t;
  {
    ATerm i_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
        t = j_7(h_28, i_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_25 = ATgetFirst((ATermList) t);
            k_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_25);
        {
          ATerm o_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, h_28, i_28, k_28);
          t = lookup_table_0_1(h_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_7(i_28, k_28, o_28, t);
          t = (ATerm) ATmakeAppl(sym__3, h_28, i_28, k_28);
        }
      }
    else
      {
        t = i_25;
        {
          ATerm r_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
          t = lookup_table_0_1(h_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_7(i_28, r_28, t);
          t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
        }
      }
  }
  t = n_28;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_92 (ATerm), ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,e_29 = NULL,f_29 = NULL,s_29 = NULL,t_29 = NULL;
  e_29 = t;
  t = u_92(t);
  x_28 = t;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_29 = NULL;
        t = term_u_24;
        u_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_28, term_u_24);
        t = j_7(x_28, u_29, t);
        {
          ATerm z_25 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_25;
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
      w_28 = ATgetFirst((ATermList) t);
      v_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_28, term_u_24, v_28);
  t = lookup_table_0_1(x_28, t);
  t_29 = t;
  t = term_u_24;
  f_29 = t;
  t = t_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(f_29, v_28, s_29, t);
  t = w_28;
  {
    static ATerm r_2 (ATerm t)
    {
      ATerm x_29 = NULL;
      x_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_28, x_29);
      t = d_7(x_28, x_29, t);
      return(t);
    }
    t = map_1_0(r_2, t);
  }
  t = e_29;
  return(t);
}
ATerm restore_always_2_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_81(t);
      t = x_81(t);
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      t = x_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,i_30 = NULL;
  b_30 = t;
  t = t_92(t);
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_29, term_u_24);
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_30 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_26 = ATgetArgument(t, 0);
            ATerm i_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_24;
        m_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_29, term_u_24);
        t = j_7(z_29, m_30, t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = (ATerm) ATempty;
      }
  }
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_29, term_u_24, (ATerm) ATinsert(CheckATermList(c_30), (ATerm) ATempty));
  t = lookup_table_0_1(z_29, t);
  i_30 = t;
  t = term_u_24;
  d_30 = t;
  t = (ATerm) ATinsert(CheckATermList(c_30), (ATerm) ATempty);
  e_30 = t;
  t = i_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(d_30, e_30, f_30, t);
  t = b_30;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  {
    ATerm j_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_31);
        LocalPopChoice(m_26);
      }
    else
      {
        t = j_26;
        t = b_31;
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  ATerm r_30 = NULL;
  static ATerm u_2 (ATerm t)
  {
    ATerm s_30 = NULL;
    s_30 = t;
    {
      ATerm n_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_30 = NULL,w_30 = NULL;
          t = term_f_25;
          v_30 = t;
          t = term_u_24;
          w_30 = t;
          t = term_p_26;
          t = j_7(v_30, w_30, t);
          LocalPopChoice(o_26);
        }
      else
        {
          t = n_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_30 != NULL) && (r_30 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_30 = ATgetFirst((ATermList) t);
        {
          ATerm q_26 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_30;
    t = map_1_0(z_2, t);
    t = s_30;
    t = end_scope_1_0(m_3, t);
    return(t);
  }
  t = begin_scope_1_0(s_2, t);
  t = restore_always_2_0(d_111, u_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  h_31 = t;
  t = term_r_10;
  t = whoami_0_0(t);
  i_31 = t;
  t = term_c_20;
  k_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_26), i_31), term_r_26);
  l_31 = t;
  t = SSL_printnl(k_31, l_31);
  t = term_j_9;
  j_31 = t;
  t = SSL_exit(j_31);
  t = h_31;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm n_31 = NULL;
  n_31 = t;
  if(match_string(t, "-k"))
    {
      t = n_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_31;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  t = SSL_string_to_int(o_31);
  p_31 = t;
  t = term_t_26;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_26, p_31);
  t = m_7(q_31, p_31, t);
  t = o_31;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  if(match_string(t, "-S"))
    {
      t = t_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_31;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  t = term_d_9;
  v_31 = t;
  t = term_v_26;
  w_31 = t;
  t = term_x_26;
  t = m_7(v_31, w_31, t);
  t = term_z_26;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_a_27;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  t = SSL_string_to_int(x_31);
  y_31 = t;
  t = term_d_9;
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_9, y_31);
  t = m_7(z_31, y_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_31);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  t = term_e_27;
  c_32 = t;
  t = term_r_10;
  d_32 = t;
  t = term_f_27;
  t = m_7(c_32, d_32, t);
  t = term_g_27;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, w_3, b_4, t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = l_27;
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_4, d_4, f_4, t);
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            t = Option_3_0(h_4, k_4, m_4, t);
          }
      }
    }
  return(t);
}
static ATerm m_7 (ATerm u_58, ATerm v_58, ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL;
  t = term_q_8;
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_8, u_58, v_58);
  t = lookup_table_0_1(e_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(u_58, v_58, f_32, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_8, u_58, v_58);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
      t = term_r_10;
      t = h_0(t);
      n_32 = t;
      t = term_t_27;
      o_32 = t;
      t = term_v_27;
      p_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_v_27, n_32);
      t = k_7(o_32, p_32, n_32, t);
      _fail(t);
    }
  else
    {
      ATerm s_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_32 = ATgetFirst((ATermList) t);
          m_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_32;
      t = d_0(t);
      t = term_r_10;
      t = g_0(t);
      s_32 = t;
      t = (ATerm) ATinsert(CheckATermList(m_32), s_32);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  if(match_string(t, "-o"))
    {
      t = f_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_33;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  g_33 = t;
  t = term_r_8;
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_8, g_33);
  t = m_7(h_33, g_33, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_33);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  if(match_string(t, "-i"))
    {
      t = k_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_33;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  l_33 = t;
  t = term_h_25;
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, l_33);
  t = m_7(m_33, l_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_33);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm k_7 (ATerm c_28, ATerm d_28, ATerm b_28, ATerm t)
{
  ATerm o_33 = NULL,r_33 = NULL,s_33 = NULL,z_33 = NULL,c_34 = NULL;
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_28 = ATgetArgument(t, 0);
            ATerm g_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        t = j_7(c_28, d_28, t);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATempty;
      }
  }
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, (ATerm) ATinsert(CheckATermList(r_33), b_28));
  t = lookup_table_0_1(c_28, t);
  c_34 = t;
  t = (ATerm) ATinsert(CheckATermList(r_33), b_28);
  s_33 = t;
  t = c_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(d_28, s_33, z_33, t);
  t = o_33;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_34 = NULL,s_34 = NULL,v_34 = NULL;
      t = term_r_10;
      t = p_0(t);
      r_34 = t;
      t = term_t_27;
      s_34 = t;
      t = term_v_27;
      v_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_v_27, r_34);
      t = k_7(s_34, v_34, r_34, t);
      _fail(t);
    }
  else
    {
      ATerm z_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_34 = ATgetFirst((ATermList) t);
          n_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_34 = ATgetFirst((ATermList) t);
          p_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_34;
      t = m_0(t);
      t = o_34;
      t = o_0(t);
      z_34 = t;
      t = (ATerm) ATinsert(CheckATermList(p_34), z_34);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alltt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  t = term_g_11;
  d_35 = t;
  t = term_j_28;
  e_35 = t;
  t = term_l_28;
  t = m_7(d_35, e_35, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_m_28;
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
  ATerm f_35 = NULL,g_35 = NULL;
  t = term_g_11;
  f_35 = t;
  t = term_p_28;
  g_35 = t;
  t = term_q_28;
  t = m_7(f_35, g_35, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_s_28;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm h_35 = NULL;
  h_35 = t;
  if(match_string(t, "-t"))
    {
      t = h_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--latex-table", 0, ATtrue)))
        _fail(t);
      t = h_35;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL;
  k_35 = t;
  t = term_t_28;
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_28, k_35);
  t = m_7(l_35, k_35, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_u_28;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  if(match_string(t, "-w"))
    {
      t = m_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = m_35;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  n_35 = t;
  t = term_x_10;
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, n_35);
  t = m_7(o_35, n_35, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_4, v_4, x_4, t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(y_4, z_4, a_5, t);
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            {
              ATerm k_29 = t;
              int l_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(h_5, k_5, l_5, t);
                  LocalPopChoice(l_29);
                }
              else
                {
                  t = k_29;
                  t = ArgOption_3_0(m_5, n_5, o_5, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_10;
  t = whoami_0_0(t);
  p_35 = t;
  t = term_c_20;
  r_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_29), p_35);
  s_35 = t;
  t = SSL_printnl(r_35, s_35);
  t = term_j_9;
  q_35 = t;
  t = SSL_exit(q_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_35 = NULL,y_35 = NULL;
  t = term_q_8;
  v_35 = t;
  t = term_n_29;
  y_35 = t;
  t = term_p_29;
  t = j_7(v_35, y_35, t);
  return(t);
}
static ATerm e_7 (ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_25, l_25);
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      t = SSL_addr(k_25, l_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,e_36 = NULL;
  a_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_36;
      t = l_91(t);
    }
  else
    {
      ATerm h_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_36 = ATgetFirst((ATermList) t);
          e_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_36;
      t = foldr_2_0(l_91, m_91, t);
      h_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_36, h_36);
      t = m_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_v_26;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm e_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(e_9, h_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_36 = NULL,v_8 = NULL,y_8 = NULL;
  t = times_0_0(t);
  y_8 = t;
  t = SSL_explode_term(y_8);
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8;
  t = foldr_2_0(p_5, s_5, t);
  o_36 = t;
  t = SSL_TicksToSeconds(o_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_37 = NULL,k_37 = NULL,l_37 = NULL;
  h_37 = t;
  if(match_cons(t, sym__2))
    {
      k_37 = ATgetArgument(t, 0);
      l_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_37;
        if((k_37 != t))
          {
            _fail(t);
          }
        t = h_37;
        LocalPopChoice(g_30);
      }
    else
      {
        t = a_30;
        t = (ATerm) ATmakeAppl(sym__2, k_37, l_37);
        {
          ATerm h_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_37, l_37);
              LocalPopChoice(j_30);
            }
          else
            {
              t = h_30;
              t = SSL_gtr(k_37, l_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_37, l_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_37 = NULL,y_37 = NULL,b_38 = NULL;
        t = term_q_8;
        y_37 = t;
        t = term_d_9;
        b_38 = t;
        t = term_i_9;
        t = j_7(y_37, b_38, t);
        x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_37, term_j_9);
        t = geq_0_0(t);
        t = v_37;
        t = p_109(t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        t = v_37;
      }
  }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm d_38 = NULL,g_38 = NULL,j_38 = NULL,k_38 = NULL;
  t = run_time_0_0(t);
  d_38 = t;
  t = term_r_10;
  t = whoami_0_0(t);
  g_38 = t;
  t = term_c_20;
  j_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_30), d_38), term_t_11), g_38);
  k_38 = t;
  t = SSL_printnl(j_38, k_38);
  t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_30), d_38), term_t_11), g_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_26;
  m_38 = t;
  t = SSL_exit(m_38);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL;
  z_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_38 = ATgetArgument(t, 0);
          {
            ATerm y_9 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(z_38);
            y_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_38);
            r_1 = t;
            t = SSLsetAnnotations(r_1, y_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_77 (ATerm), ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_38 = NULL,s_38 = NULL;
      t = term_q_8;
      r_38 = t;
      t = term_q_30;
      s_38 = t;
      t = term_t_30;
      t = j_7(r_38, s_38, t);
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      t = fetch_1_0(v_5, t);
    }
  t = g_77(t);
  return(t);
}
static ATerm n_7 (ATerm u_32, ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm b_39 = NULL;
  t = SSL_hashtable_put(w_32, u_32, v_32);
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_39);
  return(t);
}
static ATerm o_7 (ATerm x_32, ATerm y_32, ATerm t)
{
  t = SSL_hashtable_get(y_32, x_32);
  return(t);
}
ATerm lookup_table_0_1 (ATerm o_29, ATerm t)
{
  ATerm p_39 = NULL;
  t = table_hashtable_0_0(t);
  p_39 = t;
  {
    ATerm u_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_10 = NULL;
        t = p_39;
        if(match_cons(t, sym_Hashtable_1))
          {
            k_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_7(o_29, k_10, t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = u_30;
        {
          ATerm w_10 = NULL;
          t = o_29;
          t = table_create_0_0(t);
          t = p_39;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_7(o_29, w_10, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm s_39 = NULL;
  t = SSL_hashtable_create(c_33, d_33);
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_39);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,x_39 = NULL,y_39 = NULL;
  t_39 = t;
  t = term_y_30;
  x_39 = t;
  t = term_z_30;
  y_39 = t;
  t = t_39;
  t = new_hashtable_0_2(x_39, y_39, t);
  u_39 = t;
  t = t_39;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(t_39, u_39, v_39, t);
  t = t_39;
  return(t);
}
static ATerm g_7 (ATerm z_32, ATerm a_33, ATerm t)
{
  ATerm z_39 = NULL;
  t = SSL_hashtable_remove(a_33, z_32);
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_39);
  return(t);
}
static ATerm h_7 (ATerm e_33, ATerm t)
{
  ATerm a_40 = NULL;
  t = SSL_hashtable_destroy(e_33);
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_40);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_40 = NULL;
  t = SSL_table_hashtable();
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_40);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
  c_40 = t;
  t = table_hashtable_0_0(t);
  d_40 = t;
  t = lookup_table_0_1(c_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_7(f_40, t);
  t = d_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(c_40, e_40, t);
  t = c_40;
  return(t);
}
ATerm map_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  static ATerm u_40 (ATerm t)
  {
    ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
    r_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_40;
      }
    else
      {
        ATerm f_11 = NULL,j_11 = NULL,k_11 = NULL,a_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_40 = ATgetFirst((ATermList) t);
            t_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_40);
        f_11 = t;
        t = s_40;
        t = x_83(t);
        j_11 = t;
        t = t_40;
        t = u_40(t);
        k_11 = t;
        t = (ATerm) ATinsert(CheckATermList(k_11), j_11);
        a_2 = t;
        t = SSLsetAnnotations(a_2, f_11);
      }
    return(t);
  }
  t = u_40(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_40 = ATgetFirst((ATermList) t);
      y_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_41 = NULL,d_41 = NULL;
        static ATerm w_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_41)), not_null(d_41));
          return(t);
        }
        t = y_40;
        t = l_0(t);
        if(((c_41 != NULL) && (c_41 != t)))
          _fail(t);
        else
          c_41 = t;
        t = x_40;
        t = j_0(t);
        if(((d_41 != NULL) && (d_41 != t)))
          _fail(t);
        else
          d_41 = t;
        t = y_40;
        t = reverse_acc_2_0(j_0, w_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_10;
      t = l_0(t);
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,c_2 = NULL;
  l_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_41);
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_41);
  c_2 = t;
  t = SSLsetAnnotations(c_2, j_41);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm n_41 = NULL;
  n_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_41), term_a_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL;
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_41 = NULL,i_41 = NULL;
      t = term_q_8;
      h_41 = t;
      t = term_n_29;
      i_41 = t;
      t = term_p_29;
      t = j_7(h_41, i_41, t);
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      t = fetch_1_0(z_5, t);
    }
  t = term_e_31;
  t = echo_0_0(t);
  t = term_t_27;
  f_41 = t;
  t = term_v_27;
  g_41 = t;
  t = term_f_31;
  t = j_7(f_41, g_41, t);
  t = reverse_acc_2_0(_id, a_6, t);
  t = map_1_0(c_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  static ATerm k_42 (ATerm t)
  {
    ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
    h_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_42 = ATgetFirst((ATermList) t);
        j_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_31 = t;
      int m_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_11 = NULL,e_12 = NULL,n_2 = NULL;
          t = SSLgetAnnotations(h_42);
          z_11 = t;
          t = i_42;
          t = h_84(t);
          e_12 = t;
          t = (ATerm) ATinsert(CheckATermList(j_42), e_12);
          n_2 = t;
          t = SSLsetAnnotations(n_2, z_11);
          LocalPopChoice(m_31);
        }
      else
        {
          t = g_31;
          {
            ATerm u_12 = NULL,x_12 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(h_42);
            u_12 = t;
            t = j_42;
            t = k_42(t);
            x_12 = t;
            t = (ATerm) ATinsert(CheckATermList(x_12), i_42);
            x_2 = t;
            t = SSLsetAnnotations(x_2, u_12);
          }
        }
    }
    return(t);
  }
  t = k_42(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_31 = ATgetFirst((ATermList) t);
                ATerm a_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_42;
          }
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        t = (ATerm) ATinsert(ATempty, o_42);
      }
  }
  p_42 = t;
  t = term_t_8;
  q_42 = t;
  t = SSL_printnl(q_42, p_42);
  t = o_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL;
  t = term_q_8;
  u_42 = t;
  t = term_n_29;
  v_42 = t;
  t = term_p_29;
  t = j_7(u_42, v_42, t);
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
  ATerm w_42 = NULL,x_42 = NULL;
  t = term_b_32;
  w_42 = t;
  t = term_r_10;
  x_42 = t;
  t = term_g_32;
  t = m_7(w_42, x_42, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_h_32;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
  t = term_b_32;
  a_43 = t;
  t = term_r_10;
  b_43 = t;
  t = term_g_32;
  t = m_7(a_43, b_43, t);
  t = term_i_32;
  y_42 = t;
  t = term_r_10;
  z_42 = t;
  t = term_j_32;
  t = m_7(y_42, z_42, t);
  t = term_k_32;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_6, f_6, g_6, t);
      LocalPopChoice(t_32);
    }
  else
    {
      t = r_32;
      t = Option_3_0(h_6, j_6, p_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,r_5 = NULL;
  h_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_43 = ATgetFirst((ATermList) t);
      e_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_43);
  c_43 = t;
  t = d_43;
  t = l_70(t);
  f_43 = t;
  t = e_43;
  t = m_70(t);
  g_43 = t;
  t = (ATerm) ATinsert(CheckATermList(g_43), f_43);
  r_5 = t;
  t = SSLsetAnnotations(r_5, c_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,r_43 = NULL,s_43 = NULL,t_5 = NULL;
  m_43 = t;
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_33;
        t = p_101(t);
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
      }
  }
  t = m_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_43 = ATgetFirst((ATermList) t);
      p_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_43);
  n_43 = t;
  t = term_n_29;
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_29, o_43);
  t = m_7(s_43, o_43, t);
  t = p_43;
  {
    static ATerm c_44 (ATerm t)
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_43 = NULL;
              v_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_43;
              LocalPopChoice(u_33);
            }
          else
            {
              t = t_33;
              t = p_101(t);
              t = Cons_2_0(_id, c_44, t);
            }
          LocalPopChoice(q_33);
        }
      else
        {
          t = p_33;
          {
            ATerm y_43 = NULL,z_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_43 = ATgetFirst((ATermList) t);
                z_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_43), (ATerm) ATmakeAppl(sym_Undefined_1, y_43));
          }
        }
      return(t);
    }
    t = c_44(t);
  }
  r_43 = t;
  t = (ATerm) ATinsert(CheckATermList(r_43), (ATerm) ATmakeAppl(sym_Program_1, o_43));
  t_5 = t;
  t = SSLsetAnnotations(t_5, n_43);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm p_44 = NULL;
  p_44 = t;
  if(match_string(t, "--help"))
    {
      t = p_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_44;
        }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  t = term_q_30;
  q_44 = t;
  t = term_r_10;
  r_44 = t;
  t = term_v_33;
  t = m_7(q_44, r_44, t);
  t = term_w_33;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_x_33;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL;
  j_44 = t;
  t = term_t_27;
  k_44 = t;
  t = term_y_33;
  t = lookup_table_0_1(k_44, t);
  o_44 = t;
  t = term_v_27;
  l_44 = t;
  t = (ATerm) ATempty;
  m_44 = t;
  t = o_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(l_44, m_44, n_44, t);
  t = j_44;
  {
    static ATerm r_6 (ATerm t)
    {
      ATerm a_34 = t;
      int b_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_101(t);
          LocalPopChoice(b_34);
        }
      else
        {
          t = a_34;
          {
            ATerm d_34 = t;
            int e_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_7, i_7, r_7, t);
                LocalPopChoice(e_34);
              }
            else
              {
                t = d_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_6, t);
  }
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_45 = NULL;
        c_45 = t;
        {
          ATerm h_34 = t;
          int i_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_13 = NULL;
              t = c_45;
              {
                ATerm j_34 = t;
                int k_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_13 = NULL,w_13 = NULL;
                    t = term_q_8;
                    v_13 = t;
                    t = term_q_30;
                    w_13 = t;
                    t = term_t_30;
                    t = j_7(v_13, w_13, t);
                    LocalPopChoice(k_34);
                  }
                else
                  {
                    t = j_34;
                    t = fetch_1_0(s_7, t);
                  }
              }
              t = c_45;
              t = default_system_usage_0_0(t);
              t = term_v_26;
              s_13 = t;
              t = SSL_exit(s_13);
              LocalPopChoice(i_34);
            }
          else
            {
              t = h_34;
              {
                ATerm a_14 = NULL,f_14 = NULL,g_14 = NULL;
                t = term_q_8;
                f_14 = t;
                t = term_b_32;
                g_14 = t;
                t = term_l_34;
                t = j_7(f_14, g_14, t);
                t = c_45;
                t = default_system_about_0_0(t);
                t = term_v_26;
                a_14 = t;
                t = SSL_exit(a_14);
              }
            }
        }
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        {
          ATerm q_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
              static ATerm u_7 (ATerm t)
              {
                ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,b_6 = NULL;
                i_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_45);
                g_45 = t;
                t = h_45;
                if(((h_44 != NULL) && (h_44 != t)))
                  _fail(t);
                else
                  h_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_45);
                b_6 = t;
                t = SSLsetAnnotations(b_6, g_45);
                return(t);
              }
              t = fetch_1_0(u_7, t);
              t = term_c_20;
              e_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_44)), term_u_34);
              f_45 = t;
              t = SSL_printnl(e_45, f_45);
              t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_44)), term_u_34));
              t = default_system_usage_0_0(t);
              t = term_j_9;
              d_45 = t;
              t = SSL_exit(d_45);
              LocalPopChoice(t_34);
            }
          else
            {
              t = q_34;
            }
        }
      }
  }
  i_44 = t;
  t = term_t_27;
  t = table_destroy_0_0(t);
  t = i_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL;
  t = parse_options_1_0(i_77, t);
  n_45 = t;
  t = term_w_34;
  t = table_create_0_0(t);
  t = term_w_34;
  o_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_34, term_x_34, n_45);
  t = lookup_table_0_1(o_45, t);
  r_45 = t;
  t = term_x_34;
  p_45 = t;
  t = r_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(p_45, n_45, q_45, t);
  t = n_45;
  t = k_77(t);
  {
    ATerm y_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_77, t);
        LocalPopChoice(a_35);
      }
    else
      {
        t = y_34;
        {
          ATerm b_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_77(t);
              t = report_success_0_0(t);
              LocalPopChoice(c_35);
            }
          else
            {
              t = b_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2latex_options_0_0(t);
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
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
              ATerm w_35 = t;
              int x_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(x_35);
                }
              else
                {
                  t = w_35;
                  {
                    ATerm z_35 = t;
                    int c_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(x_7, z_7, a_8, t);
                        LocalPopChoice(c_36);
                      }
                    else
                      {
                        t = z_35;
                        {
                          ATerm d_36 = t;
                          int f_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(f_36);
                            }
                          else
                            {
                              t = d_36;
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
static ATerm w_7 (ATerm t)
{
  t = xtc_temp_files_1_0(e_8, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL;
  t = term_g_36;
  v_45 = t;
  t = term_r_10;
  w_45 = t;
  t = term_i_36;
  t = m_7(v_45, w_45, t);
  t = term_j_36;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm l_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
      t = term_q_8;
      z_45 = t;
      t = term_h_25;
      a_46 = t;
      t = term_n_36;
      t = j_7(z_45, a_46, t);
      y_45 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_45);
      LocalPopChoice(m_36);
    }
  else
    {
      t = l_36;
      t = term_z_8;
    }
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_46 = NULL,h_46 = NULL;
        h_46 = t;
        if(match_cons(t, sym_FILE_1))
          {
            g_46 = ATgetArgument(t, 0);
            {
              ATerm o_14 = NULL,d_6 = NULL;
              t = SSLgetAnnotations(h_46);
              o_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_46);
              d_6 = t;
              t = SSLsetAnnotations(d_6, o_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_46;
          }
        LocalPopChoice(q_36);
        t = xtc_transform_file_2_0(f_8, create_abox2latex_args_0_0, t);
      }
    else
      {
        t = p_36;
        t = xtc_transform_term_2_0(g_8, create_abox2latex_args_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_r_36;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_7, default_usage_0_0, _id, w_7, t);
  return(t);
}
