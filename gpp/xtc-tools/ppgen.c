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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_PlainText_0;
Symbol sym_ParseTree_0;
Symbol sym_AST_0;
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
Symbol sym_Binary_0;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_m_38;
ATerm term_b_38;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_t_35;
ATerm term_q_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_k_33;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_h_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_e_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_a_28;
ATerm term_v_27;
ATerm term_k_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_h_26;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_u_23;
ATerm term_o_23;
ATerm term_d_23;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_q_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_g_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_l_18;
ATerm term_c_18;
ATerm term_w_17;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_o_14;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_c_12;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_z_8;
ATerm term_f_8;
ATerm term_g_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_e_5;
void init_constant_terms (void)
{
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_5, term_h_5, term_s_5);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_5, term_v_5, term_w_5);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_5, term_z_5, term_a_6);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_6, term_d_6, term_e_6);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_6, term_h_6, term_i_6);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_6, term_l_6, term_m_6);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_6, term_p_6, term_q_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_6, term_t_6, term_u_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_6, term_x_6, term_y_6);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_7, term_f_8, term_z_8);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_v_9, term_k_10);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_p_13, term_q_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_x_13, term_o_14);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_g_16, term_h_16);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_c_18, term_l_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_g_19, term_x_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_d_20, term_e_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_f_21, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_21, term_m_21, term_p_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_21, term_s_21, term_x_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_22, term_e_22, term_d_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_23, term_t_24, term_u_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_24, term_x_24, term_y_24);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_25, term_d_25, term_s_25);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_26, term_n_26, term_o_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_26, term_r_26, term_v_26);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_27, term_h_27, term_i_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_27, term_a_28, term_j_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_y_29);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_g_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym__2, term_j_29, term_z_28);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_e_5, term_u_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_33);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_b_34, term_h_29);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_k_34, term_h_29);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_v_34);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_a_35);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym__2, term_d_36, term_e_36);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_h_29);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_h_29);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_h_29);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__3, term_d_36, term_e_36, (ATerm) ATempty);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm b_66 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm h_70 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm q_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm assert_1_0 (ATerm m_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm u_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm l_62 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm l_81 (ATerm), ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm n_81 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm o_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm i_79 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm r_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm m_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm o_81 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm);
ATerm union_1_0 (ATerm y_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm x_81 (ATerm), ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_sglr_1_0 (ATerm u_84 (ATerm), ATerm);
ATerm xtc_parse_sdf_0_0 (ATerm);
ATerm xtc_implode_asfix_0_0 (ATerm);
ATerm pre_process_sdf_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm ppgen_0_0 (ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm i_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm n_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm o_83 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm ppgen_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm f_70 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm l_70 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm d_56 (ATerm), ATerm e_56 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm n_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_69 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm p_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm t_87 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm s_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm);
ATerm io_ppgen_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_7 != NULL) && (a_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_7 = ATgetArgument(t, 0);
      if(((b_7 != NULL) && (b_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_5 = t;
    int d_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(a_7), not_null(b_7));
        ;
        LocalPopChoice(d_5);
      }
    else
      {
        t = c_5;
        t = SSL_subtr(not_null(a_7), not_null(b_7));
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  if(((c_7 != NULL) && (c_7 != t)))
    _fail(t);
  else
    c_7 = t;
  if(((d_7 != NULL) && (d_7 != t)))
    _fail(t);
  else
    d_7 = t;
  t = term_e_5;
  {
    ATerm f_5 = t;
    int g_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_5);
      }
    else
      {
        t = f_5;
        t = term_h_5;
      }
    if(((e_7 != NULL) && (e_7 != t)))
      _fail(t);
    else
      e_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), term_h_5);
    t = subt_0_0(t);
    t = int_to_string_0_0(t);
    if(((f_7 != NULL) && (f_7 != t)))
      _fail(t);
    else
      f_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_7)), term_e_5);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  if(((h_7 != NULL) && (h_7 != t)))
    _fail(t);
  else
    h_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_7 = NULL,k_7 = NULL;
      t = not_null(h_7);
      if(((j_7 != NULL) && (j_7 != t)))
        _fail(t);
      else
        j_7 = t;
      t = term_i_5;
      t = ReadFromFile_0_0(t);
      if(((k_7 != NULL) && (k_7 != t)))
        _fail(t);
      else
        k_7 = t;
    }
  else
    {
      ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((i_7 != NULL) && (i_7 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(i_7);
      if(((l_7 != NULL) && (l_7 != t)))
        _fail(t);
      else
        l_7 = t;
      t = not_null(h_7);
      if(((m_7 != NULL) && (m_7 != t)))
        _fail(t);
      else
        m_7 = t;
      t = not_null(l_7);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((n_7 != NULL) && (n_7 != t)))
        _fail(t);
      else
        n_7 = t;
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_5 = ATgetArgument(t, 0);
      if(match_cons(j_5, sym_Stream_1))
        {
          if(((o_7 != NULL) && (o_7 != ATgetArgument(j_5, 0))))
            _fail(ATgetArgument(j_5, 0));
          else
            o_7 = ATgetArgument(j_5, 0);
        }
      else
        _fail(t);
      if(((p_7 != NULL) && (p_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(o_7), not_null(p_7));
  if(((q_7 != NULL) && (q_7 != t)))
    _fail(t);
  else
    q_7 = t;
  if(((r_7 != NULL) && (r_7 != t)))
    _fail(t);
  else
    r_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_7));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm b_66 (ATerm), ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_7 != NULL) && (s_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_7 = ATgetArgument(t, 0);
      if(((t_7 != NULL) && (t_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(s_7);
  if(((u_7 != NULL) && (u_7 != t)))
    _fail(t);
  else
    u_7 = t;
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_7), term_k_5);
  t = open_stream_0_0(t);
  if(((w_7 != NULL) && (w_7 != t)))
    _fail(t);
  else
    w_7 = t;
  if(((x_7 != NULL) && (x_7 != t)))
    _fail(t);
  else
    x_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_7), not_null(t_7));
  t = b_66(t);
  t = fclose_0_0(t);
  t = not_null(t_7);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  if(((y_7 != NULL) && (y_7 != t)))
    _fail(t);
  else
    y_7 = t;
  if(((z_7 != NULL) && (z_7 != t)))
    _fail(t);
  else
    z_7 = t;
  t = xtc_new_file_0_0(t);
  if(((a_8 != NULL) && (a_8 != t)))
    _fail(t);
  else
    a_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), not_null(y_7));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(a_8);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_8));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(k_84, l_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm b_8 = NULL;
  if(((b_8 != NULL) && (b_8 != t)))
    _fail(t);
  else
    b_8 = t;
  t = SSL_close_file(not_null(b_8));
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_8 != NULL) && (c_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_8 = ATgetArgument(t, 0);
      if(((d_8 != NULL) && (d_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(c_8), not_null(d_8));
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  t = map_1_0(explode_string_0_0, t);
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm e_8 = NULL;
  if(((e_8 != NULL) && (e_8 != t)))
    _fail(t);
  else
    e_8 = t;
  t = SSL_int_to_string(not_null(e_8));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL;
  if(((g_8 != NULL) && (g_8 != t)))
    _fail(t);
  else
    g_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_8 = ATgetArgument(t, 0);
      {
        ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
        t = not_null(h_8);
        if(((k_8 != NULL) && (k_8 != t)))
          _fail(t);
        else
          k_8 = t;
        t = not_null(g_8);
        if(((l_8 != NULL) && (l_8 != t)))
          _fail(t);
        else
          l_8 = t;
        t = not_null(k_8);
        t = int_to_string_0_0(t);
        if(((m_8 != NULL) && (m_8 != t)))
          _fail(t);
        else
          m_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_5), not_null(m_8)), term_l_5);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((h_8 != NULL) && (h_8 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_8 = ATgetArgument(t, 0);
          if(((i_8 != NULL) && (i_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_8 = ATgetArgument(t, 1);
          if(((j_8 != NULL) && (j_8 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            j_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(h_8);
      if(((n_8 != NULL) && (n_8 != t)))
        _fail(t);
      else
        n_8 = t;
      t = not_null(i_8);
      if(((o_8 != NULL) && (o_8 != t)))
        _fail(t);
      else
        o_8 = t;
      t = not_null(j_8);
      if(((p_8 != NULL) && (p_8 != t)))
        _fail(t);
      else
        p_8 = t;
      t = not_null(g_8);
      if(((q_8 != NULL) && (q_8 != t)))
        _fail(t);
      else
        q_8 = t;
      t = not_null(o_8);
      t = int_to_string_0_0(t);
      if(((r_8 != NULL) && (r_8 != t)))
        _fail(t);
      else
        r_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_8)), term_o_5), not_null(r_8)), term_n_5), not_null(n_8));
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm h_70 (ATerm), ATerm t)
{
  ATerm s_8 = NULL;
  ATerm b_0 (ATerm t)
  {
    t = h_70(t);
    if(((s_8 != NULL) && (s_8 != t)))
      _fail(t);
    else
      s_8 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(s_8);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm t_8 = NULL;
  if(((t_8 != NULL) && (t_8 != t)))
    _fail(t);
  else
    t_8 = t;
  {
    ATerm p_5 = t;
    int q_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_28), term_k_27), term_y_26), term_p_26), term_t_25), term_b_25), term_v_24), term_o_23), term_y_21), term_q_21), term_k_21), term_q_20), term_b_20), term_t_18), term_i_16), term_s_15), term_r_13), term_n_10), term_t_9), term_z_6), term_v_6), term_r_6), term_n_6), term_j_6), term_f_6), term_b_6), term_x_5), term_t_5);
        {
          ATerm f_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm l_28 = ATgetArgument(t, 0);
                if(((t_8 != NULL) && (t_8 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_8 = ATgetArgument(t, 1);
                {
                  ATerm m_28 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(f_0, t);
        }
        ;
        LocalPopChoice(q_5);
      }
    else
      {
        t = p_5;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(t_8));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_8 = NULL;
  if(((u_8 != NULL) && (u_8 != t)))
    _fail(t);
  else
    u_8 = t;
  {
    ATerm n_0 (ATerm t)
    {
      ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm n_28 = ATgetArgument(t, 0);
          if(((v_8 != NULL) && (v_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_8 = ATgetArgument(t, 1);
          {
            ATerm o_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = not_null(v_8);
      {
        ATerm p_28 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_28;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        if(((w_8 != NULL) && (w_8 != t)))
          _fail(t);
        else
          w_8 = t;
        if(((x_8 != NULL) && (x_8 != t)))
          _fail(t);
        else
          x_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_8)), term_r_28));
        t = printnl_0_0(t);
      }
      return(t);
    }
    t = try_1_0(n_0, t);
    t = not_null(u_8);
  }
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm y_8 = NULL;
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  t = SSL_waitpid(not_null(y_8));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  if(((a_9 != NULL) && (a_9 != t)))
    _fail(t);
  else
    a_9 = t;
  t = fork_0_0(t);
  if(((b_9 != NULL) && (b_9 != t)))
    _fail(t);
  else
    b_9 = t;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_9 = NULL;
        if(((c_9 != NULL) && (c_9 != t)))
          _fail(t);
        else
          c_9 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(a_9);
        t = o_64(t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_9), not_null(a_9));
        t = p_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm q_64 (ATerm), ATerm t)
{
  ATerm d_9 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm e_9 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((e_9 != NULL) && (e_9 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          e_9 = ATgetArgument(t, 0);
        if(((d_9 != NULL) && (d_9 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          d_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(e_9);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm u_28 = ATgetArgument(t, 0);
        if(((ATgetType(u_28) != AT_INT) || (ATgetInt((ATermInt) u_28) != 0)))
          _fail(t);
        {
          ATerm v_28 = ATgetArgument(t, 1);
        }
        {
          ATerm w_28 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(d_9);
    return(t);
  }
  t = fork_2_0(q_64, o_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_9 != NULL) && (f_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_9 = ATgetArgument(t, 0);
      if(((g_9 != NULL) && (g_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_9), not_null(g_9));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(p_0, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  t = b_84(t);
  t = xtc_find_warning_0_0(t);
  if(((i_9 != NULL) && (i_9 != t)))
    _fail(t);
  else
    i_9 = t;
  t = not_null(h_9);
  if(((j_9 != NULL) && (j_9 != t)))
    _fail(t);
  else
    j_9 = t;
  if(((k_9 != NULL) && (k_9 != t)))
    _fail(t);
  else
    k_9 = t;
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), not_null(l_9));
  t = call_0_0(t);
  t = not_null(j_9);
  return(t);
}
ATerm assert_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_9 != NULL) && (m_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_9 = ATgetArgument(t, 0);
      if(((n_9 != NULL) && (n_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_9 != NULL) && (o_9 != t)))
    _fail(t);
  else
    o_9 = t;
  t = m_80(t);
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(p_9), not_null(m_9), not_null(n_9));
  t = table_push_0_0(t);
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), term_z_28);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_9 != NULL) && (q_9 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_9 = ATgetFirst((ATermList) t);
        if(((r_9 != NULL) && (r_9 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(p_9), term_z_28, (ATerm) ATinsert(CheckATermList(not_null(r_9)), (ATerm) ATinsert(CheckATermList(not_null(q_9)), not_null(m_9))));
    t = table_put_0_0(t);
    t = not_null(o_9);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm u_65 (ATerm), ATerm t)
{
  ATerm s_9 = NULL;
  if(((s_9 != NULL) && (s_9 != t)))
    _fail(t);
  else
    s_9 = t;
  t = u_65(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = term_a_29;
      return(t);
    }
    t = debug_1_0(q_0, t);
    t = not_null(s_9);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_10 (ATerm w_9, ATerm t)
  {
    ATerm x_9 = NULL;
    t = not_null(w_9);
    if(((x_9 != NULL) && (x_9 != t)))
      _fail(t);
    else
      x_9 = t;
    t = not_null(w_9);
    {
      ATerm b_29 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm c_29 = ATgetArgument(t, 0);
              ATerm d_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_29;
        }
      {
        ATerm r_0 (ATerm t)
        {
          t = term_e_29;
          return(t);
        }
        t = obsolete_1_0(r_0, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), term_k_5);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm h_10 (ATerm y_9, ATerm z_9, ATerm a_10, ATerm t)
  {
    ATerm b_10 = NULL,c_10 = NULL;
    t = not_null(y_9);
    if(((b_10 != NULL) && (b_10 != t)))
      _fail(t);
    else
      b_10 = t;
    t = not_null(z_9);
    if(((c_10 != NULL) && (c_10 != t)))
      _fail(t);
    else
      c_10 = t;
    t = SSL_open_file(not_null(b_10), not_null(c_10));
    return(t);
  }
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  if(((d_10 != NULL) && (d_10 != t)))
    _fail(t);
  else
    d_10 = t;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_10(not_null(d_10), t);
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            t = h_10(not_null(e_10), not_null(f_10), not_null(d_10), t);
          }
      }
    }
  else
    {
      t = g_10(not_null(d_10), t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL;
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  t = term_h_29;
  t = new_0_0(t);
  if(((j_10 != NULL) && (j_10 != t)))
    _fail(t);
  else
    j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_10), term_i_29);
  t = conc_strings_0_0(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = file_exists_0_0(t);
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(s_0, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  t = new_file_0_0(t);
  if(((l_10 != NULL) && (l_10 != t)))
    _fail(t);
  else
    l_10 = t;
  if(((m_10 != NULL) && (m_10 != t)))
    _fail(t);
  else
    m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), term_k_5);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), term_h_29);
  {
    ATerm t_0 (ATerm t)
    {
      t = term_j_29;
      return(t);
    }
    t = assert_1_0(t_0, t);
    t = not_null(m_10);
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  if(((o_10 != NULL) && (o_10 != t)))
    _fail(t);
  else
    o_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
      t = not_null(o_10);
      if(((q_10 != NULL) && (q_10 != t)))
        _fail(t);
      else
        q_10 = t;
      t = xtc_new_file_0_0(t);
      if(((r_10 != NULL) && (r_10 != t)))
        _fail(t);
      else
        r_10 = t;
      if(((s_10 != NULL) && (s_10 != t)))
        _fail(t);
      else
        s_10 = t;
      t = m_0(t);
      if(((t_10 != NULL) && (t_10 != t)))
        _fail(t);
      else
        t_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_10), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), term_k_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(r_10);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_10));
    }
  else
    {
      ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((p_10 != NULL) && (p_10 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(p_10);
      if(((u_10 != NULL) && (u_10 != t)))
        _fail(t);
      else
        u_10 = t;
      t = not_null(o_10);
      if(((v_10 != NULL) && (v_10 != t)))
        _fail(t);
      else
        v_10 = t;
      t = not_null(u_10);
      t = xtc_new_file_0_0(t);
      if(((w_10 != NULL) && (w_10 != t)))
        _fail(t);
      else
        w_10 = t;
      if(((x_10 != NULL) && (x_10 != t)))
        _fail(t);
      else
        x_10 = t;
      t = m_0(t);
      if(((y_10 != NULL) && (y_10 != t)))
        _fail(t);
      else
        y_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_10), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_10)), term_k_29), not_null(u_10)), term_l_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(w_10);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_10));
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm l_62 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
  if(((c_11 != NULL) && (c_11 != t)))
    _fail(t);
  else
    c_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((a_11 != NULL) && (a_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((d_11 != NULL) && (d_11 != t)))
    _fail(t);
  else
    d_11 = t;
  t = SSLgetAnnotations(not_null(c_11));
  if(((z_10 != NULL) && (z_10 != t)))
    _fail(t);
  else
    z_10 = t;
  t = not_null(a_11);
  t = l_62(t);
  if(((b_11 != NULL) && (b_11 != t)))
    _fail(t);
  else
    b_11 = t;
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(b_11)), not_null(z_10));
  if(((e_11 != NULL) && (e_11 != t)))
    _fail(t);
  else
    e_11 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(p_29);
        }
      else
        {
          t = o_29;
          t = stdin_0_0(t);
        }
      LocalPopChoice(n_29);
      t = xtc_transform_file_2_0(d_84, e_84, t);
    }
  else
    {
      t = m_29;
      t = xtc_transform_term_2_0(d_84, e_84, t);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
    if(((g_11 != NULL) && (g_11 != t)))
      _fail(t);
    else
      g_11 = t;
    if(((h_11 != NULL) && (h_11 != t)))
      _fail(t);
    else
      h_11 = t;
    t = term_e_5;
    t = get_config_0_0(t);
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_11), term_z_5);
    t = geq_0_0(t);
    t = not_null(g_11);
    t = l_81(t);
    return(t);
  }
  t = try_1_0(u_0, t);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm v_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_q_29);
      return(t);
    }
    t = if_verbose3_1_0(v_0, t);
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm j_11 = NULL;
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  t = SSL_table_keys(not_null(j_11));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_11 = NULL;
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  t = table_keys_0_0(t);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
      if(((l_11 != NULL) && (l_11 != t)))
        _fail(t);
      else
        l_11 = t;
      if(((m_11 != NULL) && (m_11 != t)))
        _fail(t);
      else
        m_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_11), not_null(l_11));
      t = table_get_0_0(t);
      if(((n_11 != NULL) && (n_11 != t)))
        _fail(t);
      else
        n_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), not_null(n_11));
      return(t);
    }
    t = map_1_0(w_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
    if(((o_11 != NULL) && (o_11 != t)))
      _fail(t);
    else
      o_11 = t;
    if(((p_11 != NULL) && (p_11 != t)))
      _fail(t);
    else
      p_11 = t;
    t = term_e_5;
    t = get_config_0_0(t);
    if(((q_11 != NULL) && (q_11 != t)))
      _fail(t);
    else
      q_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), term_n_26);
    t = geq_0_0(t);
    t = not_null(o_11);
    t = n_81(t);
    return(t);
  }
  t = try_1_0(x_0, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
  if(((r_11 != NULL) && (r_11 != t)))
    _fail(t);
  else
    r_11 = t;
  if(((s_11 != NULL) && (s_11 != t)))
    _fail(t);
  else
    s_11 = t;
  if(((t_11 != NULL) && (t_11 != t)))
    _fail(t);
  else
    t_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, not_null(t_11));
  t = printnl_0_0(t);
  t = not_null(r_11);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  if(((u_11 != NULL) && (u_11 != t)))
    _fail(t);
  else
    u_11 = t;
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_29, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_11)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_29 = ATgetFirst((ATermList) t);
      if(match_cons(s_29, sym__2))
        {
          if(((w_11 != NULL) && (w_11 != ATgetArgument(s_29, 0))))
            _fail(ATgetArgument(s_29, 0));
          else
            w_11 = ATgetArgument(s_29, 0);
          if(((x_11 != NULL) && (x_11 != ATgetArgument(s_29, 1))))
            _fail(ATgetArgument(s_29, 1));
          else
            x_11 = ATgetArgument(s_29, 1);
        }
      else
        _fail(t);
      {
        ATerm t_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(x_11);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_11 != NULL) && (y_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_11 = ATgetArgument(t, 0);
      if(((z_11 != NULL) && (z_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_29, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_11)));
  t = table_get_0_0(t);
  {
    ATerm y_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((z_11 != NULL) && (z_11 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_11 = ATgetArgument(t, 0);
          if(((b_12 != NULL) && (b_12 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
    t = not_null(b_12);
  }
  return(t);
}
ATerm filter_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = filter_1_0(o_77, t);
              return(t);
            }
            t = Cons_2_0(o_77, z_0, t);
            ;
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            {
              ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
              if(((d_12 != NULL) && (d_12 != t)))
                _fail(t);
              else
                d_12 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((e_12 != NULL) && (e_12 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    e_12 = ATgetFirst((ATermList) t);
                  if(((f_12 != NULL) && (f_12 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    f_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(f_12);
              if(((g_12 != NULL) && (g_12 != t)))
                _fail(t);
              else
                g_12 = t;
              t = filter_1_0(o_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      t = i_79(t);
      t = h_12(t);
      return(t);
    }
    t = try_1_0(a_1, t);
    return(t);
  }
  t = h_12(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm i_12 = NULL;
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  {
    ATerm b_1 (ATerm t)
    {
      t = term_z_29;
      t = table_get_0_0(t);
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm a_30 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_30;
          }
      }
      return(t);
    }
    t = repeat_1_0(b_1, t);
    t = not_null(i_12);
  }
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, (ATerm) ATinsert(ATempty, not_null(l_12)));
  t = printnl_0_0(t);
  t = not_null(j_12);
  return(t);
}
ATerm say_1_0 (ATerm r_65 (ATerm), ATerm t)
{
  ATerm m_12 = NULL;
  if(((m_12 != NULL) && (m_12 != t)))
    _fail(t);
  else
    m_12 = t;
  t = r_65(t);
  t = debug_0_0(t);
  t = not_null(m_12);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
    if(((n_12 != NULL) && (n_12 != t)))
      _fail(t);
    else
      n_12 = t;
    if(((o_12 != NULL) && (o_12 != t)))
      _fail(t);
    else
      o_12 = t;
    t = term_e_5;
    t = get_config_0_0(t);
    if(((p_12 != NULL) && (p_12 != t)))
      _fail(t);
    else
      p_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_12), term_p_13);
    t = geq_0_0(t);
    t = not_null(n_12);
    t = m_81(t);
    return(t);
  }
  t = try_1_0(c_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
    if(((q_12 != NULL) && (q_12 != t)))
      _fail(t);
    else
      q_12 = t;
    if(((r_12 != NULL) && (r_12 != t)))
      _fail(t);
    else
      r_12 = t;
    t = term_e_5;
    t = get_config_0_0(t);
    if(((s_12 != NULL) && (s_12 != t)))
      _fail(t);
    else
      s_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_12), term_d_6);
    t = geq_0_0(t);
    t = not_null(q_12);
    t = o_81(t);
    return(t);
  }
  t = try_1_0(d_1, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_12 != NULL) && (t_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_12 = ATgetArgument(t, 0);
      if(((t_12 != NULL) && (t_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((u_12 != NULL) && (u_12 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        u_12 = ATgetFirst((ATermList) t);
      if(((v_12 != NULL) && (v_12 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        v_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  t = d_74(t);
  {
    ATerm e_1 (ATerm t)
    {
      ATerm x_12 = NULL;
      if(((x_12 != NULL) && (x_12 != t)))
        _fail(t);
      else
        x_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), not_null(x_12));
      t = c_74(t);
      return(t);
    }
    t = fetch_1_0(e_1, t);
    t = not_null(v_12);
  }
  return(t);
}
ATerm union_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_12 != NULL) && (z_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_12 = ATgetArgument(t, 0);
      if(((y_12 != NULL) && (y_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_12);
  {
    ATerm a_13 (ATerm t)
    {
      ATerm b_30 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(y_12);
          ;
          LocalPopChoice(c_30);
        }
      else
        {
          t = b_30;
          {
            ATerm d_30 = t;
            int e_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(y_12);
                  return(t);
                }
                t = HdMember_p__2_0(y_73, f_1, t);
                t = a_13(t);
                ;
                LocalPopChoice(e_30);
              }
            else
              {
                t = d_30;
                t = Cons_2_0(_id, a_13, t);
              }
          }
        }
      return(t);
    }
    t = a_13(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((b_13 != NULL) && (b_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_13 = ATgetArgument(t, 0);
      if(((c_13 != NULL) && (c_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_13 = ATgetArgument(t, 1);
      if(((d_13 != NULL) && (d_13 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        d_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((e_13 != NULL) && (e_13 != t)))
    _fail(t);
  else
    e_13 = t;
  if(((f_13 != NULL) && (f_13 != t)))
    _fail(t);
  else
    f_13 = t;
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_13), not_null(c_13));
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = (ATerm) ATempty;
      }
    if(((h_13 != NULL) && (h_13 != t)))
      _fail(t);
    else
      h_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(d_13));
    t = union_0_0(t);
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(b_13), not_null(c_13), not_null(i_13));
    t = set_0_0(t);
    t = not_null(e_13);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_13 != NULL) && (k_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_13 = ATgetArgument(t, 0);
      if(((j_13 != NULL) && (j_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(j_13);
  {
    ATerm g_1 (ATerm t)
    {
      ATerm l_13 = NULL,m_13 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((l_13 != NULL) && (l_13 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_13 = ATgetArgument(t, 0);
          if(((m_13 != NULL) && (m_13 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(k_13), not_null(l_13), not_null(m_13));
      t = x_81(t);
      return(t);
    }
    t = map_1_0(g_1, t);
  }
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  if(((n_13 != NULL) && (n_13 != t)))
    _fail(t);
  else
    n_13 = t;
  if(((o_13 != NULL) && (o_13 != t)))
    _fail(t);
  else
    o_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), (ATerm) ATinsert(ATempty, term_h_30));
  t = access_0_0(t);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_14 (ATerm s_13, ATerm t_13, ATerm t)
  {
    ATerm u_13 = NULL;
    t = not_null(s_13);
    if(((u_13 != NULL) && (u_13 != t)))
      _fail(t);
    else
      u_13 = t;
    t = SSL_fclose(not_null(u_13));
    return(t);
  }
  ATerm c_14 (ATerm w_13, ATerm t)
  {
    ATerm y_13 = NULL;
    t = not_null(w_13);
    if(((y_13 != NULL) && (y_13 != t)))
      _fail(t);
    else
      y_13 = t;
    t = SSL_fclose(not_null(y_13));
    return(t);
  }
  ATerm z_13 = NULL,a_14 = NULL;
  if(((a_14 != NULL) && (a_14 != t)))
    _fail(t);
  else
    a_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_13 = ATgetArgument(t, 0);
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_14(not_null(z_13), not_null(a_14), t);
            ;
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            t = c_14(not_null(a_14), t);
          }
      }
    }
  else
    {
      t = c_14(not_null(a_14), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm d_14 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((d_14 != NULL) && (d_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(d_14));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_14 != NULL) && (e_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_14 = ATgetArgument(t, 0);
      if(((f_14 != NULL) && (f_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(e_14), not_null(f_14));
  if(((g_14 != NULL) && (g_14 != t)))
    _fail(t);
  else
    g_14 = t;
  if(((h_14 != NULL) && (h_14 != t)))
    _fail(t);
  else
    h_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_14));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL;
  t = SSL_stdin_stream();
  if(((i_14 != NULL) && (i_14 != t)))
    _fail(t);
  else
    i_14 = t;
  if(((j_14 != NULL) && (j_14 != t)))
    _fail(t);
  else
    j_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_14));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL;
  t = SSL_stdout_stream();
  if(((k_14 != NULL) && (k_14 != t)))
    _fail(t);
  else
    k_14 = t;
  if(((l_14 != NULL) && (l_14 != t)))
    _fail(t);
  else
    l_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_14));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  t = SSL_stderr_stream();
  if(((m_14 != NULL) && (m_14 != t)))
    _fail(t);
  else
    m_14 = t;
  if(((n_14 != NULL) && (n_14 != t)))
    _fail(t);
  else
    n_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_14));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(p_14);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(p_14);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(p_14);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
  if(((r_14 != NULL) && (r_14 != t)))
    _fail(t);
  else
    r_14 = t;
  t = not_null(q_14);
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  t = SSL_explode_term(not_null(s_14));
  if(match_cons(t, sym__2))
    {
      ATerm k_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_30 = ATgetArgument(t, 1);
        if(((ATgetType(l_30) == AT_LIST) && !(ATisEmpty(l_30))))
          {
            if(((u_14 != NULL) && (u_14 != ATgetFirst((ATermList) l_30))))
              _fail(ATgetFirst((ATermList) l_30));
            else
              u_14 = ATgetFirst((ATermList) l_30);
            if(((t_14 != NULL) && (t_14 != (ATerm) ATgetNext((ATermList) l_30))))
              _fail((ATerm) ATgetNext((ATermList) l_30));
            else
              t_14 = (ATerm) ATgetNext((ATermList) l_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(u_14);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_30 = ATgetArgument(t, 0);
      ATerm n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        {
          ATerm q_30 = t;
          int r_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_1 (ATerm t)
              {
                ATerm v_14 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((v_14 != NULL) && (v_14 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      v_14 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(v_14);
                return(t);
              }
              t = _2_0(h_1, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(r_30);
            }
          else
            {
              t = q_30;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
      if(((w_14 != NULL) && (w_14 != t)))
        _fail(t);
      else
        w_14 = t;
      if(((x_14 != NULL) && (x_14 != t)))
        _fail(t);
      else
        x_14 = t;
      t = not_null(w_14);
      if(((y_14 != NULL) && (y_14 != t)))
        _fail(t);
      else
        y_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_14), term_u_30);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      {
        ATerm i_1 (ATerm t)
        {
          t = term_v_30;
          return(t);
        }
        t = debug_1_0(i_1, t);
        _fail(t);
      }
    }
  if(((z_14 != NULL) && (z_14 != t)))
    _fail(t);
  else
    z_14 = t;
  t = read_from_stream_0_0(t);
  if(((a_15 != NULL) && (a_15 != t)))
    _fail(t);
  else
    a_15 = t;
  t = not_null(z_14);
  t = fclose_0_0(t);
  t = not_null(a_15);
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_15 != NULL) && (b_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_15 = ATgetArgument(t, 0);
      if(((c_15 != NULL) && (c_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(b_15), not_null(c_15));
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  if(((d_15 != NULL) && (d_15 != t)))
    _fail(t);
  else
    d_15 = t;
  if(((e_15 != NULL) && (e_15 != t)))
    _fail(t);
  else
    e_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), (ATerm) ATinsert(ATempty, term_w_30));
  t = access_0_0(t);
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(y_30);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_30;
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_31 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_31;
              }
            {
              ATerm j_1 (ATerm t)
              {
                t = term_c_31;
                return(t);
              }
              t = debug_1_0(j_1, t);
            }
            ;
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            {
              ATerm k_1 (ATerm t)
              {
                t = term_d_31;
                return(t);
              }
              t = debug_1_0(k_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  if(((f_15 != NULL) && (f_15 != t)))
    _fail(t);
  else
    f_15 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm m_1 (ATerm t)
      {
        t = term_e_31;
        return(t);
      }
      t = debug_1_0(m_1, t);
      return(t);
    }
    t = if_verbose5_1_0(l_1, t);
    {
      ATerm f_31 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_29, (ATerm) ATmakeAppl(sym_Imported_1, not_null(f_15)));
          t = table_get_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_31;
        }
      if(((g_15 != NULL) && (g_15 != t)))
        _fail(t);
      else
        g_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_29, term_g_31, (ATerm) ATinsert(ATempty, not_null(f_15)));
      t = table_put_0_0(t);
      t = not_null(g_15);
      {
        ATerm n_1 (ATerm t)
        {
          ATerm o_1 (ATerm t)
          {
            t = term_h_31;
            return(t);
          }
          t = debug_1_0(o_1, t);
          return(t);
        }
        t = if_verbose4_1_0(n_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              t = term_i_31;
              return(t);
            }
            t = say_1_0(q_1, t);
            return(t);
          }
          t = if_verbose6_1_0(p_1, t);
          if(((h_15 != NULL) && (h_15 != t)))
            _fail(t);
          else
            h_15 = t;
          if(((i_15 != NULL) && (i_15 != t)))
            _fail(t);
          else
            i_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_29, not_null(i_15));
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = term_j_31;
                return(t);
              }
              t = say_1_0(s_1, t);
              return(t);
            }
            t = if_verbose6_1_0(r_1, t);
            t = (ATerm) ATmakeAppl(sym__3, term_r_29, (ATerm)ATmakeAppl(sym_Imported_1, not_null(f_15)), (ATerm) ATempty);
            t = table_put_0_0(t);
            {
              ATerm t_1 (ATerm t)
              {
                ATerm u_1 (ATerm t)
                {
                  t = term_i_31;
                  return(t);
                }
                t = say_1_0(u_1, t);
                return(t);
              }
              t = if_verbose4_1_0(t_1, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm j_15 = NULL;
  if(((j_15 != NULL) && (j_15 != t)))
    _fail(t);
  else
    j_15 = t;
  t = SSL_getenv(not_null(j_15));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_p_31;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_15 = NULL;
  ATerm v_1 (ATerm t)
  {
    ATerm w_1 (ATerm t)
    {
      t = term_q_31;
      return(t);
    }
    t = debug_1_0(w_1, t);
    return(t);
  }
  t = if_verbose5_1_0(v_1, t);
  if(((k_15 != NULL) && (k_15 != t)))
    _fail(t);
  else
    k_15 = t;
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_31;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(k_15);
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          t = term_u_31;
          return(t);
        }
        t = debug_1_0(y_1, t);
        return(t);
      }
      t = if_verbose5_1_0(x_1, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          t = term_x_31;
          return(t);
        }
        t = debug_1_0(a_2, t);
        return(t);
      }
      t = if_verbose5_1_0(z_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            t = xtc_find_loc_0_0(t);
          }
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              t = term_x_31;
              return(t);
            }
            t = debug_1_0(c_2, t);
            return(t);
          }
          t = if_verbose5_1_0(b_2, t);
        }
      }
      ;
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      {
        ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
        if(((l_15 != NULL) && (l_15 != t)))
          _fail(t);
        else
          l_15 = t;
        if(((m_15 != NULL) && (m_15 != t)))
          _fail(t);
        else
          m_15 = t;
        t = not_null(l_15);
        if(((n_15 != NULL) && (n_15 != t)))
          _fail(t);
        else
          n_15 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_32), not_null(n_15)), term_a_32);
        t = error_0_0(t);
        {
          ATerm d_2 (ATerm t)
          {
            t = term_r_29;
            t = table_getlist_0_0(t);
            {
              ATerm e_2 (ATerm t)
              {
                t = term_c_32;
                return(t);
              }
              t = debug_1_0(e_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(d_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = term_d_32;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
    if(((o_15 != NULL) && (o_15 != t)))
      _fail(t);
    else
      o_15 = t;
    t = term_h_29;
    t = u_84(t);
    t = xtc_find_0_0(t);
    if(((p_15 != NULL) && (p_15 != t)))
      _fail(t);
    else
      p_15 = t;
    t = not_null(o_15);
    if(((q_15 != NULL) && (q_15 != t)))
      _fail(t);
    else
      q_15 = t;
    t = term_h_29;
    t = pass_v_verbose_0_0(t);
    if(((r_15 != NULL) && (r_15 != t)))
      _fail(t);
    else
      r_15 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(r_15)), not_null(p_15)), term_f_32), term_e_32);
    return(t);
  }
  t = xtc_transform_2_0(f_2, g_2, t);
  return(t);
}
ATerm xtc_parse_sdf_0_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = term_g_32;
    return(t);
  }
  t = xtc_sglr_1_0(h_2, t);
  t = xtc_implode_asfix_0_0(t);
  return(t);
}
ATerm xtc_implode_asfix_0_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = term_h_32;
    return(t);
  }
  t = xtc_transform_2_0(i_2, pass_verbose_0_0, t);
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  if(((u_15 != NULL) && (u_15 != t)))
    _fail(t);
  else
    u_15 = t;
  if(match_cons(t, sym__2))
    {
      if(((v_15 != NULL) && (v_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_15 = ATgetArgument(t, 0);
      if(((w_15 != NULL) && (w_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(v_15);
  if(match_cons(t, sym_AST_0))
    {
      ATerm x_15 = NULL;
      t = not_null(w_15);
      if(((x_15 != NULL) && (x_15 != t)))
        _fail(t);
      else
        x_15 = t;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          ATerm y_15 = NULL;
          t = not_null(w_15);
          if(((y_15 != NULL) && (y_15 != t)))
            _fail(t);
          else
            y_15 = t;
          t = xtc_implode_asfix_0_0(t);
        }
      else
        {
          ATerm z_15 = NULL;
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = not_null(w_15);
          if(((z_15 != NULL) && (z_15 != t)))
            _fail(t);
          else
            z_15 = t;
          t = xtc_parse_sdf_0_0(t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      t = term_l_32;
    }
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  if(((a_16 != NULL) && (a_16 != t)))
    _fail(t);
  else
    a_16 = t;
  t = get_input_type_0_0(t);
  if(((b_16 != NULL) && (b_16 != t)))
    _fail(t);
  else
    b_16 = t;
  t = not_null(a_16);
  if(((c_16 != NULL) && (c_16 != t)))
    _fail(t);
  else
    c_16 = t;
  if(((d_16 != NULL) && (d_16 != t)))
    _fail(t);
  else
    d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_16), not_null(d_16));
  t = pre_process_sdf_0_0(t);
  {
    ATerm j_2 (ATerm t)
    {
      t = term_m_32;
      return(t);
    }
    t = xtc_transform_2_0(j_2, pass_verbose_0_0, t);
    {
      ATerm k_2 (ATerm t)
      {
        t = term_n_32;
        return(t);
      }
      t = xtc_transform_2_0(k_2, pass_verbose_0_0, t);
    }
  }
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_16 != NULL) && (e_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_16 = ATgetArgument(t, 0);
      if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(e_16), not_null(f_16));
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stderr_0)))
    _fail(t);
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdout_0)))
    _fail(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm y_16 (ATerm j_16, ATerm k_16, ATerm t)
  {
    ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
    t = not_null(j_16);
    if(((l_16 != NULL) && (l_16 != t)))
      _fail(t);
    else
      l_16 = t;
    t = not_null(k_16);
    if(((m_16 != NULL) && (m_16 != t)))
      _fail(t);
    else
      m_16 = t;
    t = k_0(t);
    if(((n_16 != NULL) && (n_16 != t)))
      _fail(t);
    else
      n_16 = t;
    {
      ATerm o_32 = t;
      int p_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(p_32);
        }
      else
        {
          t = o_32;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), not_null(n_16));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_16));
    }
    return(t);
  }
  ATerm z_16 (ATerm o_16, ATerm p_16, ATerm t)
  {
    ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
    t = not_null(o_16);
    if(((q_16 != NULL) && (q_16 != t)))
      _fail(t);
    else
      q_16 = t;
    t = not_null(p_16);
    if(((r_16 != NULL) && (r_16 != t)))
      _fail(t);
    else
      r_16 = t;
    t = k_0(t);
    if(((s_16 != NULL) && (s_16 != t)))
      _fail(t);
    else
      s_16 = t;
    {
      ATerm q_32 = t;
      if((PushChoice() == 0))
        {
          ATerm r_32 = t;
          int s_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(s_32);
            }
          else
            {
              t = r_32;
              {
                ATerm t_32 = t;
                int u_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(u_32);
                  }
                else
                  {
                    t = t_32;
                    {
                      ATerm t_16 = NULL;
                      if(((t_16 != NULL) && (t_16 != t)))
                        _fail(t);
                      else
                        t_16 = t;
                      if(((q_16 != NULL) && (q_16 != t)))
                        _fail(t);
                      else
                        q_16 = t;
                      t = not_null(t_16);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_32;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), not_null(s_16));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_16));
    }
    return(t);
  }
  ATerm u_16 = NULL,v_16 = NULL;
  if(((u_16 != NULL) && (u_16 != t)))
    _fail(t);
  else
    u_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((v_16 != NULL) && (v_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_16(not_null(v_16), not_null(u_16), t);
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        {
          ATerm x_32 = t;
          int y_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_16(not_null(v_16), not_null(u_16), t);
              ;
              LocalPopChoice(y_32);
            }
          else
            {
              t = x_32;
              {
                ATerm w_16 = NULL,x_16 = NULL;
                t = not_null(v_16);
                if(((w_16 != NULL) && (w_16 != t)))
                  _fail(t);
                else
                  w_16 = t;
                t = not_null(u_16);
                if(((x_16 != NULL) && (x_16 != t)))
                  _fail(t);
                else
                  x_16 = t;
                t = k_0(t);
                if(((w_16 != NULL) && (w_16 != t)))
                  _fail(t);
                else
                  w_16 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_16));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm a_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_32 = ATgetFirst((ATermList) t);
      if(((a_17 != NULL) && (a_17 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        a_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(a_17);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_17 != NULL) && (b_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_17 = ATgetArgument(t, 0);
      if(((c_17 != NULL) && (c_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((d_17 != NULL) && (d_17 != t)))
    _fail(t);
  else
    d_17 = t;
  if(((e_17 != NULL) && (e_17 != t)))
    _fail(t);
  else
    e_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(c_17));
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATempty;
      }
    if(((f_17 != NULL) && (f_17 != t)))
      _fail(t);
    else
      f_17 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(b_17), not_null(c_17), not_null(f_17));
    t = table_put_0_0(t);
    t = not_null(d_17);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(((g_17 != NULL) && (g_17 != t)))
    _fail(t);
  else
    g_17 = t;
  t = j_80(t);
  if(((h_17 != NULL) && (h_17 != t)))
    _fail(t);
  else
    h_17 = t;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), term_z_28);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_17 != NULL) && (j_17 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_17 = ATgetFirst((ATermList) t);
        if(((i_17 != NULL) && (i_17 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          i_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(h_17), term_z_28, not_null(i_17));
    t = table_put_0_0(t);
    t = not_null(j_17);
    {
      ATerm l_2 (ATerm t)
      {
        ATerm k_17 = NULL;
        if(((k_17 != NULL) && (k_17 != t)))
          _fail(t);
        else
          k_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), not_null(k_17));
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(l_2, t);
      t = not_null(g_17);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm l_17 = NULL;
  if(((l_17 != NULL) && (l_17 != t)))
    _fail(t);
  else
    l_17 = t;
  t = SSL_remove(not_null(l_17));
  return(t);
}
ATerm restore_always_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_81(t);
      t = f_81(t);
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      t = f_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  if(((m_17 != NULL) && (m_17 != t)))
    _fail(t);
  else
    m_17 = t;
  t = i_80(t);
  if(((n_17 != NULL) && (n_17 != t)))
    _fail(t);
  else
    n_17 = t;
  if(((o_17 != NULL) && (o_17 != t)))
    _fail(t);
  else
    o_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), term_z_28);
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        t = (ATerm) ATempty;
      }
    if(((p_17 != NULL) && (p_17 != t)))
      _fail(t);
    else
      p_17 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(n_17), term_z_28, (ATerm) ATinsert(CheckATermList(not_null(p_17)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(m_17);
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  ATerm m_2 (ATerm t)
  {
    t = term_j_29;
    return(t);
  }
  t = begin_scope_1_0(m_2, t);
  {
    ATerm n_2 (ATerm t)
    {
      ATerm s_17 = NULL;
      if(((s_17 != NULL) && (s_17 != t)))
        _fail(t);
      else
        s_17 = t;
      {
        ATerm i_33 = t;
        int j_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_33;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(j_33);
          }
        else
          {
            t = i_33;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_17 != NULL) && (r_17 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_17 = ATgetFirst((ATermList) t);
            if(((q_17 != NULL) && (q_17 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              q_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(r_17);
        {
          ATerm o_2 (ATerm t)
          {
            t = try_1_0(remove_file_0_0, t);
            return(t);
          }
          t = map_1_0(o_2, t);
          t = not_null(s_17);
          {
            ATerm p_2 (ATerm t)
            {
              t = term_j_29;
              return(t);
            }
            t = end_scope_1_0(p_2, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(n_83, n_2, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
        if(((t_17 != NULL) && (t_17 != t)))
          _fail(t);
        else
          t_17 = t;
        if(((u_17 != NULL) && (u_17 != t)))
          _fail(t);
        else
          u_17 = t;
        t = term_l_29;
        t = get_config_0_0(t);
        if(((v_17 != NULL) && (v_17 != t)))
          _fail(t);
        else
          v_17 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_17));
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = term_i_5;
      }
    t = o_83(t);
    {
      ATerm r_2 (ATerm t)
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_29;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
            t = term_p_33;
          }
        return(t);
      }
      t = copy_to_1_0(r_2, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(q_2, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm x_17 = NULL;
    if(((x_17 != NULL) && (x_17 != t)))
      _fail(t);
    else
      x_17 = t;
    if(match_string(t, "-k"))
      {
        t = not_null(x_17);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = not_null(x_17);
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
    if(((y_17 != NULL) && (y_17 != t)))
      _fail(t);
    else
      y_17 = t;
    if(((z_17 != NULL) && (z_17 != t)))
      _fail(t);
    else
      z_17 = t;
    t = string_to_int_0_0(t);
    if(((a_18 != NULL) && (a_18 != t)))
      _fail(t);
    else
      a_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_33, not_null(a_18));
    t = set_config_0_0(t);
    t = not_null(y_17);
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_r_33;
    return(t);
  }
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm b_18 = NULL;
  if(((b_18 != NULL) && (b_18 != t)))
    _fail(t);
  else
    b_18 = t;
  t = SSL_string_to_int(not_null(b_18));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 (ATerm t)
      {
        ATerm d_18 = NULL;
        if(((d_18 != NULL) && (d_18 != t)))
          _fail(t);
        else
          d_18 = t;
        if(match_string(t, "-S"))
          {
            t = not_null(d_18);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = not_null(d_18);
          }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        ATerm e_18 = NULL;
        if(((e_18 != NULL) && (e_18 != t)))
          _fail(t);
        else
          e_18 = t;
        t = term_v_33;
        t = set_config_0_0(t);
        t = term_w_33;
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_x_33;
        return(t);
      }
      t = Option_3_0(v_2, w_2, x_2, t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      {
        ATerm y_33 = t;
        int z_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
              if(((f_18 != NULL) && (f_18 != t)))
                _fail(t);
              else
                f_18 = t;
              if(((g_18 != NULL) && (g_18 != t)))
                _fail(t);
              else
                g_18 = t;
              t = string_to_int_0_0(t);
              if(((h_18 != NULL) && (h_18 != t)))
                _fail(t);
              else
                h_18 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_5, not_null(h_18));
              t = set_config_0_0(t);
              t = not_null(f_18);
              if(((i_18 != NULL) && (i_18 != t)))
                _fail(t);
              else
                i_18 = t;
              if(((j_18 != NULL) && (j_18 != t)))
                _fail(t);
              else
                j_18 = t;
              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_18));
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              t = term_a_34;
              return(t);
            }
            t = ArgOption_3_0(y_2, z_2, a_3, t);
            ;
            LocalPopChoice(z_33);
          }
        else
          {
            t = y_33;
            {
              ATerm b_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                ATerm k_18 = NULL;
                if(((k_18 != NULL) && (k_18 != t)))
                  _fail(t);
                else
                  k_18 = t;
                t = term_c_34;
                t = set_config_0_0(t);
                t = term_d_34;
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_e_34;
                return(t);
              }
              t = Option_3_0(b_3, c_3, d_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm m_18 = NULL;
    if(((m_18 != NULL) && (m_18 != t)))
      _fail(t);
    else
      m_18 = t;
    if(match_string(t, "-o"))
      {
        t = not_null(m_18);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = not_null(m_18);
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
    if(((n_18 != NULL) && (n_18 != t)))
      _fail(t);
    else
      n_18 = t;
    if(((o_18 != NULL) && (o_18 != t)))
      _fail(t);
    else
      o_18 = t;
    if(((p_18 != NULL) && (p_18 != t)))
      _fail(t);
    else
      p_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_29, not_null(p_18));
    t = set_config_0_0(t);
    t = not_null(n_18);
    if(((q_18 != NULL) && (q_18 != t)))
      _fail(t);
    else
      q_18 = t;
    if(((r_18 != NULL) && (r_18 != t)))
      _fail(t);
    else
      r_18 = t;
    t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_18));
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_h_34;
    return(t);
  }
  t = ArgOption_3_0(e_3, f_3, g_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      {
        ATerm h_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          ATerm s_18 = NULL;
          if(((s_18 != NULL) && (s_18 != t)))
            _fail(t);
          else
            s_18 = t;
          t = term_l_34;
          t = set_config_0_0(t);
          t = term_m_34;
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = term_n_34;
          return(t);
        }
        t = Option_3_0(h_3, i_3, j_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  if(((v_18 != NULL) && (v_18 != t)))
    _fail(t);
  else
    v_18 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(v_18);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_18 != NULL) && (w_18 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_18 = ATgetFirst((ATermList) t);
          if(((x_18 != NULL) && (x_18 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(x_18);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_18 != NULL) && (y_18 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_18 = ATgetFirst((ATermList) t);
          if(((z_18 != NULL) && (z_18 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(w_18);
      if(((a_19 != NULL) && (a_19 != t)))
        _fail(t);
      else
        a_19 = t;
      t = not_null(y_18);
      if(((b_19 != NULL) && (b_19 != t)))
        _fail(t);
      else
        b_19 = t;
      t = not_null(z_18);
      if(((c_19 != NULL) && (c_19 != t)))
        _fail(t);
      else
        c_19 = t;
      t = not_null(v_18);
      if(((d_19 != NULL) && (d_19 != t)))
        _fail(t);
      else
        d_19 = t;
      t = not_null(a_19);
      t = h_0(t);
      t = not_null(d_19);
      if(((e_19 != NULL) && (e_19 != t)))
        _fail(t);
      else
        e_19 = t;
      t = not_null(b_19);
      t = i_0(t);
      if(((f_19 != NULL) && (f_19 != t)))
        _fail(t);
      else
        f_19 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(c_19)), not_null(f_19));
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm h_19 = NULL;
    if(((h_19 != NULL) && (h_19 != t)))
      _fail(t);
    else
      h_19 = t;
    if(match_string(t, "-i"))
      {
        t = not_null(h_19);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = not_null(h_19);
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
    if(((i_19 != NULL) && (i_19 != t)))
      _fail(t);
    else
      i_19 = t;
    if(((j_19 != NULL) && (j_19 != t)))
      _fail(t);
    else
      j_19 = t;
    if(((k_19 != NULL) && (k_19 != t)))
      _fail(t);
    else
      k_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_29, not_null(k_19));
    t = set_config_0_0(t);
    t = not_null(i_19);
    if(((l_19 != NULL) && (l_19 != t)))
      _fail(t);
    else
      l_19 = t;
    if(((m_19 != NULL) && (m_19 != t)))
      _fail(t);
    else
      m_19 = t;
    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_19));
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_o_34;
    return(t);
  }
  t = ArgOption_3_0(k_3, l_3, m_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
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
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(s_34);
          }
        else
          {
            t = r_34;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        ATerm n_19 = NULL;
        if(((n_19 != NULL) && (n_19 != t)))
          _fail(t);
        else
          n_19 = t;
        t = term_w_34;
        t = set_config_0_0(t);
        t = not_null(n_19);
        return(t);
      }
      ATerm p_3 (ATerm t)
      {
        t = term_x_34;
        return(t);
      }
      t = Option_3_0(n_3, o_3, p_3, t);
      ;
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      {
        ATerm y_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm r_3 (ATerm t)
            {
              ATerm o_19 = NULL;
              if(((o_19 != NULL) && (o_19 != t)))
                _fail(t);
              else
                o_19 = t;
              t = term_b_35;
              t = set_config_0_0(t);
              t = not_null(o_19);
              return(t);
            }
            ATerm s_3 (ATerm t)
            {
              t = term_c_35;
              return(t);
            }
            t = Option_3_0(q_3, r_3, s_3, t);
            ;
            LocalPopChoice(z_34);
          }
        else
          {
            t = y_34;
            t = io_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  if(((p_19 != NULL) && (p_19 != t)))
    _fail(t);
  else
    p_19 = t;
  if(((q_19 != NULL) && (q_19 != t)))
    _fail(t);
  else
    q_19 = t;
  t = term_h_29;
  t = whoami_0_0(t);
  if(((r_19 != NULL) && (r_19 != t)))
    _fail(t);
  else
    r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_35), not_null(r_19)), term_d_35));
  t = printnl_0_0(t);
  t = term_h_5;
  t = exit_0_0(t);
  t = not_null(p_19);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL;
  t = report_run_time_0_0(t);
  if(((s_19 != NULL) && (s_19 != t)))
    _fail(t);
  else
    s_19 = t;
  t = term_h_29;
  t = whoami_0_0(t);
  if(((t_19 != NULL) && (t_19 != t)))
    _fail(t);
  else
    t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, (ATerm) ATinsert(ATinsert(ATempty, term_f_35), not_null(t_19)));
  t = printnl_0_0(t);
  t = term_h_5;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_35;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm u_19 = NULL;
  if(((u_19 != NULL) && (u_19 != t)))
    _fail(t);
  else
    u_19 = t;
  t = SSL_TicksToSeconds(not_null(u_19));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_19 != NULL) && (v_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_19 = ATgetArgument(t, 0);
      if(((w_19 != NULL) && (w_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(v_19), not_null(w_19));
        ;
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        t = SSL_addr(not_null(v_19), not_null(w_19));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm t)
{
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = l_76(t);
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      {
        ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
        if(((y_19 != NULL) && (y_19 != t)))
          _fail(t);
        else
          y_19 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((z_19 != NULL) && (z_19 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              z_19 = ATgetFirst((ATermList) t);
            if(((a_20 != NULL) && (a_20 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              a_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(z_19);
        if(((f_20 != NULL) && (f_20 != t)))
          _fail(t);
        else
          f_20 = t;
        t = not_null(a_20);
        if(((g_20 != NULL) && (g_20 != t)))
          _fail(t);
        else
          g_20 = t;
        t = not_null(y_19);
        if(((h_20 != NULL) && (h_20 != t)))
          _fail(t);
        else
          h_20 = t;
        t = not_null(g_20);
        t = foldr_2_0(l_76, m_76, t);
        if(((i_20 != NULL) && (i_20 != t)))
          _fail(t);
        else
          i_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), not_null(i_20));
        t = m_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  if(((j_20 != NULL) && (j_20 != t)))
    _fail(t);
  else
    j_20 = t;
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = not_null(j_20);
  if(((l_20 != NULL) && (l_20 != t)))
    _fail(t);
  else
    l_20 = t;
  t = SSL_explode_term(not_null(l_20));
  if(match_cons(t, sym__2))
    {
      ATerm l_35 = ATgetArgument(t, 0);
      if(((m_20 != NULL) && (m_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_20);
  t = foldr_2_0(j_74, k_74, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm t_3 (ATerm t)
    {
      t = term_u_33;
      return(t);
    }
    t = crush_2_0(t_3, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_20 != NULL) && (n_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_20 = ATgetArgument(t, 0);
      if(((o_20 != NULL) && (o_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((p_20 != NULL) && (p_20 != t)))
    _fail(t);
  else
    p_20 = t;
  {
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(n_20), not_null(o_20));
        ;
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        t = SSL_gtr(not_null(n_20), not_null(o_20));
      }
    t = not_null(p_20);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_20 = NULL;
  ATerm o_35 = t;
  int p_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
      if(((s_20 != NULL) && (s_20 != t)))
        _fail(t);
      else
        s_20 = t;
      if(match_cons(t, sym__2))
        {
          if(((t_20 != NULL) && (t_20 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_20 = ATgetArgument(t, 0);
          if(((u_20 != NULL) && (u_20 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(t_20);
      if(((r_20 != NULL) && (r_20 != t)))
        _fail(t);
      else
        r_20 = t;
      t = not_null(u_20);
      if(((r_20 != NULL) && (r_20 != t)))
        _fail(t);
      else
        r_20 = t;
      t = not_null(s_20);
      ;
      LocalPopChoice(p_35);
    }
  else
    {
      t = o_35;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
    if(((v_20 != NULL) && (v_20 != t)))
      _fail(t);
    else
      v_20 = t;
    if(((w_20 != NULL) && (w_20 != t)))
      _fail(t);
    else
      w_20 = t;
    t = term_e_5;
    t = get_config_0_0(t);
    if(((x_20 != NULL) && (x_20 != t)))
      _fail(t);
    else
      x_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_20), term_h_5);
    t = geq_0_0(t);
    t = not_null(v_20);
    t = j_81(t);
    return(t);
  }
  t = try_1_0(u_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
    if(((y_20 != NULL) && (y_20 != t)))
      _fail(t);
    else
      y_20 = t;
    t = run_time_0_0(t);
    if(((z_20 != NULL) && (z_20 != t)))
      _fail(t);
    else
      z_20 = t;
    t = not_null(y_20);
    if(((a_21 != NULL) && (a_21 != t)))
      _fail(t);
    else
      a_21 = t;
    t = term_h_29;
    t = whoami_0_0(t);
    if(((b_21 != NULL) && (b_21 != t)))
      _fail(t);
    else
      b_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_35), not_null(z_20)), term_n_5), not_null(b_21)));
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(v_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_u_33;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_35);
    }
  else
    {
      t = r_35;
      {
        ATerm w_3 (ATerm t)
        {
          ATerm u_35 = t;
          int v_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(v_35);
            }
          else
            {
              t = u_35;
              {
                ATerm w_35 = t;
                int x_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(x_35);
                  }
                else
                  {
                    t = w_35;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(w_3, t);
      }
    }
  t = v_85(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm c_21 = NULL;
  if(((c_21 != NULL) && (c_21 != t)))
    _fail(t);
  else
    c_21 = t;
  t = SSL_table_create(not_null(c_21));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm d_21 = NULL,g_21 = NULL;
  if(((d_21 != NULL) && (d_21 != t)))
    _fail(t);
  else
    d_21 = t;
  if(((g_21 != NULL) && (g_21 != t)))
    _fail(t);
  else
    g_21 = t;
  t = term_y_35;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_35, term_z_35, not_null(d_21));
  t = table_put_0_0(t);
  t = not_null(g_21);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_21 = NULL;
  if(((h_21 != NULL) && (h_21 != t)))
    _fail(t);
  else
    h_21 = t;
  t = SSL_table_destroy(not_null(h_21));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm i_21 = NULL;
  if(((i_21 != NULL) && (i_21 != t)))
    _fail(t);
  else
    i_21 = t;
  t = SSL_exit(not_null(i_21));
  return(t);
}
ATerm long_description_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,t_21 = NULL;
  if(((t_21 != NULL) && (t_21 != t)))
    _fail(t);
  else
    t_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_21 = ATgetFirst((ATermList) t);
      o_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,f_22 = NULL;
        t = not_null(n_21);
        if(((u_21 != NULL) && (u_21 != t)))
          _fail(t);
        else
          u_21 = t;
        t = not_null(o_21);
        if(((v_21 != NULL) && (v_21 != t)))
          _fail(t);
        else
          v_21 = t;
        if(((w_21 != NULL) && (w_21 != t)))
          _fail(t);
        else
          w_21 = t;
        if(((z_21 != NULL) && (z_21 != t)))
          _fail(t);
        else
          z_21 = t;
        t = g_0(t);
        if(((a_22 != NULL) && (a_22 != t)))
          _fail(t);
        else
          a_22 = t;
        t = not_null(z_21);
        if(((b_22 != NULL) && (b_22 != t)))
          _fail(t);
        else
          b_22 = t;
        t = not_null(u_21);
        t = e_0(t);
        if(((c_22 != NULL) && (c_22 != t)))
          _fail(t);
        else
          c_22 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(a_22)), not_null(c_22));
        if(((f_22 != NULL) && (f_22 != t)))
          _fail(t);
        else
          f_22 = t;
        t = not_null(w_21);
        {
          ATerm x_3 (ATerm t)
          {
            t = not_null(f_22);
            return(t);
          }
          t = reverse_acc_2_0(e_0, x_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_29;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, y_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm s_62 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  if(((j_22 != NULL) && (j_22 != t)))
    _fail(t);
  else
    j_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((h_22 != NULL) && (h_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((k_22 != NULL) && (k_22 != t)))
    _fail(t);
  else
    k_22 = t;
  t = SSLgetAnnotations(not_null(j_22));
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  t = not_null(h_22);
  t = s_62(t);
  if(((i_22 != NULL) && (i_22 != t)))
    _fail(t);
  else
    i_22 = t;
  if(((m_22 != NULL) && (m_22 != t)))
    _fail(t);
  else
    m_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_22)), not_null(g_22));
  if(((l_22 != NULL) && (l_22 != t)))
    _fail(t);
  else
    l_22 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_22 = NULL;
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_35;
      t = get_config_0_0(t);
      if(((n_22 != NULL) && (n_22 != t)))
        _fail(t);
      else
        n_22 = t;
      ;
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
      {
        ATerm z_3 (ATerm t)
        {
          ATerm a_4 (ATerm t)
          {
            if(((n_22 != NULL) && (n_22 != t)))
              _fail(t);
            else
              n_22 = t;
            return(t);
          }
          t = Program_1_0(a_4, t);
          return(t);
        }
        t = option_defined_1_0(z_3, t);
      }
    }
  {
    ATerm b_4 (ATerm t)
    {
      ATerm c_4 (ATerm t)
      {
        t = not_null(n_22);
        return(t);
      }
      t = short_description_1_0(c_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(b_4, t);
    t = term_c_36;
    t = echo_0_0(t);
    t = term_f_36;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm d_4 (ATerm t)
      {
        ATerm o_22 = NULL,p_22 = NULL;
        if(((o_22 != NULL) && (o_22 != t)))
          _fail(t);
        else
          o_22 = t;
        if(((p_22 != NULL) && (p_22 != t)))
          _fail(t);
        else
          p_22 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_22)), term_g_36);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(d_4, t);
      {
        ATerm e_4 (ATerm t)
        {
          ATerm q_22 = NULL,r_22 = NULL;
          if(((q_22 != NULL) && (q_22 != t)))
            _fail(t);
          else
            q_22 = t;
          {
            ATerm f_4 (ATerm t)
            {
              t = not_null(n_22);
              return(t);
            }
            t = long_description_1_0(f_4, t);
            if(((r_22 != NULL) && (r_22 != t)))
              _fail(t);
            else
              r_22 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(r_22)), term_h_36);
            t = echo_0_0(t);
          }
          return(t);
        }
        t = try_1_0(e_4, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(j_36);
    }
  else
    {
      t = i_36;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_22 != NULL) && (s_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_22 = ATgetArgument(t, 0);
      if(((t_22 != NULL) && (t_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((u_22 != NULL) && (u_22 != t)))
    _fail(t);
  else
    u_22 = t;
  t = SSL_printnl(not_null(s_22), not_null(t_22));
  t = not_null(u_22);
  return(t);
}
ATerm Undefined_1_0 (ATerm t_62 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((w_22 != NULL) && (w_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((z_22 != NULL) && (z_22 != t)))
    _fail(t);
  else
    z_22 = t;
  t = SSLgetAnnotations(not_null(y_22));
  if(((v_22 != NULL) && (v_22 != t)))
    _fail(t);
  else
    v_22 = t;
  t = not_null(w_22);
  t = t_62(t);
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_22)), not_null(v_22));
  if(((a_23 != NULL) && (a_23 != t)))
    _fail(t);
  else
    a_23 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm f_70 (ATerm), ATerm t)
{
  ATerm c_23 (ATerm t)
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(f_70, _id, t);
        ;
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = Cons_2_0(_id, c_23, t);
      }
    return(t);
  }
  t = c_23(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  t = fetch_1_0(q_86, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  if(((e_23 != NULL) && (e_23 != t)))
    _fail(t);
  else
    e_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(e_23);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((f_23 != NULL) && (f_23 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            f_23 = ATgetFirst((ATermList) t);
          if(((g_23 != NULL) && (g_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(e_23);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,m_23 = NULL;
  if(((h_23 != NULL) && (h_23 != t)))
    _fail(t);
  else
    h_23 = t;
  if(((i_23 != NULL) && (i_23 != t)))
    _fail(t);
  else
    i_23 = t;
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        {
          ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
          if(((j_23 != NULL) && (j_23 != t)))
            _fail(t);
          else
            j_23 = t;
          if(((k_23 != NULL) && (k_23 != t)))
            _fail(t);
          else
            k_23 = t;
          t = not_null(j_23);
          if(((l_23 != NULL) && (l_23 != t)))
            _fail(t);
          else
            l_23 = t;
          t = (ATerm) ATinsert(ATempty, not_null(l_23));
        }
      }
    if(((m_23 != NULL) && (m_23 != t)))
      _fail(t);
    else
      m_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_33, not_null(m_23));
    t = printnl_0_0(t);
    t = not_null(h_23);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_35;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm n_23 = NULL;
  if(((n_23 != NULL) && (n_23 != t)))
    _fail(t);
  else
    n_23 = t;
  t = SSL_implode_string(not_null(n_23));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
      {
        ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
        if(((p_23 != NULL) && (p_23 != t)))
          _fail(t);
        else
          p_23 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((q_23 != NULL) && (q_23 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              q_23 = ATgetFirst((ATermList) t);
            if(((r_23 != NULL) && (r_23 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              r_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(q_23);
        if(((s_23 != NULL) && (s_23 != t)))
          _fail(t);
        else
          s_23 = t;
        t = not_null(r_23);
        if(((t_23 != NULL) && (t_23 != t)))
          _fail(t);
        else
          t_23 = t;
        t = not_null(s_23);
        {
          ATerm g_4 (ATerm t)
          {
            t = not_null(t_23);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(g_4, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  if(((w_23 != NULL) && (w_23 != t)))
    _fail(t);
  else
    w_23 = t;
  t = not_null(v_23);
  if(((x_23 != NULL) && (x_23 != t)))
    _fail(t);
  else
    x_23 = t;
  t = SSL_explode_term(not_null(x_23));
  if(match_cons(t, sym__2))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((y_23 != NULL) && (y_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(y_23);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_70 (ATerm), ATerm t)
{
  ATerm z_23 (ATerm t)
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_23, t);
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
        t = Nil_0_0(t);
        t = l_70(t);
      }
    return(t);
  }
  t = z_23(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_24 != NULL) && (b_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_24 = ATgetArgument(t, 0);
      if(((a_24 != NULL) && (a_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_24);
  {
    ATerm h_4 (ATerm t)
    {
      t = not_null(a_24);
      return(t);
    }
    t = at_end_1_0(h_4, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(w_36);
    }
  else
    {
      t = v_36;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm c_24 = NULL;
  if(((c_24 != NULL) && (c_24 != t)))
    _fail(t);
  else
    c_24 = t;
  t = SSL_explode_string(not_null(c_24));
  return(t);
}
ATerm _2_0 (ATerm d_56 (ATerm), ATerm e_56 (ATerm), ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  if(((i_24 != NULL) && (i_24 != t)))
    _fail(t);
  else
    i_24 = t;
  if(match_cons(t, sym__2))
    {
      if(((e_24 != NULL) && (e_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_24 = ATgetArgument(t, 0);
      if(((f_24 != NULL) && (f_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_24 != NULL) && (j_24 != t)))
    _fail(t);
  else
    j_24 = t;
  t = SSLgetAnnotations(not_null(i_24));
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  t = not_null(e_24);
  t = d_56(t);
  if(((g_24 != NULL) && (g_24 != t)))
    _fail(t);
  else
    g_24 = t;
  t = not_null(f_24);
  t = e_56(t);
  if(((h_24 != NULL) && (h_24 != t)))
    _fail(t);
  else
    h_24 = t;
  if(((l_24 != NULL) && (l_24 != t)))
    _fail(t);
  else
    l_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_24), not_null(h_24)), not_null(d_24));
  if(((k_24 != NULL) && (k_24 != t)))
    _fail(t);
  else
    k_24 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm n_65 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  if(((m_24 != NULL) && (m_24 != t)))
    _fail(t);
  else
    m_24 = t;
  if(((n_24 != NULL) && (n_24 != t)))
    _fail(t);
  else
    n_24 = t;
  t = n_65(t);
  if(((o_24 != NULL) && (o_24 != t)))
    _fail(t);
  else
    o_24 = t;
  t = not_null(n_24);
  if(((p_24 != NULL) && (p_24 != t)))
    _fail(t);
  else
    p_24 = t;
  if(((q_24 != NULL) && (q_24 != t)))
    _fail(t);
  else
    q_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_24)), not_null(o_24)));
  t = printnl_0_0(t);
  t = not_null(m_24);
  return(t);
}
ATerm map_1_0 (ATerm u_69 (ATerm), ATerm t)
{
  ATerm r_24 (ATerm t)
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        t = Cons_2_0(u_69, r_24, t);
      }
    return(t);
  }
  t = r_24(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm s_24 = NULL;
  if(((s_24 != NULL) && (s_24 != t)))
    _fail(t);
  else
    s_24 = t;
  t = SSL_is_string(not_null(s_24));
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(a_37);
    }
  else
    {
      t = z_36;
      {
        ATerm b_37 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(i_4, t);
            ;
            LocalPopChoice(c_37);
          }
        else
          {
            t = b_37;
            {
              ATerm p_25 (ATerm z_24, ATerm a_25, ATerm t)
              {
                ATerm e_25 = NULL;
                t = not_null(z_24);
                if(((e_25 != NULL) && (e_25 != t)))
                  _fail(t);
                else
                  e_25 = t;
                {
                  ATerm d_37 = t;
                  int e_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_37);
                    }
                  else
                    {
                      t = d_37;
                      {
                        ATerm j_4 (ATerm t)
                        {
                          t = term_f_37;
                          return(t);
                        }
                        t = debug_1_0(j_4, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
              if(((f_25 != NULL) && (f_25 != t)))
                _fail(t);
              else
                f_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_25 = ATgetArgument(t, 0);
                  {
                    ATerm i_25 = NULL;
                    t = not_null(g_25);
                    if(((i_25 != NULL) && (i_25 != t)))
                      _fail(t);
                    else
                      i_25 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_25 = ATgetArgument(t, 0);
                      t = p_25(not_null(g_25), not_null(f_25), t);
                    }
                  else
                    {
                      ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((g_25 != NULL) && (g_25 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            g_25 = ATgetArgument(t, 0);
                          if(((h_25 != NULL) && (h_25 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            h_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(g_25);
                      if(((j_25 != NULL) && (j_25 != t)))
                        _fail(t);
                      else
                        j_25 = t;
                      t = not_null(h_25);
                      if(((k_25 != NULL) && (k_25 != t)))
                        _fail(t);
                      else
                        k_25 = t;
                      t = not_null(f_25);
                      if(((l_25 != NULL) && (l_25 != t)))
                        _fail(t);
                      else
                        l_25 = t;
                      t = not_null(j_25);
                      t = eval_config_0_0(t);
                      if(((m_25 != NULL) && (m_25 != t)))
                        _fail(t);
                      else
                        m_25 = t;
                      t = not_null(l_25);
                      if(((n_25 != NULL) && (n_25 != t)))
                        _fail(t);
                      else
                        n_25 = t;
                      t = not_null(k_25);
                      t = eval_config_0_0(t);
                      if(((o_25 != NULL) && (o_25 != t)))
                        _fail(t);
                      else
                        o_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_25), not_null(o_25));
                      t = conc_strings_0_0(t);
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
  ATerm q_25 = NULL;
  if(((q_25 != NULL) && (q_25 != t)))
    _fail(t);
  else
    q_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_37, not_null(q_25));
  t = table_get_0_0(t);
  {
    ATerm k_4 (ATerm t)
    {
      ATerm r_25 = NULL,u_25 = NULL,v_25 = NULL;
      t = eval_config_0_0(t);
      if(((r_25 != NULL) && (r_25 != t)))
        _fail(t);
      else
        r_25 = t;
      if(((u_25 != NULL) && (u_25 != t)))
        _fail(t);
      else
        u_25 = t;
      if(((v_25 != NULL) && (v_25 != t)))
        _fail(t);
      else
        v_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_37, not_null(q_25), not_null(v_25));
      t = table_put_0_0(t);
      t = not_null(r_25);
      return(t);
    }
    t = try_1_0(k_4, t);
  }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_80(t);
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = term_m_37;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = term_n_37;
        return(t);
      }
      t = Option_3_0(l_4, m_4, n_4, t);
      ;
      LocalPopChoice(k_37);
    }
  else
    {
      t = j_37;
      {
        ATerm o_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          ATerm w_25 = NULL;
          if(((w_25 != NULL) && (w_25 != t)))
            _fail(t);
          else
            w_25 = t;
          t = term_m_37;
          t = set_config_0_0(t);
          t = term_o_37;
          t = set_config_0_0(t);
          t = term_p_37;
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_q_37;
          return(t);
        }
        t = Option_3_0(o_4, p_4, q_4, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_25 != NULL) && (x_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_25 = ATgetArgument(t, 0);
      if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(x_25), not_null(y_25));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((z_25 != NULL) && (z_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_25 = ATgetArgument(t, 0);
      if(((a_26 != NULL) && (a_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_26 = ATgetArgument(t, 1);
      if(((b_26 != NULL) && (b_26 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        b_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((c_26 != NULL) && (c_26 != t)))
    _fail(t);
  else
    c_26 = t;
  if(((d_26 != NULL) && (d_26 != t)))
    _fail(t);
  else
    d_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_25), not_null(a_26));
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
        t = (ATerm) ATempty;
      }
    if(((e_26 != NULL) && (e_26 != t)))
      _fail(t);
    else
      e_26 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(z_25), not_null(a_26), (ATerm) ATinsert(CheckATermList(not_null(e_26)), not_null(b_26)));
    t = table_put_0_0(t);
    t = not_null(c_26);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  if(((f_26 != NULL) && (f_26 != t)))
    _fail(t);
  else
    f_26 = t;
  t = term_h_29;
  t = v_87(t);
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_36, term_e_36, not_null(g_26));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
  if(((i_26 != NULL) && (i_26 != t)))
    _fail(t);
  else
    i_26 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(i_26);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm l_26 = NULL,m_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((j_26 != NULL) && (j_26 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            j_26 = ATgetFirst((ATermList) t);
          if(((k_26 != NULL) && (k_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(j_26);
      if(((l_26 != NULL) && (l_26 != t)))
        _fail(t);
      else
        l_26 = t;
      t = not_null(k_26);
      if(((m_26 != NULL) && (m_26 != t)))
        _fail(t);
      else
        m_26 = t;
      t = not_null(i_26);
      if(((s_26 != NULL) && (s_26 != t)))
        _fail(t);
      else
        s_26 = t;
      t = not_null(l_26);
      t = a_0(t);
      t = not_null(s_26);
      if(((t_26 != NULL) && (t_26 != t)))
        _fail(t);
      else
        t_26 = t;
      t = term_h_29;
      t = c_0(t);
      if(((u_26 != NULL) && (u_26 != t)))
        _fail(t);
      else
        u_26 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(m_26)), not_null(u_26));
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm w_26 = NULL;
    if(((w_26 != NULL) && (w_26 != t)))
      _fail(t);
    else
      w_26 = t;
    if(match_string(t, "--help"))
      {
        t = not_null(w_26);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(w_26);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = not_null(w_26);
          }
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_t_37;
    t = set_config_0_0(t);
    t = term_u_37;
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_v_37;
    return(t);
  }
  t = Option_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm x_26 = NULL,z_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((x_26 != NULL) && (x_26 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        x_26 = ATgetFirst((ATermList) t);
      if(((z_26 != NULL) && (z_26 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        z_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(z_26)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_26)));
  return(t);
}
ATerm Cons_2_0 (ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,j_27 = NULL,l_27 = NULL,m_27 = NULL;
  if(((f_27 != NULL) && (f_27 != t)))
    _fail(t);
  else
    f_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((b_27 != NULL) && (b_27 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        b_27 = ATgetFirst((ATermList) t);
      if(((c_27 != NULL) && (c_27 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((j_27 != NULL) && (j_27 != t)))
    _fail(t);
  else
    j_27 = t;
  t = SSLgetAnnotations(not_null(f_27));
  if(((a_27 != NULL) && (a_27 != t)))
    _fail(t);
  else
    a_27 = t;
  t = not_null(b_27);
  t = m_57(t);
  if(((d_27 != NULL) && (d_27 != t)))
    _fail(t);
  else
    d_27 = t;
  t = not_null(c_27);
  t = n_57(t);
  if(((e_27 != NULL) && (e_27 != t)))
    _fail(t);
  else
    e_27 = t;
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_27)), not_null(d_27)), not_null(a_27));
  if(((l_27 != NULL) && (l_27 != t)))
    _fail(t);
  else
    l_27 = t;
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_27 = ATgetArgument(t, 0);
      if(((o_27 != NULL) && (o_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_37, not_null(n_27), not_null(o_27));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm p_27 = NULL;
  if(((p_27 != NULL) && (p_27 != t)))
    _fail(t);
  else
    p_27 = t;
  {
    ATerm u_4 (ATerm t)
    {
      t = term_w_37;
      t = t_87(t);
      return(t);
    }
    t = try_1_0(u_4, t);
    t = not_null(p_27);
    {
      ATerm v_4 (ATerm t)
      {
        ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
        if(((q_27 != NULL) && (q_27 != t)))
          _fail(t);
        else
          q_27 = t;
        if(((r_27 != NULL) && (r_27 != t)))
          _fail(t);
        else
          r_27 = t;
        if(((s_27 != NULL) && (s_27 != t)))
          _fail(t);
        else
          s_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_35, not_null(s_27));
        t = set_config_0_0(t);
        t = not_null(q_27);
        if(((t_27 != NULL) && (t_27 != t)))
          _fail(t);
        else
          t_27 = t;
        if(((u_27 != NULL) && (u_27 != t)))
          _fail(t);
        else
          u_27 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_27));
        return(t);
      }
      ATerm w_4 (ATerm t)
      {
        ATerm x_37 = t;
        int y_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_37 = t;
            int a_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(a_38);
              }
            else
              {
                t = z_37;
                t = t_87(t);
                t = Cons_2_0(_id, w_4, t);
              }
            ;
            LocalPopChoice(y_37);
          }
        else
          {
            t = x_37;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(v_4, w_4, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  if(((w_27 != NULL) && (w_27 != t)))
    _fail(t);
  else
    w_27 = t;
  if(match_cons(t, sym__3))
    {
      if(((x_27 != NULL) && (x_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_27 = ATgetArgument(t, 0);
      if(((y_27 != NULL) && (y_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_27 = ATgetArgument(t, 1);
      if(((z_27 != NULL) && (z_27 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        z_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(x_27), not_null(y_27), not_null(z_27));
  t = not_null(w_27);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,h_28 = NULL;
  if(((b_28 != NULL) && (b_28 != t)))
    _fail(t);
  else
    b_28 = t;
  t = term_b_38;
  t = table_put_0_0(t);
  t = not_null(b_28);
  {
    ATerm x_4 (ATerm t)
    {
      ATerm c_38 = t;
      int d_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_87(t);
          ;
          LocalPopChoice(d_38);
        }
      else
        {
          t = c_38;
          {
            ATerm e_38 = t;
            int f_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(f_38);
              }
            else
              {
                t = e_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_4, t);
    {
      ATerm y_4 (ATerm t)
      {
        ATerm g_38 = t;
        int h_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_28 (ATerm d_28, ATerm t)
            {
              ATerm e_28 = NULL;
              t = not_null(d_28);
              if(((e_28 != NULL) && (e_28 != t)))
                _fail(t);
              else
                e_28 = t;
              t = not_null(d_28);
              {
                ATerm i_38 = t;
                int j_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_t_35;
                    t = get_config_0_0(t);
                    ;
                    LocalPopChoice(j_38);
                  }
                else
                  {
                    t = i_38;
                    t = option_defined_1_0(Help_0_0, t);
                  }
                t = not_null(e_28);
                t = system_usage_0_0(t);
                t = term_u_33;
                t = exit_0_0(t);
              }
              return(t);
            }
            ATerm f_28 = NULL;
            if(((f_28 != NULL) && (f_28 != t)))
              _fail(t);
            else
              f_28 = t;
            {
              ATerm k_38 = t;
              int l_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_28(not_null(f_28), t);
                  ;
                  LocalPopChoice(l_38);
                }
              else
                {
                  t = k_38;
                  {
                    ATerm g_28 = NULL;
                    t = not_null(f_28);
                    if(((g_28 != NULL) && (g_28 != t)))
                      _fail(t);
                    else
                      g_28 = t;
                    t = term_l_37;
                    t = get_config_0_0(t);
                    t = not_null(g_28);
                    t = system_about_0_0(t);
                    t = term_u_33;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(h_38);
          }
        else
          {
            t = g_38;
            {
              ATerm z_4 (ATerm t)
              {
                ATerm a_5 (ATerm t)
                {
                  if(((c_28 != NULL) && (c_28 != t)))
                    _fail(t);
                  else
                    c_28 = t;
                  return(t);
                }
                t = Undefined_1_0(a_5, t);
                return(t);
              }
              t = option_defined_1_0(z_4, t);
              t = (ATerm) ATmakeAppl(sym__2, term_q_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_28)), term_m_38));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_h_5;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(y_4, t);
      if(((h_28 != NULL) && (h_28 != t)))
        _fail(t);
      else
        h_28 = t;
      t = term_d_36;
      t = table_destroy_0_0(t);
      t = not_null(h_28);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm t)
{
  t = parse_options_1_0(x_85, t);
  t = store_options_0_0(t);
  t = z_85(t);
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_85, t);
        ;
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
              t = a_86(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_38);
            }
          else
            {
              t = p_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm t)
{
  t = option_wrap_4_0(b_86, default_usage_0_0, _id, c_86, t);
  return(t);
}
ATerm io_ppgen_0_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    t = xtc_io_1_0(ppgen_0_0, t);
    return(t);
  }
  t = option_wrap_2_0(ppgen_options_0_0, b_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_ppgen_0_0(t);
  return(t);
}
