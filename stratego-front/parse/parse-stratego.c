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
ATerm term_q_40;
ATerm term_n_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_m_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_b_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_v_37;
ATerm term_m_37;
ATerm term_u_36;
ATerm term_o_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_a_36;
ATerm term_t_34;
ATerm term_r_34;
ATerm term_a_34;
ATerm term_s_33;
ATerm term_q_33;
ATerm term_m_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_e_33;
ATerm term_c_33;
ATerm term_w_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_h_32;
ATerm term_f_32;
ATerm term_d_32;
ATerm term_w_31;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_k_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_x_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_w_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_p_28;
ATerm term_l_28;
ATerm term_c_27;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_e_25;
ATerm term_b_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_i_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_u_22;
ATerm term_j_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_k_17;
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
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_r_13;
void init_constant_terms (void)
{
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_u_13, term_h_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_c_15, term_e_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_v_15, term_x_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_c_16, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_w_16, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_k_17, term_l_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_s_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_x_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_d_18, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_h_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_18, term_s_18, term_t_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_y_18, term_z_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_i_19, term_j_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_19, term_r_19, term_s_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_19, term_a_20, term_c_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_u_29);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_i_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_f_21);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_n_32);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_32);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_s_32, term_r_21);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_u_25, term_u_13);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym__2, term_c_33, term_e_33);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym__2, term_v_37, term_r_21);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_r_21);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym__2, term_g_36, term_r_21);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym__2, term_i_40, term_r_21);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm h_7 (ATerm p_31, ATerm q_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm i_7 (ATerm t_15, ATerm u_15, ATerm);
ATerm j_7 (ATerm o_60 (ATerm), ATerm k_176, ATerm b_16, ATerm);
ATerm c_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm);
ATerm k_7 (ATerm p_12, ATerm q_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm d_59 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm v_78 (ATerm), ATerm);
ATerm m_7 (ATerm g_75 (ATerm), ATerm x_32, ATerm v_32, ATerm);
ATerm i_5 (ATerm t_4, ATerm);
ATerm j_5 (ATerm w_4, ATerm y_4, ATerm z_4, ATerm);
ATerm b_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm);
ATerm guarantee_extension_1_0 (ATerm f_73 (ATerm), ATerm);
ATerm if_keep1_1_0 (ATerm n_77 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm EXDEV_0_0 (ATerm);
ATerm get_errno_0_0 (ATerm);
ATerm o_7 (ATerm u_12, ATerm t_12, ATerm);
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
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm get_syntax_definition_0_0 (ATerm);
ATerm p_7 (ATerm c_36, ATerm i_449, ATerm);
ATerm find_in_includes_1_0 (ATerm y_57 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm c_3 (ATerm);
ATerm j_3 (ATerm);
ATerm o_3 (ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm l_76 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm t_64 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm get_meta_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm get_syntax_0_0 (ATerm);
ATerm basename_1_0 (ATerm d_73 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm l_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm y_5 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_26 (ATerm l_25, ATerm);
ATerm conc_0_0 (ATerm);
ATerm q_7 (ATerm u_35, ATerm t_35, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm o_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm p_76 (ATerm), ATerm);
ATerm s_7 (ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm w_22, ATerm v_22, ATerm);
ATerm t_7 (ATerm l_68 (ATerm), ATerm s_22, ATerm r_22, ATerm);
ATerm f_6 (ATerm);
ATerm u_7 (ATerm l_34, ATerm m_34, ATerm n_34, ATerm);
ATerm v_7 (ATerm r_76 (ATerm), ATerm v_34, ATerm u_34, ATerm);
ATerm z_7 (ATerm s_36, ATerm t_36, ATerm);
ATerm i_32 (ATerm z_31, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm w_7 (ATerm z_15, ATerm);
ATerm x_7 (ATerm a_37, ATerm b_37, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_35 (ATerm d_33, ATerm);
ATerm d_35 (ATerm r_33, ATerm v_33, ATerm w_33, ATerm);
ATerm e_35 (ATerm e_34, ATerm f_34, ATerm g_34, ATerm);
ATerm y_7 (ATerm);
ATerm j_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm z_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm d_72 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm c_74 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm r_7 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm e_8 (ATerm);
ATerm k_8 (ATerm);
ATerm m_41 (ATerm m_40, ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm a_8 (ATerm v_12, ATerm w_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm b_8 (ATerm t_33, ATerm u_33, ATerm);
ATerm end_scope_1_0 (ATerm d_75 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_75 (ATerm), ATerm);
ATerm u_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm h_78 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm xtc_io_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm m_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm r_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_8 (ATerm o_35, ATerm p_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm y_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm g_10 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm h_8 (ATerm o_33, ATerm p_33, ATerm n_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm h_10 (ATerm);
ATerm o_10 (ATerm);
ATerm q_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm parse_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_8 (ATerm j_31, ATerm k_31, ATerm);
ATerm foldr_2_0 (ATerm z_70 (ATerm), ATerm a_71 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_11 (ATerm);
ATerm m_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm o_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_11 (ATerm);
ATerm need_help_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm x_11 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_8 (ATerm e_30, ATerm f_30, ATerm);
ATerm debug_1_0 (ATerm m_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_64 (ATerm), ATerm);
ATerm z_11 (ATerm);
ATerm e_12 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm g_8 (ATerm f_35, ATerm g_35, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm k_12 (ATerm);
ATerm l_12 (ATerm);
ATerm r_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_51 (ATerm), ATerm w_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm h_82 (ATerm), ATerm);
ATerm x_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm c_13 (ATerm);
ATerm parse_options_1_0 (ATerm g_82 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm j_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm p_13 (ATerm);
ATerm parse_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm h_7 (ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm v_5 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(p_31, q_31);
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = v_5;
      t = SSL_subtr(p_31, q_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,o_0 = NULL;
  t = term_r_13;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        t = term_u_13;
      }
    b_0 = t;
    t = term_u_13;
    o_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_u_13);
    t = h_7(b_0, o_0, t);
    e_0 = t;
    t = SSL_int_to_string(e_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_r_13);
  }
  return(t);
}
ATerm i_7 (ATerm t_15, ATerm u_15, ATerm t)
{
  ATerm q_0 = NULL;
  t = SSL_write_term_to_stream_baf(t_15, u_15);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_0);
  return(t);
}
ATerm j_7 (ATerm o_60 (ATerm), ATerm k_176, ATerm b_16, ATerm t)
{
  ATerm t_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_176, term_v_13);
  t = y_7(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_0, b_16);
  t = o_60(t);
  t = fclose_0_0(t);
  t = b_16;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm w_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      if(match_cons(w_13, sym_Stream_1))
        {
          w_0 = ATgetArgument(w_13, 0);
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
ATerm xtc_transform_term_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(e_79, f_79, t);
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
  ATerm w_1 = NULL,x_1 = NULL,a_2 = NULL,e_2 = NULL;
  w_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_1 = ATgetArgument(t, 0);
      {
        ATerm y_0 = NULL,a_1 = NULL;
        t = SSL_int_to_string(x_1);
        y_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_13), y_0), term_x_13);
        a_1 = t;
        t = SSL_concat_strings(a_1);
      }
    }
  else
    {
      ATerm b_2 = NULL,c_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_1 = ATgetArgument(t, 0);
          a_2 = ATgetArgument(t, 1);
          e_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_2);
      b_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_2), term_a_14), b_2), term_z_13), x_1);
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
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm d_14 = ATgetArgument(t, 0);
              if((j_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm e_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_20), term_y_19), term_u_19), term_l_19), term_g_19), term_c_19), term_u_18), term_o_18), term_k_18), term_f_18), term_a_18), term_t_17), term_o_17), term_g_17), term_c_17), term_y_16), term_u_16), term_q_16), term_m_16), term_i_16), term_e_16), term_y_15), term_p_15), term_k_15), term_g_15), term_z_14), term_r_14), term_k_14);
        t = fetch_elem_1_0(f_0, t);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_2 = NULL,v_2 = NULL;
  o_2 = t;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_20 = ATgetArgument(t, 0);
            v_2 = ATgetArgument(t, 1);
            {
              ATerm j_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_20);
        {
          ATerm k_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,a_3 = NULL,b_3 = NULL;
              t = v_2;
              {
                ATerm n_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_20;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                m_2 = t;
                t = term_p_20;
                a_3 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, m_2), term_q_20);
                b_3 = t;
                t = SSL_printnl(a_3, b_3);
                t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_q_20));
              }
              ;
              LocalPopChoice(m_20);
            }
          else
            {
              t = k_20;
              t = o_2;
            }
        }
      }
    else
      {
        t = e_20;
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
ATerm fork_and_wait_1_0 (ATerm d_59 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL;
  g_3 = t;
  t = fork_0_0(t);
  f_3 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_3;
        t = d_59(t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = SSL_waitpid(f_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            if(((ATgetType(x_20) != AT_INT) || (ATgetInt((ATermInt) x_20) != 0)))
              _fail(t);
            {
              ATerm y_20 = ATgetArgument(t, 1);
            }
            {
              ATerm z_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_78 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL;
  l_3 = t;
  t = v_78(t);
  t = xtc_find_0_0(t);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_3, l_3);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm m_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_3, l_3);
      t = k_7(k_3, l_3, t);
      t = term_a_21;
      m_3 = t;
      t = SSL_exit(m_3);
      return(t);
    }
    t = fork_and_wait_1_0(x_0, t);
    t = l_3;
  }
  return(t);
}
ATerm m_7 (ATerm g_75 (ATerm), ATerm x_32, ATerm v_32, ATerm t)
{
  ATerm n_3 = NULL,x_3 = NULL,c_4 = NULL,e_4 = NULL,i_4 = NULL,j_4 = NULL;
  e_4 = t;
  t = g_75(t);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_3, x_32, v_32);
  t = h_8(n_3, x_32, v_32, t);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_4 = NULL;
        t = term_f_21;
        k_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_3, term_f_21);
        t = g_8(n_3, k_4, t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_3 = ATgetFirst((ATermList) t);
        c_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_21;
    i_4 = t;
    t = (ATerm) ATinsert(CheckATermList(c_4), (ATerm) ATinsert(CheckATermList(x_3), x_32));
    j_4 = t;
    t = SSL_table_put(n_3, i_4, j_4);
    t = e_4;
  }
  return(t);
}
ATerm i_5 (ATerm t_4, ATerm t)
{
  t = t_4;
  {
    ATerm g_21 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_21 = ATgetArgument(t, 0);
            ATerm i_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_21;
      }
    t = term_j_21;
    t = debug_1_0(b_1, t);
    t = (ATerm) ATmakeAppl(sym__2, t_4, term_v_13);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm j_5 (ATerm w_4, ATerm y_4, ATerm z_4, ATerm t)
{
  t = SSL_open_file(w_4, y_4);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_5(e_5, t);
            ;
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            t = j_5(f_5, g_5, e_5, t);
          }
      }
    }
  else
    {
      t = i_5(e_5, t);
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
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  t = term_r_21;
  t = new_0_0(t);
  m_5 = t;
  t = term_s_21;
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, term_s_21);
  t = f_8(m_5, n_5, t);
  o_5 = t;
  {
    ATerm t_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_5 = NULL;
        t = (ATerm) ATinsert(ATempty, term_x_21);
        s_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, (ATerm) ATinsert(ATempty, term_x_21));
        t = z_7(o_5, s_5, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = t_21;
        t = o_5;
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL;
  t = new_file_0_0(t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_5, term_v_13);
  t = open_file_0_0(t);
  t = term_r_21;
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_5, term_r_21);
  t = m_7(c_1, w_5, x_5, t);
  t = w_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL;
  m_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_3 = NULL,i_3 = NULL;
      t = m_6;
      t = xtc_new_file_0_0(t);
      h_3 = t;
      t = s_0(t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_z_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(h_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_3);
    }
  else
    {
      ATerm s_3 = NULL,t_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_6;
      t = xtc_new_file_0_0(t);
      s_3 = t;
      t = s_0(t);
      t_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_3), term_z_21), n_6), term_b_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(s_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_3);
    }
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm f_73 (ATerm), ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,y_6 = NULL;
  t = basename_1_0(_id, t);
  y_6 = t;
  t = term_r_21;
  t = f_73(t);
  v_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_6), term_d_22), y_6);
  u_6 = t;
  t = SSL_concat_strings(u_6);
  return(t);
}
ATerm if_keep1_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  {
    ATerm e_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL;
        t = term_j_22;
        t = get_config_0_0(t);
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_8, term_u_13);
        t = geq_0_0(t);
        t = f_7;
        t = n_77(t);
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = e_22;
        t = f_7;
      }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm n_8 = NULL;
  n_8 = t;
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL;
        t = term_r_13;
        t = get_config_0_0(t);
        s_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_8, term_v_14);
        t = geq_0_0(t);
        t = n_8;
        t = m_76(t);
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = n_8;
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
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(u_12, t_12);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      t = get_errno_0_0(t);
      t = term_r_21;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, u_12, t_12);
      t = a_8(u_12, t_12, t);
      t = SSL_remove(u_12);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  t_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_4 = NULL;
        t = t_9;
        t = p_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_u_22;
        a_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_9, term_u_22);
        t = a_8(u_9, a_4, t);
        t = SSL_remove(u_9);
        t = term_u_22;
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm x_22 = t;
          int y_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_4 = NULL;
              t = t_9;
              t = p_0(t);
              l_4 = t;
              {
                ATerm z_22 = t;
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
                        if((u_9 != t))
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
                    t = z_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, u_9, l_4);
                t = o_7(u_9, l_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_4);
              }
              ;
              LocalPopChoice(y_22);
            }
          else
            {
              t = x_22;
              t = t_9;
              t = p_0(t);
              if((u_9 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_9);
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
  t = term_a_23;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
  i_10 = t;
  t = term_p_20;
  j_10 = t;
  t = (ATerm) ATinsert(ATempty, term_d_23);
  k_10 = t;
  t = SSL_printnl(j_10, k_10);
  t = i_10;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_e_23;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_g_23;
  t = get_config_0_0(t);
  t = map_1_0(t_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_10), term_g_23);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_g_23;
  t = get_config_0_0(t);
  t = map_1_0(y_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_10), term_g_23);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL;
  t = if_verbose6_1_0(d_1, t);
  d_10 = t;
  t = guarantee_extension_1_0(h_1, t);
  c_10 = t;
  t = d_10;
  {
    ATerm j_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL;
        t = c_10;
        t = find_in_includes_1_0(j_1, t);
        e_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_10);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = j_23;
        {
          ATerm f_10 = NULL;
          ATerm h_2 (ATerm t)
          {
            t = c_10;
            return(t);
          }
          t = if_verbose2_1_0(l_1, t);
          t = guarantee_extension_1_0(n_1, t);
          f_10 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_10);
          {
            ATerm n_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_10 = NULL,m_10 = NULL,e_1 = NULL;
                m_10 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    ATerm q_23 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_10);
                l_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, f_10);
                e_1 = t;
                t = SSLsetAnnotations(e_1, l_10);
                LocalPopChoice(o_23);
                t = xtc_transform_file_2_0(o_1, p_1, t);
              }
            else
              {
                t = n_23;
                t = xtc_transform_term_2_0(u_1, v_1, t);
              }
            {
              ATerm r_23 = t;
              int s_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_10 = NULL,f_11 = NULL;
                  f_11 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      w_10 = ATgetArgument(t, 0);
                      {
                        ATerm r_4 = NULL,f_1 = NULL;
                        t = SSLgetAnnotations(f_11);
                        r_4 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, w_10);
                        f_1 = t;
                        t = SSLsetAnnotations(f_1, r_4);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = f_11;
                    }
                  LocalPopChoice(s_23);
                  t = xtc_transform_file_2_0(z_1, d_2, t);
                }
              else
                {
                  t = r_23;
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
ATerm p_7 (ATerm c_36, ATerm i_449, ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
    i_11 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_36), term_t_23), i_11);
    l_11 = t;
    t = SSL_concat_strings(l_11);
    j_11 = t;
    t = (ATerm) ATinsert(ATempty, term_x_21);
    k_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_11, (ATerm) ATinsert(ATempty, term_x_21));
    t = z_7(j_11, k_11, t);
    return(t);
  }
  t = i_449;
  t = fetch_elem_1_0(i_2, t);
  return(t);
}
ATerm find_in_includes_1_0 (ATerm y_57 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,q_11 = NULL;
  ATerm k_2 (ATerm t)
  {
    t = debug_1_0(y_57, t);
    return(t);
  }
  q_11 = t;
  t = term_g_23;
  t = get_config_0_0(t);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_11, n_11);
  t = p_7(q_11, n_11, t);
  t = if_verbose2_1_0(k_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm a_12 = NULL,c_12 = NULL,d_12 = NULL;
  a_12 = t;
  t = term_p_20;
  c_12 = t;
  t = (ATerm) ATinsert(ATempty, term_y_23);
  d_12 = t;
  t = SSL_printnl(c_12, d_12);
  t = a_12;
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  t = if_verbose6_1_0(l_2, t);
  v_11 = t;
  t = guarantee_extension_1_0(u_2, t);
  w_11 = t;
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_11 = NULL;
        t = find_in_includes_1_0(w_2, t);
        y_11 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_11);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
          ATerm e_3 (ATerm t)
          {
            t = w_11;
            return(t);
          }
          t = if_verbose2_1_0(x_2, t);
          t = v_11;
          t = get_syntax_definition_0_0(t);
          {
            ATerm c_24 = t;
            int d_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_12 = NULL,n_12 = NULL;
                n_12 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    m_12 = ATgetArgument(t, 0);
                    {
                      ATerm k_5 = NULL,i_1 = NULL;
                      t = SSLgetAnnotations(n_12);
                      k_5 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, m_12);
                      i_1 = t;
                      t = SSLsetAnnotations(i_1, k_5);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = n_12;
                  }
                LocalPopChoice(d_24);
                {
                  ATerm z_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, v_11), term_e_24);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(y_2, z_2, t);
                }
              }
            else
              {
                t = c_24;
                {
                  ATerm d_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, v_11), term_e_24);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(c_3, d_3, t);
                }
              }
            t = rename_to_1_0(e_3, t);
          }
        }
      }
    t = if_verbose6_1_0(j_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_76 (ATerm), ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_13 = NULL;
        t = term_r_13;
        t = get_config_0_0(t);
        b_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_13, term_m_14);
        t = geq_0_0(t);
        t = y_12;
        t = l_76(t);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = y_12;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_64 (ATerm), ATerm t)
{
  ATerm d_13 = NULL;
  ATerm p_3 (ATerm t)
  {
    t = t_64(t);
    if(((d_13 != NULL) && (d_13 != t)))
      _fail(t);
    else
      d_13 = t;
    return(t);
  }
  t = fetch_1_0(p_3, t);
  t = not_null(d_13);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_h_24;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm k_13 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_21);
      k_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_13, (ATerm) ATinsert(ATempty, term_x_21));
      t = z_7(i_13, k_13, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = debug_1_0(y_3, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm o_13 = NULL,i_14 = NULL,j_14 = NULL;
  t = if_verbose6_1_0(q_3, t);
  i_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_6 = NULL,g_6 = NULL,k_1 = NULL;
        t = SSLgetAnnotations(i_14);
        a_6 = t;
        t = j_14;
        t = guarantee_extension_1_0(u_3, t);
        g_6 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_6);
        k_1 = t;
        t = SSLsetAnnotations(k_1, a_6);
        t = read_from_0_0(t);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        {
          ATerm w_6 = NULL,x_6 = NULL,a_7 = NULL,m_1 = NULL;
          t = SSLgetAnnotations(i_14);
          x_6 = t;
          t = j_14;
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
              o_13 = ATgetArgument(t, 0);
              {
                ATerm n_24 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, o_13)));
        }
      }
    t = if_verbose6_1_0(w_3, t);
  }
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = debug_1_0(b_4, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm b_15 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      b_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_15;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = debug_1_0(g_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  t = if_verbose6_1_0(z_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_24;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        {
          ATerm t_24 = t;
          int u_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_15 (ATerm q_14, ATerm t)
              {
                ATerm s_14 = NULL,t_14 = NULL;
                t = term_p_20;
                s_14 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_25), p_14), term_x_24), q_14), term_w_24);
                t_14 = t;
                t = SSL_printnl(s_14, t_14);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_25), p_14), term_x_24), q_14), term_w_24);
                _fail(t);
                return(t);
              }
              ATerm w_14 = NULL,x_14 = NULL;
              t = get_meta_0_0(t);
              x_14 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  w_14 = ATgetArgument(t, 0);
                  {
                    ATerm c_25 = t;
                    int d_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = w_14;
                        t = fetch_elem_1_0(d_4, t);
                        ;
                        LocalPopChoice(d_25);
                      }
                    else
                      {
                        t = c_25;
                        t = d_15(x_14, t);
                      }
                  }
                }
              else
                {
                  t = d_15(x_14, t);
                }
              ;
              LocalPopChoice(u_24);
            }
          else
            {
              t = t_24;
              t = term_e_25;
            }
        }
      }
    t = if_verbose2_1_0(f_4, t);
  }
  return(t);
}
ATerm basename_1_0 (ATerm d_73 (ATerm), ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  r_15 = t;
  t = SSL_explode_string(r_15);
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_17 (ATerm t)
        {
          ATerm i_17 = NULL,r_17 = NULL,u_17 = NULL;
          i_17 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_17 = ATgetFirst((ATermList) t);
              u_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm h_25 = t;
            int i_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_8 = NULL,m_8 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(i_17);
                i_8 = t;
                t = u_17;
                t = z_17(t);
                m_8 = t;
                t = (ATerm) ATinsert(CheckATermList(m_8), r_17);
                q_1 = t;
                t = SSLsetAnnotations(q_1, i_8);
                ;
                LocalPopChoice(i_25);
              }
            else
              {
                t = h_25;
                {
                  ATerm j_25 = t;
                  int k_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_8 = NULL,r_1 = NULL;
                      t = SSLgetAnnotations(i_17);
                      y_8 = t;
                      t = r_17;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(u_17), r_17);
                      r_1 = t;
                      t = SSLsetAnnotations(r_1, y_8);
                      ;
                      LocalPopChoice(k_25);
                    }
                  else
                    {
                      t = j_25;
                      {
                        ATerm n_9 = NULL,z_9 = NULL,s_1 = NULL;
                        t = SSLgetAnnotations(i_17);
                        n_9 = t;
                        t = r_17;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = u_17;
                        t = d_73(t);
                        z_9 = t;
                        t = (ATerm) ATinsert(CheckATermList(z_9), r_17);
                        s_1 = t;
                        t = SSLsetAnnotations(s_1, n_9);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = z_17(t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
      }
    q_15 = t;
    t = SSL_implode_string(q_15);
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = debug_1_0(n_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_25);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_25);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  t = pass_verbose_0_0(t);
  v_20 = t;
  t = term_u_25;
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(w_25);
        t = (ATerm) ATinsert(ATempty, term_x_25);
      }
    else
      {
        t = v_25;
        t = (ATerm) ATempty;
      }
    w_20 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, w_20), v_20);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  t = pass_verbose_0_0(t);
  b_21 = t;
  t = term_u_25;
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(z_25);
        t = (ATerm) ATinsert(ATempty, term_x_25);
      }
    else
      {
        t = y_25;
        t = (ATerm) ATempty;
      }
    c_21 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, c_21), b_21);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL;
  t = pass_verbose_0_0(t);
  u_21 = t;
  t = term_u_25;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(h_26);
        t = (ATerm) ATinsert(ATempty, term_u_25);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATempty;
      }
    v_21 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, v_21), u_21);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm a_22 = NULL,g_22 = NULL;
  t = pass_verbose_0_0(t);
  a_22 = t;
  t = term_u_25;
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(j_26);
        t = (ATerm) ATinsert(ATempty, term_u_25);
      }
    else
      {
        t = i_26;
        t = (ATerm) ATempty;
      }
    g_22 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, g_22), a_22);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm k_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,q_19 = NULL,p_2 = NULL;
  t = if_verbose6_1_0(h_4, t);
  n_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_19);
  o_19 = t;
  t = q_19;
  t = basename_1_0(_id, t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_19);
  p_2 = t;
  t = SSLsetAnnotations(p_2, o_19);
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      k_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_19;
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_20 = ATgetArgument(t, 0);
            {
              ATerm r_10 = NULL,q_2 = NULL;
              t = SSLgetAnnotations(n_19);
              r_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_20);
              q_2 = t;
              t = SSLsetAnnotations(q_2, r_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_19;
          }
        LocalPopChoice(m_26);
        {
          ATerm p_4 (ATerm t)
          {
            ATerm g_20 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(q_4, t);
            g_20 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(g_20), k_19), term_o_26), term_n_26);
            return(t);
          }
          t = xtc_transform_file_2_0(o_4, p_4, t);
        }
      }
    else
      {
        t = l_26;
        {
          ATerm u_4 (ATerm t)
          {
            ATerm h_20 = NULL;
            t = (ATerm) ATempty;
            t = if_verbose3_1_0(v_4, t);
            h_20 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(h_20), k_19), term_o_26), term_n_26);
            return(t);
          }
          t = xtc_transform_term_2_0(s_4, u_4, t);
        }
      }
    {
      ATerm p_26 = t;
      int q_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_20 = NULL,u_20 = NULL;
          u_20 = t;
          if(match_cons(t, sym_FILE_1))
            {
              t_20 = ATgetArgument(t, 0);
              {
                ATerm b_11 = NULL,r_2 = NULL;
                t = SSLgetAnnotations(u_20);
                b_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, t_20);
                r_2 = t;
                t = SSLsetAnnotations(r_2, b_11);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = u_20;
            }
          LocalPopChoice(q_26);
          t = xtc_transform_file_2_0(x_4, a_5, t);
        }
      else
        {
          t = p_26;
          t = xtc_transform_term_2_0(b_5, c_5, t);
        }
      {
        ATerm d_5 (ATerm t)
        {
          ATerm h_5 (ATerm t)
          {
            t = m_19;
            t = guarantee_extension_1_0(l_5, t);
            return(t);
          }
          t = copy_to_1_0(h_5, t);
          return(t);
        }
        t = if_keep1_1_0(d_5, t);
        {
          ATerm t_26 = t;
          int u_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_21 = NULL,n_21 = NULL;
              n_21 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  m_21 = ATgetArgument(t, 0);
                  {
                    ATerm p_11 = NULL,s_2 = NULL;
                    t = SSLgetAnnotations(n_21);
                    p_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, m_21);
                    s_2 = t;
                    t = SSLsetAnnotations(s_2, p_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = n_21;
                }
              LocalPopChoice(u_26);
              t = xtc_transform_file_2_0(p_5, q_5, t);
            }
          else
            {
              t = t_26;
              t = xtc_transform_term_2_0(r_5, t_5, t);
            }
          {
            ATerm v_26 = t;
            int w_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_22 = NULL,t_22 = NULL;
                t_22 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    q_22 = ATgetArgument(t, 0);
                    {
                      ATerm b_12 = NULL,t_2 = NULL;
                      t = SSLgetAnnotations(t_22);
                      b_12 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, q_22);
                      t_2 = t;
                      t = SSLsetAnnotations(t_2, b_12);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = t_22;
                  }
                LocalPopChoice(w_26);
                t = xtc_transform_file_2_0(u_5, pass_verbose_0_0, t);
              }
            else
              {
                t = v_26;
                t = xtc_transform_term_2_0(y_5, pass_verbose_0_0, t);
              }
          }
        }
      }
    }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm x_64 (ATerm), ATerm t)
{
  ATerm a_25 (ATerm t)
  {
    ATerm v_24 = NULL,y_24 = NULL,z_24 = NULL;
    z_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_24 = ATgetFirst((ATermList) t);
        y_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_13 = NULL,l_13 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(z_24);
          e_13 = t;
          t = y_24;
          t = a_25(t);
          l_13 = t;
          t = (ATerm) ATinsert(CheckATermList(l_13), v_24);
          h_6 = t;
          t = SSLsetAnnotations(h_6, e_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_24;
        t = x_64(t);
      }
    return(t);
  }
  t = a_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_23 = NULL,k_23 = NULL,l_23 = NULL;
  h_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_23;
    }
  else
    {
      ATerm z_5 (ATerm t)
      {
        t = not_null(l_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_23 = ATgetFirst((ATermList) t);
          if(((l_23 != NULL) && (l_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_23;
      t = at_end_1_0(z_5, t);
    }
  return(t);
}
ATerm a_26 (ATerm l_25, ATerm t)
{
  ATerm m_25 = NULL;
  t = SSL_explode_term(l_25);
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  s_25 = t;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 (ATerm t)
            {
              t = r_25;
              return(t);
            }
            t = q_25;
            t = at_end_1_0(b_6, t);
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            t = a_26(s_25, t);
          }
      }
    }
  else
    {
      t = a_26(s_25, t);
    }
  return(t);
}
ATerm q_7 (ATerm u_35, ATerm t_35, ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  t = u_35;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = (ATerm) ATempty;
      }
    c_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_35, c_26);
    t = conc_0_0(t);
    b_26 = t;
    t = term_c_27;
    d_26 = t;
    t = SSL_table_put(d_26, u_35, b_26);
    t = (ATerm) ATmakeAppl(sym__3, term_c_27, u_35, b_26);
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  s_26 = t;
  t = SSL_explode_string(s_26);
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_28 (ATerm t)
        {
          ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
          x_27 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_27 = ATgetFirst((ATermList) t);
              z_27 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm f_27 = t;
            int g_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_14 = NULL,o_14 = NULL,k_6 = NULL;
                t = SSLgetAnnotations(x_27);
                g_14 = t;
                t = z_27;
                t = a_28(t);
                o_14 = t;
                t = (ATerm) ATinsert(CheckATermList(o_14), y_27);
                k_6 = t;
                t = SSLsetAnnotations(k_6, g_14);
                ;
                LocalPopChoice(g_27);
              }
            else
              {
                t = f_27;
                {
                  ATerm f_15 = NULL,l_6 = NULL;
                  t = SSLgetAnnotations(x_27);
                  f_15 = t;
                  t = y_27;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, y_27);
                  l_6 = t;
                  t = SSLsetAnnotations(l_6, f_15);
                }
              }
          }
          return(t);
        }
        t = a_28(t);
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = (ATerm) ATempty;
      }
    r_26 = t;
    t = SSL_implode_string(r_26);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm d_28 = NULL;
  ATerm c_6 (ATerm t)
  {
    ATerm e_28 = NULL,f_28 = NULL;
    e_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_28), e_28);
    t = g_8(not_null(d_28), e_28, t);
    f_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_28, f_28);
    return(t);
  }
  if(((d_28 != NULL) && (d_28 != t)))
    _fail(t);
  else
    d_28 = t;
  t = SSL_table_keys(d_28);
  t = map_1_0(c_6, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm o_76 (ATerm), ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_28 = NULL;
        t = term_r_13;
        t = get_config_0_0(t);
        j_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_28, term_i_19);
        t = geq_0_0(t);
        t = h_28;
        t = o_76(t);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = h_28;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 = NULL;
        t = term_r_13;
        t = get_config_0_0(t);
        q_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_28, term_s_16);
        t = geq_0_0(t);
        t = o_28;
        t = n_76(t);
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = o_28;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL;
        t = term_r_13;
        t = get_config_0_0(t);
        z_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_28, term_c_15);
        t = geq_0_0(t);
        t = u_28;
        t = p_76(t);
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = u_28;
      }
  }
  return(t);
}
ATerm s_7 (ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm w_22, ATerm v_22, ATerm t)
{
  t = p_68(t);
  {
    ATerm d_6 (ATerm t)
    {
      ATerm e_29 = NULL;
      e_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_22, e_29);
      t = o_68(t);
      return(t);
    }
    t = fetch_1_0(d_6, t);
    t = v_22;
  }
  return(t);
}
ATerm t_7 (ATerm l_68 (ATerm), ATerm s_22, ATerm r_22, ATerm t)
{
  ATerm o_30 (ATerm t)
  {
    ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
    h_30 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_30 = ATgetFirst((ATermList) t);
            j_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_27 = t;
          int o_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_30;
              {
                ATerm e_6 (ATerm t)
                {
                  t = r_22;
                  return(t);
                }
                t = s_7(l_68, e_6, i_30, j_30, t);
                t = o_30(t);
              }
              ;
              LocalPopChoice(o_27);
            }
          else
            {
              t = n_27;
              {
                ATerm o_15 = NULL,w_15 = NULL,g_9 = NULL;
                t = SSLgetAnnotations(h_30);
                o_15 = t;
                t = j_30;
                t = o_30(t);
                w_15 = t;
                t = (ATerm) ATinsert(CheckATermList(w_15), i_30);
                g_9 = t;
                t = SSLsetAnnotations(g_9, o_15);
              }
            }
        }
      }
    return(t);
  }
  t = s_22;
  t = o_30(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm e_31 = NULL;
  if(match_cons(t, sym__2))
    {
      e_31 = ATgetArgument(t, 0);
      if((e_31 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm l_34, ATerm m_34, ATerm n_34, ATerm t)
{
  ATerm s_30 = NULL,v_30 = NULL,w_30 = NULL;
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_34, m_34);
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_27 = ATgetArgument(t, 0);
            ATerm s_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_34, m_34);
        t = g_8(l_34, m_34, t);
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = (ATerm) ATempty;
      }
    w_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_30, n_34);
    t = t_7(f_6, w_30, n_34, t);
    v_30 = t;
    t = SSL_table_put(l_34, m_34, v_30);
    t = s_30;
  }
  return(t);
}
ATerm v_7 (ATerm r_76 (ATerm), ATerm v_34, ATerm u_34, ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm h_31 = NULL,n_31 = NULL;
    if(match_cons(t, sym__2))
      {
        h_31 = ATgetArgument(t, 0);
        n_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_34, h_31, n_31);
    t = r_76(t);
    return(t);
  }
  t = u_34;
  t = map_1_0(i_6, t);
  return(t);
}
ATerm z_7 (ATerm s_36, ATerm t_36, ATerm t)
{
  t = SSL_access(s_36, t_36);
  return(t);
}
ATerm i_32 (ATerm z_31, ATerm t)
{
  t = SSL_fclose(z_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_32 = NULL,g_32 = NULL;
  g_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_32 = ATgetArgument(t, 0);
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_32);
            ;
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            t = i_32(g_32, t);
          }
      }
    }
  else
    {
      t = i_32(g_32, t);
    }
  return(t);
}
ATerm w_7 (ATerm z_15, ATerm t)
{
  t = SSL_read_term_from_stream(z_15);
  return(t);
}
ATerm x_7 (ATerm a_37, ATerm b_37, ATerm t)
{
  ATerm j_32 = NULL;
  t = SSL_fopen(a_37, b_37);
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_32 = NULL;
  t = SSL_stdin_stream();
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_32 = NULL;
  t = SSL_stdout_stream();
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_32 = NULL;
  t = SSL_stderr_stream();
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_32);
  return(t);
}
ATerm c_35 (ATerm d_33, ATerm t)
{
  ATerm f_33 = NULL;
  t = SSL_explode_term(d_33);
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_27 = ATgetArgument(t, 1);
        if(((ATgetType(w_27) == AT_LIST) && !(ATisEmpty(w_27))))
          {
            f_33 = ATgetFirst((ATermList) w_27);
            {
              ATerm b_28 = (ATerm) ATgetNext((ATermList) w_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_33;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_33;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_33;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_33;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm d_35 (ATerm r_33, ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,c_34 = NULL,k_9 = NULL;
  t = SSLgetAnnotations(w_33);
  z_33 = t;
  t = r_33;
  if(match_cons(t, sym_Path_1))
    {
      c_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_34, v_33);
  k_9 = t;
  t = SSLsetAnnotations(k_9, z_33);
  if(match_cons(t, sym__2))
    {
      x_33 = ATgetArgument(t, 0);
      y_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(x_33, y_33, t);
  return(t);
}
ATerm e_35 (ATerm e_34, ATerm f_34, ATerm g_34, ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL,s_34 = NULL,l_9 = NULL;
  t = SSLgetAnnotations(g_34);
  k_34 = t;
  t = SSL_is_string(e_34);
  s_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_34, f_34);
  l_9 = t;
  t = SSLsetAnnotations(l_9, k_34);
  if(match_cons(t, sym__2))
    {
      i_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(i_34, j_34, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm y_34 = NULL,a_35 = NULL,b_35 = NULL;
  y_34 = t;
  if(match_cons(t, sym__2))
    {
      a_35 = ATgetArgument(t, 0);
      b_35 = ATgetArgument(t, 1);
      {
        ATerm c_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_35(y_34, t);
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = c_28;
            {
              ATerm i_28 = t;
              int k_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_35(a_35, b_35, y_34, t);
                  ;
                  LocalPopChoice(k_28);
                }
              else
                {
                  t = i_28;
                  t = e_35(a_35, b_35, y_34, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_35(y_34, t);
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_35 = NULL;
      l_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_35, term_p_28);
      t = y_7(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      t = debug_1_0(j_6, t);
      _fail(t);
    }
  i_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(j_35, t);
  h_35 = t;
  t = i_35;
  t = fclose_0_0(t);
  t = h_35;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm t_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_35 = NULL,q_35 = NULL;
      n_35 = t;
      t = (ATerm) ATinsert(ATempty, term_w_28);
      q_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_35, (ATerm) ATinsert(ATempty, term_w_28));
      t = z_7(n_35, q_35, t);
      LocalPopChoice(v_28);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = t_28;
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_29 = t;
            if((PushChoice() == 0))
              {
                ATerm r_35 = NULL,v_35 = NULL;
                r_35 = t;
                t = (ATerm) ATinsert(ATempty, term_x_21);
                v_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_35, (ATerm) ATinsert(ATempty, term_x_21));
                t = z_7(r_35, v_35, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_29;
              }
            t = debug_1_0(o_6, t);
            ;
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            t = debug_1_0(p_6, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = debug_1_0(r_6, t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = debug_1_0(t_6, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,j_37 = NULL;
  g_37 = t;
  t = term_p_20;
  h_37 = t;
  t = (ATerm) ATinsert(ATempty, term_d_29);
  j_37 = t;
  t = SSL_printnl(h_37, j_37);
  t = g_37;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,w_37 = NULL;
  if(match_cons(t, sym__3))
    {
      k_37 = ATgetArgument(t, 0);
      l_37 = ATgetArgument(t, 1);
      w_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_7(k_37, l_37, w_37, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm x_37 = NULL,a_38 = NULL,c_38 = NULL;
  x_37 = t;
  t = term_p_20;
  a_38 = t;
  t = (ATerm) ATinsert(ATempty, term_f_29);
  c_38 = t;
  t = SSL_printnl(a_38, c_38);
  t = x_37;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm d_38 = NULL,g_38 = NULL,j_38 = NULL;
  d_38 = t;
  t = term_p_20;
  g_38 = t;
  t = (ATerm) ATinsert(ATempty, term_d_29);
  j_38 = t;
  t = SSL_printnl(g_38, j_38);
  t = d_38;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_35 = NULL,d_36 = NULL,e_36 = NULL,j_36 = NULL,k_36 = NULL,m_36 = NULL,n_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL;
  w_35 = t;
  t = if_verbose5_1_0(q_6, t);
  {
    ATerm g_29 = t;
    if((PushChoice() == 0))
      {
        ATerm e_37 = NULL,f_37 = NULL;
        t = term_h_29;
        e_37 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_35);
        f_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_29, (ATerm) ATmakeAppl(sym_Imported_1, w_35));
        t = g_8(e_37, f_37, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_29;
      }
    e_36 = t;
    t = term_h_29;
    p_36 = t;
    t = term_i_29;
    q_36 = t;
    t = (ATerm) ATinsert(ATempty, w_35);
    r_36 = t;
    t = SSL_table_put(p_36, q_36, r_36);
    t = e_36;
    t = if_verbose4_1_0(s_6, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(z_6, t);
    d_36 = t;
    t = term_h_29;
    n_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_29, d_36);
    t = v_7(b_7, n_36, d_36, t);
    t = if_verbose6_1_0(c_7, t);
    t = term_h_29;
    j_36 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, w_35);
    k_36 = t;
    t = (ATerm) ATempty;
    m_36 = t;
    t = SSL_table_put(j_36, k_36, m_36);
    t = (ATerm) ATmakeAppl(sym__3, term_h_29, (ATerm)ATmakeAppl(sym_Imported_1, w_35), (ATerm) ATempty);
    t = if_verbose4_1_0(d_7, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_72 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,g_39 = NULL,h_39 = NULL;
  a_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_39;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_39 = ATgetFirst((ATermList) t);
          h_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_17 = NULL,m_17 = NULL,n_17 = NULL,q_9 = NULL;
            t = SSLgetAnnotations(a_39);
            j_17 = t;
            t = g_39;
            t = d_72(t);
            m_17 = t;
            t = h_39;
            t = filter_1_0(d_72, t);
            n_17 = t;
            t = (ATerm) ATinsert(CheckATermList(n_17), m_17);
            q_9 = t;
            t = SSLsetAnnotations(q_9, j_17);
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            t = h_39;
            t = filter_1_0(d_72, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  ATerm p_39 (ATerm t)
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_74(t);
        t = p_39(t);
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
      }
    return(t);
  }
  t = p_39(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_39 = NULL;
            t = term_s_29;
            r_39 = t;
            t = SSL_getenv(r_39);
            ;
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = debug_1_0(g_7, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL;
  t = term_h_29;
  y_39 = t;
  t = term_u_29;
  z_39 = t;
  t = term_v_29;
  t = g_8(y_39, z_39, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm w_29 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_29;
      }
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = debug_1_0(r_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_39 = NULL;
  t = if_verbose5_1_0(e_7, t);
  s_39 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_39 = NULL,w_39 = NULL;
        t = term_h_29;
        t_39 = t;
        t = term_i_29;
        w_39 = t;
        t = term_a_30;
        t = g_8(t_39, w_39, t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        {
          ATerm x_39 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          x_39 = t;
          t = repeat_1_0(l_7, t);
          t = x_39;
        }
      }
    t = s_39;
    t = if_verbose5_1_0(n_7, t);
  }
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = debug_1_0(k_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm m_41 (ATerm m_40, ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,s_40 = NULL;
  t = term_h_29;
  p_40 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, m_40);
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_29, (ATerm) ATmakeAppl(sym_Tool_1, m_40));
  t = g_8(p_40, s_40, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_30 = ATgetFirst((ATermList) t);
      if(match_cons(c_30, sym__2))
        {
          ATerm g_30 = ATgetArgument(c_30, 0);
          o_40 = ATgetArgument(c_30, 1);
        }
      else
        _fail(t);
      {
        ATerm d_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_40;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = debug_1_0(p_8, t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_h_29;
  t = table_getlist_0_0(t);
  t = debug_1_0(r_8, t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_40 = NULL,u_40 = NULL,y_40 = NULL;
      t = if_verbose5_1_0(e_8, t);
      t = xtc_load_0_0(t);
      y_40 = t;
      if(match_cons(t, sym__2))
        {
          t_40 = ATgetArgument(t, 0);
          u_40 = ATgetArgument(t, 1);
          {
            ATerm n_30 = t;
            int p_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
                t = term_h_29;
                f_41 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_40);
                g_41 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_29, (ATerm) ATmakeAppl(sym_Tool_1, t_40));
                t = g_8(f_41, g_41, t);
                {
                  ATerm l_8 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_40 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_41 != NULL) && (e_41 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_41 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(l_8, t);
                  t = not_null(e_41);
                }
                ;
                LocalPopChoice(p_30);
              }
            else
              {
                t = n_30;
                t = m_41(y_40, t);
              }
          }
        }
      else
        {
          t = m_41(y_40, t);
        }
      t = if_verbose5_1_0(o_8, t);
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      {
        ATerm l_41 = NULL,y_17 = NULL,b_18 = NULL;
        l_41 = t;
        t = term_p_20;
        y_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_30), l_41), term_q_30);
        b_18 = t;
        t = SSL_printnl(y_17, b_18);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_30), l_41), term_q_30);
        t = if_verbose5_1_0(q_8, t);
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
  ATerm d_42 = NULL,e_42 = NULL;
  d_42 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_18 = NULL;
        t = d_42;
        t = n_0(t);
        i_18 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = i_18;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = i_18;
          }
        t = (ATerm) ATmakeAppl(sym__2, e_42, i_18);
        t = a_8(e_42, i_18, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_42);
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        {
          ATerm x_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_18 = NULL;
              t = d_42;
              t = n_0(t);
              p_18 = t;
              {
                ATerm z_30 = t;
                if((PushChoice() == 0))
                  {
                    ATerm q_18 = NULL;
                    q_18 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = q_18;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = q_18;
                          }
                        else
                          {
                            t = q_18;
                            if((e_42 != t))
                              {
                                _fail(t);
                              }
                            t = q_18;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_30;
                  }
                t = (ATerm) ATmakeAppl(sym__2, e_42, p_18);
                t = a_8(e_42, p_18, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_42);
              }
              ;
              LocalPopChoice(y_30);
            }
          else
            {
              t = x_30;
              t = d_42;
              t = n_0(t);
              if((e_42 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_42);
            }
        }
      }
  }
  return(t);
}
ATerm b_8 (ATerm t_33, ATerm u_33, ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  l_42 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_33, u_33);
        t = g_8(t_33, u_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_31 = ATgetFirst((ATermList) t);
            k_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_31);
        t = SSL_table_put(t_33, u_33, k_42);
        t = (ATerm) ATmakeAppl(sym__3, t_33, u_33, k_42);
      }
    else
      {
        t = a_31;
        t = SSL_table_remove(t_33, u_33);
        t = (ATerm) ATmakeAppl(sym__2, t_33, u_33);
      }
    t = l_42;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_75 (ATerm), ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL;
  t_42 = t;
  t = d_75(t);
  s_42 = t;
  {
    ATerm d_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_42 = NULL;
        t = term_f_21;
        v_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_42, term_f_21);
        t = g_8(s_42, v_42, t);
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = d_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_42 = ATgetFirst((ATermList) t);
        q_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_21;
    u_42 = t;
    t = SSL_table_put(s_42, u_42, q_42);
    t = r_42;
    {
      ATerm t_8 (ATerm t)
      {
        ATerm w_42 = NULL;
        w_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_42, w_42);
        t = b_8(s_42, w_42, t);
        return(t);
      }
      t = map_1_0(t_8, t);
      t = t_42;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm t)
{
  ATerm g_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_75(t);
      t = z_75(t);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = g_31;
      t = z_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_75 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
  z_42 = t;
  t = c_75(t);
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_42, term_f_21);
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_43 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_31 = ATgetArgument(t, 0);
            ATerm r_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_21;
        g_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_42, term_f_21);
        t = g_8(y_42, g_43, t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = (ATerm) ATempty;
      }
    a_43 = t;
    t = term_f_21;
    b_43 = t;
    t = (ATerm) ATinsert(CheckATermList(a_43), (ATerm) ATempty);
    c_43 = t;
    t = SSL_table_put(y_42, b_43, c_43);
    t = z_42;
  }
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm p_43 = NULL;
  p_43 = t;
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(p_43);
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = p_43;
      }
  }
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_78 (ATerm), ATerm t)
{
  ATerm j_43 = NULL;
  ATerm v_8 (ATerm t)
  {
    ATerm k_43 = NULL;
    k_43 = t;
    {
      ATerm u_31 = t;
      int v_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_43 = NULL,m_43 = NULL;
          t = term_y_21;
          l_43 = t;
          t = term_f_21;
          m_43 = t;
          t = term_w_31;
          t = g_8(l_43, m_43, t);
          ;
          LocalPopChoice(v_31);
        }
      else
        {
          t = u_31;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((j_43 != NULL) && (j_43 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            j_43 = ATgetFirst((ATermList) t);
          {
            ATerm x_31 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = j_43;
      t = map_1_0(w_8, t);
      t = k_43;
      t = end_scope_1_0(x_8, t);
    }
    return(t);
  }
  t = begin_scope_1_0(u_8, t);
  t = restore_always_2_0(h_78, v_8, t);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm y_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_32);
    }
  else
    {
      t = y_31;
      t = term_u_22;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm z_8 (ATerm t)
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_43 = NULL;
        t = term_b_22;
        t = get_config_0_0(t);
        s_43 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_43);
        ;
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = term_h_24;
      }
    t = i_78(t);
    t = copy_to_1_0(a_9, t);
    return(t);
  }
  t = xtc_temp_files_1_0(z_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
  t_43 = t;
  t = term_r_21;
  t = whoami_0_0(t);
  u_43 = t;
  t = term_p_20;
  w_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_32), u_43), term_d_32);
  x_43 = t;
  t = SSL_printnl(w_43, x_43);
  t = term_u_13;
  v_43 = t;
  t = SSL_exit(v_43);
  t = t_43;
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm z_43 = NULL;
  z_43 = t;
  if(match_string(t, "-k"))
    {
      t = z_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_43;
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
  a_44 = t;
  t = SSL_string_to_int(a_44);
  b_44 = t;
  t = term_j_22;
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_22, b_44);
  t = j_8(c_44, b_44, t);
  t = a_44;
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_9, c_9, d_9, t);
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm e_44 = NULL;
  e_44 = t;
  if(match_string(t, "-S"))
    {
      t = e_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_44;
    }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL;
  t = term_r_13;
  f_44 = t;
  t = term_n_32;
  g_44 = t;
  t = term_o_32;
  t = j_8(f_44, g_44, t);
  t = term_p_32;
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  t = SSL_string_to_int(h_44);
  i_44 = t;
  t = term_r_13;
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, i_44);
  t = j_8(j_44, i_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_44);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL;
  t = term_s_32;
  k_44 = t;
  t = term_r_21;
  l_44 = t;
  t = term_t_32;
  t = j_8(k_44, l_44, t);
  t = term_u_32;
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_9, f_9, h_9, t);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_9, j_9, m_9, t);
            ;
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            t = Option_3_0(o_9, p_9, r_9, t);
          }
      }
    }
  return(t);
}
ATerm j_8 (ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm m_44 = NULL;
  t = term_c_27;
  m_44 = t;
  t = SSL_table_put(m_44, o_35, p_35);
  t = (ATerm) ATmakeAppl(sym__3, term_c_27, o_35, p_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
      t = term_r_21;
      t = h_0(t);
      r_44 = t;
      t = term_c_33;
      s_44 = t;
      t = term_e_33;
      t_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_33, term_e_33, r_44);
      t = h_8(s_44, t_44, r_44, t);
      _fail(t);
    }
  else
    {
      ATerm w_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_44 = ATgetFirst((ATermList) t);
          q_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_44;
      t = d_0(t);
      t = term_r_21;
      t = g_0(t);
      w_44 = t;
      t = (ATerm) ATinsert(CheckATermList(q_44), w_44);
    }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm y_44 = NULL;
  y_44 = t;
  if(match_string(t, "-o"))
    {
      t = y_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_44;
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  z_44 = t;
  t = term_z_21;
  a_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_21, z_44);
  t = j_8(a_45, z_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_44);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_9, w_9, y_9, t);
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm c_45 = NULL;
  c_45 = t;
  if(match_string(t, "-i"))
    {
      t = c_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_45;
    }
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  d_45 = t;
  t = term_b_22;
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_22, d_45);
  t = j_8(e_45, d_45, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_45);
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_10, b_10, g_10, t);
  return(t);
}
ATerm h_8 (ATerm o_33, ATerm p_33, ATerm n_33, ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
  g_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_33, p_33);
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_33 = ATgetArgument(t, 0);
            ATerm l_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_33, p_33);
        t = g_8(o_33, p_33, t);
        ;
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        t = (ATerm) ATempty;
      }
    h_45 = t;
    t = (ATerm) ATinsert(CheckATermList(h_45), n_33);
    i_45 = t;
    t = SSL_table_put(o_33, p_33, i_45);
    t = g_45;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
      t = term_r_21;
      t = m_0(t);
      t_45 = t;
      t = term_c_33;
      u_45 = t;
      t = term_e_33;
      v_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_33, term_e_33, t_45);
      t = h_8(u_45, v_45, t_45, t);
      _fail(t);
    }
  else
    {
      ATerm z_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_45 = ATgetFirst((ATermList) t);
          q_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_45 = ATgetFirst((ATermList) t);
          s_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_45;
      t = k_0(t);
      t = r_45;
      t = l_0(t);
      z_45 = t;
      t = (ATerm) ATinsert(CheckATermList(s_45), z_45);
    }
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm b_46 = NULL;
  b_46 = t;
  if(match_string(t, "-I"))
    {
      t = b_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = b_46;
    }
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  c_46 = t;
  t = term_g_23;
  d_46 = t;
  t = (ATerm) ATinsert(ATempty, c_46);
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATinsert(ATempty, c_46));
  t = q_7(d_46, e_46, t);
  t = c_46;
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm u_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  t = term_s_24;
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_24, f_46);
  t = j_8(g_46, f_46, t);
  t = f_46;
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm y_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  t = term_r_13;
  i_46 = t;
  t = term_n_32;
  j_46 = t;
  t = term_o_32;
  t = j_8(i_46, j_46, t);
  t = h_46;
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm c_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  t = term_u_25;
  l_46 = t;
  t = term_u_13;
  m_46 = t;
  t = term_a_34;
  t = j_8(l_46, m_46, t);
  t = k_46;
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm b_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(h_10, o_10, q_10, t);
      ;
      LocalPopChoice(d_34);
    }
  else
    {
      t = b_34;
      {
        ATerm h_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_10, v_10, x_10, t);
            ;
            LocalPopChoice(o_34);
          }
        else
          {
            t = h_34;
            {
              ATerm p_34 = t;
              int q_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_10, z_10, a_11, t);
                  ;
                  LocalPopChoice(q_34);
                }
              else
                {
                  t = p_34;
                  t = Option_3_0(c_11, d_11, e_11, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_21;
  t = whoami_0_0(t);
  n_46 = t;
  t = term_p_20;
  p_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_34), n_46);
  q_46 = t;
  t = SSL_printnl(p_46, q_46);
  t = term_u_13;
  o_46 = t;
  t = SSL_exit(o_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_34;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_8 (ATerm j_31, ATerm k_31, ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_31, k_31);
      ;
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      t = SSL_addr(j_31, k_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_70 (ATerm), ATerm a_71 (ATerm), ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
  s_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_46;
      t = z_70(t);
    }
  else
    {
      ATerm x_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_46 = ATgetFirst((ATermList) t);
          u_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_46;
      t = foldr_2_0(z_70, a_71, t);
      x_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_46, x_46);
      t = a_71(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(a_19, b_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_47 = NULL,w_18 = NULL,x_18 = NULL;
  t = times_0_0(t);
  x_18 = t;
  t = SSL_explode_term(x_18);
  if(match_cons(t, sym__2))
    {
      ATerm z_34 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_18;
  t = foldr_2_0(h_11, m_11, t);
  a_47 = t;
  t = SSL_TicksToSeconds(a_47);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
  l_47 = t;
  if(match_cons(t, sym__2))
    {
      m_47 = ATgetArgument(t, 0);
      n_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_47;
        if((m_47 != t))
          {
            _fail(t);
          }
        t = l_47;
        ;
        LocalPopChoice(m_35);
      }
    else
      {
        t = k_35;
        t = (ATerm) ATmakeAppl(sym__2, m_47, n_47);
        {
          ATerm s_35 = t;
          int x_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_47, n_47);
              ;
              LocalPopChoice(x_35);
            }
          else
            {
              t = s_35;
              t = SSL_gtr(m_47, n_47);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_47, n_47);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm r_47 = NULL;
  r_47 = t;
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_47 = NULL;
        t = term_r_13;
        t = get_config_0_0(t);
        t_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_47, term_u_13);
        t = geq_0_0(t);
        t = r_47;
        t = k_76(t);
        ;
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = r_47;
      }
  }
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,y_47 = NULL,z_47 = NULL;
  t = run_time_0_0(t);
  v_47 = t;
  t = term_r_21;
  t = whoami_0_0(t);
  w_47 = t;
  t = term_p_20;
  y_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_36), v_47), term_z_13), w_47);
  z_47 = t;
  t = SSL_printnl(y_47, z_47);
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_36), v_47), term_z_13), w_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_32;
  a_48 = t;
  t = SSL_exit(a_48);
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL;
  j_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_48 = ATgetArgument(t, 0);
          {
            ATerm t_19 = NULL,s_9 = NULL;
            t = SSLgetAnnotations(j_48);
            t_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_48);
            s_9 = t;
            t = SSLsetAnnotations(s_9, t_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm b_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_36);
    }
  else
    {
      t = b_36;
      t = fetch_1_0(r_11, t);
    }
  t = j_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_48 = ATgetFirst((ATermList) t);
      n_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_48 = NULL,s_48 = NULL;
        ATerm s_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_48)), not_null(s_48));
          return(t);
        }
        t = n_48;
        t = j_0(t);
        if(((r_48 != NULL) && (r_48 != t)))
          _fail(t);
        else
          r_48 = t;
        t = m_48;
        t = i_0(t);
        if(((s_48 != NULL) && (s_48 != t)))
          _fail(t);
        else
          s_48 = t;
        t = n_48;
        t = reverse_acc_2_0(i_0, s_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_21;
      t = j_0(t);
    }
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,x_9 = NULL;
  y_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_48);
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_48);
  x_9 = t;
  t = SSLsetAnnotations(x_9, w_48);
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm a_49 = NULL;
  a_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_49), term_h_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL;
  ATerm i_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_36);
    }
  else
    {
      t = i_36;
      t = fetch_1_0(t_11, t);
    }
  t = term_o_36;
  t = echo_0_0(t);
  t = term_c_33;
  u_48 = t;
  t = term_e_33;
  v_48 = t;
  t = term_u_36;
  t = g_8(u_48, v_48, t);
  t = reverse_acc_2_0(_id, u_11, t);
  t = map_1_0(x_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_64 (ATerm), ATerm t)
{
  ATerm x_49 (ATerm t)
  {
    ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
    u_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_49 = ATgetFirst((ATermList) t);
        w_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_36 = t;
      int w_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_20 = NULL,o_20 = NULL,s_10 = NULL;
          t = SSLgetAnnotations(u_49);
          l_20 = t;
          t = v_49;
          t = r_64(t);
          o_20 = t;
          t = (ATerm) ATinsert(CheckATermList(w_49), o_20);
          s_10 = t;
          t = SSLsetAnnotations(s_10, l_20);
          ;
          LocalPopChoice(w_36);
        }
      else
        {
          t = v_36;
          {
            ATerm k_21 = NULL,q_21 = NULL,t_10 = NULL;
            t = SSLgetAnnotations(u_49);
            k_21 = t;
            t = w_49;
            t = x_49(t);
            q_21 = t;
            t = (ATerm) ATinsert(CheckATermList(q_21), v_49);
            t_10 = t;
            t = SSLsetAnnotations(t_10, k_21);
          }
        }
    }
    return(t);
  }
  t = x_49(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_36 = ATgetFirst((ATermList) t);
                ATerm c_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_50;
          }
        ;
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        t = (ATerm) ATinsert(ATempty, b_50);
      }
    c_50 = t;
    t = term_u_22;
    d_50 = t;
    t = SSL_printnl(d_50, c_50);
    t = b_50;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_34;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm f_8 (ATerm e_30, ATerm f_30, ATerm t)
{
  t = SSL_strcat(e_30, f_30);
  return(t);
}
ATerm debug_1_0 (ATerm m_60 (ATerm), ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL;
  h_50 = t;
  t = m_60(t);
  i_50 = t;
  t = term_p_20;
  j_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_50), i_50);
  k_50 = t;
  t = SSL_printnl(j_50, k_50);
  t = h_50;
  return(t);
}
ATerm map_1_0 (ATerm h_64 (ATerm), ATerm t)
{
  ATerm z_50 (ATerm t)
  {
    ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
    w_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_50;
      }
    else
      {
        ATerm c_22 = NULL,f_22 = NULL,h_22 = NULL,g_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_50 = ATgetFirst((ATermList) t);
            y_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_50);
        c_22 = t;
        t = x_50;
        t = h_64(t);
        f_22 = t;
        t = y_50;
        t = z_50(t);
        h_22 = t;
        t = (ATerm) ATinsert(CheckATermList(h_22), f_22);
        g_11 = t;
        t = SSLsetAnnotations(g_11, c_22);
      }
    return(t);
  }
  t = z_50(t);
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm d_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = d_37;
    }
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = term_m_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_51 = NULL;
      h_51 = t;
      t = SSL_is_string(h_51);
      ;
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_11, t);
            ;
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            {
              ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
              n_51 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_51 = ATgetArgument(t, 0);
                  t = o_51;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_51 = ATgetArgument(t, 0);
                      t = o_51;
                      {
                        ATerm r_37 = t;
                        int s_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_37);
                          }
                        else
                          {
                            t = r_37;
                            t = debug_1_0(e_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_51 = NULL,u_51 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_51 = ATgetArgument(t, 0);
                          p_51 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_51;
                      t = eval_config_0_0(t);
                      t_51 = t;
                      t = p_51;
                      t = eval_config_0_0(t);
                      u_51 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_51, u_51);
                      t = f_8(t_51, u_51, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_8 (ATerm f_35, ATerm g_35, ATerm t)
{
  t = SSL_table_get(f_35, g_35);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  a_52 = t;
  t = term_c_27;
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_27, a_52);
  t = g_8(b_52, a_52, t);
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_52 = NULL,d_52 = NULL;
        t = eval_config_0_0(t);
        c_52 = t;
        t = term_c_27;
        d_52 = t;
        t = SSL_table_put(d_52, a_52, c_52);
        t = c_52;
        ;
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
      }
  }
  return(t);
}
ATerm g_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  t = term_v_37;
  g_52 = t;
  t = term_r_21;
  h_52 = t;
  t = term_y_37;
  t = j_8(g_52, h_52, t);
  return(t);
}
ATerm i_12 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm k_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
  t = term_v_37;
  k_52 = t;
  t = term_r_21;
  l_52 = t;
  t = term_y_37;
  t = j_8(k_52, l_52, t);
  t = term_p_25;
  i_52 = t;
  t = term_r_21;
  j_52 = t;
  t = term_b_38;
  t = j_8(i_52, j_52, t);
  t = term_e_38;
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = term_f_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_12, h_12, i_12, t);
      ;
      LocalPopChoice(i_38);
    }
  else
    {
      t = h_38;
      t = Option_3_0(k_12, l_12, r_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_51 (ATerm), ATerm w_51 (ATerm), ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,f_12 = NULL;
  r_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_52 = ATgetFirst((ATermList) t);
      o_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_52);
  m_52 = t;
  t = n_52;
  t = v_51(t);
  p_52 = t;
  t = o_52;
  t = w_51(t);
  q_52 = t;
  t = (ATerm) ATinsert(CheckATermList(q_52), p_52);
  f_12 = t;
  t = SSLsetAnnotations(f_12, m_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,b_53 = NULL,c_53 = NULL,j_12 = NULL;
  w_52 = t;
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_38;
        t = h_82(t);
        ;
        LocalPopChoice(l_38);
      }
    else
      {
        t = k_38;
      }
    t = w_52;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_52 = ATgetFirst((ATermList) t);
        z_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_52);
    x_52 = t;
    t = term_t_34;
    c_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_34, y_52);
    t = j_8(c_53, y_52, t);
    t = z_52;
    {
      ATerm m_53 (ATerm t)
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_38 = t;
            int q_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_53 = NULL;
                f_53 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_53;
                ;
                LocalPopChoice(q_38);
              }
            else
              {
                t = p_38;
                t = h_82(t);
                t = Cons_2_0(_id, m_53, t);
              }
            ;
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            {
              ATerm i_53 = NULL,j_53 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_53 = ATgetFirst((ATermList) t);
                  j_53 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_53), (ATerm) ATmakeAppl(sym_Undefined_1, i_53));
            }
          }
        return(t);
      }
      t = m_53(t);
      b_53 = t;
      t = (ATerm) ATinsert(CheckATermList(b_53), (ATerm) ATmakeAppl(sym_Program_1, y_52));
      j_12 = t;
      t = SSLsetAnnotations(j_12, x_52);
    }
  }
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm y_53 = NULL;
  y_53 = t;
  if(match_string(t, "--help"))
    {
      t = y_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_53;
        }
    }
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL;
  t = term_g_36;
  z_53 = t;
  t = term_r_21;
  a_54 = t;
  t = term_r_38;
  t = j_8(z_53, a_54, t);
  t = term_s_38;
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = term_t_38;
  return(t);
}
ATerm c_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
  t_53 = t;
  t = term_c_33;
  v_53 = t;
  t = term_e_33;
  w_53 = t;
  t = (ATerm) ATempty;
  x_53 = t;
  t = SSL_table_put(v_53, w_53, x_53);
  t = t_53;
  {
    ATerm s_12 (ATerm t)
    {
      ATerm u_38 = t;
      int v_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_82(t);
          ;
          LocalPopChoice(v_38);
        }
      else
        {
          t = u_38;
          {
            ATerm w_38 = t;
            int x_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_12, z_12, a_13, t);
                ;
                LocalPopChoice(x_38);
              }
            else
              {
                t = w_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_12, t);
    {
      ATerm y_38 = t;
      int z_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_54 = NULL;
          h_54 = t;
          {
            ATerm b_39 = t;
            int c_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_23 = NULL;
                t = h_54;
                {
                  ATerm d_39 = t;
                  int e_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_g_36;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_39);
                    }
                  else
                    {
                      t = d_39;
                      t = fetch_1_0(c_13, t);
                    }
                  t = h_54;
                  t = default_system_usage_0_0(t);
                  t = term_n_32;
                  p_23 = t;
                  t = SSL_exit(p_23);
                }
                ;
                LocalPopChoice(c_39);
              }
            else
              {
                t = b_39;
                {
                  ATerm w_23 = NULL;
                  t = term_v_37;
                  t = get_config_0_0(t);
                  t = h_54;
                  t = default_system_about_0_0(t);
                  t = term_n_32;
                  w_23 = t;
                  t = SSL_exit(w_23);
                }
              }
          }
          ;
          LocalPopChoice(z_38);
        }
      else
        {
          t = y_38;
          {
            ATerm f_39 = t;
            int i_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL;
                ATerm f_13 (ATerm t)
                {
                  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_12 = NULL;
                  n_54 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      m_54 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_54);
                  l_54 = t;
                  t = m_54;
                  if(((r_53 != NULL) && (r_53 != t)))
                    _fail(t);
                  else
                    r_53 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, m_54);
                  o_12 = t;
                  t = SSLsetAnnotations(o_12, l_54);
                  return(t);
                }
                t = fetch_1_0(f_13, t);
                t = term_p_20;
                j_54 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_53)), term_j_39);
                k_54 = t;
                t = SSL_printnl(j_54, k_54);
                t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_53)), term_j_39));
                t = default_system_usage_0_0(t);
                t = term_u_13;
                i_54 = t;
                t = SSL_exit(i_54);
                ;
                LocalPopChoice(i_39);
              }
            else
              {
                t = f_39;
              }
          }
        }
      s_53 = t;
      t = term_c_33;
      u_53 = t;
      t = SSL_table_destroy(u_53);
      t = s_53;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
  t = parse_options_1_0(l_80, t);
  s_54 = t;
  t = term_k_39;
  v_54 = t;
  t = SSL_table_create(v_54);
  t = term_k_39;
  t_54 = t;
  t = term_l_39;
  u_54 = t;
  t = SSL_table_put(t_54, u_54, s_54);
  t = s_54;
  t = n_80(t);
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_80, t);
        ;
        LocalPopChoice(n_39);
      }
    else
      {
        t = m_39;
        {
          ATerm o_39 = t;
          int q_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_39);
            }
          else
            {
              t = o_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm u_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
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
            t = input_option_0_0(t);
            ;
            LocalPopChoice(b_40);
          }
        else
          {
            t = a_40;
            {
              ATerm c_40 = t;
              int d_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(d_40);
                }
              else
                {
                  t = c_40;
                  {
                    ATerm e_40 = t;
                    int f_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(j_13, m_13, n_13, t);
                        ;
                        LocalPopChoice(f_40);
                      }
                    else
                      {
                        t = e_40;
                        {
                          ATerm g_40 = t;
                          int h_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(h_40);
                            }
                          else
                            {
                              t = g_40;
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
ATerm h_13 (ATerm t)
{
  t = xtc_io_1_0(p_13, t);
  return(t);
}
ATerm j_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL;
  t = term_i_40;
  x_54 = t;
  t = term_r_21;
  y_54 = t;
  t = term_j_40;
  t = j_8(x_54, y_54, t);
  t = term_k_40;
  return(t);
}
ATerm n_13 (ATerm t)
{
  t = term_l_40;
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL;
  a_55 = t;
  t = term_n_40;
  t = xtc_find_path_0_0(t);
  b_55 = t;
  t = term_g_23;
  c_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_55), term_q_40);
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, b_55), term_q_40));
  t = q_7(c_55, d_55, t);
  t = a_55;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_13, default_usage_0_0, _id, h_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
