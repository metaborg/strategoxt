#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
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
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_d_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_f_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_i_32;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_x_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_i_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_e_28;
ATerm term_b_28;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_h_27;
ATerm term_b_27;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_a_24;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_i_23;
ATerm term_e_23;
ATerm term_a_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_j_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_a_21;
ATerm term_w_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_v_18;
ATerm term_r_18;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
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
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
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
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_g_9;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_p_8;
void init_constant_terms (void)
{
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_x_8, term_t_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_z_11, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_f_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_g_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_q_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_u_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_b_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_h_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_w_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_i_15, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_p_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_a_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_r_21);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_b_25, term_m_24);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_o_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_t_29, term_o_9);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_i_29);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_o_33, term_o_9);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym__2, term_r_33, term_o_9);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_p_32, term_o_9);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm pass_width_0_0 (ATerm);
ATerm c_6 (ATerm l_43, ATerm m_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm j_1 (ATerm);
ATerm xtc_abox2text_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm d_6 (ATerm u_27, ATerm v_27, ATerm);
ATerm e_6 (ATerm k_72 (ATerm), ATerm n_180, ATerm c_28, ATerm);
ATerm n_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm);
ATerm f_6 (ATerm q_24, ATerm r_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm p_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm z_70 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm h_100 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm i_6 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm x_34, ATerm w_34, ATerm);
ATerm j_6 (ATerm h_80 (ATerm), ATerm t_34, ATerm s_34, ATerm);
ATerm v_1 (ATerm);
ATerm k_6 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm);
ATerm l_6 (ATerm t_87 (ATerm), ATerm r_46, ATerm q_46, ATerm);
ATerm y_8 (ATerm o_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm m_6 (ATerm a_28, ATerm);
ATerm n_6 (ATerm w_48, ATerm x_48, ATerm);
ATerm _2_0 (ATerm g_59 (ATerm), ATerm h_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm y_12 (ATerm e_12, ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm o_6 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm);
ATerm v_14 (ATerm g_14, ATerm);
ATerm y_14 (ATerm i_14, ATerm k_14, ATerm l_14, ATerm);
ATerm n_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm p_6 (ATerm o_48, ATerm p_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm q_6 (ATerm w_24, ATerm x_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm r_6 (ATerm p_45, ATerm q_45, ATerm);
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm xtc_io_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm ast2text_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm c_21 (ATerm p_20, ATerm);
ATerm conc_0_0 (ATerm);
ATerm s_6 (ATerm q_47, ATerm p_47, ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm j_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm g_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_6 (ATerm f_43, ATerm g_43, ATerm);
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm f_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm need_help_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm b_69 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_69 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_6 (ATerm b_42, ATerm c_42, ATerm);
ATerm debug_1_0 (ATerm i_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm a_7 (ATerm k_47, ATerm l_47, ATerm);
ATerm x_6 (ATerm b_47, ATerm c_47, ATerm);
ATerm y_6 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_93 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm parse_options_1_0 (ATerm o_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_8;
      t = get_config_0_0(t);
      LocalPopChoice(n_8);
      {
        ATerm f_0 = NULL;
        f_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_p_8);
      }
    }
  else
    {
      t = m_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm c_6 (ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_43, m_43);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      t = SSL_subtr(l_43, m_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm n_0 = NULL,q_0 = NULL,r_0 = NULL,t_0 = NULL;
  t = term_s_8;
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        t = term_x_8;
      }
    n_0 = t;
    t = term_x_8;
    r_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_0, term_x_8);
    t = c_6(n_0, r_0, t);
    t_0 = t;
    t = SSL_int_to_string(t_0);
    q_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, q_0), term_s_8);
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm xtc_abox2text_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm h_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(l_9);
      {
        ATerm h_1 (ATerm t)
        {
          ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL;
          t = term_o_9;
          t = o_90(t);
          y_0 = t;
          t = SSL_int_to_string(y_0);
          w_0 = t;
          t = term_o_9;
          t = pass_verbose_0_0(t);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, w_0), term_p_8), x_0);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(g_1, h_1, t);
      }
    }
  else
    {
      t = h_9;
      {
        ATerm k_1 (ATerm t)
        {
          ATerm c_1 = NULL,i_1 = NULL,p_1 = NULL;
          t = term_o_9;
          t = o_90(t);
          p_1 = t;
          t = SSL_int_to_string(p_1);
          c_1 = t;
          t = term_o_9;
          t = pass_verbose_0_0(t);
          i_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, c_1), term_p_8), i_1);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(j_1, k_1, t);
      }
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_1 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_p_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm w_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_q_9);
      w_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_1, (ATerm) ATinsert(ATempty, term_q_9));
      t = p_6(t_1, w_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm d_6 (ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm k_2 = NULL;
  t = SSL_write_term_to_stream_baf(u_27, v_27);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_2);
  return(t);
}
ATerm e_6 (ATerm k_72 (ATerm), ATerm n_180, ATerm c_28, ATerm t)
{
  ATerm l_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_180, term_y_9);
  t = open_stream_0_0(t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, c_28);
  t = k_72(t);
  t = fclose_0_0(t);
  t = c_28;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      if(match_cons(a_10, sym_Stream_1))
        {
          r_2 = ATgetArgument(a_10, 0);
        }
      else
        _fail(t);
      s_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(r_2, s_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  p_2 = t;
  t = xtc_new_file_0_0(t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_2, p_2);
  t = e_6(n_1, q_2, p_2, t);
  t = SSL_close_file(q_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_2);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(g_90, h_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm f_6 (ATerm q_24, ATerm r_24, ATerm t)
{
  t = SSL_execvp(q_24, r_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm q_3 = NULL,s_3 = NULL,t_3 = NULL,v_3 = NULL;
  q_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_3 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,u_0 = NULL;
        t = SSL_int_to_string(s_3);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), s_0), term_c_10);
        u_0 = t;
        t = SSL_concat_strings(u_0);
      }
    }
  else
    {
      ATerm l_1 = NULL,m_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_3 = ATgetArgument(t, 0);
          t_3 = ATgetArgument(t, 1);
          v_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_3);
      l_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_3), term_j_11), l_1), term_i_11), s_3);
      m_1 = t;
      t = SSL_concat_strings(m_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm z_3 = NULL;
  ATerm o_1 (ATerm t)
  {
    t = p_76(t);
    if(((z_3 != NULL) && (z_3 != t)))
      _fail(t);
    else
      z_3 = t;
    return(t);
  }
  t = fetch_1_0(o_1, t);
  t = not_null(z_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm a_4 = NULL;
  a_4 = t;
  {
    ATerm k_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_17), term_q_17), term_k_17), term_g_17), term_c_17), term_y_16), term_q_16), term_k_16), term_g_16), term_c_16), term_y_15), term_u_15), term_q_15), term_m_15), term_f_15), term_x_14), term_p_14), term_j_14), term_d_14), term_w_13), term_r_13), term_j_13), term_d_13), term_z_12), term_t_12), term_m_12), term_b_12), term_v_11);
        {
          ATerm q_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm y_17 = ATgetArgument(t, 0);
                if((a_4 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm b_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(q_1, t);
        }
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = k_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, a_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_4 = NULL;
  f_4 = t;
  {
    ATerm d_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            t_4 = ATgetArgument(t, 1);
            {
              ATerm o_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_4;
        {
          ATerm p_18 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_18;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          y_1 = t;
          t = term_r_18;
          z_1 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, y_1), term_v_18);
          a_2 = t;
          t = SSL_printnl(z_1, a_2);
          t = (ATerm) ATmakeAppl(sym__2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, y_1), term_v_18));
        }
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = d_18;
      }
    t = f_4;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  ATerm x_4 = NULL,c_5 = NULL;
  x_4 = t;
  t = fork_0_0(t);
  c_5 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_4;
        t = z_70(t);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = SSL_waitpid(c_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_18 = ATgetArgument(t, 0);
            if(((ATgetType(z_18) != AT_INT) || (ATgetInt((ATermInt) z_18) != 0)))
              _fail(t);
            {
              ATerm b_19 = ATgetArgument(t, 1);
            }
            {
              ATerm d_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_5 = NULL;
  f_5 = t;
  t = SSL_table_keys(f_5);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm g_5 = NULL,h_5 = NULL;
      g_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_5, g_5);
      t = x_6(f_5, g_5, t);
      h_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_5, h_5);
      return(t);
    }
    t = map_1_0(r_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_5 = NULL,k_5 = NULL;
      i_5 = t;
      t = term_s_8;
      t = get_config_0_0(t);
      k_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_5, term_e_17);
      t = geq_0_0(t);
      t = i_5;
      t = i_100(t);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_100 (ATerm), ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 = NULL,p_5 = NULL;
      l_5 = t;
      t = term_s_8;
      t = get_config_0_0(t);
      p_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_5, term_n_14);
      t = geq_0_0(t);
      t = l_5;
      t = h_100(t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm l_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_5 = NULL,v_5 = NULL;
      r_5 = t;
      t = term_s_8;
      t = get_config_0_0(t);
      v_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_5, term_r_12);
      t = geq_0_0(t);
      t = r_5;
      t = j_100(t);
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = l_19;
    }
  return(t);
}
ATerm i_6 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm x_34, ATerm w_34, ATerm t)
{
  t = l_80(t);
  {
    ATerm s_1 (ATerm t)
    {
      ATerm w_5 = NULL;
      w_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_34, w_5);
      t = k_80(t);
      return(t);
    }
    t = fetch_1_0(s_1, t);
    t = w_34;
  }
  return(t);
}
ATerm j_6 (ATerm h_80 (ATerm), ATerm t_34, ATerm s_34, ATerm t)
{
  t = t_34;
  {
    ATerm m_7 (ATerm t)
    {
      ATerm q_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_34;
          ;
          LocalPopChoice(s_19);
        }
      else
        {
          t = q_19;
          {
            ATerm t_19 = t;
            int u_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_6 = NULL,b_7 = NULL,e_7 = NULL;
                z_6 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_7 = ATgetFirst((ATermList) t);
                    e_7 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = z_6;
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = s_34;
                    return(t);
                  }
                  t = i_6(h_80, u_1, b_7, e_7, t);
                  t = m_7(t);
                }
                ;
                LocalPopChoice(u_19);
              }
            else
              {
                t = t_19;
                t = Cons_2_0(_id, m_7, t);
              }
          }
        }
      return(t);
    }
    t = m_7(t);
  }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm y_7 = NULL;
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      if((y_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,u_7 = NULL;
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_19 = ATgetArgument(t, 0);
            ATerm a_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        t = x_6(h_46, i_46, t);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = (ATerm) ATempty;
      }
    s_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_7, j_46);
    t = j_6(v_1, s_7, j_46, t);
    u_7 = t;
    t = SSL_table_put(h_46, i_46, u_7);
    t = r_7;
  }
  return(t);
}
ATerm l_6 (ATerm t_87 (ATerm), ATerm r_46, ATerm q_46, ATerm t)
{
  t = q_46;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm z_7 = NULL,a_8 = NULL;
      if(match_cons(t, sym__2))
        {
          z_7 = ATgetArgument(t, 0);
          a_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, r_46, z_7, a_8);
      t = t_87(t);
      return(t);
    }
    t = map_1_0(x_1, t);
  }
  return(t);
}
ATerm y_8 (ATerm o_8, ATerm t)
{
  t = SSL_fclose(o_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_8 = NULL,w_8 = NULL;
  w_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_8 = ATgetArgument(t, 0);
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_8);
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            t = y_8(w_8, t);
          }
      }
    }
  else
    {
      t = y_8(w_8, t);
    }
  return(t);
}
ATerm m_6 (ATerm a_28, ATerm t)
{
  t = SSL_read_term_from_stream(a_28);
  return(t);
}
ATerm n_6 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm z_8 = NULL;
  t = SSL_fopen(w_48, x_48);
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_8);
  return(t);
}
ATerm _2_0 (ATerm g_59 (ATerm), ATerm h_59 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,b_0 = NULL,o_0 = NULL;
  f_9 = t;
  if(match_cons(t, sym__2))
    {
      b_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_9);
  a_9 = t;
  t = b_9;
  t = g_59(t);
  d_9 = t;
  t = c_9;
  t = h_59(t);
  e_9 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_9, e_9);
  b_0 = t;
  t = SSLsetAnnotations(b_0, a_9);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_9 = NULL;
  t = SSL_stdin_stream();
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_9 = NULL;
  t = SSL_stdout_stream();
  j_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_9 = NULL;
  t = SSL_stderr_stream();
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_9);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm u_9 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      u_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  t = SSL_is_string(x_9);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_20 = ATgetArgument(t, 0);
      ATerm e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_9 = NULL,m_2 = NULL;
        r_9 = t;
        t = SSL_explode_term(r_9);
        if(match_cons(t, sym__2))
          {
            ATerm i_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_20 = ATgetArgument(t, 1);
              if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
                {
                  m_2 = ATgetFirst((ATermList) j_20);
                  {
                    ATerm k_20 = (ATerm) ATgetNext((ATermList) j_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = m_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = m_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = m_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = f_20;
        {
          ATerm l_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_9 = NULL,t_9 = NULL;
              t = _2_0(b_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  s_9 = ATgetArgument(t, 0);
                  t_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_6(s_9, t_9, t);
              ;
              LocalPopChoice(m_20);
            }
          else
            {
              t = l_20;
              {
                ATerm v_9 = NULL,w_9 = NULL;
                t = _2_0(c_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    v_9 = ATgetArgument(t, 0);
                    w_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_6(v_9, w_9, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_9 = NULL,b_10 = NULL,d_10 = NULL;
  ATerm o_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_10 = NULL;
      e_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_10, term_r_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_20);
    }
  else
    {
      t = o_20;
      t = debug_1_0(d_2, t);
      _fail(t);
    }
  z_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(d_10, t);
  b_10 = t;
  t = z_9;
  t = fclose_0_0(t);
  t = b_10;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_w_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_10 = NULL,h_10 = NULL;
      g_10 = t;
      t = (ATerm) ATinsert(ATempty, term_a_21);
      h_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_10, (ATerm) ATinsert(ATempty, term_a_21));
      t = p_6(g_10, h_10, t);
      LocalPopChoice(z_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_20;
      {
        ATerm b_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21 = t;
            if((PushChoice() == 0))
              {
                ATerm i_10 = NULL,j_10 = NULL;
                i_10 = t;
                t = (ATerm) ATinsert(ATempty, term_q_9);
                j_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_10, (ATerm) ATinsert(ATempty, term_q_9));
                t = p_6(i_10, j_10, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_21;
              }
            t = debug_1_0(e_2, t);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = b_21;
            t = debug_1_0(f_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  w_10 = t;
  t = term_r_18;
  x_10 = t;
  t = (ATerm) ATinsert(ATempty, term_l_21);
  y_10 = t;
  t = SSL_printnl(x_10, y_10);
  t = w_10;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
  if(match_cons(t, sym__3))
    {
      z_10 = ATgetArgument(t, 0);
      a_11 = ATgetArgument(t, 1);
      b_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_6(z_10, a_11, b_11, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  t = term_r_18;
  d_11 = t;
  t = (ATerm) ATinsert(ATempty, term_m_21);
  e_11 = t;
  t = SSL_printnl(d_11, e_11);
  t = c_11;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  f_11 = t;
  t = term_r_18;
  g_11 = t;
  t = (ATerm) ATinsert(ATempty, term_l_21);
  h_11 = t;
  t = SSL_printnl(g_11, h_11);
  t = f_11;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
  k_10 = t;
  t = if_verbose5_1_0(g_2, t);
  {
    ATerm p_21 = t;
    if((PushChoice() == 0))
      {
        ATerm u_10 = NULL,v_10 = NULL;
        t = term_q_21;
        u_10 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, k_10);
        v_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_21, (ATerm) ATmakeAppl(sym_Imported_1, k_10));
        t = x_6(u_10, v_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_21;
      }
    l_10 = t;
    t = term_q_21;
    n_10 = t;
    t = term_r_21;
    o_10 = t;
    t = (ATerm) ATinsert(ATempty, k_10);
    p_10 = t;
    t = SSL_table_put(n_10, o_10, p_10);
    t = l_10;
    t = if_verbose4_1_0(i_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(n_2, t);
    m_10 = t;
    t = term_q_21;
    q_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_21, m_10);
    t = l_6(o_2, q_10, m_10, t);
    t = if_verbose6_1_0(t_2, t);
    t = term_q_21;
    r_10 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, k_10);
    s_10 = t;
    t = (ATerm) ATempty;
    t_10 = t;
    t = SSL_table_put(r_10, s_10, t_10);
    t = (ATerm) ATmakeAppl(sym__3, term_q_21, (ATerm)ATmakeAppl(sym_Imported_1, k_10), (ATerm) ATempty);
    t = if_verbose4_1_0(u_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm a_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_2 (ATerm t)
            {
              t = filter_1_0(y_83, t);
              return(t);
            }
            t = Cons_2_0(y_83, w_2, t);
            ;
            LocalPopChoice(c_22);
          }
        else
          {
            t = a_22;
            {
              ATerm l_11 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_22 = ATgetFirst((ATermList) t);
                  l_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = l_11;
              t = filter_1_0(y_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm n_11 (ATerm t)
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_85(t);
        t = n_11(t);
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
      }
    return(t);
  }
  t = n_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm k_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_11 = NULL;
            t = term_u_22;
            o_11 = t;
            t = SSL_getenv(o_11);
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = k_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm w_11 = NULL,y_11 = NULL;
  t = term_q_21;
  w_11 = t;
  t = term_a_23;
  y_11 = t;
  t = term_e_23;
  t = x_6(w_11, y_11, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm f_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_23;
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = debug_1_0(d_3, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_11 = NULL;
  t = if_verbose5_1_0(x_2, t);
  p_11 = t;
  {
    ATerm k_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_11 = NULL,s_11 = NULL;
        t = term_q_21;
        q_11 = t;
        t = term_r_21;
        s_11 = t;
        t = term_s_23;
        t = x_6(q_11, s_11, t);
        ;
        LocalPopChoice(r_23);
      }
    else
      {
        t = k_23;
        {
          ATerm u_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          u_11 = t;
          t = repeat_1_0(a_3, t);
          t = u_11;
        }
      }
    t = p_11;
    t = if_verbose5_1_0(b_3, t);
  }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm y_12 (ATerm e_12, ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
  t = term_q_21;
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, e_12);
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_21, (ATerm) ATmakeAppl(sym_Tool_1, e_12));
  t = x_6(h_12, i_12, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_23 = ATgetFirst((ATermList) t);
      if(match_cons(v_23, sym__2))
        {
          ATerm z_23 = ATgetArgument(v_23, 0);
          g_12 = ATgetArgument(v_23, 1);
        }
      else
        _fail(t);
      {
        ATerm w_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_12;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_q_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_3, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(f_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
        l_12 = t;
        if(match_cons(t, sym__2))
          {
            j_12 = ATgetArgument(t, 0);
            k_12 = ATgetArgument(t, 1);
            {
              ATerm e_24 = t;
              int f_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
                  t = term_q_21;
                  p_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, j_12);
                  q_12 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_q_21, (ATerm) ATmakeAppl(sym_Tool_1, j_12));
                  t = x_6(p_12, q_12, t);
                  {
                    ATerm h_3 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((k_12 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((o_12 != NULL) && (o_12 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            o_12 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(h_3, t);
                    t = not_null(o_12);
                  }
                  ;
                  LocalPopChoice(f_24);
                }
              else
                {
                  t = e_24;
                  t = y_12(l_12, t);
                }
            }
          }
        else
          {
            t = y_12(l_12, t);
          }
        t = if_verbose5_1_0(i_3, t);
      }
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = b_24;
      {
        ATerm x_12 = NULL,v_2 = NULL,y_2 = NULL;
        x_12 = t;
        t = term_r_18;
        v_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_24), x_12), term_h_24);
        y_2 = t;
        t = SSL_printnl(v_2, y_2);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_24), x_12), term_h_24);
        t = if_verbose5_1_0(k_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  h_13 = t;
  t = x_89(t);
  t = xtc_find_0_0(t);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_13, h_13);
  {
    ATerm m_3 (ATerm t)
    {
      ATerm k_13 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, i_13, h_13);
      t = f_6(i_13, h_13, t);
      t = term_j_24;
      k_13 = t;
      t = SSL_exit(k_13);
      return(t);
    }
    t = fork_and_wait_1_0(m_3, t);
    t = h_13;
  }
  return(t);
}
ATerm o_6 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm t)
{
  ATerm l_13 = NULL,o_13 = NULL,p_13 = NULL,t_13 = NULL,y_13 = NULL,z_13 = NULL;
  l_13 = t;
  t = w_86(t);
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_13, t_44, r_44);
  t = y_6(o_13, t_44, r_44, t);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_14 = NULL;
        t = term_m_24;
        a_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_13, term_m_24);
        t = x_6(o_13, a_14, t);
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_13 = ATgetFirst((ATermList) t);
        t_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_24;
    y_13 = t;
    t = (ATerm) ATinsert(CheckATermList(t_13), (ATerm) ATinsert(CheckATermList(p_13), t_44));
    z_13 = t;
    t = SSL_table_put(o_13, y_13, z_13);
    t = l_13;
  }
  return(t);
}
ATerm v_14 (ATerm g_14, ATerm t)
{
  t = g_14;
  {
    ATerm n_24 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_24 = ATgetArgument(t, 0);
            ATerm p_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_24;
      }
    t = term_s_24;
    t = debug_1_0(n_3, t);
    t = (ATerm) ATmakeAppl(sym__2, g_14, term_y_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm y_14 (ATerm i_14, ATerm k_14, ATerm l_14, ATerm t)
{
  t = SSL_open_file(i_14, k_14);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_14(s_14, t);
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            t = y_14(t_14, u_14, s_14, t);
          }
      }
    }
  else
    {
      t = v_14(s_14, t);
    }
  return(t);
}
ATerm p_6 (ATerm o_48, ATerm p_48, ATerm t)
{
  t = SSL_access(o_48, p_48);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  t = term_o_9;
  t = new_0_0(t);
  z_14 = t;
  t = term_y_24;
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_14, term_y_24);
  t = w_6(z_14, a_15, t);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_15 = NULL,h_15 = NULL;
        b_15 = t;
        t = (ATerm) ATinsert(ATempty, term_q_9);
        h_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_15, (ATerm) ATinsert(ATempty, term_q_9));
        t = p_6(b_15, h_15, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
      }
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  t = new_file_0_0(t);
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_15, term_y_9);
  t = open_file_0_0(t);
  t = term_o_9;
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_15, term_o_9);
  t = o_6(o_3, j_15, k_15, t);
  t = j_15;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  n_16 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_3 = NULL,e_3 = NULL;
      t = n_16;
      t = xtc_new_file_0_0(t);
      c_3 = t;
      t = m_0(t);
      e_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_3, (ATerm) ATinsert(ATinsert(ATempty, c_3), term_f_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(c_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_3);
    }
  else
    {
      ATerm b_4 = NULL,c_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_16;
      t = xtc_new_file_0_0(t);
      b_4 = t;
      t = m_0(t);
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_4), term_f_25), o_16), term_g_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(b_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm r_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,p_0 = NULL,v_0 = NULL;
  w_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_16);
  r_16 = t;
  t = u_16;
  t = u_68(t);
  v_16 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_16);
  p_0 = t;
  t = SSLsetAnnotations(p_0, r_16);
  return(t);
}
ATerm q_6 (ATerm w_24, ATerm x_24, ATerm t)
{
  t = SSL_copy(w_24, x_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL;
  n_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL;
        t = n_17;
        t = k_0(t);
        p_4 = t;
        {
          ATerm l_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(n_25);
            }
          else
            {
              t = l_25;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_17, p_4);
          t = q_6(o_17, p_4, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_17);
        }
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        {
          ATerm p_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL;
              t = n_17;
              t = k_0(t);
              a_5 = t;
              {
                ATerm u_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_25 = t;
                    int y_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(y_25);
                      }
                    else
                      {
                        t = x_25;
                        {
                          ATerm z_25 = t;
                          int a_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(a_26);
                            }
                          else
                            {
                              t = z_25;
                              {
                                ATerm b_5 = NULL;
                                b_5 = t;
                                if((o_17 != t))
                                  {
                                    _fail(t);
                                  }
                                t = b_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_25;
                  }
                t = (ATerm) ATmakeAppl(sym__2, o_17, a_5);
                t = q_6(o_17, a_5, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, o_17);
              }
              ;
              LocalPopChoice(q_25);
            }
          else
            {
              t = p_25;
              t = n_17;
              t = k_0(t);
              if((o_17 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_17);
            }
        }
      }
  }
  return(t);
}
ATerm r_6 (ATerm p_45, ATerm q_45, ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  u_17 = t;
  {
    ATerm d_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
        t = x_6(p_45, q_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_26 = ATgetFirst((ATermList) t);
            v_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_26);
        t = SSL_table_put(p_45, q_45, v_17);
        t = (ATerm) ATmakeAppl(sym__3, p_45, q_45, v_17);
      }
    else
      {
        t = d_26;
        t = SSL_table_remove(p_45, q_45);
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
      }
    t = u_17;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,z_17 = NULL,a_18 = NULL,c_18 = NULL,e_18 = NULL;
  x_17 = t;
  t = t_86(t);
  z_17 = t;
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_18 = NULL;
        t = term_m_24;
        f_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_17, term_m_24);
        t = x_6(z_17, f_18, t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_18 = ATgetFirst((ATermList) t);
        a_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_24;
    e_18 = t;
    t = SSL_table_put(z_17, e_18, a_18);
    t = c_18;
    {
      ATerm p_3 (ATerm t)
      {
        ATerm g_18 = NULL;
        g_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_17, g_18);
        t = r_6(z_17, g_18, t);
        return(t);
      }
      t = map_1_0(p_3, t);
      t = x_17;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_87(t);
      t = p_87(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      t = p_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
  i_18 = t;
  t = s_86(t);
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_18, term_m_24);
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_26 = ATgetArgument(t, 0);
            ATerm s_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_24;
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_18, term_m_24);
        t = x_6(j_18, q_18, t);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATempty;
      }
    k_18 = t;
    t = term_m_24;
    l_18 = t;
    t = (ATerm) ATinsert(CheckATermList(k_18), (ATerm) ATempty);
    m_18 = t;
    t = SSL_table_put(j_18, l_18, m_18);
    t = i_18;
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm t_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_19 = NULL;
      a_19 = t;
      t = SSL_remove(a_19);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = t_26;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm s_18 = NULL;
  t = begin_scope_1_0(r_3, t);
  {
    ATerm u_3 (ATerm t)
    {
      ATerm t_18 = NULL;
      t_18 = t;
      {
        ATerm w_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_18 = NULL,w_18 = NULL;
            t = term_b_25;
            u_18 = t;
            t = term_m_24;
            w_18 = t;
            t = term_b_27;
            t = x_6(u_18, w_18, t);
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = w_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((s_18 != NULL) && (s_18 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              s_18 = ATgetFirst((ATermList) t);
            {
              ATerm e_27 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(s_18);
        t = map_1_0(w_3, t);
        t = t_18;
        t = end_scope_1_0(x_3, t);
      }
      return(t);
    }
    t = restore_always_2_0(j_89, u_3, t);
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = term_h_27;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_19 = NULL;
        t = term_g_25;
        t = get_config_0_0(t);
        c_19 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, c_19);
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = term_p_9;
      }
    t = k_89(t);
    t = copy_to_1_0(d_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(y_3, t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(r_27);
        }
      else
        {
          t = n_27;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(m_27);
      t = xtc_transform_file_2_0(g_4, h_4, t);
    }
  else
    {
      t = l_27;
      t = xtc_transform_term_2_0(j_4, k_4, t);
    }
  t = xtc_abox2text_1_0(pass_width_0_0, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_t_27;
  t = get_config_0_0(t);
  t = map_1_0(i_4, t);
  t = concat_0_0(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_19), term_t_27);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_t_27;
  t = get_config_0_0(t);
  t = map_1_0(l_4, t);
  t = concat_0_0(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_19), term_t_27);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  t = xtc_io_1_0(e_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_19 = NULL,m_19 = NULL,n_19 = NULL,p_19 = NULL,r_19 = NULL;
  k_19 = t;
  t = term_o_9;
  t = whoami_0_0(t);
  m_19 = t;
  t = term_r_18;
  n_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_28), m_19), term_b_28);
  p_19 = t;
  t = SSL_printnl(n_19, p_19);
  t = term_x_8;
  r_19 = t;
  t = SSL_exit(r_19);
  t = k_19;
  return(t);
}
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm t)
{
  ATerm g_20 (ATerm t)
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_20, t);
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_76(t);
      }
    return(t);
  }
  t = g_20(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm v_19 = NULL,y_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_19 = ATgetFirst((ATermList) t);
            y_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_19;
        {
          ATerm m_4 (ATerm t)
          {
            t = y_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_4, t);
        }
      }
    }
  return(t);
}
ATerm c_21 (ATerm p_20, ATerm t)
{
  ATerm t_20 = NULL;
  t = SSL_explode_term(p_20);
  if(match_cons(t, sym__2))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_20;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,y_20 = NULL;
  y_20 = t;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 (ATerm t)
            {
              t = v_20;
              return(t);
            }
            t = u_20;
            t = at_end_1_0(n_4, t);
            ;
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            t = c_21(y_20, t);
          }
      }
    }
  else
    {
      t = c_21(y_20, t);
    }
  return(t);
}
ATerm s_6 (ATerm q_47, ATerm p_47, ATerm t)
{
  ATerm d_21 = NULL,g_21 = NULL,h_21 = NULL;
  t = q_47;
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        t = (ATerm) ATempty;
      }
    d_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_47, d_21);
    t = conc_0_0(t);
    g_21 = t;
    t = term_s_28;
    h_21 = t;
    t = SSL_table_put(h_21, q_47, g_21);
    t = (ATerm) ATmakeAppl(sym__3, term_s_28, q_47, g_21);
  }
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm i_21 = NULL,n_21 = NULL,o_21 = NULL;
  i_21 = t;
  t = term_t_27;
  n_21 = t;
  t = (ATerm) ATinsert(ATempty, i_21);
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, (ATerm) ATinsert(ATempty, i_21));
  t = s_6(n_21, o_21, t);
  t = i_21;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, q_4, r_4, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_21 = NULL,z_21 = NULL,b_22 = NULL;
      t = term_o_9;
      t = j_0(t);
      y_21 = t;
      t = term_w_28;
      z_21 = t;
      t = term_i_29;
      b_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_28, term_i_29, y_21);
      t = y_6(z_21, b_22, y_21, t);
      _fail(t);
    }
  else
    {
      ATerm i_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_21 = ATgetFirst((ATermList) t);
          v_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_21 = ATgetFirst((ATermList) t);
          x_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_21;
      t = h_0(t);
      t = w_21;
      t = i_0(t);
      i_22 = t;
      t = (ATerm) ATinsert(CheckATermList(x_21), i_22);
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  if(match_string(t, "-k"))
    {
      t = l_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_22;
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  t = SSL_string_to_int(m_22);
  n_22 = t;
  t = term_m_29;
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_29, n_22);
  t = a_7(o_22, n_22, t);
  t = m_22;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, u_4, v_4, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  if(match_string(t, "-S"))
    {
      t = q_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_22;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  t = term_s_8;
  r_22 = t;
  t = term_o_29;
  s_22 = t;
  t = term_p_29;
  t = a_7(r_22, s_22, t);
  t = term_q_29;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm t_22 = NULL,w_22 = NULL,x_22 = NULL;
  t_22 = t;
  t = SSL_string_to_int(t_22);
  w_22 = t;
  t = term_s_8;
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_8, w_22);
  t = a_7(x_22, w_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_22);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  t = term_t_29;
  y_22 = t;
  t = term_o_9;
  z_22 = t;
  t = term_u_29;
  t = a_7(y_22, z_22, t);
  t = term_v_29;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, y_4, z_4, t);
      ;
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_5, e_5, j_5, t);
            ;
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            t = Option_3_0(m_5, n_5, o_5, t);
          }
      }
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm b_23 = NULL;
  b_23 = t;
  if(match_string(t, "-o"))
    {
      t = b_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_23;
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  t = term_f_25;
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, c_23);
  t = a_7(d_23, c_23, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_23);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, s_5, t_5, t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm g_23 = NULL;
  g_23 = t;
  if(match_string(t, "-i"))
    {
      t = g_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_23;
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm h_23 = NULL,j_23 = NULL;
  h_23 = t;
  t = term_g_25;
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_25, h_23);
  t = a_7(j_23, h_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_23);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_o_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_5, z_5, g_6, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  if(match_string(t, "-w"))
    {
      t = l_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = l_23;
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  m_23 = t;
  t = term_p_8;
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_8, m_23);
  t = a_7(n_23, m_23, t);
  t = m_23;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm t_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = t_30;
      {
        ATerm x_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
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
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(a_31);
                }
              else
                {
                  t = z_30;
                  {
                    ATerm b_31 = t;
                    int m_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(m_31);
                      }
                    else
                      {
                        t = b_31;
                        t = ArgOption_3_0(h_6, u_6, v_6, t);
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
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,t_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_9;
  t = whoami_0_0(t);
  o_23 = t;
  t = term_r_18;
  p_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_31), o_23);
  q_23 = t;
  t = SSL_printnl(p_23, q_23);
  t = term_x_8;
  t_23 = t;
  t = SSL_exit(t_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_6 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_43, g_43);
      ;
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      t = SSL_addr(f_43, g_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t)
{
  ATerm r_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_82(t);
      ;
      LocalPopChoice(w_31);
    }
  else
    {
      t = r_31;
      {
        ATerm x_23 = NULL,y_23 = NULL,c_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_23 = ATgetFirst((ATermList) t);
            y_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_23;
        t = foldr_2_0(v_82, w_82, t);
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_23, c_24);
        t = w_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_o_29;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL;
  if(match_cons(t, sym__2))
    {
      a_6 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(a_6, b_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_24 = NULL,u_5 = NULL,x_5 = NULL;
  t = times_0_0(t);
  u_5 = t;
  t = SSL_explode_term(u_5);
  if(match_cons(t, sym__2))
    {
      ATerm x_31 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5;
  t = foldr_2_0(c_7, d_7, t);
  g_24 = t;
  t = SSL_TicksToSeconds(g_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  if(match_cons(t, sym__2))
    {
      d_25 = ATgetArgument(t, 0);
      e_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_25;
        if((d_25 != t))
          {
            _fail(t);
          }
        t = c_25;
        ;
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        t = (ATerm) ATmakeAppl(sym__2, d_25, e_25);
        {
          ATerm e_32 = t;
          int f_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_25, e_25);
              ;
              LocalPopChoice(f_32);
            }
          else
            {
              t = e_32;
              t = SSL_gtr(d_25, e_25);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_25, e_25);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_25 = NULL,k_25 = NULL;
      h_25 = t;
      t = term_s_8;
      t = get_config_0_0(t);
      k_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_25, term_x_8);
      t = geq_0_0(t);
      t = h_25;
      t = e_100(t);
      ;
      LocalPopChoice(h_32);
    }
  else
    {
      t = g_32;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm m_25 = NULL,o_25 = NULL,r_25 = NULL,s_25 = NULL;
  t = run_time_0_0(t);
  m_25 = t;
  t = term_o_9;
  t = whoami_0_0(t);
  o_25 = t;
  t = term_r_18;
  r_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_32), m_25), term_i_11), o_25);
  s_25 = t;
  t = SSL_printnl(r_25, s_25);
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_32), m_25), term_i_11), o_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_29;
  t_25 = t;
  t = SSL_exit(t_25);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      {
        ATerm l_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(m_32);
          }
        else
          {
            t = l_32;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      t = fetch_1_0(g_7, t);
    }
  t = r_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_25 = ATgetFirst((ATermList) t);
      w_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_26 = NULL,c_26 = NULL;
        t = w_25;
        t = g_0(t);
        b_26 = t;
        t = v_25;
        t = e_0(t);
        c_26 = t;
        t = w_25;
        {
          ATerm h_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(b_26), c_26);
            return(t);
          }
          t = reverse_acc_2_0(e_0, h_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_9;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm b_69 (ATerm), ATerm t)
{
  ATerm e_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,z_0 = NULL,a_1 = NULL;
  j_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_26);
  e_26 = t;
  t = h_26;
  t = b_69(t);
  i_26 = t;
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_26);
  z_0 = t;
  t = SSLsetAnnotations(z_0, e_26);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_26), term_q_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_26 = NULL,u_26 = NULL;
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      t = fetch_1_0(i_7, t);
    }
  t = term_t_32;
  t = echo_0_0(t);
  t = term_w_28;
  r_26 = t;
  t = term_i_29;
  u_26 = t;
  t = term_u_32;
  t = x_6(r_26, u_26, t);
  t = reverse_acc_2_0(_id, j_7, t);
  t = map_1_0(k_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm c_69 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,c_27 = NULL,d_27 = NULL,b_1 = NULL,d_1 = NULL;
  d_27 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      z_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_27);
  y_26 = t;
  t = z_26;
  t = c_69(t);
  c_27 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_27);
  b_1 = t;
  t = SSLsetAnnotations(b_1, y_26);
  return(t);
}
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm k_27 (ATerm t)
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_76, _id, t);
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = Cons_2_0(_id, k_27, t);
      }
    return(t);
  }
  t = k_27(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
  o_27 = t;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_32 = ATgetFirst((ATermList) t);
                ATerm a_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_27;
          }
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = (ATerm) ATinsert(ATempty, o_27);
      }
    p_27 = t;
    t = term_h_27;
    q_27 = t;
    t = SSL_printnl(q_27, p_27);
    t = o_27;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_6 (ATerm b_42, ATerm c_42, ATerm t)
{
  t = SSL_strcat(b_42, c_42);
  return(t);
}
ATerm debug_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  w_27 = t;
  t = i_72(t);
  x_27 = t;
  t = term_r_18;
  y_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_27), x_27);
  z_27 = t;
  t = SSL_printnl(y_27, z_27);
  t = w_27;
  return(t);
}
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm d_28 (ATerm t)
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        t = Cons_2_0(d_76, d_28, t);
      }
    return(t);
  }
  t = d_28(t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_f_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_28 = NULL;
      j_28 = t;
      t = SSL_is_string(j_28);
      ;
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
        ATerm i_33 = t;
        int j_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_7, t);
            ;
            LocalPopChoice(j_33);
          }
        else
          {
            t = i_33;
            {
              ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
              n_28 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_28 = ATgetArgument(t, 0);
                  t = o_28;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_28 = ATgetArgument(t, 0);
                      t = o_28;
                      {
                        ATerm k_33 = t;
                        int l_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_33);
                          }
                        else
                          {
                            t = k_33;
                            t = debug_1_0(n_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_28 = NULL,u_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_28 = ATgetArgument(t, 0);
                          p_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_28;
                      t = eval_config_0_0(t);
                      t_28 = t;
                      t = p_28;
                      t = eval_config_0_0(t);
                      u_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_28, u_28);
                      t = w_6(t_28, u_28, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  x_28 = t;
  t = term_s_28;
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_28, x_28);
  t = x_6(y_28, x_28, t);
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL,a_29 = NULL;
        t = eval_config_0_0(t);
        z_28 = t;
        t = term_s_28;
        a_29 = t;
        t = SSL_table_put(a_29, x_28, z_28);
        t = z_28;
        ;
        LocalPopChoice(n_33);
      }
    else
      {
        t = m_33;
      }
  }
  return(t);
}
ATerm o_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL;
  t = term_o_33;
  b_29 = t;
  t = term_o_9;
  c_29 = t;
  t = term_p_33;
  t = a_7(b_29, c_29, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  t = term_o_33;
  d_29 = t;
  t = term_o_9;
  e_29 = t;
  t = term_p_33;
  t = a_7(d_29, e_29, t);
  t = term_r_33;
  f_29 = t;
  t = term_o_9;
  g_29 = t;
  t = term_s_33;
  t = a_7(f_29, g_29, t);
  t = term_t_33;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_u_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_7, p_7, q_7, t);
      ;
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      t = Option_3_0(t_7, v_7, w_7, t);
    }
  return(t);
}
ATerm a_7 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm h_29 = NULL;
  t = term_s_28;
  h_29 = t;
  t = SSL_table_put(h_29, k_47, l_47);
  t = (ATerm) ATmakeAppl(sym__3, term_s_28, k_47, l_47);
  return(t);
}
ATerm x_6 (ATerm b_47, ATerm c_47, ATerm t)
{
  t = SSL_table_get(b_47, c_47);
  return(t);
}
ATerm y_6 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_33 = ATgetArgument(t, 0);
            ATerm a_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
        t = x_6(k_45, l_45, t);
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        t = (ATerm) ATempty;
      }
    k_29 = t;
    t = (ATerm) ATinsert(CheckATermList(k_29), j_45);
    l_29 = t;
    t = SSL_table_put(k_45, l_45, l_29);
    t = j_29;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,y_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
      t = term_o_9;
      t = d_0(t);
      z_29 = t;
      t = term_w_28;
      a_30 = t;
      t = term_i_29;
      b_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_28, term_i_29, z_29);
      t = y_6(a_30, b_30, z_29, t);
      _fail(t);
    }
  else
    {
      ATerm e_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_29 = ATgetFirst((ATermList) t);
          y_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_29;
      t = a_0(t);
      t = term_o_9;
      t = c_0(t);
      e_30 = t;
      t = (ATerm) ATinsert(CheckATermList(y_29), e_30);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,e_1 = NULL,f_1 = NULL;
  m_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_30 = ATgetFirst((ATermList) t);
      j_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_30);
  h_30 = t;
  t = i_30;
  t = v_63(t);
  k_30 = t;
  t = j_30;
  t = w_63(t);
  l_30 = t;
  f_1 = t;
  t = (ATerm) ATinsert(CheckATermList(l_30), k_30);
  e_1 = t;
  t = SSLsetAnnotations(e_1, h_30);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  r_30 = t;
  t = term_o_31;
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_31, r_30);
  t = a_7(s_30, r_30, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, r_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_34;
        t = p_93(t);
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
      }
    t = q_30;
    {
      ATerm b_8 (ATerm t)
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_34 = t;
            int h_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_34);
              }
            else
              {
                t = g_34;
                t = p_93(t);
                t = Cons_2_0(_id, b_8, t);
              }
            ;
            LocalPopChoice(f_34);
          }
        else
          {
            t = e_34;
            {
              ATerm u_30 = NULL,v_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_30 = ATgetFirst((ATermList) t);
                  v_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_30), (ATerm) ATmakeAppl(sym_Undefined_1, u_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_7, b_8, t);
    }
  }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  if(match_string(t, "--help"))
    {
      t = j_31;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_31;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_31;
        }
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  t = term_p_32;
  k_31 = t;
  t = term_o_9;
  l_31 = t;
  t = term_i_34;
  t = a_7(k_31, l_31, t);
  t = term_j_34;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_k_34;
  return(t);
}
ATerm h_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  c_31 = t;
  t = term_w_28;
  f_31 = t;
  t = term_i_29;
  g_31 = t;
  t = (ATerm) ATempty;
  h_31 = t;
  t = SSL_table_put(f_31, g_31, h_31);
  t = c_31;
  {
    ATerm c_8 (ATerm t)
    {
      ATerm l_34 = t;
      int m_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_93(t);
          ;
          LocalPopChoice(m_34);
        }
      else
        {
          t = l_34;
          {
            ATerm n_34 = t;
            int o_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_8, f_8, g_8, t);
                ;
                LocalPopChoice(o_34);
              }
            else
              {
                t = n_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_8, t);
    {
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_31 = NULL;
          s_31 = t;
          {
            ATerm r_34 = t;
            int u_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_8 = NULL;
                t = s_31;
                {
                  ATerm v_34 = t;
                  int y_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_34);
                    }
                  else
                    {
                      t = v_34;
                      t = fetch_1_0(h_8, t);
                    }
                  t = s_31;
                  t = default_system_usage_0_0(t);
                  t = term_o_29;
                  e_8 = t;
                  t = SSL_exit(e_8);
                }
                ;
                LocalPopChoice(u_34);
              }
            else
              {
                t = r_34;
                {
                  ATerm k_8 = NULL;
                  t = term_o_33;
                  t = get_config_0_0(t);
                  t = s_31;
                  t = default_system_about_0_0(t);
                  t = term_o_29;
                  k_8 = t;
                  t = SSL_exit(k_8);
                }
              }
          }
          ;
          LocalPopChoice(q_34);
        }
      else
        {
          t = p_34;
          {
            ATerm z_34 = t;
            int a_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
                ATerm i_8 (ATerm t)
                {
                  ATerm j_8 (ATerm t)
                  {
                    if(((d_31 != NULL) && (d_31 != t)))
                      _fail(t);
                    else
                      d_31 = t;
                    return(t);
                  }
                  t = Undefined_1_0(j_8, t);
                  return(t);
                }
                t = fetch_1_0(i_8, t);
                t = term_r_18;
                t_31 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_31)), term_b_35);
                u_31 = t;
                t = SSL_printnl(t_31, u_31);
                t = (ATerm) ATmakeAppl(sym__2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_31)), term_b_35));
                t = default_system_usage_0_0(t);
                t = term_x_8;
                v_31 = t;
                t = SSL_exit(v_31);
                ;
                LocalPopChoice(a_35);
              }
            else
              {
                t = z_34;
              }
          }
        }
      e_31 = t;
      t = term_w_28;
      i_31 = t;
      t = SSL_table_destroy(i_31);
      t = e_31;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
  t = parse_options_1_0(t_91, t);
  y_31 = t;
  t = term_c_35;
  z_31 = t;
  t = SSL_table_create(z_31);
  t = term_c_35;
  a_32 = t;
  t = term_d_35;
  b_32 = t;
  t = SSL_table_put(a_32, b_32, y_31);
  t = y_31;
  t = v_91(t);
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_91, t);
        ;
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        {
          ATerm g_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_35);
            }
          else
            {
              t = g_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0_0(t);
      ;
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
      t = pp_options_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_8, default_usage_0_0, _id, ast2text_0_0, t);
  return(t);
}
