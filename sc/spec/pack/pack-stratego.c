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
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Path_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_b_43;
ATerm term_a_43;
ATerm term_v_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_y_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_s_40;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_f_38;
ATerm term_r_37;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_f_36;
ATerm term_f_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_x_33;
ATerm term_p_33;
ATerm term_x_32;
ATerm term_y_31;
ATerm term_m_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_u_28;
ATerm term_b_28;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_m_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_t_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_l_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
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
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_b_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_h_11;
ATerm term_u_10;
ATerm term_t_10;
void init_constant_terms (void)
{
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_f_14, term_s_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_x_15, term_z_15);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_m_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_r_16, term_s_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_z_16, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_d_17, term_e_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_x_17, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_b_18, term_c_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_g_18, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_r_18, term_t_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_x_18, term_y_18);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_o_19, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_b_20, term_i_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_20, term_m_20, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_20, term_c_21, term_d_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_21, term_g_21, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_21, term_k_21, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_21, term_q_21, term_r_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_21, term_u_21, term_w_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_22, term_d_22, term_e_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_22, term_h_22, term_i_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_22, term_t_22, term_u_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_22, term_x_22, term_a_23);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_23, term_d_23, term_f_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_23, term_i_23, term_j_23);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_23, term_p_23, term_t_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_23, term_c_24, term_d_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_24, term_r_24, term_s_24);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_38);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym__3, term_r_39, term_p_41, term_z_30);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm b_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm p_107 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm s_0 (ATerm);
ATerm v_0 (ATerm);
ATerm basename_1_0 (ATerm x_103 (ATerm), ATerm);
ATerm at_suffix_rev_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_94 (ATerm), ATerm);
ATerm z_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm Imports_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm _2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm);
ATerm filter_1_0 (ATerm e_102 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm w_108 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm v_108 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm x_108 (ATerm), ATerm);
ATerm union_1_0 (ATerm d_99 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm h_113 (ATerm), ATerm);
ATerm p_10 (ATerm j_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm repeat_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm l_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm assert_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm w_12 (ATerm k_12, ATerm);
ATerm z_12 (ATerm m_12, ATerm n_12, ATerm q_12, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm u_108 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm find_module_1_0 (ATerm n_87 (ATerm), ATerm);
ATerm get_module_1_0 (ATerm m_87 (ATerm), ATerm);
ATerm diff_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm d_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm);
ATerm for_3_0 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm e_89 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm a_5 (ATerm);
ATerm pack_stratego_modules_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm t_105 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm f_116 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm xtc_io_1_0 (ATerm g_116 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_7 (ATerm);
ATerm r_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_108 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm n_110 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm l_79 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_95 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm i_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm e_113 (ATerm), ATerm);
ATerm n_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm parse_options_1_0 (ATerm d_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm e_9 (ATerm);
ATerm m_9 (ATerm);
ATerm y_8 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_1 = ATgetArgument(t, 0);
      if(match_cons(c_1, sym_Stream_1))
        {
          p_0 = ATgetArgument(c_1, 0);
        }
      else
        _fail(t);
      q_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(p_0, q_0);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_0);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm f_0 = NULL,o_0 = NULL;
  f_0 = t;
  t = xtc_new_file_0_0(t);
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_0, f_0);
  t = WriteToFile_1_0(b_0, t);
  t = SSL_close_file(o_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_0);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL;
  if(match_cons(t, sym__2))
    {
      w_0 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_0;
  {
    ATerm r_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = r_9;
        {
          ATerm n_0 (ATerm t)
          {
            ATerm w_9 = t;
            int y_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(y_9);
              }
            else
              {
                t = w_9;
                {
                  ATerm y_0 = NULL;
                  t = Cons_2_0(_id, n_0, t);
                  y_0 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_0), w_0);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, n_0, t);
        }
      }
  }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL;
  d_1 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = eval_config_0_0(t);
        u_0 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_0);
        t = u_0;
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
      }
    {
      ATerm e_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue)));
          {
            ATerm h_10 = t;
            int i_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_1 = NULL;
                t = eval_config_0_0(t);
                b_1 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue)), b_1);
                t = b_1;
                ;
                LocalPopChoice(i_10);
              }
            else
              {
                t = h_10;
              }
          }
          ;
          LocalPopChoice(g_10);
        }
      else
        {
          t = e_10;
          {
            ATerm k_10 = t;
            if((PushChoice() == 0))
              {
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue)));
                {
                  ATerm l_10 = t;
                  int o_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_1 = NULL;
                      t = eval_config_0_0(t);
                      p_1 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue)), p_1);
                      t = p_1;
                      ;
                      LocalPopChoice(o_10);
                    }
                  else
                    {
                      t = l_10;
                    }
                }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_10;
              }
          }
        }
      e_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_t_10), e_1);
      t = concat_strings_0_0(t);
      g_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_1, term_h_11);
      t = open_file_0_0(t);
      h_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(CheckATermList(d_1), term_u_11));
      t = separate_by_0_0(t);
      i_1 = t;
      t = SSL_printnl(h_1, (ATerm) ATinsert(CheckATermList(i_1), e_1));
      t = SSL_close_file(h_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_1);
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      j_1 = ATgetArgument(t, 0);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_1, term_h_11);
  t = open_stream_0_0(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_1, k_1);
  t = p_107(t);
  t = fclose_0_0(t);
  t = k_1;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm x_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      if(match_cons(v_11, sym_Stream_1))
        {
          x_1 = ATgetArgument(v_11, 0);
        }
      else
        _fail(t);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(x_1, z_1);
  a_2 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), a_2);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_2);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm n_1 = NULL,q_1 = NULL;
  n_1 = t;
  t = xtc_new_file_0_0(t);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, n_1);
  t = WriteToFile_1_0(r_0, t);
  t = SSL_close_file(q_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
  return(t);
}
ATerm s_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL;
  o_2 = t;
  t = SSL_explode_string(o_2);
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_2 (ATerm t)
        {
          ATerm z_11 = t;
          int g_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, q_2, t);
              ;
              LocalPopChoice(g_12);
            }
          else
            {
              t = z_11;
              {
                ATerm h_12 = t;
                int i_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(s_0, _id, t);
                    ;
                    LocalPopChoice(i_12);
                  }
                else
                  {
                    t = h_12;
                    t = Cons_2_0(v_0, x_103, t);
                    t = (ATerm) ATempty;
                  }
              }
            }
          return(t);
        }
        t = q_2(t);
        ;
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
      }
    p_2 = t;
    t = SSL_implode_string(p_2);
  }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm j_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, s_2, t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = j_12;
        t = y_95(t);
      }
    return(t);
  }
  t = s_2(t);
  return(t);
}
ATerm map_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm o_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = o_12;
        t = Cons_2_0(z_94, w_2, t);
      }
    return(t);
  }
  t = w_2(t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm s_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = s_12;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 = NULL;
      m_3 = t;
      t = SSL_is_string(m_3);
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = a_13;
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_0, t);
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            {
              ATerm r_3 = NULL,s_3 = NULL,u_3 = NULL;
              r_3 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_3 = ATgetArgument(t, 0);
                  t = s_3;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_3 = ATgetArgument(t, 0);
                      t = s_3;
                      {
                        ATerm l_13 = t;
                        int m_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_3);
                            {
                              ATerm o_13 = t;
                              int p_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_2 = NULL;
                                  t = eval_config_0_0(t);
                                  n_2 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_3, n_2);
                                  t = n_2;
                                  ;
                                  LocalPopChoice(p_13);
                                }
                              else
                                {
                                  t = o_13;
                                }
                            }
                            ;
                            LocalPopChoice(m_13);
                          }
                        else
                          {
                            t = l_13;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_3), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = s_3;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_3 = NULL,z_3 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_3 = ATgetArgument(t, 0);
                          u_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_3;
                      t = eval_config_0_0(t);
                      y_3 = t;
                      t = u_3;
                      t = eval_config_0_0(t);
                      z_3 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_3, z_3);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Imports_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL;
  i_4 = t;
  if(match_cons(t, sym_Imports_1))
    {
      f_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_4);
  e_4 = t;
  t = f_4;
  t = d_80(t);
  g_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, g_4), e_4);
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm m_4 = NULL;
  ATerm a_1 (ATerm t)
  {
    ATerm n_4 = NULL;
    ATerm f_1 (ATerm t)
    {
      ATerm q_13 = t;
      if((PushChoice() == 0))
        {
          t = Imports_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_13;
        }
      return(t);
    }
    if(match_cons(t, sym_Specification_1))
      {
        if(((n_4 != NULL) && (n_4 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          n_4 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(n_4);
    t = filter_1_0(f_1, t);
    return(t);
  }
  t = map_1_0(a_1, t);
  t = concat_0_0(t);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_4);
  return(t);
}
ATerm _2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,u_4 = NULL,w_4 = NULL;
  w_4 = t;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_4);
  o_4 = t;
  t = p_4;
  t = i_69(t);
  r_4 = t;
  t = q_4;
  t = j_69(t);
  u_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_4, u_4), o_4);
  return(t);
}
ATerm genzip_4_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm r_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_97(t);
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = r_13;
        t = e_97(t);
        t = _2_0(g_97, b_5, t);
        t = f_97(t);
      }
    return(t);
  }
  t = b_5(t);
  return(t);
}
ATerm filter_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = filter_1_0(e_102, t);
              return(t);
            }
            t = Cons_2_0(e_102, l_1, t);
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            {
              ATerm g_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_13 = ATgetFirst((ATermList) t);
                  g_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = g_5;
              t = filter_1_0(e_102, t);
            }
          }
      }
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  p_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = p_5;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          q_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(q_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,f_6 = NULL;
  t = term_a_14;
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
        {
          ATerm d_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_3 = NULL;
              t = eval_config_0_0(t);
              i_3 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), i_3);
              t = i_3;
              ;
              LocalPopChoice(e_14);
            }
          else
            {
              t = d_14;
            }
        }
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = term_f_14;
      }
    z_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_5, term_f_14);
    {
      ATerm g_14 = t;
      int h_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(z_5, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(h_14);
        }
      else
        {
          t = g_14;
          t = SSL_subtr(z_5, (ATerm) ATmakeInt(1));
        }
      f_6 = t;
      t = SSL_int_to_string(f_6);
      a_6 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, a_6), term_a_14);
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  t = term_i_14;
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm l_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_3 = NULL;
              t = eval_config_0_0(t);
              t_3 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_3);
              t = t_3;
              ;
              LocalPopChoice(o_14);
            }
          else
            {
              t = l_14;
            }
        }
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        t = term_f_14;
      }
    g_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_6, term_f_14);
    {
      ATerm p_14 = t;
      int u_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(g_6, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(u_14);
        }
      else
        {
          t = p_14;
          t = SSL_subtr(g_6, (ATerm) ATmakeInt(1));
        }
      i_6 = t;
      t = SSL_int_to_string(i_6);
      h_6 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, h_6), term_i_14);
    }
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(c_117, d_117, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_7 = ATgetArgument(t, 0);
      {
        ATerm t_4 = NULL;
        t = SSL_int_to_string(o_7);
        t_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_14), t_4), term_v_14);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm s_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_7 = ATgetArgument(t, 0);
          p_7 = ATgetArgument(t, 1);
          q_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(p_7);
      s_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_7), term_b_15), s_5), term_a_15), o_7);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm t_7 = NULL;
  t_7 = t;
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_24), term_f_24), term_x_23), term_l_23), term_g_23), term_b_23), term_v_22), term_o_22), term_f_22), term_a_22), term_s_21), term_m_21), term_i_21), term_e_21), term_o_20), term_k_20), term_q_19), term_l_19), term_u_18), term_m_18), term_d_18), term_z_17), term_i_17), term_b_17), term_t_16), term_p_16), term_a_16), term_t_15);
        {
          ATerm o_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm u_24 = ATgetArgument(t, 0);
                if((t_7 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm v_24 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(o_1, t);
        }
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, t_7);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL,d_6 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_25 = ATgetArgument(t, 0);
            c_8 = ATgetArgument(t, 1);
            {
              ATerm d_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_8;
        {
          ATerm f_25 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_25;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          d_6 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATinsert(ATempty, d_6), term_h_25));
        }
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
      }
    t = w_7;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  g_8 = t;
  t = fork_0_0(t);
  h_8 = t;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_8;
        t = k_109(t);
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = SSL_waitpid(h_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_25 = ATgetArgument(t, 0);
            if(((ATgetType(n_25) != AT_INT) || (ATgetInt((ATermInt) n_25) != 0)))
              _fail(t);
            {
              ATerm o_25 = ATgetArgument(t, 1);
            }
            {
              ATerm p_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_8;
      }
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_8 = NULL,o_8 = NULL;
      m_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_6 = NULL;
            t = eval_config_0_0(t);
            n_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_6);
            t = n_6;
            ;
            LocalPopChoice(y_25);
          }
        else
          {
            t = t_25;
          }
        o_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_8, term_i_23);
        t = geq_0_0(t);
        t = m_8;
        t = w_108(t);
      }
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_108 (ATerm), ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_8 = NULL,u_8 = NULL;
      s_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_6 = NULL;
            t = eval_config_0_0(t);
            t_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_6);
            t = t_6;
            ;
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
          }
        u_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_8, term_o_19);
        t = geq_0_0(t);
        t = s_8;
        t = v_108(t);
      }
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 = NULL,x_8 = NULL;
      v_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 = NULL;
            t = eval_config_0_0(t);
            x_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_6);
            t = x_6;
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = o_26;
          }
        x_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_8, term_r_16);
        t = geq_0_0(t);
        t = v_8;
        t = x_108(t);
      }
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
    }
  return(t);
}
ATerm union_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9;
  {
    ATerm d_9 (ATerm t)
    {
      ATerm s_26 = t;
      int u_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_9;
          ;
          LocalPopChoice(u_26);
        }
      else
        {
          t = s_26;
          {
            ATerm v_26 = t;
            int x_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_6 = NULL,z_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_6 = ATgetFirst((ATermList) t);
                    z_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_9;
                {
                  ATerm r_1 (ATerm t)
                  {
                    ATerm a_7 = NULL;
                    a_7 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_6, a_7);
                    t = d_99(t);
                    return(t);
                  }
                  t = fetch_1_0(r_1, t);
                  t = z_6;
                  t = d_9(t);
                }
                ;
                LocalPopChoice(x_26);
              }
            else
              {
                t = v_26;
                t = Cons_2_0(_id, d_9, t);
              }
          }
        }
      return(t);
    }
    t = d_9(t);
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      if((s_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym__3))
    {
      g_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
      j_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_9, h_9);
  {
    ATerm y_26 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_27 = ATgetArgument(t, 0);
            ATerm d_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_9, h_9);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATempty;
      }
    k_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_9, j_9);
    t = union_1_0(s_1, t);
    l_9 = t;
    t = SSL_table_put(g_9, h_9, l_9);
    t = (ATerm) ATmakeAppl(sym__3, g_9, h_9, j_9);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm h_113 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,x_9 = NULL;
  if(match_cons(t, sym__2))
    {
      x_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm z_9 = NULL,a_10 = NULL;
      if(match_cons(t, sym__2))
        {
          z_9 = ATgetArgument(t, 0);
          a_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, x_9, z_9, a_10);
      t = h_113(t);
      return(t);
    }
    t = map_1_0(t_1, t);
  }
  return(t);
}
ATerm p_10 (ATerm j_10, ATerm t)
{
  t = SSL_fclose(j_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_10 = ATgetArgument(t, 0);
      {
        ATerm e_27 = t;
        int f_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_10);
            ;
            LocalPopChoice(f_27);
          }
        else
          {
            t = e_27;
            t = p_10(n_10, t);
          }
      }
    }
  else
    {
      t = p_10(n_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_10 = NULL;
  t = SSL_stdin_stream();
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  t = SSL_stdout_stream();
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = SSL_stderr_stream();
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_10);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm y_10 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      y_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_10;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  t = SSL_is_string(c_11);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_27 = ATgetArgument(t, 0);
      ATerm k_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_9 = NULL,i_9 = NULL;
        f_9 = t;
        t = SSL_explode_term(f_9);
        if(match_cons(t, sym__2))
          {
            ATerm p_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_27) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_27 = ATgetArgument(t, 1);
              if(((ATgetType(s_27) == AT_LIST) && !(ATisEmpty(s_27))))
                {
                  i_9 = ATgetFirst((ATermList) s_27);
                  {
                    ATerm v_27 = (ATerm) ATgetNext((ATermList) s_27);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_9;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_9;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_9;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_9;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = l_27;
        {
          ATerm w_27 = t;
          int x_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
              t = _2_0(u_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  v_10 = ATgetArgument(t, 0);
                  w_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(v_10, w_10);
              x_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, x_10);
              ;
              LocalPopChoice(x_27);
            }
          else
            {
              t = w_27;
              {
                ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
                t = _2_0(v_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    z_10 = ATgetArgument(t, 0);
                    a_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(z_10, a_11);
                b_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, b_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_11 = NULL;
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_11, term_b_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm n_9 = NULL;
        n_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = n_9;
        _fail(t);
      }
    }
  d_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(f_11);
  e_11 = t;
  t = d_11;
  t = fclose_0_0(t);
  t = e_11;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL;
      i_11 = t;
      t = SSL_access(i_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(f_28);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_28;
      {
        ATerm g_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_9 = NULL;
            ATerm l_28 = t;
            if((PushChoice() == 0))
              {
                ATerm j_11 = NULL;
                j_11 = t;
                t = SSL_access(j_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_28;
              }
            t_9 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = t_9;
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = g_28;
            {
              ATerm b_10 = NULL;
              b_10 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_10), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = b_10;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_10), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = f_10;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_12), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = c_12;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = n_11;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = o_11;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = p_11;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
  k_11 = t;
  t = if_verbose5_1_0(w_1, t);
  {
    ATerm n_28 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, k_11));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_28;
      }
    l_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, k_11));
    t = l_11;
    t = if_verbose4_1_0(y_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(c_2, t);
    m_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_28, m_11);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(d_2, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, k_11), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_u_28, (ATerm)ATmakeAppl(sym_Imported_1, k_11), (ATerm) ATempty);
    t = if_verbose4_1_0(e_2, t);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm q_11 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_88(t);
        t = q_11(t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
      }
    return(t);
  }
  t = q_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_12 = NULL;
            t = eval_config_0_0(t);
            p_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), p_12);
            t = p_12;
            ;
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
          }
      }
      ;
      LocalPopChoice(a_29);
    }
  else
    {
      t = y_28;
      {
        ATerm f_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(m_29);
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
ATerm f_2 (ATerm t)
{
  ATerm x_12 = NULL;
  x_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_12), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = x_12;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_29 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_29;
      }
  }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_13), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = j_13;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_11 = NULL;
  t = if_verbose5_1_0(f_2, t);
  r_11 = t;
  {
    ATerm r_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = r_29;
        {
          ATerm s_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_11 = t;
          t = repeat_1_0(g_2, t);
          t = s_11;
        }
      }
    t = r_11;
    t = if_verbose5_1_0(h_2, t);
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_13), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = t_13;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_16), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = h_16;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm n_19 = NULL,t_19 = NULL;
  n_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), n_19);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_19, t_19);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm u_19 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(m_2, t);
  u_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_19), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = u_19;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm y_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_14 = NULL,y_14 = NULL,z_14 = NULL;
            if(match_cons(t, sym__2))
              {
                w_14 = ATgetArgument(t, 0);
                y_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, w_14));
            {
              ATerm j_2 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((y_14 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((z_14 != NULL) && (z_14 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(j_2, t);
              t = not_null(z_14);
            }
            ;
            LocalPopChoice(z_29);
          }
        else
          {
            t = y_29;
            {
              ATerm c_15 = NULL,u_15 = NULL;
              c_15 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, c_15));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_30 = ATgetFirst((ATermList) t);
                  if(match_cons(e_30, sym__2))
                    {
                      ATerm g_30 = ATgetArgument(e_30, 0);
                      u_15 = ATgetArgument(e_30, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm f_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = u_15;
            }
          }
        t = if_verbose5_1_0(k_2, t);
      }
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm w_11 = NULL;
        w_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), w_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_30), w_11), term_h_30);
        t = if_verbose5_1_0(l_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm assert_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_105(t);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_12, a_12, b_12);
  t = table_push_0_0(t);
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(d_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_12 = ATgetFirst((ATermList) t);
        f_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(d_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(f_12), (ATerm) ATinsert(CheckATermList(e_12), a_12)));
    t = (ATerm) ATmakeAppl(sym__2, a_12, b_12);
  }
  return(t);
}
ATerm w_12 (ATerm k_12, ATerm t)
{
  t = k_12;
  {
    ATerm n_30 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_30 = ATgetArgument(t, 0);
            ATerm s_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_30;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, k_12, term_h_11);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm z_12 (ATerm m_12, ATerm n_12, ATerm q_12, ATerm t)
{
  t = SSL_open_file(m_12, n_12);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  if(match_cons(t, sym__2))
    {
      u_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_12(t_12, t);
            ;
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            t = z_12(u_12, v_12, t_12, t);
          }
      }
    }
  else
    {
      t = w_12(t_12, t);
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  t = SSL_explode_string(c_13);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm d_13 = NULL;
  d_13 = t;
  t = SSL_explode_string(d_13);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm b_13 = NULL;
  t = _2_0(r_2, t_2, t);
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_13 = NULL,g_13 = NULL;
        if(match_cons(t, sym__2))
          {
            f_13 = ATgetArgument(t, 0);
            g_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_13;
        {
          ATerm u_2 (ATerm t)
          {
            t = g_13;
            return(t);
          }
          t = at_end_1_0(u_2, t);
        }
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm y_21 = NULL,b_22 = NULL;
          y_21 = t;
          t = SSL_explode_term(y_21);
          if(match_cons(t, sym__2))
            {
              ATerm y_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_30) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_22;
          t = concat_0_0(t);
        }
      }
    b_13 = t;
    t = SSL_implode_string(b_13);
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
  ATerm k_13 = NULL;
  t = term_z_30;
  t = new_0_0(t);
  k_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_13, term_a_31);
  t = conc_strings_0_0(t);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_13 = NULL;
        n_13 = t;
        t = SSL_access(n_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
      }
  }
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_d_31;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_13 = NULL;
  t = new_file_0_0(t);
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_13, term_h_11);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, s_13, term_z_30);
  t = assert_1_0(v_2, t);
  t = s_13;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_24 = NULL,l_24 = NULL,c_26 = NULL,d_26 = NULL;
      t = m_14;
      t = xtc_new_file_0_0(t);
      i_24 = t;
      t = m_0(t);
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_24, (ATerm) ATinsert(ATinsert(ATempty, i_24), term_e_31));
      {
        ATerm f_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm i_31 = ATgetArgument(t, 0);
                ATerm j_31 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_24;
            {
              ATerm x_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, i_24), term_e_31);
                return(t);
              }
              t = at_end_1_0(x_2, t);
            }
            ;
            LocalPopChoice(h_31);
          }
        else
          {
            t = f_31;
            {
              ATerm b_26 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, l_24, (ATerm) ATinsert(ATinsert(ATempty, i_24), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm l_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_31) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  b_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_26;
              t = concat_0_0(t);
            }
          }
        c_26 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_26, c_26);
        {
          ATerm y_2 (ATerm t)
          {
            t = SSL_execvp(d_26, c_26);
            return(t);
          }
          t = fork_and_wait_1_0(y_2, t);
          t = SSL_close_file(i_24);
          t = (ATerm) ATmakeAppl(sym_FILE_1, i_24);
        }
      }
    }
  else
    {
      ATerm z_26 = NULL,a_27 = NULL,s_28 = NULL,t_28 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_14;
      t = xtc_new_file_0_0(t);
      z_26 = t;
      t = m_0(t);
      a_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_26), term_e_31), n_14), term_m_31));
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm r_31 = ATgetArgument(t, 0);
                ATerm v_31 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_27;
            {
              ATerm z_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_26), term_e_31), n_14), term_m_31);
                return(t);
              }
              t = at_end_1_0(z_2, t);
            }
            ;
            LocalPopChoice(q_31);
          }
        else
          {
            t = p_31;
            {
              ATerm o_28 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, a_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_26), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), n_14), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm w_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_31) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  o_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_28;
              t = concat_0_0(t);
            }
          }
        s_28 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        t_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_28, s_28);
        {
          ATerm a_3 (ATerm t)
          {
            t = SSL_execvp(t_28, s_28);
            return(t);
          }
          t = fork_and_wait_1_0(a_3, t);
          t = SSL_close_file(z_26);
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_26);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  t_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_14);
  q_14 = t;
  t = r_14;
  t = o_79(t);
  s_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, s_14), q_14);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm x_31 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_31;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  e_15 = t;
  t = pass_verbose_0_0(t);
  f_15 = t;
  t = e_15;
  t = pass_keep_0_0(t);
  g_15 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
  {
    ATerm z_31 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_30 = NULL;
        t = eval_config_0_0(t);
        m_30 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), m_30);
        t = m_30;
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = z_31;
      }
    h_15 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_15), g_15), f_15);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
  i_15 = t;
  t = pass_verbose_0_0(t);
  j_15 = t;
  t = i_15;
  t = pass_keep_0_0(t);
  k_15 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_30 = NULL;
        t = eval_config_0_0(t);
        t_30 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), t_30);
        t = t_30;
        ;
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
      }
    l_15 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_15), k_15), j_15);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_15 = NULL,o_29 = NULL,x_29 = NULL;
      ATerm c_3 (ATerm t)
      {
        if(((d_15 != NULL) && (d_15 != t)))
          _fail(t);
        else
          d_15 = t;
        return(t);
      }
      t = _2_0(b_3, c_3, t);
      o_29 = t;
      t = SSL_explode_term(o_29);
      if(match_cons(t, sym__2))
        {
          ATerm h_32 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) h_32) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm j_32 = ATgetArgument(t, 1);
            if(((ATgetType(j_32) == AT_LIST) && !(ATisEmpty(j_32))))
              {
                ATerm k_32 = ATgetFirst((ATermList) j_32);
                ATerm l_32 = (ATerm) ATgetNext((ATermList) j_32);
                if(((ATgetType(l_32) == AT_LIST) && !(ATisEmpty(l_32))))
                  {
                    x_29 = ATgetFirst((ATermList) l_32);
                    {
                      ATerm n_32 = (ATerm) ATgetNext((ATermList) l_32);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = x_29;
      {
        ATerm o_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_32 = t;
            int t_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_32 = t;
                int w_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(w_32);
                  }
                else
                  {
                    t = v_32;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(t_32);
                t = xtc_transform_file_2_0(d_3, e_3, t);
              }
            else
              {
                t = s_32;
                t = xtc_transform_term_2_0(f_3, g_3, t);
              }
            t = read_from_0_0(t);
            ;
            LocalPopChoice(r_32);
          }
        else
          {
            t = o_32;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_15)), (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_15)), term_x_32);
          }
      }
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
        ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,g_31 = NULL;
        p_15 = t;
        if(match_cons(t, sym__2))
          {
            q_15 = ATgetArgument(t, 0);
            r_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_15;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        t = SSL_explode_term(p_15);
        if(match_cons(t, sym__2))
          {
            ATerm y_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_32 = ATgetArgument(t, 1);
              if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
                {
                  ATerm c_33 = ATgetFirst((ATermList) z_32);
                  ATerm d_33 = (ATerm) ATgetNext((ATermList) z_32);
                  if(((ATgetType(d_33) == AT_LIST) && !(ATisEmpty(d_33))))
                    {
                      g_31 = ATgetFirst((ATermList) d_33);
                      {
                        ATerm e_33 = (ATerm) ATgetNext((ATermList) d_33);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_31;
        {
          ATerm g_33 = t;
          int h_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = read_from_0_0(t);
              ;
              LocalPopChoice(h_33);
            }
          else
            {
              t = g_33;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_15), (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATinsert(ATempty, r_15), term_x_32);
            }
        }
      }
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_15 = NULL,y_15 = NULL;
      w_15 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm k_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_31 = NULL;
            t = eval_config_0_0(t);
            k_31 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_31);
            t = k_31;
            ;
            LocalPopChoice(l_33);
          }
        else
          {
            t = k_33;
          }
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, term_j_16);
        t = geq_0_0(t);
        t = w_15;
        t = u_108(t);
      }
      ;
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  t = SSL_explode_string(c_16);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm b_16 = NULL;
  t = map_1_0(h_3, t);
  t = concat_0_0(t);
  b_16 = t;
  t = SSL_implode_string(b_16);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm d_16 = NULL;
  ATerm j_3 (ATerm t)
  {
    t = m_95(t);
    if(((d_16 != NULL) && (d_16 != t)))
      _fail(t);
    else
      d_16 = t;
    return(t);
  }
  t = fetch_1_0(j_3, t);
  t = not_null(d_16);
  return(t);
}
ATerm find_module_1_0 (ATerm n_87 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_87(t);
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_3 (ATerm t)
        {
          ATerm g_16 = NULL;
          ATerm l_3 (ATerm t)
          {
            ATerm k_16 = NULL,l_16 = NULL,n_16 = NULL;
            k_16 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_16), term_t_10), f_16), term_p_33), not_null(g_16));
            t = concat_strings_0_0(t);
            n_16 = t;
            t = SSL_access(n_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
            l_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_16, (ATerm) ATmakeAppl(sym_FILE_1, l_16));
            return(t);
          }
          if(((g_16 != NULL) && (g_16 != t)))
            _fail(t);
          else
            g_16 = t;
          t = e_16;
          t = fetch_elem_1_0(l_3, t);
          return(t);
        }
        t = fetch_elem_1_0(k_3, t);
        ;
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        {
          ATerm r_33 = t;
          int s_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_16;
              {
                ATerm n_3 (ATerm t)
                {
                  ATerm o_16 = NULL,n_31 = NULL,o_31 = NULL;
                  o_16 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_16), term_t_10), f_16);
                  t = concat_strings_0_0(t);
                  n_31 = t;
                  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, n_31));
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm t_33 = ATgetFirst((ATermList) t);
                      if(match_cons(t_33, sym__2))
                        {
                          ATerm w_33 = ATgetArgument(t_33, 0);
                          o_31 = ATgetArgument(t_33, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm v_33 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, o_16, (ATerm) ATmakeAppl(sym_FILE_1, o_31));
                  return(t);
                }
                t = fetch_elem_1_0(n_3, t);
              }
              ;
              LocalPopChoice(s_33);
            }
          else
            {
              t = r_33;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue))), f_16), (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_33), f_16), term_x_33);
            }
        }
      }
  }
  return(t);
}
ATerm get_module_1_0 (ATerm m_87 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,x_16 = NULL;
  t = basename_1_0(_id, t);
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_28), term_f_34), term_b_34), term_a_34));
  t = find_module_1_0(m_87, t);
  if(match_cons(t, sym__2))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      ATerm j_34 = ATgetArgument(t, 1);
      if(match_cons(j_34, sym_FILE_1))
        {
          v_16 = ATgetArgument(j_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm o_3 (ATerm t)
    {
      ATerm y_16 = NULL;
      y_16 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_16), (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue))));
      t = y_16;
      return(t);
    }
    t = if_verbose3_1_0(o_3, t);
    t = parse_module_0_0(t);
    x_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_16, x_16);
  }
  return(t);
}
ATerm diff_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_17;
  {
    ATerm h_17 (ATerm t)
    {
      ATerm k_34 = t;
      int l_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(l_34);
        }
      else
        {
          t = k_34;
          {
            ATerm m_34 = t;
            int n_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_31 = NULL,t_31 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_31 = ATgetFirst((ATermList) t);
                    t_31 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_17;
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm u_31 = NULL;
                    u_31 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_31, u_31);
                    t = z_98(t);
                    return(t);
                  }
                  t = fetch_1_0(p_3, t);
                  t = t_31;
                  t = h_17(t);
                }
                ;
                LocalPopChoice(n_34);
              }
            else
              {
                t = m_34;
                t = Cons_2_0(_id, h_17, t);
              }
          }
        }
      return(t);
    }
    t = h_17(t);
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_34 = ATgetArgument(t, 0);
      if(((ATgetType(o_34) != AT_LIST) || !(ATisEmpty(o_34))))
        _fail(t);
      {
        ATerm p_34 = ATgetArgument(t, 1);
        if(((ATgetType(p_34) != AT_LIST) || !(ATisEmpty(p_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      if(((ATgetType(q_34) == AT_LIST) && !(ATisEmpty(q_34))))
        {
          r_17 = ATgetFirst((ATermList) q_34);
          t_17 = (ATerm) ATgetNext((ATermList) q_34);
        }
      else
        _fail(t);
      {
        ATerm r_34 = ATgetArgument(t, 1);
        if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
          {
            s_17 = ATgetFirst((ATermList) r_34);
            u_17 = (ATerm) ATgetNext((ATermList) r_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_17, s_17), (ATerm) ATmakeAppl(sym__2, t_17, u_17));
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_17), v_17);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_34 = ATgetFirst((ATermList) t);
      if(match_cons(s_34, sym__2))
        {
          j_17 = ATgetArgument(s_34, 0);
          k_17 = ATgetArgument(s_34, 1);
        }
      else
        _fail(t);
      m_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_17);
  if(match_cons(t, sym__2))
    {
      n_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_17);
  if(match_cons(t, sym__2))
    {
      if((n_17 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_17, o_17);
  t = genzip_4_0(q_3, v_3, w_3, _id, t);
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_17, m_17);
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_34 = ATgetArgument(t, 0);
            ATerm x_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_17;
        {
          ATerm x_3 (ATerm t)
          {
            t = m_17;
            return(t);
          }
          t = at_end_1_0(x_3, t);
        }
        ;
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        {
          ATerm a_32 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_17, m_17));
          if(match_cons(t, sym__2))
            {
              ATerm y_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_34) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              a_32 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_32;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_18);
  return(t);
}
ATerm d_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_18 = ATgetFirst((ATermList) t);
          k_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_18;
      if(match_cons(t, sym__2))
        {
          i_18 = ATgetArgument(t, 0);
          j_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_18;
      if((i_18 != t))
        {
          _fail(t);
        }
      t = k_18;
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm w_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      if((w_18 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm c_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        t = _2_0(_id, d_4, t);
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        ATerm f_35 = t;
        int g_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(_id, h_4, t);
            ;
            LocalPopChoice(g_35);
          }
        else
          {
            t = f_35;
            {
              ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,s_18 = NULL;
              if(match_cons(t, sym__2))
                {
                  o_18 = ATgetArgument(t, 0);
                  p_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_18 = ATgetFirst((ATermList) t);
                  s_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_18), q_18), s_18);
            }
          }
        return(t);
      }
      t = for_3_0(a_4, b_4, c_4, t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = c_35;
      t = diff_1_0(j_4, t);
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm i_35 = ATgetArgument(t, 0);
      if(((ATgetType(i_35) == AT_LIST) && !(ATisEmpty(i_35))))
        {
          z_18 = ATgetFirst((ATermList) i_35);
          a_19 = (ATerm) ATgetNext((ATermList) i_35);
        }
      else
        _fail(t);
      b_19 = ATgetArgument(t, 1);
      c_19 = ATgetArgument(t, 2);
      d_19 = ATgetArgument(t, 3);
      e_19 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_18, c_19);
  t = b_118(t);
  f_19 = t;
  t = c_118(t);
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_19, b_19);
  t = diff_0_0(t);
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_19, a_19);
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_35 = ATgetArgument(t, 0);
            ATerm m_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_19;
        {
          ATerm k_4 (ATerm t)
          {
            t = a_19;
            return(t);
          }
          t = at_end_1_0(k_4, t);
        }
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        {
          ATerm e_32 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_19, a_19));
          if(match_cons(t, sym__2))
            {
              ATerm n_35 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_35) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              e_32 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_32;
          t = concat_0_0(t);
        }
      }
    i_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_19, b_19);
    {
      ATerm o_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm q_35 = ATgetArgument(t, 0);
              ATerm r_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_19;
          {
            ATerm l_4 (ATerm t)
            {
              t = b_19;
              return(t);
            }
            t = at_end_1_0(l_4, t);
          }
          ;
          LocalPopChoice(p_35);
        }
      else
        {
          t = o_35;
          {
            ATerm i_32 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_19, b_19));
            if(match_cons(t, sym__2))
              {
                ATerm s_35 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) s_35) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                i_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_32;
            t = concat_0_0(t);
          }
        }
      j_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, z_18, f_19, d_19);
      t = d_118(t);
      k_19 = t;
      t = (ATerm) ATmakeAppl(sym__5, i_19, j_19, c_19, k_19, e_19);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm t)
{
  ATerm s_19 (ATerm t)
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_88(t);
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        t = a_89(t);
        t = s_19(t);
      }
    return(t);
  }
  t = s_19(t);
  return(t);
}
ATerm for_3_0 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm e_89 (ATerm), ATerm t)
{
  t = c_89(t);
  t = while_not_2_0(d_89, e_89, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__3))
    {
      w_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
      y_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, w_19, w_19, x_19, y_19, (ATerm) ATempty);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm v_35 = ATgetArgument(t, 0);
      if(((ATgetType(v_35) != AT_LIST) || !(ATisEmpty(v_35))))
        _fail(t);
      {
        ATerm x_35 = ATgetArgument(t, 1);
      }
      {
        ATerm y_35 = ATgetArgument(t, 2);
      }
      z_19 = ATgetArgument(t, 3);
      a_20 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_19, a_20);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm t)
{
  ATerm v_19 = NULL;
  ATerm x_4 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(y_117, z_117, a_118, t);
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        {
          ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,j_20 = NULL;
          if(match_cons(t, sym__5))
            {
              c_20 = ATgetArgument(t, 0);
              f_20 = ATgetArgument(t, 1);
              g_20 = ATgetArgument(t, 2);
              h_20 = ATgetArgument(t, 3);
              j_20 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = c_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_20 = ATgetFirst((ATermList) t);
              e_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, e_20, f_20, g_20, h_20, (ATerm) ATinsert(CheckATermList(j_20), d_20));
        }
      }
    return(t);
  }
  t = for_3_0(s_4, v_4, x_4, t);
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      {
        ATerm b_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_19;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm c_36 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_36;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
      v_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_20), u_20);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm t_20 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      t_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_20;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_36;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_20 = ATgetFirst((ATermList) t);
      x_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      if(match_cons(g_36, sym__2))
        {
          y_20 = ATgetArgument(g_36, 0);
          a_21 = ATgetArgument(g_36, 1);
        }
      else
        _fail(t);
      {
        ATerm i_36 = ATgetArgument(t, 1);
        if(match_cons(i_36, sym__2))
          {
            z_20 = ATgetArgument(i_36, 0);
            b_21 = ATgetArgument(i_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_20), y_20), (ATerm) ATinsert(CheckATermList(b_21), a_21));
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm s_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      ATerm k_36 = ATgetArgument(t, 1);
      if(match_cons(k_36, sym_Specification_1))
        {
          s_20 = ATgetArgument(k_36, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = s_20;
  t = filter_1_0(e_5, t);
  t = concat_0_0(t);
  return(t);
}
ATerm pack_stratego_modules_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      q_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
        {
          ATerm q_36 = t;
          int r_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_32 = NULL;
              t = eval_config_0_0(t);
              m_32 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), m_32);
              t = m_32;
              ;
              LocalPopChoice(r_36);
            }
          else
            {
              t = q_36;
            }
          t = filter_1_0(y_4, t);
        }
        ;
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        t = (ATerm) ATempty;
      }
    r_20 = t;
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, q_20), term_t_36), term_s_36), term_z_30, (ATerm) ATempty);
    {
      ATerm z_4 (ATerm t)
      {
        ATerm p_32 = NULL,q_32 = NULL;
        ATerm d_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(r_20), term_t_10);
          return(t);
        }
        if(((p_32 != NULL) && (p_32 != t)))
          _fail(t);
        else
          p_32 = t;
        t = SSL_explode_term(not_null(p_32));
        if(match_cons(t, sym__2))
          {
            ATerm u_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_36) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_36 = ATgetArgument(t, 1);
              if(((ATgetType(v_36) == AT_LIST) && !(ATisEmpty(v_36))))
                {
                  if(((q_32 != NULL) && (q_32 != ATgetFirst((ATermList) v_36))))
                    _fail(ATgetFirst((ATermList) v_36));
                  else
                    q_32 = ATgetFirst((ATermList) v_36);
                  {
                    ATerm w_36 = (ATerm) ATgetNext((ATermList) v_36);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = not_null(q_32);
        t = get_module_1_0(d_5, t);
        return(t);
      }
      t = graph_nodes_roots_3_0(z_4, a_5, c_5, t);
      t = genzip_4_0(f_5, h_5, i_5, _id, t);
      t = _2_0(_id, flatten_stratego_0_0, t);
    }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  o_21 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_32 = NULL;
        t = o_21;
        t = k_0(t);
        u_32 = t;
        {
          ATerm z_36 = t;
          int a_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(a_37);
            }
          else
            {
              t = z_36;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(p_21, u_32);
          t = (ATerm) ATmakeAppl(sym_FILE_1, p_21);
        }
        ;
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        {
          ATerm b_37 = t;
          int c_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_33 = NULL;
              t = o_21;
              t = k_0(t);
              a_33 = t;
              {
                ATerm d_37 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_37 = t;
                    int f_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(f_37);
                      }
                    else
                      {
                        t = e_37;
                        {
                          ATerm g_37 = t;
                          int h_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(h_37);
                            }
                          else
                            {
                              t = g_37;
                              {
                                ATerm b_33 = NULL;
                                b_33 = t;
                                if((p_21 != t))
                                  {
                                    _fail(t);
                                  }
                                t = b_33;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_37;
                  }
                t = SSL_copy(p_21, a_33);
                t = (ATerm) ATmakeAppl(sym_FILE_1, p_21);
              }
              ;
              LocalPopChoice(c_37);
            }
          else
            {
              t = b_37;
              t = o_21;
              t = k_0(t);
              if((p_21 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_21);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm v_21 = NULL,x_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      v_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_37 = ATgetArgument(t, 0);
            ATerm l_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_21, x_21);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_37 = ATgetFirst((ATermList) t);
            f_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_33;
        ;
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        t = (ATerm) ATempty;
      }
    z_21 = t;
    t = SSL_table_put(v_21, x_21, z_21);
    t = (ATerm) ATmakeAppl(sym__2, v_21, x_21);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_105 (ATerm), ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  j_22 = t;
  t = t_105(t);
  k_22 = t;
  {
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(k_22, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_22 = ATgetFirst((ATermList) t);
        l_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(k_22, (ATerm)ATmakeAppl(sym_Scopes_0), l_22);
    t = m_22;
    {
      ATerm j_5 (ATerm t)
      {
        ATerm n_22 = NULL;
        n_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_22, n_22);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(j_5, t);
      t = j_22;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_88(t);
      t = e_88(t);
      ;
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      t = e_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  t = s_105(t);
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_22, term_r_37);
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_37 = ATgetArgument(t, 0);
            ATerm v_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_22, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        t = (ATerm) ATempty;
      }
    s_22 = t;
    t = SSL_table_put(r_22, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(s_22), (ATerm) ATempty));
    t = q_22;
  }
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_d_31;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_23 = NULL;
      e_23 = t;
      t = SSL_remove(e_23);
      ;
      LocalPopChoice(x_37);
    }
  else
    {
      t = w_37;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_d_31;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_116 (ATerm), ATerm t)
{
  ATerm y_22 = NULL;
  t = begin_scope_1_0(k_5, t);
  {
    ATerm l_5 (ATerm t)
    {
      ATerm z_22 = NULL;
      z_22 = t;
      {
        ATerm y_37 = t;
        int z_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(z_37);
          }
        else
          {
            t = y_37;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_22 != NULL) && (y_22 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_22 = ATgetFirst((ATermList) t);
            {
              ATerm a_38 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(y_22);
        t = map_1_0(m_5, t);
        t = z_22;
        t = end_scope_1_0(n_5, t);
      }
      return(t);
    }
    t = restore_always_2_0(f_116, l_5, t);
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_33 = NULL;
            t = eval_config_0_0(t);
            q_33 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_33);
            t = q_33;
            ;
            LocalPopChoice(e_38);
          }
        else
          {
            t = d_38;
          }
      }
      ;
      LocalPopChoice(c_38);
    }
  else
    {
      t = b_38;
      t = term_f_38;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm g_116 (ATerm), ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_23 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm i_38 = t;
          int j_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_33 = NULL;
              t = eval_config_0_0(t);
              m_33 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), m_33);
              t = m_33;
              ;
              LocalPopChoice(j_38);
            }
          else
            {
              t = i_38;
            }
          k_23 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_23);
        }
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        t = term_k_38;
      }
    t = g_116(t);
    t = copy_to_1_0(r_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(o_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_23 = NULL,o_23 = NULL;
  m_23 = t;
  t = term_z_30;
  t = whoami_0_0(t);
  o_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_23), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_23;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm q_23 = NULL;
  q_23 = t;
  if(match_string(t, "-k"))
    {
      t = q_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_23;
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  r_23 = t;
  t = SSL_string_to_int(r_23);
  s_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_23);
  t = r_23;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_l_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_5, u_5, v_5, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  if(match_string(t, "-S"))
    {
      t = u_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_23;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_n_38;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_o_38;
  return(t);
}
ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  v_23 = t;
  t = SSL_string_to_int(v_23);
  w_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_23);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_23);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_38;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_r_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, x_5, y_5, t);
      ;
      LocalPopChoice(t_38);
    }
  else
    {
      t = s_38;
      {
        ATerm u_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_6, c_6, e_6, t);
            ;
            LocalPopChoice(v_38);
          }
        else
          {
            t = u_38;
            t = Option_3_0(j_6, k_6, l_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_24 = NULL;
      t = term_z_30;
      t = d_0(t);
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_38, term_x_38, b_24);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_23 = ATgetFirst((ATermList) t);
          a_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_23;
      t = a_0(t);
      t = term_z_30;
      t = c_0(t);
      e_24 = t;
      t = (ATerm) ATinsert(CheckATermList(a_24), e_24);
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  if(match_string(t, "-o"))
    {
      t = g_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_24;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_24);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_24);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_y_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_6, o_6, p_6, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  if(match_string(t, "-i"))
    {
      t = j_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_24;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), k_24);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_24);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_6, r_6, s_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  if(match_cons(t, sym__3))
    {
      n_24 = ATgetArgument(t, 0);
      o_24 = ATgetArgument(t, 1);
      p_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_24, o_24);
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_39 = ATgetArgument(t, 0);
            ATerm d_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_24, o_24);
        ;
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        t = (ATerm) ATempty;
      }
    q_24 = t;
    t = SSL_table_put(n_24, o_24, (ATerm) ATinsert(CheckATermList(q_24), p_24));
    t = (ATerm) ATmakeAppl(sym__3, n_24, o_24, p_24);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,c_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_25 = NULL;
      t = term_z_30;
      t = j_0(t);
      e_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_38, term_x_38, e_25);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm i_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_24 = ATgetFirst((ATermList) t);
          z_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_25 = ATgetFirst((ATermList) t);
          c_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_24;
      t = h_0(t);
      t = a_25;
      t = i_0(t);
      i_25 = t;
      t = (ATerm) ATinsert(CheckATermList(c_25), i_25);
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
      {
        ATerm l_25 = NULL,m_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_25 = ATgetFirst((ATermList) t);
            m_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_25;
        {
          ATerm u_6 (ATerm t)
          {
            t = m_25;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_6, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm s_25 (ATerm t)
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, s_25, t);
        ;
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_95(t);
      }
    return(t);
  }
  t = s_25(t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  if(match_cons(t, sym__2))
    {
      u_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_25;
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_25);
        {
          ATerm k_39 = t;
          int l_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_33 = NULL;
              t = eval_config_0_0(t);
              u_33 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_25, u_33);
              t = u_33;
              ;
              LocalPopChoice(l_39);
            }
          else
            {
              t = k_39;
            }
        }
        ;
        LocalPopChoice(j_39);
      }
    else
      {
        t = i_39;
        t = (ATerm) ATempty;
      }
    w_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_25, w_25);
    {
      ATerm m_39 = t;
      int n_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm o_39 = ATgetArgument(t, 0);
              ATerm p_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_25;
          {
            ATerm v_6 (ATerm t)
            {
              t = w_25;
              return(t);
            }
            t = at_end_1_0(v_6, t);
          }
          ;
          LocalPopChoice(n_39);
        }
      else
        {
          t = m_39;
          {
            ATerm y_33 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_25, w_25));
            if(match_cons(t, sym__2))
              {
                ATerm q_39 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_39) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                y_33 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_33;
            t = concat_0_0(t);
          }
        }
      x_25 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_25, x_25);
      t = (ATerm) ATmakeAppl(sym__3, term_r_39, u_25, x_25);
    }
  }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  if(match_string(t, "-I"))
    {
      t = g_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = g_26;
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_39, (ATerm) ATinsert(ATinsert(ATempty, h_26), term_s_39));
  t = extend_config_0_0(t);
  t = term_z_30;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_t_39;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  if(match_string(t, "--nodep"))
    {
      t = i_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = i_26;
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue)));
  t = term_z_30;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_u_39;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  if(match_string(t, "--dep"))
    {
      t = j_26;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = j_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = j_26;
        }
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue)), k_26);
  t = term_z_30;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_v_39;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_30;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(w_6, b_7, c_7, t);
      ;
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
      {
        ATerm z_39 = t;
        int a_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(d_7, e_7, f_7, t);
            ;
            LocalPopChoice(a_40);
          }
        else
          {
            t = z_39;
            {
              ATerm b_40 = t;
              int c_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(g_7, h_7, i_7, t);
                  ;
                  LocalPopChoice(c_40);
                }
              else
                {
                  t = b_40;
                  t = Option_3_0(j_7, k_7, l_7, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_30;
  t = whoami_0_0(t);
  l_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), l_26));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_34 = NULL;
        t = eval_config_0_0(t);
        c_34 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_34);
        t = c_34;
        ;
        LocalPopChoice(e_40);
      }
    else
      {
        t = d_40;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm t)
{
  ATerm f_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_101(t);
      ;
      LocalPopChoice(g_40);
    }
  else
    {
      t = f_40;
      {
        ATerm p_26 = NULL,q_26 = NULL,t_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_26 = ATgetFirst((ATermList) t);
            q_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_26;
        t = foldr_2_0(b_101, c_101, t);
        t_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_26, t_26);
        t = c_101(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_m_38;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  if(match_cons(t, sym__2))
    {
      h_34 = ATgetArgument(t, 0);
      i_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(h_34, i_34);
        ;
        LocalPopChoice(i_40);
      }
    else
      {
        t = h_40;
        t = SSL_addr(h_34, i_34);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_26 = NULL,d_34 = NULL,e_34 = NULL;
  t = times_0_0(t);
  d_34 = t;
  t = SSL_explode_term(d_34);
  if(match_cons(t, sym__2))
    {
      ATerm j_40 = ATgetArgument(t, 0);
      e_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_34;
  t = foldr_2_0(m_7, r_7, t);
  w_26 = t;
  t = SSL_TicksToSeconds(w_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_27;
        if((i_27 != t))
          {
            _fail(t);
          }
        t = h_27;
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = h_27;
        {
          ATerm m_40 = t;
          int n_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_27, j_27);
              ;
              LocalPopChoice(n_40);
            }
          else
            {
              t = m_40;
              t = SSL_gtr(i_27, j_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_27, j_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_27 = NULL,o_27 = NULL;
      m_27 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm q_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_34 = NULL;
            t = eval_config_0_0(t);
            v_34 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_34);
            t = v_34;
            ;
            LocalPopChoice(r_40);
          }
        else
          {
            t = q_40;
          }
        o_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_27, term_f_14);
        t = geq_0_0(t);
        t = m_27;
        t = s_108(t);
      }
      ;
      LocalPopChoice(p_40);
    }
  else
    {
      t = o_40;
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  t = run_time_0_0(t);
  q_27 = t;
  t = term_z_30;
  t = whoami_0_0(t);
  r_27 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), q_27), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), r_27));
  t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_40), q_27), term_a_15), r_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm n_110 (ATerm), ATerm t)
{
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm v_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_34 = NULL;
            t = eval_config_0_0(t);
            z_34 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), z_34);
            t = z_34;
            ;
            LocalPopChoice(w_40);
          }
        else
          {
            t = v_40;
          }
      }
      ;
      LocalPopChoice(u_40);
    }
  else
    {
      t = t_40;
      {
        ATerm u_7 (ATerm t)
        {
          ATerm x_40 = t;
          int y_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(y_40);
            }
          else
            {
              t = x_40;
              {
                ATerm z_40 = t;
                int a_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(a_41);
                  }
                else
                  {
                    t = z_40;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(u_7, t);
      }
    }
  t = n_110(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_27 = ATgetFirst((ATermList) t);
      u_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_27 = NULL,d_28 = NULL;
        t = u_27;
        t = g_0(t);
        y_27 = t;
        t = t_27;
        t = e_0(t);
        d_28 = t;
        t = u_27;
        {
          ATerm v_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_27), d_28);
            return(t);
          }
          t = reverse_acc_2_0(e_0, v_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_30;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  j_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_28);
  e_28 = t;
  t = h_28;
  t = k_79(t);
  i_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, i_28), e_28);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_28), term_b_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm e_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_35 = NULL;
            t = eval_config_0_0(t);
            d_35 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_35);
            t = d_35;
            ;
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
          }
      }
      ;
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      {
        ATerm x_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(x_7, t);
      }
    }
  t = term_g_41;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, y_7, t);
  t = map_1_0(z_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm l_79 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,v_28 = NULL;
  v_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_28);
  p_28 = t;
  t = q_28;
  t = l_79(t);
  r_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, r_28), p_28);
  return(t);
}
ATerm fetch_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm z_28 (ATerm t)
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_95, _id, t);
        ;
        LocalPopChoice(i_41);
      }
    else
      {
        t = h_41;
        t = Cons_2_0(_id, z_28, t);
      }
    return(t);
  }
  t = z_28(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL;
  b_29 = t;
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_41 = ATgetFirst((ATermList) t);
                ATerm m_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_29;
          }
        ;
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        t = (ATerm) ATinsert(ATempty, b_29);
      }
    c_29 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_29);
    t = b_29;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_35 = NULL;
        t = eval_config_0_0(t);
        h_35 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_35);
        t = h_35;
        ;
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_41;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_r_41;
  return(t);
}
ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_41;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_t_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_8, b_8, d_8, t);
      ;
      LocalPopChoice(v_41);
    }
  else
    {
      t = u_41;
      t = Option_3_0(e_8, f_8, i_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  l_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_29 = ATgetFirst((ATermList) t);
      i_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_29);
  g_29 = t;
  t = h_29;
  t = x_73(t);
  j_29 = t;
  t = i_29;
  t = y_73(t);
  k_29 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(k_29), j_29), g_29);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm q_29 = NULL;
  q_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_29);
  t = (ATerm) ATmakeAppl(sym_Program_1, q_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  {
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_41;
        t = e_113(t);
        ;
        LocalPopChoice(x_41);
      }
    else
      {
        t = w_41;
      }
    t = p_29;
    {
      ATerm k_8 (ATerm t)
      {
        ATerm z_41 = t;
        int a_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_42 = t;
            int c_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(c_42);
              }
            else
              {
                t = b_42;
                t = e_113(t);
                t = Cons_2_0(_id, k_8, t);
              }
            ;
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
            {
              ATerm s_29 = NULL,t_29 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_29 = ATgetFirst((ATermList) t);
                  t_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_29), (ATerm) ATmakeAppl(sym_Undefined_1, s_29));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_8, k_8, t);
    }
  }
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  if(match_string(t, "--help"))
    {
      t = d_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_30;
        }
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_42;
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_e_42;
  return(t);
}
ATerm r_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = a_30;
  {
    ATerm l_8 (ATerm t)
    {
      ATerm f_42 = t;
      int g_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_113(t);
          ;
          LocalPopChoice(g_42);
        }
      else
        {
          t = f_42;
          {
            ATerm h_42 = t;
            int i_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_8, p_8, q_8, t);
                ;
                LocalPopChoice(i_42);
              }
            else
              {
                t = h_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_8, t);
    {
      ATerm j_42 = t;
      int k_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_30 = NULL;
          i_30 = t;
          {
            ATerm l_42 = t;
            int m_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = i_30;
                {
                  ATerm n_42 = t;
                  int o_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm p_42 = t;
                        int q_42 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_35 = NULL;
                            t = eval_config_0_0(t);
                            w_35 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), w_35);
                            t = w_35;
                            ;
                            LocalPopChoice(q_42);
                          }
                        else
                          {
                            t = p_42;
                          }
                      }
                      ;
                      LocalPopChoice(o_42);
                    }
                  else
                    {
                      t = n_42;
                      t = fetch_1_0(r_8, t);
                    }
                  t = i_30;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(m_42);
              }
            else
              {
                t = l_42;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm r_42 = t;
                  int s_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_36 = NULL;
                      t = eval_config_0_0(t);
                      d_36 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), d_36);
                      t = d_36;
                      ;
                      LocalPopChoice(s_42);
                    }
                  else
                    {
                      t = r_42;
                    }
                  t = i_30;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(k_42);
        }
      else
        {
          t = j_42;
          {
            ATerm t_42 = t;
            int u_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_8 (ATerm t)
                {
                  ATerm w_8 (ATerm t)
                  {
                    if(((b_30 != NULL) && (b_30 != t)))
                      _fail(t);
                    else
                      b_30 = t;
                    return(t);
                  }
                  t = Undefined_1_0(w_8, t);
                  return(t);
                }
                t = fetch_1_0(t_8, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_30)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_30)), term_v_42));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(u_42);
              }
            else
              {
                t = t_42;
              }
          }
        }
      c_30 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = c_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t)
{
  ATerm o_30 = NULL;
  t = parse_options_1_0(p_110, t);
  o_30 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), o_30);
  t = o_30;
  t = r_110(t);
  {
    ATerm w_42 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_110, t);
        ;
        LocalPopChoice(x_42);
      }
    else
      {
        t = w_42;
        {
          ATerm y_42 = t;
          int z_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_110(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_42);
            }
          else
            {
              t = y_42;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_43;
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_b_43;
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm c_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
      ;
      LocalPopChoice(d_43);
    }
  else
    {
      t = c_43;
      {
        ATerm e_43 = t;
        int f_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(f_43);
          }
        else
          {
            t = e_43;
            {
              ATerm g_43 = t;
              int h_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(h_43);
                }
              else
                {
                  t = g_43;
                  {
                    ATerm i_43 = t;
                    int j_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_9, e_9, m_9, t);
                        ;
                        LocalPopChoice(j_43);
                      }
                    else
                      {
                        t = i_43;
                        {
                          ATerm k_43 = t;
                          int l_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(l_43);
                            }
                          else
                            {
                              t = k_43;
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
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  ATerm z_8 (ATerm t)
  {
    ATerm o_9 (ATerm t)
    {
      t = pack_stratego_modules_0_0(t);
      if(match_cons(t, sym__2))
        {
          if(((p_30 != NULL) && (p_30 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_30 = ATgetArgument(t, 0);
          if(((q_30 != NULL) && (q_30 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            q_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_43 = t;
        int n_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue)));
            {
              ATerm o_43 = t;
              int p_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_36 = NULL;
                  t = eval_config_0_0(t);
                  h_36 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue)), h_36);
                  t = h_36;
                  ;
                  LocalPopChoice(p_43);
                }
              else
                {
                  t = o_43;
                }
              t = not_null(p_30);
              {
                ATerm p_9 (ATerm t)
                {
                  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
                  m_36 = t;
                  t = SSL_explode_string(m_36);
                  {
                    ATerm q_43 = t;
                    int r_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_9 (ATerm t)
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm s_43 = ATgetFirst((ATermList) t);
                              if(((ATgetType(s_43) != AT_INT) || (ATgetInt((ATermInt) s_43) != 47)))
                                _fail(t);
                              if(((l_36 != NULL) && (l_36 != (ATerm) ATgetNext((ATermList) t))))
                                _fail((ATerm) ATgetNext((ATermList) t));
                              else
                                l_36 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = at_suffix_rev_1_0(q_9, t);
                        t = not_null(l_36);
                        ;
                        LocalPopChoice(r_43);
                      }
                    else
                      {
                        t = q_43;
                      }
                    n_36 = t;
                    t = SSL_implode_string(n_36);
                    t = basename_1_0(_id, t);
                  }
                  return(t);
                }
                t = map_1_0(p_9, t);
                t = write_to_text_0_0(t);
              }
            }
            ;
            LocalPopChoice(n_43);
          }
        else
          {
            t = m_43;
            t = not_null(p_30);
            t = create_dep_file_0_0(t);
            t = not_null(q_30);
            t = write_to_0_0(t);
          }
      }
      return(t);
    }
    t = xtc_io_1_0(o_9, t);
    return(t);
  }
  t = option_wrap_4_0(y_8, default_usage_0_0, _id, z_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
