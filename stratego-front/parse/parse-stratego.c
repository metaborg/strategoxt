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
ATerm term_i_40;
ATerm term_y_39;
ATerm term_t_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_j_39;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_i_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_t_36;
ATerm term_m_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_n_35;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_q_34;
ATerm term_z_33;
ATerm term_n_33;
ATerm term_w_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_o_30;
ATerm term_r_29;
ATerm term_n_29;
ATerm term_i_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_r_28;
ATerm term_o_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_q_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_h_27;
ATerm term_s_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_z_23;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_q_21;
ATerm term_j_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_g_18;
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
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
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
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
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
ATerm term_a_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_a_13;
void init_constant_terms (void)
{
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_g_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_w_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_k_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_z_14);
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
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_k_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_o_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_t_17, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_y_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_u_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_z_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_g_19, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_k_19, term_l_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_u_28);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_c_28);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_j_20);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_d_31);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_31);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_q_31, term_t_20);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_g_32);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_z_35, term_t_20);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_s_24, term_t_20);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__2, term_v_34, term_t_20);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym__2, term_j_39, term_t_20);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm b_7 (ATerm r_43, ATerm s_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm c_7 (ATerm a_28, ATerm b_28, ATerm);
ATerm d_7 (ATerm p_72 (ATerm), ATerm q_194, ATerm i_28, ATerm);
ATerm o_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm);
ATerm e_7 (ATerm w_24, ATerm x_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm e_71 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm q_90 (ATerm), ATerm);
ATerm g_7 (ATerm b_87 (ATerm), ATerm z_44, ATerm x_44, ATerm);
ATerm f_5 (ATerm q_4, ATerm);
ATerm g_5 (ATerm t_4, ATerm u_4, ATerm w_4, ATerm);
ATerm b_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm guarantee_extension_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm if_keep1_1_0 (ATerm i_89 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm i_7 (ATerm a_25, ATerm b_25, ATerm);
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm c_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm get_syntax_definition_0_0 (ATerm);
ATerm j_7 (ATerm e_48, ATerm x_464, ATerm);
ATerm find_in_includes_1_0 (ATerm z_69 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm i_3 (ATerm);
ATerm l_3 (ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm u_76 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm get_meta_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm b_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm get_syntax_0_0 (ATerm);
ATerm basename_1_0 (ATerm d_85 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm r_23 (ATerm z_22, ATerm);
ATerm conc_0_0 (ATerm);
ATerm k_7 (ATerm w_47, ATerm v_47, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm j_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm m_7 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm d_35, ATerm c_35, ATerm);
ATerm n_7 (ATerm m_80 (ATerm), ATerm z_34, ATerm y_34, ATerm);
ATerm b_6 (ATerm);
ATerm o_7 (ATerm n_46, ATerm o_46, ATerm p_46, ATerm);
ATerm p_7 (ATerm m_88 (ATerm), ATerm x_46, ATerm w_46, ATerm);
ATerm s_7 (ATerm u_48, ATerm v_48, ATerm);
ATerm v_30 (ATerm i_30, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_7 (ATerm g_28, ATerm);
ATerm r_7 (ATerm c_49, ATerm d_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_32 (ATerm f_31, ATerm);
ATerm u_32 (ATerm k_31, ATerm l_31, ATerm m_31, ATerm);
ATerm v_32 (ATerm w_31, ATerm x_31, ATerm z_31, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm m_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm f_7 (ATerm);
ATerm l_7 (ATerm);
ATerm w_7 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm n_37 (ATerm p_36, ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm t_7 (ATerm c_25, ATerm d_25, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm u_7 (ATerm v_45, ATerm w_45, ATerm);
ATerm end_scope_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm c_90 (ATerm), ATerm);
ATerm u_8 (ATerm);
ATerm xtc_io_1_0 (ATerm d_90 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm y_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm e_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm c_8 (ATerm q_47, ATerm r_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm o_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm a_8 (ATerm q_45, ATerm r_45, ATerm p_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm w_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm o_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm parse_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_7 (ATerm l_43, ATerm m_43, ATerm);
ATerm foldr_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm f_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_11 (ATerm);
ATerm need_help_1_0 (ATerm e_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm k_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_7 (ATerm h_42, ATerm i_42, ATerm);
ATerm debug_1_0 (ATerm n_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm q_11 (ATerm);
ATerm s_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm z_7 (ATerm h_47, ATerm i_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm v_11 (ATerm);
ATerm y_11 (ATerm);
ATerm z_11 (ATerm);
ATerm a_12 (ATerm);
ATerm c_12 (ATerm);
ATerm d_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_94 (ATerm), ATerm);
ATerm i_12 (ATerm);
ATerm k_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm parse_options_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm w_12 (ATerm);
ATerm x_12 (ATerm);
ATerm parse_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_7 (ATerm r_43, ATerm s_43, ATerm t)
{
  ATerm s_5 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_43, s_43);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = s_5;
      t = SSL_subtr(r_43, s_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,p_0 = NULL,r_0 = NULL;
  t = term_a_13;
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = term_g_13;
      }
    f_0 = t;
    t = term_g_13;
    r_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_0, term_g_13);
    t = b_7(f_0, r_0, t);
    p_0 = t;
    t = SSL_int_to_string(p_0);
    b_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_a_13);
  }
  return(t);
}
ATerm c_7 (ATerm a_28, ATerm b_28, ATerm t)
{
  ATerm s_0 = NULL;
  t = SSL_write_term_to_stream_baf(a_28, b_28);
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_0);
  return(t);
}
ATerm d_7 (ATerm p_72 (ATerm), ATerm q_194, ATerm i_28, ATerm t)
{
  ATerm t_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_194, term_h_13);
  t = open_stream_0_0(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_0, i_28);
  t = p_72(t);
  t = fclose_0_0(t);
  t = i_28;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm w_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      if(match_cons(i_13, sym_Stream_1))
        {
          w_0 = ATgetArgument(i_13, 0);
        }
      else
        _fail(t);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(w_0, z_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL;
  u_0 = t;
  t = xtc_new_file_0_0(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, u_0);
  t = d_7(o_0, v_0, u_0, t);
  t = SSL_close_file(v_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(z_90, a_91, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm e_7 (ATerm w_24, ATerm x_24, ATerm t)
{
  t = SSL_execvp(w_24, x_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL,d_2 = NULL,e_2 = NULL;
  z_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_2 = ATgetArgument(t, 0);
      {
        ATerm y_0 = NULL,a_1 = NULL;
        t = SSL_int_to_string(b_2);
        y_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_13), y_0), term_j_13);
        a_1 = t;
        t = SSL_concat_strings(a_1);
      }
    }
  else
    {
      ATerm y_1 = NULL,a_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_2 = ATgetArgument(t, 0);
          d_2 = ATgetArgument(t, 1);
          e_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_2);
      y_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_2), term_m_13), y_1), term_l_13), b_2);
      a_2 = t;
      t = SSL_concat_strings(a_2);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm k_2 = NULL;
  if(((k_2 != NULL) && (k_2 != t)))
    _fail(t);
  else
    k_2 = t;
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm p_13 = ATgetArgument(t, 0);
              if(((k_2 != NULL) && (k_2 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                k_2 = ATgetArgument(t, 1);
              {
                ATerm q_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_19), term_i_19), term_c_19), term_v_18), term_o_18), term_g_18), term_a_18), term_v_17), term_p_17), term_l_17), term_f_17), term_w_16), term_s_16), term_o_16), term_k_16), term_g_16), term_c_16), term_y_15), term_s_15), term_o_15), term_k_15), term_g_15), term_a_15), term_v_14), term_p_14), term_d_14), term_x_13), term_t_13);
        t = fetch_elem_1_0(q_0, t);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(k_2));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_2 = NULL,w_2 = NULL;
  o_2 = t;
  {
    ATerm n_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_19 = ATgetArgument(t, 0);
            w_2 = ATgetArgument(t, 1);
            {
              ATerm s_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_19);
        {
          ATerm t_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,r_2 = NULL,a_3 = NULL;
              t = w_2;
              {
                ATerm v_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_19;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                m_2 = t;
                t = term_w_19;
                r_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, m_2), term_x_19);
                a_3 = t;
                t = SSL_printnl(r_2, a_3);
                t = (ATerm) ATmakeAppl(sym__2, term_w_19, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_x_19));
              }
              ;
              LocalPopChoice(u_19);
            }
          else
            {
              t = t_19;
              t = o_2;
            }
        }
      }
    else
      {
        t = n_19;
        t = o_2;
      }
    t = o_2;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL;
  h_3 = t;
  t = fork_0_0(t);
  g_3 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_3;
        t = e_71(t);
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = SSL_waitpid(g_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_20 = ATgetArgument(t, 0);
            if(((ATgetType(c_20) != AT_INT) || (ATgetInt((ATermInt) c_20) != 0)))
              _fail(t);
            {
              ATerm e_20 = ATgetArgument(t, 1);
            }
            {
              ATerm f_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm q_90 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,p_3 = NULL;
  if(((p_3 != NULL) && (p_3 != t)))
    _fail(t);
  else
    p_3 = t;
  t = q_90(t);
  t = xtc_find_0_0(t);
  if(((k_3 != NULL) && (k_3 != t)))
    _fail(t);
  else
    k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_3), not_null(p_3));
  {
    ATerm x_0 (ATerm t)
    {
      ATerm s_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_3), not_null(p_3));
      t = e_7(not_null(k_3), not_null(p_3), t);
      t = term_g_20;
      s_3 = t;
      t = SSL_exit(s_3);
      return(t);
    }
    t = fork_and_wait_1_0(x_0, t);
    t = not_null(p_3);
  }
  return(t);
}
ATerm g_7 (ATerm b_87 (ATerm), ATerm z_44, ATerm x_44, ATerm t)
{
  ATerm x_3 = NULL,z_3 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,h_4 = NULL;
  d_4 = t;
  t = b_87(t);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_3, z_44, x_44);
  t = a_8(x_3, z_44, x_44, t);
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 = NULL;
        t = term_j_20;
        j_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_3, term_j_20);
        t = z_7(x_3, j_4, t);
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_3 = ATgetFirst((ATermList) t);
        c_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_20;
    e_4 = t;
    t = (ATerm) ATinsert(CheckATermList(c_4), (ATerm) ATinsert(CheckATermList(z_3), z_44));
    h_4 = t;
    t = SSL_table_put(x_3, e_4, h_4);
    t = d_4;
  }
  return(t);
}
ATerm f_5 (ATerm q_4, ATerm t)
{
  t = q_4;
  {
    ATerm l_20 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_20 = ATgetArgument(t, 0);
            ATerm o_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_20;
      }
    t = term_p_20;
    t = debug_1_0(b_1, t);
    t = (ATerm) ATmakeAppl(sym__2, q_4, term_h_13);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm g_5 (ATerm t_4, ATerm u_4, ATerm w_4, ATerm t)
{
  t = SSL_open_file(t_4, u_4);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm a_5 = NULL,c_5 = NULL,d_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_5(a_5, t);
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            t = g_5(c_5, d_5, a_5, t);
          }
      }
    }
  else
    {
      t = f_5(a_5, t);
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
  ATerm i_5 = NULL,j_5 = NULL,m_5 = NULL;
  t = term_t_20;
  t = new_0_0(t);
  i_5 = t;
  t = term_v_20;
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_5, term_v_20);
  t = y_7(i_5, j_5, t);
  m_5 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL;
        t = (ATerm) ATinsert(ATempty, term_z_20);
        q_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_5, (ATerm) ATinsert(ATempty, term_z_20));
        t = s_7(m_5, q_5, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = m_5;
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL;
  t = new_file_0_0(t);
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_5, term_h_13);
  t = open_file_0_0(t);
  t = term_t_20;
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_5, term_t_20);
  t = g_7(c_1, t_5, u_5, t);
  t = t_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  n_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_3 = NULL,j_3 = NULL;
      t = n_6;
      t = xtc_new_file_0_0(t);
      f_3 = t;
      t = n_0(t);
      j_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_3, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_b_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(f_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_3);
    }
  else
    {
      ATerm q_3 = NULL,r_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_6;
      t = xtc_new_file_0_0(t);
      q_3 = t;
      t = n_0(t);
      r_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_3), term_b_21), o_6), term_c_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(q_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_3);
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm t_6 = NULL,z_6 = NULL,h_7 = NULL;
  t = basename_1_0(_id, t);
  h_7 = t;
  t = term_t_20;
  t = f_85(t);
  z_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_6), term_d_21), h_7);
  t_6 = t;
  t = SSL_concat_strings(t_6);
  return(t);
}
ATerm if_keep1_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm x_7 = NULL;
  x_7 = t;
  {
    ATerm f_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_8 = NULL;
        t = term_j_21;
        t = get_config_0_0(t);
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_8, term_g_13);
        t = geq_0_0(t);
        t = x_7;
        t = i_89(t);
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = f_21;
        t = x_7;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_8 = NULL;
        t = term_a_13;
        t = get_config_0_0(t);
        q_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_8, term_b_14);
        t = geq_0_0(t);
        t = m_8;
        t = h_88(t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = m_8;
      }
  }
  return(t);
}
ATerm i_7 (ATerm a_25, ATerm b_25, ATerm t)
{
  t = SSL_rename(a_25, b_25);
  return(t);
}
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  s_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_4 = NULL;
        t = s_9;
        t = l_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_q_21;
        a_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_9, term_q_21);
        t = t_7(t_9, a_4, t);
        t = SSL_remove(t_9);
        t = term_q_21;
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_4 = NULL;
              t = s_9;
              t = l_0(t);
              l_4 = t;
              {
                ATerm t_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_4 = NULL;
                    m_4 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = m_4;
                      }
                    else
                      {
                        t = m_4;
                        if((t_9 != t))
                          {
                            _fail(t);
                          }
                        t = m_4;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_21;
                  }
                t = (ATerm) ATmakeAppl(sym__2, t_9, l_4);
                t = i_7(t_9, l_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_4);
              }
              ;
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              t = s_9;
              t = l_0(t);
              if((t_9 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_9);
            }
        }
      }
  }
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = debug_1_0(f_1, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  t = term_w_19;
  i_10 = t;
  t = (ATerm) ATinsert(ATempty, term_x_21);
  j_10 = t;
  t = SSL_printnl(i_10, j_10);
  t = h_10;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_a_22;
  t = get_config_0_0(t);
  t = map_1_0(q_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_10), term_a_22);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_a_22;
  t = get_config_0_0(t);
  t = map_1_0(w_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_10), term_a_22);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL;
  t = if_verbose6_1_0(d_1, t);
  c_10 = t;
  t = guarantee_extension_1_0(h_1, t);
  b_10 = t;
  t = c_10;
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL;
        t = b_10;
        t = find_in_includes_1_0(i_1, t);
        d_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_10);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        {
          ATerm g_10 = NULL;
          ATerm h_2 (ATerm t)
          {
            t = not_null(b_10);
            return(t);
          }
          t = if_verbose2_1_0(k_1, t);
          t = guarantee_extension_1_0(l_1, t);
          if(((g_10 != NULL) && (g_10 != t)))
            _fail(t);
          else
            g_10 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_10));
          {
            ATerm f_22 = t;
            int i_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_10 = NULL,l_10 = NULL,e_1 = NULL;
                l_10 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm j_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_10);
                k_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_10));
                e_1 = t;
                t = SSLsetAnnotations(e_1, k_10);
                LocalPopChoice(i_22);
                t = xtc_transform_file_2_0(n_1, p_1, t);
              }
            else
              {
                t = f_22;
                t = xtc_transform_term_2_0(t_1, u_1, t);
              }
            {
              ATerm k_22 = t;
              int l_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_10 = NULL,v_10 = NULL;
                  v_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      u_10 = ATgetArgument(t, 0);
                      {
                        ATerm v_4 = NULL,g_1 = NULL;
                        t = SSLgetAnnotations(v_10);
                        v_4 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, u_10);
                        g_1 = t;
                        t = SSLsetAnnotations(g_1, v_4);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = v_10;
                    }
                  LocalPopChoice(l_22);
                  t = xtc_transform_file_2_0(x_1, c_2, t);
                }
              else
                {
                  t = k_22;
                  t = xtc_transform_term_2_0(f_2, g_2, t);
                }
              t = rename_to_1_0(h_2, t);
            }
          }
        }
      }
  }
  return(t);
}
ATerm j_7 (ATerm e_48, ATerm x_464, ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm y_10 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
    y_10 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_48)), term_p_22), y_10);
    d_11 = t;
    t = SSL_concat_strings(d_11);
    b_11 = t;
    t = (ATerm) ATinsert(ATempty, term_z_20);
    c_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_11, (ATerm) ATinsert(ATempty, term_z_20));
    t = s_7(b_11, c_11, t);
    return(t);
  }
  t = not_null(x_464);
  t = fetch_elem_1_0(i_2, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,g_11 = NULL;
  ATerm j_2 (ATerm t)
  {
    t = debug_1_0(z_69, t);
    return(t);
  }
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  t = term_a_22;
  t = get_config_0_0(t);
  if(((e_11 != NULL) && (e_11 != t)))
    _fail(t);
  else
    e_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), not_null(e_11));
  t = j_7(not_null(g_11), not_null(e_11), t);
  t = if_verbose2_1_0(j_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_s_22;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm r_11 = NULL,t_11 = NULL,u_11 = NULL;
  r_11 = t;
  t = term_w_19;
  t_11 = t;
  t = (ATerm) ATinsert(ATempty, term_u_22);
  u_11 = t;
  t = SSL_printnl(t_11, u_11);
  t = r_11;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = debug_1_0(l_3, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm l_11 = NULL,o_11 = NULL;
  t = if_verbose6_1_0(l_2, t);
  l_11 = t;
  t = guarantee_extension_1_0(v_2, t);
  o_11 = t;
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL;
        t = find_in_includes_1_0(x_2, t);
        p_11 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_11);
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm e_3 (ATerm t)
          {
            t = not_null(o_11);
            return(t);
          }
          t = if_verbose2_1_0(y_2, t);
          t = not_null(l_11);
          t = get_syntax_definition_0_0(t);
          {
            ATerm y_22 = t;
            int b_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_12 = NULL,g_12 = NULL;
                g_12 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    f_12 = ATgetArgument(t, 0);
                    {
                      ATerm n_5 = NULL,j_1 = NULL;
                      t = SSLgetAnnotations(g_12);
                      n_5 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, f_12);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, n_5);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = g_12;
                  }
                LocalPopChoice(b_23);
                {
                  ATerm b_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_11)), term_e_23);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(z_2, b_3, t);
                }
              }
            else
              {
                t = y_22;
                {
                  ATerm d_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_11)), term_e_23);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(c_3, d_3, t);
                }
              }
            t = rename_to_1_0(e_3, t);
          }
        }
      }
    t = if_verbose6_1_0(i_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL;
        t = term_a_13;
        t = get_config_0_0(t);
        l_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_12, term_v_13);
        t = geq_0_0(t);
        t = j_12;
        t = g_88(t);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = j_12;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_76 (ATerm), ATerm t)
{
  ATerm o_12 = NULL;
  ATerm m_3 (ATerm t)
  {
    t = u_76(t);
    if(((o_12 != NULL) && (o_12 != t)))
      _fail(t);
    else
      o_12 = t;
    return(t);
  }
  t = fetch_1_0(m_3, t);
  t = not_null(o_12);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_12 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_h_23;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm y_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_z_20);
      y_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_12, (ATerm) ATinsert(ATempty, term_z_20));
      t = s_7(v_12, y_12, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_k_23;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = debug_1_0(w_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm c_13 = NULL,y_13 = NULL,z_13 = NULL;
  t = if_verbose6_1_0(n_3, t);
  y_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_6 = NULL,d_6 = NULL,m_1 = NULL;
        t = SSLgetAnnotations(y_13);
        a_6 = t;
        t = z_13;
        t = guarantee_extension_1_0(t_3, t);
        d_6 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_6);
        m_1 = t;
        t = SSLsetAnnotations(m_1, a_6);
        t = read_from_0_0(t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = n_23;
        {
          ATerm v_6 = NULL,w_6 = NULL,y_6 = NULL,o_1 = NULL;
          t = SSLgetAnnotations(y_13);
          w_6 = t;
          t = z_13;
          t = guarantee_extension_1_0(u_3, t);
          y_6 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, y_6);
          o_1 = t;
          t = SSLsetAnnotations(o_1, w_6);
          t = read_from_0_0(t);
          v_6 = t;
          t = SSL_explode_term(v_6);
          if(match_cons(t, sym__2))
            {
              c_13 = ATgetArgument(t, 0);
              {
                ATerm q_23 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, c_13)));
        }
      }
    t = if_verbose6_1_0(v_3, t);
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = debug_1_0(b_4, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm s_14 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      s_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = debug_1_0(i_4, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm h_14 = NULL;
  t = if_verbose6_1_0(y_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      h_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_23;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        {
          ATerm x_23 = t;
          int y_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_14 (ATerm j_14, ATerm t)
              {
                ATerm l_14 = NULL,m_14 = NULL;
                t = term_w_19;
                l_14 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_24), not_null(h_14)), term_c_24), j_14), term_z_23);
                m_14 = t;
                t = SSL_printnl(l_14, m_14);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_24), not_null(h_14)), term_c_24), j_14), term_z_23);
                _fail(t);
                return(t);
              }
              ATerm n_14 = NULL,o_14 = NULL;
              t = get_meta_0_0(t);
              o_14 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  n_14 = ATgetArgument(t, 0);
                  {
                    ATerm f_24 = t;
                    int g_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_14;
                        t = fetch_elem_1_0(f_4, t);
                        ;
                        LocalPopChoice(g_24);
                      }
                    else
                      {
                        t = f_24;
                        t = t_14(o_14, t);
                      }
                  }
                }
              else
                {
                  t = t_14(o_14, t);
                }
              ;
              LocalPopChoice(y_23);
            }
          else
            {
              t = x_23;
              t = term_h_24;
            }
        }
      }
    t = if_verbose2_1_0(g_4, t);
  }
  return(t);
}
ATerm basename_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL;
  if(((c_15 != NULL) && (c_15 != t)))
    _fail(t);
  else
    c_15 = t;
  t = SSL_explode_string(not_null(c_15));
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_17 (ATerm t)
        {
          ATerm x_16 = NULL,z_16 = NULL,a_17 = NULL;
          x_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_16 = ATgetFirst((ATermList) t);
              a_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm k_24 = t;
            int n_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_8 = NULL,l_8 = NULL,r_1 = NULL;
                t = SSLgetAnnotations(x_16);
                g_8 = t;
                t = a_17;
                t = e_17(t);
                l_8 = t;
                t = (ATerm) ATinsert(CheckATermList(l_8), z_16);
                r_1 = t;
                t = SSLsetAnnotations(r_1, g_8);
                ;
                LocalPopChoice(n_24);
              }
            else
              {
                t = k_24;
                {
                  ATerm o_24 = t;
                  int p_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_8 = NULL,s_1 = NULL;
                      t = SSLgetAnnotations(x_16);
                      x_8 = t;
                      t = z_16;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(a_17), z_16);
                      s_1 = t;
                      t = SSLsetAnnotations(s_1, x_8);
                      ;
                      LocalPopChoice(p_24);
                    }
                  else
                    {
                      t = o_24;
                      {
                        ATerm n_9 = NULL,x_9 = NULL,v_1 = NULL;
                        t = SSLgetAnnotations(x_16);
                        n_9 = t;
                        t = z_16;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = a_17;
                        t = d_85(t);
                        x_9 = t;
                        t = (ATerm) ATinsert(CheckATermList(x_9), z_16);
                        v_1 = t;
                        t = SSLsetAnnotations(v_1, n_9);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = e_17(t);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
      }
    if(((b_15 != NULL) && (b_15 != t)))
      _fail(t);
    else
      b_15 = t;
    t = SSL_implode_string(not_null(b_15));
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = debug_1_0(n_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_q_24;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_s_24);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_s_24);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,r_18 = NULL,p_2 = NULL;
  t = if_verbose6_1_0(k_4, t);
  if(((j_18 != NULL) && (j_18 != t)))
    _fail(t);
  else
    j_18 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((r_18 != NULL) && (r_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(j_18));
  if(((k_18 != NULL) && (k_18 != t)))
    _fail(t);
  else
    k_18 = t;
  t = not_null(r_18);
  t = basename_1_0(_id, t);
  if(((i_18 != NULL) && (i_18 != t)))
    _fail(t);
  else
    i_18 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_18));
  if(((p_2 != NULL) && (p_2 != t)))
    _fail(t);
  else
    p_2 = t;
  t = SSLsetAnnotations(not_null(p_2), not_null(k_18));
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      if(((h_18 != NULL) && (h_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(j_18);
  {
    ATerm z_24 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_18 = ATgetArgument(t, 0);
            {
              ATerm x_10 = NULL,q_2 = NULL;
              t = SSLgetAnnotations(not_null(j_18));
              x_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_18);
              q_2 = t;
              t = SSLsetAnnotations(q_2, x_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = not_null(j_18);
          }
        LocalPopChoice(e_25);
        {
          ATerm p_4 (ATerm t)
          {
            ATerm d_19 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(r_4, t);
            d_19 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_19), not_null(h_18)), term_g_25), term_f_25);
            return(t);
          }
          t = xtc_transform_file_2_0(o_4, p_4, t);
        }
      }
    else
      {
        t = z_24;
        {
          ATerm x_4 (ATerm t)
          {
            ATerm e_19 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(y_4, t);
            e_19 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_19), not_null(h_18)), term_g_25), term_f_25);
            return(t);
          }
          t = xtc_transform_term_2_0(s_4, x_4, t);
        }
      }
    {
      ATerm h_25 = t;
      int i_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_19 = NULL,r_19 = NULL;
          r_19 = t;
          if(match_cons(t, sym_FILE_1))
            {
              o_19 = ATgetArgument(t, 0);
              {
                ATerm i_11 = NULL,s_2 = NULL;
                t = SSLgetAnnotations(r_19);
                i_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, o_19);
                s_2 = t;
                t = SSLsetAnnotations(s_2, i_11);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = r_19;
            }
          LocalPopChoice(i_25);
          t = xtc_transform_file_2_0(z_4, pass_verbose_0_0, t);
        }
      else
        {
          t = h_25;
          t = xtc_transform_term_2_0(b_5, pass_verbose_0_0, t);
        }
      {
        ATerm e_5 (ATerm t)
        {
          ATerm h_5 (ATerm t)
          {
            t = not_null(i_18);
            t = guarantee_extension_1_0(k_5, t);
            return(t);
          }
          t = copy_to_1_0(h_5, t);
          return(t);
        }
        t = if_keep1_1_0(e_5, t);
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_20 = NULL,b_20 = NULL;
              b_20 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  a_20 = ATgetArgument(t, 0);
                  {
                    ATerm x_11 = NULL,t_2 = NULL;
                    t = SSLgetAnnotations(b_20);
                    x_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, a_20);
                    t_2 = t;
                    t = SSLsetAnnotations(t_2, x_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = b_20;
                }
              LocalPopChoice(k_25);
              t = xtc_transform_file_2_0(l_5, pass_verbose_0_0, t);
            }
          else
            {
              t = j_25;
              t = xtc_transform_term_2_0(o_5, pass_verbose_0_0, t);
            }
          {
            ATerm l_25 = t;
            int m_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_20 = NULL,n_20 = NULL;
                n_20 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    k_20 = ATgetArgument(t, 0);
                    {
                      ATerm p_12 = NULL,u_2 = NULL;
                      t = SSLgetAnnotations(n_20);
                      p_12 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
                      u_2 = t;
                      t = SSLsetAnnotations(u_2, p_12);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = n_20;
                  }
                LocalPopChoice(m_25);
                t = xtc_transform_file_2_0(p_5, pass_verbose_0_0, t);
              }
            else
              {
                t = l_25;
                t = xtc_transform_term_2_0(r_5, pass_verbose_0_0, t);
              }
          }
        }
      }
    }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm y_76 (ATerm), ATerm t)
{
  ATerm r_22 (ATerm t)
  {
    ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
    o_22 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_22 = ATgetFirst((ATermList) t);
        n_22 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_13 = NULL,f_13 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(o_22);
          b_13 = t;
          t = n_22;
          t = r_22(t);
          f_13 = t;
          t = (ATerm) ATinsert(CheckATermList(f_13), m_22);
          h_6 = t;
          t = SSLsetAnnotations(h_6, b_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_22;
        t = y_76(t);
      }
    return(t);
  }
  t = r_22(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_21 = NULL,g_21 = NULL,i_21 = NULL;
  e_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_21;
    }
  else
    {
      ATerm v_5 (ATerm t)
      {
        t = not_null(i_21);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_21 != NULL) && (g_21 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_21 = ATgetFirst((ATermList) t);
          if(((i_21 != NULL) && (i_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(g_21);
      t = at_end_1_0(v_5, t);
    }
  return(t);
}
ATerm r_23 (ATerm z_22, ATerm t)
{
  ATerm a_23 = NULL;
  t = SSL_explode_term(z_22);
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_23;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,m_23 = NULL;
  if(((m_23 != NULL) && (m_23 != t)))
    _fail(t);
  else
    m_23 = t;
  if(match_cons(t, sym__2))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 (ATerm t)
            {
              t = not_null(d_23);
              return(t);
            }
            t = not_null(c_23);
            t = at_end_1_0(w_5, t);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            t = r_23(not_null(m_23), t);
          }
      }
    }
  else
    {
      t = r_23(not_null(m_23), t);
    }
  return(t);
}
ATerm k_7 (ATerm w_47, ATerm v_47, ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,d_24 = NULL;
  t = w_47;
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = (ATerm) ATempty;
      }
    b_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_47, b_24);
    t = conc_0_0(t);
    a_24 = t;
    t = term_s_25;
    d_24 = t;
    t = SSL_table_put(d_24, w_47, a_24);
    t = (ATerm) ATmakeAppl(sym__3, term_s_25, w_47, a_24);
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  if(((m_24 != NULL) && (m_24 != t)))
    _fail(t);
  else
    m_24 = t;
  t = SSL_explode_string(not_null(m_24));
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_25 (ATerm t)
        {
          ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
          v_25 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_25 = ATgetFirst((ATermList) t);
              x_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm z_25 = t;
            int a_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_14 = NULL,i_14 = NULL,k_6 = NULL;
                t = SSLgetAnnotations(v_25);
                e_14 = t;
                t = x_25;
                t = y_25(t);
                i_14 = t;
                t = (ATerm) ATinsert(CheckATermList(i_14), w_25);
                k_6 = t;
                t = SSLsetAnnotations(k_6, e_14);
                ;
                LocalPopChoice(a_26);
              }
            else
              {
                t = z_25;
                {
                  ATerm y_14 = NULL,l_6 = NULL;
                  t = SSLgetAnnotations(v_25);
                  y_14 = t;
                  t = w_25;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, w_25);
                  l_6 = t;
                  t = SSLsetAnnotations(l_6, y_14);
                }
              }
          }
          return(t);
        }
        t = y_25(t);
        ;
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = (ATerm) ATempty;
      }
    if(((l_24 != NULL) && (l_24 != t)))
      _fail(t);
    else
      l_24 = t;
    t = SSL_implode_string(not_null(l_24));
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm b_26 = NULL;
  ATerm x_5 (ATerm t)
  {
    ATerm c_26 = NULL,d_26 = NULL;
    c_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), c_26);
    t = z_7(not_null(b_26), c_26, t);
    d_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_26, d_26);
    return(t);
  }
  if(((b_26 != NULL) && (b_26 != t)))
    _fail(t);
  else
    b_26 = t;
  t = SSL_table_keys(not_null(b_26));
  t = map_1_0(x_5, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  {
    ATerm e_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_26 = NULL;
        t = term_a_13;
        t = get_config_0_0(t);
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_26, term_t_18);
        t = geq_0_0(t);
        t = f_26;
        t = j_88(t);
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = e_26;
        t = f_26;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm m_26 = NULL;
  m_26 = t;
  {
    ATerm h_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_26 = NULL;
        t = term_a_13;
        t = get_config_0_0(t);
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_26, term_a_16);
        t = geq_0_0(t);
        t = m_26;
        t = i_88(t);
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = h_26;
        t = m_26;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm y_26 = NULL;
  y_26 = t;
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_27 = NULL;
        t = term_a_13;
        t = get_config_0_0(t);
        d_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_27, term_g_14);
        t = geq_0_0(t);
        t = y_26;
        t = k_88(t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = y_26;
      }
  }
  return(t);
}
ATerm m_7 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm d_35, ATerm c_35, ATerm t)
{
  t = q_80(t);
  {
    ATerm y_5 (ATerm t)
    {
      ATerm j_27 = NULL;
      j_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_35), j_27);
      t = p_80(t);
      return(t);
    }
    t = fetch_1_0(y_5, t);
    t = not_null(c_35);
  }
  return(t);
}
ATerm n_7 (ATerm m_80 (ATerm), ATerm z_34, ATerm y_34, ATerm t)
{
  ATerm s_28 (ATerm t)
  {
    ATerm k_28 = NULL,m_28 = NULL,n_28 = NULL;
    k_28 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(y_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_28 = ATgetFirst((ATermList) t);
            n_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_26 = t;
          int p_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_28;
              {
                ATerm z_5 (ATerm t)
                {
                  t = not_null(y_34);
                  return(t);
                }
                t = m_7(m_80, z_5, not_null(m_28), not_null(n_28), t);
                t = s_28(t);
              }
              ;
              LocalPopChoice(p_26);
            }
          else
            {
              t = n_26;
              {
                ATerm t_15 = NULL,x_15 = NULL,d_9 = NULL;
                t = SSLgetAnnotations(k_28);
                t_15 = t;
                t = n_28;
                t = s_28(t);
                x_15 = t;
                t = (ATerm) ATinsert(CheckATermList(x_15), m_28);
                d_9 = t;
                t = SSLsetAnnotations(d_9, t_15);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(z_34);
  t = s_28(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm o_29 = NULL;
  if(match_cons(t, sym__2))
    {
      o_29 = ATgetArgument(t, 0);
      if((o_29 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm n_46, ATerm o_46, ATerm p_46, ATerm t)
{
  ATerm a_29 = NULL,g_29 = NULL,h_29 = NULL;
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_26 = ATgetArgument(t, 0);
            ATerm t_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
        t = z_7(n_46, o_46, t);
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        t = (ATerm) ATempty;
      }
    h_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_29, p_46);
    t = n_7(b_6, h_29, p_46, t);
    g_29 = t;
    t = SSL_table_put(n_46, o_46, g_29);
    t = a_29;
  }
  return(t);
}
ATerm p_7 (ATerm m_88 (ATerm), ATerm x_46, ATerm w_46, ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm p_29 = NULL,q_29 = NULL;
    if(match_cons(t, sym__2))
      {
        p_29 = ATgetArgument(t, 0);
        q_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_46), p_29, q_29);
    t = m_88(t);
    return(t);
  }
  t = not_null(w_46);
  t = map_1_0(c_6, t);
  return(t);
}
ATerm s_7 (ATerm u_48, ATerm v_48, ATerm t)
{
  t = SSL_access(u_48, v_48);
  return(t);
}
ATerm v_30 (ATerm i_30, ATerm t)
{
  t = SSL_fclose(i_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_30 = NULL,q_30 = NULL;
  q_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_30 = ATgetArgument(t, 0);
      {
        ATerm u_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_30);
            ;
            LocalPopChoice(v_26);
          }
        else
          {
            t = u_26;
            t = v_30(q_30, t);
          }
      }
    }
  else
    {
      t = v_30(q_30, t);
    }
  return(t);
}
ATerm q_7 (ATerm g_28, ATerm t)
{
  t = SSL_read_term_from_stream(g_28);
  return(t);
}
ATerm r_7 (ATerm c_49, ATerm d_49, ATerm t)
{
  ATerm w_30 = NULL;
  t = SSL_fopen(c_49, d_49);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_30);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_30 = NULL;
  t = SSL_stdin_stream();
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_30 = NULL;
  t = SSL_stdout_stream();
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_30 = NULL;
  t = SSL_stderr_stream();
  z_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_30);
  return(t);
}
ATerm t_32 (ATerm f_31, ATerm t)
{
  ATerm g_31 = NULL;
  t = SSL_explode_term(f_31);
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_26 = ATgetArgument(t, 1);
        if(((ATgetType(x_26) == AT_LIST) && !(ATisEmpty(x_26))))
          {
            g_31 = ATgetFirst((ATermList) x_26);
            {
              ATerm z_26 = (ATerm) ATgetNext((ATermList) x_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_31;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_31;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_31;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_31;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm u_32 (ATerm k_31, ATerm l_31, ATerm m_31, ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,u_31 = NULL,f_9 = NULL;
  t = SSLgetAnnotations(m_31);
  p_31 = t;
  t = k_31;
  if(match_cons(t, sym_Path_1))
    {
      u_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_31, l_31);
  f_9 = t;
  t = SSLsetAnnotations(f_9, p_31);
  if(match_cons(t, sym__2))
    {
      n_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(n_31, o_31, t);
  return(t);
}
ATerm v_32 (ATerm w_31, ATerm x_31, ATerm z_31, ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,d_32 = NULL,h_32 = NULL,k_9 = NULL;
  t = SSLgetAnnotations(z_31);
  d_32 = t;
  t = SSL_is_string(w_31);
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_32, x_31);
  k_9 = t;
  t = SSLsetAnnotations(k_9, d_32);
  if(match_cons(t, sym__2))
    {
      a_32 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(a_32, b_32, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,s_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      ATerm b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_32 = t;
  if(match_cons(t, sym__2))
    {
      l_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
      {
        ATerm c_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_32(k_32, t);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = c_27;
            {
              ATerm f_27 = t;
              int g_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_32(l_32, s_32, k_32, t);
                  ;
                  LocalPopChoice(g_27);
                }
              else
                {
                  t = f_27;
                  t = v_32(l_32, s_32, k_32, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_32(k_32, t);
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  ATerm i_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_33 = NULL;
      a_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_33, term_l_27);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = i_27;
      t = debug_1_0(e_6, t);
      _fail(t);
    }
  y_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(z_32, t);
  x_32 = t;
  t = y_32;
  t = fclose_0_0(t);
  t = x_32;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_33 = NULL,g_33 = NULL;
      d_33 = t;
      t = (ATerm) ATinsert(ATempty, term_q_27);
      g_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_33, (ATerm) ATinsert(ATempty, term_q_27));
      t = s_7(d_33, g_33, t);
      LocalPopChoice(p_27);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = o_27;
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_27 = t;
            if((PushChoice() == 0))
              {
                ATerm h_33 = NULL,i_33 = NULL;
                h_33 = t;
                t = (ATerm) ATinsert(ATempty, term_z_20);
                i_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_33, (ATerm) ATinsert(ATempty, term_z_20));
                t = s_7(h_33, i_33, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_27;
              }
            t = debug_1_0(f_6, t);
            ;
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            t = debug_1_0(g_6, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = debug_1_0(j_6, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = debug_1_0(p_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  t = term_w_19;
  x_33 = t;
  t = (ATerm) ATinsert(ATempty, term_w_27);
  y_33 = t;
  t = SSL_printnl(x_33, y_33);
  t = w_33;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm b_34 = NULL,e_34 = NULL,f_34 = NULL;
  if(match_cons(t, sym__3))
    {
      b_34 = ATgetArgument(t, 0);
      e_34 = ATgetArgument(t, 1);
      f_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_7(b_34, e_34, f_34, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,l_34 = NULL;
  g_34 = t;
  t = term_w_19;
  h_34 = t;
  t = (ATerm) ATinsert(ATempty, term_x_27);
  l_34 = t;
  t = SSL_printnl(h_34, l_34);
  t = g_34;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm o_34 = NULL,r_34 = NULL,u_34 = NULL;
  o_34 = t;
  t = term_w_19;
  r_34 = t;
  t = (ATerm) ATinsert(ATempty, term_w_27);
  u_34 = t;
  t = SSL_printnl(r_34, u_34);
  t = o_34;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  j_33 = t;
  t = if_verbose5_1_0(i_6, t);
  {
    ATerm y_27 = t;
    if((PushChoice() == 0))
      {
        ATerm u_33 = NULL,v_33 = NULL;
        t = term_z_27;
        u_33 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_33);
        v_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_27, (ATerm) ATmakeAppl(sym_Imported_1, j_33));
        t = z_7(u_33, v_33, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_27;
      }
    l_33 = t;
    t = term_z_27;
    r_33 = t;
    t = term_c_28;
    s_33 = t;
    t = (ATerm) ATinsert(ATempty, j_33);
    t_33 = t;
    t = SSL_table_put(r_33, s_33, t_33);
    t = l_33;
    t = if_verbose4_1_0(m_6, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(q_6, t);
    k_33 = t;
    t = term_z_27;
    q_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_27, k_33);
    t = p_7(r_6, q_33, k_33, t);
    t = if_verbose6_1_0(s_6, t);
    t = term_z_27;
    m_33 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, j_33);
    o_33 = t;
    t = (ATerm) ATempty;
    p_33 = t;
    t = SSL_table_put(m_33, o_33, p_33);
    t = (ATerm) ATmakeAppl(sym__3, term_z_27, (ATerm)ATmakeAppl(sym_Imported_1, j_33), (ATerm) ATempty);
    t = if_verbose4_1_0(u_6, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
  u_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_35;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_35 = ATgetFirst((ATermList) t);
          w_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_16 = NULL,i_17 = NULL,j_17 = NULL,p_9 = NULL;
            t = SSLgetAnnotations(u_35);
            y_16 = t;
            t = v_35;
            t = d_84(t);
            i_17 = t;
            t = w_35;
            t = filter_1_0(d_84, t);
            j_17 = t;
            t = (ATerm) ATinsert(CheckATermList(j_17), i_17);
            p_9 = t;
            t = SSLsetAnnotations(p_9, y_16);
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            t = w_35;
            t = filter_1_0(d_84, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm c_36 (ATerm t)
  {
    ATerm f_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_85(t);
        t = c_36(t);
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = f_28;
      }
    return(t);
  }
  t = c_36(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm j_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = j_28;
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_36 = NULL;
            t = term_r_28;
            d_36 = t;
            t = SSL_getenv(d_36);
            ;
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = debug_1_0(a_7, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL;
  t = term_z_27;
  k_36 = t;
  t = term_u_28;
  l_36 = t;
  t = term_v_28;
  t = z_7(k_36, l_36, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm w_28 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_28;
      }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = debug_1_0(w_7, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm e_36 = NULL;
  t = if_verbose5_1_0(x_6, t);
  e_36 = t;
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_36 = NULL,g_36 = NULL;
        t = term_z_27;
        f_36 = t;
        t = term_c_28;
        g_36 = t;
        t = term_b_29;
        t = z_7(f_36, g_36, t);
        ;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        {
          ATerm h_36 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          h_36 = t;
          t = repeat_1_0(f_7, t);
          t = h_36;
        }
      }
    t = e_36;
    t = if_verbose5_1_0(l_7, t);
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = debug_1_0(d_8, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm n_37 (ATerm p_36, ATerm t)
{
  ATerm r_36 = NULL,u_36 = NULL,v_36 = NULL;
  t = term_z_27;
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_36);
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_27, (ATerm) ATmakeAppl(sym_Tool_1, p_36));
  t = z_7(u_36, v_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_29 = ATgetFirst((ATermList) t);
      if(match_cons(d_29, sym__2))
        {
          ATerm f_29 = ATgetArgument(d_29, 0);
          r_36 = ATgetArgument(d_29, 1);
        }
      else
        _fail(t);
      {
        ATerm e_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_36;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = debug_1_0(h_8, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_z_27;
  t = table_getlist_0_0(t);
  t = debug_1_0(k_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
      t = if_verbose5_1_0(b_8, t);
      t = xtc_load_0_0(t);
      if(((c_37 != NULL) && (c_37 != t)))
        _fail(t);
      else
        c_37 = t;
      if(match_cons(t, sym__2))
        {
          a_37 = ATgetArgument(t, 0);
          b_37 = ATgetArgument(t, 1);
          {
            ATerm l_29 = t;
            int m_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
                t = term_z_27;
                if(((g_37 != NULL) && (g_37 != t)))
                  _fail(t);
                else
                  g_37 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_37));
                if(((h_37 != NULL) && (h_37 != t)))
                  _fail(t);
                else
                  h_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_27, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_37)));
                t = z_7(not_null(g_37), not_null(h_37), t);
                {
                  ATerm e_8 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((b_37 != NULL) && (b_37 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_37 = ATgetArgument(t, 0);
                        if(((f_37 != NULL) && (f_37 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_37 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_8, t);
                  t = not_null(f_37);
                }
                ;
                LocalPopChoice(m_29);
              }
            else
              {
                t = l_29;
                t = n_37(not_null(c_37), t);
              }
          }
        }
      else
        {
          t = n_37(not_null(c_37), t);
        }
      t = if_verbose5_1_0(f_8, t);
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm m_37 = NULL,r_17 = NULL,s_17 = NULL;
        m_37 = t;
        t = term_w_19;
        r_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_29), m_37), term_n_29);
        s_17 = t;
        t = SSL_printnl(r_17, s_17);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_29), m_37), term_n_29);
        t = if_verbose5_1_0(j_8, t);
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
ATerm t_7 (ATerm c_25, ATerm d_25, ATerm t)
{
  t = SSL_copy(c_25, d_25);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  e_38 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_17 = NULL;
        t = e_38;
        t = k_0(t);
        x_17 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = x_17;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = x_17;
          }
        t = (ATerm) ATmakeAppl(sym__2, f_38, x_17);
        t = t_7(f_38, x_17, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_38);
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_18 = NULL;
              t = e_38;
              t = k_0(t);
              e_18 = t;
              {
                ATerm w_29 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_18 = NULL;
                    f_18 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = f_18;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = f_18;
                          }
                        else
                          {
                            t = f_18;
                            if((f_38 != t))
                              {
                                _fail(t);
                              }
                            t = f_18;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_29;
                  }
                t = (ATerm) ATmakeAppl(sym__2, f_38, e_18);
                t = t_7(f_38, e_18, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, f_38);
              }
              ;
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              t = e_38;
              t = k_0(t);
              if((f_38 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_38);
            }
        }
      }
  }
  return(t);
}
ATerm u_7 (ATerm v_45, ATerm w_45, ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  k_38 = t;
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
        t = z_7(v_45, w_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_29 = ATgetFirst((ATermList) t);
            j_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_29);
        t = SSL_table_put(v_45, w_45, j_38);
        t = (ATerm) ATmakeAppl(sym__3, v_45, w_45, j_38);
      }
    else
      {
        t = x_29;
        t = SSL_table_remove(v_45, w_45);
        t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
      }
    t = k_38;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  if(((o_38 != NULL) && (o_38 != t)))
    _fail(t);
  else
    o_38 = t;
  t = y_86(t);
  if(((n_38 != NULL) && (n_38 != t)))
    _fail(t);
  else
    n_38 = t;
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_38 = NULL;
        t = term_j_20;
        q_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_38), term_j_20);
        t = z_7(not_null(n_38), q_38, t);
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_38 != NULL) && (m_38 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_38 = ATgetFirst((ATermList) t);
        if(((l_38 != NULL) && (l_38 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          l_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_20;
    if(((p_38 != NULL) && (p_38 != t)))
      _fail(t);
    else
      p_38 = t;
    t = SSL_table_put(not_null(n_38), not_null(p_38), not_null(l_38));
    t = not_null(m_38);
    {
      ATerm n_8 (ATerm t)
      {
        ATerm r_38 = NULL;
        r_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_38), r_38);
        t = u_7(not_null(n_38), r_38, t);
        return(t);
      }
      t = map_1_0(n_8, t);
      t = not_null(o_38);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_87(t);
      t = u_87(t);
      ;
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      t = u_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  u_38 = t;
  t = x_86(t);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_38, term_j_20);
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_39 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_30 = ATgetArgument(t, 0);
            ATerm h_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_20;
        b_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_38, term_j_20);
        t = z_7(t_38, b_39, t);
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        t = (ATerm) ATempty;
      }
    v_38 = t;
    t = term_j_20;
    w_38 = t;
    t = (ATerm) ATinsert(CheckATermList(v_38), (ATerm) ATempty);
    x_38 = t;
    t = SSL_table_put(t_38, w_38, x_38);
    t = u_38;
  }
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm k_39 = NULL;
  k_39 = t;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_39);
        ;
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = k_39;
      }
  }
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm c_90 (ATerm), ATerm t)
{
  ATerm e_39 = NULL;
  ATerm p_8 (ATerm t)
  {
    ATerm f_39 = NULL;
    f_39 = t;
    {
      ATerm l_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_39 = NULL,h_39 = NULL;
          t = term_a_21;
          g_39 = t;
          t = term_j_20;
          h_39 = t;
          t = term_o_30;
          t = z_7(g_39, h_39, t);
          ;
          LocalPopChoice(m_30);
        }
      else
        {
          t = l_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_39 != NULL) && (e_39 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_39 = ATgetFirst((ATermList) t);
          {
            ATerm p_30 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(e_39);
      t = map_1_0(r_8, t);
      t = f_39;
      t = end_scope_1_0(s_8, t);
    }
    return(t);
  }
  t = begin_scope_1_0(o_8, t);
  t = restore_always_2_0(c_90, p_8, t);
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      t = term_q_21;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm d_90 (ATerm), ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_39 = NULL;
        t = term_c_21;
        t = get_config_0_0(t);
        n_39 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_39);
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = term_h_23;
      }
    t = d_90(t);
    t = copy_to_1_0(u_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(t_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  o_39 = t;
  t = term_t_20;
  t = whoami_0_0(t);
  p_39 = t;
  t = term_w_19;
  r_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_31), p_39), term_a_31);
  s_39 = t;
  t = SSL_printnl(r_39, s_39);
  t = term_g_13;
  q_39 = t;
  t = SSL_exit(q_39);
  t = o_39;
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm u_39 = NULL;
  u_39 = t;
  if(match_string(t, "-k"))
    {
      t = u_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_39;
    }
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  t = SSL_string_to_int(v_39);
  w_39 = t;
  t = term_j_21;
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_21, w_39);
  t = c_8(x_39, w_39, t);
  t = v_39;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_c_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_8, w_8, y_8, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm z_39 = NULL;
  z_39 = t;
  if(match_string(t, "-S"))
    {
      t = z_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_39;
    }
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL;
  t = term_a_13;
  a_40 = t;
  t = term_d_31;
  b_40 = t;
  t = term_e_31;
  t = c_8(a_40, b_40, t);
  t = term_h_31;
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm c_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
  c_40 = t;
  t = SSL_string_to_int(c_40);
  d_40 = t;
  t = term_a_13;
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, d_40);
  t = c_8(e_40, d_40, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_40);
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm h_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  t = term_q_31;
  f_40 = t;
  t = term_t_20;
  g_40 = t;
  t = term_r_31;
  t = c_8(f_40, g_40, t);
  t = term_s_31;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_8, a_9, b_9, t);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = v_31;
      {
        ATerm c_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_9, e_9, g_9, t);
            ;
            LocalPopChoice(e_32);
          }
        else
          {
            t = c_32;
            t = Option_3_0(h_9, i_9, j_9, t);
          }
      }
    }
  return(t);
}
ATerm c_8 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm h_40 = NULL;
  t = term_s_25;
  h_40 = t;
  t = SSL_table_put(h_40, q_47, r_47);
  t = (ATerm) ATmakeAppl(sym__3, term_s_25, q_47, r_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
      t = term_t_20;
      t = d_0(t);
      m_40 = t;
      t = term_f_32;
      n_40 = t;
      t = term_g_32;
      o_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_32, term_g_32, m_40);
      t = a_8(n_40, o_40, m_40, t);
      _fail(t);
    }
  else
    {
      ATerm r_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_40 = ATgetFirst((ATermList) t);
          l_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_40;
      t = a_0(t);
      t = term_t_20;
      t = c_0(t);
      r_40 = t;
      t = (ATerm) ATinsert(CheckATermList(l_40), r_40);
    }
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm t_40 = NULL;
  t_40 = t;
  if(match_string(t, "-o"))
    {
      t = t_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_40;
    }
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  u_40 = t;
  t = term_b_21;
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_21, u_40);
  t = c_8(v_40, u_40, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_40);
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_9, m_9, o_9, t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm x_40 = NULL;
  x_40 = t;
  if(match_string(t, "-i"))
    {
      t = x_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_40;
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  y_40 = t;
  t = term_c_21;
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_21, y_40);
  t = c_8(z_40, y_40, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_40);
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_9, u_9, v_9, t);
  return(t);
}
ATerm a_8 (ATerm q_45, ATerm r_45, ATerm p_45, ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_32 = ATgetArgument(t, 0);
            ATerm p_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = z_7(q_45, r_45, t);
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        t = (ATerm) ATempty;
      }
    c_41 = t;
    t = (ATerm) ATinsert(CheckATermList(c_41), p_45);
    d_41 = t;
    t = SSL_table_put(q_45, r_45, d_41);
    t = b_41;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
      t = term_t_20;
      t = j_0(t);
      o_41 = t;
      t = term_f_32;
      p_41 = t;
      t = term_g_32;
      q_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_32, term_g_32, o_41);
      t = a_8(p_41, q_41, o_41, t);
      _fail(t);
    }
  else
    {
      ATerm u_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_41 = ATgetFirst((ATermList) t);
          l_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_41 = ATgetFirst((ATermList) t);
          n_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_41;
      t = h_0(t);
      t = m_41;
      t = i_0(t);
      u_41 = t;
      t = (ATerm) ATinsert(CheckATermList(n_41), u_41);
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm w_41 = NULL;
  w_41 = t;
  if(match_string(t, "-I"))
    {
      t = w_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = w_41;
    }
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  t = term_a_22;
  y_41 = t;
  t = (ATerm) ATinsert(ATempty, x_41);
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATempty, x_41));
  t = k_7(y_41, z_41, t);
  t = x_41;
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm e_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL;
  a_42 = t;
  t = term_w_23;
  b_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, a_42);
  t = c_8(b_42, a_42, t);
  t = a_42;
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm r_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
  c_42 = t;
  t = term_a_13;
  d_42 = t;
  t = term_d_31;
  e_42 = t;
  t = term_e_31;
  t = c_8(d_42, e_42, t);
  t = c_42;
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(w_9, z_9, a_10, t);
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      {
        ATerm e_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_10, f_10, o_10, t);
            ;
            LocalPopChoice(f_33);
          }
        else
          {
            t = e_33;
            t = Option_3_0(r_10, s_10, t_10, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,j_42 = NULL,k_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_20;
  t = whoami_0_0(t);
  f_42 = t;
  t = term_w_19;
  j_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_33), f_42);
  k_42 = t;
  t = SSL_printnl(j_42, k_42);
  t = term_g_13;
  g_42 = t;
  t = SSL_exit(g_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_7 (ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm a_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_43, m_43);
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = a_34;
      t = SSL_addr(l_43, m_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_42;
      t = a_83(t);
    }
  else
    {
      ATerm r_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_42 = ATgetFirst((ATermList) t);
          o_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_42;
      t = foldr_2_0(a_83, b_83, t);
      r_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_42, r_42);
      t = b_83(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_d_31;
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(a_19, b_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_42 = NULL,p_18 = NULL,q_18 = NULL;
  t = times_0_0(t);
  q_18 = t;
  t = SSL_explode_term(q_18);
  if(match_cons(t, sym__2))
    {
      ATerm d_34 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_18;
  t = foldr_2_0(z_10, a_11, t);
  u_42 = t;
  t = SSL_TicksToSeconds(u_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  if(match_cons(t, sym__2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_43;
        if((g_43 != t))
          {
            _fail(t);
          }
        t = f_43;
        ;
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        t = (ATerm) ATmakeAppl(sym__2, g_43, h_43);
        {
          ATerm k_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_43, h_43);
              ;
              LocalPopChoice(m_34);
            }
          else
            {
              t = k_34;
              t = SSL_gtr(g_43, h_43);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_43, h_43);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm n_43 = NULL;
  n_43 = t;
  {
    ATerm n_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_43 = NULL;
        t = term_a_13;
        t = get_config_0_0(t);
        p_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_43, term_g_13);
        t = geq_0_0(t);
        t = n_43;
        t = f_88(t);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = n_34;
        t = n_43;
      }
  }
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,w_43 = NULL,x_43 = NULL;
  t = run_time_0_0(t);
  t_43 = t;
  t = term_t_20;
  t = whoami_0_0(t);
  u_43 = t;
  t = term_w_19;
  w_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_34), t_43), term_l_13), u_43);
  x_43 = t;
  t = SSL_printnl(w_43, x_43);
  t = (ATerm) ATmakeAppl(sym__2, term_w_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_34), t_43), term_l_13), u_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_31;
  y_43 = t;
  t = SSL_exit(y_43);
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL;
  h_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_44 = ATgetArgument(t, 0);
          {
            ATerm d_20 = NULL,r_9 = NULL;
            t = SSLgetAnnotations(h_44);
            d_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_44);
            r_9 = t;
            t = SSLsetAnnotations(r_9, d_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_92 (ATerm), ATerm t)
{
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      t = fetch_1_0(h_11, t);
    }
  t = e_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_44 = ATgetFirst((ATermList) t);
      l_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_44 = NULL,q_44 = NULL;
        ATerm j_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_44)), not_null(q_44));
          return(t);
        }
        t = not_null(l_44);
        t = g_0(t);
        if(((p_44 != NULL) && (p_44 != t)))
          _fail(t);
        else
          p_44 = t;
        t = not_null(k_44);
        t = e_0(t);
        if(((q_44 != NULL) && (q_44 != t)))
          _fail(t);
        else
          q_44 = t;
        t = not_null(l_44);
        t = reverse_acc_2_0(e_0, j_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_20;
      t = g_0(t);
    }
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,y_9 = NULL;
  h_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_45);
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_45);
  y_9 = t;
  t = SSLsetAnnotations(y_9, f_45);
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm k_45 = NULL;
  k_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_45), term_w_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  ATerm x_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_35);
    }
  else
    {
      t = x_34;
      t = fetch_1_0(k_11, t);
    }
  t = term_b_35;
  t = echo_0_0(t);
  t = term_f_32;
  d_45 = t;
  t = term_g_32;
  e_45 = t;
  t = term_e_35;
  t = z_7(d_45, e_45, t);
  t = reverse_acc_2_0(_id, m_11, t);
  t = map_1_0(n_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm a_47 (ATerm t)
  {
    ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
    t_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_46 = ATgetFirst((ATermList) t);
        v_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_20 = NULL,y_20 = NULL,p_10 = NULL;
          t = SSLgetAnnotations(t_46);
          u_20 = t;
          t = u_46;
          t = s_76(t);
          y_20 = t;
          t = (ATerm) ATinsert(CheckATermList(v_46), y_20);
          p_10 = t;
          t = SSLsetAnnotations(p_10, u_20);
          ;
          LocalPopChoice(g_35);
        }
      else
        {
          t = f_35;
          {
            ATerm k_21 = NULL,n_21 = NULL,q_10 = NULL;
            t = SSLgetAnnotations(t_46);
            k_21 = t;
            t = v_46;
            t = a_47(t);
            n_21 = t;
            t = (ATerm) ATinsert(CheckATermList(n_21), u_46);
            q_10 = t;
            t = SSLsetAnnotations(q_10, k_21);
          }
        }
    }
    return(t);
  }
  t = a_47(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_35 = ATgetFirst((ATermList) t);
                ATerm k_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_47;
          }
        ;
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        t = (ATerm) ATinsert(ATempty, e_47);
      }
    f_47 = t;
    t = term_q_21;
    g_47 = t;
    t = SSL_printnl(g_47, f_47);
    t = e_47;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_33;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm y_7 (ATerm h_42, ATerm i_42, ATerm t)
{
  t = SSL_strcat(h_42, i_42);
  return(t);
}
ATerm debug_1_0 (ATerm n_72 (ATerm), ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL;
  m_47 = t;
  t = n_72(t);
  n_47 = t;
  t = term_w_19;
  o_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_47), n_47);
  p_47 = t;
  t = SSL_printnl(o_47, p_47);
  t = m_47;
  return(t);
}
ATerm map_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm r_48 (ATerm t)
  {
    ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
    o_48 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_48;
      }
    else
      {
        ATerm c_22 = NULL,g_22 = NULL,h_22 = NULL,w_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_48 = ATgetFirst((ATermList) t);
            q_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_48);
        c_22 = t;
        t = p_48;
        t = i_76(t);
        g_22 = t;
        t = q_48;
        t = r_48(t);
        h_22 = t;
        t = (ATerm) ATinsert(CheckATermList(h_22), g_22);
        w_10 = t;
        t = SSLsetAnnotations(w_10, c_22);
      }
    return(t);
  }
  t = r_48(t);
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
    }
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_n_35;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_35 = t;
  int p_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_49 = NULL;
      b_49 = t;
      t = SSL_is_string(b_49);
      ;
      LocalPopChoice(p_35);
    }
  else
    {
      t = o_35;
      {
        ATerm q_35 = t;
        int r_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_11, t);
            ;
            LocalPopChoice(r_35);
          }
        else
          {
            t = q_35;
            {
              ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
              l_49 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_49 = ATgetArgument(t, 0);
                  t = m_49;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_49 = ATgetArgument(t, 0);
                      t = m_49;
                      {
                        ATerm s_35 = t;
                        int t_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(t_35);
                          }
                        else
                          {
                            t = s_35;
                            t = debug_1_0(s_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_50 = NULL,e_50 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_49 = ATgetArgument(t, 0);
                          n_49 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_49;
                      t = eval_config_0_0(t);
                      d_50 = t;
                      t = n_49;
                      t = eval_config_0_0(t);
                      e_50 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_50, e_50);
                      t = y_7(d_50, e_50, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm z_7 (ATerm h_47, ATerm i_47, ATerm t)
{
  t = SSL_table_get(h_47, i_47);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL;
  k_50 = t;
  t = term_s_25;
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_25, k_50);
  t = z_7(l_50, k_50, t);
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_50 = NULL,o_50 = NULL;
        t = eval_config_0_0(t);
        m_50 = t;
        t = term_s_25;
        o_50 = t;
        t = SSL_table_put(o_50, k_50, m_50);
        t = m_50;
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
      }
  }
  return(t);
}
ATerm v_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL;
  t = term_z_35;
  u_50 = t;
  t = term_t_20;
  v_50 = t;
  t = term_a_36;
  t = c_8(u_50, v_50, t);
  return(t);
}
ATerm z_11 (ATerm t)
{
  t = term_b_36;
  return(t);
}
ATerm a_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  t = term_z_35;
  y_50 = t;
  t = term_t_20;
  z_50 = t;
  t = term_a_36;
  t = c_8(y_50, z_50, t);
  t = term_s_24;
  w_50 = t;
  t = term_t_20;
  x_50 = t;
  t = term_i_36;
  t = c_8(w_50, x_50, t);
  t = term_j_36;
  return(t);
}
ATerm d_12 (ATerm t)
{
  t = term_m_36;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_11, y_11, z_11, t);
      ;
      LocalPopChoice(o_36);
    }
  else
    {
      t = n_36;
      t = Option_3_0(a_12, c_12, d_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,w_11 = NULL;
  k_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_51 = ATgetFirst((ATermList) t);
      c_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_51);
  a_51 = t;
  t = b_51;
  t = x_63(t);
  i_51 = t;
  t = c_51;
  t = y_63(t);
  j_51 = t;
  t = (ATerm) ATinsert(CheckATermList(j_51), i_51);
  w_11 = t;
  t = SSLsetAnnotations(w_11, a_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,t_51 = NULL,v_51 = NULL,w_51 = NULL,b_12 = NULL;
  if(((p_51 != NULL) && (p_51 != t)))
    _fail(t);
  else
    p_51 = t;
  {
    ATerm q_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_36;
        t = c_94(t);
        ;
        LocalPopChoice(s_36);
      }
    else
      {
        t = q_36;
      }
    t = not_null(p_51);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_51 != NULL) && (r_51 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_51 = ATgetFirst((ATermList) t);
        if(((t_51 != NULL) && (t_51 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          t_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(p_51));
    if(((q_51 != NULL) && (q_51 != t)))
      _fail(t);
    else
      q_51 = t;
    t = term_z_33;
    if(((w_51 != NULL) && (w_51 != t)))
      _fail(t);
    else
      w_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_33, not_null(r_51));
    t = c_8(not_null(w_51), not_null(r_51), t);
    t = not_null(t_51);
    {
      ATerm g_52 (ATerm t)
      {
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_36 = t;
            int z_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_51 = NULL;
                z_51 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_51;
                ;
                LocalPopChoice(z_36);
              }
            else
              {
                t = y_36;
                t = c_94(t);
                t = Cons_2_0(_id, g_52, t);
              }
            ;
            LocalPopChoice(x_36);
          }
        else
          {
            t = w_36;
            {
              ATerm c_52 = NULL,d_52 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_52 = ATgetFirst((ATermList) t);
                  d_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_52), (ATerm) ATmakeAppl(sym_Undefined_1, c_52));
            }
          }
        return(t);
      }
      t = g_52(t);
      if(((v_51 != NULL) && (v_51 != t)))
        _fail(t);
      else
        v_51 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(v_51)), (ATerm) ATmakeAppl(sym_Program_1, not_null(r_51)));
      if(((b_12 != NULL) && (b_12 != t)))
        _fail(t);
      else
        b_12 = t;
      t = SSLsetAnnotations(not_null(b_12), not_null(q_51));
    }
  }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm s_52 = NULL;
  s_52 = t;
  if(match_string(t, "--help"))
    {
      t = s_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_52;
        }
    }
  return(t);
}
ATerm k_12 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL;
  t = term_v_34;
  t_52 = t;
  t = term_t_20;
  u_52 = t;
  t = term_d_37;
  t = c_8(t_52, u_52, t);
  t = term_e_37;
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm n_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
  if(((n_52 != NULL) && (n_52 != t)))
    _fail(t);
  else
    n_52 = t;
  t = term_f_32;
  if(((p_52 != NULL) && (p_52 != t)))
    _fail(t);
  else
    p_52 = t;
  t = term_g_32;
  if(((q_52 != NULL) && (q_52 != t)))
    _fail(t);
  else
    q_52 = t;
  t = (ATerm) ATempty;
  if(((r_52 != NULL) && (r_52 != t)))
    _fail(t);
  else
    r_52 = t;
  t = SSL_table_put(not_null(p_52), not_null(q_52), not_null(r_52));
  t = not_null(n_52);
  {
    ATerm e_12 (ATerm t)
    {
      ATerm j_37 = t;
      int k_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_94(t);
          ;
          LocalPopChoice(k_37);
        }
      else
        {
          t = j_37;
          {
            ATerm l_37 = t;
            int o_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_12, k_12, m_12, t);
                ;
                LocalPopChoice(o_37);
              }
            else
              {
                t = l_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_12, t);
    {
      ATerm p_37 = t;
      int q_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_53 = NULL;
          b_53 = t;
          {
            ATerm r_37 = t;
            int s_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_23 = NULL;
                t = b_53;
                {
                  ATerm t_37 = t;
                  int u_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_34;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_37);
                    }
                  else
                    {
                      t = t_37;
                      t = fetch_1_0(n_12, t);
                    }
                  t = b_53;
                  t = default_system_usage_0_0(t);
                  t = term_d_31;
                  j_23 = t;
                  t = SSL_exit(j_23);
                }
                ;
                LocalPopChoice(s_37);
              }
            else
              {
                t = r_37;
                {
                  ATerm o_23 = NULL;
                  t = term_z_35;
                  t = get_config_0_0(t);
                  t = b_53;
                  t = default_system_about_0_0(t);
                  t = term_d_31;
                  o_23 = t;
                  t = SSL_exit(o_23);
                }
              }
          }
          ;
          LocalPopChoice(q_37);
        }
      else
        {
          t = p_37;
          {
            ATerm v_37 = t;
            int w_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
                ATerm q_12 (ATerm t)
                {
                  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,h_12 = NULL;
                  h_53 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      g_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_53);
                  f_53 = t;
                  t = g_53;
                  if(((l_52 != NULL) && (l_52 != t)))
                    _fail(t);
                  else
                    l_52 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_53);
                  h_12 = t;
                  t = SSLsetAnnotations(h_12, f_53);
                  return(t);
                }
                t = fetch_1_0(q_12, t);
                t = term_w_19;
                if(((d_53 != NULL) && (d_53 != t)))
                  _fail(t);
                else
                  d_53 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_52)), term_x_37);
                if(((e_53 != NULL) && (e_53 != t)))
                  _fail(t);
                else
                  e_53 = t;
                t = SSL_printnl(not_null(d_53), not_null(e_53));
                t = (ATerm) ATmakeAppl(sym__2, term_w_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_52)), term_x_37));
                t = default_system_usage_0_0(t);
                t = term_g_13;
                if(((c_53 != NULL) && (c_53 != t)))
                  _fail(t);
                else
                  c_53 = t;
                t = SSL_exit(not_null(c_53));
                ;
                LocalPopChoice(w_37);
              }
            else
              {
                t = v_37;
              }
          }
        }
      if(((m_52 != NULL) && (m_52 != t)))
        _fail(t);
      else
        m_52 = t;
      t = term_f_32;
      if(((o_52 != NULL) && (o_52 != t)))
        _fail(t);
      else
        o_52 = t;
      t = SSL_table_destroy(not_null(o_52));
      t = not_null(m_52);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  t = parse_options_1_0(g_92, t);
  m_53 = t;
  t = term_y_37;
  p_53 = t;
  t = SSL_table_create(p_53);
  t = term_y_37;
  n_53 = t;
  t = term_z_37;
  o_53 = t;
  t = SSL_table_put(n_53, o_53, m_53);
  t = m_53;
  t = i_92(t);
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_92, t);
        ;
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        {
          ATerm c_38 = t;
          int d_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_38);
            }
          else
            {
              t = c_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      ;
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      {
        ATerm i_38 = t;
        int s_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(s_38);
          }
        else
          {
            t = i_38;
            {
              ATerm y_38 = t;
              int z_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(z_38);
                }
              else
                {
                  t = y_38;
                  {
                    ATerm a_39 = t;
                    int c_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(t_12, u_12, w_12, t);
                        ;
                        LocalPopChoice(c_39);
                      }
                    else
                      {
                        t = a_39;
                        {
                          ATerm d_39 = t;
                          int i_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(i_39);
                            }
                          else
                            {
                              t = d_39;
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
ATerm s_12 (ATerm t)
{
  t = xtc_io_1_0(x_12, t);
  return(t);
}
ATerm t_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  t = term_j_39;
  r_53 = t;
  t = term_t_20;
  s_53 = t;
  t = term_l_39;
  t = c_8(r_53, s_53, t);
  t = term_m_39;
  return(t);
}
ATerm w_12 (ATerm t)
{
  t = term_t_39;
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
  u_53 = t;
  t = term_y_39;
  t = xtc_find_path_0_0(t);
  v_53 = t;
  t = term_a_22;
  w_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_53), term_i_40);
  x_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, v_53), term_i_40));
  t = k_7(w_53, x_53, t);
  t = u_53;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_12, default_usage_0_0, _id, s_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
