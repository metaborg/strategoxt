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
Symbol sym_Meta_1;
Symbol sym_Syntax_1;
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
ATerm term_t_35;
ATerm term_s_35;
ATerm term_l_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_e_34;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_n_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_d_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_n_31;
ATerm term_d_31;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_k_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_g_24;
ATerm term_c_24;
ATerm term_i_23;
ATerm term_d_23;
ATerm term_t_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_g_17;
ATerm term_c_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_r_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_q_5;
void init_constant_terms (void)
{
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_m_13, term_x_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_j_16, term_k_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_u_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_c_17, term_g_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_r_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_x_17, term_y_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_d_18, term_i_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_n_18, term_u_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_x_18, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_b_19, term_f_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_m_19, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_19, term_s_19, term_t_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_y_19, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_20, term_c_20, term_d_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_20, term_k_20, term_l_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_20, term_t_20, term_v_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_a_21, term_b_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_f_21, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_21, term_k_21, term_l_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_z_21, term_a_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_22, term_j_22, term_k_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_22, term_o_22, term_p_22);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_31);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym__3, term_n_27, term_j_34, term_n_24);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm w_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm j_64 (ATerm), ATerm k_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm l_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm g_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm p_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm);
ATerm add_extension_0_0 (ATerm);
ATerm split_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm);
ATerm guarantee_extension_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm if_keep1_1_0 (ATerm g_82 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm f_81 (ATerm), ATerm);
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm xtc_transform_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm get_syntax_definition_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm find_in_path_0_0 (ATerm);
ATerm find_in_includes_1_0 (ATerm g_63 (ATerm), ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm get_meta_0_0 (ATerm);
ATerm get_syntax_0_0 (ATerm);
ATerm basename_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm basename_0_0 (ATerm);
ATerm FILE_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm h_81 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm m_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm g_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm i_81 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm r_81 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm parse_stratego_options_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm h_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm i_83 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm e_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_70 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm v_55 (ATerm), ATerm w_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm i_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm e_57 (ATerm), ATerm f_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm h_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm g_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm);
ATerm xtc_iowrap_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm);
ATerm parse_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
  t = term_q_5;
  {
    ATerm f_10 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = f_10;
        t = term_m_13;
      }
    c_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_1, term_m_13);
    {
      ATerm n_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(c_1, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(o_13);
        }
      else
        {
          t = n_13;
          t = SSL_subtr(c_1, (ATerm) ATmakeInt(1));
        }
      e_1 = t;
      t = SSL_int_to_string(e_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_1), term_q_5);
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_65 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,i_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym__2))
    {
      g_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_1, term_q_13);
  t = open_stream_0_0(t);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_1, i_1);
  t = w_65(t);
  t = fclose_0_0(t);
  t = i_1;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm r_13 = ATgetArgument(t, 0);
        if(match_cons(r_13, sym_Stream_1))
          {
            m_1 = ATgetArgument(r_13, 0);
          }
        else
          _fail(t);
        n_1 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(m_1, n_1);
    o_1 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, o_1);
    return(t);
  }
  t = WriteToFile_1_0(c_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm p_1 = NULL,s_1 = NULL;
  p_1 = t;
  t = xtc_new_file_0_0(t);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_1, p_1);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(s_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(e_84, f_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
  w_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_2 = ATgetArgument(t, 0);
      {
        ATerm p_0 = NULL;
        t = SSL_int_to_string(x_2);
        p_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_13), p_0), term_t_13);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm x_0 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_2 = ATgetArgument(t, 0);
          y_2 = ATgetArgument(t, 1);
          z_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_2);
      x_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_2), term_c_14), x_0), term_a_14), x_2);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_3 = NULL;
  p_3 = t;
  {
    ATerm d_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_22), term_l_22), term_h_22), term_m_21), term_i_21), term_c_21), term_y_20), term_r_20), term_e_20), term_a_20), term_u_19), term_o_19), term_g_19), term_z_18), term_v_18), term_j_18), term_z_17), term_t_17), term_k_17), term_w_16), term_p_16), term_g_16), term_b_16), term_u_15), term_o_15), term_k_15), term_g_15), term_y_14);
        {
          ATerm e_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm u_22 = ATgetArgument(t, 0);
                if((p_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm v_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(e_0, t);
        }
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm r_3 = NULL;
  r_3 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm t_3 = NULL,u_3 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm y_22 = ATgetArgument(t, 0);
          t_3 = ATgetArgument(t, 1);
          {
            ATerm z_22 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_3;
      {
        ATerm c_23 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_23;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        u_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_d_23, (ATerm) ATinsert(ATinsert(ATempty, u_3), term_i_23));
      }
      return(t);
    }
    t = try_1_0(o_0, t);
    t = r_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm j_64 (ATerm), ATerm k_64 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  w_3 = t;
  t = fork_0_0(t);
  x_3 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = w_3;
        t = j_64(t);
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATmakeAppl(sym__2, x_3, w_3);
        t = k_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm l_64 (ATerm), ATerm t)
{
  ATerm c_4 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm e_4 = NULL;
    if(match_cons(t, sym__2))
      {
        e_4 = ATgetArgument(t, 0);
        c_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(e_4);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm l_23 = ATgetArgument(t, 0);
        if(((ATgetType(l_23) != AT_INT) || (ATgetInt((ATermInt) l_23) != 0)))
          _fail(t);
        {
          ATerm n_23 = ATgetArgument(t, 1);
        }
        {
          ATerm r_23 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = c_4;
    return(t);
  }
  t = fork_2_0(l_64, q_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm f_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      f_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_0 (ATerm t)
    {
      t = SSL_execvp(f_4, h_4);
      return(t);
    }
    t = fork_and_wait_1_0(r_0, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL;
  i_4 = t;
  t = v_83(t);
  t = xtc_find_warning_0_0(t);
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_4, i_4);
  t = call_0_0(t);
  t = i_4;
  return(t);
}
ATerm assert_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_80(t);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_4, l_4, m_4);
  t = table_push_0_0(t);
  {
    ATerm s_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = s_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_4 = ATgetFirst((ATermList) t);
        p_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_4), (ATerm) ATinsert(CheckATermList(o_4), l_4)));
    t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm p_65 (ATerm), ATerm t)
{
  ATerm r_4 = NULL;
  r_4 = t;
  t = p_65(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = term_c_24;
      return(t);
    }
    t = debug_1_0(s_0, t);
    t = r_4;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm m_5 (ATerm w_4, ATerm t)
  {
    t = w_4;
    {
      ATerm d_24 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm e_24 = ATgetArgument(t, 0);
              ATerm f_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_24;
        }
      {
        ATerm t_0 (ATerm t)
        {
          t = term_g_24;
          return(t);
        }
        t = obsolete_1_0(t_0, t);
        t = (ATerm) ATmakeAppl(sym__2, w_4, term_q_13);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm n_5 (ATerm a_5, ATerm c_5, ATerm d_5, ATerm t)
  {
    t = SSL_open_file(a_5, c_5);
    return(t);
  }
  ATerm g_5 = NULL,i_5 = NULL,l_5 = NULL;
  g_5 = t;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
      {
        ATerm h_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_5(g_5, t);
            ;
            LocalPopChoice(k_24);
          }
        else
          {
            t = h_24;
            t = n_5(i_5, l_5, g_5, t);
          }
      }
    }
  else
    {
      t = m_5(g_5, t);
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
  ATerm p_5 = NULL;
  t = term_n_24;
  t = new_0_0(t);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_5, term_o_24);
  t = conc_strings_0_0(t);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm z_0 = NULL;
      z_0 = t;
      t = SSL_access(z_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(u_0, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_5 = NULL;
  t = new_file_0_0(t);
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_5, term_q_13);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, r_5, term_n_24);
  {
    ATerm v_0 (ATerm t)
    {
      t = term_p_24;
      return(t);
    }
    t = assert_1_0(v_0, t);
    t = r_5;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL;
  o_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_1 = NULL,f_1 = NULL;
      t = o_6;
      t = xtc_new_file_0_0(t);
      b_1 = t;
      t = n_0(t);
      f_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_1, (ATerm) ATinsert(ATinsert(ATempty, b_1), term_q_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(b_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_1);
    }
  else
    {
      ATerm q_1 = NULL,r_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_6;
      t = xtc_new_file_0_0(t);
      q_1 = t;
      t = n_0(t);
      r_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_1), term_q_24), p_6), term_r_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(q_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
    }
  return(t);
}
ATerm xtc_transform_2_0 (ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(y_24);
        }
      else
        {
          t = x_24;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(w_24);
      t = xtc_transform_file_2_0(x_83, y_83, t);
    }
  else
    {
      t = v_24;
      t = xtc_transform_term_2_0(x_83, y_83, t);
    }
  return(t);
}
ATerm add_extension_0_0 (ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_7), term_a_25), d_7);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm split_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
  j_7 = t;
  t = r_68(t);
  k_7 = t;
  t = j_7;
  t = s_68(t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_7, l_7);
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  t = basename_0_0(t);
  {
    ATerm w_0 (ATerm t)
    {
      t = term_n_24;
      t = k_78(t);
      return(t);
    }
    t = split_2_0(_id, w_0, t);
    t = add_extension_0_0(t);
  }
  return(t);
}
ATerm if_keep1_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm n_7 = NULL,q_7 = NULL;
    n_7 = t;
    t = term_b_25;
    t = get_config_0_0(t);
    q_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_7, term_m_13);
    t = geq_0_0(t);
    t = n_7;
    t = g_82(t);
    return(t);
  }
  t = try_1_0(y_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm r_7 = NULL,u_7 = NULL;
    r_7 = t;
    t = term_q_5;
    t = get_config_0_0(t);
    u_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_7, term_i_15);
    t = geq_0_0(t);
    t = r_7;
    t = f_81(t);
    return(t);
  }
  t = try_1_0(a_1, t);
  return(t);
}
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL;
  m_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_8;
        t = l_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(n_8, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(n_8);
        t = term_g_25;
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        {
          ATerm h_25 = t;
          int i_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_1 = NULL;
              t = m_8;
              t = l_0(t);
              z_1 = t;
              {
                ATerm j_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm k_25 = t;
                    int l_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(l_25);
                      }
                    else
                      {
                        t = k_25;
                        {
                          ATerm a_2 = NULL;
                          a_2 = t;
                          if((n_8 != t))
                            {
                              _fail(t);
                            }
                          t = a_2;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_25;
                  }
                t = SSL_rename(n_8, z_1);
                t = (ATerm) ATmakeAppl(sym_FILE_1, z_1);
              }
              ;
              LocalPopChoice(i_25);
            }
          else
            {
              t = h_25;
              t = m_8;
              t = l_0(t);
              if((n_8 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_8);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_transform_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(w_83, h_1, t);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL;
  ATerm j_1 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = term_m_25;
      return(t);
    }
    t = debug_1_0(l_1, t);
    return(t);
  }
  t = if_verbose6_1_0(j_1, t);
  r_8 = t;
  {
    ATerm t_1 (ATerm t)
    {
      t = term_n_25;
      return(t);
    }
    t = guarantee_extension_1_0(t_1, t);
    s_8 = t;
    t = r_8;
    {
      ATerm o_25 = t;
      int p_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_8 = NULL;
          t = s_8;
          {
            ATerm u_1 (ATerm t)
            {
              t = term_q_25;
              return(t);
            }
            t = find_in_includes_1_0(u_1, t);
            u_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, u_8);
          }
          ;
          LocalPopChoice(p_25);
        }
      else
        {
          t = o_25;
          {
            ATerm w_8 = NULL;
            ATerm v_1 (ATerm t)
            {
              ATerm w_1 (ATerm t)
              {
                t = term_r_25;
                return(t);
              }
              t = say_1_0(w_1, t);
              return(t);
            }
            t = if_verbose2_1_0(v_1, t);
            {
              ATerm x_1 (ATerm t)
              {
                t = term_s_25;
                return(t);
              }
              t = guarantee_extension_1_0(x_1, t);
              w_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_8);
              {
                ATerm y_1 (ATerm t)
                {
                  t = term_t_25;
                  return(t);
                }
                ATerm b_2 (ATerm t)
                {
                  t = term_u_25;
                  t = get_config_0_0(t);
                  {
                    ATerm c_2 (ATerm t)
                    {
                      ATerm y_8 = NULL;
                      y_8 = t;
                      t = (ATerm) ATinsert(ATinsert(ATempty, y_8), term_u_25);
                      return(t);
                    }
                    t = map_1_0(c_2, t);
                    t = concat_0_0(t);
                  }
                  return(t);
                }
                t = xtc_transform_2_0(y_1, b_2, t);
                {
                  ATerm d_2 (ATerm t)
                  {
                    t = term_v_25;
                    return(t);
                  }
                  t = xtc_transform_1_0(d_2, t);
                  {
                    ATerm f_2 (ATerm t)
                    {
                      t = s_8;
                      return(t);
                    }
                    t = rename_to_1_0(f_2, t);
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
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm a_9 = NULL;
  ATerm g_2 (ATerm t)
  {
    ATerm b_9 = NULL;
    b_9 = t;
    t = SSL_explode_string(b_9);
    return(t);
  }
  t = map_1_0(g_2, t);
  t = concat_0_0(t);
  a_9 = t;
  t = SSL_implode_string(a_9);
  return(t);
}
ATerm find_in_path_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm e_9 = NULL,e_2 = NULL;
      e_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_9), term_w_25), e_9);
      t = concat_strings_0_0(t);
      e_2 = t;
      t = SSL_access(e_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      return(t);
    }
    t = fetch_elem_1_0(h_2, t);
  }
  return(t);
}
ATerm find_in_includes_1_0 (ATerm g_63 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  f_9 = t;
  t = term_u_25;
  t = get_config_0_0(t);
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_9, g_9);
  t = find_in_path_0_0(t);
  {
    ATerm i_2 (ATerm t)
    {
      t = debug_1_0(g_63, t);
      return(t);
    }
    t = if_verbose2_1_0(i_2, t);
  }
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  ATerm j_2 (ATerm t)
  {
    ATerm k_2 (ATerm t)
    {
      t = term_x_25;
      return(t);
    }
    t = debug_1_0(k_2, t);
    return(t);
  }
  t = if_verbose6_1_0(j_2, t);
  h_9 = t;
  {
    ATerm l_2 (ATerm t)
    {
      t = term_y_25;
      return(t);
    }
    t = guarantee_extension_1_0(l_2, t);
    i_9 = t;
    {
      ATerm z_25 = t;
      int a_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_9 = NULL;
          ATerm m_2 (ATerm t)
          {
            t = term_b_26;
            return(t);
          }
          t = find_in_includes_1_0(m_2, t);
          k_9 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_9);
          ;
          LocalPopChoice(a_26);
        }
      else
        {
          t = z_25;
          {
            ATerm n_2 (ATerm t)
            {
              ATerm o_2 (ATerm t)
              {
                t = term_c_26;
                return(t);
              }
              t = say_1_0(o_2, t);
              return(t);
            }
            t = if_verbose2_1_0(n_2, t);
            t = h_9;
            t = get_syntax_definition_0_0(t);
            {
              ATerm p_2 (ATerm t)
              {
                t = term_d_26;
                return(t);
              }
              ATerm q_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, h_9), term_e_26);
                return(t);
              }
              t = xtc_transform_2_0(p_2, q_2, t);
              {
                ATerm r_2 (ATerm t)
                {
                  t = i_9;
                  return(t);
                }
                t = rename_to_1_0(r_2, t);
              }
            }
          }
        }
      {
        ATerm s_2 (ATerm t)
        {
          ATerm t_2 (ATerm t)
          {
            t = term_b_26;
            return(t);
          }
          t = debug_1_0(t_2, t);
          return(t);
        }
        t = if_verbose6_1_0(s_2, t);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm m_9 = NULL,n_9 = NULL;
    m_9 = t;
    t = term_q_5;
    t = get_config_0_0(t);
    n_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_9, term_e_15);
    t = geq_0_0(t);
    t = m_9;
    t = e_81(t);
    return(t);
  }
  t = try_1_0(u_2, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm o_9 = NULL;
  ATerm v_2 (ATerm t)
  {
    t = b_70(t);
    o_9 = t;
    return(t);
  }
  t = fetch_1_0(v_2, t);
  t = not_null(o_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  q_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = q_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          r_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(r_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm t_9 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm c_3 (ATerm t)
    {
      t = term_f_26;
      return(t);
    }
    t = debug_1_0(c_3, t);
    return(t);
  }
  t = if_verbose6_1_0(a_3, t);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_3 (ATerm t)
        {
          ATerm e_3 (ATerm t)
          {
            t = term_i_26;
            return(t);
          }
          t = guarantee_extension_1_0(e_3, t);
          return(t);
        }
        t = FILE_1_0(d_3, t);
        t = read_from_0_0(t);
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        {
          ATerm u_9 = NULL;
          ATerm f_3 (ATerm t)
          {
            ATerm g_3 (ATerm t)
            {
              t = term_j_26;
              return(t);
            }
            t = guarantee_extension_1_0(g_3, t);
            return(t);
          }
          t = FILE_1_0(f_3, t);
          t = read_from_0_0(t);
          u_9 = t;
          t = SSL_explode_term(u_9);
          if(match_cons(t, sym__2))
            {
              t_9 = ATgetArgument(t, 0);
              {
                ATerm k_26 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, t_9)));
        }
      }
    {
      ATerm h_3 (ATerm t)
      {
        ATerm i_3 (ATerm t)
        {
          t = term_f_26;
          return(t);
        }
        t = debug_1_0(i_3, t);
        return(t);
      }
      t = if_verbose6_1_0(h_3, t);
    }
  }
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm w_9 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm k_3 (ATerm t)
    {
      t = term_l_26;
      return(t);
    }
    t = debug_1_0(k_3, t);
    return(t);
  }
  t = if_verbose6_1_0(j_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      w_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_26;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        {
          ATerm p_26 = t;
          int q_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_9 = NULL,y_9 = NULL;
              t = get_meta_0_0(t);
              y_9 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  x_9 = ATgetArgument(t, 0);
                  {
                    ATerm r_26 = t;
                    int s_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = x_9;
                        {
                          ATerm l_3 (ATerm t)
                          {
                            ATerm a_10 = NULL;
                            if(match_cons(t, sym_Syntax_1))
                              {
                                a_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = a_10;
                            return(t);
                          }
                          t = fetch_elem_1_0(l_3, t);
                        }
                        ;
                        LocalPopChoice(s_26);
                      }
                    else
                      {
                        t = r_26;
                        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue))), w_9), (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue))), y_9), (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue))));
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), w_9), term_u_26), y_9), term_t_26);
                        _fail(t);
                      }
                  }
                }
              else
                {
                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue))), w_9), (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue))), y_9), (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue))));
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), w_9), term_u_26), y_9), term_t_26);
                  _fail(t);
                }
              ;
              LocalPopChoice(q_26);
            }
          else
            {
              t = p_26;
              t = term_w_26;
            }
        }
      }
    {
      ATerm m_3 (ATerm t)
      {
        ATerm n_3 (ATerm t)
        {
          t = term_x_26;
          return(t);
        }
        t = debug_1_0(n_3, t);
        return(t);
      }
      t = if_verbose2_1_0(m_3, t);
    }
  }
  return(t);
}
ATerm basename_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL;
  d_10 = t;
  t = SSL_explode_string(d_10);
  {
    ATerm o_3 (ATerm t)
    {
      ATerm y_26 = t;
      int z_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, o_3, t);
          ;
          LocalPopChoice(z_26);
        }
      else
        {
          t = y_26;
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_3 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(q_3, _id, t);
                ;
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                {
                  ATerm s_3 (ATerm t)
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2_0(s_3, i_78, t);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1_0(o_3, t);
    e_10 = t;
    t = SSL_implode_string(e_10);
  }
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(_id, t);
  return(t);
}
ATerm FILE_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  j_10 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_10);
  g_10 = t;
  t = h_10;
  t = f_62(t);
  i_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, i_10), g_10);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  ATerm v_3 (ATerm t)
  {
    ATerm y_3 (ATerm t)
    {
      t = term_c_27;
      return(t);
    }
    t = debug_1_0(y_3, t);
    return(t);
  }
  t = if_verbose6_1_0(v_3, t);
  n_10 = t;
  {
    ATerm z_3 (ATerm t)
    {
      t = basename_0_0(t);
      o_10 = t;
      return(t);
    }
    t = FILE_1_0(z_3, t);
    t = get_syntax_0_0(t);
    t = get_parse_table_0_0(t);
    if(match_cons(t, sym_FILE_1))
      {
        p_10 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = n_10;
    {
      ATerm a_4 (ATerm t)
      {
        t = term_d_27;
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        ATerm q_10 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm k_4 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_e_27);
            return(t);
          }
          t = if_verbose3_1_0(k_4, t);
          q_10 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_10), p_10), term_g_27), term_f_27);
        }
        return(t);
      }
      t = xtc_transform_2_0(a_4, b_4, t);
      {
        ATerm s_4 (ATerm t)
        {
          t = term_h_27;
          return(t);
        }
        t = xtc_transform_2_0(s_4, pass_verbose_0_0, t);
        {
          ATerm u_4 (ATerm t)
          {
            ATerm v_4 (ATerm t)
            {
              t = not_null(o_10);
              {
                ATerm x_4 (ATerm t)
                {
                  t = term_i_27;
                  return(t);
                }
                t = guarantee_extension_1_0(x_4, t);
              }
              return(t);
            }
            t = copy_to_1_0(v_4, t);
            return(t);
          }
          t = if_keep1_1_0(u_4, t);
          {
            ATerm b_5 (ATerm t)
            {
              t = term_j_27;
              return(t);
            }
            t = xtc_transform_2_0(b_5, pass_verbose_0_0, t);
            {
              ATerm e_5 (ATerm t)
              {
                t = term_k_27;
                return(t);
              }
              t = xtc_transform_2_0(e_5, pass_verbose_0_0, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,y_10 = NULL;
  if(match_cons(t, sym__2))
    {
      r_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = (ATerm) ATempty;
      }
    t_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_10, t_10);
    t = conc_0_0(t);
    y_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_10, y_10);
    t = (ATerm) ATmakeAppl(sym__3, term_n_27, r_10, y_10);
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  t = SSL_explode_string(a_11);
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_11 (ATerm t)
        {
          ATerm q_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, e_11, t);
              ;
              LocalPopChoice(r_27);
            }
          else
            {
              t = q_27;
              {
                ATerm f_5 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                ATerm h_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2_0(f_5, h_5, t);
              }
            }
          return(t);
        }
        t = e_11(t);
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATempty;
      }
    b_11 = t;
    t = SSL_implode_string(b_11);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  t = SSL_table_keys(f_11);
  {
    ATerm j_5 (ATerm t)
    {
      ATerm g_11 = NULL,h_11 = NULL;
      g_11 = t;
      t = SSL_table_get(f_11, g_11);
      h_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_11, h_11);
      return(t);
    }
    t = map_1_0(j_5, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm i_11 = NULL,j_11 = NULL;
    i_11 = t;
    t = term_q_5;
    t = get_config_0_0(t);
    j_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_11, term_k_21);
    t = geq_0_0(t);
    t = i_11;
    t = h_81(t);
    return(t);
  }
  t = try_1_0(k_5, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm q_11 = NULL,s_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, q_11));
  {
    ATerm o_5 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((s_11 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          t_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(o_5, t);
    t = not_null(t_11);
  }
  return(t);
}
ATerm filter_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              t = filter_1_0(i_77, t);
              return(t);
            }
            t = Cons_2_0(i_77, s_5, t);
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            {
              ATerm a_12 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_27 = ATgetFirst((ATermList) t);
                  a_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_12;
              t = filter_1_0(i_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm d_12 (ATerm t)
  {
    ATerm t_5 (ATerm t)
    {
      t = c_79(t);
      t = d_12(t);
      return(t);
    }
    t = try_1_0(t_5, t);
    return(t);
  }
  t = d_12(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  {
    ATerm u_5 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm x_27 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_27;
          }
      }
      return(t);
    }
    t = repeat_1_0(u_5, t);
    t = e_12;
  }
  return(t);
}
ATerm say_1_0 (ATerm m_65 (ATerm), ATerm t)
{
  ATerm g_12 = NULL,b_3 = NULL;
  g_12 = t;
  t = m_65(t);
  b_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_3));
  t = g_12;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm h_12 = NULL,i_12 = NULL;
    h_12 = t;
    t = term_q_5;
    t = get_config_0_0(t);
    i_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_12, term_x_17);
    t = geq_0_0(t);
    t = h_12;
    t = g_81(t);
    return(t);
  }
  t = try_1_0(v_5, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm i_81 (ATerm), ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm j_12 = NULL,k_12 = NULL;
    j_12 = t;
    t = term_q_5;
    t = get_config_0_0(t);
    k_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_12, term_m_15);
    t = geq_0_0(t);
    t = j_12;
    t = i_81(t);
    return(t);
  }
  t = try_1_0(w_5, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_12 = ATgetFirst((ATermList) t);
      q_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_73(t);
  {
    ATerm x_5 (ATerm t)
    {
      ATerm r_12 = NULL;
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_12, r_12);
      t = w_73(t);
      return(t);
    }
    t = fetch_1_0(x_5, t);
    t = q_12;
  }
  return(t);
}
ATerm union_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12;
  {
    ATerm u_12 (ATerm t)
    {
      ATerm y_27 = t;
      int z_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_12;
          ;
          LocalPopChoice(z_27);
        }
      else
        {
          t = y_27;
          {
            ATerm a_28 = t;
            int b_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_5 (ATerm t)
                {
                  t = s_12;
                  return(t);
                }
                t = HdMember_p__2_0(s_73, y_5, t);
                t = u_12(t);
                ;
                LocalPopChoice(b_28);
              }
            else
              {
                t = a_28;
                t = Cons_2_0(_id, u_12, t);
              }
          }
        }
      return(t);
    }
    t = u_12(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm v_12 = NULL;
    if(match_cons(t, sym__2))
      {
        v_12 = ATgetArgument(t, 0);
        if((v_12 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(z_5, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
  if(match_cons(t, sym__3))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
      a_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_12, z_12);
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_28 = ATgetArgument(t, 0);
            ATerm f_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_12, z_12);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = (ATerm) ATempty;
      }
    b_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_13, a_13);
    t = union_0_0(t);
    c_13 = t;
    t = SSL_table_put(y_12, z_12, c_13);
    t = (ATerm) ATmakeAppl(sym__3, y_12, z_12, a_13);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_13;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm f_13 = NULL,g_13 = NULL;
      if(match_cons(t, sym__2))
        {
          f_13 = ATgetArgument(t, 0);
          g_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, e_13, f_13, g_13);
      t = r_81(t);
      return(t);
    }
    t = map_1_0(a_6, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_13 (ATerm p_13, ATerm t)
  {
    t = SSL_fclose(p_13);
    return(t);
  }
  ATerm s_13 = NULL,u_13 = NULL;
  u_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_13 = ATgetArgument(t, 0);
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_13);
            ;
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            t = w_13(u_13, t);
          }
      }
    }
  else
    {
      t = w_13(u_13, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_13 = NULL;
  t = SSL_stdin_stream();
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_13 = NULL;
  t = SSL_stdout_stream();
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_stderr_stream();
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      ATerm j_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_4 = NULL,g_4 = NULL;
        d_4 = t;
        t = SSL_explode_term(d_4);
        if(match_cons(t, sym__2))
          {
            ATerm m_28 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_28) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_28 = ATgetArgument(t, 1);
              if(((ATgetType(n_28) == AT_LIST) && !(ATisEmpty(n_28))))
                {
                  g_4 = ATgetFirst((ATermList) n_28);
                  {
                    ATerm o_28 = (ATerm) ATgetNext((ATermList) n_28);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_4;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        {
          ATerm p_28 = t;
          int q_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
              ATerm b_6 (ATerm t)
              {
                ATerm h_14 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    h_14 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = h_14;
                return(t);
              }
              t = _2_0(b_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  e_14 = ATgetArgument(t, 0);
                  f_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(e_14, f_14);
              g_14 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, g_14);
              ;
              LocalPopChoice(q_28);
            }
          else
            {
              t = p_28;
              {
                ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
                ATerm c_6 (ATerm t)
                {
                  ATerm l_14 = NULL;
                  l_14 = t;
                  t = SSL_is_string(l_14);
                  return(t);
                }
                t = _2_0(c_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    i_14 = ATgetArgument(t, 0);
                    j_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(i_14, j_14);
                k_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, k_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_14 = NULL;
      p_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_14, term_t_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm d_6 (ATerm t)
        {
          t = term_u_28;
          return(t);
        }
        t = debug_1_0(d_6, t);
        _fail(t);
      }
    }
  m_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(o_14);
  n_14 = t;
  t = m_14;
  t = fclose_0_0(t);
  t = n_14;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 = NULL;
      q_4 = t;
      t = SSL_access(q_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(w_28);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_28;
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_28 = t;
            if((PushChoice() == 0))
              {
                ATerm t_4 = NULL;
                t_4 = t;
                t = SSL_access(t_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_28;
              }
            {
              ATerm e_6 (ATerm t)
              {
                t = term_a_29;
                return(t);
              }
              t = debug_1_0(e_6, t);
            }
            ;
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            {
              ATerm f_6 (ATerm t)
              {
                t = term_b_29;
                return(t);
              }
              t = debug_1_0(f_6, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm i_6 (ATerm t)
      {
        t = term_c_29;
        return(t);
      }
      t = debug_1_0(i_6, t);
      return(t);
    }
    t = if_verbose5_1_0(g_6, t);
    {
      ATerm d_29 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, s_14));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_29;
        }
      t_14 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, s_14));
      t = t_14;
      {
        ATerm j_6 (ATerm t)
        {
          ATerm k_6 (ATerm t)
          {
            t = term_e_29;
            return(t);
          }
          t = debug_1_0(k_6, t);
          return(t);
        }
        t = if_verbose4_1_0(j_6, t);
        t = read_repository_file_0_0(t);
        {
          ATerm l_6 (ATerm t)
          {
            ATerm q_6 (ATerm t)
            {
              t = term_f_29;
              return(t);
            }
            t = say_1_0(q_6, t);
            return(t);
          }
          t = if_verbose6_1_0(l_6, t);
          u_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_29, u_14);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm s_6 (ATerm t)
            {
              ATerm t_6 (ATerm t)
              {
                t = term_h_29;
                return(t);
              }
              t = say_1_0(t_6, t);
              return(t);
            }
            t = if_verbose6_1_0(s_6, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, s_14), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_g_29, (ATerm)ATmakeAppl(sym_Imported_1, s_14), (ATerm) ATempty);
            {
              ATerm u_6 (ATerm t)
              {
                ATerm v_6 (ATerm t)
                {
                  t = term_f_29;
                  return(t);
                }
                t = say_1_0(v_6, t);
                return(t);
              }
              t = if_verbose4_1_0(u_6, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  ATerm w_6 (ATerm t)
  {
    ATerm x_6 (ATerm t)
    {
      t = term_n_29;
      return(t);
    }
    t = debug_1_0(x_6, t);
    return(t);
  }
  t = if_verbose5_1_0(w_6, t);
  v_14 = t;
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = v_14;
    {
      ATerm y_6 (ATerm t)
      {
        ATerm z_6 (ATerm t)
        {
          t = term_q_29;
          return(t);
        }
        t = debug_1_0(z_6, t);
        return(t);
      }
      t = if_verbose5_1_0(y_6, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_7 (ATerm t)
      {
        ATerm b_7 (ATerm t)
        {
          t = term_t_29;
          return(t);
        }
        t = debug_1_0(b_7, t);
        return(t);
      }
      t = if_verbose5_1_0(a_7, t);
      t = xtc_load_0_0(t);
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            {
              ATerm y_4 = NULL,z_4 = NULL;
              y_4 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, y_4));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_29 = ATgetFirst((ATermList) t);
                  if(match_cons(w_29, sym__2))
                    {
                      ATerm y_29 = ATgetArgument(w_29, 0);
                      z_4 = ATgetArgument(w_29, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_29 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = z_4;
            }
          }
        {
          ATerm c_7 (ATerm t)
          {
            ATerm e_7 (ATerm t)
            {
              t = term_t_29;
              return(t);
            }
            t = debug_1_0(e_7, t);
            return(t);
          }
          t = if_verbose5_1_0(c_7, t);
        }
      }
      ;
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      {
        ATerm w_14 = NULL;
        w_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), w_14), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_30), w_14), term_z_29);
        {
          ATerm g_7 (ATerm t)
          {
            t = term_g_29;
            t = table_getlist_0_0(t);
            {
              ATerm h_7 (ATerm t)
              {
                t = term_b_30;
                return(t);
              }
              t = debug_1_0(h_7, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(g_7, t);
          _fail(t);
        }
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
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_7 (ATerm t)
      {
        ATerm z_14 = NULL;
        z_14 = t;
        if(match_string(t, "-I"))
          {
            t = z_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
              _fail(t);
            t = z_14;
          }
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        ATerm a_15 = NULL;
        a_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATempty, a_15));
        t = extend_config_0_0(t);
        t = a_15;
        return(t);
      }
      ATerm o_7 (ATerm t)
      {
        t = term_e_30;
        return(t);
      }
      t = ArgOption_3_0(i_7, m_7, o_7, t);
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
            ATerm p_7 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm s_7 (ATerm t)
            {
              ATerm b_15 = NULL;
              b_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue)), b_15);
              t = b_15;
              return(t);
            }
            ATerm t_7 (ATerm t)
            {
              t = term_h_30;
              return(t);
            }
            t = ArgOption_3_0(p_7, s_7, t_7, t);
            ;
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            {
              ATerm v_7 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm w_7 (ATerm t)
              {
                ATerm c_15 = NULL;
                c_15 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
                t = c_15;
                return(t);
              }
              ATerm x_7 (ATerm t)
              {
                t = term_i_30;
                return(t);
              }
              t = Option_3_0(v_7, w_7, x_7, t);
            }
          }
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  q_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_6 = NULL;
        t = q_15;
        t = k_0(t);
        h_6 = t;
        {
          ATerm l_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(r_15, h_6);
          t = (ATerm) ATmakeAppl(sym_FILE_1, r_15);
        }
        ;
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        {
          ATerm n_30 = t;
          int o_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_6 = NULL;
              t = q_15;
              t = k_0(t);
              m_6 = t;
              {
                ATerm p_30 = t;
                if((PushChoice() == 0))
                  {
                    ATerm q_30 = t;
                    int r_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(r_30);
                      }
                    else
                      {
                        t = q_30;
                        {
                          ATerm s_30 = t;
                          int t_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(t_30);
                            }
                          else
                            {
                              t = s_30;
                              {
                                ATerm n_6 = NULL;
                                n_6 = t;
                                if((r_15 != t))
                                  {
                                    _fail(t);
                                  }
                                t = n_6;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_30;
                  }
                t = SSL_copy(r_15, m_6);
                t = (ATerm) ATmakeAppl(sym_FILE_1, r_15);
              }
              ;
              LocalPopChoice(o_30);
            }
          else
            {
              t = n_30;
              t = q_15;
              t = k_0(t);
              if((r_15 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_15);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_30 = ATgetArgument(t, 0);
            ATerm x_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_15, y_15);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_30 = ATgetFirst((ATermList) t);
            r_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_6;
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        t = (ATerm) ATempty;
      }
    z_15 = t;
    t = SSL_table_put(x_15, y_15, z_15);
    t = (ATerm) ATmakeAppl(sym__2, x_15, y_15);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  i_16 = t;
  t = d_80(t);
  l_16 = t;
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(l_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_16 = ATgetFirst((ATermList) t);
        m_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(l_16, (ATerm)ATmakeAppl(sym_Scopes_0), m_16);
    t = n_16;
    {
      ATerm y_7 (ATerm t)
      {
        ATerm o_16 = NULL;
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_16, o_16);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(y_7, t);
      t = i_16;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_80(t);
      t = z_80(t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = z_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  t = c_80(t);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_16, term_d_31);
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_31 = ATgetArgument(t, 0);
            ATerm h_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        t = (ATerm) ATempty;
      }
    t_16 = t;
    t = SSL_table_put(s_16, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(t_16), (ATerm) ATempty));
    t = r_16;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm y_16 = NULL;
  ATerm z_7 (ATerm t)
  {
    t = term_p_24;
    return(t);
  }
  t = begin_scope_1_0(z_7, t);
  {
    ATerm a_8 (ATerm t)
    {
      ATerm z_16 = NULL;
      z_16 = t;
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_16 = ATgetFirst((ATermList) t);
            {
              ATerm k_31 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = y_16;
        {
          ATerm b_8 (ATerm t)
          {
            ATerm c_8 (ATerm t)
            {
              ATerm a_17 = NULL;
              a_17 = t;
              t = SSL_remove(a_17);
              return(t);
            }
            t = try_1_0(c_8, t);
            return(t);
          }
          t = map_1_0(b_8, t);
          t = z_16;
          {
            ATerm d_8 (ATerm t)
            {
              t = term_p_24;
              return(t);
            }
            t = end_scope_1_0(d_8, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(h_83, a_8, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  ATerm e_8 (ATerm t)
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_17 = NULL;
        t = term_r_24;
        t = get_config_0_0(t);
        b_17 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_17);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = term_n_31;
      }
    t = i_83(t);
    {
      ATerm f_8 (ATerm t)
      {
        ATerm o_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_24;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(p_31);
          }
        else
          {
            t = o_31;
            t = term_g_25;
          }
        return(t);
      }
      t = copy_to_1_0(f_8, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(e_8, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    ATerm d_17 = NULL;
    d_17 = t;
    if(match_string(t, "-k"))
      {
        t = d_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = d_17;
      }
    return(t);
  }
  ATerm h_8 (ATerm t)
  {
    ATerm e_17 = NULL,f_17 = NULL;
    e_17 = t;
    t = SSL_string_to_int(e_17);
    f_17 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), f_17);
    t = e_17;
    return(t);
  }
  ATerm i_8 (ATerm t)
  {
    t = term_q_31;
    return(t);
  }
  t = ArgOption_3_0(g_8, h_8, i_8, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_8 (ATerm t)
      {
        ATerm h_17 = NULL;
        h_17 = t;
        if(match_string(t, "-S"))
          {
            t = h_17;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = h_17;
          }
        return(t);
      }
      ATerm k_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_u_31;
        return(t);
      }
      ATerm l_8 (ATerm t)
      {
        t = term_v_31;
        return(t);
      }
      t = Option_3_0(j_8, k_8, l_8, t);
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_8 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm p_8 (ATerm t)
            {
              ATerm i_17 = NULL,j_17 = NULL;
              i_17 = t;
              t = SSL_string_to_int(i_17);
              j_17 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_17);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, i_17);
              return(t);
            }
            ATerm q_8 (ATerm t)
            {
              t = term_y_31;
              return(t);
            }
            t = ArgOption_3_0(o_8, p_8, q_8, t);
            ;
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            {
              ATerm t_8 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm v_8 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_z_31;
                return(t);
              }
              ATerm x_8 (ATerm t)
              {
                t = term_a_32;
                return(t);
              }
              t = Option_3_0(t_8, v_8, x_8, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm z_8 (ATerm t)
  {
    ATerm l_17 = NULL;
    l_17 = t;
    if(match_string(t, "-o"))
      {
        t = l_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = l_17;
      }
    return(t);
  }
  ATerm j_9 (ATerm t)
  {
    ATerm m_17 = NULL;
    m_17 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), m_17);
    t = (ATerm) ATmakeAppl(sym_Output_1, m_17);
    return(t);
  }
  ATerm l_9 (ATerm t)
  {
    t = term_d_32;
    return(t);
  }
  t = ArgOption_3_0(z_8, j_9, l_9, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      {
        ATerm p_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm s_9 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_g_32;
          return(t);
        }
        ATerm v_9 (ATerm t)
        {
          t = term_h_32;
          return(t);
        }
        t = Option_3_0(p_9, s_9, v_9, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,s_17 = NULL,u_17 = NULL,w_17 = NULL;
  p_17 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = p_17;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm a_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_17 = ATgetFirst((ATermList) t);
          s_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_17 = ATgetFirst((ATermList) t);
          w_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_17;
      t = h_0(t);
      t = u_17;
      t = i_0(t);
      a_18 = t;
      t = (ATerm) ATinsert(CheckATermList(w_17), a_18);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm z_9 (ATerm t)
  {
    ATerm c_18 = NULL;
    c_18 = t;
    if(match_string(t, "-i"))
      {
        t = c_18;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = c_18;
      }
    return(t);
  }
  ATerm b_10 (ATerm t)
  {
    ATerm e_18 = NULL;
    e_18 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), e_18);
    t = (ATerm) ATmakeAppl(sym_Input_1, e_18);
    return(t);
  }
  ATerm c_10 (ATerm t)
  {
    t = term_i_32;
    return(t);
  }
  t = ArgOption_3_0(z_9, b_10, c_10, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(m_32);
          }
        else
          {
            t = l_32;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL;
  f_18 = t;
  t = term_n_24;
  t = whoami_0_0(t);
  g_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), g_18), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = f_18;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_24;
  t = whoami_0_0(t);
  h_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_18));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_76(t);
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm k_18 = NULL,l_18 = NULL,o_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_18 = ATgetFirst((ATermList) t);
            l_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_18;
        t = foldr_2_0(f_76, g_76, t);
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_18, o_18);
        t = g_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  p_18 = t;
  t = SSL_explode_term(p_18);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_18;
  t = foldr_2_0(d_74, e_74, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_18 = NULL;
  t = times_0_0(t);
  {
    ATerm k_10 (ATerm t)
    {
      t = term_t_31;
      return(t);
    }
    ATerm l_10 (ATerm t)
    {
      ATerm s_18 = NULL,t_18 = NULL;
      if(match_cons(t, sym__2))
        {
          s_18 = ATgetArgument(t, 0);
          t_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(s_18, t_18);
            ;
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            t = SSL_addr(s_18, t_18);
          }
      }
      return(t);
    }
    t = crush_2_0(k_10, l_10, t);
    r_18 = t;
    t = SSL_TicksToSeconds(r_18);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_19;
        if((d_19 != t))
          {
            _fail(t);
          }
        t = c_19;
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        t = c_19;
        {
          ATerm v_32 = t;
          int w_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_19, e_19);
              ;
              LocalPopChoice(w_32);
            }
          else
            {
              t = v_32;
              t = SSL_gtr(d_19, e_19);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_19, e_19);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm m_10 (ATerm t)
  {
    ATerm h_19 = NULL,i_19 = NULL;
    h_19 = t;
    t = term_q_5;
    t = get_config_0_0(t);
    i_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_19, term_m_13);
    t = geq_0_0(t);
    t = h_19;
    t = d_81(t);
    return(t);
  }
  t = try_1_0(m_10, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm u_10 (ATerm t)
  {
    ATerm k_19 = NULL,l_19 = NULL;
    t = run_time_0_0(t);
    k_19 = t;
    t = term_n_24;
    t = whoami_0_0(t);
    l_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), k_19), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), l_19));
    t = (ATerm) ATmakeAppl(sym__2, term_d_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_32), k_19), term_a_14), l_19));
    return(t);
  }
  t = if_verbose1_1_0(u_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
        ATerm v_10 (ATerm t)
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              {
                ATerm d_33 = t;
                int e_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(e_33);
                  }
                else
                  {
                    t = d_33;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(v_10, t);
      }
    }
  t = j_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_19 = ATgetFirst((ATermList) t);
      r_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_19 = NULL,w_19 = NULL;
        t = r_19;
        t = g_0(t);
        v_19 = t;
        t = q_19;
        t = f_0(t);
        w_19 = t;
        t = r_19;
        {
          ATerm w_10 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(v_19), w_19);
            return(t);
          }
          t = reverse_acc_2_0(f_0, w_10, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_24;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm x_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, x_10, t);
  return(t);
}
ATerm Program_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  i_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_20);
  f_20 = t;
  t = g_20;
  t = m_62(t);
  h_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, h_20), f_20);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      {
        ATerm z_10 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(z_10, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_h_33;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm c_11 (ATerm t)
    {
      ATerm m_20 = NULL;
      m_20 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, m_20), term_i_33);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(c_11, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm n_62 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  q_20 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_20);
  n_20 = t;
  t = o_20;
  t = n_62(t);
  p_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_20), n_20);
  return(t);
}
ATerm fetch_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm u_20 (ATerm t)
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_69, _id, t);
        ;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = Cons_2_0(_id, u_20, t);
      }
    return(t);
  }
  t = u_20(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  t = fetch_1_0(e_86, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL;
  w_20 = t;
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_33 = ATgetFirst((ATermList) t);
                ATerm o_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_20;
          }
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = (ATerm) ATinsert(ATempty, w_20);
      }
    x_20 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), x_20);
    t = w_20;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      {
        ATerm d_21 = NULL,g_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_21 = ATgetFirst((ATermList) t);
            g_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_21;
        {
          ATerm d_11 (ATerm t)
          {
            t = g_21;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_11, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  n_21 = t;
  t = SSL_explode_term(n_21);
  if(match_cons(t, sym__2))
    {
      ATerm r_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_21;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_70 (ATerm), ATerm t)
{
  ATerm p_21 (ATerm t)
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_21, t);
        ;
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_70(t);
      }
    return(t);
  }
  t = p_21(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym__2))
    {
      r_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_21;
  {
    ATerm k_11 (ATerm t)
    {
      t = q_21;
      return(t);
    }
    t = at_end_1_0(k_11, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm v_55 (ATerm), ATerm w_55 (ATerm), ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  x_21 = t;
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      u_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_21);
  s_21 = t;
  t = t_21;
  t = v_55(t);
  v_21 = t;
  t = u_21;
  t = w_55(t);
  w_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, v_21, w_21), s_21);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm b_22 = NULL;
  ATerm l_11 (ATerm t)
  {
    ATerm c_22 = NULL;
    c_22 = t;
    t = SSL_explode_string(c_22);
    return(t);
  }
  ATerm m_11 (ATerm t)
  {
    ATerm d_22 = NULL;
    d_22 = t;
    t = SSL_explode_string(d_22);
    return(t);
  }
  t = _2_0(l_11, m_11, t);
  t = conc_0_0(t);
  b_22 = t;
  t = SSL_implode_string(b_22);
  return(t);
}
ATerm debug_1_0 (ATerm i_65 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  e_22 = t;
  t = i_65(t);
  f_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_22), f_22));
  t = e_22;
  return(t);
}
ATerm map_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm g_22 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = Cons_2_0(p_69, g_22, t);
      }
    return(t);
  }
  t = g_22(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_22 = NULL;
      m_22 = t;
      t = SSL_is_string(m_22);
      ;
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      {
        ATerm a_34 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_11 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(n_11, t);
            ;
            LocalPopChoice(b_34);
          }
        else
          {
            t = a_34;
            {
              ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
              q_22 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_22 = ATgetArgument(t, 0);
                  t = r_22;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_22 = ATgetArgument(t, 0);
                      t = r_22;
                      {
                        ATerm c_34 = t;
                        int d_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_34);
                          }
                        else
                          {
                            t = c_34;
                            {
                              ATerm o_11 (ATerm t)
                              {
                                t = term_e_34;
                                return(t);
                              }
                              t = debug_1_0(o_11, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm w_22 = NULL,x_22 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_22 = ATgetArgument(t, 0);
                          s_22 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_22;
                      t = eval_config_0_0(t);
                      w_22 = t;
                      t = s_22;
                      t = eval_config_0_0(t);
                      x_22 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_22, x_22);
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
  ATerm a_23 = NULL;
  a_23 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_23);
  {
    ATerm p_11 (ATerm t)
    {
      ATerm b_23 = NULL;
      t = eval_config_0_0(t);
      b_23 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_23, b_23);
      t = b_23;
      return(t);
    }
    t = try_1_0(p_11, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_80(t);
      ;
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_11 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm u_11 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_k_34;
        return(t);
      }
      ATerm v_11 (ATerm t)
      {
        t = term_l_34;
        return(t);
      }
      t = Option_3_0(r_11, u_11, v_11, t);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      {
        ATerm w_11 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_11 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_34;
          return(t);
        }
        ATerm y_11 (ATerm t)
        {
          t = term_n_34;
          return(t);
        }
        t = Option_3_0(w_11, x_11, y_11, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  if(match_cons(t, sym__3))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
      g_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_23, f_23);
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_34 = ATgetArgument(t, 0);
            ATerm r_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_23, f_23);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = (ATerm) ATempty;
      }
    h_23 = t;
    t = SSL_table_put(e_23, f_23, (ATerm) ATinsert(CheckATermList(h_23), g_23));
    t = (ATerm) ATmakeAppl(sym__3, e_23, f_23, g_23);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm m_23 = NULL;
  t = term_n_24;
  t = j_87(t);
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_34, term_t_34, m_23);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = o_23;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm t_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_23 = ATgetFirst((ATermList) t);
          q_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_23;
      t = a_0(t);
      t = term_n_24;
      t = b_0(t);
      t_23 = t;
      t = (ATerm) ATinsert(CheckATermList(q_23), t_23);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm z_11 (ATerm t)
  {
    ATerm v_23 = NULL;
    v_23 = t;
    if(match_string(t, "--help"))
      {
        t = v_23;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = v_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = v_23;
          }
      }
    return(t);
  }
  ATerm b_12 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_u_34;
    return(t);
  }
  ATerm c_12 (ATerm t)
  {
    t = term_v_34;
    return(t);
  }
  t = Option_3_0(z_11, b_12, c_12, t);
  return(t);
}
ATerm Cons_2_0 (ATerm e_57 (ATerm), ATerm f_57 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  b_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_23 = ATgetFirst((ATermList) t);
      y_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_24);
  w_23 = t;
  t = x_23;
  t = e_57(t);
  z_23 = t;
  t = y_23;
  t = f_57(t);
  a_24 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(a_24), z_23), w_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  {
    ATerm f_12 (ATerm t)
    {
      t = term_w_34;
      t = h_87(t);
      return(t);
    }
    t = try_1_0(f_12, t);
    t = i_24;
    {
      ATerm l_12 (ATerm t)
      {
        ATerm j_24 = NULL;
        j_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_24);
        t = (ATerm) ATmakeAppl(sym_Program_1, j_24);
        return(t);
      }
      ATerm m_12 (ATerm t)
      {
        ATerm x_34 = t;
        int y_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_34 = t;
            int a_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_35);
              }
            else
              {
                t = z_34;
                t = h_87(t);
                t = Cons_2_0(_id, m_12, t);
              }
            ;
            LocalPopChoice(y_34);
          }
        else
          {
            t = x_34;
            {
              ATerm l_24 = NULL,m_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_24 = ATgetFirst((ATermList) t);
                  m_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_24), (ATerm) ATmakeAppl(sym_Undefined_1, l_24));
            }
          }
        return(t);
      }
      t = Cons_2_0(l_12, m_12, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  s_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_24;
  {
    ATerm n_12 (ATerm t)
    {
      ATerm b_35 = t;
      int c_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_87(t);
          ;
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
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(e_35);
              }
            else
              {
                t = d_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_12, t);
    {
      ATerm o_12 (ATerm t)
      {
        ATerm f_35 = t;
        int g_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_24 = NULL;
            z_24 = t;
            {
              ATerm h_35 = t;
              int i_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_24;
                  {
                    ATerm j_35 = t;
                    int k_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_a_33;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(k_35);
                      }
                    else
                      {
                        t = j_35;
                        {
                          ATerm w_12 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(w_12, t);
                        }
                      }
                    t = z_24;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(i_35);
                }
              else
                {
                  t = h_35;
                  t = term_j_34;
                  t = get_config_0_0(t);
                  t = z_24;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(g_35);
          }
        else
          {
            t = f_35;
            {
              ATerm x_12 (ATerm t)
              {
                ATerm h_13 (ATerm t)
                {
                  t_24 = t;
                  return(t);
                }
                t = Undefined_1_0(h_13, t);
                return(t);
              }
              t = option_defined_1_0(x_12, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_24)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_d_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_24)), term_l_35));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(o_12, t);
      u_24 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = u_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm t)
{
  ATerm d_16 = NULL;
  t = parse_options_1_0(l_85, t);
  d_16 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), d_16);
  t = d_16;
  t = n_85(t);
  {
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_85, t);
        ;
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        {
          ATerm o_35 = t;
          int p_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_35);
            }
          else
            {
              t = o_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(p_85, default_usage_0_0, _id, q_85, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t)
{
  ATerm i_13 (ATerm t)
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_83(t);
        ;
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm j_13 (ATerm t)
  {
    t = xtc_io_1_0(n_83, t);
    return(t);
  }
  t = option_wrap_2_0(i_13, j_13, t);
  return(t);
}
ATerm xtc_iowrap_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(s_83, t_83, t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  ATerm k_13 (ATerm t)
  {
    ATerm e_25 = NULL,f_25 = NULL;
    e_25 = t;
    t = term_s_35;
    t = xtc_find_path_0_0(t);
    f_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, f_25), term_t_35));
    t = extend_config_0_0(t);
    t = e_25;
    t = parse_module_0_0(t);
    return(t);
  }
  t = xtc_iowrap_2_0(parse_stratego_options_0_0, k_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
