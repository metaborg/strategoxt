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
ATerm term_s_43;
ATerm term_r_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_x_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_z_37;
ATerm term_v_37;
ATerm term_o_37;
ATerm term_r_36;
ATerm term_u_35;
ATerm term_q_35;
ATerm term_l_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_c_35;
ATerm term_w_34;
ATerm term_o_34;
ATerm term_l_34;
ATerm term_f_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_v_30;
ATerm term_k_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_t_29;
ATerm term_p_29;
ATerm term_d_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_t_28;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_z_27;
ATerm term_o_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_t_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_o_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_l_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_o_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_t_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_5;
void init_constant_terms (void)
{
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_q_12, term_s_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_y_13, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_f_14, term_l_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_v_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_e_15, term_f_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_h_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_n_16, term_o_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_i_17, term_o_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_x_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_b_18, term_c_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_m_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_u_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_z_18, term_i_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_o_19, term_p_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_19, term_u_19, term_v_19);
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
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_20, term_c_20, term_e_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_20, term_h_20, term_k_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_r_20, term_u_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_20, term_g_21, term_h_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_a_22, term_b_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_22, term_k_22, term_l_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_22, term_r_22, term_s_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_22, term_a_23, term_b_23);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_23, term_e_23, term_f_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_33);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym__3, term_v_30, term_h_38, term_c_25);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm p_0 (ATerm f_72 (ATerm), ATerm g_1, ATerm i_1, ATerm);
ATerm s_2 (ATerm);
ATerm r_0 (ATerm k_1, ATerm);
ATerm xtc_transform_term_2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm s_0 (ATerm v_3, ATerm);
ATerm t_0 (ATerm z_3, ATerm);
ATerm fork_0_0 (ATerm);
ATerm x_0 (ATerm u_70 (ATerm), ATerm t_4, ATerm);
ATerm y_0 (ATerm g_90 (ATerm), ATerm y_4, ATerm);
ATerm at_end_1_0 (ATerm o_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm r_6 (ATerm g_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm z_0 (ATerm r_86 (ATerm), ATerm s_6, ATerm t_6, ATerm);
ATerm d_8 (ATerm m_7, ATerm);
ATerm f_8 (ATerm r_7, ATerm s_7, ATerm t_7, ATerm);
ATerm c_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm h_1 (ATerm e_10, ATerm);
ATerm if_verbose5_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm p_1 (ATerm q_10, ATerm);
ATerm q_1 (ATerm w_10, ATerm x_10, ATerm);
ATerm if_verbose4_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm r_1 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_11, ATerm i_11, ATerm);
ATerm t_1 (ATerm c_80 (ATerm), ATerm k_11, ATerm l_11, ATerm);
ATerm k_3 (ATerm);
ATerm u_1 (ATerm p_11, ATerm q_11, ATerm r_11, ATerm);
ATerm v_1 (ATerm c_88 (ATerm), ATerm l_12, ATerm k_12, ATerm);
ATerm h_13 (ATerm b_13, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm w_1 (ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm r_13, ATerm m_13, ATerm n_13, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm a_4 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm y_1 (ATerm h_15, ATerm);
ATerm filter_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm n_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm w_4 (ATerm);
ATerm c_5 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm z_1 (ATerm d_72 (ATerm), ATerm j_17, ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm a_2 (ATerm a_19, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm b_2 (ATerm s_20, ATerm w_20, ATerm);
ATerm c_2 (ATerm o_86 (ATerm), ATerm m_21, ATerm);
ATerm restore_always_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm);
ATerm d_2 (ATerm n_86 (ATerm), ATerm d_22, ATerm);
ATerm o_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm xtc_io_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm k_2 (ATerm j_23, ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm h_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm f_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_2 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm r_24, ATerm);
ATerm i_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm m_2 (ATerm h_25, ATerm i_25, ATerm j_25, ATerm);
ATerm n_2 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm b_26, ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm z_7 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm o_8 (ATerm);
ATerm s_8 (ATerm);
ATerm pp_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_8 (ATerm);
ATerm w_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_8 (ATerm);
ATerm need_help_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm q_2 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm z_29, ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm t_2 (ATerm c_31, ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm);
ATerm u_2 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm j_32, ATerm b_32, ATerm c_32, ATerm);
ATerm l_9 (ATerm);
ATerm v_2 (ATerm s_93 (ATerm), ATerm n_32, ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm w_2 (ATerm r_93 (ATerm), ATerm b_33, ATerm);
ATerm option_wrap_4_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm);
ATerm w_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm f_10 (ATerm);
ATerm m_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm s_10 (ATerm);
ATerm c_11 (ATerm);
ATerm f_11 (ATerm);
ATerm s_11 (ATerm);
ATerm u_11 (ATerm);
ATerm y_11 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm d_12 (ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm o_12 (ATerm);
ATerm pp_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,n_0 = NULL,o_0 = NULL,q_0 = NULL;
  t = term_p_5;
  {
    ATerm n_8 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL;
        e_3 = t;
        t = a_2(e_3, t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = n_8;
        t = term_q_12;
      }
    c_0 = t;
    e_0 = t;
    t = term_q_12;
    n_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_0, term_q_12);
    {
      ATerm r_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(e_0, n_0);
          ;
          LocalPopChoice(s_12);
        }
      else
        {
          t = r_12;
          t = SSL_subtr(e_0, n_0);
        }
      q_0 = t;
      t = SSL_int_to_string(q_0);
      o_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, o_0), term_p_5);
    }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  c_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_t_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm o_3 = NULL,q_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          d_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_1;
      o_3 = t;
      t = (ATerm) ATinsert(ATempty, term_u_12);
      q_3 = t;
      t = SSL_access(o_3, q_3);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm p_0 (ATerm f_72 (ATerm), ATerm g_1, ATerm i_1, ATerm t)
{
  ATerm j_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_1, term_v_12);
  t = open_stream_0_0(t);
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_1, i_1);
  t = f_72(t);
  t = fclose_0_0(t);
  t = i_1;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm d_4 = NULL,g_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      if(match_cons(w_12, sym_Stream_1))
        {
          d_4 = ATgetArgument(w_12, 0);
        }
      else
        _fail(t);
      g_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(d_4, g_4);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_4);
  return(t);
}
ATerm r_0 (ATerm k_1, ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,x_3 = NULL,y_3 = NULL;
  t = xtc_new_file_0_0(t);
  l_1 = t;
  x_3 = t;
  t = k_1;
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_1, k_1);
  t = p_0(s_2, x_3, y_3, t);
  t = l_1;
  m_1 = t;
  t = SSL_close_file(m_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  t = r_0(p_4, t);
  t = xtc_transform_file_2_0(p_90, q_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm j_3 = NULL,l_3 = NULL,n_3 = NULL,p_3 = NULL;
  j_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      l_3 = ATgetArgument(t, 0);
      {
        ATerm u_4 = NULL,a_5 = NULL,b_5 = NULL;
        t = l_3;
        a_5 = t;
        t = SSL_int_to_string(a_5);
        u_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_12), u_4), term_x_12);
        b_5 = t;
        t = SSL_concat_strings(b_5);
      }
    }
  else
    {
      ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          l_3 = ATgetArgument(t, 0);
          n_3 = ATgetArgument(t, 1);
          p_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_3;
      v_5 = t;
      t = SSL_int_to_string(v_5);
      u_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_3), term_a_13), u_5), term_z_12), l_3);
      w_5 = t;
      t = SSL_concat_strings(w_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm u_3 = NULL;
  ATerm x_2 (ATerm t)
  {
    t = k_76(t);
    if(((u_3 != NULL) && (u_3 != t)))
      _fail(t);
    else
      u_3 = t;
    return(t);
  }
  t = fetch_1_0(x_2, t);
  t = not_null(u_3);
  return(t);
}
ATerm s_0 (ATerm v_3, ATerm t)
{
  ATerm g_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), term_c_23), term_t_22), term_o_22), term_c_22), term_l_21), term_v_20), term_p_20), term_f_20), term_a_20), term_w_19), term_s_19), term_k_19), term_v_18), term_r_18), term_h_18), term_d_18), term_y_17), term_t_17), term_e_17), term_a_17), term_p_16), term_i_16), term_t_15), term_w_14), term_p_14), term_c_14), term_v_13);
      {
        ATerm y_2 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_23 = ATgetArgument(t, 0);
              if((v_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm o_23 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_elem_1_0(y_2, t);
      }
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = g_13;
      t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, v_3);
    }
  return(t);
}
ATerm t_0 (ATerm z_3, ATerm t)
{
  ATerm p_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 = NULL,f_6 = NULL,m_6 = NULL,n_6 = NULL,c_7 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm t_23 = ATgetArgument(t, 0);
          m_4 = ATgetArgument(t, 1);
          {
            ATerm u_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = m_4;
      {
        ATerm v_23 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_23;
          }
        c_7 = t;
        t = s_0(c_7, t);
        t = signal_to_descr_0_0(t);
        f_6 = t;
        t = term_w_23;
        m_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, f_6), term_x_23);
        n_6 = t;
        t = SSL_printnl(m_6, n_6);
        t = (ATerm) ATmakeAppl(sym__2, term_w_23, (ATerm) ATinsert(ATinsert(ATempty, f_6), term_x_23));
      }
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = p_23;
    }
  t = z_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm x_0 (ATerm u_70 (ATerm), ATerm t_4, ATerm t)
{
  ATerm v_4 = NULL;
  t = fork_0_0(t);
  v_4 = t;
  {
    ATerm y_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = t_4;
        t = u_70(t);
        ;
        LocalPopChoice(a_24);
      }
    else
      {
        t = y_23;
        {
          ATerm x_4 = NULL,g_7 = NULL;
          t = v_4;
          x_4 = t;
          t = SSL_waitpid(x_4);
          g_7 = t;
          t = t_0(g_7, t);
          if(match_cons(t, sym_WaitStatus_3))
            {
              ATerm b_24 = ATgetArgument(t, 0);
              if(((ATgetType(b_24) != AT_INT) || (ATgetInt((ATermInt) b_24) != 0)))
                _fail(t);
              {
                ATerm d_24 = ATgetArgument(t, 1);
              }
              {
                ATerm e_24 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = t_4;
        }
      }
  }
  return(t);
}
ATerm y_0 (ATerm g_90 (ATerm), ATerm y_4, ATerm t)
{
  ATerm z_4 = NULL,h_7 = NULL;
  t = g_90(t);
  t = xtc_find_0_0(t);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_4, y_4);
  h_7 = t;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm j_7 = NULL,k_7 = NULL;
      t = z_4;
      j_7 = t;
      t = y_4;
      k_7 = t;
      t = SSL_execvp(j_7, k_7);
      return(t);
    }
    t = x_0(z_2, h_7, t);
    t = y_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm o_76 (ATerm), ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_7 = NULL,n_7 = NULL,p_7 = NULL;
        l_7 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_7 = ATgetFirst((ATermList) t);
            p_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_2(_id, q_5, l_7, n_7, p_7, t);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_76(t);
      }
    return(t);
  }
  t = q_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm i_5 = NULL,k_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_5 = ATgetFirst((ATermList) t);
            k_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_5;
        {
          ATerm a_3 (ATerm t)
          {
            t = k_5;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_3, t);
        }
      }
    }
  return(t);
}
ATerm r_6 (ATerm g_6, ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL;
  t = g_6;
  i_6 = t;
  t = SSL_explode_term(i_6);
  if(match_cons(t, sym__2))
    {
      ATerm j_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,o_6 = NULL;
  o_6 = t;
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 (ATerm t)
            {
              t = l_6;
              return(t);
            }
            t = k_6;
            t = at_end_1_0(b_3, t);
            ;
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            t = r_6(o_6, t);
          }
      }
    }
  else
    {
      t = r_6(o_6, t);
    }
  return(t);
}
ATerm z_0 (ATerm r_86 (ATerm), ATerm s_6, ATerm t_6, ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,e_8 = NULL,g_8 = NULL,p_8 = NULL;
  t = r_86(t);
  u_6 = t;
  e_8 = t;
  t = s_6;
  g_8 = t;
  t = t_6;
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_6, s_6, t_6);
  t = m_2(e_8, g_8, p_8, t);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = NULL,e_7 = NULL;
        t = u_6;
        d_7 = t;
        t = term_o_24;
        e_7 = t;
        t = SSL_table_get(d_7, e_7);
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_6 = ATgetFirst((ATermList) t);
        w_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = u_6;
    x_6 = t;
    t = term_o_24;
    y_6 = t;
    t = (ATerm) ATinsert(CheckATermList(w_6), (ATerm) ATinsert(CheckATermList(v_6), s_6));
    z_6 = t;
    t = SSL_table_put(x_6, y_6, z_6);
    t = (ATerm) ATmakeAppl(sym__2, s_6, t_6);
  }
  return(t);
}
ATerm d_8 (ATerm m_7, ATerm t)
{
  ATerm q_8 = NULL;
  t = m_7;
  {
    ATerm p_24 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_24 = ATgetArgument(t, 0);
            ATerm w_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_24;
      }
    t = term_y_24;
    q_8 = t;
    t = z_1(c_3, q_8, t);
    t = (ATerm) ATmakeAppl(sym__2, m_7, term_v_12);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm f_8 (ATerm r_7, ATerm s_7, ATerm t_7, ATerm t)
{
  ATerm u_7 = NULL,x_7 = NULL;
  t = r_7;
  u_7 = t;
  t = s_7;
  x_7 = t;
  t = SSL_open_file(u_7, x_7);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  a_8 = t;
  if(match_cons(t, sym__2))
    {
      b_8 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_8(a_8, t);
            ;
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            t = f_8(b_8, c_8, a_8, t);
          }
      }
    }
  else
    {
      t = d_8(a_8, t);
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
  ATerm h_8 = NULL,i_8 = NULL;
  t = term_c_25;
  t = new_0_0(t);
  h_8 = t;
  t = term_d_25;
  i_8 = t;
  t = SSL_strcat(h_8, i_8);
  {
    ATerm e_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_8 = NULL,u_8 = NULL,v_8 = NULL;
        m_8 = t;
        u_8 = t;
        t = (ATerm) ATinsert(ATempty, term_u_12);
        v_8 = t;
        t = SSL_access(u_8, v_8);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = e_25;
      }
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_8 = NULL,a_9 = NULL,b_9 = NULL;
  t = new_file_0_0(t);
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_8, term_v_12);
  t = open_file_0_0(t);
  t = r_8;
  a_9 = t;
  t = term_c_25;
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_8, term_c_25);
  t = z_0(d_3, a_9, b_9, t);
  t = r_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL;
  m_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_9 = NULL,x_9 = NULL,a_10 = NULL,d_10 = NULL;
      t = m_9;
      t = xtc_new_file_0_0(t);
      v_9 = t;
      t = m_0(t);
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_9, (ATerm) ATinsert(ATinsert(ATempty, v_9), term_o_25));
      t = conc_0_0(t);
      d_10 = t;
      t = y_0(l_0, d_10, t);
      t = v_9;
      a_10 = t;
      t = SSL_close_file(a_10);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_9);
    }
  else
    {
      ATerm t_10 = NULL,n_11 = NULL,o_11 = NULL,w_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_9;
      t = xtc_new_file_0_0(t);
      t_10 = t;
      t = m_0(t);
      n_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_10), term_o_25), n_9), term_p_25));
      t = conc_0_0(t);
      w_11 = t;
      t = y_0(l_0, w_11, t);
      t = t_10;
      o_11 = t;
      t = SSL_close_file(o_11);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_10);
    }
  return(t);
}
ATerm h_1 (ATerm e_10, ATerm t)
{
  ATerm g_10 = NULL;
  g_10 = t;
  t = SSL_table_keys(g_10);
  {
    ATerm f_3 (ATerm t)
    {
      ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
      h_10 = t;
      t = e_10;
      j_10 = t;
      t = h_10;
      k_10 = t;
      t = SSL_table_get(j_10, k_10);
      i_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_10, i_10);
      return(t);
    }
    t = map_1_0(f_3, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_10 = NULL,n_10 = NULL,c_13 = NULL;
      l_10 = t;
      t = term_p_5;
      c_13 = t;
      t = a_2(c_13, t);
      n_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_10, term_k_22);
      t = geq_0_0(t);
      t = l_10;
      t = z_87(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
    }
  return(t);
}
ATerm p_1 (ATerm q_10, ATerm t)
{
  ATerm r_10 = NULL,u_10 = NULL,v_10 = NULL;
  t = term_t_25;
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, q_10);
  v_10 = t;
  t = SSL_table_get(u_10, v_10);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_25 = ATgetFirst((ATermList) t);
      if(match_cons(u_25, sym__2))
        {
          ATerm w_25 = ATgetArgument(u_25, 0);
          r_10 = ATgetArgument(u_25, 1);
        }
      else
        _fail(t);
      {
        ATerm v_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_10;
  return(t);
}
ATerm q_1 (ATerm w_10, ATerm x_10, ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
  t = term_t_25;
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, w_10);
  a_11 = t;
  t = SSL_table_get(z_10, a_11);
  {
    ATerm g_3 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((x_10 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((y_10 != NULL) && (y_10 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(g_3, t);
    t = not_null(y_10);
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_11 = NULL,d_11 = NULL,k_13 = NULL;
      b_11 = t;
      t = term_p_5;
      k_13 = t;
      t = a_2(k_13, t);
      d_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_11, term_b_18);
      t = geq_0_0(t);
      t = b_11;
      t = y_87(t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11 = NULL,g_11 = NULL,o_13 = NULL;
      e_11 = t;
      t = term_p_5;
      o_13 = t;
      t = a_2(o_13, t);
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_11, term_s_14);
      t = geq_0_0(t);
      t = e_11;
      t = a_88(t);
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
    }
  return(t);
}
ATerm r_1 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_11, ATerm i_11, ATerm t)
{
  t = g_80(t);
  {
    ATerm h_3 (ATerm t)
    {
      ATerm j_11 = NULL;
      j_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_11, j_11);
      t = f_80(t);
      return(t);
    }
    t = fetch_1_0(h_3, t);
    t = i_11;
  }
  return(t);
}
ATerm t_1 (ATerm c_80 (ATerm), ATerm k_11, ATerm l_11, ATerm t)
{
  t = k_11;
  {
    ATerm m_11 (ATerm t)
    {
      ATerm h_26 = t;
      int i_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_11;
          ;
          LocalPopChoice(i_26);
        }
      else
        {
          t = h_26;
          {
            ATerm j_26 = t;
            int l_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_13 = NULL,u_13 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_13 = ATgetFirst((ATermList) t);
                    u_13 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                {
                  ATerm i_3 (ATerm t)
                  {
                    t = l_11;
                    return(t);
                  }
                  t = r_1(c_80, i_3, t_13, u_13, t);
                  t = m_11(t);
                }
                ;
                LocalPopChoice(l_26);
              }
            else
              {
                t = j_26;
                {
                  ATerm e_14 = NULL,j_14 = NULL,k_14 = NULL;
                  e_14 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_14 = ATgetFirst((ATermList) t);
                      k_14 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = u_2(_id, m_11, e_14, j_14, k_14, t);
                }
              }
          }
        }
      return(t);
    }
    t = m_11(t);
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      e_16 = ATgetArgument(t, 0);
      if((e_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_1 (ATerm p_11, ATerm q_11, ATerm r_11, ATerm t)
{
  ATerm t_11 = NULL,v_11 = NULL,x_11 = NULL,z_11 = NULL,a_12 = NULL,q_15 = NULL,r_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_11, q_11);
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_15 = NULL,d_15 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_26 = ATgetArgument(t, 0);
            ATerm p_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_11;
        c_15 = t;
        t = q_11;
        d_15 = t;
        t = SSL_table_get(c_15, d_15);
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        t = (ATerm) ATempty;
      }
    t_11 = t;
    q_15 = t;
    t = r_11;
    r_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_11, r_11);
    t = t_1(k_3, q_15, r_15, t);
    v_11 = t;
    t = p_11;
    x_11 = t;
    t = q_11;
    z_11 = t;
    t = v_11;
    a_12 = t;
    t = SSL_table_put(x_11, z_11, a_12);
    t = (ATerm) ATmakeAppl(sym__3, p_11, q_11, r_11);
  }
  return(t);
}
ATerm v_1 (ATerm c_88 (ATerm), ATerm l_12, ATerm k_12, ATerm t)
{
  t = k_12;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm m_12 = NULL,n_12 = NULL;
      if(match_cons(t, sym__2))
        {
          m_12 = ATgetArgument(t, 0);
          n_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, l_12, m_12, n_12);
      t = c_88(t);
      return(t);
    }
    t = map_1_0(m_3, t);
  }
  return(t);
}
ATerm h_13 (ATerm b_13, ATerm t)
{
  ATerm d_13 = NULL;
  t = b_13;
  d_13 = t;
  t = SSL_fclose(d_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL;
  f_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_13 = ATgetArgument(t, 0);
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_16 = NULL;
            t = e_13;
            m_16 = t;
            t = SSL_fclose(m_16);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            t = h_13(f_13, t);
          }
      }
    }
  else
    {
      t = h_13(f_13, t);
    }
  return(t);
}
ATerm w_1 (ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm r_13, ATerm m_13, ATerm n_13, ATerm t)
{
  ATerm i_13 = NULL,p_13 = NULL,q_13 = NULL,u_0 = NULL,v_0 = NULL;
  t = SSLgetAnnotations(r_13);
  i_13 = t;
  t = m_13;
  t = b_59(t);
  p_13 = t;
  t = n_13;
  t = c_59(t);
  q_13 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_13, q_13);
  u_0 = t;
  t = SSLsetAnnotations(u_0, i_13);
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
  ATerm z_13 = NULL;
  t = SSL_stdout_stream();
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  t = SSL_stderr_stream();
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_14);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm z_17 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_17;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  t = SSL_is_string(w_18);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      ATerm t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_17 = NULL,k_17 = NULL,n_17 = NULL;
        h_17 = t;
        k_17 = t;
        t = SSL_explode_term(k_17);
        if(match_cons(t, sym__2))
          {
            ATerm w_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_26) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_26 = ATgetArgument(t, 1);
              if(((ATgetType(x_26) == AT_LIST) && !(ATisEmpty(x_26))))
                {
                  n_17 = ATgetFirst((ATermList) x_26);
                  {
                    ATerm y_26 = (ATerm) ATgetNext((ATermList) x_26);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_17;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_17;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_17;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_17;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        {
          ATerm b_27 = t;
          int c_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
              q_17 = t;
              if(match_cons(t, sym__2))
                {
                  r_17 = ATgetArgument(t, 0);
                  s_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_1(r_3, _id, q_17, r_17, s_17, t);
              if(match_cons(t, sym__2))
                {
                  g_14 = ATgetArgument(t, 0);
                  h_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(g_14, h_14);
              i_14 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, i_14);
              ;
              LocalPopChoice(c_27);
            }
          else
            {
              t = b_27;
              {
                ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,k_18 = NULL,l_18 = NULL,o_18 = NULL;
                k_18 = t;
                if(match_cons(t, sym__2))
                  {
                    l_18 = ATgetArgument(t, 0);
                    o_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_1(s_3, _id, k_18, l_18, o_18, t);
                if(match_cons(t, sym__2))
                  {
                    m_14 = ATgetArgument(t, 0);
                    n_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(m_14, n_14);
                o_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, o_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_14 = NULL,t_14 = NULL,u_14 = NULL;
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_14 = NULL;
      x_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_14, term_g_27);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm x_18 = NULL;
        x_18 = t;
        t = z_1(t_3, x_18, t);
        _fail(t);
      }
    }
  q_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_14);
  t_14 = t;
  t = q_14;
  t = fclose_0_0(t);
  t = t_14;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm j_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_14 = NULL,a_15 = NULL;
      z_14 = t;
      t = (ATerm) ATinsert(ATempty, term_o_27);
      a_15 = t;
      t = SSL_access(z_14, a_15);
      LocalPopChoice(n_27);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_27;
      {
        ATerm r_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_19 = NULL;
            ATerm w_27 = t;
            if((PushChoice() == 0))
              {
                ATerm b_15 = NULL,g_15 = NULL;
                b_15 = t;
                t = (ATerm) ATinsert(ATempty, term_u_12);
                g_15 = t;
                t = SSL_access(b_15, g_15);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_27;
              }
            h_19 = t;
            t = z_1(w_3, h_19, t);
            ;
            LocalPopChoice(u_27);
          }
        else
          {
            t = r_27;
            {
              ATerm j_19 = NULL;
              j_19 = t;
              t = z_1(a_4, j_19, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm l_19 = NULL;
  l_19 = t;
  t = z_1(c_4, l_19, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  t = z_1(f_4, n_19, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  t = term_w_23;
  w_15 = t;
  t = (ATerm) ATinsert(ATempty, term_c_28);
  x_15 = t;
  t = SSL_printnl(w_15, x_15);
  t = v_15;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm d_20 = NULL,i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__3))
    {
      d_20 = ATgetArgument(t, 0);
      i_20 = ATgetArgument(t, 1);
      j_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_1(d_20, i_20, j_20, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
  y_15 = t;
  t = term_w_23;
  z_15 = t;
  t = (ATerm) ATinsert(ATempty, term_d_28);
  a_16 = t;
  t = SSL_printnl(z_15, a_16);
  t = y_15;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  b_16 = t;
  t = term_w_23;
  c_16 = t;
  t = (ATerm) ATinsert(ATempty, term_c_28);
  d_16 = t;
  t = SSL_printnl(c_16, d_16);
  t = b_16;
  return(t);
}
ATerm y_1 (ATerm h_15, ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_19 = NULL,r_19 = NULL;
  t = if_verbose5_1_0(b_4, t);
  {
    ATerm e_28 = t;
    if((PushChoice() == 0))
      {
        ATerm s_15 = NULL,u_15 = NULL;
        t = term_t_25;
        s_15 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, h_15);
        u_15 = t;
        t = SSL_table_get(s_15, u_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_28;
      }
    i_15 = t;
    t = term_t_25;
    j_15 = t;
    t = term_f_28;
    k_15 = t;
    t = (ATerm) ATinsert(ATempty, h_15);
    l_15 = t;
    t = SSL_table_put(j_15, k_15, l_15);
    t = i_15;
    t = if_verbose4_1_0(e_4, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(i_4, t);
    m_15 = t;
    t = term_t_25;
    q_19 = t;
    t = m_15;
    r_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_25, m_15);
    t = v_1(j_4, q_19, r_19, t);
    t = if_verbose6_1_0(k_4, t);
    t = term_t_25;
    n_15 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, h_15);
    o_15 = t;
    t = (ATerm) ATempty;
    p_15 = t;
    t = SSL_table_put(n_15, o_15, p_15);
    t = (ATerm) ATmakeAppl(sym__3, term_t_25, (ATerm)ATmakeAppl(sym_Imported_1, h_15), (ATerm) ATempty);
    t = if_verbose4_1_0(l_4, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm t_83 (ATerm), ATerm t)
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
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_20 = NULL,n_20 = NULL,t_20 = NULL;
            m_20 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_20 = ATgetFirst((ATermList) t);
                t_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm n_4 (ATerm t)
              {
                t = filter_1_0(t_83, t);
                return(t);
              }
              t = u_2(t_83, n_4, m_20, n_20, t_20, t);
            }
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm j_16 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_28 = ATgetFirst((ATermList) t);
                  j_16 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_16;
              t = filter_1_0(t_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm l_16 (ATerm t)
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_85(t);
        t = l_16(t);
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
      }
    return(t);
  }
  t = l_16(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_20 = NULL;
      t = term_t_28;
      z_20 = t;
      t = a_2(z_20, t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_16 = NULL;
            t = term_w_28;
            q_16 = t;
            t = SSL_getenv(q_16);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm f_21 = NULL;
  f_21 = t;
  t = z_1(q_4, f_21, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL;
  t = term_t_25;
  v_16 = t;
  t = term_y_28;
  w_16 = t;
  t = SSL_table_get(v_16, w_16);
  t = filter_1_0(s_4, t);
  {
    ATerm c_29 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_29;
      }
  }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  t = y_1(o_21, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm q_21 = NULL;
  q_21 = t;
  t = z_1(c_5, q_21, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_16 = NULL;
  t = if_verbose5_1_0(o_4, t);
  r_16 = t;
  {
    ATerm f_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_16 = NULL,t_16 = NULL;
        t = term_t_25;
        s_16 = t;
        t = term_f_28;
        t_16 = t;
        t = SSL_table_get(s_16, t_16);
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = f_29;
        {
          ATerm u_16 = NULL,k_21 = NULL;
          t = xtc_location_0_0(t);
          k_21 = t;
          t = y_1(k_21, t);
          u_16 = t;
          t = repeat_1_0(r_4, t);
          t = u_16;
        }
      }
    t = r_16;
    t = if_verbose5_1_0(w_4, t);
  }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm z_21 = NULL;
  z_21 = t;
  t = z_1(e_5, z_21, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm v_22 = NULL;
  v_22 = t;
  t = z_1(g_5, v_22, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm q_24 = NULL,c_24 = NULL;
  t = term_t_25;
  c_24 = t;
  t = h_1(c_24, t);
  q_24 = t;
  t = z_1(j_5, q_24, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(d_5, t);
      t = xtc_load_0_0(t);
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_22 = NULL,n_22 = NULL;
            if(match_cons(t, sym__2))
              {
                m_22 = ATgetArgument(t, 0);
                n_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_1(m_22, n_22, t);
            ;
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
            {
              ATerm q_22 = NULL;
              q_22 = t;
              t = p_1(q_22, t);
            }
          }
        t = if_verbose5_1_0(f_5, t);
      }
      ;
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        ATerm f_17 = NULL,r_23 = NULL,z_23 = NULL;
        f_17 = t;
        t = term_w_23;
        r_23 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_30), f_17), term_f_30);
        z_23 = t;
        t = SSL_printnl(r_23, z_23);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_30), f_17), term_f_30);
        t = if_verbose5_1_0(h_5, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm z_1 (ATerm d_72 (ATerm), ATerm j_17, ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,p_17 = NULL;
  t = d_72(t);
  l_17 = t;
  t = term_w_23;
  m_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_17), l_17);
  p_17 = t;
  t = SSL_printnl(m_17, p_17);
  t = j_17;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm h_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_30);
    }
  else
    {
      t = h_30;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_17 = NULL,f_25 = NULL;
      w_17 = t;
      f_25 = t;
      t = SSL_is_string(f_25);
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      {
        ATerm n_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_5, t);
            ;
            LocalPopChoice(r_30);
          }
        else
          {
            t = n_30;
            {
              ATerm n_18 = NULL,p_18 = NULL,q_18 = NULL;
              n_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_18 = ATgetArgument(t, 0);
                  t = p_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_18 = ATgetArgument(t, 0);
                      t = p_18;
                      {
                        ATerm s_30 = t;
                        int u_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm z_26 = NULL;
                            z_26 = t;
                            t = a_2(z_26, t);
                            ;
                            LocalPopChoice(u_30);
                          }
                        else
                          {
                            t = s_30;
                            {
                              ATerm a_27 = NULL;
                              a_27 = t;
                              t = z_1(m_5, a_27, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm q_27 = NULL,v_27 = NULL,y_27 = NULL,a_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_18 = ATgetArgument(t, 0);
                          q_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_18;
                      t = eval_config_0_0(t);
                      q_27 = t;
                      t = q_18;
                      t = eval_config_0_0(t);
                      v_27 = t;
                      t = q_27;
                      y_27 = t;
                      t = v_27;
                      a_28 = t;
                      t = SSL_strcat(y_27, a_28);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_2 (ATerm a_19, ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  t = term_v_30;
  b_19 = t;
  t = a_19;
  c_19 = t;
  t = SSL_table_get(b_19, c_19);
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
        t = eval_config_0_0(t);
        d_19 = t;
        t = term_v_30;
        e_19 = t;
        t = a_19;
        f_19 = t;
        t = d_19;
        g_19 = t;
        t = SSL_table_put(e_19, f_19, g_19);
        t = d_19;
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
      }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm l_20 = NULL,o_20 = NULL;
  l_20 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
        t = l_20;
        t = k_0(t);
        m_28 = t;
        {
          ATerm f_31 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(g_31);
            }
          else
            {
              t = f_31;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = o_20;
          n_28 = t;
          t = m_28;
          o_28 = t;
          t = SSL_copy(n_28, o_28);
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_20);
        }
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        {
          ATerm k_31 = t;
          int l_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
              t = l_20;
              t = k_0(t);
              l_29 = t;
              {
                ATerm m_31 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_31 = t;
                    int o_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(o_31);
                      }
                    else
                      {
                        t = n_31;
                        {
                          ATerm p_31 = t;
                          int q_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(q_31);
                            }
                          else
                            {
                              t = p_31;
                              {
                                ATerm o_29 = NULL;
                                o_29 = t;
                                if((o_20 != t))
                                  {
                                    _fail(t);
                                  }
                                t = o_29;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_31;
                  }
                t = o_20;
                m_29 = t;
                t = l_29;
                n_29 = t;
                t = SSL_copy(m_29, n_29);
                t = (ATerm) ATmakeAppl(sym_FILE_1, o_20);
              }
              ;
              LocalPopChoice(l_31);
            }
          else
            {
              t = k_31;
              t = l_20;
              t = k_0(t);
              if((o_20 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_20);
            }
        }
      }
  }
  return(t);
}
ATerm b_2 (ATerm s_20, ATerm w_20, ATerm t)
{
  ATerm x_20 = NULL;
  ATerm r_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_21 = NULL,b_21 = NULL;
      t = s_20;
      a_21 = t;
      t = w_20;
      b_21 = t;
      t = SSL_table_get(a_21, b_21);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm u_31 = ATgetFirst((ATermList) t);
          x_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      LocalPopChoice(t_31);
      {
        ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
        t = s_20;
        c_21 = t;
        t = w_20;
        d_21 = t;
        t = x_20;
        e_21 = t;
        t = SSL_table_put(c_21, d_21, e_21);
        t = (ATerm) ATmakeAppl(sym__3, s_20, w_20, x_20);
      }
    }
  else
    {
      t = r_31;
      {
        ATerm i_21 = NULL,j_21 = NULL;
        t = s_20;
        i_21 = t;
        t = w_20;
        j_21 = t;
        t = SSL_table_remove(i_21, j_21);
        t = (ATerm) ATmakeAppl(sym__2, s_20, w_20);
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, s_20, w_20);
  return(t);
}
ATerm c_2 (ATerm o_86 (ATerm), ATerm m_21, ATerm t)
{
  ATerm n_21 = NULL,p_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
  t = o_86(t);
  n_21 = t;
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_21 = NULL,w_21 = NULL;
        t = n_21;
        v_21 = t;
        t = term_o_24;
        w_21 = t;
        t = SSL_table_get(v_21, w_21);
        ;
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_21 = ATgetFirst((ATermList) t);
        p_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = n_21;
    s_21 = t;
    t = term_o_24;
    t_21 = t;
    t = p_21;
    u_21 = t;
    t = SSL_table_put(s_21, t_21, u_21);
    t = r_21;
    {
      ATerm n_5 (ATerm t)
      {
        ATerm x_21 = NULL,w_29 = NULL,e_30 = NULL;
        x_21 = t;
        t = n_21;
        w_29 = t;
        t = x_21;
        e_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_21, x_21);
        t = b_2(w_29, e_30, t);
        return(t);
      }
      t = map_1_0(n_5, t);
      t = m_21;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm t)
{
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_87(t);
      t = k_87(t);
      ;
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      t = k_87(t);
      _fail(t);
    }
  return(t);
}
ATerm d_2 (ATerm n_86 (ATerm), ATerm d_22, ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL;
  t = n_86(t);
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_22, term_o_24);
  {
    ATerm d_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL,t_30 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_32 = ATgetArgument(t, 0);
            ATerm l_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_22;
        i_30 = t;
        t = term_o_24;
        t_30 = t;
        t = SSL_table_get(i_30, t_30);
        ;
        LocalPopChoice(h_32);
      }
    else
      {
        t = d_32;
        t = (ATerm) ATempty;
      }
    f_22 = t;
    t = e_22;
    g_22 = t;
    t = term_o_24;
    h_22 = t;
    t = (ATerm) ATinsert(CheckATermList(f_22), (ATerm) ATempty);
    i_22 = t;
    t = SSL_table_put(g_22, h_22, i_22);
    t = d_22;
  }
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm m_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_23 = NULL,h_31 = NULL;
      g_23 = t;
      h_31 = t;
      t = SSL_remove(h_31);
      ;
      LocalPopChoice(o_32);
    }
  else
    {
      t = m_32;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,b_31 = NULL;
  b_31 = t;
  t = d_2(o_5, b_31, t);
  {
    ATerm r_5 (ATerm t)
    {
      ATerm x_22 = NULL,s_31 = NULL;
      x_22 = t;
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_22 = NULL,z_22 = NULL;
            t = term_n_25;
            y_22 = t;
            t = term_o_24;
            z_22 = t;
            t = SSL_table_get(y_22, z_22);
            ;
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((w_22 != NULL) && (w_22 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              w_22 = ATgetFirst((ATermList) t);
            {
              ATerm r_32 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(w_22);
        t = map_1_0(s_5, t);
        t = x_22;
        s_31 = t;
        t = c_2(t_5, s_31, t);
      }
      return(t);
    }
    t = restore_always_2_0(s_89, r_5, t);
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_32 = NULL;
      t = term_o_25;
      e_32 = t;
      t = a_2(e_32, t);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      t = term_u_32;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_23 = NULL,x_31 = NULL;
        t = term_p_25;
        x_31 = t;
        t = a_2(x_31, t);
        i_23 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_23);
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = term_t_12;
      }
    t = t_89(t);
    t = copy_to_1_0(y_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_5, t);
  return(t);
}
ATerm k_2 (ATerm j_23, ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,q_23 = NULL;
  t = term_c_25;
  t = whoami_0_0(t);
  k_23 = t;
  t = term_w_23;
  l_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_32), k_23), term_x_32);
  m_23 = t;
  t = SSL_printnl(l_23, m_23);
  t = term_q_12;
  q_23 = t;
  t = SSL_exit(q_23);
  t = j_23;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm z_32 = NULL;
  z_32 = t;
  if(match_string(t, "-k"))
    {
      t = z_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_32;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm a_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL,t_33 = NULL;
  a_33 = t;
  o_33 = t;
  t = SSL_string_to_int(o_33);
  n_33 = t;
  t = term_v_30;
  p_33 = t;
  t = term_i_33;
  s_33 = t;
  t = n_33;
  t_33 = t;
  t = SSL_table_put(p_33, s_33, t_33);
  t = a_33;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm f_32 = NULL;
  f_32 = t;
  t = n_2(z_5, a_6, b_6, f_32, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  if(match_string(t, "-S"))
    {
      t = m_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_34;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm n_34 = NULL,p_34 = NULL,q_34 = NULL;
  t = term_v_30;
  n_34 = t;
  t = term_p_5;
  p_34 = t;
  t = term_k_33;
  q_34 = t;
  t = SSL_table_put(n_34, p_34, q_34);
  t = term_l_33;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,b_35 = NULL,g_35 = NULL,h_35 = NULL;
  x_34 = t;
  z_34 = t;
  t = SSL_string_to_int(z_34);
  y_34 = t;
  t = term_v_30;
  b_35 = t;
  t = term_p_5;
  g_35 = t;
  t = y_34;
  h_35 = t;
  t = SSL_table_put(b_35, g_35, h_35);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_34);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  t = term_v_30;
  r_35 = t;
  t = term_r_33;
  s_35 = t;
  t = term_c_25;
  t_35 = t;
  t = SSL_table_put(r_35, s_35, t_35);
  t = term_u_33;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_33 = NULL;
      z_33 = t;
      t = l_2(c_6, d_6, e_6, z_33, t);
      ;
      LocalPopChoice(a_34);
    }
  else
    {
      t = w_33;
      {
        ATerm b_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_34 = NULL;
            r_34 = t;
            t = n_2(h_6, p_6, q_6, r_34, t);
            ;
            LocalPopChoice(e_34);
          }
        else
          {
            t = b_34;
            {
              ATerm k_35 = NULL;
              k_35 = t;
              t = l_2(a_7, b_7, f_7, k_35, t);
            }
          }
      }
    }
  return(t);
}
ATerm l_2 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm r_24, ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_24 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
      t = term_c_25;
      t = d_0(t);
      u_24 = t;
      t = term_f_34;
      x_35 = t;
      t = term_l_34;
      y_35 = t;
      t = u_24;
      z_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_34, term_l_34, u_24);
      t = m_2(x_35, y_35, z_35, t);
      _fail(t);
    }
  else
    {
      ATerm x_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_24 = ATgetFirst((ATermList) t);
          t_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_24;
      t = a_0(t);
      t = term_c_25;
      t = b_0(t);
      x_24 = t;
      t = (ATerm) ATinsert(CheckATermList(t_24), x_24);
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm e_36 = NULL;
  e_36 = t;
  if(match_string(t, "-o"))
    {
      t = e_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_36;
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  f_36 = t;
  t = term_v_30;
  g_36 = t;
  t = term_o_25;
  h_36 = t;
  t = f_36;
  i_36 = t;
  t = SSL_table_put(g_36, h_36, i_36);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_36);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm a_36 = NULL;
  a_36 = t;
  t = n_2(i_7, o_7, q_7, a_36, t);
  return(t);
}
ATerm m_2 (ATerm h_25, ATerm i_25, ATerm j_25, ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,q_25 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_25, i_25);
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_36 = NULL,m_36 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_34 = ATgetArgument(t, 0);
            ATerm v_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_25;
        l_36 = t;
        t = i_25;
        m_36 = t;
        t = SSL_table_get(l_36, m_36);
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        t = (ATerm) ATempty;
      }
    k_25 = t;
    t = h_25;
    l_25 = t;
    t = i_25;
    m_25 = t;
    t = (ATerm) ATinsert(CheckATermList(k_25), j_25);
    q_25 = t;
    t = SSL_table_put(l_25, m_25, q_25);
    t = (ATerm) ATmakeAppl(sym__3, h_25, i_25, j_25);
  }
  return(t);
}
ATerm n_2 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm b_26, ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_26 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
      t = term_c_25;
      t = j_0(t);
      g_26 = t;
      t = term_f_34;
      s_36 = t;
      t = term_l_34;
      t_36 = t;
      t = g_26;
      u_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_34, term_l_34, g_26);
      t = m_2(s_36, t_36, u_36, t);
      _fail(t);
    }
  else
    {
      ATerm k_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_26 = ATgetFirst((ATermList) t);
          d_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_26 = ATgetFirst((ATermList) t);
          f_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_26;
      t = h_0(t);
      t = e_26;
      t = i_0(t);
      k_26 = t;
      t = (ATerm) ATinsert(CheckATermList(f_26), k_26);
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  if(match_string(t, "-i"))
    {
      t = z_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_36;
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
  a_37 = t;
  t = term_v_30;
  b_37 = t;
  t = term_p_25;
  c_37 = t;
  t = a_37;
  d_37 = t;
  t = SSL_table_put(b_37, c_37, d_37);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_37);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_w_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm v_36 = NULL;
  v_36 = t;
  t = n_2(v_7, w_7, y_7, v_36, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  if(match_string(t, "-a"))
    {
      t = i_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = i_37;
    }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  j_37 = t;
  t = term_v_30;
  k_37 = t;
  t = term_c_35;
  l_37 = t;
  t = term_c_25;
  m_37 = t;
  t = SSL_table_put(k_37, l_37, m_37);
  t = j_37;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  r_37 = t;
  t = term_v_30;
  s_37 = t;
  t = term_f_35;
  t_37 = t;
  t = term_c_25;
  u_37 = t;
  t = SSL_table_put(s_37, t_37, u_37);
  t = r_37;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm m_35 = t;
  int p_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_37 = NULL;
      e_37 = t;
      t = l_2(z_7, j_8, k_8, e_37, t);
      ;
      LocalPopChoice(p_35);
    }
  else
    {
      t = m_35;
      {
        ATerm n_37 = NULL;
        n_37 = t;
        t = l_2(l_8, o_8, s_8, n_37, t);
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,p_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_25;
  t = whoami_0_0(t);
  k_27 = t;
  t = term_w_23;
  l_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_35), k_27);
  m_27 = t;
  t = SSL_printnl(l_27, m_27);
  t = term_q_12;
  p_27 = t;
  t = SSL_exit(p_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_37 = NULL;
  t = term_u_35;
  w_37 = t;
  t = a_2(w_37, t);
  return(t);
}
ATerm foldr_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_82(t);
      ;
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      {
        ATerm s_27 = NULL,t_27 = NULL,x_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_27 = ATgetFirst((ATermList) t);
            t_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_27;
        t = foldr_2_0(q_82, r_82, t);
        x_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_27, x_27);
        t = r_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  if(match_cons(t, sym__2))
    {
      n_38 = ATgetArgument(t, 0);
      o_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(n_38, o_38);
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = SSL_addr(n_38, o_38);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_28 = NULL,d_38 = NULL,j_38 = NULL,k_38 = NULL;
  t = times_0_0(t);
  d_38 = t;
  j_38 = t;
  t = SSL_explode_term(j_38);
  if(match_cons(t, sym__2))
    {
      ATerm d_36 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_38;
  t = foldr_2_0(t_8, w_8, t);
  g_28 = t;
  t = SSL_TicksToSeconds(g_28);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
  z_28 = t;
  if(match_cons(t, sym__2))
    {
      a_29 = ATgetArgument(t, 0);
      b_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_29;
        if((a_29 != t))
          {
            _fail(t);
          }
        t = z_28;
        ;
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        {
          ATerm t_38 = NULL,u_38 = NULL;
          t = a_29;
          t_38 = t;
          t = b_29;
          u_38 = t;
          t = z_28;
          {
            ATerm n_36 = t;
            int o_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_gti(t_38, u_38);
                ;
                LocalPopChoice(o_36);
              }
            else
              {
                t = n_36;
                t = SSL_gtr(t_38, u_38);
              }
            t = (ATerm) ATmakeAppl(sym__2, a_29, b_29);
          }
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm p_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_29 = NULL,g_29 = NULL,z_38 = NULL;
      e_29 = t;
      t = term_p_5;
      z_38 = t;
      t = a_2(z_38, t);
      g_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_29, term_q_12);
      t = geq_0_0(t);
      t = e_29;
      t = v_87(t);
      ;
      LocalPopChoice(q_36);
    }
  else
    {
      t = p_36;
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,q_29 = NULL;
  t = run_time_0_0(t);
  i_29 = t;
  t = term_c_25;
  t = whoami_0_0(t);
  j_29 = t;
  t = term_w_23;
  k_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_36), i_29), term_z_12), j_29);
  q_29 = t;
  t = SSL_printnl(k_29, q_29);
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_36), i_29), term_z_12), j_29));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_33;
  r_29 = t;
  t = SSL_exit(r_29);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(x_36);
    }
  else
    {
      t = w_36;
      {
        ATerm y_36 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_39 = NULL,d_39 = NULL,f_39 = NULL,m_39 = NULL,h_39 = NULL,i_39 = NULL,w_0 = NULL,a_1 = NULL;
            c_39 = t;
            if(match_cons(t, sym_Undefined_1))
              {
                d_39 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            m_39 = t;
            t = c_39;
            f_39 = t;
            t = SSLgetAnnotations(f_39);
            h_39 = t;
            t = d_39;
            i_39 = t;
            a_1 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_39);
            w_0 = t;
            t = SSLsetAnnotations(w_0, h_39);
            ;
            LocalPopChoice(f_37);
          }
        else
          {
            t = y_36;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_39 = NULL;
      t = term_o_37;
      b_39 = t;
      t = a_2(b_39, t);
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      t = fetch_1_0(y_8, t);
    }
  t = u_91(t);
  return(t);
}
ATerm map_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm s_29 (ATerm t)
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        {
          ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
          o_39 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_39 = ATgetFirst((ATermList) t);
              q_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_2(y_75, s_29, o_39, p_39, q_39, t);
        }
      }
    return(t);
  }
  t = s_29(t);
  return(t);
}
ATerm q_2 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm z_29, ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_29 = ATgetFirst((ATermList) t);
      y_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_30 = NULL,d_30 = NULL,t_39 = NULL;
        t = y_29;
        t = g_0(t);
        c_30 = t;
        t = x_29;
        t = f_0(t);
        d_30 = t;
        t = y_29;
        t_39 = t;
        {
          ATerm z_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_30), d_30);
            return(t);
          }
          t = q_2(f_0, z_8, t_39, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_25;
      t = g_0(t);
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,k_40 = NULL,r_40 = NULL,m_40 = NULL,n_40 = NULL,b_1 = NULL,e_1 = NULL;
  h_40 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  r_40 = t;
  t = h_40;
  k_40 = t;
  t = SSLgetAnnotations(k_40);
  m_40 = t;
  t = i_40;
  n_40 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_40);
  b_1 = t;
  t = SSLsetAnnotations(b_1, m_40);
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm q_30 = NULL,z_40 = NULL;
  q_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_30), term_v_37);
  z_40 = t;
  t = t_2(z_40, t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,u_40 = NULL,v_40 = NULL;
  ATerm x_37 = t;
  int y_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_40 = NULL;
      t = term_u_35;
      g_40 = t;
      t = a_2(g_40, t);
      ;
      LocalPopChoice(y_37);
    }
  else
    {
      t = x_37;
      t = fetch_1_0(c_9, t);
    }
  t = term_z_37;
  u_40 = t;
  t = t_2(u_40, t);
  t = term_f_34;
  o_30 = t;
  t = term_l_34;
  p_30 = t;
  t = SSL_table_get(o_30, p_30);
  v_40 = t;
  t = q_2(_id, d_9, v_40, t);
  t = map_1_0(e_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm a_31 (ATerm t)
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
        j_41 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_41 = ATgetFirst((ATermList) t);
            l_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_2(i_76, _id, j_41, k_41, l_41, t);
        ;
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        {
          ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
          o_41 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_41 = ATgetFirst((ATermList) t);
              q_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_2(_id, a_31, o_41, p_41, q_41, t);
        }
      }
    return(t);
  }
  t = a_31(t);
  return(t);
}
ATerm t_2 (ATerm c_31, ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,i_31 = NULL;
  ATerm c_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_31 = NULL;
      j_31 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_31;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_38 = ATgetFirst((ATermList) t);
              ATerm g_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_31;
        }
      ;
      LocalPopChoice(e_38);
    }
  else
    {
      t = c_38;
      t = (ATerm) ATinsert(ATempty, c_31);
    }
  d_31 = t;
  t = term_u_32;
  e_31 = t;
  t = d_31;
  i_31 = t;
  t = SSL_printnl(e_31, i_31);
  t = c_31;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_41 = NULL,u_41 = NULL;
  t = term_u_35;
  u_41 = t;
  t = a_2(u_41, t);
  w_41 = t;
  t = t_2(w_41, t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
  t = term_v_30;
  b_42 = t;
  t = term_h_38;
  c_42 = t;
  t = term_c_25;
  d_42 = t;
  t = SSL_table_put(b_42, c_42, d_42);
  t = term_i_38;
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_l_38;
  return(t);
}
ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  t = term_v_30;
  i_42 = t;
  t = term_h_38;
  j_42 = t;
  t = term_c_25;
  k_42 = t;
  t = SSL_table_put(i_42, j_42, k_42);
  t = term_v_30;
  l_42 = t;
  t = term_m_38;
  m_42 = t;
  t = term_c_25;
  n_42 = t;
  t = SSL_table_put(l_42, m_42, n_42);
  t = term_p_38;
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_41 = NULL;
      x_41 = t;
      t = l_2(f_9, g_9, h_9, x_41, t);
      ;
      LocalPopChoice(s_38);
    }
  else
    {
      t = r_38;
      {
        ATerm e_42 = NULL;
        e_42 = t;
        t = l_2(i_9, j_9, k_9, e_42, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm t)
{
  ATerm j_32 = NULL,b_32 = NULL,c_32 = NULL;
  j_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_32 = ATgetFirst((ATermList) t);
      c_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_2(q_63, r_63, j_32, b_32, c_32, t);
  return(t);
}
ATerm u_2 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm j_32, ATerm b_32, ATerm c_32, ATerm t)
{
  ATerm a_32 = NULL,g_32 = NULL,i_32 = NULL,f_1 = NULL,n_1 = NULL;
  t = SSLgetAnnotations(j_32);
  a_32 = t;
  t = b_32;
  t = q_63(t);
  g_32 = t;
  t = c_32;
  t = r_63(t);
  i_32 = t;
  n_1 = t;
  t = (ATerm) ATinsert(CheckATermList(i_32), g_32);
  f_1 = t;
  t = SSLsetAnnotations(f_1, a_32);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
  t_42 = t;
  t = term_v_30;
  u_42 = t;
  t = term_u_35;
  v_42 = t;
  t = t_42;
  w_42 = t;
  t = SSL_table_put(u_42, v_42, w_42);
  t = (ATerm) ATmakeAppl(sym_Program_1, t_42);
  return(t);
}
ATerm v_2 (ATerm s_93 (ATerm), ATerm n_32, ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_38;
      t = s_93(t);
      ;
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
    }
  t = n_32;
  o_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_42 = ATgetFirst((ATermList) t);
      q_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm o_9 (ATerm t)
    {
      ATerm y_38 = t;
      int a_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_39 = t;
          int g_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              ;
              LocalPopChoice(g_39);
            }
          else
            {
              t = e_39;
              t = s_93(t);
              t = Cons_2_0(_id, o_9, t);
            }
          ;
          LocalPopChoice(a_39);
        }
      else
        {
          t = y_38;
          {
            ATerm y_42 = NULL,z_42 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_42 = ATgetFirst((ATermList) t);
                z_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_42), (ATerm) ATmakeAppl(sym_Undefined_1, y_42));
          }
        }
      return(t);
    }
    t = u_2(l_9, o_9, o_42, p_42, q_42, t);
  }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm n_43 = NULL;
  n_43 = t;
  if(match_string(t, "--help"))
    {
      t = n_43;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_43;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_43;
        }
    }
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
  t = term_v_30;
  o_43 = t;
  t = term_o_37;
  p_43 = t;
  t = term_c_25;
  q_43 = t;
  t = SSL_table_put(o_43, p_43, q_43);
  t = term_j_39;
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_k_39;
  return(t);
}
ATerm t_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm r_93 (ATerm), ATerm b_33, ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,d_43 = NULL;
  t = term_f_34;
  c_33 = t;
  t = term_l_34;
  d_33 = t;
  t = (ATerm) ATempty;
  e_33 = t;
  t = SSL_table_put(c_33, d_33, e_33);
  t = b_33;
  d_43 = t;
  {
    ATerm p_9 (ATerm t)
    {
      ATerm l_39 = t;
      int n_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_93(t);
          ;
          LocalPopChoice(n_39);
        }
      else
        {
          t = l_39;
          {
            ATerm r_39 = t;
            int s_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_43 = NULL;
                j_43 = t;
                t = l_2(q_9, r_9, s_9, j_43, t);
                ;
                LocalPopChoice(s_39);
              }
            else
              {
                t = r_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = v_2(p_9, d_43, t);
    {
      ATerm u_39 = t;
      int v_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_33 = NULL;
          x_33 = t;
          {
            ATerm w_39 = t;
            int x_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_43 = NULL;
                t = x_33;
                {
                  ATerm y_39 = t;
                  int z_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_44 = NULL;
                      t = term_o_37;
                      a_44 = t;
                      t = a_2(a_44, t);
                      ;
                      LocalPopChoice(z_39);
                    }
                  else
                    {
                      t = y_39;
                      t = fetch_1_0(t_9, t);
                    }
                  t = x_33;
                  t = default_system_usage_0_0(t);
                  t = term_k_33;
                  x_43 = t;
                  t = SSL_exit(x_43);
                }
                ;
                LocalPopChoice(x_39);
              }
            else
              {
                t = w_39;
                {
                  ATerm d_44 = NULL,g_44 = NULL;
                  t = term_h_38;
                  g_44 = t;
                  t = a_2(g_44, t);
                  t = x_33;
                  t = default_system_about_0_0(t);
                  t = term_k_33;
                  d_44 = t;
                  t = SSL_exit(d_44);
                }
              }
          }
          ;
          LocalPopChoice(v_39);
        }
      else
        {
          t = u_39;
          {
            ATerm a_40 = t;
            int b_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_33 = NULL,c_34 = NULL,d_34 = NULL;
                ATerm u_9 (ATerm t)
                {
                  ATerm h_44 = NULL,i_44 = NULL,k_44 = NULL,r_44 = NULL,m_44 = NULL,n_44 = NULL,o_1 = NULL,s_1 = NULL;
                  h_44 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      i_44 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  r_44 = t;
                  t = h_44;
                  k_44 = t;
                  t = SSLgetAnnotations(k_44);
                  m_44 = t;
                  t = i_44;
                  if(((f_33 != NULL) && (f_33 != t)))
                    _fail(t);
                  else
                    f_33 = t;
                  n_44 = t;
                  s_1 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_44);
                  o_1 = t;
                  t = SSLsetAnnotations(o_1, m_44);
                  return(t);
                }
                t = fetch_1_0(u_9, t);
                t = term_w_23;
                y_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_33)), term_c_40);
                c_34 = t;
                t = SSL_printnl(y_33, c_34);
                t = (ATerm) ATmakeAppl(sym__2, term_w_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_33)), term_c_40));
                t = default_system_usage_0_0(t);
                t = term_q_12;
                d_34 = t;
                t = SSL_exit(d_34);
                ;
                LocalPopChoice(b_40);
              }
            else
              {
                t = a_40;
              }
          }
        }
      g_33 = t;
      t = term_f_34;
      h_33 = t;
      t = SSL_table_destroy(h_33);
      t = g_33;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,t_44 = NULL;
  t_44 = t;
  t = w_2(w_91, t_44, t);
  g_34 = t;
  t = term_d_40;
  h_34 = t;
  t = SSL_table_create(h_34);
  t = term_d_40;
  i_34 = t;
  t = term_e_40;
  j_34 = t;
  t = g_34;
  k_34 = t;
  t = SSL_table_put(i_34, j_34, k_34);
  t = g_34;
  t = y_91(t);
  {
    ATerm f_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_91, t);
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = f_40;
        {
          ATerm l_40 = t;
          int o_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_40);
            }
          else
            {
              t = l_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm p_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      ;
      LocalPopChoice(q_40);
    }
  else
    {
      t = p_40;
      {
        ATerm s_40 = t;
        int t_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(t_40);
          }
        else
          {
            t = s_40;
            {
              ATerm w_40 = t;
              int x_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(x_40);
                }
              else
                {
                  t = w_40;
                  {
                    ATerm y_40 = t;
                    int a_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_44 = NULL;
                        v_44 = t;
                        t = l_2(b_10, c_10, f_10, v_44, t);
                        ;
                        LocalPopChoice(a_41);
                      }
                    else
                      {
                        t = y_40;
                        {
                          ATerm b_41 = t;
                          int c_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(c_41);
                            }
                          else
                            {
                              t = b_41;
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
ATerm y_9 (ATerm t)
{
  ATerm d_45 = NULL;
  d_45 = t;
  t = k_2(d_45, t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = xtc_io_1_0(m_10, t);
  return(t);
}
ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  t = term_v_30;
  z_44 = t;
  t = term_d_41;
  a_45 = t;
  t = term_c_25;
  b_45 = t;
  t = SSL_table_put(z_44, a_45, b_45);
  t = term_e_41;
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_f_41;
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_35 = NULL,f_45 = NULL;
      a_35 = t;
      t = term_c_35;
      f_45 = t;
      t = a_2(f_45, t);
      t = a_35;
      ;
      LocalPopChoice(h_41);
    }
  else
    {
      t = g_41;
      {
        ATerm i_41 = t;
        int m_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_41 = t;
            int r_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_45 = NULL,h_45 = NULL,j_45 = NULL,q_45 = NULL,l_45 = NULL,m_45 = NULL,x_1 = NULL,e_2 = NULL;
                g_45 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    h_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                q_45 = t;
                t = g_45;
                j_45 = t;
                t = SSLgetAnnotations(j_45);
                l_45 = t;
                t = h_45;
                m_45 = t;
                e_2 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_45);
                x_1 = t;
                t = SSLsetAnnotations(x_1, l_45);
                ;
                LocalPopChoice(r_41);
              }
            else
              {
                t = n_41;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(m_41);
            t = xtc_transform_file_2_0(o_10, p_10, t);
          }
        else
          {
            t = i_41;
            t = xtc_transform_term_2_0(s_10, c_11, t);
          }
      }
    }
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_41 = t;
        int y_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_45 = NULL,t_45 = NULL,v_45 = NULL,c_46 = NULL,x_45 = NULL,y_45 = NULL,f_2 = NULL,g_2 = NULL;
            s_45 = t;
            if(match_cons(t, sym_FILE_1))
              {
                t_45 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            c_46 = t;
            t = s_45;
            v_45 = t;
            t = SSLgetAnnotations(v_45);
            x_45 = t;
            t = t_45;
            y_45 = t;
            g_2 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, y_45);
            f_2 = t;
            t = SSLsetAnnotations(f_2, x_45);
            ;
            LocalPopChoice(y_41);
          }
        else
          {
            t = v_41;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(t_41);
        t = xtc_transform_file_2_0(f_11, s_11, t);
      }
    else
      {
        t = s_41;
        t = xtc_transform_term_2_0(u_11, y_11, t);
      }
    {
      ATerm z_41 = t;
      int a_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_35 = NULL,f_46 = NULL;
          d_35 = t;
          t = term_f_35;
          f_46 = t;
          t = a_2(f_46, t);
          t = d_35;
          ;
          LocalPopChoice(a_42);
        }
      else
        {
          t = z_41;
          {
            ATerm f_42 = t;
            int g_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_42 = t;
                int r_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_46 = NULL,h_46 = NULL,j_46 = NULL,q_46 = NULL,l_46 = NULL,m_46 = NULL,h_2 = NULL,i_2 = NULL;
                    g_46 = t;
                    if(match_cons(t, sym_FILE_1))
                      {
                        h_46 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    q_46 = t;
                    t = g_46;
                    j_46 = t;
                    t = SSLgetAnnotations(j_46);
                    l_46 = t;
                    t = h_46;
                    m_46 = t;
                    i_2 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, m_46);
                    h_2 = t;
                    t = SSLsetAnnotations(h_2, l_46);
                    ;
                    LocalPopChoice(r_42);
                  }
                else
                  {
                    t = h_42;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(g_42);
                t = xtc_transform_file_2_0(b_12, c_12, t);
              }
            else
              {
                t = f_42;
                t = xtc_transform_term_2_0(d_12, e_12, t);
              }
          }
        }
      {
        ATerm s_42 = t;
        int x_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_43 = t;
            int b_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_46 = NULL,t_46 = NULL,v_46 = NULL,c_47 = NULL,x_46 = NULL,y_46 = NULL,j_2 = NULL,o_2 = NULL;
                s_46 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    t_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                c_47 = t;
                t = s_46;
                v_46 = t;
                t = SSLgetAnnotations(v_46);
                x_46 = t;
                t = t_46;
                y_46 = t;
                o_2 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, y_46);
                j_2 = t;
                t = SSLsetAnnotations(j_2, x_46);
                ;
                LocalPopChoice(b_43);
              }
            else
              {
                t = a_43;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(x_42);
            t = xtc_transform_file_2_0(f_12, g_12, t);
          }
        else
          {
            t = s_42;
            t = xtc_transform_term_2_0(h_12, i_12, t);
          }
        {
          ATerm c_43 = t;
          int e_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_43 = t;
              int g_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_47 = NULL,f_47 = NULL,h_47 = NULL,o_47 = NULL,j_47 = NULL,k_47 = NULL,p_2 = NULL,r_2 = NULL;
                  e_47 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      f_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  o_47 = t;
                  t = e_47;
                  h_47 = t;
                  t = SSLgetAnnotations(h_47);
                  j_47 = t;
                  t = f_47;
                  k_47 = t;
                  r_2 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, k_47);
                  p_2 = t;
                  t = SSLsetAnnotations(p_2, j_47);
                  ;
                  LocalPopChoice(g_43);
                }
              else
                {
                  t = f_43;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(e_43);
              t = xtc_transform_file_2_0(j_12, pass_verbose_0_0, t);
            }
          else
            {
              t = c_43;
              t = xtc_transform_term_2_0(o_12, pass_verbose_0_0, t);
            }
        }
      }
    }
  }
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_h_43;
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = term_h_43;
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_i_43;
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_i_43;
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_12 (ATerm t)
{
  t = term_k_43;
  return(t);
}
ATerm c_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_12 (ATerm t)
{
  t = term_k_43;
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = term_l_43;
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  t = pass_verbose_0_0(t);
  i_35 = t;
  t = term_m_43;
  t = xtc_find_0_0(t);
  j_35 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(i_35), j_35), term_r_43);
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = term_l_43;
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  t = pass_verbose_0_0(t);
  n_35 = t;
  t = term_m_43;
  t = xtc_find_0_0(t);
  o_35 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(n_35), o_35), term_r_43);
  return(t);
}
ATerm j_12 (ATerm t)
{
  t = term_s_43;
  return(t);
}
ATerm o_12 (ATerm t)
{
  t = term_s_43;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_9, y_9, _id, z_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
