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
ATerm term_y_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_c_42;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_j_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_m_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_o_38;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_h_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_p_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_d_36;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_a_34;
ATerm term_v_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_m_33;
ATerm term_z_31;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_l_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_f_29;
ATerm term_b_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_f_28;
ATerm term_c_28;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_q_25;
ATerm term_k_25;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_e_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_d_23;
ATerm term_y_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_h_17;
ATerm term_c_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
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
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_e_14;
void init_constant_terms (void)
{
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_m_14, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_w_15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_f_16, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_m_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_h_17, term_b_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_h_18, term_m_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_s_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_19, term_e_19, term_f_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_j_19, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_p_19, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_v_19, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_20, term_b_20, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_g_20, term_h_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_20, term_m_20, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_20, term_q_20, term_r_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_20, term_w_20, term_x_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_a_21, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_e_21, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_21, term_i_21, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_21, term_m_21, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_21, term_q_21, term_r_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_21, term_w_21, term_y_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_22, term_e_22, term_f_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_22, term_i_22, term_j_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_b_35, term_i_36);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym__2, term_b_35, term_e_35);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_m_23);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_x_38);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_38);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_v_23);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym__2, term_k_39, term_l_39);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym__2, term_s_41, term_v_23);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym__2, term_u_29, term_v_23);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym__2, term_t_40, term_v_23);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym__2, term_t_43, term_v_23);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm b_7 (ATerm r_43, ATerm s_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm c_7 (ATerm a_28, ATerm b_28, ATerm);
ATerm d_7 (ATerm p_72 (ATerm), ATerm q_194, ATerm i_28, ATerm);
ATerm i_1 (ATerm);
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
ATerm e_6 (ATerm o_5, ATerm);
ATerm f_6 (ATerm r_5, ATerm s_5, ATerm t_5, ATerm);
ATerm l_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm guarantee_extension_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm if_keep1_1_0 (ATerm i_89 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm i_7 (ATerm a_25, ATerm b_25, ATerm);
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm get_syntax_definition_0_0 (ATerm);
ATerm j_7 (ATerm e_48, ATerm x_464, ATerm);
ATerm find_in_includes_1_0 (ATerm z_69 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm d_3 (ATerm);
ATerm g_3 (ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm u_76 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm get_meta_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm get_syntax_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm basename_1_0 (ATerm d_85 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm u_4 (ATerm);
ATerm x_4 (ATerm);
ATerm a_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm f_13 (ATerm v_12, ATerm);
ATerm conc_0_0 (ATerm);
ATerm k_7 (ATerm w_47, ATerm v_47, ATerm);
ATerm l_5 (ATerm);
ATerm p_5 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm j_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm m_7 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm d_35, ATerm c_35, ATerm);
ATerm n_7 (ATerm m_80 (ATerm), ATerm z_34, ATerm y_34, ATerm);
ATerm w_5 (ATerm);
ATerm o_7 (ATerm n_46, ATerm o_46, ATerm p_46, ATerm);
ATerm p_7 (ATerm m_88 (ATerm), ATerm x_46, ATerm w_46, ATerm);
ATerm s_7 (ATerm u_48, ATerm v_48, ATerm);
ATerm x_15 (ATerm p_15, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_7 (ATerm g_28, ATerm);
ATerm r_7 (ATerm c_49, ATerm d_49, ATerm);
ATerm _2_0 (ATerm i_59 (ATerm), ATerm j_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm l_7 (ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm f_8 (ATerm);
ATerm k_8 (ATerm);
ATerm t_20 (ATerm h_19, ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm t_7 (ATerm c_25, ATerm d_25, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm u_7 (ATerm v_45, ATerm w_45, ATerm);
ATerm end_scope_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm w_8 (ATerm);
ATerm z_8 (ATerm);
ATerm b_9 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm c_90 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm xtc_io_1_0 (ATerm d_90 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm c_8 (ATerm q_47, ATerm r_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm q_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_9 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm a_8 (ATerm q_45, ATerm r_45, ATerm p_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm parse_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_7 (ATerm l_43, ATerm m_43, ATerm);
ATerm foldr_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_11 (ATerm);
ATerm o_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm t_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_11 (ATerm);
ATerm need_help_1_0 (ATerm e_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm f_69 (ATerm), ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm k_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_69 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_7 (ATerm h_42, ATerm i_42, ATerm);
ATerm debug_1_0 (ATerm n_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm z_7 (ATerm h_47, ATerm i_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm o_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm);
ATerm w_12 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_94 (ATerm), ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm parse_options_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm);
ATerm u_13 (ATerm);
ATerm x_13 (ATerm);
ATerm y_13 (ATerm);
ATerm z_13 (ATerm);
ATerm b_14 (ATerm);
ATerm d_14 (ATerm);
ATerm parse_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_7 (ATerm r_43, ATerm s_43, ATerm t)
{
  ATerm m_6 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_43, s_43);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_6;
      t = SSL_subtr(r_43, s_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,p_0 = NULL,r_0 = NULL;
  t = term_e_14;
  {
    ATerm h_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = h_14;
        t = term_m_14;
      }
    b_0 = t;
    t = term_m_14;
    p_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_m_14);
    t = b_7(b_0, p_0, t);
    r_0 = t;
    t = SSL_int_to_string(r_0);
    f_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_e_14);
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
  t = (ATerm) ATmakeAppl(sym__2, q_194, term_n_14);
  t = open_stream_0_0(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_0, i_28);
  t = p_72(t);
  t = fclose_0_0(t);
  t = i_28;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if(match_cons(o_14, sym_Stream_1))
        {
          z_0 = ATgetArgument(o_14, 0);
        }
      else
        _fail(t);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(z_0, a_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL;
  u_0 = t;
  t = xtc_new_file_0_0(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, u_0);
  t = d_7(i_1, v_0, u_0, t);
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
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
  m_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      n_2 = ATgetArgument(t, 0);
      {
        ATerm x_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(n_2);
        x_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_14), x_0), term_q_14);
        y_0 = t;
        t = SSL_concat_strings(y_0);
      }
    }
  else
    {
      ATerm m_1 = NULL,o_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          n_2 = ATgetArgument(t, 0);
          o_2 = ATgetArgument(t, 1);
          p_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(o_2);
      m_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_2), term_w_14), m_1), term_v_14), n_2);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_22), term_g_22), term_z_21), term_u_21), term_o_21), term_k_21), term_g_21), term_c_21), term_y_20), term_u_20), term_o_20), term_i_20), term_d_20), term_z_19), term_r_19), term_n_19), term_g_19), term_u_18), term_n_18), term_d_18), term_u_16), term_q_16), term_j_16), term_b_16), term_r_15), term_m_15), term_i_15), term_e_15);
        {
          ATerm j_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm o_22 = ATgetArgument(t, 0);
                if((e_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm r_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(j_1, t);
        }
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_4 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_22 = ATgetArgument(t, 0);
            i_4 = ATgetArgument(t, 1);
            {
              ATerm w_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_4;
        {
          ATerm x_22 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_22;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          a_2 = t;
          t = term_y_22;
          b_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_d_23);
          c_2 = t;
          t = SSL_printnl(b_2, c_2);
          t = (ATerm) ATmakeAppl(sym__2, term_y_22, (ATerm) ATinsert(ATinsert(ATempty, a_2), term_d_23));
        }
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
      }
    t = i_3;
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
  ATerm p_4 = NULL,r_4 = NULL;
  p_4 = t;
  t = fork_0_0(t);
  r_4 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = p_4;
        t = e_71(t);
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = SSL_waitpid(r_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_23 = ATgetArgument(t, 0);
            if(((ATgetType(g_23) != AT_INT) || (ATgetInt((ATermInt) g_23) != 0)))
              _fail(t);
            {
              ATerm h_23 = ATgetArgument(t, 1);
            }
            {
              ATerm i_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = p_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm q_90 (ATerm), ATerm t)
{
  ATerm t_4 = NULL,v_4 = NULL;
  t_4 = t;
  t = q_90(t);
  t = xtc_find_0_0(t);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, t_4);
  {
    ATerm k_1 (ATerm t)
    {
      ATerm w_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, v_4, t_4);
      t = e_7(v_4, t_4, t);
      t = term_j_23;
      w_4 = t;
      t = SSL_exit(w_4);
      return(t);
    }
    t = fork_and_wait_1_0(k_1, t);
    t = t_4;
  }
  return(t);
}
ATerm g_7 (ATerm b_87 (ATerm), ATerm z_44, ATerm x_44, ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,b_5 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL;
  y_4 = t;
  t = b_87(t);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_4, z_44, x_44);
  t = a_8(z_4, z_44, x_44, t);
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_5 = NULL;
        t = term_m_23;
        g_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_4, term_m_23);
        t = z_7(z_4, g_5, t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_5 = ATgetFirst((ATermList) t);
        c_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_23;
    e_5 = t;
    t = (ATerm) ATinsert(CheckATermList(c_5), (ATerm) ATinsert(CheckATermList(b_5), z_44));
    f_5 = t;
    t = SSL_table_put(z_4, e_5, f_5);
    t = y_4;
  }
  return(t);
}
ATerm e_6 (ATerm o_5, ATerm t)
{
  t = o_5;
  {
    ATerm n_23 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_23 = ATgetArgument(t, 0);
            ATerm p_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_23;
      }
    t = term_r_23;
    t = debug_1_0(l_1, t);
    t = (ATerm) ATmakeAppl(sym__2, o_5, term_n_14);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm f_6 (ATerm r_5, ATerm s_5, ATerm t_5, ATerm t)
{
  t = SSL_open_file(r_5, s_5);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm a_6 = NULL,c_6 = NULL,d_6 = NULL;
  a_6 = t;
  if(match_cons(t, sym__2))
    {
      c_6 = ATgetArgument(t, 0);
      d_6 = ATgetArgument(t, 1);
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_6(a_6, t);
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            t = f_6(c_6, d_6, a_6, t);
          }
      }
    }
  else
    {
      t = e_6(a_6, t);
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
  ATerm g_6 = NULL,h_6 = NULL;
  t = term_v_23;
  t = new_0_0(t);
  g_6 = t;
  t = term_w_23;
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, term_w_23);
  t = y_7(g_6, h_6, t);
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_6 = NULL,k_6 = NULL;
        i_6 = t;
        t = (ATerm) ATinsert(ATempty, term_e_24);
        k_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_6, (ATerm) ATinsert(ATempty, term_e_24));
        t = s_7(i_6, k_6, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
      }
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  t = new_file_0_0(t);
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_6, term_n_14);
  t = open_file_0_0(t);
  t = term_v_23;
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_6, term_v_23);
  t = g_7(n_1, n_6, o_6, t);
  t = n_6;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL;
  w_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_2 = NULL,q_2 = NULL;
      t = w_7;
      t = xtc_new_file_0_0(t);
      i_2 = t;
      t = n_0(t);
      q_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_2, (ATerm) ATinsert(ATinsert(ATempty, i_2), term_n_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(i_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
    }
  else
    {
      ATerm w_2 = NULL,x_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_7;
      t = xtc_new_file_0_0(t);
      w_2 = t;
      t = n_0(t);
      x_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_2), term_n_24), x_7), term_r_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(w_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,o_0 = NULL,q_0 = NULL;
  j_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_8);
  g_8 = t;
  t = h_8;
  t = y_68(t);
  i_8 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_8);
  o_0 = t;
  t = SSLsetAnnotations(o_0, g_8);
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,q_8 = NULL;
  t = basename_1_0(_id, t);
  m_8 = t;
  t = term_v_23;
  t = f_85(t);
  n_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_8), term_t_24), m_8);
  q_8 = t;
  t = SSL_concat_strings(q_8);
  return(t);
}
ATerm if_keep1_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm g_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_8 = NULL,v_8 = NULL;
      r_8 = t;
      t = term_k_25;
      t = get_config_0_0(t);
      v_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_8, term_m_14);
      t = geq_0_0(t);
      t = r_8;
      t = i_89(t);
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = g_25;
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_8 = NULL,a_9 = NULL;
      y_8 = t;
      t = term_e_14;
      t = get_config_0_0(t);
      a_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_9, term_k_15);
      t = geq_0_0(t);
      t = y_8;
      t = h_88(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
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
  ATerm r_9 = NULL,s_9 = NULL;
  r_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_3 = NULL;
        t = r_9;
        t = l_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_q_25;
        f_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, term_q_25);
        t = t_7(s_9, f_3, t);
        t = SSL_remove(s_9);
        t = term_q_25;
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        {
          ATerm s_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_3 = NULL;
              t = r_9;
              t = l_0(t);
              n_3 = t;
              {
                ATerm v_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_25 = t;
                    int z_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(z_25);
                      }
                    else
                      {
                        t = x_25;
                        {
                          ATerm o_3 = NULL;
                          o_3 = t;
                          if((s_9 != t))
                            {
                              _fail(t);
                            }
                          t = o_3;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_25;
                  }
                t = (ATerm) ATmakeAppl(sym__2, s_9, n_3);
                t = i_7(s_9, n_3, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, n_3);
              }
              ;
              LocalPopChoice(u_25);
            }
          else
            {
              t = s_25;
              t = r_9;
              t = l_0(t);
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
ATerm p_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
  a_10 = t;
  t = term_y_22;
  b_10 = t;
  t = (ATerm) ATinsert(ATempty, term_d_26);
  c_10 = t;
  t = SSL_printnl(b_10, c_10);
  t = a_10;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_i_26;
  t = get_config_0_0(t);
  t = map_1_0(x_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_10), term_i_26);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_i_26;
  t = get_config_0_0(t);
  t = map_1_0(d_2, t);
  t = concat_0_0(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm e_10 = NULL;
  e_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_10), term_i_26);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  t = if_verbose6_1_0(p_1, t);
  w_9 = t;
  t = guarantee_extension_1_0(r_1, t);
  x_9 = t;
  t = w_9;
  {
    ATerm l_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_9 = NULL;
        t = x_9;
        t = find_in_includes_1_0(s_1, t);
        y_9 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_9);
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = l_26;
        {
          ATerm z_9 = NULL;
          t = if_verbose2_1_0(t_1, t);
          t = guarantee_extension_1_0(u_1, t);
          z_9 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_9);
          {
            ATerm r_26 = t;
            int s_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                LocalPopChoice(s_26);
                t = xtc_transform_file_2_0(v_1, w_1, t);
              }
            else
              {
                t = r_26;
                t = xtc_transform_term_2_0(y_1, z_1, t);
              }
            {
              ATerm t_26 = t;
              int x_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_26 = t;
                  int z_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(z_26);
                    }
                  else
                    {
                      t = y_26;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(x_26);
                  t = xtc_transform_file_2_0(e_2, f_2, t);
                }
              else
                {
                  t = t_26;
                  t = xtc_transform_term_2_0(g_2, h_2, t);
                }
              {
                ATerm j_2 (ATerm t)
                {
                  t = x_9;
                  return(t);
                }
                t = rename_to_1_0(j_2, t);
              }
            }
          }
        }
      }
  }
  return(t);
}
ATerm j_7 (ATerm e_48, ATerm x_464, ATerm t)
{
  t = x_464;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
      f_10 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_48), term_a_27), f_10);
      h_10 = t;
      t = SSL_concat_strings(h_10);
      g_10 = t;
      t = (ATerm) ATinsert(ATempty, term_e_24);
      i_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_10, (ATerm) ATinsert(ATempty, term_e_24));
      t = s_7(g_10, i_10, t);
      return(t);
    }
    t = fetch_elem_1_0(k_2, t);
  }
  return(t);
}
ATerm find_in_includes_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  j_10 = t;
  t = term_i_26;
  t = get_config_0_0(t);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, k_10);
  t = j_7(j_10, k_10, t);
  {
    ATerm l_2 (ATerm t)
    {
      t = debug_1_0(z_69, t);
      return(t);
    }
    t = if_verbose2_1_0(l_2, t);
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_b_27;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  t = term_y_22;
  p_10 = t;
  t = (ATerm) ATinsert(ATempty, term_e_27);
  q_10 = t;
  t = SSL_printnl(p_10, q_10);
  t = o_10;
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  t = if_verbose6_1_0(r_2, t);
  l_10 = t;
  t = guarantee_extension_1_0(t_2, t);
  m_10 = t;
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 = NULL;
        t = find_in_includes_1_0(u_2, t);
        n_10 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_10);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = if_verbose2_1_0(v_2, t);
        t = l_10;
        t = get_syntax_definition_0_0(t);
        {
          ATerm i_27 = t;
          int j_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_27 = t;
              int p_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(p_27);
                }
              else
                {
                  t = o_27;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(j_27);
              {
                ATerm z_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, l_10), term_t_27);
                  return(t);
                }
                t = xtc_transform_file_2_0(y_2, z_2, t);
              }
            }
          else
            {
              t = i_27;
              {
                ATerm b_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, l_10), term_t_27);
                  return(t);
                }
                t = xtc_transform_term_2_0(a_3, b_3, t);
              }
            }
          {
            ATerm c_3 (ATerm t)
            {
              t = m_10;
              return(t);
            }
            t = rename_to_1_0(c_3, t);
          }
        }
      }
    t = if_verbose6_1_0(d_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_10 = NULL,u_10 = NULL;
      r_10 = t;
      t = term_e_14;
      t = get_config_0_0(t);
      u_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_10, term_g_15);
      t = geq_0_0(t);
      t = r_10;
      t = g_88(t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_76 (ATerm), ATerm t)
{
  ATerm v_10 = NULL;
  ATerm h_3 (ATerm t)
  {
    t = u_76(t);
    if(((v_10 != NULL) && (v_10 != t)))
      _fail(t);
    else
      v_10 = t;
    return(t);
  }
  t = fetch_1_0(h_3, t);
  t = not_null(v_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm z_10 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_27;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm d_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_24);
      d_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_10, (ATerm) ATinsert(ATempty, term_e_24));
      t = s_7(z_10, d_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = guarantee_extension_1_0(m_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = guarantee_extension_1_0(q_3, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = debug_1_0(s_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm e_11 = NULL;
  t = if_verbose6_1_0(j_3, t);
  {
    ATerm h_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = FILE_1_0(l_3, t);
        t = read_from_0_0(t);
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = h_28;
        {
          ATerm g_11 = NULL;
          t = FILE_1_0(p_3, t);
          t = read_from_0_0(t);
          g_11 = t;
          t = SSL_explode_term(g_11);
          if(match_cons(t, sym__2))
            {
              e_11 = ATgetArgument(t, 0);
              {
                ATerm n_28 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, e_11)));
        }
      }
    t = if_verbose6_1_0(r_3, t);
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = debug_1_0(u_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm u_11 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      u_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = debug_1_0(x_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm l_11 = NULL;
  t = if_verbose6_1_0(t_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      l_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_29;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        {
          ATerm c_29 = t;
          int e_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_11 (ATerm n_11, ATerm t)
              {
                ATerm p_11 = NULL,q_11 = NULL;
                t = term_y_22;
                p_11 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_29), l_11), term_h_29), n_11), term_f_29);
                q_11 = t;
                t = SSL_printnl(p_11, q_11);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_29), l_11), term_h_29), n_11), term_f_29);
                _fail(t);
                return(t);
              }
              ATerm r_11 = NULL,s_11 = NULL;
              t = get_meta_0_0(t);
              s_11 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  r_11 = ATgetArgument(t, 0);
                  {
                    ATerm j_29 = t;
                    int k_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = r_11;
                        t = fetch_elem_1_0(v_3, t);
                        ;
                        LocalPopChoice(k_29);
                      }
                    else
                      {
                        t = j_29;
                        t = v_11(s_11, t);
                      }
                  }
                }
              else
                {
                  t = v_11(s_11, t);
                }
              ;
              LocalPopChoice(e_29);
            }
          else
            {
              t = c_29;
              t = term_l_29;
            }
        }
      }
    t = if_verbose2_1_0(w_3, t);
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  w_11 = t;
  t = SSL_explode_string(w_11);
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_11 (ATerm t)
        {
          ATerm o_29 = t;
          int p_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, z_11, t);
              ;
              LocalPopChoice(p_29);
            }
          else
            {
              t = o_29;
              {
                ATerm q_29 = t;
                int r_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(y_3, _id, t);
                    ;
                    LocalPopChoice(r_29);
                  }
                else
                  {
                    t = q_29;
                    t = Cons_2_0(z_3, d_85, t);
                    t = (ATerm) ATempty;
                  }
              }
            }
          return(t);
        }
        t = z_11(t);
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
      }
    x_11 = t;
    t = SSL_implode_string(x_11);
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = debug_1_0(b_4, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_29);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_29);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm a_12 = NULL,c_12 = NULL,d_12 = NULL;
  t = if_verbose6_1_0(a_4, t);
  a_12 = t;
  {
    ATerm c_4 (ATerm t)
    {
      t = basename_1_0(_id, t);
      if(((c_12 != NULL) && (c_12 != t)))
        _fail(t);
      else
        c_12 = t;
      return(t);
    }
    t = FILE_1_0(c_4, t);
    t = get_syntax_0_0(t);
    t = get_parse_table_0_0(t);
    if(match_cons(t, sym_FILE_1))
      {
        d_12 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = a_12;
    {
      ATerm c_30 = t;
      int d_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_30 = t;
          int g_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(g_30);
            }
          else
            {
              t = e_30;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(d_30);
          {
            ATerm e_4 (ATerm t)
            {
              ATerm e_12 = NULL;
              t = (ATerm) ATempty;
              t = if_verbose3_1_0(g_4, t);
              e_12 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_12), d_12), term_j_30), term_h_30);
              return(t);
            }
            t = xtc_transform_file_2_0(d_4, e_4, t);
          }
        }
      else
        {
          t = c_30;
          {
            ATerm j_4 (ATerm t)
            {
              ATerm f_12 = NULL;
              t = (ATerm) ATempty;
              t = if_verbose3_1_0(k_4, t);
              f_12 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(f_12), d_12), term_j_30), term_h_30);
              return(t);
            }
            t = xtc_transform_term_2_0(h_4, j_4, t);
          }
        }
      {
        ATerm k_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_30 = t;
            int q_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(q_30);
              }
            else
              {
                t = m_30;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(l_30);
            t = xtc_transform_file_2_0(l_4, pass_verbose_0_0, t);
          }
        else
          {
            t = k_30;
            t = xtc_transform_term_2_0(m_4, pass_verbose_0_0, t);
          }
        {
          ATerm q_4 (ATerm t)
          {
            ATerm s_4 (ATerm t)
            {
              t = not_null(c_12);
              t = guarantee_extension_1_0(u_4, t);
              return(t);
            }
            t = copy_to_1_0(s_4, t);
            return(t);
          }
          t = if_keep1_1_0(q_4, t);
          {
            ATerm t_30 = t;
            int u_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_30 = t;
                int y_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(y_30);
                  }
                else
                  {
                    t = x_30;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(u_30);
                t = xtc_transform_file_2_0(x_4, pass_verbose_0_0, t);
              }
            else
              {
                t = t_30;
                t = xtc_transform_term_2_0(a_5, pass_verbose_0_0, t);
              }
            {
              ATerm z_30 = t;
              int a_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_31 = t;
                  int c_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(c_31);
                    }
                  else
                    {
                      t = b_31;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(a_31);
                  t = xtc_transform_file_2_0(h_5, pass_verbose_0_0, t);
                }
              else
                {
                  t = z_30;
                  t = xtc_transform_term_2_0(i_5, pass_verbose_0_0, t);
                }
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
  ATerm p_12 (ATerm t)
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_12, t);
        ;
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_76(t);
      }
    return(t);
  }
  t = p_12(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = f_31;
      {
        ATerm i_12 = NULL,j_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_12 = ATgetFirst((ATermList) t);
            j_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_12;
        {
          ATerm j_5 (ATerm t)
          {
            t = j_12;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(j_5, t);
        }
      }
    }
  return(t);
}
ATerm f_13 (ATerm v_12, ATerm t)
{
  ATerm y_12 = NULL;
  t = SSL_explode_term(v_12);
  if(match_cons(t, sym__2))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
  b_13 = t;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
      {
        ATerm o_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 (ATerm t)
            {
              t = a_13;
              return(t);
            }
            t = z_12;
            t = at_end_1_0(k_5, t);
            ;
            LocalPopChoice(p_31);
          }
        else
          {
            t = o_31;
            t = f_13(b_13, t);
          }
      }
    }
  else
    {
      t = f_13(b_13, t);
    }
  return(t);
}
ATerm k_7 (ATerm w_47, ATerm v_47, ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  t = w_47;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        t = (ATerm) ATempty;
      }
    g_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_47, g_13);
    t = conc_0_0(t);
    h_13 = t;
    t = term_z_31;
    i_13 = t;
    t = SSL_table_put(i_13, w_47, h_13);
    t = (ATerm) ATmakeAppl(sym__3, term_z_31, w_47, h_13);
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  l_13 = t;
  t = SSL_explode_string(l_13);
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_13 (ATerm t)
        {
          ATerm d_32 = t;
          int e_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, n_13, t);
              ;
              LocalPopChoice(e_32);
            }
          else
            {
              t = d_32;
              t = Cons_2_0(l_5, p_5, t);
            }
          return(t);
        }
        t = n_13(t);
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        t = (ATerm) ATempty;
      }
    m_13 = t;
    t = SSL_implode_string(m_13);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_13 = NULL;
  o_13 = t;
  t = SSL_table_keys(o_13);
  {
    ATerm q_5 (ATerm t)
    {
      ATerm p_13 = NULL,r_13 = NULL;
      p_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_13, p_13);
      t = z_7(o_13, p_13, t);
      r_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_13, r_13);
      return(t);
    }
    t = map_1_0(q_5, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_13 = NULL,v_13 = NULL;
      t_13 = t;
      t = term_e_14;
      t = get_config_0_0(t);
      v_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_13, term_q_21);
      t = geq_0_0(t);
      t = t_13;
      t = j_88(t);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_13 = NULL,a_14 = NULL;
      w_13 = t;
      t = term_e_14;
      t = get_config_0_0(t);
      a_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_14, term_e_19);
      t = geq_0_0(t);
      t = w_13;
      t = i_88(t);
      ;
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_14 = NULL,f_14 = NULL;
      c_14 = t;
      t = term_e_14;
      t = get_config_0_0(t);
      f_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_14, term_o_15);
      t = geq_0_0(t);
      t = c_14;
      t = k_88(t);
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
    }
  return(t);
}
ATerm m_7 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm d_35, ATerm c_35, ATerm t)
{
  t = q_80(t);
  {
    ATerm u_5 (ATerm t)
    {
      ATerm g_14 = NULL;
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_35, g_14);
      t = p_80(t);
      return(t);
    }
    t = fetch_1_0(u_5, t);
    t = c_35;
  }
  return(t);
}
ATerm n_7 (ATerm m_80 (ATerm), ATerm z_34, ATerm y_34, ATerm t)
{
  t = z_34;
  {
    ATerm p_14 (ATerm t)
    {
      ATerm o_32 = t;
      int p_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_34;
          ;
          LocalPopChoice(p_32);
        }
      else
        {
          t = o_32;
          {
            ATerm q_32 = t;
            int r_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
                i_14 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_14 = ATgetFirst((ATermList) t);
                    k_14 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_14;
                {
                  ATerm v_5 (ATerm t)
                  {
                    t = y_34;
                    return(t);
                  }
                  t = m_7(m_80, v_5, j_14, k_14, t);
                  t = p_14(t);
                }
                ;
                LocalPopChoice(r_32);
              }
            else
              {
                t = q_32;
                t = Cons_2_0(_id, p_14, t);
              }
          }
        }
      return(t);
    }
    t = p_14(t);
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      a_15 = ATgetArgument(t, 0);
      if((a_15 != ATgetArgument(t, 1)))
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
  ATerm r_14 = NULL,s_14 = NULL,u_14 = NULL;
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_32 = ATgetArgument(t, 0);
            ATerm w_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
        t = z_7(n_46, o_46, t);
        ;
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        t = (ATerm) ATempty;
      }
    s_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_14, p_46);
    t = n_7(w_5, s_14, p_46, t);
    u_14 = t;
    t = SSL_table_put(n_46, o_46, u_14);
    t = r_14;
  }
  return(t);
}
ATerm p_7 (ATerm m_88 (ATerm), ATerm x_46, ATerm w_46, ATerm t)
{
  t = w_46;
  {
    ATerm x_5 (ATerm t)
    {
      ATerm b_15 = NULL,c_15 = NULL;
      if(match_cons(t, sym__2))
        {
          b_15 = ATgetArgument(t, 0);
          c_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, x_46, b_15, c_15);
      t = m_88(t);
      return(t);
    }
    t = map_1_0(x_5, t);
  }
  return(t);
}
ATerm s_7 (ATerm u_48, ATerm v_48, ATerm t)
{
  t = SSL_access(u_48, v_48);
  return(t);
}
ATerm x_15 (ATerm p_15, ATerm t)
{
  t = SSL_fclose(p_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_15 = ATgetArgument(t, 0);
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_15);
            ;
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            t = x_15(v_15, t);
          }
      }
    }
  else
    {
      t = x_15(v_15, t);
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
  ATerm y_15 = NULL;
  t = SSL_fopen(c_49, d_49);
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_15);
  return(t);
}
ATerm _2_0 (ATerm i_59 (ATerm), ATerm j_59 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,c_16 = NULL,d_16 = NULL,g_16 = NULL,h_16 = NULL,w_0 = NULL,b_1 = NULL;
  h_16 = t;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_16);
  z_15 = t;
  t = a_16;
  t = i_59(t);
  d_16 = t;
  t = c_16;
  t = j_59(t);
  g_16 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_16, g_16);
  w_0 = t;
  t = SSLsetAnnotations(w_0, z_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_16 = NULL;
  t = SSL_stdin_stream();
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_16 = NULL;
  t = SSL_stdout_stream();
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_16);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_16 = NULL;
  t = SSL_stderr_stream();
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_16);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm y_16 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_16;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm b_17 = NULL;
  b_17 = t;
  t = SSL_is_string(b_17);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_33 = ATgetArgument(t, 0);
      ATerm e_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_16 = NULL,f_4 = NULL;
        v_16 = t;
        t = SSL_explode_term(v_16);
        if(match_cons(t, sym__2))
          {
            ATerm h_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_33) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_33 = ATgetArgument(t, 1);
              if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
                {
                  f_4 = ATgetFirst((ATermList) i_33);
                  {
                    ATerm j_33 = (ATerm) ATgetNext((ATermList) i_33);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = f_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = f_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = f_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
        {
          ATerm k_33 = t;
          int l_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_16 = NULL,x_16 = NULL;
              t = _2_0(y_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_16 = ATgetArgument(t, 0);
                  x_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_7(w_16, x_16, t);
              ;
              LocalPopChoice(l_33);
            }
          else
            {
              t = k_33;
              {
                ATerm z_16 = NULL,a_17 = NULL;
                t = _2_0(z_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    z_16 = ATgetArgument(t, 0);
                    a_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_7(z_16, a_17, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  ATerm n_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_17 = NULL;
      g_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_17, term_q_33);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_33);
    }
  else
    {
      t = n_33;
      t = debug_1_0(j_6, t);
      _fail(t);
    }
  d_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(f_17, t);
  e_17 = t;
  t = d_17;
  t = fclose_0_0(t);
  t = e_17;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_r_33;
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_17 = NULL,j_17 = NULL;
      i_17 = t;
      t = (ATerm) ATinsert(ATempty, term_a_34);
      j_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_17, (ATerm) ATinsert(ATempty, term_a_34));
      t = s_7(i_17, j_17, t);
      LocalPopChoice(x_33);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_33;
      {
        ATerm b_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_34 = t;
            if((PushChoice() == 0))
              {
                ATerm k_17 = NULL,l_17 = NULL;
                k_17 = t;
                t = (ATerm) ATinsert(ATempty, term_e_24);
                l_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_17, (ATerm) ATinsert(ATempty, term_e_24));
                t = s_7(k_17, l_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_34;
              }
            t = debug_1_0(p_6, t);
            ;
            LocalPopChoice(m_34);
          }
        else
          {
            t = b_34;
            t = debug_1_0(q_6, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = debug_1_0(u_6, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = debug_1_0(w_6, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  t = term_y_22;
  z_17 = t;
  t = (ATerm) ATinsert(ATempty, term_s_34);
  a_18 = t;
  t = SSL_printnl(z_17, a_18);
  t = y_17;
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm c_18 = NULL,e_18 = NULL,g_18 = NULL;
  if(match_cons(t, sym__3))
    {
      c_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
      g_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_7(c_18, e_18, g_18, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  t = term_y_22;
  j_18 = t;
  t = (ATerm) ATinsert(ATempty, term_t_34);
  k_18 = t;
  t = SSL_printnl(j_18, k_18);
  t = i_18;
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm l_18 = NULL,o_18 = NULL,p_18 = NULL;
  l_18 = t;
  t = term_y_22;
  o_18 = t;
  t = (ATerm) ATinsert(ATempty, term_s_34);
  p_18 = t;
  t = SSL_printnl(o_18, p_18);
  t = l_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  m_17 = t;
  t = if_verbose5_1_0(t_6, t);
  {
    ATerm a_35 = t;
    if((PushChoice() == 0))
      {
        ATerm w_17 = NULL,x_17 = NULL;
        t = term_b_35;
        w_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, m_17);
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_35, (ATerm) ATmakeAppl(sym_Imported_1, m_17));
        t = z_7(w_17, x_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_35;
      }
    n_17 = t;
    t = term_b_35;
    p_17 = t;
    t = term_e_35;
    q_17 = t;
    t = (ATerm) ATinsert(ATempty, m_17);
    r_17 = t;
    t = SSL_table_put(p_17, q_17, r_17);
    t = n_17;
    t = if_verbose4_1_0(v_6, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(x_6, t);
    o_17 = t;
    t = term_b_35;
    s_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_35, o_17);
    t = p_7(y_6, s_17, o_17, t);
    t = if_verbose6_1_0(z_6, t);
    t = term_b_35;
    t_17 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, m_17);
    u_17 = t;
    t = (ATerm) ATempty;
    v_17 = t;
    t = SSL_table_put(t_17, u_17, v_17);
    t = (ATerm) ATmakeAppl(sym__3, term_b_35, (ATerm)ATmakeAppl(sym_Imported_1, m_17), (ATerm) ATempty);
    t = if_verbose4_1_0(a_7, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm k_35 = t;
        int n_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_7 (ATerm t)
            {
              t = filter_1_0(d_84, t);
              return(t);
            }
            t = Cons_2_0(d_84, f_7, t);
            ;
            LocalPopChoice(n_35);
          }
        else
          {
            t = k_35;
            {
              ATerm t_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_35 = ATgetFirst((ATermList) t);
                  t_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = t_18;
              t = filter_1_0(d_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm v_18 (ATerm t)
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_85(t);
        t = v_18(t);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
      }
    return(t);
  }
  t = v_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_35);
    }
  else
    {
      t = r_35;
      {
        ATerm e_36 = t;
        int f_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_18 = NULL;
            t = term_g_36;
            w_18 = t;
            t = SSL_getenv(w_18);
            ;
            LocalPopChoice(f_36);
          }
        else
          {
            t = e_36;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = debug_1_0(l_7, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_h_36;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  t = term_b_35;
  c_19 = t;
  t = term_i_36;
  d_19 = t;
  t = term_j_36;
  t = z_7(c_19, d_19, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_36 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_36;
      }
  }
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = debug_1_0(e_8, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_p_36;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm x_18 = NULL;
  t = if_verbose5_1_0(h_7, t);
  x_18 = t;
  {
    ATerm q_36 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL,z_18 = NULL;
        t = term_b_35;
        y_18 = t;
        t = term_e_35;
        z_18 = t;
        t = term_c_37;
        t = z_7(y_18, z_18, t);
        ;
        LocalPopChoice(b_37);
      }
    else
      {
        t = q_36;
        {
          ATerm a_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_19 = t;
          t = repeat_1_0(b_8, t);
          t = a_19;
        }
      }
    t = x_18;
    t = if_verbose5_1_0(d_8, t);
  }
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = debug_1_0(k_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm t_20 (ATerm h_19, ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,t_19 = NULL;
  t = term_b_35;
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_19);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_35, (ATerm) ATmakeAppl(sym_Tool_1, h_19));
  t = z_7(l_19, t_19, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_37 = ATgetFirst((ATermList) t);
      if(match_cons(e_37, sym__2))
        {
          ATerm g_37 = ATgetArgument(e_37, 0);
          k_19 = ATgetArgument(e_37, 1);
        }
      else
        _fail(t);
      {
        ATerm f_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_19;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = debug_1_0(p_8, t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_b_35;
  t = table_getlist_0_0(t);
  t = debug_1_0(t_8, t);
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(f_8, t);
      t = xtc_load_0_0(t);
      {
        ATerm u_19 = NULL,w_19 = NULL,x_19 = NULL;
        x_19 = t;
        if(match_cons(t, sym__2))
          {
            u_19 = ATgetArgument(t, 0);
            w_19 = ATgetArgument(t, 1);
            {
              ATerm k_37 = t;
              int l_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_20 = NULL,k_20 = NULL,l_20 = NULL;
                  t = term_b_35;
                  k_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, u_19);
                  l_20 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_b_35, (ATerm) ATmakeAppl(sym_Tool_1, u_19));
                  t = z_7(k_20, l_20, t);
                  {
                    ATerm l_8 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((w_19 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((f_20 != NULL) && (f_20 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            f_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(l_8, t);
                    t = not_null(f_20);
                  }
                  ;
                  LocalPopChoice(l_37);
                }
              else
                {
                  t = k_37;
                  t = t_20(x_19, t);
                }
            }
          }
        else
          {
            t = t_20(x_19, t);
          }
        t = if_verbose5_1_0(o_8, t);
      }
      ;
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      {
        ATerm s_20 = NULL,n_4 = NULL,o_4 = NULL;
        s_20 = t;
        t = term_y_22;
        n_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_37), s_20), term_m_37);
        o_4 = t;
        t = SSL_printnl(n_4, o_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_37), s_20), term_m_37);
        t = if_verbose5_1_0(s_8, t);
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
  ATerm s_21 = NULL,t_21 = NULL;
  s_21 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL;
        t = s_21;
        t = k_0(t);
        d_5 = t;
        {
          ATerm q_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(r_37);
            }
          else
            {
              t = q_37;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_21, d_5);
          t = t_7(t_21, d_5, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, t_21);
        }
        ;
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        {
          ATerm s_37 = t;
          int t_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_5 = NULL;
              t = s_21;
              t = k_0(t);
              m_5 = t;
              {
                ATerm u_37 = t;
                if((PushChoice() == 0))
                  {
                    ATerm v_37 = t;
                    int w_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(w_37);
                      }
                    else
                      {
                        t = v_37;
                        {
                          ATerm x_37 = t;
                          int y_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(y_37);
                            }
                          else
                            {
                              t = x_37;
                              {
                                ATerm n_5 = NULL;
                                n_5 = t;
                                if((t_21 != t))
                                  {
                                    _fail(t);
                                  }
                                t = n_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_37;
                  }
                t = (ATerm) ATmakeAppl(sym__2, t_21, m_5);
                t = t_7(t_21, m_5, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, t_21);
              }
              ;
              LocalPopChoice(t_37);
            }
          else
            {
              t = s_37;
              t = s_21;
              t = k_0(t);
              if((t_21 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_21);
            }
        }
      }
  }
  return(t);
}
ATerm u_7 (ATerm v_45, ATerm w_45, ATerm t)
{
  ATerm x_21 = NULL,a_22 = NULL;
  x_21 = t;
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
        t = z_7(v_45, w_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_38 = ATgetFirst((ATermList) t);
            a_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_38);
        t = SSL_table_put(v_45, w_45, a_22);
        t = (ATerm) ATmakeAppl(sym__3, v_45, w_45, a_22);
      }
    else
      {
        t = z_37;
        t = SSL_table_remove(v_45, w_45);
        t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
      }
    t = x_21;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  b_22 = t;
  t = y_86(t);
  c_22 = t;
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL;
        t = term_m_23;
        p_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_22, term_m_23);
        t = z_7(c_22, p_22, t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_22 = ATgetFirst((ATermList) t);
        l_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_23;
    n_22 = t;
    t = SSL_table_put(c_22, n_22, l_22);
    t = m_22;
    {
      ATerm u_8 (ATerm t)
      {
        ATerm q_22 = NULL;
        q_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_22, q_22);
        t = u_7(c_22, q_22, t);
        return(t);
      }
      t = map_1_0(u_8, t);
      t = b_22;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm t)
{
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_87(t);
      t = u_87(t);
      ;
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      t = u_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  v_22 = t;
  t = x_86(t);
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_22, term_m_23);
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_38 = ATgetArgument(t, 0);
            ATerm j_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_23;
        q_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_22, term_m_23);
        t = z_7(z_22, q_23, t);
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        t = (ATerm) ATempty;
      }
    a_23 = t;
    t = term_m_23;
    b_23 = t;
    t = (ATerm) ATinsert(CheckATermList(a_23), (ATerm) ATempty);
    c_23 = t;
    t = SSL_table_put(z_22, b_23, c_23);
    t = v_22;
  }
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_24 = NULL;
      d_24 = t;
      t = SSL_remove(d_24);
      ;
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm c_90 (ATerm), ATerm t)
{
  ATerm x_23 = NULL;
  t = begin_scope_1_0(w_8, t);
  {
    ATerm x_8 (ATerm t)
    {
      ATerm y_23 = NULL;
      y_23 = t;
      {
        ATerm m_38 = t;
        int n_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_23 = NULL,a_24 = NULL;
            t = term_l_24;
            z_23 = t;
            t = term_m_23;
            a_24 = t;
            t = term_o_38;
            t = z_7(z_23, a_24, t);
            ;
            LocalPopChoice(n_38);
          }
        else
          {
            t = m_38;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((x_23 != NULL) && (x_23 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              x_23 = ATgetFirst((ATermList) t);
            {
              ATerm p_38 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(x_23);
        t = map_1_0(z_8, t);
        t = y_23;
        t = end_scope_1_0(b_9, t);
      }
      return(t);
    }
    t = restore_always_2_0(c_90, x_8, t);
  }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_38);
    }
  else
    {
      t = q_38;
      t = term_q_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm d_90 (ATerm), ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        t = term_r_24;
        t = get_config_0_0(t);
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_24);
        ;
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        t = term_w_27;
      }
    t = d_90(t);
    t = copy_to_1_0(d_9, t);
    return(t);
  }
  t = xtc_temp_files_1_0(c_9, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  g_24 = t;
  t = term_v_23;
  t = whoami_0_0(t);
  h_24 = t;
  t = term_y_22;
  i_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_38), h_24), term_u_38);
  j_24 = t;
  t = SSL_printnl(i_24, j_24);
  t = term_m_14;
  k_24 = t;
  t = SSL_exit(k_24);
  t = g_24;
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  if(match_string(t, "-k"))
    {
      t = m_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_24;
    }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
  o_24 = t;
  t = SSL_string_to_int(o_24);
  p_24 = t;
  t = term_k_25;
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_25, p_24);
  t = c_8(q_24, p_24, t);
  t = o_24;
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_w_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_9, f_9, g_9, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  if(match_string(t, "-S"))
    {
      t = s_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_24;
    }
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  t = term_e_14;
  u_24 = t;
  t = term_x_38;
  v_24 = t;
  t = term_y_38;
  t = c_8(u_24, v_24, t);
  t = term_z_38;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_a_39;
  return(t);
}
ATerm k_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,e_25 = NULL;
  y_24 = t;
  t = SSL_string_to_int(y_24);
  z_24 = t;
  t = term_e_14;
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_14, z_24);
  t = c_8(e_25, z_24, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_24);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm n_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm f_25 = NULL,h_25 = NULL;
  t = term_c_39;
  f_25 = t;
  t = term_v_23;
  h_25 = t;
  t = term_d_39;
  t = c_8(f_25, h_25, t);
  t = term_e_39;
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_f_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_9, i_9, j_9, t);
      ;
      LocalPopChoice(h_39);
    }
  else
    {
      t = g_39;
      {
        ATerm i_39 = t;
        int j_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_9, l_9, m_9, t);
            ;
            LocalPopChoice(j_39);
          }
        else
          {
            t = i_39;
            t = Option_3_0(n_9, o_9, p_9, t);
          }
      }
    }
  return(t);
}
ATerm c_8 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm i_25 = NULL;
  t = term_z_31;
  i_25 = t;
  t = SSL_table_put(i_25, q_47, r_47);
  t = (ATerm) ATmakeAppl(sym__3, term_z_31, q_47, r_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,r_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_25 = NULL,w_25 = NULL,y_25 = NULL;
      t = term_v_23;
      t = d_0(t);
      t_25 = t;
      t = term_k_39;
      w_25 = t;
      t = term_l_39;
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_39, term_l_39, t_25);
      t = a_8(w_25, y_25, t_25, t);
      _fail(t);
    }
  else
    {
      ATerm e_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_25 = ATgetFirst((ATermList) t);
          r_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_25;
      t = a_0(t);
      t = term_v_23;
      t = c_0(t);
      e_26 = t;
      t = (ATerm) ATinsert(CheckATermList(r_25), e_26);
    }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  if(match_string(t, "-o"))
    {
      t = h_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_26;
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm k_26 = NULL,m_26 = NULL;
  k_26 = t;
  t = term_n_24;
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_24, k_26);
  t = c_8(m_26, k_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_26);
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_9, t_9, u_9, t);
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  if(match_string(t, "-i"))
    {
      t = o_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_26;
    }
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  p_26 = t;
  t = term_r_24;
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, p_26);
  t = c_8(q_26, p_26, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_26);
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_n_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_9, s_10, t_10, t);
  return(t);
}
ATerm a_8 (ATerm q_45, ATerm r_45, ATerm p_45, ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_39 = ATgetArgument(t, 0);
            ATerm r_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = z_7(q_45, r_45, t);
        ;
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = (ATerm) ATempty;
      }
    v_26 = t;
    t = (ATerm) ATinsert(CheckATermList(v_26), p_45);
    w_26 = t;
    t = SSL_table_put(q_45, r_45, w_26);
    t = u_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
      t = term_v_23;
      t = j_0(t);
      q_27 = t;
      t = term_k_39;
      r_27 = t;
      t = term_l_39;
      s_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_39, term_l_39, q_27);
      t = a_8(r_27, s_27, q_27, t);
      _fail(t);
    }
  else
    {
      ATerm x_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_27 = ATgetFirst((ATermList) t);
          l_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_27 = ATgetFirst((ATermList) t);
          n_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_27;
      t = h_0(t);
      t = m_27;
      t = i_0(t);
      x_27 = t;
      t = (ATerm) ATinsert(CheckATermList(n_27), x_27);
    }
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  if(match_string(t, "-I"))
    {
      t = z_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = z_27;
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,k_28 = NULL;
  d_28 = t;
  t = term_i_26;
  e_28 = t;
  t = (ATerm) ATinsert(ATempty, d_28);
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_26, (ATerm) ATinsert(ATempty, d_28));
  t = k_7(e_28, k_28, t);
  t = d_28;
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = term_s_39;
  return(t);
}
ATerm b_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  l_28 = t;
  t = term_b_29;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_29, l_28);
  t = c_8(m_28, l_28, t);
  t = l_28;
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_t_39;
  return(t);
}
ATerm i_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
  o_28 = t;
  t = term_e_14;
  p_28 = t;
  t = term_x_38;
  q_28 = t;
  t = term_y_38;
  t = c_8(p_28, q_28, t);
  t = o_28;
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_u_39;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(x_10, y_10, a_11, t);
      ;
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      {
        ATerm x_39 = t;
        int y_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_11, c_11, h_11, t);
            ;
            LocalPopChoice(y_39);
          }
        else
          {
            t = x_39;
            t = Option_3_0(i_11, j_11, k_11, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_23;
  t = whoami_0_0(t);
  r_28 = t;
  t = term_y_22;
  s_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_39), r_28);
  t_28 = t;
  t = SSL_printnl(s_28, t_28);
  t = term_m_14;
  u_28 = t;
  t = SSL_exit(u_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_40;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_7 (ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_43, m_43);
      ;
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      t = SSL_addr(l_43, m_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_83(t);
      ;
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm x_28 = NULL,y_28 = NULL,d_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_28 = ATgetFirst((ATermList) t);
            y_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_28;
        t = foldr_2_0(a_83, b_83, t);
        d_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_28, d_29);
        t = b_83(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_x_38;
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(r_6, s_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_29 = NULL,b_6 = NULL,l_6 = NULL;
  t = times_0_0(t);
  b_6 = t;
  t = SSL_explode_term(b_6);
  if(match_cons(t, sym__2))
    {
      ATerm f_40 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6;
  t = foldr_2_0(m_11, o_11, t);
  g_29 = t;
  t = SSL_TicksToSeconds(g_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  if(match_cons(t, sym__2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_29;
        if((y_29 != t))
          {
            _fail(t);
          }
        t = x_29;
        ;
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        t = (ATerm) ATmakeAppl(sym__2, y_29, z_29);
        {
          ATerm i_40 = t;
          int j_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_29, z_29);
              ;
              LocalPopChoice(j_40);
            }
          else
            {
              t = i_40;
              t = SSL_gtr(y_29, z_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_29, z_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_30 = NULL,i_30 = NULL;
      f_30 = t;
      t = term_e_14;
      t = get_config_0_0(t);
      i_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_30, term_m_14);
      t = geq_0_0(t);
      t = f_30;
      t = f_88(t);
      ;
      LocalPopChoice(l_40);
    }
  else
    {
      t = k_40;
    }
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,r_30 = NULL;
  t = run_time_0_0(t);
  n_30 = t;
  t = term_v_23;
  t = whoami_0_0(t);
  o_30 = t;
  t = term_y_22;
  p_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_40), n_30), term_v_14), o_30);
  r_30 = t;
  t = SSL_printnl(p_30, r_30);
  t = (ATerm) ATmakeAppl(sym__2, term_y_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_40), n_30), term_v_14), o_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_38;
  s_30 = t;
  t = SSL_exit(s_30);
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(o_40);
    }
  else
    {
      t = n_40;
      {
        ATerm p_40 = t;
        int q_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(q_40);
          }
        else
          {
            t = p_40;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_92 (ATerm), ATerm t)
{
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_40);
    }
  else
    {
      t = r_40;
      t = fetch_1_0(y_11, t);
    }
  t = e_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_30 = ATgetFirst((ATermList) t);
      w_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_31 = NULL,h_31 = NULL;
        t = w_30;
        t = g_0(t);
        g_31 = t;
        t = v_30;
        t = e_0(t);
        h_31 = t;
        t = w_30;
        {
          ATerm b_12 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_31), h_31);
            return(t);
          }
          t = reverse_acc_2_0(e_0, b_12, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_23;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm f_69 (ATerm), ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,c_1 = NULL,d_1 = NULL;
  m_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_31);
  j_31 = t;
  t = k_31;
  t = f_69(t);
  l_31 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_31);
  c_1 = t;
  t = SSLsetAnnotations(c_1, j_31);
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_12 (ATerm t)
{
  ATerm u_31 = NULL;
  u_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_31), term_u_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  ATerm v_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_40);
    }
  else
    {
      t = v_40;
      t = fetch_1_0(g_12, t);
    }
  t = term_x_40;
  t = echo_0_0(t);
  t = term_k_39;
  s_31 = t;
  t = term_l_39;
  t_31 = t;
  t = term_y_40;
  t = z_7(s_31, t_31, t);
  t = reverse_acc_2_0(_id, h_12, t);
  t = map_1_0(k_12, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm g_69 (ATerm), ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,e_1 = NULL,f_1 = NULL;
  y_31 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_31);
  v_31 = t;
  t = w_31;
  t = g_69(t);
  x_31 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_31);
  e_1 = t;
  t = SSLsetAnnotations(e_1, v_31);
  return(t);
}
ATerm fetch_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm c_32 (ATerm t)
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_76, _id, t);
        ;
        LocalPopChoice(a_41);
      }
    else
      {
        t = z_40;
        t = Cons_2_0(_id, c_32, t);
      }
    return(t);
  }
  t = c_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  h_32 = t;
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_41 = ATgetFirst((ATermList) t);
                ATerm e_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_32;
          }
        ;
        LocalPopChoice(c_41);
      }
    else
      {
        t = b_41;
        t = (ATerm) ATinsert(ATempty, h_32);
      }
    i_32 = t;
    t = term_q_25;
    j_32 = t;
    t = SSL_printnl(j_32, i_32);
    t = h_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_40;
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
  ATerm u_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  u_32 = t;
  t = n_72(t);
  x_32 = t;
  t = term_y_22;
  y_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_32), x_32);
  z_32 = t;
  t = SSL_printnl(y_32, z_32);
  t = u_32;
  return(t);
}
ATerm map_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm c_33 (ATerm t)
  {
    ATerm f_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_41);
      }
    else
      {
        t = f_41;
        t = Cons_2_0(i_76, c_33, t);
      }
    return(t);
  }
  t = c_33(t);
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_41);
    }
  else
    {
      t = h_41;
    }
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = term_j_41;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_33 = NULL;
      o_33 = t;
      t = SSL_is_string(o_33);
      ;
      LocalPopChoice(l_41);
    }
  else
    {
      t = k_41;
      {
        ATerm m_41 = t;
        int n_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_12, t);
            ;
            LocalPopChoice(n_41);
          }
        else
          {
            t = m_41;
            {
              ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
              s_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_33 = ATgetArgument(t, 0);
                  t = t_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_33 = ATgetArgument(t, 0);
                      t = t_33;
                      {
                        ATerm o_41 = t;
                        int p_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_41);
                          }
                        else
                          {
                            t = o_41;
                            t = debug_1_0(m_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_33 = NULL,z_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_33 = ATgetArgument(t, 0);
                          u_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_33;
                      t = eval_config_0_0(t);
                      y_33 = t;
                      t = u_33;
                      t = eval_config_0_0(t);
                      z_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
                      t = y_7(y_33, z_33, t);
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
  ATerm c_34 = NULL,d_34 = NULL;
  c_34 = t;
  t = term_z_31;
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_31, c_34);
  t = z_7(d_34, c_34, t);
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_34 = NULL,f_34 = NULL;
        t = eval_config_0_0(t);
        e_34 = t;
        t = term_z_31;
        f_34 = t;
        t = SSL_table_put(f_34, c_34, e_34);
        t = e_34;
        ;
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
      }
  }
  return(t);
}
ATerm o_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  t = term_s_41;
  g_34 = t;
  t = term_v_23;
  h_34 = t;
  t = term_t_41;
  t = c_8(g_34, h_34, t);
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = term_u_41;
  return(t);
}
ATerm s_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
  t = term_s_41;
  i_34 = t;
  t = term_v_23;
  j_34 = t;
  t = term_t_41;
  t = c_8(i_34, j_34, t);
  t = term_u_29;
  k_34 = t;
  t = term_v_23;
  l_34 = t;
  t = term_v_41;
  t = c_8(k_34, l_34, t);
  t = term_w_41;
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_x_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_41 = t;
  int z_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_12, q_12, r_12, t);
      ;
      LocalPopChoice(z_41);
    }
  else
    {
      t = y_41;
      t = Option_3_0(s_12, t_12, u_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm t)
{
  ATerm n_34 = NULL,p_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,g_1 = NULL,h_1 = NULL;
  x_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_34 = ATgetFirst((ATermList) t);
      u_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_34);
  n_34 = t;
  t = p_34;
  t = x_63(t);
  v_34 = t;
  t = u_34;
  t = y_63(t);
  w_34 = t;
  h_1 = t;
  t = (ATerm) ATinsert(CheckATermList(w_34), v_34);
  g_1 = t;
  t = SSLsetAnnotations(g_1, n_34);
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  t = term_a_40;
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_40, i_35);
  t = c_8(j_35, i_35, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, i_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm h_35 = NULL;
  h_35 = t;
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_42;
        t = c_94(t);
        ;
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
      }
    t = h_35;
    {
      ATerm x_12 (ATerm t)
      {
        ATerm d_42 = t;
        int e_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_42 = t;
            int g_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(g_42);
              }
            else
              {
                t = f_42;
                t = c_94(t);
                t = Cons_2_0(_id, x_12, t);
              }
            ;
            LocalPopChoice(e_42);
          }
        else
          {
            t = d_42;
            {
              ATerm l_35 = NULL,m_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_35 = ATgetFirst((ATermList) t);
                  m_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_35), (ATerm) ATmakeAppl(sym_Undefined_1, l_35));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_12, x_12, t);
    }
  }
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm a_36 = NULL;
  a_36 = t;
  if(match_string(t, "--help"))
    {
      t = a_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_36;
        }
    }
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  t = term_t_40;
  b_36 = t;
  t = term_v_23;
  c_36 = t;
  t = term_j_42;
  t = c_8(b_36, c_36, t);
  t = term_k_42;
  return(t);
}
ATerm j_13 (ATerm t)
{
  t = term_l_42;
  return(t);
}
ATerm k_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  t_35 = t;
  t = term_k_39;
  w_35 = t;
  t = term_l_39;
  x_35 = t;
  t = (ATerm) ATempty;
  y_35 = t;
  t = SSL_table_put(w_35, x_35, y_35);
  t = t_35;
  {
    ATerm c_13 (ATerm t)
    {
      ATerm m_42 = t;
      int n_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_94(t);
          ;
          LocalPopChoice(n_42);
        }
      else
        {
          t = m_42;
          {
            ATerm o_42 = t;
            int p_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_13, e_13, j_13, t);
                ;
                LocalPopChoice(p_42);
              }
            else
              {
                t = o_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_13, t);
    {
      ATerm q_42 = t;
      int r_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_36 = NULL;
          l_36 = t;
          {
            ATerm s_42 = t;
            int t_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_10 = NULL;
                t = l_36;
                {
                  ATerm u_42 = t;
                  int v_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_t_40;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(v_42);
                    }
                  else
                    {
                      t = u_42;
                      t = fetch_1_0(k_13, t);
                    }
                  t = l_36;
                  t = default_system_usage_0_0(t);
                  t = term_x_38;
                  w_10 = t;
                  t = SSL_exit(w_10);
                }
                ;
                LocalPopChoice(t_42);
              }
            else
              {
                t = s_42;
                {
                  ATerm f_11 = NULL;
                  t = term_s_41;
                  t = get_config_0_0(t);
                  t = l_36;
                  t = default_system_about_0_0(t);
                  t = term_x_38;
                  f_11 = t;
                  t = SSL_exit(f_11);
                }
              }
          }
          ;
          LocalPopChoice(r_42);
        }
      else
        {
          t = q_42;
          {
            ATerm w_42 = t;
            int x_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
                ATerm q_13 (ATerm t)
                {
                  ATerm s_13 (ATerm t)
                  {
                    if(((u_35 != NULL) && (u_35 != t)))
                      _fail(t);
                    else
                      u_35 = t;
                    return(t);
                  }
                  t = Undefined_1_0(s_13, t);
                  return(t);
                }
                t = fetch_1_0(q_13, t);
                t = term_y_22;
                m_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_35)), term_y_42);
                n_36 = t;
                t = SSL_printnl(m_36, n_36);
                t = (ATerm) ATmakeAppl(sym__2, term_y_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_35)), term_y_42));
                t = default_system_usage_0_0(t);
                t = term_m_14;
                o_36 = t;
                t = SSL_exit(o_36);
                ;
                LocalPopChoice(x_42);
              }
            else
              {
                t = w_42;
              }
          }
        }
      v_35 = t;
      t = term_k_39;
      z_35 = t;
      t = SSL_table_destroy(z_35);
      t = v_35;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
  t = parse_options_1_0(g_92, t);
  r_36 = t;
  t = term_z_42;
  s_36 = t;
  t = SSL_table_create(s_36);
  t = term_z_42;
  t_36 = t;
  t = term_a_43;
  u_36 = t;
  t = SSL_table_put(t_36, u_36, r_36);
  t = r_36;
  t = i_92(t);
  {
    ATerm b_43 = t;
    int c_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_92, t);
        ;
        LocalPopChoice(c_43);
      }
    else
      {
        t = b_43;
        {
          ATerm d_43 = t;
          int e_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_43);
            }
          else
            {
              t = d_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm f_43 = t;
  int g_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_stratego_options_0_0(t);
      ;
      LocalPopChoice(g_43);
    }
  else
    {
      t = f_43;
      {
        ATerm h_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(i_43);
          }
        else
          {
            t = h_43;
            {
              ATerm j_43 = t;
              int k_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(k_43);
                }
              else
                {
                  t = j_43;
                  {
                    ATerm n_43 = t;
                    int o_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_13, z_13, b_14, t);
                        ;
                        LocalPopChoice(o_43);
                      }
                    else
                      {
                        t = n_43;
                        {
                          ATerm p_43 = t;
                          int q_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(q_43);
                            }
                          else
                            {
                              t = p_43;
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
ATerm x_13 (ATerm t)
{
  t = xtc_io_1_0(d_14, t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  t = term_t_43;
  v_36 = t;
  t = term_v_23;
  w_36 = t;
  t = term_u_43;
  t = c_8(v_36, w_36, t);
  t = term_v_43;
  return(t);
}
ATerm b_14 (ATerm t)
{
  t = term_w_43;
  return(t);
}
ATerm d_14 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  x_36 = t;
  t = term_x_43;
  t = xtc_find_path_0_0(t);
  y_36 = t;
  t = term_i_26;
  z_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_36), term_y_43);
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_26, (ATerm) ATinsert(ATinsert(ATempty, y_36), term_y_43));
  t = k_7(z_36, a_37, t);
  t = x_36;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_13, default_usage_0_0, _id, x_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
