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
Symbol sym_ErrorNumber_1;
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
  sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
  ATprotectSymbol(sym_ErrorNumber_1);
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
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_b_40;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_j_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_b_38;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_i_37;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_b_36;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_u_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_y_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_y_31;
ATerm term_i_31;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_y_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_e_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_n_28;
ATerm term_i_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_b_28;
ATerm term_r_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_o_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_c_25;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_a_21;
ATerm term_u_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
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
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
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
ATerm term_c_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
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
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
void init_constant_terms (void)
{
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_m_13, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_g_14, term_i_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_c_16);
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
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_u_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_d_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_i_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_r_17, term_s_17);
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
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_c_18, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_j_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_p_18, term_q_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_u_18, term_v_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_z_18, term_c_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_g_19, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_k_19, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_p_19, term_s_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_x_19);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_j_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_x_28);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_a_21);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_c_32);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_n_21);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_j_25, term_m_13);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym__2, term_y_32, term_a_33);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_r_37, term_n_21);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym__2, term_h_25, term_n_21);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym__2, term_h_36, term_n_21);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym__2, term_b_40, term_n_21);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm h_7 (ATerm r_31, ATerm s_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm i_7 (ATerm v_15, ATerm w_15, ATerm);
ATerm j_7 (ATerm q_60 (ATerm), ATerm s_176, ATerm d_16, ATerm);
ATerm c_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm);
ATerm k_7 (ATerm p_12, ATerm q_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm f_59 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm m_7 (ATerm i_75 (ATerm), ATerm z_32, ATerm x_32, ATerm);
ATerm l_5 (ATerm w_4, ATerm);
ATerm m_5 (ATerm z_4, ATerm a_5, ATerm c_5, ATerm);
ATerm b_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm);
ATerm guarantee_extension_1_0 (ATerm h_73 (ATerm), ATerm);
ATerm if_keep1_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm o_76 (ATerm), ATerm);
ATerm EXDEV_0_0 (ATerm);
ATerm get_errno_0_0 (ATerm);
ATerm o_7 (ATerm u_12, ATerm t_12, ATerm);
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm get_syntax_definition_0_0 (ATerm);
ATerm p_7 (ATerm e_36, ATerm b_450, ATerm);
ATerm find_in_includes_1_0 (ATerm a_58 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm v_64 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm get_meta_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm get_syntax_0_0 (ATerm);
ATerm basename_1_0 (ATerm f_73 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm b_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm n_5 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm k_25 (ATerm v_24, ATerm);
ATerm conc_0_0 (ATerm);
ATerm q_7 (ATerm w_35, ATerm v_35, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm p_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm r_76 (ATerm), ATerm);
ATerm s_7 (ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm y_22, ATerm x_22, ATerm);
ATerm t_7 (ATerm n_68 (ATerm), ATerm u_22, ATerm t_22, ATerm);
ATerm a_6 (ATerm);
ATerm u_7 (ATerm n_34, ATerm o_34, ATerm p_34, ATerm);
ATerm v_7 (ATerm t_76 (ATerm), ATerm x_34, ATerm w_34, ATerm);
ATerm z_7 (ATerm u_36, ATerm v_36, ATerm);
ATerm q_31 (ATerm g_31, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm w_7 (ATerm b_16, ATerm);
ATerm x_7 (ATerm c_37, ATerm d_37, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_34 (ATerm f_32, ATerm);
ATerm g_34 (ATerm j_32, ATerm l_32, ATerm m_32, ATerm);
ATerm h_34 (ATerm g_33, ATerm h_33, ATerm j_33, ATerm);
ATerm y_7 (ATerm);
ATerm e_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm i_6 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm e_74 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm l_7 (ATerm);
ATerm z_40 (ATerm r_39, ATerm);
ATerm r_7 (ATerm);
ATerm d_8 (ATerm);
ATerm i_8 (ATerm);
ATerm l_8 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm a_8 (ATerm v_12, ATerm w_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm b_8 (ATerm v_33, ATerm w_33, ATerm);
ATerm end_scope_1_0 (ATerm f_75 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_75 (ATerm), ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm t_8 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm v_8 (ATerm);
ATerm xtc_io_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm c_9 (ATerm);
ATerm e_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm m_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_8 (ATerm q_35, ATerm r_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm h_8 (ATerm q_33, ATerm r_33, ATerm p_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm h_10 (ATerm);
ATerm m_10 (ATerm);
ATerm r_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm parse_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_8 (ATerm l_31, ATerm m_31, ATerm);
ATerm foldr_2_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm h_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_11 (ATerm);
ATerm need_help_1_0 (ATerm l_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm u_11 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_8 (ATerm g_30, ATerm h_30, ATerm);
ATerm debug_1_0 (ATerm o_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_64 (ATerm), ATerm);
ATerm v_11 (ATerm);
ATerm x_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm g_8 (ATerm h_35, ATerm i_35, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_11 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm e_12 (ATerm);
ATerm g_12 (ATerm);
ATerm i_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_51 (ATerm), ATerm y_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_82 (ATerm), ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm o_12 (ATerm);
ATerm x_12 (ATerm);
ATerm parse_options_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm e_13 (ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm parse_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm h_7 (ATerm r_31, ATerm s_31, ATerm t)
{
  ATerm x_5 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_31, s_31);
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = x_5;
      t = SSL_subtr(r_31, s_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,o_0 = NULL;
  t = term_j_13;
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = term_m_13;
      }
    b_0 = t;
    t = term_m_13;
    o_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_m_13);
    t = h_7(b_0, o_0, t);
    e_0 = t;
    t = SSL_int_to_string(e_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_j_13);
  }
  return(t);
}
ATerm i_7 (ATerm v_15, ATerm w_15, ATerm t)
{
  ATerm q_0 = NULL;
  t = SSL_write_term_to_stream_baf(v_15, w_15);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_0);
  return(t);
}
ATerm j_7 (ATerm q_60 (ATerm), ATerm s_176, ATerm d_16, ATerm t)
{
  ATerm t_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_176, term_n_13);
  t = y_7(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_0, d_16);
  t = q_60(t);
  t = fclose_0_0(t);
  t = d_16;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm w_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_13 = ATgetArgument(t, 0);
      if(match_cons(o_13, sym_Stream_1))
        {
          w_0 = ATgetArgument(o_13, 0);
        }
      else
        _fail(t);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(w_0, z_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL;
  u_0 = t;
  t = xtc_new_file_0_0(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, u_0);
  t = j_7(c_0, v_0, u_0, t);
  t = SSL_close_file(v_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(g_79, h_79, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm k_7 (ATerm p_12, ATerm q_12, ATerm t)
{
  t = SSL_execvp(p_12, q_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,a_2 = NULL,c_2 = NULL;
  w_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_1 = ATgetArgument(t, 0);
      {
        ATerm y_0 = NULL,a_1 = NULL;
        t = SSL_int_to_string(x_1);
        y_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_13), y_0), term_p_13);
        a_1 = t;
        t = SSL_concat_strings(a_1);
      }
    }
  else
    {
      ATerm b_2 = NULL,g_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_1 = ATgetArgument(t, 0);
          a_2 = ATgetArgument(t, 1);
          c_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_2);
      b_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_2), term_t_13), b_2), term_s_13), x_1);
      g_2 = t;
      t = SSL_concat_strings(g_2);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm f_2 = NULL;
  f_2 = t;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm x_13 = ATgetArgument(t, 0);
              if((f_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm y_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_19), term_u_19), term_m_19), term_i_19), term_d_19), term_x_18), term_r_18), term_k_18), term_e_18), term_y_17), term_u_17), term_p_17), term_j_17), term_e_17), term_x_16), term_r_16), term_m_16), term_i_16), term_e_16), term_y_15), term_s_15), term_o_15), term_k_15), term_g_15), term_z_14), term_u_14), term_o_14), term_d_14);
        t = fetch_elem_1_0(f_0, t);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, f_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_2 = NULL,v_2 = NULL;
  o_2 = t;
  {
    ATerm z_19 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_20 = ATgetArgument(t, 0);
            v_2 = ATgetArgument(t, 1);
            {
              ATerm e_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_20);
        {
          ATerm f_20 = t;
          int g_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,x_2 = NULL,y_2 = NULL;
              t = v_2;
              {
                ATerm k_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_20;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                m_2 = t;
                t = term_n_20;
                x_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, m_2), term_o_20);
                y_2 = t;
                t = SSL_printnl(x_2, y_2);
                t = (ATerm) ATmakeAppl(sym__2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_o_20));
              }
              ;
              LocalPopChoice(g_20);
            }
          else
            {
              t = f_20;
              t = o_2;
            }
        }
      }
    else
      {
        t = z_19;
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
ATerm fork_and_wait_1_0 (ATerm f_59 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL;
  l_3 = t;
  t = fork_0_0(t);
  k_3 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = l_3;
        t = f_59(t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = SSL_waitpid(k_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_20 = ATgetArgument(t, 0);
            if(((ATgetType(r_20) != AT_INT) || (ATgetInt((ATermInt) r_20) != 0)))
              _fail(t);
            {
              ATerm s_20 = ATgetArgument(t, 1);
            }
            {
              ATerm t_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = l_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,p_3 = NULL;
  p_3 = t;
  t = x_78(t);
  t = xtc_find_0_0(t);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_3, p_3);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm u_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_3, p_3);
      t = k_7(n_3, p_3, t);
      t = term_u_20;
      u_3 = t;
      t = SSL_exit(u_3);
      return(t);
    }
    t = fork_and_wait_1_0(x_0, t);
    t = p_3;
  }
  return(t);
}
ATerm m_7 (ATerm i_75 (ATerm), ATerm z_32, ATerm x_32, ATerm t)
{
  ATerm c_4 = NULL,e_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,n_4 = NULL;
  j_4 = t;
  t = i_75(t);
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_4, z_32, x_32);
  t = h_8(c_4, z_32, x_32, t);
  {
    ATerm v_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL;
        t = term_a_21;
        p_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_4, term_a_21);
        t = g_8(c_4, p_4, t);
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = v_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_4 = ATgetFirst((ATermList) t);
        i_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_a_21;
    k_4 = t;
    t = (ATerm) ATinsert(CheckATermList(i_4), (ATerm) ATinsert(CheckATermList(e_4), z_32));
    n_4 = t;
    t = SSL_table_put(c_4, k_4, n_4);
    t = j_4;
  }
  return(t);
}
ATerm l_5 (ATerm w_4, ATerm t)
{
  t = w_4;
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_21 = ATgetArgument(t, 0);
            ATerm g_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
    t = term_h_21;
    t = debug_1_0(b_1, t);
    t = (ATerm) ATmakeAppl(sym__2, w_4, term_n_13);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm m_5 (ATerm z_4, ATerm a_5, ATerm c_5, ATerm t)
{
  t = SSL_open_file(z_4, a_5);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_5 = NULL,i_5 = NULL,j_5 = NULL;
  g_5 = t;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_5(g_5, t);
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = m_5(i_5, j_5, g_5, t);
          }
      }
    }
  else
    {
      t = l_5(g_5, t);
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
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
  t = term_n_21;
  t = new_0_0(t);
  o_5 = t;
  t = term_o_21;
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_5, term_o_21);
  t = f_8(o_5, p_5, t);
  q_5 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_5 = NULL;
        t = (ATerm) ATinsert(ATempty, term_s_21);
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_5, (ATerm) ATinsert(ATempty, term_s_21));
        t = z_7(q_5, v_5, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = q_5;
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL;
  t = new_file_0_0(t);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_5, term_n_13);
  t = open_file_0_0(t);
  t = term_n_21;
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_5, term_n_21);
  t = m_7(c_1, y_5, z_5, t);
  t = y_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t)
{
  ATerm o_6 = NULL,q_6 = NULL;
  o_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_3 = NULL,d_3 = NULL;
      t = o_6;
      t = xtc_new_file_0_0(t);
      c_3 = t;
      t = s_0(t);
      d_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_3, (ATerm) ATinsert(ATinsert(ATempty, c_3), term_w_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(c_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_3);
    }
  else
    {
      ATerm q_3 = NULL,r_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_6;
      t = xtc_new_file_0_0(t);
      q_3 = t;
      t = s_0(t);
      r_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_3), term_w_21), q_6), term_x_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(q_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_3);
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm h_73 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,c_7 = NULL;
  t = basename_1_0(_id, t);
  c_7 = t;
  t = term_n_21;
  t = h_73(t);
  z_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_6), term_y_21), c_7);
  y_6 = t;
  t = SSL_concat_strings(y_6);
  return(t);
}
ATerm if_keep1_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm e_8 = NULL;
  e_8 = t;
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_8 = NULL;
        t = term_b_22;
        t = get_config_0_0(t);
        k_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_8, term_m_13);
        t = geq_0_0(t);
        t = e_8;
        t = p_77(t);
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = e_8;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm o_76 (ATerm), ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL;
        t = term_j_13;
        t = get_config_0_0(t);
        s_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_8, term_s_14);
        t = geq_0_0(t);
        t = p_8;
        t = o_76(t);
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        t = p_8;
      }
  }
  return(t);
}
ATerm EXDEV_0_0 (ATerm t)
{
  t = SSL_EXDEV();
  return(t);
}
ATerm get_errno_0_0 (ATerm t)
{
  t = SSL_get_errno();
  return(t);
}
ATerm o_7 (ATerm u_12, ATerm t_12, ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(u_12, t_12);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      t = get_errno_0_0(t);
      t = term_n_21;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, u_12, t_12);
      t = a_8(u_12, t_12, t);
      t = SSL_remove(u_12);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t)
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
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL;
        t = s_9;
        t = p_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_k_22;
        y_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_9, term_k_22);
        t = a_8(t_9, y_3, t);
        t = SSL_remove(t_9);
        t = term_k_22;
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_4 = NULL;
              t = s_9;
              t = p_0(t);
              g_4 = t;
              {
                ATerm n_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_4 = NULL;
                    h_4 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = h_4;
                      }
                    else
                      {
                        t = h_4;
                        if((t_9 != t))
                          {
                            _fail(t);
                          }
                        t = h_4;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, t_9, g_4);
                t = o_7(t_9, g_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, g_4);
              }
              ;
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
              t = s_9;
              t = p_0(t);
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
  t = term_o_22;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_s_22;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm d_10 = NULL,g_10 = NULL,i_10 = NULL;
  d_10 = t;
  t = term_n_20;
  g_10 = t;
  t = (ATerm) ATinsert(ATempty, term_w_22);
  i_10 = t;
  t = SSL_printnl(g_10, i_10);
  t = d_10;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_z_22;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_b_23;
  t = get_config_0_0(t);
  t = map_1_0(s_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_10), term_b_23);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_b_23;
  t = get_config_0_0(t);
  t = map_1_0(v_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_10), term_b_23);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL;
  t = if_verbose6_1_0(d_1, t);
  a_10 = t;
  t = guarantee_extension_1_0(h_1, t);
  z_9 = t;
  t = a_10;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_10 = NULL;
        t = z_9;
        t = find_in_includes_1_0(k_1, t);
        b_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_10);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm c_10 = NULL;
          ATerm y_1 (ATerm t)
          {
            t = z_9;
            return(t);
          }
          t = if_verbose2_1_0(l_1, t);
          t = guarantee_extension_1_0(m_1, t);
          c_10 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, c_10);
          {
            ATerm f_23 = t;
            int g_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_10 = NULL,k_10 = NULL,e_1 = NULL;
                k_10 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm h_23 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_10);
                j_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, c_10);
                e_1 = t;
                t = SSLsetAnnotations(e_1, j_10);
                LocalPopChoice(g_23);
                t = xtc_transform_file_2_0(n_1, r_1, t);
              }
            else
              {
                t = f_23;
                t = xtc_transform_term_2_0(t_1, u_1, t);
              }
            t = rename_to_1_0(y_1, t);
          }
        }
      }
  }
  return(t);
}
ATerm p_7 (ATerm e_36, ATerm b_450, ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm p_10 = NULL,q_10 = NULL,s_10 = NULL,t_10 = NULL;
    p_10 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_36), term_j_23), p_10);
    t_10 = t;
    t = SSL_concat_strings(t_10);
    q_10 = t;
    t = (ATerm) ATinsert(ATempty, term_s_21);
    s_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_10, (ATerm) ATinsert(ATempty, term_s_21));
    t = z_7(q_10, s_10, t);
    return(t);
  }
  t = b_450;
  t = fetch_elem_1_0(z_1, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm a_58 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  ATerm h_2 (ATerm t)
  {
    t = debug_1_0(a_58, t);
    return(t);
  }
  v_10 = t;
  t = term_b_23;
  t = get_config_0_0(t);
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_10, u_10);
  t = p_7(v_10, u_10, t);
  t = if_verbose2_1_0(h_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_k_23;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,n_11 = NULL;
  k_11 = t;
  t = term_n_20;
  l_11 = t;
  t = (ATerm) ATinsert(ATempty, term_n_23);
  n_11 = t;
  t = SSL_printnl(l_11, n_11);
  t = k_11;
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = debug_1_0(b_3, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm g_11 = NULL,i_11 = NULL;
  t = if_verbose6_1_0(i_2, t);
  g_11 = t;
  t = guarantee_extension_1_0(k_2, t);
  i_11 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_11 = NULL;
        t = find_in_includes_1_0(l_2, t);
        j_11 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_11);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
          ATerm z_2 (ATerm t)
          {
            t = i_11;
            return(t);
          }
          t = if_verbose2_1_0(n_2, t);
          t = g_11;
          t = get_syntax_definition_0_0(t);
          {
            ATerm r_23 = t;
            int s_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_11 = NULL,y_11 = NULL;
                y_11 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    w_11 = ATgetArgument(t, 0);
                    {
                      ATerm r_4 = NULL,g_1 = NULL;
                      t = SSLgetAnnotations(y_11);
                      r_4 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, w_11);
                      g_1 = t;
                      t = SSLsetAnnotations(g_1, r_4);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = y_11;
                  }
                LocalPopChoice(s_23);
                {
                  ATerm t_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, g_11), term_t_23);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(s_2, t_2, t);
                }
              }
            else
              {
                t = r_23;
                {
                  ATerm w_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, g_11), term_t_23);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(u_2, w_2, t);
                }
              }
            t = rename_to_1_0(z_2, t);
          }
        }
      }
    t = if_verbose6_1_0(a_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm d_12 = NULL;
  d_12 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_12 = NULL;
        t = term_j_13;
        t = get_config_0_0(t);
        h_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_12, term_g_14);
        t = geq_0_0(t);
        t = d_12;
        t = n_76(t);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = d_12;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_64 (ATerm), ATerm t)
{
  ATerm k_12 = NULL;
  ATerm e_3 (ATerm t)
  {
    t = v_64(t);
    if(((k_12 != NULL) && (k_12 != t)))
      _fail(t);
    else
      k_12 = t;
    return(t);
  }
  t = fetch_1_0(e_3, t);
  t = not_null(k_12);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm n_12 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_23;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm r_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_21);
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_12, (ATerm) ATinsert(ATempty, term_s_21));
      t = z_7(n_12, r_12, t);
      t = ReadFromFile_0_0(t);
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
  t = term_x_23;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_y_23;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm z_12 = NULL,z_13 = NULL,a_14 = NULL;
  t = if_verbose6_1_0(f_3, t);
  z_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL,k_5 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(z_13);
        d_5 = t;
        t = a_14;
        t = guarantee_extension_1_0(h_3, t);
        k_5 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_5);
        i_1 = t;
        t = SSLsetAnnotations(i_1, d_5);
        t = read_from_0_0(t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
          ATerm b_6 = NULL,c_6 = NULL,g_6 = NULL,j_1 = NULL;
          t = SSLgetAnnotations(z_13);
          c_6 = t;
          t = a_14;
          t = guarantee_extension_1_0(i_3, t);
          g_6 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, g_6);
          j_1 = t;
          t = SSLsetAnnotations(j_1, c_6);
          t = read_from_0_0(t);
          b_6 = t;
          t = SSL_explode_term(b_6);
          if(match_cons(t, sym__2))
            {
              z_12 = ATgetArgument(t, 0);
              {
                ATerm c_24 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, z_12)));
        }
      }
    t = if_verbose6_1_0(j_3, t);
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = debug_1_0(s_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm p_14 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_14;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = debug_1_0(w_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm f_14 = NULL;
  t = if_verbose6_1_0(o_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_24;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_14 (ATerm h_14, ATerm t)
              {
                ATerm j_14 = NULL,l_14 = NULL;
                t = term_n_20;
                j_14 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_24), f_14), term_p_24), h_14), term_k_24);
                l_14 = t;
                t = SSL_printnl(j_14, l_14);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_24), f_14), term_p_24), h_14), term_k_24);
                _fail(t);
                return(t);
              }
              ATerm m_14 = NULL,n_14 = NULL;
              t = get_meta_0_0(t);
              n_14 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  m_14 = ATgetArgument(t, 0);
                  {
                    ATerm r_24 = t;
                    int s_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_14;
                        t = fetch_elem_1_0(t_3, t);
                        ;
                        LocalPopChoice(s_24);
                      }
                    else
                      {
                        t = r_24;
                        t = q_14(n_14, t);
                      }
                  }
                }
              else
                {
                  t = q_14(n_14, t);
                }
              ;
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              t = term_t_24;
            }
        }
      }
    t = if_verbose2_1_0(v_3, t);
  }
  return(t);
}
ATerm basename_1_0 (ATerm f_73 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,a_15 = NULL;
  a_15 = t;
  t = SSL_explode_string(a_15);
  {
    ATerm u_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_17 (ATerm t)
        {
          ATerm v_16 = NULL,w_16 = NULL,z_16 = NULL;
          v_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_16 = ATgetFirst((ATermList) t);
              z_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm x_24 = t;
            int y_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_6 = NULL,d_7 = NULL,o_1 = NULL;
                t = SSLgetAnnotations(v_16);
                x_6 = t;
                t = z_16;
                t = f_17(t);
                d_7 = t;
                t = (ATerm) ATinsert(CheckATermList(d_7), w_16);
                o_1 = t;
                t = SSLsetAnnotations(o_1, x_6);
                ;
                LocalPopChoice(y_24);
              }
            else
              {
                t = x_24;
                {
                  ATerm z_24 = t;
                  int a_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_8 = NULL,p_1 = NULL;
                      t = SSLgetAnnotations(v_16);
                      m_8 = t;
                      t = w_16;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(z_16), w_16);
                      p_1 = t;
                      t = SSLsetAnnotations(p_1, m_8);
                      ;
                      LocalPopChoice(a_25);
                    }
                  else
                    {
                      t = z_24;
                      {
                        ATerm b_9 = NULL,f_9 = NULL,q_1 = NULL;
                        t = SSLgetAnnotations(v_16);
                        b_9 = t;
                        t = w_16;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = z_16;
                        t = f_73(t);
                        f_9 = t;
                        t = (ATerm) ATinsert(CheckATermList(f_9), w_16);
                        q_1 = t;
                        t = SSLsetAnnotations(q_1, b_9);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = f_17(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = u_24;
      }
    y_14 = t;
    t = SSL_implode_string(y_14);
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = debug_1_0(z_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_25);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_25);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  t = pass_verbose_0_0(t);
  i_20 = t;
  t = term_j_25;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(n_25);
        t = (ATerm) ATinsert(ATempty, term_o_25);
      }
    else
      {
        t = m_25;
        t = (ATerm) ATempty;
      }
    j_20 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, j_20), i_20);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  t = pass_verbose_0_0(t);
  l_20 = t;
  t = term_j_25;
  {
    ATerm q_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(s_25);
        t = (ATerm) ATinsert(ATempty, term_o_25);
      }
    else
      {
        t = q_25;
        t = (ATerm) ATempty;
      }
    m_20 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, m_20), l_20);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  t = pass_verbose_0_0(t);
  b_21 = t;
  t = term_j_25;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_25);
        t = (ATerm) ATinsert(ATempty, term_j_25);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATempty;
      }
    c_21 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, c_21), b_21);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm i_21 = NULL,k_21 = NULL;
  t = pass_verbose_0_0(t);
  i_21 = t;
  t = term_j_25;
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(a_26);
        t = (ATerm) ATinsert(ATempty, term_j_25);
      }
    else
      {
        t = z_25;
        t = (ATerm) ATempty;
      }
    k_21 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, k_21), i_21);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm o_18 = NULL,s_18 = NULL,w_18 = NULL,a_19 = NULL,b_19 = NULL,d_2 = NULL;
  t = if_verbose6_1_0(x_3, t);
  w_18 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_18);
  a_19 = t;
  t = b_19;
  t = basename_1_0(_id, t);
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_18);
  d_2 = t;
  t = SSLsetAnnotations(d_2, a_19);
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_18;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_19 = ATgetArgument(t, 0);
            {
              ATerm x_9 = NULL,e_2 = NULL;
              t = SSLgetAnnotations(w_18);
              x_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_19);
              e_2 = t;
              t = SSLsetAnnotations(e_2, x_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_18;
          }
        LocalPopChoice(d_26);
        {
          ATerm b_4 (ATerm t)
          {
            ATerm q_19 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(d_4, t);
            q_19 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_19), o_18), term_f_26), term_e_26);
            return(t);
          }
          t = xtc_transform_file_2_0(a_4, b_4, t);
        }
      }
    else
      {
        t = c_26;
        {
          ATerm l_4 (ATerm t)
          {
            ATerm r_19 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(m_4, t);
            r_19 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_19), o_18), term_f_26), term_e_26);
            return(t);
          }
          t = xtc_transform_term_2_0(f_4, l_4, t);
        }
      }
    {
      ATerm g_26 = t;
      int h_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_20 = NULL,h_20 = NULL;
          h_20 = t;
          if(match_cons(t, sym_FILE_1))
            {
              a_20 = ATgetArgument(t, 0);
              {
                ATerm n_10 = NULL,p_2 = NULL;
                t = SSLgetAnnotations(h_20);
                n_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, a_20);
                p_2 = t;
                t = SSLsetAnnotations(p_2, n_10);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = h_20;
            }
          LocalPopChoice(h_26);
          t = xtc_transform_file_2_0(o_4, q_4, t);
        }
      else
        {
          t = g_26;
          t = xtc_transform_term_2_0(s_4, t_4, t);
        }
      {
        ATerm u_4 (ATerm t)
        {
          ATerm v_4 (ATerm t)
          {
            t = s_18;
            t = guarantee_extension_1_0(x_4, t);
            return(t);
          }
          t = copy_to_1_0(v_4, t);
          return(t);
        }
        t = if_keep1_1_0(u_4, t);
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_20 = NULL,z_20 = NULL;
              z_20 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  w_20 = ATgetArgument(t, 0);
                  {
                    ATerm b_11 = NULL,q_2 = NULL;
                    t = SSLgetAnnotations(z_20);
                    b_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, w_20);
                    q_2 = t;
                    t = SSLsetAnnotations(q_2, b_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = z_20;
                }
              LocalPopChoice(j_26);
              t = xtc_transform_file_2_0(y_4, b_5, t);
            }
          else
            {
              t = i_26;
              t = xtc_transform_term_2_0(e_5, f_5, t);
            }
          {
            ATerm k_26 = t;
            int l_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_22 = NULL,d_22 = NULL;
                d_22 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    c_22 = ATgetArgument(t, 0);
                    {
                      ATerm o_11 = NULL,r_2 = NULL;
                      t = SSLgetAnnotations(d_22);
                      o_11 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, c_22);
                      r_2 = t;
                      t = SSLsetAnnotations(r_2, o_11);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = d_22;
                  }
                LocalPopChoice(l_26);
                t = xtc_transform_file_2_0(h_5, pass_verbose_0_0, t);
              }
            else
              {
                t = k_26;
                t = xtc_transform_term_2_0(n_5, pass_verbose_0_0, t);
              }
          }
        }
      }
    }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm z_64 (ATerm), ATerm t)
{
  ATerm o_24 (ATerm t)
  {
    ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
    n_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_24 = ATgetFirst((ATermList) t);
        m_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_12 = NULL,s_12 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(n_24);
          f_12 = t;
          t = m_24;
          t = o_24(t);
          s_12 = t;
          t = (ATerm) ATinsert(CheckATermList(s_12), l_24);
          h_6 = t;
          t = SSLsetAnnotations(h_6, f_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_24;
        t = z_64(t);
      }
    return(t);
  }
  t = o_24(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_22;
    }
  else
    {
      ATerm r_5 (ATerm t)
      {
        t = not_null(r_22);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_22 = ATgetFirst((ATermList) t);
          if(((r_22 != NULL) && (r_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_22;
      t = at_end_1_0(r_5, t);
    }
  return(t);
}
ATerm k_25 (ATerm v_24, ATerm t)
{
  ATerm b_25 = NULL;
  t = SSL_explode_term(v_24);
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  f_25 = t;
  if(match_cons(t, sym__2))
    {
      d_25 = ATgetArgument(t, 0);
      e_25 = ATgetArgument(t, 1);
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              t = e_25;
              return(t);
            }
            t = d_25;
            t = at_end_1_0(s_5, t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = k_25(f_25, t);
          }
      }
    }
  else
    {
      t = k_25(f_25, t);
    }
  return(t);
}
ATerm q_7 (ATerm w_35, ATerm v_35, ATerm t)
{
  ATerm l_25 = NULL,p_25 = NULL,r_25 = NULL;
  t = w_35;
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = (ATerm) ATempty;
      }
    p_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_35, p_25);
    t = conc_0_0(t);
    l_25 = t;
    t = term_r_26;
    r_25 = t;
    t = SSL_table_put(r_25, w_35, l_25);
    t = (ATerm) ATmakeAppl(sym__3, term_r_26, w_35, l_25);
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  w_25 = t;
  t = SSL_explode_string(w_25);
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_27 (ATerm t)
        {
          ATerm c_27 = NULL,f_27 = NULL,g_27 = NULL;
          c_27 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_27 = ATgetFirst((ATermList) t);
              g_27 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm u_26 = t;
            int v_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_13 = NULL,u_13 = NULL,k_6 = NULL;
                t = SSLgetAnnotations(c_27);
                r_13 = t;
                t = g_27;
                t = h_27(t);
                u_13 = t;
                t = (ATerm) ATinsert(CheckATermList(u_13), f_27);
                k_6 = t;
                t = SSLsetAnnotations(k_6, r_13);
                ;
                LocalPopChoice(v_26);
              }
            else
              {
                t = u_26;
                {
                  ATerm k_14 = NULL,l_6 = NULL;
                  t = SSLgetAnnotations(c_27);
                  k_14 = t;
                  t = f_27;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, f_27);
                  l_6 = t;
                  t = SSLsetAnnotations(l_6, k_14);
                }
              }
          }
          return(t);
        }
        t = h_27(t);
        ;
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = (ATerm) ATempty;
      }
    v_25 = t;
    t = SSL_implode_string(v_25);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm r_27 = NULL;
  ATerm t_5 (ATerm t)
  {
    ATerm s_27 = NULL,t_27 = NULL;
    s_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_27), s_27);
    t = g_8(not_null(r_27), s_27, t);
    t_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
    return(t);
  }
  if(((r_27 != NULL) && (r_27 != t)))
    _fail(t);
  else
    r_27 = t;
  t = SSL_table_keys(r_27);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_27 = NULL;
        t = term_j_13;
        t = get_config_0_0(t);
        x_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_27, term_g_19);
        t = geq_0_0(t);
        t = v_27;
        t = q_76(t);
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = v_27;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_28 = NULL;
        t = term_j_13;
        t = get_config_0_0(t);
        c_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_28, term_k_16);
        t = geq_0_0(t);
        t = a_28;
        t = p_76(t);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = a_28;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm r_76 (ATerm), ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_28 = NULL;
        t = term_j_13;
        t = get_config_0_0(t);
        j_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_28, term_w_14);
        t = geq_0_0(t);
        t = h_28;
        t = r_76(t);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = h_28;
      }
  }
  return(t);
}
ATerm s_7 (ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm y_22, ATerm x_22, ATerm t)
{
  t = r_68(t);
  {
    ATerm u_5 (ATerm t)
    {
      ATerm l_28 = NULL;
      l_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_22, l_28);
      t = q_68(t);
      return(t);
    }
    t = fetch_1_0(u_5, t);
    t = x_22;
  }
  return(t);
}
ATerm t_7 (ATerm n_68 (ATerm), ATerm u_22, ATerm t_22, ATerm t)
{
  ATerm x_29 (ATerm t)
  {
    ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
    s_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_29 = ATgetFirst((ATermList) t);
            u_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_27 = t;
          int e_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_29;
              {
                ATerm w_5 (ATerm t)
                {
                  t = t_22;
                  return(t);
                }
                t = s_7(n_68, w_5, t_29, u_29, t);
                t = x_29(t);
              }
              ;
              LocalPopChoice(e_27);
            }
          else
            {
              t = d_27;
              {
                ATerm b_15 = NULL,f_15 = NULL,r_6 = NULL;
                t = SSLgetAnnotations(s_29);
                b_15 = t;
                t = u_29;
                t = x_29(t);
                f_15 = t;
                t = (ATerm) ATinsert(CheckATermList(f_15), t_29);
                r_6 = t;
                t = SSLsetAnnotations(r_6, b_15);
              }
            }
        }
      }
    return(t);
  }
  t = u_22;
  t = x_29(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm l_30 = NULL;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      if((l_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm n_34, ATerm o_34, ATerm p_34, ATerm t)
{
  ATerm c_30 = NULL,e_30 = NULL,f_30 = NULL;
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_34, o_34);
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_27 = ATgetArgument(t, 0);
            ATerm l_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_34, o_34);
        t = g_8(n_34, o_34, t);
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATempty;
      }
    f_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_30, p_34);
    t = t_7(a_6, f_30, p_34, t);
    e_30 = t;
    t = SSL_table_put(n_34, o_34, e_30);
    t = c_30;
  }
  return(t);
}
ATerm v_7 (ATerm t_76 (ATerm), ATerm x_34, ATerm w_34, ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm o_30 = NULL,p_30 = NULL;
    if(match_cons(t, sym__2))
      {
        o_30 = ATgetArgument(t, 0);
        p_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_34, o_30, p_30);
    t = t_76(t);
    return(t);
  }
  t = w_34;
  t = map_1_0(d_6, t);
  return(t);
}
ATerm z_7 (ATerm u_36, ATerm v_36, ATerm t)
{
  t = SSL_access(u_36, v_36);
  return(t);
}
ATerm q_31 (ATerm g_31, ATerm t)
{
  t = SSL_fclose(g_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_31 = NULL,o_31 = NULL;
  o_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_31 = ATgetArgument(t, 0);
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_31);
            ;
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            t = q_31(o_31, t);
          }
      }
    }
  else
    {
      t = q_31(o_31, t);
    }
  return(t);
}
ATerm w_7 (ATerm b_16, ATerm t)
{
  t = SSL_read_term_from_stream(b_16);
  return(t);
}
ATerm x_7 (ATerm c_37, ATerm d_37, ATerm t)
{
  ATerm v_31 = NULL;
  t = SSL_fopen(c_37, d_37);
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_31 = NULL;
  t = SSL_stdin_stream();
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_31 = NULL;
  t = SSL_stdout_stream();
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  t = SSL_stderr_stream();
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_31);
  return(t);
}
ATerm f_34 (ATerm f_32, ATerm t)
{
  ATerm g_32 = NULL;
  t = SSL_explode_term(f_32);
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_27 = ATgetArgument(t, 1);
        if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
          {
            g_32 = ATgetFirst((ATermList) p_27);
            {
              ATerm q_27 = (ATerm) ATgetNext((ATermList) p_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm g_34 (ATerm j_32, ATerm l_32, ATerm m_32, ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,e_33 = NULL,d_9 = NULL;
  t = SSLgetAnnotations(m_32);
  q_32 = t;
  t = j_32;
  if(match_cons(t, sym_Path_1))
    {
      e_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_33, l_32);
  d_9 = t;
  t = SSLsetAnnotations(d_9, q_32);
  if(match_cons(t, sym__2))
    {
      o_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(o_32, p_32, t);
  return(t);
}
ATerm h_34 (ATerm g_33, ATerm h_33, ATerm j_33, ATerm t)
{
  ATerm k_33 = NULL,s_33 = NULL,t_33 = NULL,z_33 = NULL,g_9 = NULL;
  t = SSLgetAnnotations(j_33);
  t_33 = t;
  t = SSL_is_string(g_33);
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_33, h_33);
  g_9 = t;
  t = SSLsetAnnotations(g_9, t_33);
  if(match_cons(t, sym__2))
    {
      k_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(k_33, s_33, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  c_34 = t;
  if(match_cons(t, sym__2))
    {
      d_34 = ATgetArgument(t, 0);
      e_34 = ATgetArgument(t, 1);
      {
        ATerm u_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_34(c_34, t);
            ;
            LocalPopChoice(w_27);
          }
        else
          {
            t = u_27;
            {
              ATerm y_27 = t;
              int z_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_34(d_34, e_34, c_34, t);
                  ;
                  LocalPopChoice(z_27);
                }
              else
                {
                  t = y_27;
                  t = h_34(d_34, e_34, c_34, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_34(c_34, t);
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_34 = NULL,l_34 = NULL,m_34 = NULL;
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_34 = NULL;
      s_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_34, term_f_28);
      t = y_7(t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      t = debug_1_0(e_6, t);
      _fail(t);
    }
  l_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(m_34, t);
  i_34 = t;
  t = l_34;
  t = fclose_0_0(t);
  t = i_34;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_g_28;
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_i_28;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_34 = NULL,a_35 = NULL;
      u_34 = t;
      t = (ATerm) ATinsert(ATempty, term_n_28);
      a_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_34, (ATerm) ATinsert(ATempty, term_n_28));
      t = z_7(u_34, a_35, t);
      LocalPopChoice(m_28);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_28;
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_28 = t;
            if((PushChoice() == 0))
              {
                ATerm b_35 = NULL,c_35 = NULL;
                b_35 = t;
                t = (ATerm) ATinsert(ATempty, term_s_21);
                c_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_35, (ATerm) ATinsert(ATempty, term_s_21));
                t = z_7(b_35, c_35, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_28;
              }
            t = debug_1_0(f_6, t);
            ;
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            t = debug_1_0(i_6, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = debug_1_0(m_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = debug_1_0(p_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm y_35 = NULL,f_36 = NULL,g_36 = NULL;
  y_35 = t;
  t = term_n_20;
  f_36 = t;
  t = (ATerm) ATinsert(ATempty, term_t_28);
  g_36 = t;
  t = SSL_printnl(f_36, g_36);
  t = y_35;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm k_36 = NULL,r_36 = NULL,s_36 = NULL;
  if(match_cons(t, sym__3))
    {
      k_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
      s_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_7(k_36, r_36, s_36, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm t_36 = NULL,w_36 = NULL,y_36 = NULL;
  t_36 = t;
  t = term_n_20;
  w_36 = t;
  t = (ATerm) ATinsert(ATempty, term_u_28);
  y_36 = t;
  t = SSL_printnl(w_36, y_36);
  t = t_36;
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
  z_36 = t;
  t = term_n_20;
  a_37 = t;
  t = (ATerm) ATinsert(ATempty, term_t_28);
  b_37 = t;
  t = SSL_printnl(a_37, b_37);
  t = z_36;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,o_35 = NULL,p_35 = NULL;
  d_35 = t;
  t = if_verbose5_1_0(j_6, t);
  {
    ATerm v_28 = t;
    if((PushChoice() == 0))
      {
        ATerm t_35 = NULL,u_35 = NULL;
        t = term_w_28;
        t_35 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_35);
        u_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_28, (ATerm) ATmakeAppl(sym_Imported_1, d_35));
        t = g_8(t_35, u_35, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_28;
      }
    f_35 = t;
    t = term_w_28;
    m_35 = t;
    t = term_x_28;
    o_35 = t;
    t = (ATerm) ATinsert(ATempty, d_35);
    p_35 = t;
    t = SSL_table_put(m_35, o_35, p_35);
    t = f_35;
    t = if_verbose4_1_0(n_6, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(s_6, t);
    e_35 = t;
    t = term_w_28;
    l_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_28, e_35);
    t = v_7(t_6, l_35, e_35, t);
    t = if_verbose6_1_0(u_6, t);
    t = term_w_28;
    g_35 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, d_35);
    j_35 = t;
    t = (ATerm) ATempty;
    k_35 = t;
    t = SSL_table_put(g_35, j_35, k_35);
    t = (ATerm) ATmakeAppl(sym__3, term_w_28, (ATerm)ATmakeAppl(sym_Imported_1, d_35), (ATerm) ATempty);
    t = if_verbose4_1_0(v_6, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,k_38 = NULL,l_38 = NULL;
  i_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_38;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_38 = ATgetFirst((ATermList) t);
          l_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_16 = NULL,y_16 = NULL,c_17 = NULL,l_9 = NULL;
            t = SSLgetAnnotations(i_38);
            p_16 = t;
            t = k_38;
            t = f_72(t);
            y_16 = t;
            t = l_38;
            t = filter_1_0(f_72, t);
            c_17 = t;
            t = (ATerm) ATinsert(CheckATermList(c_17), y_16);
            l_9 = t;
            t = SSLsetAnnotations(l_9, p_16);
            ;
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            t = l_38;
            t = filter_1_0(f_72, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm e_74 (ATerm), ATerm t)
{
  ATerm v_38 (ATerm t)
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_74(t);
        t = v_38(t);
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
      }
    return(t);
  }
  t = v_38(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_38 = NULL;
            t = term_h_29;
            w_38 = t;
            t = SSL_getenv(w_38);
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = debug_1_0(a_7, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL;
  t = term_w_28;
  k_39 = t;
  t = term_j_29;
  l_39 = t;
  t = term_k_29;
  t = g_8(k_39, l_39, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm l_29 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_29;
      }
  }
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = debug_1_0(f_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm x_38 = NULL;
  t = if_verbose5_1_0(w_6, t);
  x_38 = t;
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_38 = NULL,a_39 = NULL;
        t = term_w_28;
        y_38 = t;
        t = term_x_28;
        a_39 = t;
        t = term_p_29;
        t = g_8(y_38, a_39, t);
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        {
          ATerm c_39 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          c_39 = t;
          t = repeat_1_0(b_7, t);
          t = c_39;
        }
      }
    t = x_38;
    t = if_verbose5_1_0(e_7, t);
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = debug_1_0(l_7, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm z_40 (ATerm r_39, ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,z_39 = NULL;
  t = term_w_28;
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, r_39);
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_28, (ATerm) ATmakeAppl(sym_Tool_1, r_39));
  t = g_8(w_39, z_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_29 = ATgetFirst((ATermList) t);
      if(match_cons(r_29, sym__2))
        {
          ATerm w_29 = ATgetArgument(r_29, 0);
          v_39 = ATgetArgument(r_29, 1);
        }
      else
        _fail(t);
      {
        ATerm v_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_39;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = debug_1_0(d_8, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_w_28;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_8, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_40 = NULL,f_40 = NULL,g_40 = NULL;
      t = if_verbose5_1_0(g_7, t);
      t = xtc_load_0_0(t);
      g_40 = t;
      if(match_cons(t, sym__2))
        {
          c_40 = ATgetArgument(t, 0);
          f_40 = ATgetArgument(t, 1);
          {
            ATerm b_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
                t = term_w_28;
                m_40 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, c_40);
                n_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_28, (ATerm) ATmakeAppl(sym_Tool_1, c_40));
                t = g_8(m_40, n_40, t);
                {
                  ATerm n_7 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((f_40 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((l_40 != NULL) && (l_40 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_40 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_7, t);
                  t = not_null(l_40);
                }
                ;
                LocalPopChoice(d_30);
              }
            else
              {
                t = b_30;
                t = z_40(g_40, t);
              }
          }
        }
      else
        {
          t = z_40(g_40, t);
        }
      t = if_verbose5_1_0(r_7, t);
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm y_40 = NULL,n_17 = NULL,o_17 = NULL;
        y_40 = t;
        t = term_n_20;
        n_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_30), y_40), term_i_30);
        o_17 = t;
        t = SSL_printnl(n_17, o_17);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_30), y_40), term_i_30);
        t = if_verbose5_1_0(i_8, t);
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
ATerm a_8 (ATerm v_12, ATerm w_12, ATerm t)
{
  t = SSL_copy(v_12, w_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL;
  q_41 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_17 = NULL;
        t = q_41;
        t = n_0(t);
        t_17 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = t_17;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = t_17;
          }
        t = (ATerm) ATmakeAppl(sym__2, r_41, t_17);
        t = a_8(r_41, t_17, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_41);
        ;
        LocalPopChoice(m_30);
      }
    else
      {
        t = k_30;
        {
          ATerm n_30 = t;
          int q_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_18 = NULL;
              t = q_41;
              t = n_0(t);
              a_18 = t;
              {
                ATerm r_30 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_18 = NULL;
                    b_18 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = b_18;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = b_18;
                          }
                        else
                          {
                            t = b_18;
                            if((r_41 != t))
                              {
                                _fail(t);
                              }
                            t = b_18;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_30;
                  }
                t = (ATerm) ATmakeAppl(sym__2, r_41, a_18);
                t = a_8(r_41, a_18, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, r_41);
              }
              ;
              LocalPopChoice(q_30);
            }
          else
            {
              t = n_30;
              t = q_41;
              t = n_0(t);
              if((r_41 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_41);
            }
        }
      }
  }
  return(t);
}
ATerm b_8 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  y_41 = t;
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_33, w_33);
        t = g_8(v_33, w_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_30 = ATgetFirst((ATermList) t);
            x_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_30);
        t = SSL_table_put(v_33, w_33, x_41);
        t = (ATerm) ATmakeAppl(sym__3, v_33, w_33, x_41);
      }
    else
      {
        t = s_30;
        t = SSL_table_remove(v_33, w_33);
        t = (ATerm) ATmakeAppl(sym__2, v_33, w_33);
      }
    t = y_41;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_75 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  f_42 = t;
  t = f_75(t);
  e_42 = t;
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_42 = NULL;
        t = term_a_21;
        h_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_42, term_a_21);
        t = g_8(e_42, h_42, t);
        ;
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_42 = ATgetFirst((ATermList) t);
        c_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_a_21;
    g_42 = t;
    t = SSL_table_put(e_42, g_42, c_42);
    t = d_42;
    {
      ATerm n_8 (ATerm t)
      {
        ATerm j_42 = NULL;
        j_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_42, j_42);
        t = b_8(e_42, j_42, t);
        return(t);
      }
      t = map_1_0(n_8, t);
      t = f_42;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_76(t);
      t = b_76(t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      t = b_76(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_75 (ATerm), ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
  m_42 = t;
  t = e_75(t);
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_42, term_a_21);
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_42 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_31 = ATgetArgument(t, 0);
            ATerm c_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_a_21;
        t_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_42, term_a_21);
        t = g_8(l_42, t_42, t);
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = (ATerm) ATempty;
      }
    n_42 = t;
    t = term_a_21;
    o_42 = t;
    t = (ATerm) ATinsert(CheckATermList(n_42), (ATerm) ATempty);
    p_42 = t;
    t = SSL_table_put(l_42, o_42, p_42);
    t = m_42;
  }
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm c_43 = NULL;
  c_43 = t;
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_43);
        ;
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        t = c_43;
      }
  }
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm w_42 = NULL;
  ATerm q_8 (ATerm t)
  {
    ATerm x_42 = NULL;
    x_42 = t;
    {
      ATerm f_31 = t;
      int h_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_42 = NULL,z_42 = NULL;
          t = term_u_21;
          y_42 = t;
          t = term_a_21;
          z_42 = t;
          t = term_i_31;
          t = g_8(y_42, z_42, t);
          ;
          LocalPopChoice(h_31);
        }
      else
        {
          t = f_31;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_42 != NULL) && (w_42 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_42 = ATgetFirst((ATermList) t);
          {
            ATerm k_31 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = w_42;
      t = map_1_0(r_8, t);
      t = x_42;
      t = end_scope_1_0(t_8, t);
    }
    return(t);
  }
  t = begin_scope_1_0(o_8, t);
  t = restore_always_2_0(j_78, q_8, t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm n_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = n_31;
      t = term_k_22;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm u_8 (ATerm t)
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_43 = NULL;
        t = term_x_21;
        t = get_config_0_0(t);
        f_43 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_43);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = term_w_23;
      }
    t = k_78(t);
    t = copy_to_1_0(v_8, t);
    return(t);
  }
  t = xtc_temp_files_1_0(u_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  g_43 = t;
  t = term_n_21;
  t = whoami_0_0(t);
  h_43 = t;
  t = term_n_20;
  j_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_32), h_43), term_y_31);
  k_43 = t;
  t = SSL_printnl(j_43, k_43);
  t = term_m_13;
  i_43 = t;
  t = SSL_exit(i_43);
  t = g_43;
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm m_43 = NULL;
  m_43 = t;
  if(match_string(t, "-k"))
    {
      t = m_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_43;
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  t = SSL_string_to_int(n_43);
  o_43 = t;
  t = term_b_22;
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_22, o_43);
  t = j_8(p_43, o_43, t);
  t = n_43;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_8, x_8, y_8, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm r_43 = NULL;
  r_43 = t;
  if(match_string(t, "-S"))
    {
      t = r_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_43;
    }
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL;
  t = term_j_13;
  s_43 = t;
  t = term_c_32;
  t_43 = t;
  t = term_d_32;
  t = j_8(s_43, t_43, t);
  t = term_e_32;
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm e_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  t = SSL_string_to_int(u_43);
  v_43 = t;
  t = term_j_13;
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_13, v_43);
  t = j_8(w_43, v_43, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_43);
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL;
  t = term_k_32;
  x_43 = t;
  t = term_n_21;
  y_43 = t;
  t = term_n_32;
  t = j_8(x_43, y_43, t);
  t = term_r_32;
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_8, a_9, c_9, t);
      ;
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm v_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_9, h_9, i_9, t);
            ;
            LocalPopChoice(w_32);
          }
        else
          {
            t = v_32;
            t = Option_3_0(j_9, k_9, m_9, t);
          }
      }
    }
  return(t);
}
ATerm j_8 (ATerm q_35, ATerm r_35, ATerm t)
{
  ATerm z_43 = NULL;
  t = term_r_26;
  z_43 = t;
  t = SSL_table_put(z_43, q_35, r_35);
  t = (ATerm) ATmakeAppl(sym__3, term_r_26, q_35, r_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
      t = term_n_21;
      t = h_0(t);
      e_44 = t;
      t = term_y_32;
      f_44 = t;
      t = term_a_33;
      g_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_32, term_a_33, e_44);
      t = h_8(f_44, g_44, e_44, t);
      _fail(t);
    }
  else
    {
      ATerm j_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_44 = ATgetFirst((ATermList) t);
          d_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_44;
      t = d_0(t);
      t = term_n_21;
      t = g_0(t);
      j_44 = t;
      t = (ATerm) ATinsert(CheckATermList(d_44), j_44);
    }
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm l_44 = NULL;
  l_44 = t;
  if(match_string(t, "-o"))
    {
      t = l_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_44;
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL;
  m_44 = t;
  t = term_w_21;
  n_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_21, m_44);
  t = j_8(n_44, m_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_44);
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_9, o_9, q_9, t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm p_44 = NULL;
  p_44 = t;
  if(match_string(t, "-i"))
    {
      t = p_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_44;
    }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  q_44 = t;
  t = term_x_21;
  r_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_21, q_44);
  t = j_8(r_44, q_44, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_44);
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_9, v_9, w_9, t);
  return(t);
}
ATerm h_8 (ATerm q_33, ATerm r_33, ATerm p_33, ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_33, r_33);
  {
    ATerm d_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_33 = ATgetArgument(t, 0);
            ATerm l_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_33, r_33);
        t = g_8(q_33, r_33, t);
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = d_33;
        t = (ATerm) ATempty;
      }
    u_44 = t;
    t = (ATerm) ATinsert(CheckATermList(u_44), p_33);
    v_44 = t;
    t = SSL_table_put(q_33, r_33, v_44);
    t = t_44;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
      t = term_n_21;
      t = m_0(t);
      g_45 = t;
      t = term_y_32;
      h_45 = t;
      t = term_a_33;
      i_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_32, term_a_33, g_45);
      t = h_8(h_45, i_45, g_45, t);
      _fail(t);
    }
  else
    {
      ATerm m_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_45 = ATgetFirst((ATermList) t);
          d_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_45 = ATgetFirst((ATermList) t);
          f_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_45;
      t = k_0(t);
      t = e_45;
      t = l_0(t);
      m_45 = t;
      t = (ATerm) ATinsert(CheckATermList(f_45), m_45);
    }
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm o_45 = NULL;
  o_45 = t;
  if(match_string(t, "-I"))
    {
      t = o_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = o_45;
    }
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
  p_45 = t;
  t = term_b_23;
  q_45 = t;
  t = (ATerm) ATinsert(ATempty, p_45);
  r_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_23, (ATerm) ATinsert(ATempty, p_45));
  t = q_7(q_45, r_45, t);
  t = p_45;
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm m_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL;
  s_45 = t;
  t = term_h_24;
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_24, s_45);
  t = j_8(t_45, s_45, t);
  t = s_45;
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm x_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
  u_45 = t;
  t = term_j_13;
  v_45 = t;
  t = term_c_32;
  w_45 = t;
  t = term_d_32;
  t = j_8(v_45, w_45, t);
  t = u_45;
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm a_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
  x_45 = t;
  t = term_j_25;
  y_45 = t;
  t = term_m_13;
  z_45 = t;
  t = term_u_33;
  t = j_8(y_45, z_45, t);
  t = x_45;
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(e_10, f_10, h_10, t);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      {
        ATerm a_34 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_10, r_10, w_10, t);
            ;
            LocalPopChoice(b_34);
          }
        else
          {
            t = a_34;
            {
              ATerm j_34 = t;
              int k_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_10, y_10, z_10, t);
                  ;
                  LocalPopChoice(k_34);
                }
              else
                {
                  t = j_34;
                  t = Option_3_0(a_11, c_11, d_11, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_21;
  t = whoami_0_0(t);
  a_46 = t;
  t = term_n_20;
  c_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_34), a_46);
  d_46 = t;
  t = SSL_printnl(c_46, d_46);
  t = term_m_13;
  b_46 = t;
  t = SSL_exit(b_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_34;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_8 (ATerm l_31, ATerm m_31, ATerm t)
{
  ATerm t_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_31, m_31);
      ;
      LocalPopChoice(v_34);
    }
  else
    {
      t = t_34;
      t = SSL_addr(l_31, m_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_46;
      t = b_71(t);
    }
  else
    {
      ATerm k_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_46 = ATgetFirst((ATermList) t);
          h_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_46;
      t = foldr_2_0(b_71, c_71, t);
      k_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_46, k_46);
      t = c_71(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(l_18, m_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_46 = NULL,h_18 = NULL,i_18 = NULL;
  t = times_0_0(t);
  i_18 = t;
  t = SSL_explode_term(i_18);
  if(match_cons(t, sym__2))
    {
      ATerm y_34 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_18;
  t = foldr_2_0(e_11, f_11, t);
  n_46 = t;
  t = SSL_TicksToSeconds(n_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
  y_46 = t;
  if(match_cons(t, sym__2))
    {
      z_46 = ATgetArgument(t, 0);
      a_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_34 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_47;
        if((z_46 != t))
          {
            _fail(t);
          }
        t = y_46;
        ;
        LocalPopChoice(n_35);
      }
    else
      {
        t = z_34;
        t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
        {
          ATerm s_35 = t;
          int x_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_46, a_47);
              ;
              LocalPopChoice(x_35);
            }
          else
            {
              t = s_35;
              t = SSL_gtr(z_46, a_47);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm e_47 = NULL;
  e_47 = t;
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_47 = NULL;
        t = term_j_13;
        t = get_config_0_0(t);
        g_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_47, term_m_13);
        t = geq_0_0(t);
        t = e_47;
        t = m_76(t);
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = e_47;
      }
  }
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,l_47 = NULL,m_47 = NULL;
  t = run_time_0_0(t);
  i_47 = t;
  t = term_n_21;
  t = whoami_0_0(t);
  j_47 = t;
  t = term_n_20;
  l_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_36), i_47), term_s_13), j_47);
  m_47 = t;
  t = SSL_printnl(l_47, m_47);
  t = (ATerm) ATmakeAppl(sym__2, term_n_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_36), i_47), term_s_13), j_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_32;
  n_47 = t;
  t = SSL_exit(n_47);
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL;
  w_47 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_47;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_47 = ATgetArgument(t, 0);
          {
            ATerm e_19 = NULL,p_9 = NULL;
            t = SSLgetAnnotations(w_47);
            e_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_47);
            p_9 = t;
            t = SSLsetAnnotations(p_9, e_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_47;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_36);
    }
  else
    {
      t = c_36;
      t = fetch_1_0(m_11, t);
    }
  t = l_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_47 = ATgetFirst((ATermList) t);
      a_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_48 = NULL,f_48 = NULL;
        ATerm p_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_48)), not_null(f_48));
          return(t);
        }
        t = a_48;
        t = j_0(t);
        if(((e_48 != NULL) && (e_48 != t)))
          _fail(t);
        else
          e_48 = t;
        t = z_47;
        t = i_0(t);
        if(((f_48 != NULL) && (f_48 != t)))
          _fail(t);
        else
          f_48 = t;
        t = a_48;
        t = reverse_acc_2_0(i_0, p_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_21;
      t = j_0(t);
    }
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,r_9 = NULL;
  l_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_48);
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_48);
  r_9 = t;
  t = SSLsetAnnotations(r_9, j_48);
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm n_48 = NULL;
  n_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_48), term_i_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL;
  ATerm j_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_36);
    }
  else
    {
      t = j_36;
      t = fetch_1_0(r_11, t);
    }
  t = term_m_36;
  t = echo_0_0(t);
  t = term_y_32;
  h_48 = t;
  t = term_a_33;
  i_48 = t;
  t = term_n_36;
  t = g_8(h_48, i_48, t);
  t = reverse_acc_2_0(_id, s_11, t);
  t = map_1_0(u_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_64 (ATerm), ATerm t)
{
  ATerm k_49 (ATerm t)
  {
    ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
    h_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_49 = ATgetFirst((ATermList) t);
        j_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_36 = t;
      int p_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_19 = NULL,c_20 = NULL,y_9 = NULL;
          t = SSLgetAnnotations(h_49);
          t_19 = t;
          t = i_49;
          t = t_64(t);
          c_20 = t;
          t = (ATerm) ATinsert(CheckATermList(j_49), c_20);
          y_9 = t;
          t = SSLsetAnnotations(y_9, t_19);
          ;
          LocalPopChoice(p_36);
        }
      else
        {
          t = o_36;
          {
            ATerm x_20 = NULL,e_21 = NULL,q_11 = NULL;
            t = SSLgetAnnotations(h_49);
            x_20 = t;
            t = j_49;
            t = k_49(t);
            e_21 = t;
            t = (ATerm) ATinsert(CheckATermList(e_21), i_49);
            q_11 = t;
            t = SSLsetAnnotations(q_11, x_20);
          }
        }
    }
    return(t);
  }
  t = k_49(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  o_49 = t;
  {
    ATerm q_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_37 = ATgetFirst((ATermList) t);
                ATerm f_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_49;
          }
        ;
        LocalPopChoice(x_36);
      }
    else
      {
        t = q_36;
        t = (ATerm) ATinsert(ATempty, o_49);
      }
    p_49 = t;
    t = term_k_22;
    q_49 = t;
    t = SSL_printnl(q_49, p_49);
    t = o_49;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_34;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm f_8 (ATerm g_30, ATerm h_30, ATerm t)
{
  t = SSL_strcat(g_30, h_30);
  return(t);
}
ATerm debug_1_0 (ATerm o_60 (ATerm), ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
  u_49 = t;
  t = o_60(t);
  v_49 = t;
  t = term_n_20;
  w_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_49), v_49);
  x_49 = t;
  t = SSL_printnl(w_49, x_49);
  t = u_49;
  return(t);
}
ATerm map_1_0 (ATerm j_64 (ATerm), ATerm t)
{
  ATerm m_50 (ATerm t)
  {
    ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
    j_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_50;
      }
    else
      {
        ATerm p_21 = NULL,t_21 = NULL,v_21 = NULL,t_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_50 = ATgetFirst((ATermList) t);
            l_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_50);
        p_21 = t;
        t = k_50;
        t = j_64(t);
        t_21 = t;
        t = l_50;
        t = m_50(t);
        v_21 = t;
        t = (ATerm) ATinsert(CheckATermList(v_21), t_21);
        t_11 = t;
        t = SSLsetAnnotations(t_11, p_21);
      }
    return(t);
  }
  t = m_50(t);
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
    }
  return(t);
}
ATerm x_11 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_50 = NULL;
      u_50 = t;
      t = SSL_is_string(u_50);
      ;
      LocalPopChoice(k_37);
    }
  else
    {
      t = j_37;
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_11, t);
            ;
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            {
              ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
              a_51 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_51 = ATgetArgument(t, 0);
                  t = b_51;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_51 = ATgetArgument(t, 0);
                      t = b_51;
                      {
                        ATerm n_37 = t;
                        int o_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_37);
                          }
                        else
                          {
                            t = n_37;
                            t = debug_1_0(x_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_51 = NULL,h_51 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_51 = ATgetArgument(t, 0);
                          c_51 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_51;
                      t = eval_config_0_0(t);
                      g_51 = t;
                      t = c_51;
                      t = eval_config_0_0(t);
                      h_51 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_51, h_51);
                      t = f_8(g_51, h_51, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_8 (ATerm h_35, ATerm i_35, ATerm t)
{
  t = SSL_table_get(h_35, i_35);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL;
  l_51 = t;
  t = term_r_26;
  m_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_26, l_51);
  t = g_8(m_51, l_51, t);
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_51 = NULL,o_51 = NULL;
        t = eval_config_0_0(t);
        n_51 = t;
        t = term_r_26;
        o_51 = t;
        t = SSL_table_put(o_51, l_51, n_51);
        t = n_51;
        ;
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
      }
  }
  return(t);
}
ATerm z_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL;
  t = term_r_37;
  r_51 = t;
  t = term_n_21;
  s_51 = t;
  t = term_s_37;
  t = j_8(r_51, s_51, t);
  return(t);
}
ATerm c_12 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm e_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
  t = term_r_37;
  v_51 = t;
  t = term_n_21;
  w_51 = t;
  t = term_s_37;
  t = j_8(v_51, w_51, t);
  t = term_h_25;
  t_51 = t;
  t = term_n_21;
  u_51 = t;
  t = term_u_37;
  t = j_8(t_51, u_51, t);
  t = term_v_37;
  return(t);
}
ATerm i_12 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_37 = t;
  int y_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_11, b_12, c_12, t);
      ;
      LocalPopChoice(y_37);
    }
  else
    {
      t = x_37;
      t = Option_3_0(e_12, g_12, i_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_51 (ATerm), ATerm y_51 (ATerm), ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,a_12 = NULL;
  e_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_52 = ATgetFirst((ATermList) t);
      b_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_52);
  z_51 = t;
  t = a_52;
  t = x_51(t);
  c_52 = t;
  t = b_52;
  t = y_51(t);
  d_52 = t;
  t = (ATerm) ATinsert(CheckATermList(d_52), c_52);
  a_12 = t;
  t = SSLsetAnnotations(a_12, z_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_82 (ATerm), ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,o_52 = NULL,p_52 = NULL,d_13 = NULL;
  j_52 = t;
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_38;
        t = j_82(t);
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = z_37;
      }
    t = j_52;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_52 = ATgetFirst((ATermList) t);
        m_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_52);
    k_52 = t;
    t = term_r_34;
    p_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_34, l_52);
    t = j_8(p_52, l_52, t);
    t = m_52;
    {
      ATerm z_52 (ATerm t)
      {
        ATerm c_38 = t;
        int d_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_38 = t;
            int f_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_52 = NULL;
                s_52 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_52;
                ;
                LocalPopChoice(f_38);
              }
            else
              {
                t = e_38;
                t = j_82(t);
                t = Cons_2_0(_id, z_52, t);
              }
            ;
            LocalPopChoice(d_38);
          }
        else
          {
            t = c_38;
            {
              ATerm v_52 = NULL,w_52 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_52 = ATgetFirst((ATermList) t);
                  w_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_52), (ATerm) ATmakeAppl(sym_Undefined_1, v_52));
            }
          }
        return(t);
      }
      t = z_52(t);
      o_52 = t;
      t = (ATerm) ATinsert(CheckATermList(o_52), (ATerm) ATmakeAppl(sym_Program_1, l_52));
      d_13 = t;
      t = SSLsetAnnotations(d_13, k_52);
    }
  }
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm l_53 = NULL;
  l_53 = t;
  if(match_string(t, "--help"))
    {
      t = l_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_53;
        }
    }
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL;
  t = term_h_36;
  m_53 = t;
  t = term_n_21;
  n_53 = t;
  t = term_g_38;
  t = j_8(m_53, n_53, t);
  t = term_h_38;
  return(t);
}
ATerm o_12 (ATerm t)
{
  t = term_j_38;
  return(t);
}
ATerm x_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  g_53 = t;
  t = term_y_32;
  i_53 = t;
  t = term_a_33;
  j_53 = t;
  t = (ATerm) ATempty;
  k_53 = t;
  t = SSL_table_put(i_53, j_53, k_53);
  t = g_53;
  {
    ATerm j_12 (ATerm t)
    {
      ATerm m_38 = t;
      int n_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_82(t);
          ;
          LocalPopChoice(n_38);
        }
      else
        {
          t = m_38;
          {
            ATerm o_38 = t;
            int p_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_12, m_12, o_12, t);
                ;
                LocalPopChoice(p_38);
              }
            else
              {
                t = o_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_12, t);
    {
      ATerm q_38 = t;
      int r_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_53 = NULL;
          u_53 = t;
          {
            ATerm s_38 = t;
            int t_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_23 = NULL;
                t = u_53;
                {
                  ATerm u_38 = t;
                  int z_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_h_36;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_38);
                    }
                  else
                    {
                      t = u_38;
                      t = fetch_1_0(x_12, t);
                    }
                  t = u_53;
                  t = default_system_usage_0_0(t);
                  t = term_c_32;
                  c_23 = t;
                  t = SSL_exit(c_23);
                }
                ;
                LocalPopChoice(t_38);
              }
            else
              {
                t = s_38;
                {
                  ATerm i_23 = NULL;
                  t = term_r_37;
                  t = get_config_0_0(t);
                  t = u_53;
                  t = default_system_about_0_0(t);
                  t = term_c_32;
                  i_23 = t;
                  t = SSL_exit(i_23);
                }
              }
          }
          ;
          LocalPopChoice(r_38);
        }
      else
        {
          t = q_38;
          {
            ATerm b_39 = t;
            int d_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
                ATerm y_12 (ATerm t)
                {
                  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,i_13 = NULL;
                  a_54 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      z_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_54);
                  y_53 = t;
                  t = z_53;
                  if(((e_53 != NULL) && (e_53 != t)))
                    _fail(t);
                  else
                    e_53 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_53);
                  i_13 = t;
                  t = SSLsetAnnotations(i_13, y_53);
                  return(t);
                }
                t = fetch_1_0(y_12, t);
                t = term_n_20;
                w_53 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_53)), term_e_39);
                x_53 = t;
                t = SSL_printnl(w_53, x_53);
                t = (ATerm) ATmakeAppl(sym__2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_53)), term_e_39));
                t = default_system_usage_0_0(t);
                t = term_m_13;
                v_53 = t;
                t = SSL_exit(v_53);
                ;
                LocalPopChoice(d_39);
              }
            else
              {
                t = b_39;
              }
          }
        }
      f_53 = t;
      t = term_y_32;
      h_53 = t;
      t = SSL_table_destroy(h_53);
      t = f_53;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  t = parse_options_1_0(n_80, t);
  f_54 = t;
  t = term_f_39;
  i_54 = t;
  t = SSL_table_create(i_54);
  t = term_f_39;
  g_54 = t;
  t = term_g_39;
  h_54 = t;
  t = SSL_table_put(g_54, h_54, f_54);
  t = f_54;
  t = p_80(t);
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_80, t);
        ;
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        {
          ATerm j_39 = t;
          int m_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_39);
            }
          else
            {
              t = j_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      ;
      LocalPopChoice(o_39);
    }
  else
    {
      t = n_39;
      {
        ATerm p_39 = t;
        int q_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(q_39);
          }
        else
          {
            t = p_39;
            {
              ATerm s_39 = t;
              int t_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(t_39);
                }
              else
                {
                  t = s_39;
                  {
                    ATerm u_39 = t;
                    int x_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(c_13, e_13, f_13, t);
                        ;
                        LocalPopChoice(x_39);
                      }
                    else
                      {
                        t = u_39;
                        {
                          ATerm y_39 = t;
                          int a_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(a_40);
                            }
                          else
                            {
                              t = y_39;
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
ATerm b_13 (ATerm t)
{
  t = xtc_io_1_0(g_13, t);
  return(t);
}
ATerm c_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL;
  t = term_b_40;
  k_54 = t;
  t = term_n_21;
  l_54 = t;
  t = term_d_40;
  t = j_8(k_54, l_54, t);
  t = term_e_40;
  return(t);
}
ATerm f_13 (ATerm t)
{
  t = term_h_40;
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
  n_54 = t;
  t = term_i_40;
  t = xtc_find_path_0_0(t);
  o_54 = t;
  t = term_b_23;
  p_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_54), term_j_40);
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_23, (ATerm) ATinsert(ATinsert(ATempty, o_54), term_j_40));
  t = q_7(p_54, q_54, t);
  t = n_54;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_13, default_usage_0_0, _id, b_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
