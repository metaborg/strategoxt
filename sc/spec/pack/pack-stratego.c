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
ATerm term_j_43;
ATerm term_i_43;
ATerm term_v_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_y_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_s_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_r_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_f_38;
ATerm term_r_37;
ATerm term_u_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_z_33;
ATerm term_j_33;
ATerm term_z_32;
ATerm term_x_31;
ATerm term_o_31;
ATerm term_m_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_n_30;
ATerm term_l_30;
ATerm term_a_29;
ATerm term_o_28;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_b_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_t_23;
ATerm term_p_23;
ATerm term_n_23;
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
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_y_21;
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
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
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
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_u_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
void init_constant_terms (void)
{
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_l_14, term_u_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_z_15, term_a_16);
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
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_w_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_l_17, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_b_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_l_18, term_m_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_18, term_t_18, term_u_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_t_19, term_u_19);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_20, term_k_20, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_o_20, term_p_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_e_21, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_21, term_i_21, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_21, term_m_21, term_n_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_21, term_s_21, term_t_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_21, term_y_21, term_a_22);
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
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_22, term_h_22, term_p_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_22, term_v_22, term_w_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_23, term_b_23, term_c_23);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_23, term_g_23, term_h_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_23, term_t_23, term_x_23);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_24, term_d_24, term_l_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_24, term_s_24, term_t_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_24, term_w_24, term_x_24);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_38);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym__3, term_r_39, term_r_41, term_h_31);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm write_to_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm p_107 (ATerm), ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm basename_1_0 (ATerm x_103 (ATerm), ATerm);
ATerm at_suffix_rev_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_94 (ATerm), ATerm);
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
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm h_113 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm repeat_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm assert_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm u_108 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm find_module_1_0 (ATerm n_87 (ATerm), ATerm);
ATerm get_module_1_0 (ATerm m_87 (ATerm), ATerm);
ATerm diff_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm);
ATerm for_3_0 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm e_89 (ATerm), ATerm);
ATerm graph_nodes_roots_3_0 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm);
ATerm pack_stratego_modules_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm t_105 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm f_116 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm g_116 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_108 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm n_110 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm l_79 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_95 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm e_113 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm d_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm e_0 = NULL,o_0 = NULL;
  e_0 = t;
  t = xtc_new_file_0_0(t);
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_0, e_0);
  {
    ATerm c_0 (ATerm t)
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
    t = WriteToFile_1_0(c_0, t);
    t = SSL_close_file(o_0);
    t = (ATerm) ATmakeAppl(sym_FILE_1, o_0);
  }
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
    ATerm c_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = c_10;
        {
          ATerm n_0 (ATerm t)
          {
            ATerm f_10 = t;
            int g_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(g_10);
              }
            else
              {
                t = f_10;
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
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = eval_config_0_0(t);
        u_0 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_0);
        t = u_0;
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
      }
    {
      ATerm k_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue)));
          {
            ATerm o_10 = t;
            int t_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_1 = NULL;
                t = eval_config_0_0(t);
                b_1 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue)), b_1);
                t = b_1;
                ;
                LocalPopChoice(t_10);
              }
            else
              {
                t = o_10;
              }
          }
          ;
          LocalPopChoice(l_10);
        }
      else
        {
          t = k_10;
          {
            ATerm u_10 = t;
            if((PushChoice() == 0))
              {
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue)));
                {
                  ATerm h_11 = t;
                  int u_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_1 = NULL;
                      t = eval_config_0_0(t);
                      p_1 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue)), p_1);
                      t = p_1;
                      ;
                      LocalPopChoice(u_11);
                    }
                  else
                    {
                      t = h_11;
                    }
                }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_10;
              }
          }
        }
      e_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_11), term_v_11), e_1);
      t = concat_strings_0_0(t);
      g_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_1, term_y_11);
      t = open_file_0_0(t);
      h_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_z_11, (ATerm) ATinsert(CheckATermList(d_1), term_c_12));
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
  t = (ATerm) ATmakeAppl(sym__2, j_1, term_y_11);
  t = open_stream_0_0(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_1, k_1);
  t = p_107(t);
  t = fclose_0_0(t);
  t = k_1;
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm n_1 = NULL,q_1 = NULL;
  n_1 = t;
  t = xtc_new_file_0_0(t);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, n_1);
  {
    ATerm r_0 (ATerm t)
    {
      ATerm x_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm g_12 = ATgetArgument(t, 0);
          if(match_cons(g_12, sym_Stream_1))
            {
              x_1 = ATgetArgument(g_12, 0);
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
    t = WriteToFile_1_0(r_0, t);
    t = SSL_close_file(q_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
  }
  return(t);
}
ATerm basename_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL;
  o_2 = t;
  t = SSL_explode_string(o_2);
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_2 (ATerm t)
        {
          ATerm j_12 = t;
          int l_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, q_2, t);
              ;
              LocalPopChoice(l_12);
            }
          else
            {
              t = j_12;
              {
                ATerm r_12 = t;
                int s_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_0 (ATerm t)
                    {
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2_0(s_0, _id, t);
                    ;
                    LocalPopChoice(s_12);
                  }
                else
                  {
                    t = r_12;
                    {
                      ATerm v_0 (ATerm t)
                      {
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        return(t);
                      }
                      t = Cons_2_0(v_0, x_103, t);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = q_2(t);
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
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
    ATerm y_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, s_2, t);
        ;
        LocalPopChoice(a_13);
      }
    else
      {
        t = y_12;
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
    ATerm e_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = e_13;
        t = Cons_2_0(z_94, w_2, t);
      }
    return(t);
  }
  t = w_2(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 = NULL;
      m_3 = t;
      t = SSL_is_string(m_3);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = i_13;
      {
        ATerm m_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              ATerm q_13 = t;
              int t_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(t_13);
                }
              else
                {
                  t = q_13;
                }
              return(t);
            }
            t = map_1_0(z_0, t);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = m_13;
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
                        ATerm u_13 = t;
                        int v_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_3);
                            {
                              ATerm w_13 = t;
                              int x_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_2 = NULL;
                                  t = eval_config_0_0(t);
                                  k_2 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_3, k_2);
                                  t = k_2;
                                  ;
                                  LocalPopChoice(x_13);
                                }
                              else
                                {
                                  t = w_13;
                                }
                            }
                            ;
                            LocalPopChoice(v_13);
                          }
                        else
                          {
                            t = u_13;
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
    if(match_cons(t, sym_Specification_1))
      {
        n_4 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = n_4;
    {
      ATerm f_1 (ATerm t)
      {
        ATerm y_13 = t;
        if((PushChoice() == 0))
          {
            t = Imports_1_0(_id, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_13;
          }
        return(t);
      }
      t = filter_1_0(f_1, t);
    }
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
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_97(t);
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
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
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      {
        ATerm d_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = filter_1_0(e_102, t);
              return(t);
            }
            t = Cons_2_0(e_102, l_1, t);
            ;
            LocalPopChoice(e_14);
          }
        else
          {
            t = d_14;
            {
              ATerm g_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm f_14 = ATgetFirst((ATermList) t);
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
  t = term_g_14;
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_3 = NULL;
              t = eval_config_0_0(t);
              c_3 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), c_3);
              t = c_3;
              ;
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
            }
        }
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = term_l_14;
      }
    z_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_5, term_l_14);
    {
      ATerm o_14 = t;
      int p_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(z_5, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(p_14);
        }
      else
        {
          t = o_14;
          t = SSL_subtr(z_5, (ATerm) ATmakeInt(1));
        }
      f_6 = t;
      t = SSL_int_to_string(f_6);
      a_6 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, a_6), term_g_14);
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  t = term_u_14;
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_3 = NULL;
              t = eval_config_0_0(t);
              h_3 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_3);
              t = h_3;
              ;
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
            }
        }
        ;
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        t = term_l_14;
      }
    g_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_6, term_l_14);
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(g_6, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(a_15);
        }
      else
        {
          t = z_14;
          t = SSL_subtr(g_6, (ATerm) ATmakeInt(1));
        }
      i_6 = t;
      t = SSL_int_to_string(i_6);
      h_6 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, h_6), term_u_14);
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
        ATerm o_3 = NULL;
        t = SSL_int_to_string(o_7);
        o_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_15), o_3), term_b_15);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm a_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_7 = ATgetArgument(t, 0);
          p_7 = ATgetArgument(t, 1);
          q_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(p_7);
      a_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_7), term_n_15), a_5), term_m_15), o_7);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm t_7 = NULL;
  t_7 = t;
  {
    ATerm o_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_25), term_u_24), term_m_24), term_y_23), term_n_23), term_d_23), term_x_22), term_t_22), term_f_22), term_b_22), term_u_21), term_q_21), term_k_21), term_g_21), term_c_21), term_m_20), term_b_20), term_q_19), term_m_19), term_v_18), term_n_18), term_c_18), term_y_17), term_e_17), term_a_17), term_p_16), term_h_16), term_v_15);
        {
          ATerm o_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm d_25 = ATgetArgument(t, 0);
                if((t_7 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm f_25 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(o_1, t);
        }
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = o_15;
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
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL,i_5 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_25 = ATgetArgument(t, 0);
            c_8 = ATgetArgument(t, 1);
            {
              ATerm n_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_8;
        {
          ATerm o_25 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_25;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          i_5 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_p_25, (ATerm) ATinsert(ATinsert(ATempty, i_5), term_q_25));
        }
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
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
    ATerm r_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_8;
        t = k_109(t);
        ;
        LocalPopChoice(y_25);
      }
    else
      {
        t = r_25;
        t = SSL_waitpid(h_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_25 = ATgetArgument(t, 0);
            if(((ATgetType(z_25) != AT_INT) || (ATgetInt((ATermInt) z_25) != 0)))
              _fail(t);
            {
              ATerm a_26 = ATgetArgument(t, 1);
            }
            {
              ATerm c_26 = ATgetArgument(t, 2);
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
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_8 = NULL,o_8 = NULL;
      m_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL;
            t = eval_config_0_0(t);
            s_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_5);
            t = s_5;
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
          }
        o_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_8, term_t_23);
        t = geq_0_0(t);
        t = m_8;
        t = w_108(t);
      }
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_108 (ATerm), ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_8 = NULL,u_8 = NULL;
      s_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 = NULL;
            t = eval_config_0_0(t);
            x_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_5);
            t = x_5;
            ;
            LocalPopChoice(v_26);
          }
        else
          {
            t = u_26;
          }
        u_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_8, term_t_19);
        t = geq_0_0(t);
        t = s_8;
        t = v_108(t);
      }
      ;
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 = NULL,x_8 = NULL;
      v_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 = NULL;
            t = eval_config_0_0(t);
            e_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_6);
            t = e_6;
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
          }
        x_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_8, term_w_16);
        t = geq_0_0(t);
        t = v_8;
        t = x_108(t);
      }
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
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
      ATerm b_27 = t;
      int c_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_9;
          ;
          LocalPopChoice(c_27);
        }
      else
        {
          t = b_27;
          {
            ATerm d_27 = t;
            int e_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_6 = NULL,k_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_6 = ATgetFirst((ATermList) t);
                    k_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_9;
                {
                  ATerm r_1 (ATerm t)
                  {
                    ATerm l_6 = NULL;
                    l_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_6, l_6);
                    t = d_99(t);
                    return(t);
                  }
                  t = fetch_1_0(r_1, t);
                  t = k_6;
                  t = d_9(t);
                }
                ;
                LocalPopChoice(e_27);
              }
            else
              {
                t = d_27;
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
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_27 = ATgetArgument(t, 0);
            ATerm l_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_9, h_9);
        ;
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        t = (ATerm) ATempty;
      }
    k_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_9, j_9);
    {
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
      t = union_1_0(s_1, t);
      l_9 = t;
      t = SSL_table_put(g_9, h_9, l_9);
      t = (ATerm) ATmakeAppl(sym__3, g_9, h_9, j_9);
    }
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
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_10 (ATerm j_10, ATerm t)
  {
    t = SSL_fclose(j_10);
    return(t);
  }
  ATerm m_10 = NULL,n_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_10 = ATgetArgument(t, 0);
      {
        ATerm n_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_10);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = n_27;
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
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      ATerm w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL,y_6 = NULL;
        x_6 = t;
        t = SSL_explode_term(x_6);
        if(match_cons(t, sym__2))
          {
            ATerm a_28 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_28) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_28 = ATgetArgument(t, 1);
              if(((ATgetType(b_28) == AT_LIST) && !(ATisEmpty(b_28))))
                {
                  y_6 = ATgetFirst((ATermList) b_28);
                  {
                    ATerm f_28 = (ATerm) ATgetNext((ATermList) b_28);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = y_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = y_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = y_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = x_27;
        {
          ATerm g_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
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
              LocalPopChoice(k_28);
            }
          else
            {
              t = g_28;
              {
                ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
                ATerm v_1 (ATerm t)
                {
                  ATerm c_11 = NULL;
                  c_11 = t;
                  t = SSL_is_string(c_11);
                  return(t);
                }
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
  ATerm l_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_11 = NULL;
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_11, term_o_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = l_28;
      {
        ATerm z_6 = NULL;
        z_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = z_6;
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
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL;
      i_11 = t;
      t = SSL_access(i_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(t_28);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_28;
      {
        ATerm u_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_7 = NULL;
            ATerm x_28 = t;
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
                t = x_28;
              }
            j_7 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_7), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = j_7;
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = u_28;
            {
              ATerm v_7 = NULL;
              v_7 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_7), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = v_7;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
  k_11 = t;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm z_8 = NULL;
      z_8 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_8), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = z_8;
      return(t);
    }
    t = if_verbose5_1_0(w_1, t);
    {
      ATerm y_28 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, k_11));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_28;
        }
      l_11 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, k_11));
      t = l_11;
      {
        ATerm y_1 (ATerm t)
        {
          ATerm f_9 = NULL;
          f_9 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_9), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = f_9;
          return(t);
        }
        t = if_verbose4_1_0(y_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm n_11 = NULL;
            n_11 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = n_11;
            return(t);
          }
          t = if_verbose6_1_0(c_2, t);
          m_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_29, m_11);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm d_2 (ATerm t)
            {
              ATerm o_11 = NULL;
              o_11 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = o_11;
              return(t);
            }
            t = if_verbose6_1_0(d_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, k_11), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_a_29, (ATerm)ATmakeAppl(sym_Imported_1, k_11), (ATerm) ATempty);
            {
              ATerm e_2 (ATerm t)
              {
                ATerm p_11 = NULL;
                p_11 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = p_11;
                return(t);
              }
              t = if_verbose4_1_0(e_2, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm repeat_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm q_11 (ATerm t)
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_88(t);
        t = q_11(t);
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
      }
    return(t);
  }
  t = q_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_9 = NULL;
            t = eval_config_0_0(t);
            w_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), w_9);
            t = w_9;
            ;
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
          }
      }
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = f_29;
      {
        ATerm r_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = r_29;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_11 = NULL;
  ATerm f_2 (ATerm t)
  {
    ATerm y_9 = NULL;
    y_9 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_9), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = y_9;
    return(t);
  }
  t = if_verbose5_1_0(f_2, t);
  r_11 = t;
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        {
          ATerm s_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_11 = t;
          {
            ATerm g_2 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm y_29 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_29;
                  }
              }
              return(t);
            }
            t = repeat_1_0(g_2, t);
            t = s_11;
          }
        }
      }
    t = r_11;
    {
      ATerm h_2 (ATerm t)
      {
        ATerm d_10 = NULL;
        d_10 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_10), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = d_10;
        return(t);
      }
      t = if_verbose5_1_0(h_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_29 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm t_11 = NULL;
        t_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_11), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = t_11;
        return(t);
      }
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_12 = NULL,p_12 = NULL,x_12 = NULL;
            if(match_cons(t, sym__2))
              {
                o_12 = ATgetArgument(t, 0);
                p_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, o_12));
            {
              ATerm j_2 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((p_12 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((x_12 != NULL) && (x_12 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      x_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(j_2, t);
              t = not_null(x_12);
            }
            ;
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            {
              ATerm j_13 = NULL,p_13 = NULL;
              j_13 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, j_13));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm h_30 = ATgetFirst((ATermList) t);
                  if(match_cons(h_30, sym__2))
                    {
                      ATerm k_30 = ATgetArgument(h_30, 0);
                      p_13 = ATgetArgument(h_30, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm j_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = p_13;
            }
          }
        {
          ATerm l_2 (ATerm t)
          {
            ATerm r_13 = NULL;
            r_13 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_13), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = r_13;
            return(t);
          }
          t = if_verbose5_1_0(l_2, t);
        }
      }
      ;
      LocalPopChoice(e_30);
    }
  else
    {
      t = z_29;
      {
        ATerm w_11 = NULL;
        w_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), w_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_30), w_11), term_l_30);
        {
          ATerm m_2 (ATerm t)
          {
            ATerm t_16 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm n_2 (ATerm t)
              {
                ATerm r_16 = NULL,s_16 = NULL;
                r_16 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), r_16);
                s_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_16, s_16);
                return(t);
              }
              t = map_1_0(n_2, t);
              t_16 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_16), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = t_16;
            }
            return(t);
          }
          t = if_verbose5_1_0(m_2, t);
          _fail(t);
        }
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
    ATerm r_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(d_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = r_30;
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
ATerm open_file_0_0 (ATerm t)
{
  ATerm w_12 (ATerm k_12, ATerm t)
  {
    t = k_12;
    {
      ATerm v_30 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm w_30 = ATgetArgument(t, 0);
              ATerm a_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_30;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, k_12, term_y_11);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm z_12 (ATerm m_12, ATerm n_12, ATerm q_12, ATerm t)
  {
    t = SSL_open_file(m_12, n_12);
    return(t);
  }
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  if(match_cons(t, sym__2))
    {
      u_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_12(t_12, t);
            ;
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
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
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm b_13 = NULL;
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
  t = _2_0(r_2, t_2, t);
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
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
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        {
          ATerm d_18 = NULL,e_18 = NULL;
          d_18 = t;
          t = SSL_explode_term(d_18);
          if(match_cons(t, sym__2))
            {
              ATerm g_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_31) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              e_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_18;
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
  t = term_h_31;
  t = new_0_0(t);
  k_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_13, term_i_31);
  t = conc_strings_0_0(t);
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_13 = NULL;
        n_13 = t;
        t = SSL_access(n_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_13 = NULL;
  t = new_file_0_0(t);
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_13, term_y_11);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, s_13, term_h_31);
  {
    ATerm v_2 (ATerm t)
    {
      t = term_m_31;
      return(t);
    }
    t = assert_1_0(v_2, t);
    t = s_13;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_22 = NULL,o_22 = NULL,j_23 = NULL,l_23 = NULL;
      t = m_14;
      t = xtc_new_file_0_0(t);
      i_22 = t;
      t = m_0(t);
      o_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_22, (ATerm) ATinsert(ATinsert(ATempty, i_22), term_o_31));
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm s_31 = ATgetArgument(t, 0);
                ATerm t_31 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_22;
            {
              ATerm x_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, i_22), term_o_31);
                return(t);
              }
              t = at_end_1_0(x_2, t);
            }
            ;
            LocalPopChoice(q_31);
          }
        else
          {
            t = p_31;
            {
              ATerm i_23 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_22, (ATerm) ATinsert(ATinsert(ATempty, i_22), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm w_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_31) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  i_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_23;
              t = concat_0_0(t);
            }
          }
        j_23 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        l_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_23, j_23);
        {
          ATerm y_2 (ATerm t)
          {
            t = SSL_execvp(l_23, j_23);
            return(t);
          }
          t = fork_and_wait_1_0(y_2, t);
          t = SSL_close_file(i_22);
          t = (ATerm) ATmakeAppl(sym_FILE_1, i_22);
        }
      }
    }
  else
    {
      ATerm f_24 = NULL,i_24 = NULL,t_25 = NULL,b_26 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_14;
      t = xtc_new_file_0_0(t);
      f_24 = t;
      t = m_0(t);
      i_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_24), term_o_31), n_14), term_x_31));
      {
        ATerm y_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm b_32 = ATgetArgument(t, 0);
                ATerm c_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_24;
            {
              ATerm z_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_24), term_o_31), n_14), term_x_31);
                return(t);
              }
              t = at_end_1_0(z_2, t);
            }
            ;
            LocalPopChoice(a_32);
          }
        else
          {
            t = y_31;
            {
              ATerm j_25 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_24), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), n_14), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm f_32 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_32) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  j_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_25;
              t = concat_0_0(t);
            }
          }
        t_25 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        b_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_26, t_25);
        {
          ATerm a_3 (ATerm t)
          {
            t = SSL_execvp(b_26, t_25);
            return(t);
          }
          t = fork_and_wait_1_0(a_3, t);
          t = SSL_close_file(f_24);
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_24);
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
ATerm parse_module_0_0 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_15 = NULL,f_26 = NULL,m_26 = NULL;
      ATerm b_3 (ATerm t)
      {
        ATerm j_32 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_32;
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        if(((d_15 != NULL) && (d_15 != t)))
          _fail(t);
        else
          d_15 = t;
        return(t);
      }
      t = _2_0(b_3, d_3, t);
      f_26 = t;
      t = SSL_explode_term(f_26);
      if(match_cons(t, sym__2))
        {
          ATerm k_32 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) k_32) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm l_32 = ATgetArgument(t, 1);
            if(((ATgetType(l_32) == AT_LIST) && !(ATisEmpty(l_32))))
              {
                ATerm n_32 = ATgetFirst((ATermList) l_32);
                ATerm o_32 = (ATerm) ATgetNext((ATermList) l_32);
                if(((ATgetType(o_32) == AT_LIST) && !(ATisEmpty(o_32))))
                  {
                    m_26 = ATgetFirst((ATermList) o_32);
                    {
                      ATerm p_32 = (ATerm) ATgetNext((ATermList) o_32);
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
      t = m_26;
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_32 = t;
            int v_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_32 = t;
                int x_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(x_32);
                  }
                else
                  {
                    t = w_32;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(v_32);
                {
                  ATerm e_3 (ATerm t)
                  {
                    t = term_z_32;
                    return(t);
                  }
                  ATerm f_3 (ATerm t)
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
                      ATerm a_33 = t;
                      int b_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_27 = NULL;
                          t = eval_config_0_0(t);
                          s_27 = t;
                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), s_27);
                          t = s_27;
                          ;
                          LocalPopChoice(b_33);
                        }
                      else
                        {
                          t = a_33;
                        }
                      h_15 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_15), g_15), f_15);
                      t = concat_0_0(t);
                    }
                    return(t);
                  }
                  t = xtc_transform_file_2_0(e_3, f_3, t);
                }
              }
            else
              {
                t = t_32;
                {
                  ATerm g_3 (ATerm t)
                  {
                    t = term_z_32;
                    return(t);
                  }
                  ATerm i_3 (ATerm t)
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
                      ATerm f_33 = t;
                      int g_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_28 = NULL;
                          t = eval_config_0_0(t);
                          c_28 = t;
                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), c_28);
                          t = c_28;
                          ;
                          LocalPopChoice(g_33);
                        }
                      else
                        {
                          t = f_33;
                        }
                      l_15 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_15), k_15), j_15);
                      t = concat_0_0(t);
                    }
                    return(t);
                  }
                  t = xtc_transform_term_2_0(g_3, i_3, t);
                }
              }
            t = read_from_0_0(t);
            ;
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_15)), (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_15)), term_j_33);
          }
      }
      ;
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,x_29 = NULL;
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
            ATerm k_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_33) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_33 = ATgetArgument(t, 1);
              if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
                {
                  ATerm m_33 = ATgetFirst((ATermList) l_33);
                  ATerm n_33 = (ATerm) ATgetNext((ATermList) l_33);
                  if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
                    {
                      x_29 = ATgetFirst((ATermList) n_33);
                      {
                        ATerm o_33 = (ATerm) ATgetNext((ATermList) n_33);
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
          ATerm p_33 = t;
          int q_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = read_from_0_0(t);
              ;
              LocalPopChoice(q_33);
            }
          else
            {
              t = p_33;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_15), (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATinsert(ATempty, r_15), term_j_33);
            }
        }
      }
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm r_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_15 = NULL,y_15 = NULL;
      w_15 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_30 = NULL;
            t = eval_config_0_0(t);
            m_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_30);
            t = m_30;
            ;
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
          }
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, term_j_16);
        t = geq_0_0(t);
        t = w_15;
        t = u_108(t);
      }
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = r_33;
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm b_16 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm c_16 = NULL;
    c_16 = t;
    t = SSL_explode_string(c_16);
    return(t);
  }
  t = map_1_0(j_3, t);
  t = concat_0_0(t);
  b_16 = t;
  t = SSL_implode_string(b_16);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm d_16 = NULL;
  ATerm k_3 (ATerm t)
  {
    t = m_95(t);
    if(((d_16 != NULL) && (d_16 != t)))
      _fail(t);
    else
      d_16 = t;
    return(t);
  }
  t = fetch_1_0(k_3, t);
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
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_3 (ATerm t)
        {
          ATerm g_16 = NULL;
          g_16 = t;
          t = e_16;
          {
            ATerm n_3 (ATerm t)
            {
              ATerm k_16 = NULL,l_16 = NULL,n_16 = NULL;
              k_16 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_16), term_v_11), f_16), term_z_33), g_16);
              t = concat_strings_0_0(t);
              n_16 = t;
              t = SSL_access(n_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
              l_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_16, (ATerm) ATmakeAppl(sym_FILE_1, l_16));
              return(t);
            }
            t = fetch_elem_1_0(n_3, t);
          }
          return(t);
        }
        t = fetch_elem_1_0(l_3, t);
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        {
          ATerm b_34 = t;
          int c_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_16;
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm o_16 = NULL,s_30 = NULL,t_30 = NULL;
                  o_16 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_16), term_v_11), f_16);
                  t = concat_strings_0_0(t);
                  s_30 = t;
                  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, s_30));
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm d_34 = ATgetFirst((ATermList) t);
                      if(match_cons(d_34, sym__2))
                        {
                          ATerm g_34 = ATgetArgument(d_34, 0);
                          t_30 = ATgetArgument(d_34, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm f_34 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, o_16, (ATerm) ATmakeAppl(sym_FILE_1, t_30));
                  return(t);
                }
                t = fetch_elem_1_0(p_3, t);
              }
              ;
              LocalPopChoice(c_34);
            }
          else
            {
              t = b_34;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue))), f_16), (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_34), f_16), term_h_34);
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
  t = (ATerm) ATmakeAppl(sym__2, u_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_28), term_l_34), term_k_34), term_j_34));
  t = find_module_1_0(m_87, t);
  if(match_cons(t, sym__2))
    {
      ATerm m_34 = ATgetArgument(t, 0);
      ATerm n_34 = ATgetArgument(t, 1);
      if(match_cons(n_34, sym_FILE_1))
        {
          v_16 = ATgetArgument(n_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm q_3 (ATerm t)
    {
      ATerm y_16 = NULL;
      y_16 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_16), (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue))));
      t = y_16;
      return(t);
    }
    t = if_verbose3_1_0(q_3, t);
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
      ATerm o_34 = t;
      int p_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(p_34);
        }
      else
        {
          t = o_34;
          {
            ATerm q_34 = t;
            int r_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_30 = NULL,y_30 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_30 = ATgetFirst((ATermList) t);
                    y_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_17;
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm z_30 = NULL;
                    z_30 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_30, z_30);
                    t = z_98(t);
                    return(t);
                  }
                  t = fetch_1_0(t_3, t);
                  t = y_30;
                  t = h_17(t);
                }
                ;
                LocalPopChoice(r_34);
              }
            else
              {
                t = q_34;
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
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_34 = ATgetFirst((ATermList) t);
      if(match_cons(t_34, sym__2))
        {
          j_17 = ATgetArgument(t_34, 0);
          k_17 = ATgetArgument(t_34, 1);
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
  {
    ATerm v_3 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm u_34 = ATgetArgument(t, 0);
          if(((ATgetType(u_34) != AT_LIST) || !(ATisEmpty(u_34))))
            _fail(t);
          {
            ATerm v_34 = ATgetArgument(t, 1);
            if(((ATgetType(v_34) != AT_LIST) || !(ATisEmpty(v_34))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm w_3 (ATerm t)
    {
      ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm w_34 = ATgetArgument(t, 0);
          if(((ATgetType(w_34) == AT_LIST) && !(ATisEmpty(w_34))))
            {
              r_17 = ATgetFirst((ATermList) w_34);
              t_17 = (ATerm) ATgetNext((ATermList) w_34);
            }
          else
            _fail(t);
          {
            ATerm x_34 = ATgetArgument(t, 1);
            if(((ATgetType(x_34) == AT_LIST) && !(ATisEmpty(x_34))))
              {
                s_17 = ATgetFirst((ATermList) x_34);
                u_17 = (ATerm) ATgetNext((ATermList) x_34);
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
    ATerm x_3 (ATerm t)
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
    t = genzip_4_0(v_3, w_3, x_3, _id, t);
    q_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_17, m_17);
    {
      ATerm z_34 = t;
      int a_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm b_35 = ATgetArgument(t, 0);
              ATerm d_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_17;
          {
            ATerm a_4 (ATerm t)
            {
              t = m_17;
              return(t);
            }
            t = at_end_1_0(a_4, t);
          }
          ;
          LocalPopChoice(a_35);
        }
      else
        {
          t = z_34;
          {
            ATerm f_31 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_17, m_17));
            if(match_cons(t, sym__2))
              {
                ATerm e_35 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_35) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                f_31 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_31;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm f_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm f_18 = NULL;
        f_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_18);
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        ATerm h_4 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, h_4, t);
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        ATerm k_35 = t;
        int l_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              ATerm m_35 = t;
              int n_35 = stack_ptr;
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
                  LocalPopChoice(n_35);
                }
              else
                {
                  t = m_35;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, j_4, t);
            ;
            LocalPopChoice(l_35);
          }
        else
          {
            t = k_35;
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
      t = for_3_0(b_4, c_4, d_4, t);
      ;
      LocalPopChoice(j_35);
    }
  else
    {
      t = f_35;
      {
        ATerm k_4 (ATerm t)
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
        t = diff_1_0(k_4, t);
      }
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      if(((ATgetType(o_35) == AT_LIST) && !(ATisEmpty(o_35))))
        {
          z_18 = ATgetFirst((ATermList) o_35);
          a_19 = (ATerm) ATgetNext((ATermList) o_35);
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
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_35 = ATgetArgument(t, 0);
            ATerm s_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_19;
        {
          ATerm l_4 (ATerm t)
          {
            t = a_19;
            return(t);
          }
          t = at_end_1_0(l_4, t);
        }
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        {
          ATerm j_31 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_19, a_19));
          if(match_cons(t, sym__2))
            {
              ATerm t_35 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_35) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              j_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_31;
          t = concat_0_0(t);
        }
      }
    i_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_19, b_19);
    {
      ATerm u_35 = t;
      int v_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm w_35 = ATgetArgument(t, 0);
              ATerm x_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_19;
          {
            ATerm s_4 (ATerm t)
            {
              t = b_19;
              return(t);
            }
            t = at_end_1_0(s_4, t);
          }
          ;
          LocalPopChoice(v_35);
        }
      else
        {
          t = u_35;
          {
            ATerm n_31 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_19, b_19));
            if(match_cons(t, sym__2))
              {
                ATerm y_35 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_35) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                n_31 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_31;
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
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_88(t);
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
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
ATerm graph_nodes_roots_3_0 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm t)
{
  ATerm v_19 = NULL;
  ATerm t_4 (ATerm t)
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
        ATerm b_36 = ATgetArgument(t, 0);
        if(((ATgetType(b_36) != AT_LIST) || !(ATisEmpty(b_36))))
          _fail(t);
        {
          ATerm c_36 = ATgetArgument(t, 1);
        }
        {
          ATerm d_36 = ATgetArgument(t, 2);
        }
        z_19 = ATgetArgument(t, 3);
        a_20 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, z_19, a_20);
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(y_117, z_117, a_118, t);
        ;
        LocalPopChoice(f_36);
      }
    else
      {
        t = e_36;
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
  t = for_3_0(t_4, v_4, x_4, t);
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      {
        ATerm g_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_19;
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
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
        {
          ATerm j_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_31 = NULL;
              t = eval_config_0_0(t);
              r_31 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), r_31);
              t = r_31;
              ;
              LocalPopChoice(k_36);
            }
          else
            {
              t = j_36;
            }
          {
            ATerm y_4 (ATerm t)
            {
              ATerm l_36 = t;
              if((PushChoice() == 0))
                {
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = l_36;
                }
              return(t);
            }
            t = filter_1_0(y_4, t);
          }
        }
        ;
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
        t = (ATerm) ATempty;
      }
    r_20 = t;
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, q_20), term_n_36), term_m_36), term_h_31, (ATerm) ATempty);
    {
      ATerm z_4 (ATerm t)
      {
        ATerm u_31 = NULL,v_31 = NULL;
        u_31 = t;
        t = SSL_explode_term(u_31);
        if(match_cons(t, sym__2))
          {
            ATerm o_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_36) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_36 = ATgetArgument(t, 1);
              if(((ATgetType(p_36) == AT_LIST) && !(ATisEmpty(p_36))))
                {
                  v_31 = ATgetFirst((ATermList) p_36);
                  {
                    ATerm q_36 = (ATerm) ATgetNext((ATermList) p_36);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_31;
        {
          ATerm e_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_20), term_v_11);
            return(t);
          }
          t = get_module_1_0(e_5, t);
        }
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        ATerm s_20 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_36 = ATgetArgument(t, 0);
            ATerm s_36 = ATgetArgument(t, 1);
            if(match_cons(s_36, sym_Specification_1))
              {
                s_20 = ATgetArgument(s_36, 0);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = s_20;
        {
          ATerm f_5 (ATerm t)
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
          t = filter_1_0(f_5, t);
          t = concat_0_0(t);
        }
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        ATerm u_20 = NULL,v_20 = NULL;
        if(match_cons(t, sym__3))
          {
            ATerm t_36 = ATgetArgument(t, 0);
            u_20 = ATgetArgument(t, 1);
            v_20 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_20), u_20);
        return(t);
      }
      t = graph_nodes_roots_3_0(z_4, c_5, d_5, t);
      {
        ATerm h_5 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = term_u_36;
          return(t);
        }
        ATerm j_5 (ATerm t)
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
        ATerm k_5 (ATerm t)
        {
          ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm v_36 = ATgetArgument(t, 0);
              if(match_cons(v_36, sym__2))
                {
                  y_20 = ATgetArgument(v_36, 0);
                  a_21 = ATgetArgument(v_36, 1);
                }
              else
                _fail(t);
              {
                ATerm w_36 = ATgetArgument(t, 1);
                if(match_cons(w_36, sym__2))
                  {
                    z_20 = ATgetArgument(w_36, 0);
                    b_21 = ATgetArgument(w_36, 1);
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
        t = genzip_4_0(h_5, j_5, k_5, _id, t);
        t = _2_0(_id, flatten_stratego_0_0, t);
      }
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
        ATerm z_31 = NULL;
        t = o_21;
        t = k_0(t);
        z_31 = t;
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
          t = SSL_copy(p_21, z_31);
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
              ATerm d_32 = NULL;
              t = o_21;
              t = k_0(t);
              d_32 = t;
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
                                ATerm e_32 = NULL;
                                e_32 = t;
                                if((p_21 != t))
                                  {
                                    _fail(t);
                                  }
                                t = e_32;
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
                t = SSL_copy(p_21, d_32);
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
        ATerm g_32 = NULL;
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
            g_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_32;
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
      ATerm l_5 (ATerm t)
      {
        ATerm n_22 = NULL;
        n_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_22, n_22);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(l_5, t);
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
ATerm xtc_temp_files_1_0 (ATerm f_116 (ATerm), ATerm t)
{
  ATerm y_22 = NULL;
  ATerm m_5 (ATerm t)
  {
    t = term_m_31;
    return(t);
  }
  t = begin_scope_1_0(m_5, t);
  {
    ATerm n_5 (ATerm t)
    {
      ATerm z_22 = NULL;
      z_22 = t;
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_22 != NULL) && (y_22 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_22 = ATgetFirst((ATermList) t);
            {
              ATerm y_37 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(y_22);
        {
          ATerm o_5 (ATerm t)
          {
            ATerm z_37 = t;
            int a_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_23 = NULL;
                e_23 = t;
                t = SSL_remove(e_23);
                ;
                LocalPopChoice(a_38);
              }
            else
              {
                t = z_37;
              }
            return(t);
          }
          t = map_1_0(o_5, t);
          t = z_22;
          {
            ATerm r_5 (ATerm t)
            {
              t = term_m_31;
              return(t);
            }
            t = end_scope_1_0(r_5, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(f_116, n_5, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm g_116 (ATerm), ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_23 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm d_38 = t;
          int e_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_32 = NULL;
              t = eval_config_0_0(t);
              m_32 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), m_32);
              t = m_32;
              ;
              LocalPopChoice(e_38);
            }
          else
            {
              t = d_38;
            }
          k_23 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_23);
        }
        ;
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        t = term_f_38;
      }
    t = g_116(t);
    {
      ATerm u_5 (ATerm t)
      {
        ATerm g_38 = t;
        int h_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm i_38 = t;
              int j_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_32 = NULL;
                  t = eval_config_0_0(t);
                  q_32 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_32);
                  t = q_32;
                  ;
                  LocalPopChoice(j_38);
                }
              else
                {
                  t = i_38;
                }
            }
            ;
            LocalPopChoice(h_38);
          }
        else
          {
            t = g_38;
            t = term_k_38;
          }
        return(t);
      }
      t = copy_to_1_0(u_5, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(t_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_23 = NULL,o_23 = NULL;
  m_23 = t;
  t = term_h_31;
  t = whoami_0_0(t);
  o_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_23), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_23;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
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
  ATerm w_5 (ATerm t)
  {
    ATerm r_23 = NULL,s_23 = NULL;
    r_23 = t;
    t = SSL_string_to_int(r_23);
    s_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_23);
    t = r_23;
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_l_38;
    return(t);
  }
  t = ArgOption_3_0(v_5, w_5, y_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_6 (ATerm t)
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
      ATerm c_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_p_38;
        return(t);
      }
      ATerm d_6 (ATerm t)
      {
        t = term_q_38;
        return(t);
      }
      t = Option_3_0(b_6, c_6, d_6, t);
      ;
      LocalPopChoice(n_38);
    }
  else
    {
      t = m_38;
      {
        ATerm r_38 = t;
        int s_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm n_6 (ATerm t)
            {
              ATerm v_23 = NULL,w_23 = NULL;
              v_23 = t;
              t = SSL_string_to_int(v_23);
              w_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_23);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, v_23);
              return(t);
            }
            ATerm o_6 (ATerm t)
            {
              t = term_t_38;
              return(t);
            }
            t = ArgOption_3_0(m_6, n_6, o_6, t);
            ;
            LocalPopChoice(s_38);
          }
        else
          {
            t = r_38;
            {
              ATerm p_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm q_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_38;
                return(t);
              }
              ATerm r_6 (ATerm t)
              {
                t = term_v_38;
                return(t);
              }
              t = Option_3_0(p_6, q_6, r_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_24 = NULL;
      t = term_h_31;
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
      t = term_h_31;
      t = b_0(t);
      e_24 = t;
      t = (ATerm) ATinsert(CheckATermList(a_24), e_24);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
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
  ATerm t_6 (ATerm t)
  {
    ATerm h_24 = NULL;
    h_24 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_24);
    t = (ATerm) ATmakeAppl(sym_Output_1, h_24);
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = term_y_38;
    return(t);
  }
  t = ArgOption_3_0(s_6, t_6, u_6, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
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
  ATerm w_6 (ATerm t)
  {
    ATerm k_24 = NULL;
    k_24 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), k_24);
    t = (ATerm) ATmakeAppl(sym_Input_1, k_24);
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    t = term_z_38;
    return(t);
  }
  t = ArgOption_3_0(v_6, w_6, a_7, t);
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
      t = term_h_31;
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
          ATerm b_7 (ATerm t)
          {
            t = m_25;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(b_7, t);
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
              ATerm u_32 = NULL;
              t = eval_config_0_0(t);
              u_32 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_25, u_32);
              t = u_32;
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
            ATerm c_7 (ATerm t)
            {
              t = w_25;
              return(t);
            }
            t = at_end_1_0(c_7, t);
          }
          ;
          LocalPopChoice(n_39);
        }
      else
        {
          t = m_39;
          {
            ATerm y_32 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_25, w_25));
            if(match_cons(t, sym__2))
              {
                ATerm q_39 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_39) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                y_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_32;
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
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm s_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_7 (ATerm t)
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
      ATerm e_7 (ATerm t)
      {
        ATerm h_26 = NULL;
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_39, (ATerm) ATinsert(ATinsert(ATempty, h_26), term_u_39));
        t = extend_config_0_0(t);
        t = term_h_31;
        return(t);
      }
      ATerm f_7 (ATerm t)
      {
        t = term_v_39;
        return(t);
      }
      t = ArgOption_3_0(d_7, e_7, f_7, t);
      ;
      LocalPopChoice(t_39);
    }
  else
    {
      t = s_39;
      {
        ATerm w_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 (ATerm t)
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
            ATerm h_7 (ATerm t)
            {
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue)));
              t = term_h_31;
              return(t);
            }
            ATerm i_7 (ATerm t)
            {
              t = term_y_39;
              return(t);
            }
            t = Option_3_0(g_7, h_7, i_7, t);
            ;
            LocalPopChoice(x_39);
          }
        else
          {
            t = w_39;
            {
              ATerm z_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_7 (ATerm t)
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
                  ATerm l_7 (ATerm t)
                  {
                    ATerm k_26 = NULL;
                    k_26 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue)), k_26);
                    t = term_h_31;
                    return(t);
                  }
                  ATerm m_7 (ATerm t)
                  {
                    t = term_b_40;
                    return(t);
                  }
                  t = ArgOption_3_0(k_7, l_7, m_7, t);
                  ;
                  LocalPopChoice(a_40);
                }
              else
                {
                  t = z_39;
                  {
                    ATerm r_7 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    ATerm s_7 (ATerm t)
                    {
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                      t = term_h_31;
                      return(t);
                    }
                    ATerm u_7 (ATerm t)
                    {
                      t = term_c_40;
                      return(t);
                    }
                    t = Option_3_0(r_7, s_7, u_7, t);
                  }
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
  t = term_h_31;
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
        ATerm c_33 = NULL;
        t = eval_config_0_0(t);
        c_33 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_33);
        t = c_33;
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
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_26 = NULL,d_33 = NULL,e_33 = NULL;
  t = times_0_0(t);
  d_33 = t;
  t = SSL_explode_term(d_33);
  if(match_cons(t, sym__2))
    {
      ATerm h_40 = ATgetArgument(t, 0);
      e_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_33;
  {
    ATerm x_7 (ATerm t)
    {
      t = term_o_38;
      return(t);
    }
    ATerm y_7 (ATerm t)
    {
      ATerm h_33 = NULL,i_33 = NULL;
      if(match_cons(t, sym__2))
        {
          h_33 = ATgetArgument(t, 0);
          i_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_40 = t;
        int j_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(h_33, i_33);
            ;
            LocalPopChoice(j_40);
          }
        else
          {
            t = i_40;
            t = SSL_addr(h_33, i_33);
          }
      }
      return(t);
    }
    t = foldr_2_0(x_7, y_7, t);
    w_26 = t;
    t = SSL_TicksToSeconds(w_26);
  }
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
            ATerm s_33 = NULL;
            t = eval_config_0_0(t);
            s_33 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_33);
            t = s_33;
            ;
            LocalPopChoice(r_40);
          }
        else
          {
            t = q_40;
          }
        o_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_27, term_l_14);
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
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm z_7 (ATerm t)
  {
    ATerm q_27 = NULL,r_27 = NULL;
    t = run_time_0_0(t);
    q_27 = t;
    t = term_h_31;
    t = whoami_0_0(t);
    r_27 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), q_27), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), r_27));
    t = (ATerm) ATmakeAppl(sym__2, term_p_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_40), q_27), term_m_15), r_27));
    return(t);
  }
  t = if_verbose1_1_0(z_7, t);
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
            ATerm w_33 = NULL;
            t = eval_config_0_0(t);
            w_33 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), w_33);
            t = w_33;
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
        ATerm a_8 (ATerm t)
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
        t = fetch_1_0(a_8, t);
      }
    }
  t = n_110(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
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
        t = f_0(t);
        d_28 = t;
        t = u_27;
        {
          ATerm b_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_27), d_28);
            return(t);
          }
          t = reverse_acc_2_0(f_0, b_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_31;
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
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm d_41 = t;
        int e_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_34 = NULL;
            t = eval_config_0_0(t);
            a_34 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_34);
            t = a_34;
            ;
            LocalPopChoice(e_41);
          }
        else
          {
            t = d_41;
          }
      }
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      {
        ATerm d_8 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(d_8, t);
      }
    }
  t = term_f_41;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm e_8 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, e_8, t);
    {
      ATerm f_8 (ATerm t)
      {
        ATerm m_28 = NULL;
        m_28 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, m_28), term_g_41);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(f_8, t);
    }
  }
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
        ATerm e_34 = NULL;
        t = eval_config_0_0(t);
        e_34 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_34);
        t = e_34;
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
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_41 = t;
  int q_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm j_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_s_41;
        return(t);
      }
      ATerm k_8 (ATerm t)
      {
        t = term_t_41;
        return(t);
      }
      t = Option_3_0(i_8, j_8, k_8, t);
      ;
      LocalPopChoice(q_41);
    }
  else
    {
      t = p_41;
      {
        ATerm l_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_u_41;
          return(t);
        }
        ATerm p_8 (ATerm t)
        {
          t = term_v_41;
          return(t);
        }
        t = Option_3_0(l_8, n_8, p_8, t);
      }
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
      ATerm q_8 (ATerm t)
      {
        ATerm q_29 = NULL;
        q_29 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_29);
        t = (ATerm) ATmakeAppl(sym_Program_1, q_29);
        return(t);
      }
      ATerm r_8 (ATerm t)
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
                t = Cons_2_0(_id, r_8, t);
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
      t = Cons_2_0(q_8, r_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = a_30;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm d_42 = t;
      int e_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_113(t);
          ;
          LocalPopChoice(e_42);
        }
      else
        {
          t = d_42;
          {
            ATerm f_42 = t;
            int g_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_8 (ATerm t)
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
                ATerm y_8 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_h_42;
                  return(t);
                }
                ATerm a_9 (ATerm t)
                {
                  t = term_i_42;
                  return(t);
                }
                t = Option_3_0(w_8, y_8, a_9, t);
                ;
                LocalPopChoice(g_42);
              }
            else
              {
                t = f_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_8, t);
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
                            ATerm s_34 = NULL;
                            t = eval_config_0_0(t);
                            s_34 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_34);
                            t = s_34;
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
                      {
                        ATerm e_9 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(e_9, t);
                      }
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
                      ATerm y_34 = NULL;
                      t = eval_config_0_0(t);
                      y_34 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), y_34);
                      t = y_34;
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
                ATerm i_9 (ATerm t)
                {
                  ATerm m_9 (ATerm t)
                  {
                    if(((b_30 != NULL) && (b_30 != t)))
                      _fail(t);
                    else
                      b_30 = t;
                    return(t);
                  }
                  t = Undefined_1_0(m_9, t);
                  return(t);
                }
                t = fetch_1_0(i_9, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_30)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_p_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_30)), term_v_42));
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
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  ATerm n_9 (ATerm t)
  {
    ATerm a_43 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pack_stratego_options_0_0(t);
        ;
        LocalPopChoice(b_43);
      }
    else
      {
        t = a_43;
        {
          ATerm c_43 = t;
          int d_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
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
                          ATerm p_9 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm q_9 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_i_43;
                            return(t);
                          }
                          ATerm r_9 (ATerm t)
                          {
                            t = term_j_43;
                            return(t);
                          }
                          t = Option_3_0(p_9, q_9, r_9, t);
                          ;
                          LocalPopChoice(h_43);
                        }
                      else
                        {
                          t = g_43;
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
  ATerm o_9 (ATerm t)
  {
    ATerm t_9 (ATerm t)
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
                  ATerm c_35 = NULL;
                  t = eval_config_0_0(t);
                  c_35 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue)), c_35);
                  t = c_35;
                  ;
                  LocalPopChoice(p_43);
                }
              else
                {
                  t = o_43;
                }
              t = not_null(p_30);
              {
                ATerm u_9 (ATerm t)
                {
                  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
                  h_35 = t;
                  t = SSL_explode_string(h_35);
                  {
                    ATerm q_43 = t;
                    int r_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_10 (ATerm t)
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm s_43 = ATgetFirst((ATermList) t);
                              if(((ATgetType(s_43) != AT_INT) || (ATgetInt((ATermInt) s_43) != 47)))
                                _fail(t);
                              if(((g_35 != NULL) && (g_35 != (ATerm) ATgetNext((ATermList) t))))
                                _fail((ATerm) ATgetNext((ATermList) t));
                              else
                                g_35 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = at_suffix_rev_1_0(b_10, t);
                        t = not_null(g_35);
                        ;
                        LocalPopChoice(r_43);
                      }
                    else
                      {
                        t = q_43;
                      }
                    i_35 = t;
                    t = SSL_implode_string(i_35);
                    t = basename_1_0(_id, t);
                  }
                  return(t);
                }
                t = map_1_0(u_9, t);
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
    t = xtc_io_1_0(t_9, t);
    return(t);
  }
  t = option_wrap_4_0(n_9, default_usage_0_0, _id, o_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
