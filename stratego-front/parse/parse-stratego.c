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
ATerm term_d_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_n_24;
ATerm term_g_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
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
ATerm term_a_15;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_l_14;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_c_5;
void init_constant_terms (void)
{
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_t_13, term_b_15);
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
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_c_16, term_d_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_e_17, term_h_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_p_17, term_q_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_u_17, term_v_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_d_18, term_g_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_p_18, term_q_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_u_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_d_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_k_19, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_v_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_d_20, term_e_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_20, term_l_20, term_n_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_20, term_s_20, term_t_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_20, term_y_20, term_z_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_l_21, term_m_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_21, term_r_21, term_y_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_22, term_b_22, term_c_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_22, term_g_22, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_22, term_p_22, term_q_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_22, term_z_22, term_a_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
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
  term_k_34 = (ATerm) ATmakeAppl(sym__3, term_n_27, term_j_34, term_r_24);
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
ATerm WriteToFile_1_0 (ATerm d_66 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm s_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm assert_1_0 (ATerm o_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm w_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm);
ATerm add_extension_0_0 (ATerm);
ATerm split_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm);
ATerm guarantee_extension_1_0 (ATerm s_78 (ATerm), ATerm);
ATerm if_keep1_1_0 (ATerm o_82 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm n_81 (ATerm), ATerm);
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm xtc_transform_1_0 (ATerm e_84 (ATerm), ATerm);
ATerm get_syntax_definition_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm find_in_path_0_0 (ATerm);
ATerm find_in_includes_1_0 (ATerm n_63 (ATerm), ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_81 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm j_70 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm get_meta_0_0 (ATerm);
ATerm get_syntax_0_0 (ATerm);
ATerm basename_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm basename_0_0 (ATerm);
ATerm FILE_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm t_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm o_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm q_81 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm);
ATerm union_1_0 (ATerm a_74 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm z_81 (ATerm), ATerm);
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
ATerm end_scope_1_0 (ATerm l_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm k_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm q_83 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_81 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm r_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm t_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm h_70 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_70 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm c_56 (ATerm), ATerm d_56 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm p_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm o_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm);
ATerm xtc_iowrap_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm parse_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,p_0 = NULL;
  t = term_c_5;
  {
    ATerm a_10 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = a_10;
        t = term_t_13;
      }
    b_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_t_13);
    {
      ATerm u_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(b_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(w_13);
        }
      else
        {
          t = u_13;
          t = SSL_subtr(b_0, (ATerm) ATmakeInt(1));
        }
      p_0 = t;
      t = SSL_int_to_string(p_0);
      f_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_c_5);
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm d_66 (ATerm), ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym__2))
    {
      r_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_0, term_x_13);
  t = open_stream_0_0(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_0, s_0);
  t = d_66(t);
  t = fclose_0_0(t);
  t = s_0;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm k_14 = ATgetArgument(t, 0);
        if(match_cons(k_14, sym_Stream_1))
          {
            x_0 = ATgetArgument(k_14, 0);
          }
        else
          _fail(t);
        y_0 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(x_0, y_0);
    z_0 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, z_0);
    return(t);
  }
  t = WriteToFile_1_0(o_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, b_1);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(c_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(m_84, n_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      g_2 = ATgetArgument(t, 0);
      {
        ATerm v_0 = NULL;
        t = SSL_int_to_string(g_2);
        v_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_14), v_0), term_l_14);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm j_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          g_2 = ATgetArgument(t, 0);
          h_2 = ATgetArgument(t, 1);
          i_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(h_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_2), term_x_14), j_1), term_s_14), g_2);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm n_2 = NULL;
  n_2 = t;
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_23), term_t_22), term_l_22), term_e_22), term_z_21), term_n_21), term_f_21), term_u_20), term_q_20), term_f_20), term_b_20), term_w_19), term_m_19), term_g_19), term_v_18), term_r_18), term_h_18), term_b_18), term_r_17), term_i_17), term_w_16), term_o_16), term_f_16), term_x_15), term_q_15), term_m_15), term_g_15), term_c_15);
        {
          ATerm q_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm c_23 = ATgetArgument(t, 0);
                if((n_2 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm e_23 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(q_0, t);
        }
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, n_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_2 = NULL;
  o_2 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm r_2 = NULL,u_2 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm i_23 = ATgetArgument(t, 0);
          r_2 = ATgetArgument(t, 1);
          {
            ATerm j_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_2;
      {
        ATerm l_23 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_23;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        u_2 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_t_23, (ATerm) ATinsert(ATinsert(ATempty, u_2), term_u_23));
      }
      return(t);
    }
    t = try_1_0(u_0, t);
    t = o_2;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL;
  x_2 = t;
  t = fork_0_0(t);
  y_2 = t;
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_2;
        t = q_64(t);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = (ATerm) ATmakeAppl(sym__2, y_2, x_2);
        t = r_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_64 (ATerm), ATerm t)
{
  ATerm a_3 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm g_3 = NULL;
    if(match_cons(t, sym__2))
      {
        g_3 = ATgetArgument(t, 0);
        if(((a_3 != NULL) && (a_3 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          a_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(g_3);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm x_23 = ATgetArgument(t, 0);
        if(((ATgetType(x_23) != AT_INT) || (ATgetInt((ATermInt) x_23) != 0)))
          _fail(t);
        {
          ATerm a_24 = ATgetArgument(t, 1);
        }
        {
          ATerm d_24 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(a_3);
    return(t);
  }
  t = fork_2_0(s_64, w_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm p_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_1 (ATerm t)
    {
      t = SSL_execvp(p_3, r_3);
      return(t);
    }
    t = fork_and_wait_1_0(a_1, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  t_3 = t;
  t = d_84(t);
  t = xtc_find_warning_0_0(t);
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, t_3);
  t = call_0_0(t);
  t = t_3;
  return(t);
}
ATerm assert_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,a_4 = NULL,c_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_80(t);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_3, v_3, w_3);
  t = table_push_0_0(t);
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(x_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_4 = ATgetFirst((ATermList) t);
        c_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(x_3, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(c_4), (ATerm) ATinsert(CheckATermList(a_4), v_3)));
    t = (ATerm) ATmakeAppl(sym__2, v_3, w_3);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm w_65 (ATerm), ATerm t)
{
  ATerm e_4 = NULL;
  e_4 = t;
  t = w_65(t);
  {
    ATerm d_1 (ATerm t)
    {
      t = term_g_24;
      return(t);
    }
    t = debug_1_0(d_1, t);
    t = e_4;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm w_4 (ATerm j_4, ATerm t)
  {
    t = j_4;
    {
      ATerm h_24 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm l_24 = ATgetArgument(t, 0);
              ATerm m_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_24;
        }
      {
        ATerm e_1 (ATerm t)
        {
          t = term_n_24;
          return(t);
        }
        t = obsolete_1_0(e_1, t);
        t = (ATerm) ATmakeAppl(sym__2, j_4, term_x_13);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm x_4 (ATerm m_4, ATerm n_4, ATerm o_4, ATerm t)
  {
    t = SSL_open_file(m_4, n_4);
    return(t);
  }
  ATerm s_4 = NULL,u_4 = NULL,v_4 = NULL;
  s_4 = t;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
      {
        ATerm o_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_4(s_4, t);
            ;
            LocalPopChoice(q_24);
          }
        else
          {
            t = o_24;
            t = x_4(u_4, v_4, s_4, t);
          }
      }
    }
  else
    {
      t = w_4(s_4, t);
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
  ATerm a_5 = NULL;
  t = term_r_24;
  t = new_0_0(t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, term_u_24);
  t = conc_strings_0_0(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm q_1 = NULL;
      q_1 = t;
      t = SSL_access(q_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(f_1, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_5 = NULL;
  t = new_file_0_0(t);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_5, term_x_13);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, d_5, term_r_24);
  {
    ATerm g_1 (ATerm t)
    {
      t = term_v_24;
      return(t);
    }
    t = assert_1_0(g_1, t);
    t = d_5;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  u_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm t_1 = NULL,u_1 = NULL;
      t = u_5;
      t = xtc_new_file_0_0(t);
      t_1 = t;
      t = n_0(t);
      u_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_1, (ATerm) ATinsert(ATinsert(ATempty, t_1), term_w_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(t_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_1);
    }
  else
    {
      ATerm d_2 = NULL,e_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_5;
      t = xtc_new_file_0_0(t);
      d_2 = t;
      t = n_0(t);
      e_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_2), term_w_24), v_5), term_x_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(d_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_2);
    }
  return(t);
}
ATerm xtc_transform_2_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_25 = t;
      int b_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(b_25);
        }
      else
        {
          t = a_25;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(z_24);
      t = xtc_transform_file_2_0(f_84, g_84, t);
    }
  else
    {
      t = y_24;
      t = xtc_transform_term_2_0(f_84, g_84, t);
    }
  return(t);
}
ATerm add_extension_0_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL;
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_5), term_c_25), y_5);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm split_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm t)
{
  ATerm a_6 = NULL,d_6 = NULL,e_6 = NULL;
  a_6 = t;
  t = y_68(t);
  d_6 = t;
  t = a_6;
  t = z_68(t);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_6, e_6);
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm s_78 (ATerm), ATerm t)
{
  t = basename_0_0(t);
  {
    ATerm h_1 (ATerm t)
    {
      t = term_r_24;
      t = s_78(t);
      return(t);
    }
    t = split_2_0(_id, h_1, t);
    t = add_extension_0_0(t);
  }
  return(t);
}
ATerm if_keep1_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm l_6 = NULL,n_6 = NULL;
    l_6 = t;
    t = term_d_25;
    t = get_config_0_0(t);
    n_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_6, term_t_13);
    t = geq_0_0(t);
    t = l_6;
    t = o_82(t);
    return(t);
  }
  t = try_1_0(i_1, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm o_6 = NULL,p_6 = NULL;
    o_6 = t;
    t = term_c_5;
    t = get_config_0_0(t);
    p_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_6, term_i_15);
    t = geq_0_0(t);
    t = o_6;
    t = n_81(t);
    return(t);
  }
  t = try_1_0(k_1, t);
  return(t);
}
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm r_7 = NULL,u_7 = NULL;
  r_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_7;
        t = l_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(u_7, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(u_7);
        t = term_g_25;
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        {
          ATerm h_25 = t;
          int i_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_2 = NULL;
              t = r_7;
              t = l_0(t);
              v_2 = t;
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
                          ATerm w_2 = NULL;
                          w_2 = t;
                          if((u_7 != t))
                            {
                              _fail(t);
                            }
                          t = w_2;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_25;
                  }
                t = SSL_rename(u_7, v_2);
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_2);
              }
              ;
              LocalPopChoice(i_25);
            }
          else
            {
              t = h_25;
              t = r_7;
              t = l_0(t);
              if((u_7 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_7);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_transform_1_0 (ATerm e_84 (ATerm), ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(e_84, l_1, t);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  ATerm m_1 (ATerm t)
  {
    ATerm n_1 (ATerm t)
    {
      t = term_m_25;
      return(t);
    }
    t = debug_1_0(n_1, t);
    return(t);
  }
  t = if_verbose6_1_0(m_1, t);
  c_8 = t;
  {
    ATerm o_1 (ATerm t)
    {
      t = term_n_25;
      return(t);
    }
    t = guarantee_extension_1_0(o_1, t);
    d_8 = t;
    t = c_8;
    {
      ATerm o_25 = t;
      int p_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_8 = NULL;
          t = d_8;
          {
            ATerm p_1 (ATerm t)
            {
              t = term_q_25;
              return(t);
            }
            t = find_in_includes_1_0(p_1, t);
            f_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_8);
          }
          ;
          LocalPopChoice(p_25);
        }
      else
        {
          t = o_25;
          {
            ATerm h_8 = NULL;
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = term_r_25;
                return(t);
              }
              t = say_1_0(s_1, t);
              return(t);
            }
            t = if_verbose2_1_0(r_1, t);
            {
              ATerm v_1 (ATerm t)
              {
                t = term_s_25;
                return(t);
              }
              t = guarantee_extension_1_0(v_1, t);
              h_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_8);
              {
                ATerm w_1 (ATerm t)
                {
                  t = term_t_25;
                  return(t);
                }
                ATerm x_1 (ATerm t)
                {
                  t = term_u_25;
                  t = get_config_0_0(t);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      ATerm i_8 = NULL;
                      i_8 = t;
                      t = (ATerm) ATinsert(ATinsert(ATempty, i_8), term_u_25);
                      return(t);
                    }
                    t = map_1_0(y_1, t);
                    t = concat_0_0(t);
                  }
                  return(t);
                }
                t = xtc_transform_2_0(w_1, x_1, t);
                {
                  ATerm z_1 (ATerm t)
                  {
                    t = term_v_25;
                    return(t);
                  }
                  t = xtc_transform_1_0(z_1, t);
                  {
                    ATerm a_2 (ATerm t)
                    {
                      t = d_8;
                      return(t);
                    }
                    t = rename_to_1_0(a_2, t);
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
  ATerm k_8 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm l_8 = NULL;
    l_8 = t;
    t = SSL_explode_string(l_8);
    return(t);
  }
  t = map_1_0(b_2, t);
  t = concat_0_0(t);
  k_8 = t;
  t = SSL_implode_string(k_8);
  return(t);
}
ATerm find_in_path_0_0 (ATerm t)
{
  ATerm n_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm r_8 = NULL,c_3 = NULL;
      r_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_8), term_w_25), r_8);
      t = concat_strings_0_0(t);
      c_3 = t;
      t = SSL_access(c_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      return(t);
    }
    t = fetch_elem_1_0(c_2, t);
  }
  return(t);
}
ATerm find_in_includes_1_0 (ATerm n_63 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  a_9 = t;
  t = term_u_25;
  t = get_config_0_0(t);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_9, b_9);
  t = find_in_path_0_0(t);
  {
    ATerm j_2 (ATerm t)
    {
      t = debug_1_0(n_63, t);
      return(t);
    }
    t = if_verbose2_1_0(j_2, t);
  }
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm l_2 (ATerm t)
    {
      t = term_x_25;
      return(t);
    }
    t = debug_1_0(l_2, t);
    return(t);
  }
  t = if_verbose6_1_0(k_2, t);
  c_9 = t;
  {
    ATerm m_2 (ATerm t)
    {
      t = term_y_25;
      return(t);
    }
    t = guarantee_extension_1_0(m_2, t);
    d_9 = t;
    {
      ATerm z_25 = t;
      int a_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_9 = NULL;
          ATerm p_2 (ATerm t)
          {
            t = term_b_26;
            return(t);
          }
          t = find_in_includes_1_0(p_2, t);
          e_9 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, e_9);
          ;
          LocalPopChoice(a_26);
        }
      else
        {
          t = z_25;
          {
            ATerm q_2 (ATerm t)
            {
              ATerm s_2 (ATerm t)
              {
                t = term_c_26;
                return(t);
              }
              t = say_1_0(s_2, t);
              return(t);
            }
            t = if_verbose2_1_0(q_2, t);
            t = c_9;
            t = get_syntax_definition_0_0(t);
            {
              ATerm t_2 (ATerm t)
              {
                t = term_d_26;
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, c_9), term_e_26);
                return(t);
              }
              t = xtc_transform_2_0(t_2, z_2, t);
              {
                ATerm b_3 (ATerm t)
                {
                  t = d_9;
                  return(t);
                }
                t = rename_to_1_0(b_3, t);
              }
            }
          }
        }
      {
        ATerm d_3 (ATerm t)
        {
          ATerm e_3 (ATerm t)
          {
            t = term_b_26;
            return(t);
          }
          t = debug_1_0(e_3, t);
          return(t);
        }
        t = if_verbose6_1_0(d_3, t);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm f_9 = NULL,g_9 = NULL;
    f_9 = t;
    t = term_c_5;
    t = get_config_0_0(t);
    g_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_9, term_e_15);
    t = geq_0_0(t);
    t = f_9;
    t = m_81(t);
    return(t);
  }
  t = try_1_0(f_3, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_70 (ATerm), ATerm t)
{
  ATerm h_9 = NULL;
  ATerm h_3 (ATerm t)
  {
    t = j_70(t);
    if(((h_9 != NULL) && (h_9 != t)))
      _fail(t);
    else
      h_9 = t;
    return(t);
  }
  t = fetch_1_0(h_3, t);
  t = not_null(h_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_9 = NULL,m_9 = NULL;
  k_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = k_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          m_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(m_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm o_9 = NULL;
  ATerm i_3 (ATerm t)
  {
    ATerm j_3 (ATerm t)
    {
      t = term_f_26;
      return(t);
    }
    t = debug_1_0(j_3, t);
    return(t);
  }
  t = if_verbose6_1_0(i_3, t);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_3 (ATerm t)
        {
          ATerm m_3 (ATerm t)
          {
            t = term_i_26;
            return(t);
          }
          t = guarantee_extension_1_0(m_3, t);
          return(t);
        }
        t = FILE_1_0(k_3, t);
        t = read_from_0_0(t);
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        {
          ATerm p_9 = NULL;
          ATerm n_3 (ATerm t)
          {
            ATerm o_3 (ATerm t)
            {
              t = term_j_26;
              return(t);
            }
            t = guarantee_extension_1_0(o_3, t);
            return(t);
          }
          t = FILE_1_0(n_3, t);
          t = read_from_0_0(t);
          p_9 = t;
          t = SSL_explode_term(p_9);
          if(match_cons(t, sym__2))
            {
              o_9 = ATgetArgument(t, 0);
              {
                ATerm k_26 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, o_9)));
        }
      }
    {
      ATerm q_3 (ATerm t)
      {
        ATerm s_3 (ATerm t)
        {
          t = term_f_26;
          return(t);
        }
        t = debug_1_0(s_3, t);
        return(t);
      }
      t = if_verbose6_1_0(q_3, t);
    }
  }
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm r_9 = NULL;
  ATerm y_3 (ATerm t)
  {
    ATerm z_3 (ATerm t)
    {
      t = term_l_26;
      return(t);
    }
    t = debug_1_0(z_3, t);
    return(t);
  }
  t = if_verbose6_1_0(y_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      r_9 = ATgetArgument(t, 0);
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
              ATerm s_9 = NULL,t_9 = NULL;
              t = get_meta_0_0(t);
              t_9 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  s_9 = ATgetArgument(t, 0);
                  {
                    ATerm r_26 = t;
                    int s_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = s_9;
                        {
                          ATerm b_4 (ATerm t)
                          {
                            ATerm v_9 = NULL;
                            if(match_cons(t, sym_Syntax_1))
                              {
                                v_9 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = v_9;
                            return(t);
                          }
                          t = fetch_elem_1_0(b_4, t);
                        }
                        ;
                        LocalPopChoice(s_26);
                      }
                    else
                      {
                        t = r_26;
                        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue))), r_9), (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue))), t_9), (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue))));
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), r_9), term_u_26), t_9), term_t_26);
                        _fail(t);
                      }
                  }
                }
              else
                {
                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue))), r_9), (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue))), t_9), (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue))));
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), r_9), term_u_26), t_9), term_t_26);
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
      ATerm d_4 (ATerm t)
      {
        ATerm f_4 (ATerm t)
        {
          t = term_x_26;
          return(t);
        }
        t = debug_1_0(f_4, t);
        return(t);
      }
      t = if_verbose2_1_0(d_4, t);
    }
  }
  return(t);
}
ATerm basename_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  y_9 = t;
  t = SSL_explode_string(y_9);
  {
    ATerm g_4 (ATerm t)
    {
      ATerm y_26 = t;
      int z_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, g_4, t);
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
                ATerm h_4 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(h_4, _id, t);
                ;
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                {
                  ATerm i_4 (ATerm t)
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2_0(i_4, q_78, t);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1_0(g_4, t);
    z_9 = t;
    t = SSL_implode_string(z_9);
  }
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(_id, t);
  return(t);
}
ATerm FILE_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_10);
  b_10 = t;
  t = c_10;
  t = m_62(t);
  d_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, d_10), b_10);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      t = term_c_27;
      return(t);
    }
    t = debug_1_0(l_4, t);
    return(t);
  }
  t = if_verbose6_1_0(k_4, t);
  h_10 = t;
  {
    ATerm p_4 (ATerm t)
    {
      t = basename_0_0(t);
      if(((i_10 != NULL) && (i_10 != t)))
        _fail(t);
      else
        i_10 = t;
      return(t);
    }
    t = FILE_1_0(p_4, t);
    t = get_syntax_0_0(t);
    t = get_parse_table_0_0(t);
    if(match_cons(t, sym_FILE_1))
      {
        j_10 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = h_10;
    {
      ATerm q_4 (ATerm t)
      {
        t = term_d_27;
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        ATerm k_10 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm t_4 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_e_27);
            return(t);
          }
          t = if_verbose3_1_0(t_4, t);
          k_10 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_10), j_10), term_g_27), term_f_27);
        }
        return(t);
      }
      t = xtc_transform_2_0(q_4, r_4, t);
      {
        ATerm y_4 (ATerm t)
        {
          t = term_h_27;
          return(t);
        }
        t = xtc_transform_2_0(y_4, pass_verbose_0_0, t);
        {
          ATerm z_4 (ATerm t)
          {
            ATerm f_5 (ATerm t)
            {
              t = not_null(i_10);
              {
                ATerm h_5 (ATerm t)
                {
                  t = term_i_27;
                  return(t);
                }
                t = guarantee_extension_1_0(h_5, t);
              }
              return(t);
            }
            t = copy_to_1_0(f_5, t);
            return(t);
          }
          t = if_keep1_1_0(z_4, t);
          {
            ATerm i_5 (ATerm t)
            {
              t = term_j_27;
              return(t);
            }
            t = xtc_transform_2_0(i_5, pass_verbose_0_0, t);
            {
              ATerm k_5 (ATerm t)
              {
                t = term_k_27;
                return(t);
              }
              t = xtc_transform_2_0(k_5, pass_verbose_0_0, t);
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
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10;
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
    n_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_10, n_10);
    t = conc_0_0(t);
    o_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_10, o_10);
    t = (ATerm) ATmakeAppl(sym__3, term_n_27, l_10, o_10);
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  t = SSL_explode_string(p_10);
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_10 (ATerm t)
        {
          ATerm q_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, r_10, t);
              ;
              LocalPopChoice(r_27);
            }
          else
            {
              t = q_27;
              {
                ATerm l_5 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                ATerm m_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2_0(l_5, m_5, t);
              }
            }
          return(t);
        }
        t = r_10(t);
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATempty;
      }
    q_10 = t;
    t = SSL_implode_string(q_10);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  t = SSL_table_keys(s_10);
  {
    ATerm n_5 (ATerm t)
    {
      ATerm t_10 = NULL,y_10 = NULL;
      t_10 = t;
      t = SSL_table_get(s_10, t_10);
      y_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_10, y_10);
      return(t);
    }
    t = map_1_0(n_5, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm a_11 = NULL,b_11 = NULL;
    a_11 = t;
    t = term_c_5;
    t = get_config_0_0(t);
    b_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_11, term_b_22);
    t = geq_0_0(t);
    t = a_11;
    t = p_81(t);
    return(t);
  }
  t = try_1_0(o_5, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, h_11));
  {
    ATerm p_5 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((i_11 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((j_11 != NULL) && (j_11 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(p_5, t);
    t = not_null(j_11);
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_77 (ATerm), ATerm t)
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
            ATerm q_5 (ATerm t)
            {
              t = filter_1_0(q_77, t);
              return(t);
            }
            t = Cons_2_0(q_77, q_5, t);
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            {
              ATerm q_11 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_27 = ATgetFirst((ATermList) t);
                  q_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = q_11;
              t = filter_1_0(q_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm t_11 (ATerm t)
  {
    ATerm r_5 (ATerm t)
    {
      t = k_79(t);
      t = t_11(t);
      return(t);
    }
    t = try_1_0(r_5, t);
    return(t);
  }
  t = t_11(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  {
    ATerm s_5 (ATerm t)
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
    t = repeat_1_0(s_5, t);
    t = u_11;
  }
  return(t);
}
ATerm say_1_0 (ATerm t_65 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,l_3 = NULL;
  z_11 = t;
  t = t_65(t);
  l_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, l_3));
  t = z_11;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm a_12 = NULL,c_12 = NULL;
    a_12 = t;
    t = term_c_5;
    t = get_config_0_0(t);
    c_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_12, term_d_18);
    t = geq_0_0(t);
    t = a_12;
    t = o_81(t);
    return(t);
  }
  t = try_1_0(w_5, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_81 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm d_12 = NULL,e_12 = NULL;
    d_12 = t;
    t = term_c_5;
    t = get_config_0_0(t);
    e_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_12, term_o_15);
    t = geq_0_0(t);
    t = d_12;
    t = q_81(t);
    return(t);
  }
  t = try_1_0(x_5, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_12 = ATgetFirst((ATermList) t);
      k_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_74(t);
  {
    ATerm c_6 (ATerm t)
    {
      ATerm l_12 = NULL;
      l_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_12, l_12);
      t = e_74(t);
      return(t);
    }
    t = fetch_1_0(c_6, t);
    t = k_12;
  }
  return(t);
}
ATerm union_1_0 (ATerm a_74 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12;
  {
    ATerm o_12 (ATerm t)
    {
      ATerm y_27 = t;
      int z_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_12;
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
                ATerm f_6 (ATerm t)
                {
                  t = m_12;
                  return(t);
                }
                t = HdMember_p__2_0(a_74, f_6, t);
                t = o_12(t);
                ;
                LocalPopChoice(b_28);
              }
            else
              {
                t = a_28;
                t = Cons_2_0(_id, o_12, t);
              }
          }
        }
      return(t);
    }
    t = o_12(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm p_12 = NULL;
    if(match_cons(t, sym__2))
      {
        p_12 = ATgetArgument(t, 0);
        if((p_12 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(g_6, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__3))
    {
      s_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
      u_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_12, t_12);
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
        t = SSL_table_get(s_12, t_12);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = (ATerm) ATempty;
      }
    v_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_12, u_12);
    t = union_0_0(t);
    w_12 = t;
    t = SSL_table_put(s_12, t_12, w_12);
    t = (ATerm) ATmakeAppl(sym__3, s_12, t_12, u_12);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_12;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm z_12 = NULL,a_13 = NULL;
      if(match_cons(t, sym__2))
        {
          z_12 = ATgetArgument(t, 0);
          a_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, y_12, z_12, a_13);
      t = z_81(t);
      return(t);
    }
    t = map_1_0(h_6, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_13 (ATerm j_13, ATerm t)
  {
    t = SSL_fclose(j_13);
    return(t);
  }
  ATerm m_13 = NULL,n_13 = NULL;
  n_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_13 = ATgetArgument(t, 0);
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_13);
            ;
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            t = p_13(n_13, t);
          }
      }
    }
  else
    {
      t = p_13(n_13, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_13 = NULL;
  t = SSL_stdin_stream();
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_13 = NULL;
  t = SSL_stdout_stream();
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_13 = NULL;
  t = SSL_stderr_stream();
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_13);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_13;
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
        ATerm b_5 = NULL,e_5 = NULL;
        b_5 = t;
        t = SSL_explode_term(b_5);
        if(match_cons(t, sym__2))
          {
            ATerm m_28 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_28) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_28 = ATgetArgument(t, 1);
              if(((ATgetType(n_28) == AT_LIST) && !(ATisEmpty(n_28))))
                {
                  e_5 = ATgetFirst((ATermList) n_28);
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
        t = e_5;
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
              ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
              ATerm i_6 (ATerm t)
              {
                ATerm b_14 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    b_14 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_14;
                return(t);
              }
              t = _2_0(i_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_13 = ATgetArgument(t, 0);
                  z_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_13, z_13);
              a_14 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_14);
              ;
              LocalPopChoice(q_28);
            }
          else
            {
              t = p_28;
              {
                ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
                ATerm j_6 (ATerm t)
                {
                  ATerm f_14 = NULL;
                  f_14 = t;
                  t = SSL_is_string(f_14);
                  return(t);
                }
                t = _2_0(j_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_14 = ATgetArgument(t, 0);
                    d_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_14, d_14);
                e_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_14 = NULL;
      j_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_14, term_t_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm k_6 (ATerm t)
        {
          t = term_u_28;
          return(t);
        }
        t = debug_1_0(k_6, t);
        _fail(t);
      }
    }
  g_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_14);
  h_14 = t;
  t = g_14;
  t = fclose_0_0(t);
  t = h_14;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 = NULL;
      g_5 = t;
      t = SSL_access(g_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
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
                ATerm j_5 = NULL;
                j_5 = t;
                t = SSL_access(j_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_28;
              }
            {
              ATerm m_6 (ATerm t)
              {
                t = term_a_29;
                return(t);
              }
              t = debug_1_0(m_6, t);
            }
            ;
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            {
              ATerm q_6 (ATerm t)
              {
                t = term_b_29;
                return(t);
              }
              t = debug_1_0(q_6, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  {
    ATerm r_6 (ATerm t)
    {
      ATerm s_6 (ATerm t)
      {
        t = term_c_29;
        return(t);
      }
      t = debug_1_0(s_6, t);
      return(t);
    }
    t = if_verbose5_1_0(r_6, t);
    {
      ATerm d_29 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, m_14));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_29;
        }
      n_14 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, m_14));
      t = n_14;
      {
        ATerm t_6 (ATerm t)
        {
          ATerm u_6 (ATerm t)
          {
            t = term_e_29;
            return(t);
          }
          t = debug_1_0(u_6, t);
          return(t);
        }
        t = if_verbose4_1_0(t_6, t);
        t = read_repository_file_0_0(t);
        {
          ATerm w_6 (ATerm t)
          {
            ATerm x_6 (ATerm t)
            {
              t = term_f_29;
              return(t);
            }
            t = say_1_0(x_6, t);
            return(t);
          }
          t = if_verbose6_1_0(w_6, t);
          o_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_29, o_14);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm y_6 (ATerm t)
            {
              ATerm b_7 (ATerm t)
              {
                t = term_h_29;
                return(t);
              }
              t = say_1_0(b_7, t);
              return(t);
            }
            t = if_verbose6_1_0(y_6, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, m_14), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_g_29, (ATerm)ATmakeAppl(sym_Imported_1, m_14), (ATerm) ATempty);
            {
              ATerm d_7 (ATerm t)
              {
                ATerm e_7 (ATerm t)
                {
                  t = term_f_29;
                  return(t);
                }
                t = say_1_0(e_7, t);
                return(t);
              }
              t = if_verbose4_1_0(d_7, t);
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
  ATerm p_14 = NULL;
  ATerm f_7 (ATerm t)
  {
    ATerm g_7 (ATerm t)
    {
      t = term_n_29;
      return(t);
    }
    t = debug_1_0(g_7, t);
    return(t);
  }
  t = if_verbose5_1_0(f_7, t);
  p_14 = t;
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
    t = p_14;
    {
      ATerm h_7 (ATerm t)
      {
        ATerm i_7 (ATerm t)
        {
          t = term_q_29;
          return(t);
        }
        t = debug_1_0(i_7, t);
        return(t);
      }
      t = if_verbose5_1_0(h_7, t);
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
      ATerm j_7 (ATerm t)
      {
        ATerm k_7 (ATerm t)
        {
          t = term_t_29;
          return(t);
        }
        t = debug_1_0(k_7, t);
        return(t);
      }
      t = if_verbose5_1_0(j_7, t);
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
              ATerm t_5 = NULL,b_6 = NULL;
              t_5 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, t_5));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_29 = ATgetFirst((ATermList) t);
                  if(match_cons(w_29, sym__2))
                    {
                      ATerm y_29 = ATgetArgument(w_29, 0);
                      b_6 = ATgetArgument(w_29, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_29 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = b_6;
            }
          }
        {
          ATerm l_7 (ATerm t)
          {
            ATerm m_7 (ATerm t)
            {
              t = term_t_29;
              return(t);
            }
            t = debug_1_0(m_7, t);
            return(t);
          }
          t = if_verbose5_1_0(l_7, t);
        }
      }
      ;
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      {
        ATerm q_14 = NULL;
        q_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), q_14), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_30), q_14), term_z_29);
        {
          ATerm n_7 (ATerm t)
          {
            t = term_g_29;
            t = table_getlist_0_0(t);
            {
              ATerm o_7 (ATerm t)
              {
                t = term_b_30;
                return(t);
              }
              t = debug_1_0(o_7, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(n_7, t);
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
      ATerm p_7 (ATerm t)
      {
        ATerm t_14 = NULL;
        t_14 = t;
        if(match_string(t, "-I"))
          {
            t = t_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
              _fail(t);
            t = t_14;
          }
        return(t);
      }
      ATerm q_7 (ATerm t)
      {
        ATerm u_14 = NULL;
        u_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATempty, u_14));
        t = extend_config_0_0(t);
        t = u_14;
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        t = term_e_30;
        return(t);
      }
      t = ArgOption_3_0(p_7, q_7, s_7, t);
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
            ATerm t_7 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm v_7 (ATerm t)
            {
              ATerm v_14 = NULL;
              v_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue)), v_14);
              t = v_14;
              return(t);
            }
            ATerm w_7 (ATerm t)
            {
              t = term_h_30;
              return(t);
            }
            t = ArgOption_3_0(t_7, v_7, w_7, t);
            ;
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            {
              ATerm x_7 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm y_7 (ATerm t)
              {
                ATerm w_14 = NULL;
                w_14 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
                t = w_14;
                return(t);
              }
              ATerm z_7 (ATerm t)
              {
                t = term_i_30;
                return(t);
              }
              t = Option_3_0(x_7, y_7, z_7, t);
            }
          }
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
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
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_6 = NULL;
        t = k_15;
        t = k_0(t);
        v_6 = t;
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
          t = SSL_copy(l_15, v_6);
          t = (ATerm) ATmakeAppl(sym_FILE_1, l_15);
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
              ATerm z_6 = NULL;
              t = k_15;
              t = k_0(t);
              z_6 = t;
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
                                ATerm a_7 = NULL;
                                a_7 = t;
                                if((l_15 != t))
                                  {
                                    _fail(t);
                                  }
                                t = a_7;
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
                t = SSL_copy(l_15, z_6);
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_15);
              }
              ;
              LocalPopChoice(o_30);
            }
          else
            {
              t = n_30;
              t = k_15;
              t = k_0(t);
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
ATerm table_pop_0_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_7 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_30 = ATgetArgument(t, 0);
            ATerm x_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_15, s_15);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_30 = ATgetFirst((ATermList) t);
            c_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_7;
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        t = (ATerm) ATempty;
      }
    t_15 = t;
    t = SSL_table_put(r_15, s_15, t_15);
    t = (ATerm) ATmakeAppl(sym__2, r_15, s_15);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,e_16 = NULL;
  z_15 = t;
  t = l_80(t);
  a_16 = t;
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(a_16, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        e_16 = ATgetFirst((ATermList) t);
        b_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(a_16, (ATerm)ATmakeAppl(sym_Scopes_0), b_16);
    t = e_16;
    {
      ATerm a_8 (ATerm t)
      {
        ATerm g_16 = NULL;
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_16, g_16);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(a_8, t);
      t = z_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_81(t);
      t = h_81(t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = h_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  t = k_80(t);
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_16, term_d_31);
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
        t = SSL_table_get(m_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        t = (ATerm) ATempty;
      }
    n_16 = t;
    t = SSL_table_put(m_16, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(n_16), (ATerm) ATempty));
    t = l_16;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm s_16 = NULL;
  ATerm b_8 (ATerm t)
  {
    t = term_v_24;
    return(t);
  }
  t = begin_scope_1_0(b_8, t);
  {
    ATerm e_8 (ATerm t)
    {
      ATerm t_16 = NULL;
      t_16 = t;
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
            if(((s_16 != NULL) && (s_16 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              s_16 = ATgetFirst((ATermList) t);
            {
              ATerm k_31 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(s_16);
        {
          ATerm g_8 (ATerm t)
          {
            ATerm j_8 (ATerm t)
            {
              ATerm u_16 = NULL;
              u_16 = t;
              t = SSL_remove(u_16);
              return(t);
            }
            t = try_1_0(j_8, t);
            return(t);
          }
          t = map_1_0(g_8, t);
          t = t_16;
          {
            ATerm m_8 (ATerm t)
            {
              t = term_v_24;
              return(t);
            }
            t = end_scope_1_0(m_8, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(p_83, e_8, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_16 = NULL;
        t = term_x_24;
        t = get_config_0_0(t);
        v_16 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_16);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = term_n_31;
      }
    t = q_83(t);
    {
      ATerm p_8 (ATerm t)
      {
        ATerm o_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_24;
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
      t = copy_to_1_0(p_8, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(o_8, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm x_16 = NULL;
    x_16 = t;
    if(match_string(t, "-k"))
      {
        t = x_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = x_16;
      }
    return(t);
  }
  ATerm t_8 (ATerm t)
  {
    ATerm y_16 = NULL,z_16 = NULL;
    y_16 = t;
    t = SSL_string_to_int(y_16);
    z_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_16);
    t = y_16;
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    t = term_q_31;
    return(t);
  }
  t = ArgOption_3_0(s_8, t_8, u_8, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 (ATerm t)
      {
        ATerm b_17 = NULL;
        b_17 = t;
        if(match_string(t, "-S"))
          {
            t = b_17;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = b_17;
          }
        return(t);
      }
      ATerm w_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_u_31;
        return(t);
      }
      ATerm x_8 (ATerm t)
      {
        t = term_v_31;
        return(t);
      }
      t = Option_3_0(v_8, w_8, x_8, t);
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
            ATerm y_8 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_8 (ATerm t)
            {
              ATerm c_17 = NULL,d_17 = NULL;
              c_17 = t;
              t = SSL_string_to_int(c_17);
              d_17 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_17);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, c_17);
              return(t);
            }
            ATerm i_9 (ATerm t)
            {
              t = term_y_31;
              return(t);
            }
            t = ArgOption_3_0(y_8, z_8, i_9, t);
            ;
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            {
              ATerm j_9 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm l_9 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_z_31;
                return(t);
              }
              ATerm n_9 (ATerm t)
              {
                t = term_a_32;
                return(t);
              }
              t = Option_3_0(j_9, l_9, n_9, t);
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
  ATerm q_9 (ATerm t)
  {
    ATerm f_17 = NULL;
    f_17 = t;
    if(match_string(t, "-o"))
      {
        t = f_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_17;
      }
    return(t);
  }
  ATerm u_9 (ATerm t)
  {
    ATerm g_17 = NULL;
    g_17 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_17);
    t = (ATerm) ATmakeAppl(sym_Output_1, g_17);
    return(t);
  }
  ATerm w_9 (ATerm t)
  {
    t = term_d_32;
    return(t);
  }
  t = ArgOption_3_0(q_9, u_9, w_9, t);
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
        ATerm x_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_10 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_g_32;
          return(t);
        }
        ATerm g_10 (ATerm t)
        {
          t = term_h_32;
          return(t);
        }
        t = Option_3_0(x_9, f_10, g_10, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  j_17 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = j_17;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm s_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_17 = ATgetFirst((ATermList) t);
          l_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_17 = ATgetFirst((ATermList) t);
          n_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_17;
      t = h_0(t);
      t = m_17;
      t = i_0(t);
      s_17 = t;
      t = (ATerm) ATinsert(CheckATermList(n_17), s_17);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm u_10 (ATerm t)
  {
    ATerm w_17 = NULL;
    w_17 = t;
    if(match_string(t, "-i"))
      {
        t = w_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = w_17;
      }
    return(t);
  }
  ATerm v_10 (ATerm t)
  {
    ATerm x_17 = NULL;
    x_17 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), x_17);
    t = (ATerm) ATmakeAppl(sym_Input_1, x_17);
    return(t);
  }
  ATerm w_10 (ATerm t)
  {
    t = term_i_32;
    return(t);
  }
  t = ArgOption_3_0(u_10, v_10, w_10, t);
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
  ATerm y_17 = NULL,z_17 = NULL;
  y_17 = t;
  t = term_r_24;
  t = whoami_0_0(t);
  z_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), z_17), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = y_17;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_18 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_24;
  t = whoami_0_0(t);
  a_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), a_18));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_76(t);
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm e_18 = NULL,f_18 = NULL,i_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_18 = ATgetFirst((ATermList) t);
            f_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_18;
        t = foldr_2_0(n_76, o_76, t);
        i_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_18, i_18);
        t = o_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL;
  j_18 = t;
  t = SSL_explode_term(j_18);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_18;
  t = foldr_2_0(l_74, m_74, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_18 = NULL;
  t = times_0_0(t);
  {
    ATerm x_10 (ATerm t)
    {
      t = term_t_31;
      return(t);
    }
    ATerm z_10 (ATerm t)
    {
      ATerm m_18 = NULL,n_18 = NULL;
      if(match_cons(t, sym__2))
        {
          m_18 = ATgetArgument(t, 0);
          n_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(m_18, n_18);
            ;
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            t = SSL_addr(m_18, n_18);
          }
      }
      return(t);
    }
    t = crush_2_0(x_10, z_10, t);
    l_18 = t;
    t = SSL_TicksToSeconds(l_18);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_18;
        if((x_18 != t))
          {
            _fail(t);
          }
        t = w_18;
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        t = w_18;
        {
          ATerm v_32 = t;
          int w_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_18, y_18);
              ;
              LocalPopChoice(w_32);
            }
          else
            {
              t = v_32;
              t = SSL_gtr(x_18, y_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_18, y_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm c_11 (ATerm t)
  {
    ATerm b_19 = NULL,c_19 = NULL;
    b_19 = t;
    t = term_c_5;
    t = get_config_0_0(t);
    c_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_19, term_t_13);
    t = geq_0_0(t);
    t = b_19;
    t = l_81(t);
    return(t);
  }
  t = try_1_0(c_11, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm d_11 (ATerm t)
  {
    ATerm e_19 = NULL,f_19 = NULL;
    t = run_time_0_0(t);
    e_19 = t;
    t = term_r_24;
    t = whoami_0_0(t);
    f_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), e_19), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), f_19));
    t = (ATerm) ATmakeAppl(sym__2, term_t_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_32), e_19), term_s_14), f_19));
    return(t);
  }
  t = if_verbose1_1_0(d_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm r_85 (ATerm), ATerm t)
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
        ATerm e_11 (ATerm t)
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
        t = option_defined_1_0(e_11, t);
      }
    }
  t = r_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_19 = ATgetFirst((ATermList) t);
      j_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_19 = NULL,q_19 = NULL;
        t = j_19;
        t = g_0(t);
        p_19 = t;
        t = i_19;
        t = e_0(t);
        q_19 = t;
        t = j_19;
        {
          ATerm f_11 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(p_19), q_19);
            return(t);
          }
          t = reverse_acc_2_0(e_0, f_11, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_24;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm g_11 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, g_11, t);
  return(t);
}
ATerm Program_1_0 (ATerm t_62 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  u_19 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_19);
  r_19 = t;
  t = s_19;
  t = t_62(t);
  t_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, t_19), r_19);
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
        ATerm k_11 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(k_11, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_h_33;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm l_11 (ATerm t)
    {
      ATerm x_19 = NULL;
      x_19 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, x_19), term_i_33);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(l_11, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_62 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  j_20 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_20);
  g_20 = t;
  t = h_20;
  t = u_62(t);
  i_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, i_20), g_20);
  return(t);
}
ATerm fetch_1_0 (ATerm h_70 (ATerm), ATerm t)
{
  ATerm m_20 (ATerm t)
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_70, _id, t);
        ;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = Cons_2_0(_id, m_20, t);
      }
    return(t);
  }
  t = m_20(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  t = fetch_1_0(m_86, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_20;
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
            t = o_20;
          }
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = (ATerm) ATinsert(ATempty, o_20);
      }
    p_20 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), p_20);
    t = o_20;
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
        ATerm v_20 = NULL,w_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_20 = ATgetFirst((ATermList) t);
            w_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_20;
        {
          ATerm m_11 (ATerm t)
          {
            t = w_20;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_11, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  t = SSL_explode_term(a_21);
  if(match_cons(t, sym__2))
    {
      ATerm r_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_21;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_70 (ATerm), ATerm t)
{
  ATerm c_21 (ATerm t)
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_21, t);
        ;
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_70(t);
      }
    return(t);
  }
  t = c_21(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  if(match_cons(t, sym__2))
    {
      e_21 = ATgetArgument(t, 0);
      d_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_21;
  {
    ATerm n_11 (ATerm t)
    {
      t = d_21;
      return(t);
    }
    t = at_end_1_0(n_11, t);
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
ATerm _2_0 (ATerm c_56 (ATerm), ATerm d_56 (ATerm), ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,o_21 = NULL,p_21 = NULL;
  p_21 = t;
  if(match_cons(t, sym__2))
    {
      i_21 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_21);
  h_21 = t;
  t = i_21;
  t = c_56(t);
  k_21 = t;
  t = j_21;
  t = d_56(t);
  o_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_21, o_21), h_21);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm s_21 = NULL;
  ATerm o_11 (ATerm t)
  {
    ATerm t_21 = NULL;
    t_21 = t;
    t = SSL_explode_string(t_21);
    return(t);
  }
  ATerm p_11 (ATerm t)
  {
    ATerm u_21 = NULL;
    u_21 = t;
    t = SSL_explode_string(u_21);
    return(t);
  }
  t = _2_0(o_11, p_11, t);
  t = conc_0_0(t);
  s_21 = t;
  t = SSL_implode_string(s_21);
  return(t);
}
ATerm debug_1_0 (ATerm p_65 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  v_21 = t;
  t = p_65(t);
  w_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_21), w_21));
  t = v_21;
  return(t);
}
ATerm map_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm x_21 (ATerm t)
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
        t = Cons_2_0(w_69, x_21, t);
      }
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_22 = NULL;
      d_22 = t;
      t = SSL_is_string(d_22);
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
            ATerm r_11 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(r_11, t);
            ;
            LocalPopChoice(b_34);
          }
        else
          {
            t = a_34;
            {
              ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
              h_22 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_22 = ATgetArgument(t, 0);
                  t = i_22;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_22 = ATgetArgument(t, 0);
                      t = i_22;
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
                              ATerm s_11 (ATerm t)
                              {
                                t = term_e_34;
                                return(t);
                              }
                              t = debug_1_0(s_11, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm n_22 = NULL,o_22 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_22 = ATgetArgument(t, 0);
                          j_22 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_22;
                      t = eval_config_0_0(t);
                      n_22 = t;
                      t = j_22;
                      t = eval_config_0_0(t);
                      o_22 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_22, o_22);
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
  ATerm r_22 = NULL;
  r_22 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_22);
  {
    ATerm v_11 (ATerm t)
    {
      ATerm s_22 = NULL;
      t = eval_config_0_0(t);
      s_22 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_22, s_22);
      t = s_22;
      return(t);
    }
    t = try_1_0(v_11, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_80(t);
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
      ATerm w_11 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm x_11 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_k_34;
        return(t);
      }
      ATerm y_11 (ATerm t)
      {
        t = term_l_34;
        return(t);
      }
      t = Option_3_0(w_11, x_11, y_11, t);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      {
        ATerm b_12 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_12 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_34;
          return(t);
        }
        ATerm g_12 (ATerm t)
        {
          t = term_n_34;
          return(t);
        }
        t = Option_3_0(b_12, f_12, g_12, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  if(match_cons(t, sym__3))
    {
      v_22 = ATgetArgument(t, 0);
      w_22 = ATgetArgument(t, 1);
      x_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_22, w_22);
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
        t = SSL_table_get(v_22, w_22);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = (ATerm) ATempty;
      }
    y_22 = t;
    t = SSL_table_put(v_22, w_22, (ATerm) ATinsert(CheckATermList(y_22), x_22));
    t = (ATerm) ATmakeAppl(sym__3, v_22, w_22, x_22);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm d_23 = NULL;
  t = term_r_24;
  t = r_87(t);
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_34, term_t_34, d_23);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
  f_23 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = f_23;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm k_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_23 = ATgetFirst((ATermList) t);
          h_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_23;
      t = a_0(t);
      t = term_r_24;
      t = c_0(t);
      k_23 = t;
      t = (ATerm) ATinsert(CheckATermList(h_23), k_23);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm m_23 = NULL;
    m_23 = t;
    if(match_string(t, "--help"))
      {
        t = m_23;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = m_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = m_23;
          }
      }
    return(t);
  }
  ATerm i_12 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_u_34;
    return(t);
  }
  ATerm q_12 (ATerm t)
  {
    t = term_v_34;
    return(t);
  }
  t = Option_3_0(h_12, i_12, q_12, t);
  return(t);
}
ATerm Cons_2_0 (ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  s_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_23 = ATgetFirst((ATermList) t);
      p_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_23);
  n_23 = t;
  t = o_23;
  t = l_57(t);
  q_23 = t;
  t = p_23;
  t = m_57(t);
  r_23 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(r_23), q_23), n_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_87 (ATerm), ATerm t)
{
  ATerm y_23 = NULL;
  y_23 = t;
  {
    ATerm r_12 (ATerm t)
    {
      t = term_w_34;
      t = p_87(t);
      return(t);
    }
    t = try_1_0(r_12, t);
    t = y_23;
    {
      ATerm b_13 (ATerm t)
      {
        ATerm z_23 = NULL;
        z_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_23);
        t = (ATerm) ATmakeAppl(sym_Program_1, z_23);
        return(t);
      }
      ATerm c_13 (ATerm t)
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
                t = p_87(t);
                t = Cons_2_0(_id, c_13, t);
              }
            ;
            LocalPopChoice(y_34);
          }
        else
          {
            t = x_34;
            {
              ATerm b_24 = NULL,c_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_24 = ATgetFirst((ATermList) t);
                  c_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_24), (ATerm) ATmakeAppl(sym_Undefined_1, b_24));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_13, c_13, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  i_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = i_24;
  {
    ATerm d_13 (ATerm t)
    {
      ATerm b_35 = t;
      int c_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_87(t);
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
    t = parse_options_p__1_0(d_13, t);
    {
      ATerm e_13 (ATerm t)
      {
        ATerm f_35 = t;
        int g_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_24 = NULL;
            p_24 = t;
            {
              ATerm h_35 = t;
              int i_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_24;
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
                          ATerm f_13 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(f_13, t);
                        }
                      }
                    t = p_24;
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
                  t = p_24;
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
              ATerm g_13 (ATerm t)
              {
                ATerm h_13 (ATerm t)
                {
                  if(((j_24 != NULL) && (j_24 != t)))
                    _fail(t);
                  else
                    j_24 = t;
                  return(t);
                }
                t = Undefined_1_0(h_13, t);
                return(t);
              }
              t = option_defined_1_0(g_13, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_24)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_t_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_24)), term_l_35));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(e_13, t);
      k_24 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = k_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t)
{
  ATerm k_16 = NULL;
  t = parse_options_1_0(t_85, t);
  k_16 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_16);
  t = k_16;
  t = v_85(t);
  {
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_85, t);
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
              t = w_85(t);
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
ATerm option_wrap_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(x_85, default_usage_0_0, _id, y_85, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm t)
{
  ATerm i_13 (ATerm t)
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_83(t);
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
  ATerm k_13 (ATerm t)
  {
    t = xtc_io_1_0(v_83, t);
    return(t);
  }
  t = option_wrap_2_0(i_13, k_13, t);
  return(t);
}
ATerm xtc_iowrap_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(a_84, b_84, t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  ATerm l_13 (ATerm t)
  {
    ATerm s_24 = NULL,t_24 = NULL;
    s_24 = t;
    t = term_s_35;
    t = xtc_find_path_0_0(t);
    t_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, t_24), term_t_35));
    t = extend_config_0_0(t);
    t = s_24;
    t = parse_module_0_0(t);
    return(t);
  }
  t = xtc_iowrap_2_0(parse_stratego_options_0_0, l_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
