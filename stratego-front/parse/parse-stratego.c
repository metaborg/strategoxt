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
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_c_39;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_k_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_g_36;
ATerm term_t_35;
ATerm term_m_35;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_n_34;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_b_31;
ATerm term_t_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_j_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_x_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_y_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_a_26;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_r_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_s_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_s_20;
ATerm term_o_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
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
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_f_13;
void init_constant_terms (void)
{
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_l_13, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_c_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_i_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_o_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_c_15, term_d_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_i_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_o_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_w_15, term_x_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_w_16, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_g_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_p_17, term_q_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_e_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_i_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_18, term_s_18, term_t_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_b_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_f_19, term_g_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_r_19, term_s_19);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_u_28);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_i_28);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_s_20);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_f_13, term_n_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_u_31, term_c_21);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_o_32);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_c_21);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym__2, term_g_25, term_c_21);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_c_21);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_c_21);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm b_7 (ATerm l_31, ATerm m_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm c_7 (ATerm s_15, ATerm t_15, ATerm);
ATerm d_7 (ATerm j_60 (ATerm), ATerm a_172, ATerm a_16, ATerm);
ATerm c_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm);
ATerm e_7 (ATerm o_12, ATerm p_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm y_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm g_7 (ATerm b_75 (ATerm), ATerm t_32, ATerm r_32, ATerm);
ATerm d_5 (ATerm p_4, ATerm);
ATerm f_5 (ATerm s_4, ATerm t_4, ATerm u_4, ATerm);
ATerm b_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm);
ATerm guarantee_extension_1_0 (ATerm a_73 (ATerm), ATerm);
ATerm if_keep1_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm h_76 (ATerm), ATerm);
ATerm i_7 (ATerm s_12, ATerm t_12, ATerm);
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm get_syntax_definition_0_0 (ATerm);
ATerm j_7 (ATerm y_35, ATerm q_442, ATerm);
ATerm find_in_includes_1_0 (ATerm t_57 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm c_3 (ATerm);
ATerm h_3 (ATerm);
ATerm m_3 (ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm o_64 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm get_meta_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm get_syntax_0_0 (ATerm);
ATerm basename_1_0 (ATerm y_72 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm r_4 (ATerm);
ATerm v_4 (ATerm);
ATerm y_4 (ATerm);
ATerm b_5 (ATerm);
ATerm e_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm q_5 (ATerm);
ATerm u_5 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm u_24 (ATerm h_24, ATerm);
ATerm conc_0_0 (ATerm);
ATerm k_7 (ATerm q_35, ATerm p_35, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm j_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm m_7 (ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm v_22, ATerm u_22, ATerm);
ATerm n_7 (ATerm g_68 (ATerm), ATerm r_22, ATerm q_22, ATerm);
ATerm b_6 (ATerm);
ATerm o_7 (ATerm h_34, ATerm i_34, ATerm j_34, ATerm);
ATerm p_7 (ATerm m_76 (ATerm), ATerm r_34, ATerm q_34, ATerm);
ATerm s_7 (ATerm o_36, ATerm p_36, ATerm);
ATerm c_31 (ATerm s_30, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_7 (ATerm y_15, ATerm);
ATerm r_7 (ATerm w_36, ATerm x_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_33 (ATerm s_31, ATerm);
ATerm u_33 (ATerm w_31, ATerm x_31, ATerm y_31, ATerm);
ATerm v_33 (ATerm h_32, ATerm i_32, ATerm j_32, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm x_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm y_6 (ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm l_7 (ATerm);
ATerm x_7 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm b_8 (ATerm);
ATerm e_8 (ATerm);
ATerm k_40 (ATerm l_39, ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm t_7 (ATerm u_12, ATerm v_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm u_7 (ATerm p_33, ATerm q_33, ATerm);
ATerm end_scope_1_0 (ATerm y_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_74 (ATerm), ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm c_78 (ATerm), ATerm);
ATerm u_8 (ATerm);
ATerm xtc_io_1_0 (ATerm d_78 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm y_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm z_8 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm c_8 (ATerm k_35, ATerm l_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm l_9 (ATerm);
ATerm n_9 (ATerm);
ATerm p_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm w_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm a_8 (ATerm k_33, ATerm l_33, ATerm j_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm x_9 (ATerm);
ATerm z_9 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm n_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm w_10 (ATerm);
ATerm parse_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_7 (ATerm f_31, ATerm g_31, ATerm);
ATerm foldr_2_0 (ATerm u_70 (ATerm), ATerm v_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_76 (ATerm), ATerm);
ATerm a_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_11 (ATerm);
ATerm need_help_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm f_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_7 (ATerm b_30, ATerm c_30, ATerm);
ATerm debug_1_0 (ATerm h_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_64 (ATerm), ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm z_7 (ATerm b_35, ATerm c_35, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm q_11 (ATerm);
ATerm s_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm y_11 (ATerm);
ATerm a_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_51 (ATerm), ATerm s_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_82 (ATerm), ATerm);
ATerm e_12 (ATerm);
ATerm g_12 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm parse_options_1_0 (ATerm b_82 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm);
ATerm r_12 (ATerm);
ATerm w_12 (ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm c_13 (ATerm);
ATerm parse_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_7 (ATerm l_31, ATerm m_31, ATerm t)
{
  ATerm r_5 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_31, m_31);
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = r_5;
      t = SSL_subtr(l_31, m_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,o_0 = NULL;
  t = term_f_13;
  {
    ATerm h_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = h_13;
        t = term_l_13;
      }
    b_0 = t;
    t = term_l_13;
    o_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_l_13);
    t = b_7(b_0, o_0, t);
    e_0 = t;
    t = SSL_int_to_string(e_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_f_13);
  }
  return(t);
}
ATerm c_7 (ATerm s_15, ATerm t_15, ATerm t)
{
  ATerm q_0 = NULL;
  t = SSL_write_term_to_stream_baf(s_15, t_15);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_0);
  return(t);
}
ATerm d_7 (ATerm j_60 (ATerm), ATerm a_172, ATerm a_16, ATerm t)
{
  ATerm t_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_172, term_m_13);
  t = open_stream_0_0(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_0, a_16);
  t = j_60(t);
  t = fclose_0_0(t);
  t = a_16;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm w_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_13 = ATgetArgument(t, 0);
      if(match_cons(n_13, sym_Stream_1))
        {
          w_0 = ATgetArgument(n_13, 0);
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
  t = d_7(c_0, v_0, u_0, t);
  t = SSL_close_file(v_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(z_78, a_79, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm e_7 (ATerm o_12, ATerm p_12, ATerm t)
{
  t = SSL_execvp(o_12, p_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_1 = NULL,z_1 = NULL,b_2 = NULL,d_2 = NULL;
  w_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      z_1 = ATgetArgument(t, 0);
      {
        ATerm y_0 = NULL,a_1 = NULL;
        t = SSL_int_to_string(z_1);
        y_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_13), y_0), term_o_13);
        a_1 = t;
        t = SSL_concat_strings(a_1);
      }
    }
  else
    {
      ATerm a_2 = NULL,c_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          z_1 = ATgetArgument(t, 0);
          b_2 = ATgetArgument(t, 1);
          d_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(b_2);
      a_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_2), term_s_13), a_2), term_r_13), z_1);
      c_2 = t;
      t = SSL_concat_strings(c_2);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_2 = NULL;
  j_2 = t;
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_13 = ATgetArgument(t, 0);
              if((j_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm w_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_19), term_p_19), term_i_19), term_d_19), term_u_18), term_q_18), term_k_18), term_g_18), term_a_18), term_s_17), term_n_17), term_j_17), term_d_17), term_y_16), term_u_16), term_q_16), term_m_16), term_i_16), term_e_16), term_z_15), term_r_15), term_k_15), term_f_15), term_x_14), term_q_14), term_j_14), term_e_14), term_z_13);
        t = fetch_elem_1_0(f_0, t);
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_2 = NULL,v_2 = NULL;
  n_2 = t;
  {
    ATerm v_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_20 = ATgetArgument(t, 0);
            v_2 = ATgetArgument(t, 1);
            {
              ATerm b_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_19);
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,a_3 = NULL,b_3 = NULL;
              t = v_2;
              {
                ATerm e_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_20;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                m_2 = t;
                t = term_f_20;
                a_3 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, m_2), term_g_20);
                b_3 = t;
                t = SSL_printnl(a_3, b_3);
                t = (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_g_20));
              }
              ;
              LocalPopChoice(d_20);
            }
          else
            {
              t = c_20;
              t = n_2;
            }
        }
      }
    else
      {
        t = v_19;
        t = n_2;
      }
    t = n_2;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm y_58 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL;
  g_3 = t;
  t = fork_0_0(t);
  f_3 = t;
  {
    ATerm h_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_3;
        t = y_58(t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = h_20;
        t = SSL_waitpid(f_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_20 = ATgetArgument(t, 0);
            if(((ATgetType(l_20) != AT_INT) || (ATgetInt((ATermInt) l_20) != 0)))
              _fail(t);
            {
              ATerm m_20 = ATgetArgument(t, 1);
            }
            {
              ATerm n_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm i_3 = NULL,k_3 = NULL;
  k_3 = t;
  t = q_78(t);
  t = xtc_find_0_0(t);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_3, k_3);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm p_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, i_3, k_3);
      t = e_7(i_3, k_3, t);
      t = term_o_20;
      p_3 = t;
      t = SSL_exit(p_3);
      return(t);
    }
    t = fork_and_wait_1_0(x_0, t);
    t = k_3;
  }
  return(t);
}
ATerm g_7 (ATerm b_75 (ATerm), ATerm t_32, ATerm r_32, ATerm t)
{
  ATerm s_3 = NULL,x_3 = NULL,z_3 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  c_4 = t;
  t = b_75(t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_3, t_32, r_32);
  t = a_8(s_3, t_32, r_32, t);
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL;
        t = term_s_20;
        h_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_3, term_s_20);
        t = z_7(s_3, h_4, t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_3 = ATgetFirst((ATermList) t);
        z_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_s_20;
    d_4 = t;
    t = (ATerm) ATinsert(CheckATermList(z_3), (ATerm) ATinsert(CheckATermList(x_3), t_32));
    e_4 = t;
    t = SSL_table_put(s_3, d_4, e_4);
    t = c_4;
  }
  return(t);
}
ATerm d_5 (ATerm p_4, ATerm t)
{
  t = p_4;
  {
    ATerm t_20 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_20 = ATgetArgument(t, 0);
            ATerm v_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_20;
      }
    t = term_y_20;
    t = debug_1_0(b_1, t);
    t = (ATerm) ATmakeAppl(sym__2, p_4, term_m_13);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm f_5 (ATerm s_4, ATerm t_4, ATerm u_4, ATerm t)
{
  t = SSL_open_file(s_4, t_4);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,c_5 = NULL;
  z_4 = t;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      c_5 = ATgetArgument(t, 1);
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_5(z_4, t);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            t = f_5(a_5, c_5, z_4, t);
          }
      }
    }
  else
    {
      t = d_5(z_4, t);
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
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  t = term_c_21;
  t = new_0_0(t);
  h_5 = t;
  t = term_e_21;
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_5, term_e_21);
  t = y_7(h_5, i_5, t);
  j_5 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_5 = NULL;
        t = (ATerm) ATinsert(ATempty, term_i_21);
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_5, (ATerm) ATinsert(ATempty, term_i_21));
        t = s_7(j_5, o_5, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = j_5;
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL;
  t = new_file_0_0(t);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_5, term_m_13);
  t = open_file_0_0(t);
  t = term_c_21;
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_5, term_c_21);
  t = g_7(c_1, s_5, t_5, t);
  t = s_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t)
{
  ATerm l_6 = NULL,n_6 = NULL;
  l_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_3 = NULL,l_3 = NULL;
      t = l_6;
      t = xtc_new_file_0_0(t);
      j_3 = t;
      t = s_0(t);
      l_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_3, (ATerm) ATinsert(ATinsert(ATempty, j_3), term_k_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(j_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_3);
    }
  else
    {
      ATerm r_3 = NULL,t_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_6;
      t = xtc_new_file_0_0(t);
      r_3 = t;
      t = s_0(t);
      t_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_3), term_k_21), n_6), term_m_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(r_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_3);
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm a_73 (ATerm), ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,z_6 = NULL;
  t = basename_1_0(_id, t);
  z_6 = t;
  t = term_c_21;
  t = a_73(t);
  t_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_6), term_n_21), z_6);
  s_6 = t;
  t = SSL_concat_strings(s_6);
  return(t);
}
ATerm if_keep1_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  {
    ATerm o_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL;
        t = term_s_21;
        t = get_config_0_0(t);
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_8, term_l_13);
        t = geq_0_0(t);
        t = w_7;
        t = i_77(t);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = o_21;
        t = w_7;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm l_8 = NULL;
  l_8 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL;
        t = term_f_13;
        t = get_config_0_0(t);
        n_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_8, term_g_14);
        t = geq_0_0(t);
        t = l_8;
        t = h_76(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = l_8;
      }
  }
  return(t);
}
ATerm i_7 (ATerm s_12, ATerm t_12, ATerm t)
{
  t = SSL_rename(s_12, t_12);
  return(t);
}
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  r_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_4 = NULL;
        t = r_9;
        t = p_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_a_22;
        b_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, term_a_22);
        t = t_7(s_9, b_4, t);
        t = SSL_remove(s_9);
        t = term_a_22;
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        {
          ATerm b_22 = t;
          int c_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_4 = NULL;
              t = r_9;
              t = p_0(t);
              l_4 = t;
              {
                ATerm d_22 = t;
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
                        if((s_9 != t))
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
                    t = d_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, s_9, l_4);
                t = i_7(s_9, l_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_4);
              }
              ;
              LocalPopChoice(c_22);
            }
          else
            {
              t = b_22;
              t = r_9;
              t = p_0(t);
              if((s_9 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_9);
            }
        }
      }
  }
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = debug_1_0(g_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  t = term_f_20;
  h_10 = t;
  t = (ATerm) ATinsert(ATempty, term_h_22);
  i_10 = t;
  t = SSL_printnl(h_10, i_10);
  t = g_10;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_n_22;
  t = get_config_0_0(t);
  t = map_1_0(t_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_10), term_n_22);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_n_22;
  t = get_config_0_0(t);
  t = map_1_0(x_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_10), term_n_22);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL;
  t = if_verbose6_1_0(d_1, t);
  b_10 = t;
  t = guarantee_extension_1_0(h_1, t);
  a_10 = t;
  t = b_10;
  {
    ATerm p_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = a_10;
        t = find_in_includes_1_0(j_1, t);
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, c_10);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = p_22;
        {
          ATerm d_10 = NULL;
          ATerm h_2 (ATerm t)
          {
            t = a_10;
            return(t);
          }
          t = if_verbose2_1_0(l_1, t);
          t = guarantee_extension_1_0(n_1, t);
          d_10 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, d_10);
          {
            ATerm t_22 = t;
            int w_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_10 = NULL,k_10 = NULL,e_1 = NULL;
                k_10 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm x_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_10);
                j_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, d_10);
                e_1 = t;
                t = SSLsetAnnotations(e_1, j_10);
                LocalPopChoice(w_22);
                t = xtc_transform_file_2_0(o_1, p_1, t);
              }
            else
              {
                t = t_22;
                t = xtc_transform_term_2_0(u_1, v_1, t);
              }
            {
              ATerm y_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_10 = NULL,u_10 = NULL;
                  u_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      t_10 = ATgetArgument(t, 0);
                      {
                        ATerm x_4 = NULL,f_1 = NULL;
                        t = SSLgetAnnotations(u_10);
                        x_4 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, t_10);
                        f_1 = t;
                        t = SSLsetAnnotations(f_1, x_4);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = u_10;
                    }
                  LocalPopChoice(z_22);
                  t = xtc_transform_file_2_0(y_1, e_2, t);
                }
              else
                {
                  t = y_22;
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
ATerm j_7 (ATerm y_35, ATerm q_442, ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm e_11 = NULL,g_11 = NULL,j_11 = NULL,k_11 = NULL;
    e_11 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_35), term_a_23), e_11);
    k_11 = t;
    t = SSL_concat_strings(k_11);
    g_11 = t;
    t = (ATerm) ATinsert(ATempty, term_i_21);
    j_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_11, (ATerm) ATinsert(ATempty, term_i_21));
    t = s_7(g_11, j_11, t);
    return(t);
  }
  t = q_442;
  t = fetch_elem_1_0(i_2, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm t_57 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL;
  ATerm k_2 (ATerm t)
  {
    t = debug_1_0(t_57, t);
    return(t);
  }
  m_11 = t;
  t = term_n_22;
  t = get_config_0_0(t);
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_11, l_11);
  t = j_7(m_11, l_11, t);
  t = if_verbose2_1_0(k_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_d_23;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm x_11 = NULL,z_11 = NULL,b_12 = NULL;
  x_11 = t;
  t = term_f_20;
  z_11 = t;
  t = (ATerm) ATinsert(ATempty, term_e_23);
  b_12 = t;
  t = SSL_printnl(z_11, b_12);
  t = x_11;
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_d_23;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm r_11 = NULL,t_11 = NULL;
  t = if_verbose6_1_0(l_2, t);
  r_11 = t;
  t = guarantee_extension_1_0(u_2, t);
  t_11 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_11 = NULL;
        t = find_in_includes_1_0(w_2, t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_11);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        {
          ATerm e_3 (ATerm t)
          {
            t = t_11;
            return(t);
          }
          t = if_verbose2_1_0(x_2, t);
          t = r_11;
          t = get_syntax_definition_0_0(t);
          {
            ATerm j_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_12 = NULL,l_12 = NULL;
                l_12 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    k_12 = ATgetArgument(t, 0);
                    {
                      ATerm p_5 = NULL,i_1 = NULL;
                      t = SSLgetAnnotations(l_12);
                      p_5 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, k_12);
                      i_1 = t;
                      t = SSLsetAnnotations(i_1, p_5);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = l_12;
                  }
                LocalPopChoice(k_23);
                {
                  ATerm z_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, r_11), term_l_23);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(y_2, z_2, t);
                }
              }
            else
              {
                t = j_23;
                {
                  ATerm d_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, r_11), term_l_23);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(c_3, d_3, t);
                }
              }
            t = rename_to_1_0(e_3, t);
          }
        }
      }
    t = if_verbose6_1_0(h_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm q_12 = NULL;
  q_12 = t;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_13 = NULL;
        t = term_f_13;
        t = get_config_0_0(t);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_13, term_c_14);
        t = geq_0_0(t);
        t = q_12;
        t = g_76(t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = q_12;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_64 (ATerm), ATerm t)
{
  ATerm d_13 = NULL;
  ATerm n_3 (ATerm t)
  {
    t = o_64(t);
    if(((d_13 != NULL) && (d_13 != t)))
      _fail(t);
    else
      d_13 = t;
    return(t);
  }
  t = fetch_1_0(n_3, t);
  t = not_null(d_13);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_o_23;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm i_13 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_21);
      i_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_13, (ATerm) ATinsert(ATempty, term_i_21));
      t = s_7(g_13, i_13, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = debug_1_0(q_3, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_p_23;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = debug_1_0(y_3, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_p_23;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm p_13 = NULL,h_14 = NULL,k_14 = NULL;
  t = if_verbose6_1_0(o_3, t);
  h_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_6 = NULL,i_6 = NULL,k_1 = NULL;
        t = SSLgetAnnotations(h_14);
        a_6 = t;
        t = k_14;
        t = guarantee_extension_1_0(u_3, t);
        i_6 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_6);
        k_1 = t;
        t = SSLsetAnnotations(k_1, a_6);
        t = read_from_0_0(t);
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        {
          ATerm w_6 = NULL,x_6 = NULL,a_7 = NULL,m_1 = NULL;
          t = SSLgetAnnotations(h_14);
          x_6 = t;
          t = k_14;
          t = guarantee_extension_1_0(v_3, t);
          a_7 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, a_7);
          m_1 = t;
          t = SSLsetAnnotations(m_1, x_6);
          t = read_from_0_0(t);
          w_6 = t;
          t = SSL_explode_term(w_6);
          if(match_cons(t, sym__2))
            {
              p_13 = ATgetArgument(t, 0);
              {
                ATerm z_23 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, p_13)));
        }
      }
    t = if_verbose6_1_0(w_3, t);
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = debug_1_0(f_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm e_15 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      e_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_15;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = debug_1_0(j_4, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  t = if_verbose6_1_0(a_4, t);
  if(match_cons(t, sym_FILE_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_24;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        {
          ATerm f_24 = t;
          int g_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_15 (ATerm r_14, ATerm t)
              {
                ATerm u_14 = NULL,v_14 = NULL;
                t = term_f_20;
                u_14 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_24), p_14), term_m_24), r_14), term_j_24);
                v_14 = t;
                t = SSL_printnl(u_14, v_14);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_24), p_14), term_m_24), r_14), term_j_24);
                _fail(t);
                return(t);
              }
              ATerm z_14 = NULL,b_15 = NULL;
              t = get_meta_0_0(t);
              b_15 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  z_14 = ATgetArgument(t, 0);
                  {
                    ATerm p_24 = t;
                    int q_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = z_14;
                        t = fetch_elem_1_0(g_4, t);
                        ;
                        LocalPopChoice(q_24);
                      }
                    else
                      {
                        t = p_24;
                        t = h_15(b_15, t);
                      }
                  }
                }
              else
                {
                  t = h_15(b_15, t);
                }
              ;
              LocalPopChoice(g_24);
            }
          else
            {
              t = f_24;
              t = term_r_24;
            }
        }
      }
    t = if_verbose2_1_0(i_4, t);
  }
  return(t);
}
ATerm basename_1_0 (ATerm y_72 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  q_15 = t;
  t = SSL_explode_string(q_15);
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_18 (ATerm t)
        {
          ATerm t_17 = NULL,u_17 = NULL,w_17 = NULL;
          t_17 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_17 = ATgetFirst((ATermList) t);
              w_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm v_24 = t;
            int z_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_8 = NULL,o_8 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(t_17);
                h_8 = t;
                t = w_17;
                t = f_18(t);
                o_8 = t;
                t = (ATerm) ATinsert(CheckATermList(o_8), u_17);
                q_1 = t;
                t = SSLsetAnnotations(q_1, h_8);
                ;
                LocalPopChoice(z_24);
              }
            else
              {
                t = v_24;
                {
                  ATerm a_25 = t;
                  int b_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_8 = NULL,r_1 = NULL;
                      t = SSLgetAnnotations(t_17);
                      x_8 = t;
                      t = u_17;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(w_17), u_17);
                      r_1 = t;
                      t = SSLsetAnnotations(r_1, x_8);
                      ;
                      LocalPopChoice(b_25);
                    }
                  else
                    {
                      t = a_25;
                      {
                        ATerm o_9 = NULL,y_9 = NULL,s_1 = NULL;
                        t = SSLgetAnnotations(t_17);
                        o_9 = t;
                        t = u_17;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = w_17;
                        t = y_72(t);
                        y_9 = t;
                        t = (ATerm) ATinsert(CheckATermList(y_9), u_17);
                        s_1 = t;
                        t = SSLsetAnnotations(s_1, o_9);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = f_18(t);
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
      }
    p_15 = t;
    t = SSL_implode_string(p_15);
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
  t = term_c_25;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_g_25);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_g_25);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm c_19 = NULL,h_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,o_2 = NULL;
  t = if_verbose6_1_0(k_4, t);
  j_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_19);
  k_19 = t;
  t = l_19;
  t = basename_1_0(_id, t);
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_19);
  o_2 = t;
  t = SSLsetAnnotations(o_2, k_19);
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_19;
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_19 = ATgetArgument(t, 0);
            {
              ATerm x_10 = NULL,p_2 = NULL;
              t = SSLgetAnnotations(j_19);
              x_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_19);
              p_2 = t;
              t = SSLsetAnnotations(p_2, x_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_19;
          }
        LocalPopChoice(m_25);
        {
          ATerm q_4 (ATerm t)
          {
            ATerm y_19 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(r_4, t);
            y_19 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(y_19), c_19), term_o_25), term_n_25);
            return(t);
          }
          t = xtc_transform_file_2_0(o_4, q_4, t);
        }
      }
    else
      {
        t = l_25;
        {
          ATerm w_4 (ATerm t)
          {
            ATerm z_19 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(y_4, t);
            z_19 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(z_19), c_19), term_o_25), term_n_25);
            return(t);
          }
          t = xtc_transform_term_2_0(v_4, w_4, t);
        }
      }
    {
      ATerm p_25 = t;
      int q_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_20 = NULL,j_20 = NULL;
          j_20 = t;
          if(match_cons(t, sym_FILE_1))
            {
              i_20 = ATgetArgument(t, 0);
              {
                ATerm c_11 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(j_20);
                c_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, i_20);
                q_2 = t;
                t = SSLsetAnnotations(q_2, c_11);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = j_20;
            }
          LocalPopChoice(q_25);
          t = xtc_transform_file_2_0(b_5, pass_verbose_0_0, t);
        }
      else
        {
          t = p_25;
          t = xtc_transform_term_2_0(e_5, pass_verbose_0_0, t);
        }
      {
        ATerm g_5 (ATerm t)
        {
          ATerm k_5 (ATerm t)
          {
            t = h_19;
            t = guarantee_extension_1_0(l_5, t);
            return(t);
          }
          t = copy_to_1_0(k_5, t);
          return(t);
        }
        t = if_keep1_1_0(g_5, t);
        {
          ATerm r_25 = t;
          int s_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_20 = NULL,d_21 = NULL;
              d_21 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  w_20 = ATgetArgument(t, 0);
                  {
                    ATerm p_11 = NULL,s_2 = NULL;
                    t = SSLgetAnnotations(d_21);
                    p_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, w_20);
                    s_2 = t;
                    t = SSLsetAnnotations(s_2, p_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = d_21;
                }
              LocalPopChoice(s_25);
              t = xtc_transform_file_2_0(m_5, pass_verbose_0_0, t);
            }
          else
            {
              t = r_25;
              t = xtc_transform_term_2_0(n_5, pass_verbose_0_0, t);
            }
          {
            ATerm t_25 = t;
            int u_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_21 = NULL,q_21 = NULL;
                q_21 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    p_21 = ATgetArgument(t, 0);
                    {
                      ATerm f_12 = NULL,t_2 = NULL;
                      t = SSLgetAnnotations(q_21);
                      f_12 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, p_21);
                      t_2 = t;
                      t = SSLsetAnnotations(t_2, f_12);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = q_21;
                  }
                LocalPopChoice(u_25);
                t = xtc_transform_file_2_0(q_5, pass_verbose_0_0, t);
              }
            else
              {
                t = t_25;
                t = xtc_transform_term_2_0(u_5, pass_verbose_0_0, t);
              }
          }
        }
      }
    }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm s_64 (ATerm), ATerm t)
{
  ATerm w_23 (ATerm t)
  {
    ATerm r_23 = NULL,u_23 = NULL,v_23 = NULL;
    v_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_23 = ATgetFirst((ATermList) t);
        u_23 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_13 = NULL,k_13 = NULL,g_6 = NULL;
          t = SSLgetAnnotations(v_23);
          b_13 = t;
          t = u_23;
          t = w_23(t);
          k_13 = t;
          t = (ATerm) ATinsert(CheckATermList(k_13), r_23);
          g_6 = t;
          t = SSLsetAnnotations(g_6, b_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_23;
        t = s_64(t);
      }
    return(t);
  }
  t = w_23(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_21;
    }
  else
    {
      ATerm v_5 (ATerm t)
      {
        t = not_null(z_21);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_21 = ATgetFirst((ATermList) t);
          if(((z_21 != NULL) && (z_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_21;
      t = at_end_1_0(v_5, t);
    }
  return(t);
}
ATerm u_24 (ATerm h_24, ATerm t)
{
  ATerm i_24 = NULL;
  t = SSL_explode_term(h_24);
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,o_24 = NULL;
  o_24 = t;
  if(match_cons(t, sym__2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 (ATerm t)
            {
              t = l_24;
              return(t);
            }
            t = k_24;
            t = at_end_1_0(w_5, t);
            ;
            LocalPopChoice(x_25);
          }
        else
          {
            t = w_25;
            t = u_24(o_24, t);
          }
      }
    }
  else
    {
      t = u_24(o_24, t);
    }
  return(t);
}
ATerm k_7 (ATerm q_35, ATerm p_35, ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  t = q_35;
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = (ATerm) ATempty;
      }
    x_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_35, x_24);
    t = conc_0_0(t);
    w_24 = t;
    t = term_a_26;
    y_24 = t;
    t = SSL_table_put(y_24, q_35, w_24);
    t = (ATerm) ATmakeAppl(sym__3, term_a_26, q_35, w_24);
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  f_25 = t;
  t = SSL_explode_string(f_25);
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_26 (ATerm t)
        {
          ATerm l_26 = NULL,m_26 = NULL,q_26 = NULL;
          l_26 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_26 = ATgetFirst((ATermList) t);
              q_26 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm d_26 = t;
            int e_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_14 = NULL,n_14 = NULL,j_6 = NULL;
                t = SSLgetAnnotations(l_26);
                b_14 = t;
                t = q_26;
                t = t_26(t);
                n_14 = t;
                t = (ATerm) ATinsert(CheckATermList(n_14), m_26);
                j_6 = t;
                t = SSLsetAnnotations(j_6, b_14);
                ;
                LocalPopChoice(e_26);
              }
            else
              {
                t = d_26;
                {
                  ATerm a_15 = NULL,k_6 = NULL;
                  t = SSLgetAnnotations(l_26);
                  a_15 = t;
                  t = m_26;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, m_26);
                  k_6 = t;
                  t = SSLsetAnnotations(k_6, a_15);
                }
              }
          }
          return(t);
        }
        t = t_26(t);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATempty;
      }
    e_25 = t;
    t = SSL_implode_string(e_25);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_26 = NULL;
  ATerm x_5 (ATerm t)
  {
    ATerm x_26 = NULL,y_26 = NULL;
    x_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_26), x_26);
    t = z_7(not_null(w_26), x_26, t);
    y_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_26, y_26);
    return(t);
  }
  if(((w_26 != NULL) && (w_26 != t)))
    _fail(t);
  else
    w_26 = t;
  t = SSL_table_keys(w_26);
  t = map_1_0(x_5, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm j_76 (ATerm), ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_27 = NULL;
        t = term_f_13;
        t = get_config_0_0(t);
        c_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_27, term_y_18);
        t = geq_0_0(t);
        t = a_27;
        t = j_76(t);
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = a_27;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm f_27 = NULL;
  f_27 = t;
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_27 = NULL;
        t = term_f_13;
        t = get_config_0_0(t);
        i_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_27, term_k_16);
        t = geq_0_0(t);
        t = f_27;
        t = i_76(t);
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = f_27;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_27 = NULL;
        t = term_f_13;
        t = get_config_0_0(t);
        o_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_27, term_m_14);
        t = geq_0_0(t);
        t = m_27;
        t = k_76(t);
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        t = m_27;
      }
  }
  return(t);
}
ATerm m_7 (ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm v_22, ATerm u_22, ATerm t)
{
  t = k_68(t);
  {
    ATerm y_5 (ATerm t)
    {
      ATerm t_27 = NULL;
      t_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_22, t_27);
      t = j_68(t);
      return(t);
    }
    t = fetch_1_0(y_5, t);
    t = u_22;
  }
  return(t);
}
ATerm n_7 (ATerm g_68 (ATerm), ATerm r_22, ATerm q_22, ATerm t)
{
  ATerm f_29 (ATerm t)
  {
    ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
    y_28 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_28 = ATgetFirst((ATermList) t);
            a_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_26 = t;
          int o_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_28;
              {
                ATerm z_5 (ATerm t)
                {
                  t = q_22;
                  return(t);
                }
                t = m_7(g_68, z_5, z_28, a_29, t);
                t = f_29(t);
              }
              ;
              LocalPopChoice(o_26);
            }
          else
            {
              t = n_26;
              {
                ATerm n_15 = NULL,v_15 = NULL,a_9 = NULL;
                t = SSLgetAnnotations(y_28);
                n_15 = t;
                t = a_29;
                t = f_29(t);
                v_15 = t;
                t = (ATerm) ATinsert(CheckATermList(v_15), z_28);
                a_9 = t;
                t = SSLsetAnnotations(a_9, n_15);
              }
            }
        }
      }
    return(t);
  }
  t = r_22;
  t = f_29(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm e_30 = NULL;
  if(match_cons(t, sym__2))
    {
      e_30 = ATgetArgument(t, 0);
      if((e_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm h_34, ATerm i_34, ATerm j_34, ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_34, i_34);
  {
    ATerm p_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_26 = ATgetArgument(t, 0);
            ATerm u_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_34, i_34);
        t = z_7(h_34, i_34, t);
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = p_26;
        t = (ATerm) ATempty;
      }
    n_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_29, j_34);
    t = n_7(b_6, n_29, j_34, t);
    m_29 = t;
    t = SSL_table_put(h_34, i_34, m_29);
    t = l_29;
  }
  return(t);
}
ATerm p_7 (ATerm m_76 (ATerm), ATerm r_34, ATerm q_34, ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm f_30 = NULL,g_30 = NULL;
    if(match_cons(t, sym__2))
      {
        f_30 = ATgetArgument(t, 0);
        g_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, r_34, f_30, g_30);
    t = m_76(t);
    return(t);
  }
  t = q_34;
  t = map_1_0(c_6, t);
  return(t);
}
ATerm s_7 (ATerm o_36, ATerm p_36, ATerm t)
{
  t = SSL_access(o_36, p_36);
  return(t);
}
ATerm c_31 (ATerm s_30, ATerm t)
{
  t = SSL_fclose(s_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  x_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_30 = ATgetArgument(t, 0);
      {
        ATerm v_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_30);
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = v_26;
            t = c_31(x_30, t);
          }
      }
    }
  else
    {
      t = c_31(x_30, t);
    }
  return(t);
}
ATerm q_7 (ATerm y_15, ATerm t)
{
  t = SSL_read_term_from_stream(y_15);
  return(t);
}
ATerm r_7 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm d_31 = NULL;
  t = SSL_fopen(w_36, x_36);
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_31 = NULL;
  t = SSL_stdin_stream();
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_31 = NULL;
  t = SSL_stdout_stream();
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_31 = NULL;
  t = SSL_stderr_stream();
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_31);
  return(t);
}
ATerm s_33 (ATerm s_31, ATerm t)
{
  ATerm t_31 = NULL;
  t = SSL_explode_term(s_31);
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_27 = ATgetArgument(t, 1);
        if(((ATgetType(d_27) == AT_LIST) && !(ATisEmpty(d_27))))
          {
            t_31 = ATgetFirst((ATermList) d_27);
            {
              ATerm e_27 = (ATerm) ATgetNext((ATermList) d_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_31;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_31;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_31;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_31;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm u_33 (ATerm w_31, ATerm x_31, ATerm y_31, ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,f_32 = NULL,e_9 = NULL;
  t = SSLgetAnnotations(y_31);
  b_32 = t;
  t = w_31;
  if(match_cons(t, sym_Path_1))
    {
      f_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_32, x_31);
  e_9 = t;
  t = SSLsetAnnotations(e_9, b_32);
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(z_31, a_32, t);
  return(t);
}
ATerm v_33 (ATerm h_32, ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm k_32 = NULL,w_32 = NULL,x_32 = NULL,b_33 = NULL,f_9 = NULL;
  t = SSLgetAnnotations(j_32);
  x_32 = t;
  t = SSL_is_string(h_32);
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, i_32);
  f_9 = t;
  t = SSLsetAnnotations(f_9, x_32);
  if(match_cons(t, sym__2))
    {
      k_32 = ATgetArgument(t, 0);
      w_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(k_32, w_32, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,r_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_27 = ATgetArgument(t, 0);
      ATerm h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  m_33 = t;
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_33(m_33, t);
            ;
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
                  t = u_33(n_33, r_33, m_33, t);
                  ;
                  LocalPopChoice(n_27);
                }
              else
                {
                  t = l_27;
                  t = v_33(n_33, r_33, m_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_33(m_33, t);
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_33 = NULL,y_33 = NULL,z_33 = NULL;
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_34 = NULL;
      b_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_34, term_s_27);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      t = debug_1_0(d_6, t);
      _fail(t);
    }
  y_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(z_33, t);
  w_33 = t;
  t = y_33;
  t = fclose_0_0(t);
  t = w_33;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_34 = NULL,f_34 = NULL;
      e_34 = t;
      t = (ATerm) ATinsert(ATempty, term_y_27);
      f_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_34, (ATerm) ATinsert(ATempty, term_y_27));
      t = s_7(e_34, f_34, t);
      LocalPopChoice(x_27);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_27;
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_28 = t;
            if((PushChoice() == 0))
              {
                ATerm g_34 = NULL,w_34 = NULL;
                g_34 = t;
                t = (ATerm) ATinsert(ATempty, term_i_21);
                w_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_34, (ATerm) ATinsert(ATempty, term_i_21));
                t = s_7(g_34, w_34, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_28;
              }
            t = debug_1_0(e_6, t);
            ;
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            t = debug_1_0(f_6, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = debug_1_0(m_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = debug_1_0(p_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm o_35 = NULL,r_35 = NULL,s_35 = NULL;
  o_35 = t;
  t = term_f_20;
  r_35 = t;
  t = (ATerm) ATinsert(ATempty, term_e_28);
  s_35 = t;
  t = SSL_printnl(r_35, s_35);
  t = o_35;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm a_36 = NULL,e_36 = NULL,f_36 = NULL;
  if(match_cons(t, sym__3))
    {
      a_36 = ATgetArgument(t, 0);
      e_36 = ATgetArgument(t, 1);
      f_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_7(a_36, e_36, f_36, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
  i_36 = t;
  t = term_f_20;
  j_36 = t;
  t = (ATerm) ATinsert(ATempty, term_f_28);
  k_36 = t;
  t = SSL_printnl(j_36, k_36);
  t = i_36;
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
  l_36 = t;
  t = term_f_20;
  m_36 = t;
  t = (ATerm) ATinsert(ATempty, term_e_28);
  n_36 = t;
  t = SSL_printnl(m_36, n_36);
  t = l_36;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  x_34 = t;
  t = if_verbose5_1_0(h_6, t);
  {
    ATerm g_28 = t;
    if((PushChoice() == 0))
      {
        ATerm j_35 = NULL,n_35 = NULL;
        t = term_h_28;
        j_35 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, x_34);
        n_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_28, (ATerm) ATmakeAppl(sym_Imported_1, x_34));
        t = z_7(j_35, n_35, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_28;
      }
    z_34 = t;
    t = term_h_28;
    g_35 = t;
    t = term_i_28;
    h_35 = t;
    t = (ATerm) ATinsert(ATempty, x_34);
    i_35 = t;
    t = SSL_table_put(g_35, h_35, i_35);
    t = z_34;
    t = if_verbose4_1_0(o_6, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(q_6, t);
    y_34 = t;
    t = term_h_28;
    f_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_28, y_34);
    t = p_7(r_6, f_35, y_34, t);
    t = if_verbose6_1_0(u_6, t);
    t = term_h_28;
    a_35 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, x_34);
    d_35 = t;
    t = (ATerm) ATempty;
    e_35 = t;
    t = SSL_table_put(a_35, d_35, e_35);
    t = (ATerm) ATmakeAppl(sym__3, term_h_28, (ATerm)ATmakeAppl(sym_Imported_1, x_34), (ATerm) ATempty);
    t = if_verbose4_1_0(v_6, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  ATerm g_37 = NULL,s_37 = NULL,t_37 = NULL;
  g_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_37;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_37 = ATgetFirst((ATermList) t);
          t_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_17 = NULL,h_17 = NULL,i_17 = NULL,m_9 = NULL;
            t = SSLgetAnnotations(g_37);
            c_17 = t;
            t = s_37;
            t = y_71(t);
            h_17 = t;
            t = t_37;
            t = filter_1_0(y_71, t);
            i_17 = t;
            t = (ATerm) ATinsert(CheckATermList(i_17), h_17);
            m_9 = t;
            t = SSLsetAnnotations(m_9, c_17);
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            t = t_37;
            t = filter_1_0(y_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm g_38 (ATerm t)
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_73(t);
        t = g_38(t);
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
      }
    return(t);
  }
  t = g_38(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_38 = NULL;
            t = term_s_28;
            o_38 = t;
            t = SSL_getenv(o_38);
            ;
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = debug_1_0(f_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  t = term_h_28;
  e_39 = t;
  t = term_u_28;
  f_39 = t;
  t = term_v_28;
  t = z_7(e_39, f_39, t);
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
  t = debug_1_0(x_7, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_38 = NULL;
  t = if_verbose5_1_0(y_6, t);
  r_38 = t;
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_38 = NULL,v_38 = NULL;
        t = term_h_28;
        u_38 = t;
        t = term_i_28;
        v_38 = t;
        t = term_d_29;
        t = z_7(u_38, v_38, t);
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        {
          ATerm d_39 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          d_39 = t;
          t = repeat_1_0(h_7, t);
          t = d_39;
        }
      }
    t = r_38;
    t = if_verbose5_1_0(l_7, t);
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = debug_1_0(e_8, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm k_40 (ATerm l_39, ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  t = term_h_28;
  p_39 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, l_39);
  q_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_28, (ATerm) ATmakeAppl(sym_Tool_1, l_39));
  t = z_7(p_39, q_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_29 = ATgetFirst((ATermList) t);
      if(match_cons(g_29, sym__2))
        {
          ATerm i_29 = ATgetArgument(g_29, 0);
          o_39 = ATgetArgument(g_29, 1);
        }
      else
        _fail(t);
      {
        ATerm h_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_39;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = debug_1_0(i_8, t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_h_28;
  t = table_getlist_0_0(t);
  t = debug_1_0(k_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_39 = NULL,y_39 = NULL,z_39 = NULL;
      t = if_verbose5_1_0(b_8, t);
      t = xtc_load_0_0(t);
      z_39 = t;
      if(match_cons(t, sym__2))
        {
          u_39 = ATgetArgument(t, 0);
          y_39 = ATgetArgument(t, 1);
          {
            ATerm p_29 = t;
            int q_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
                t = term_h_28;
                d_40 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_39);
                e_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_28, (ATerm) ATmakeAppl(sym_Tool_1, u_39));
                t = z_7(d_40, e_40, t);
                {
                  ATerm f_8 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_39 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((c_40 != NULL) && (c_40 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_40 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(f_8, t);
                  t = not_null(c_40);
                }
                ;
                LocalPopChoice(q_29);
              }
            else
              {
                t = p_29;
                t = k_40(z_39, t);
              }
          }
        }
      else
        {
          t = k_40(z_39, t);
        }
      t = if_verbose5_1_0(g_8, t);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = k_29;
      {
        ATerm j_40 = NULL,r_17 = NULL,v_17 = NULL;
        j_40 = t;
        t = term_f_20;
        r_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_29), j_40), term_r_29);
        v_17 = t;
        t = SSL_printnl(r_17, v_17);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_29), j_40), term_r_29);
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
ATerm t_7 (ATerm u_12, ATerm v_12, ATerm t)
{
  t = SSL_copy(u_12, v_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  h_41 = t;
  if(match_cons(t, sym_FILE_1))
    {
      i_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_18 = NULL;
        t = h_41;
        t = n_0(t);
        d_18 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = d_18;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = d_18;
          }
        t = (ATerm) ATmakeAppl(sym__2, i_41, d_18);
        t = t_7(i_41, d_18, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_41);
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        {
          ATerm v_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_18 = NULL;
              t = h_41;
              t = n_0(t);
              o_18 = t;
              {
                ATerm x_29 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_18 = NULL;
                    p_18 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = p_18;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = p_18;
                          }
                        else
                          {
                            t = p_18;
                            if((i_41 != t))
                              {
                                _fail(t);
                              }
                            t = p_18;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_29;
                  }
                t = (ATerm) ATmakeAppl(sym__2, i_41, o_18);
                t = t_7(i_41, o_18, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, i_41);
              }
              ;
              LocalPopChoice(w_29);
            }
          else
            {
              t = v_29;
              t = h_41;
              t = n_0(t);
              if((i_41 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_41);
            }
        }
      }
  }
  return(t);
}
ATerm u_7 (ATerm p_33, ATerm q_33, ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  n_41 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_33, q_33);
        t = z_7(p_33, q_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_30 = ATgetFirst((ATermList) t);
            m_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_29);
        t = SSL_table_put(p_33, q_33, m_41);
        t = (ATerm) ATmakeAppl(sym__3, p_33, q_33, m_41);
      }
    else
      {
        t = y_29;
        t = SSL_table_remove(p_33, q_33);
        t = (ATerm) ATmakeAppl(sym__2, p_33, q_33);
      }
    t = n_41;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_74 (ATerm), ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  r_41 = t;
  t = y_74(t);
  q_41 = t;
  {
    ATerm d_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_41 = NULL;
        t = term_s_20;
        t_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_41, term_s_20);
        t = z_7(q_41, t_41, t);
        ;
        LocalPopChoice(h_30);
      }
    else
      {
        t = d_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_41 = ATgetFirst((ATermList) t);
        o_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_s_20;
    s_41 = t;
    t = SSL_table_put(q_41, s_41, o_41);
    t = p_41;
    {
      ATerm m_8 (ATerm t)
      {
        ATerm u_41 = NULL;
        u_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_41, u_41);
        t = u_7(q_41, u_41, t);
        return(t);
      }
      t = map_1_0(m_8, t);
      t = r_41;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_75(t);
      t = u_75(t);
      ;
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      t = u_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_74 (ATerm), ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  x_41 = t;
  t = x_74(t);
  w_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_41, term_s_20);
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_42 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_30 = ATgetArgument(t, 0);
            ATerm n_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_20;
        e_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_41, term_s_20);
        t = z_7(w_41, e_42, t);
        ;
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        t = (ATerm) ATempty;
      }
    y_41 = t;
    t = term_s_20;
    z_41 = t;
    t = (ATerm) ATinsert(CheckATermList(y_41), (ATerm) ATempty);
    a_42 = t;
    t = SSL_table_put(w_41, z_41, a_42);
    t = x_41;
  }
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm n_42 = NULL;
  n_42 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_42);
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = n_42;
      }
  }
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm c_78 (ATerm), ATerm t)
{
  ATerm h_42 = NULL;
  ATerm q_8 (ATerm t)
  {
    ATerm i_42 = NULL;
    i_42 = t;
    {
      ATerm q_30 = t;
      int r_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_42 = NULL,k_42 = NULL;
          t = term_j_21;
          j_42 = t;
          t = term_s_20;
          k_42 = t;
          t = term_t_30;
          t = z_7(j_42, k_42, t);
          ;
          LocalPopChoice(r_30);
        }
      else
        {
          t = q_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((h_42 != NULL) && (h_42 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            h_42 = ATgetFirst((ATermList) t);
          {
            ATerm u_30 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = h_42;
      t = map_1_0(r_8, t);
      t = i_42;
      t = end_scope_1_0(s_8, t);
    }
    return(t);
  }
  t = begin_scope_1_0(p_8, t);
  t = restore_always_2_0(c_78, q_8, t);
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm v_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = v_30;
      t = term_a_22;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm d_78 (ATerm), ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_42 = NULL;
        t = term_m_21;
        t = get_config_0_0(t);
        q_42 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_42);
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = term_o_23;
      }
    t = d_78(t);
    t = copy_to_1_0(u_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(t_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
  r_42 = t;
  t = term_c_21;
  t = whoami_0_0(t);
  s_42 = t;
  t = term_f_20;
  u_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_31), s_42), term_b_31);
  v_42 = t;
  t = SSL_printnl(u_42, v_42);
  t = term_l_13;
  t_42 = t;
  t = SSL_exit(t_42);
  t = r_42;
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm x_42 = NULL;
  x_42 = t;
  if(match_string(t, "-k"))
    {
      t = x_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_42;
    }
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
  y_42 = t;
  t = SSL_string_to_int(y_42);
  z_42 = t;
  t = term_s_21;
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_21, z_42);
  t = c_8(a_43, z_42, t);
  t = y_42;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_8, w_8, y_8, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm c_43 = NULL;
  c_43 = t;
  if(match_string(t, "-S"))
    {
      t = c_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_43;
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL;
  t = term_f_13;
  d_43 = t;
  t = term_n_31;
  e_43 = t;
  t = term_o_31;
  t = c_8(d_43, e_43, t);
  t = term_p_31;
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  t = SSL_string_to_int(f_43);
  g_43 = t;
  t = term_f_13;
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_13, g_43);
  t = c_8(h_43, g_43, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_43);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL;
  t = term_u_31;
  i_43 = t;
  t = term_c_21;
  j_43 = t;
  t = term_v_31;
  t = c_8(i_43, j_43, t);
  t = term_c_32;
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_8, b_9, c_9, t);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = e_32;
      {
        ATerm l_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_9, g_9, h_9, t);
            ;
            LocalPopChoice(m_32);
          }
        else
          {
            t = l_32;
            t = Option_3_0(i_9, j_9, k_9, t);
          }
      }
    }
  return(t);
}
ATerm c_8 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm k_43 = NULL;
  t = term_a_26;
  k_43 = t;
  t = SSL_table_put(k_43, k_35, l_35);
  t = (ATerm) ATmakeAppl(sym__3, term_a_26, k_35, l_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
      t = term_c_21;
      t = h_0(t);
      p_43 = t;
      t = term_n_32;
      q_43 = t;
      t = term_o_32;
      r_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_32, term_o_32, p_43);
      t = a_8(q_43, r_43, p_43, t);
      _fail(t);
    }
  else
    {
      ATerm u_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_43 = ATgetFirst((ATermList) t);
          o_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_43;
      t = d_0(t);
      t = term_c_21;
      t = g_0(t);
      u_43 = t;
      t = (ATerm) ATinsert(CheckATermList(o_43), u_43);
    }
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm w_43 = NULL;
  w_43 = t;
  if(match_string(t, "-o"))
    {
      t = w_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_43;
    }
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL;
  x_43 = t;
  t = term_k_21;
  y_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, x_43);
  t = c_8(y_43, x_43, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_43);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_9, n_9, p_9, t);
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm a_44 = NULL;
  a_44 = t;
  if(match_string(t, "-i"))
    {
      t = a_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_44;
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  b_44 = t;
  t = term_m_21;
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, b_44);
  t = c_8(c_44, b_44, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_44);
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_9, u_9, w_9, t);
  return(t);
}
ATerm a_8 (ATerm k_33, ATerm l_33, ATerm j_33, ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
  {
    ATerm s_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_32 = ATgetArgument(t, 0);
            ATerm y_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
        t = z_7(k_33, l_33, t);
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = s_32;
        t = (ATerm) ATempty;
      }
    f_44 = t;
    t = (ATerm) ATinsert(CheckATermList(f_44), j_33);
    g_44 = t;
    t = SSL_table_put(k_33, l_33, g_44);
    t = e_44;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
      t = term_c_21;
      t = m_0(t);
      r_44 = t;
      t = term_n_32;
      s_44 = t;
      t = term_o_32;
      t_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_32, term_o_32, r_44);
      t = a_8(s_44, t_44, r_44, t);
      _fail(t);
    }
  else
    {
      ATerm x_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_44 = ATgetFirst((ATermList) t);
          o_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_44 = ATgetFirst((ATermList) t);
          q_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_44;
      t = k_0(t);
      t = p_44;
      t = l_0(t);
      x_44 = t;
      t = (ATerm) ATinsert(CheckATermList(q_44), x_44);
    }
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm z_44 = NULL;
  z_44 = t;
  if(match_string(t, "-I"))
    {
      t = z_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = z_44;
    }
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
  a_45 = t;
  t = term_n_22;
  b_45 = t;
  t = (ATerm) ATinsert(ATempty, a_45);
  c_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATempty, a_45));
  t = k_7(b_45, c_45, t);
  t = a_45;
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm f_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  d_45 = t;
  t = term_e_24;
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_24, d_45);
  t = c_8(e_45, d_45, t);
  t = d_45;
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_a_33;
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
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  f_45 = t;
  t = term_f_13;
  g_45 = t;
  t = term_n_31;
  h_45 = t;
  t = term_o_31;
  t = c_8(g_45, h_45, t);
  t = f_45;
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(x_9, z_9, e_10, t);
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      {
        ATerm f_33 = t;
        int g_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_10, n_10, q_10, t);
            ;
            LocalPopChoice(g_33);
          }
        else
          {
            t = f_33;
            t = Option_3_0(r_10, s_10, w_10, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_21;
  t = whoami_0_0(t);
  i_45 = t;
  t = term_f_20;
  k_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_33), i_45);
  l_45 = t;
  t = SSL_printnl(k_45, l_45);
  t = term_l_13;
  j_45 = t;
  t = SSL_exit(j_45);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_7 (ATerm f_31, ATerm g_31, ATerm t)
{
  ATerm o_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_31, g_31);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = o_33;
      t = SSL_addr(f_31, g_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_70 (ATerm), ATerm v_70 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_45;
      t = u_70(t);
    }
  else
    {
      ATerm s_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_45 = ATgetFirst((ATermList) t);
          p_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_45;
      t = foldr_2_0(u_70, v_70, t);
      s_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_45, s_45);
      t = v_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(z_18, a_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_45 = NULL,v_18 = NULL,w_18 = NULL;
  t = times_0_0(t);
  w_18 = t;
  t = SSL_explode_term(w_18);
  if(match_cons(t, sym__2))
    {
      ATerm x_33 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_18;
  t = foldr_2_0(y_10, z_10, t);
  v_45 = t;
  t = SSL_TicksToSeconds(v_45);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  if(match_cons(t, sym__2))
    {
      h_46 = ATgetArgument(t, 0);
      i_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_46;
        if((h_46 != t))
          {
            _fail(t);
          }
        t = g_46;
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = a_34;
        t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        {
          ATerm d_34 = t;
          int k_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_46, i_46);
              ;
              LocalPopChoice(k_34);
            }
          else
            {
              t = d_34;
              t = SSL_gtr(h_46, i_46);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_76 (ATerm), ATerm t)
{
  ATerm m_46 = NULL;
  m_46 = t;
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_46 = NULL;
        t = term_f_13;
        t = get_config_0_0(t);
        o_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_46, term_l_13);
        t = geq_0_0(t);
        t = m_46;
        t = f_76(t);
        ;
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
        t = m_46;
      }
  }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,t_46 = NULL,u_46 = NULL;
  t = run_time_0_0(t);
  q_46 = t;
  t = term_c_21;
  t = whoami_0_0(t);
  r_46 = t;
  t = term_f_20;
  t_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_34), q_46), term_r_13), r_46);
  u_46 = t;
  t = SSL_printnl(t_46, u_46);
  t = (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_34), q_46), term_r_13), r_46));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_31;
  v_46 = t;
  t = SSL_exit(v_46);
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL;
  e_47 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_47;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_47 = ATgetArgument(t, 0);
          {
            ATerm t_19 = NULL,q_9 = NULL;
            t = SSLgetAnnotations(e_47);
            t_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_47);
            q_9 = t;
            t = SSLsetAnnotations(q_9, t_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_47;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      t = fetch_1_0(b_11, t);
    }
  t = e_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_47 = ATgetFirst((ATermList) t);
      i_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_47 = NULL,n_47 = NULL;
        ATerm d_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_47)), not_null(n_47));
          return(t);
        }
        t = i_47;
        t = j_0(t);
        if(((m_47 != NULL) && (m_47 != t)))
          _fail(t);
        else
          m_47 = t;
        t = h_47;
        t = i_0(t);
        if(((n_47 != NULL) && (n_47 != t)))
          _fail(t);
        else
          n_47 = t;
        t = i_47;
        t = reverse_acc_2_0(i_0, d_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_21;
      t = j_0(t);
    }
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,v_9 = NULL;
  t_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_47);
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_47);
  v_9 = t;
  t = SSLsetAnnotations(v_9, r_47);
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm v_47 = NULL;
  v_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_47), term_t_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL;
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      t = fetch_1_0(f_11, t);
    }
  t = term_m_35;
  t = echo_0_0(t);
  t = term_n_32;
  p_47 = t;
  t = term_o_32;
  q_47 = t;
  t = term_t_35;
  t = z_7(p_47, q_47, t);
  t = reverse_acc_2_0(_id, h_11, t);
  t = map_1_0(i_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_64 (ATerm), ATerm t)
{
  ATerm s_48 (ATerm t)
  {
    ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
    p_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_48 = ATgetFirst((ATermList) t);
        r_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_35 = t;
      int v_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_20 = NULL,x_20 = NULL,o_10 = NULL;
          t = SSLgetAnnotations(p_48);
          r_20 = t;
          t = q_48;
          t = m_64(t);
          x_20 = t;
          t = (ATerm) ATinsert(CheckATermList(r_48), x_20);
          o_10 = t;
          t = SSLsetAnnotations(o_10, r_20);
          ;
          LocalPopChoice(v_35);
        }
      else
        {
          t = u_35;
          {
            ATerm h_21 = NULL,l_21 = NULL,p_10 = NULL;
            t = SSLgetAnnotations(p_48);
            h_21 = t;
            t = r_48;
            t = s_48(t);
            l_21 = t;
            t = (ATerm) ATinsert(CheckATermList(l_21), q_48);
            p_10 = t;
            t = SSLsetAnnotations(p_10, h_21);
          }
        }
    }
    return(t);
  }
  t = s_48(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL;
  w_48 = t;
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_48;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_35 = ATgetFirst((ATermList) t);
                ATerm b_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_48;
          }
        ;
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        t = (ATerm) ATinsert(ATempty, w_48);
      }
    x_48 = t;
    t = term_a_22;
    y_48 = t;
    t = SSL_printnl(y_48, x_48);
    t = w_48;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_33;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm y_7 (ATerm b_30, ATerm c_30, ATerm t)
{
  t = SSL_strcat(b_30, c_30);
  return(t);
}
ATerm debug_1_0 (ATerm h_60 (ATerm), ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
  c_49 = t;
  t = h_60(t);
  d_49 = t;
  t = term_f_20;
  e_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_49), d_49);
  f_49 = t;
  t = SSL_printnl(e_49, f_49);
  t = c_49;
  return(t);
}
ATerm map_1_0 (ATerm c_64 (ATerm), ATerm t)
{
  ATerm u_49 (ATerm t)
  {
    ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
    r_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_49;
      }
    else
      {
        ATerm i_22 = NULL,l_22 = NULL,m_22 = NULL,v_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_49 = ATgetFirst((ATermList) t);
            t_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_49);
        i_22 = t;
        t = s_49;
        t = c_64(t);
        l_22 = t;
        t = t_49;
        t = u_49(t);
        m_22 = t;
        t = (ATerm) ATinsert(CheckATermList(m_22), l_22);
        v_10 = t;
        t = SSLsetAnnotations(v_10, i_22);
      }
    return(t);
  }
  t = u_49(t);
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_36);
    }
  else
    {
      t = c_36;
    }
  return(t);
}
ATerm o_11 (ATerm t)
{
  t = term_g_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_50 = NULL;
      c_50 = t;
      t = SSL_is_string(c_50);
      ;
      LocalPopChoice(q_36);
    }
  else
    {
      t = h_36;
      {
        ATerm r_36 = t;
        int s_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_11, t);
            ;
            LocalPopChoice(s_36);
          }
        else
          {
            t = r_36;
            {
              ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
              i_50 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_50 = ATgetArgument(t, 0);
                  t = j_50;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_50 = ATgetArgument(t, 0);
                      t = j_50;
                      {
                        ATerm t_36 = t;
                        int u_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_36);
                          }
                        else
                          {
                            t = t_36;
                            t = debug_1_0(o_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_50 = NULL,p_50 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_50 = ATgetArgument(t, 0);
                          k_50 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_50;
                      t = eval_config_0_0(t);
                      o_50 = t;
                      t = k_50;
                      t = eval_config_0_0(t);
                      p_50 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_50, p_50);
                      t = y_7(o_50, p_50, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm z_7 (ATerm b_35, ATerm c_35, ATerm t)
{
  t = SSL_table_get(b_35, c_35);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  t_50 = t;
  t = term_a_26;
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_26, t_50);
  t = z_7(u_50, t_50, t);
  {
    ATerm v_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_50 = NULL,w_50 = NULL;
        t = eval_config_0_0(t);
        v_50 = t;
        t = term_a_26;
        w_50 = t;
        t = SSL_table_put(w_50, t_50, v_50);
        t = v_50;
        ;
        LocalPopChoice(y_36);
      }
    else
      {
        t = v_36;
      }
  }
  return(t);
}
ATerm q_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL;
  t = term_z_36;
  z_50 = t;
  t = term_c_21;
  a_51 = t;
  t = term_a_37;
  t = c_8(z_50, a_51, t);
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_b_37;
  return(t);
}
ATerm v_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL;
  t = term_z_36;
  d_51 = t;
  t = term_c_21;
  e_51 = t;
  t = term_a_37;
  t = c_8(d_51, e_51, t);
  t = term_g_25;
  b_51 = t;
  t = term_c_21;
  c_51 = t;
  t = term_c_37;
  t = c_8(b_51, c_51, t);
  t = term_d_37;
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_11, s_11, u_11, t);
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = f_37;
      t = Option_3_0(v_11, y_11, a_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_51 (ATerm), ATerm s_51 (ATerm), ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,d_12 = NULL;
  k_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_51 = ATgetFirst((ATermList) t);
      h_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_51);
  f_51 = t;
  t = g_51;
  t = r_51(t);
  i_51 = t;
  t = h_51;
  t = s_51(t);
  j_51 = t;
  t = (ATerm) ATinsert(CheckATermList(j_51), i_51);
  d_12 = t;
  t = SSLsetAnnotations(d_12, f_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_82 (ATerm), ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,t_51 = NULL,u_51 = NULL,w_51 = NULL,x_51 = NULL,h_12 = NULL;
  p_51 = t;
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_37;
        t = c_82(t);
        ;
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
      }
    t = p_51;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_51 = ATgetFirst((ATermList) t);
        u_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_51);
    q_51 = t;
    t = term_i_33;
    x_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_33, t_51);
    t = c_8(x_51, t_51, t);
    t = u_51;
    {
      ATerm h_52 (ATerm t)
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_37 = t;
            int o_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_52 = NULL;
                a_52 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_52;
                ;
                LocalPopChoice(o_37);
              }
            else
              {
                t = n_37;
                t = c_82(t);
                t = Cons_2_0(_id, h_52, t);
              }
            ;
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            {
              ATerm d_52 = NULL,e_52 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_52 = ATgetFirst((ATermList) t);
                  e_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_52), (ATerm) ATmakeAppl(sym_Undefined_1, d_52));
            }
          }
        return(t);
      }
      t = h_52(t);
      w_51 = t;
      t = (ATerm) ATinsert(CheckATermList(w_51), (ATerm) ATmakeAppl(sym_Program_1, t_51));
      h_12 = t;
      t = SSLsetAnnotations(h_12, q_51);
    }
  }
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm t_52 = NULL;
  t_52 = t;
  if(match_string(t, "--help"))
    {
      t = t_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_52;
        }
    }
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL;
  t = term_s_34;
  u_52 = t;
  t = term_c_21;
  v_52 = t;
  t = term_p_37;
  t = c_8(u_52, v_52, t);
  t = term_q_37;
  return(t);
}
ATerm i_12 (ATerm t)
{
  t = term_r_37;
  return(t);
}
ATerm j_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
  o_52 = t;
  t = term_n_32;
  q_52 = t;
  t = term_o_32;
  r_52 = t;
  t = (ATerm) ATempty;
  s_52 = t;
  t = SSL_table_put(q_52, r_52, s_52);
  t = o_52;
  {
    ATerm c_12 (ATerm t)
    {
      ATerm u_37 = t;
      int v_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_82(t);
          ;
          LocalPopChoice(v_37);
        }
      else
        {
          t = u_37;
          {
            ATerm w_37 = t;
            int x_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_12, g_12, i_12, t);
                ;
                LocalPopChoice(x_37);
              }
            else
              {
                t = w_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_12, t);
    {
      ATerm y_37 = t;
      int z_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_53 = NULL;
          c_53 = t;
          {
            ATerm a_38 = t;
            int b_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_23 = NULL;
                t = c_53;
                {
                  ATerm c_38 = t;
                  int d_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_34;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_38);
                    }
                  else
                    {
                      t = c_38;
                      t = fetch_1_0(j_12, t);
                    }
                  t = c_53;
                  t = default_system_usage_0_0(t);
                  t = term_n_31;
                  i_23 = t;
                  t = SSL_exit(i_23);
                }
                ;
                LocalPopChoice(b_38);
              }
            else
              {
                t = a_38;
                {
                  ATerm s_23 = NULL;
                  t = term_z_36;
                  t = get_config_0_0(t);
                  t = c_53;
                  t = default_system_about_0_0(t);
                  t = term_n_31;
                  s_23 = t;
                  t = SSL_exit(s_23);
                }
              }
          }
          ;
          LocalPopChoice(z_37);
        }
      else
        {
          t = y_37;
          {
            ATerm e_38 = t;
            int f_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
                ATerm n_12 (ATerm t)
                {
                  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,m_12 = NULL;
                  i_53 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_53);
                  g_53 = t;
                  t = h_53;
                  if(((m_52 != NULL) && (m_52 != t)))
                    _fail(t);
                  else
                    m_52 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_53);
                  m_12 = t;
                  t = SSLsetAnnotations(m_12, g_53);
                  return(t);
                }
                t = fetch_1_0(n_12, t);
                t = term_f_20;
                e_53 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_52)), term_h_38);
                f_53 = t;
                t = SSL_printnl(e_53, f_53);
                t = (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_52)), term_h_38));
                t = default_system_usage_0_0(t);
                t = term_l_13;
                d_53 = t;
                t = SSL_exit(d_53);
                ;
                LocalPopChoice(f_38);
              }
            else
              {
                t = e_38;
              }
          }
        }
      n_52 = t;
      t = term_n_32;
      p_52 = t;
      t = SSL_table_destroy(p_52);
      t = n_52;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  t = parse_options_1_0(g_80, t);
  n_53 = t;
  t = term_i_38;
  q_53 = t;
  t = SSL_table_create(q_53);
  t = term_i_38;
  o_53 = t;
  t = term_j_38;
  p_53 = t;
  t = SSL_table_put(o_53, p_53, n_53);
  t = n_53;
  t = i_80(t);
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_80, t);
        ;
        LocalPopChoice(l_38);
      }
    else
      {
        t = k_38;
        {
          ATerm m_38 = t;
          int n_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_38);
            }
          else
            {
              t = m_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      ;
      LocalPopChoice(q_38);
    }
  else
    {
      t = p_38;
      {
        ATerm s_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(t_38);
          }
        else
          {
            t = s_38;
            {
              ATerm w_38 = t;
              int x_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(x_38);
                }
              else
                {
                  t = w_38;
                  {
                    ATerm y_38 = t;
                    int z_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(x_12, y_12, z_12, t);
                        ;
                        LocalPopChoice(z_38);
                      }
                    else
                      {
                        t = y_38;
                        {
                          ATerm a_39 = t;
                          int b_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(b_39);
                            }
                          else
                            {
                              t = a_39;
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
ATerm w_12 (ATerm t)
{
  t = xtc_io_1_0(c_13, t);
  return(t);
}
ATerm x_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL;
  t = term_c_39;
  s_53 = t;
  t = term_c_21;
  t_53 = t;
  t = term_g_39;
  t = c_8(s_53, t_53, t);
  t = term_h_39;
  return(t);
}
ATerm z_12 (ATerm t)
{
  t = term_i_39;
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  v_53 = t;
  t = term_j_39;
  t = xtc_find_path_0_0(t);
  w_53 = t;
  t = term_n_22;
  x_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_53), term_k_39);
  y_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, w_53), term_k_39));
  t = k_7(x_53, y_53, t);
  t = v_53;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_12, default_usage_0_0, _id, w_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
