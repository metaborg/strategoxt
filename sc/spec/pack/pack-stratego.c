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
ATerm term_l_43;
ATerm term_k_43;
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
ATerm term_g_38;
ATerm term_s_37;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_h_36;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_p_33;
ATerm term_x_32;
ATerm term_w_31;
ATerm term_m_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_u_28;
ATerm term_f_28;
ATerm term_j_25;
ATerm term_g_25;
ATerm term_s_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_x_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_g_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
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
ATerm term_s_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_i_11;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_o_10;
ATerm term_n_10;
void init_constant_terms (void)
{
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_f_14, term_m_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_v_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_m_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_z_16);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_l_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_l_18, term_m_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_u_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_g_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_t_19, term_u_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_k_20, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_o_20, term_p_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_h_21, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_21, term_l_21, term_m_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_21, term_r_21, term_s_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_21, term_v_21, term_z_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_22, term_c_22, term_d_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_22, term_l_22, term_n_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_22, term_s_22, term_u_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_22, term_a_23, term_b_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_23, term_i_23, term_m_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_23, term_v_23, term_w_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_24, term_d_24, term_e_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_24, term_i_24, term_j_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_24, term_m_24, term_o_24);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_stdout_0);
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
  term_q_41 = (ATerm) ATmakeAppl(sym__3, term_r_39, term_p_41, term_a_31);
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
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm b_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm o_107 (ATerm), ATerm);
ATerm t_0 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm basename_1_0 (ATerm w_103 (ATerm), ATerm);
ATerm at_suffix_rev_1_0 (ATerm x_95 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_94 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm Imports_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm d_1 (ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm _2_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm);
ATerm filter_1_0 (ATerm d_102 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm j_109 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm c_109 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm b_109 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm d_109 (ATerm), ATerm);
ATerm union_1_0 (ATerm d_99 (ATerm), ATerm);
ATerm x_1 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm g_113 (ATerm), ATerm);
ATerm p_10 (ATerm f_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm repeat_1_0 (ATerm j_88 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm assert_1_0 (ATerm v_105 (ATerm), ATerm);
ATerm u_12 (ATerm j_12, ATerm);
ATerm v_12 (ATerm l_12, ATerm m_12, ATerm n_12, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm a_109 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm l_95 (ATerm), ATerm);
ATerm find_module_1_0 (ATerm m_87 (ATerm), ATerm);
ATerm get_module_1_0 (ATerm l_87 (ATerm), ATerm);
ATerm diff_1_0 (ATerm y_98 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm);
ATerm for_3_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm pack_stratego_modules_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_105 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm e_116 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm xtc_io_1_0 (ATerm f_116 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm w_5 (ATerm);
ATerm z_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_95 (ATerm), ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_7 (ATerm);
ATerm need_help_1_0 (ATerm m_110 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm j_79 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm j_95 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_113 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm parse_options_1_0 (ATerm c_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm d_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm n_9 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_0 = ATgetArgument(t, 0);
      if(match_cons(z_0, sym_Stream_1))
        {
          p_0 = ATgetArgument(z_0, 0);
        }
      else
        _fail(t);
      q_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(p_0, q_0);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_0);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm f_0 = NULL,n_0 = NULL;
  f_0 = t;
  t = xtc_new_file_0_0(t);
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_0, f_0);
  t = WriteToFile_1_0(b_0, t);
  t = SSL_close_file(n_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_0);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm s_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_0;
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        {
          ATerm o_0 (ATerm t)
          {
            ATerm v_9 = t;
            int w_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(w_9);
              }
            else
              {
                t = v_9;
                {
                  ATerm y_0 = NULL;
                  t = Cons_2_0(_id, o_0, t);
                  y_0 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_0), s_0);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, o_0, t);
        }
      }
  }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm c_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL;
  c_1 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
  {
    ATerm x_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = eval_config_0_0(t);
        u_0 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_0);
        t = u_0;
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = x_9;
      }
    {
      ATerm a_10 = t;
      int b_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue)));
          {
            ATerm d_10 = t;
            int g_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_1 = NULL;
                t = eval_config_0_0(t);
                e_1 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue)), e_1);
                t = e_1;
                ;
                LocalPopChoice(g_10);
              }
            else
              {
                t = d_10;
              }
          }
          ;
          LocalPopChoice(b_10);
        }
      else
        {
          t = a_10;
          {
            ATerm h_10 = t;
            if((PushChoice() == 0))
              {
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue)));
                {
                  ATerm i_10 = t;
                  int j_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_1 = NULL;
                      t = eval_config_0_0(t);
                      v_1 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue)), v_1);
                      t = v_1;
                      ;
                      LocalPopChoice(j_10);
                    }
                  else
                    {
                      t = i_10;
                    }
                }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_10;
              }
          }
        }
      g_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_10), term_n_10), g_1);
      t = concat_strings_0_0(t);
      h_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_1, term_t_10);
      t = open_file_0_0(t);
      i_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_10, (ATerm) ATinsert(CheckATermList(c_1), term_i_11));
      t = separate_by_0_0(t);
      j_1 = t;
      t = SSL_printnl(i_1, (ATerm) ATinsert(CheckATermList(j_1), g_1));
      t = SSL_close_file(i_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_1, term_t_10);
  t = open_stream_0_0(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_1, l_1);
  t = o_107(t);
  t = fclose_0_0(t);
  t = l_1;
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      if(match_cons(u_11, sym_Stream_1))
        {
          p_1 = ATgetArgument(u_11, 0);
        }
      else
        _fail(t);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(p_1, q_1);
  s_1 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), s_1);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_1);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  n_1 = t;
  t = xtc_new_file_0_0(t);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, n_1);
  t = WriteToFile_1_0(t_0, t);
  t = SSL_close_file(o_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
  return(t);
}
ATerm w_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,d_2 = NULL;
  w_1 = t;
  t = SSL_explode_string(w_1);
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          ATerm y_11 = t;
          int z_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, f_2, t);
              ;
              LocalPopChoice(z_11);
            }
          else
            {
              t = y_11;
              {
                ATerm a_12 = t;
                int g_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(w_0, _id, t);
                    ;
                    LocalPopChoice(g_12);
                  }
                else
                  {
                    t = a_12;
                    t = Cons_2_0(x_0, w_103, t);
                    t = (ATerm) ATempty;
                  }
              }
            }
          return(t);
        }
        t = f_2(t);
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
      }
    d_2 = t;
    t = SSL_implode_string(d_2);
  }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm x_95 (ATerm), ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm i_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_2, t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = i_12;
        t = x_95(t);
      }
    return(t);
  }
  t = g_2(t);
  return(t);
}
ATerm map_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = Cons_2_0(y_94, w_2, t);
      }
    return(t);
  }
  t = w_2(t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm r_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = r_12;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_3 = NULL;
      d_3 = t;
      t = SSL_is_string(d_3);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = b_13;
      {
        ATerm e_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_1, t);
            ;
            LocalPopChoice(g_13);
          }
        else
          {
            t = e_13;
            {
              ATerm k_3 = NULL,q_3 = NULL,s_3 = NULL;
              k_3 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_3 = ATgetArgument(t, 0);
                  t = q_3;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_3 = ATgetArgument(t, 0);
                      t = q_3;
                      {
                        ATerm h_13 = t;
                        int i_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_3);
                            {
                              ATerm k_13 = t;
                              int l_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_3 = NULL;
                                  t = eval_config_0_0(t);
                                  a_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_3, a_3);
                                  t = a_3;
                                  ;
                                  LocalPopChoice(l_13);
                                }
                              else
                                {
                                  t = k_13;
                                }
                            }
                            ;
                            LocalPopChoice(i_13);
                          }
                        else
                          {
                            t = h_13;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_3), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = q_3;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_3 = NULL,z_3 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_3 = ATgetArgument(t, 0);
                          s_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_3;
                      t = eval_config_0_0(t);
                      y_3 = t;
                      t = s_3;
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
ATerm Imports_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  i_4 = t;
  if(match_cons(t, sym_Imports_1))
    {
      g_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_4);
  f_4 = t;
  t = g_4;
  t = c_80(t);
  h_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, h_4), f_4);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm m_4 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      m_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_4;
  t = filter_1_0(d_1, t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm m_13 = t;
  if((PushChoice() == 0))
    {
      t = Imports_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_13;
    }
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
  t = map_1_0(b_1, t);
  t = concat_0_0(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_4);
  return(t);
}
ATerm _2_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  s_4 = t;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_4);
  n_4 = t;
  t = o_4;
  t = h_69(t);
  q_4 = t;
  t = p_4;
  t = i_69(t);
  r_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, q_4, r_4), n_4);
  return(t);
}
ATerm genzip_4_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_97(t);
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        t = d_97(t);
        t = _2_0(f_97, w_4, t);
        t = e_97(t);
      }
    return(t);
  }
  t = w_4(t);
  return(t);
}
ATerm filter_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_1 (ATerm t)
            {
              t = filter_1_0(d_102, t);
              return(t);
            }
            t = Cons_2_0(d_102, f_1, t);
            ;
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            {
              ATerm b_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_13 = ATgetFirst((ATermList) t);
                  b_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_5;
              t = filter_1_0(d_102, t);
            }
          }
      }
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_5 = NULL,n_5 = NULL;
  l_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          n_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(n_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm s_5 = NULL,u_5 = NULL,v_5 = NULL;
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
              ATerm b_4 = NULL;
              t = eval_config_0_0(t);
              b_4 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), b_4);
              t = b_4;
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
    s_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_5, term_f_14);
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(s_5, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          t = SSL_subtr(s_5, (ATerm) ATmakeInt(1));
        }
      v_5 = t;
      t = SSL_int_to_string(v_5);
      u_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, u_5), term_a_14);
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,a_6 = NULL;
  t = term_j_14;
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm m_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_5 = NULL;
              t = eval_config_0_0(t);
              d_5 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_5);
              t = d_5;
              ;
              LocalPopChoice(p_14);
            }
          else
            {
              t = m_14;
            }
        }
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        t = term_f_14;
      }
    x_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_5, term_f_14);
    {
      ATerm q_14 = t;
      int v_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(x_5, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(v_14);
        }
      else
        {
          t = q_14;
          t = SSL_subtr(x_5, (ATerm) ATmakeInt(1));
        }
      a_6 = t;
      t = SSL_int_to_string(a_6);
      y_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, y_5), term_j_14);
    }
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(b_117, c_117, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
  z_6 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      a_7 = ATgetArgument(t, 0);
      {
        ATerm k_5 = NULL;
        t = SSL_int_to_string(a_7);
        k_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_14), k_5), term_w_14);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm j_6 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          a_7 = ATgetArgument(t, 0);
          b_7 = ATgetArgument(t, 1);
          c_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(b_7);
      j_6 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_7), term_z_14), j_6), term_y_14), a_7);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_24), term_k_24), term_g_24), term_y_23), term_q_23), term_c_23), term_v_22), term_q_22), term_j_22), term_a_22), term_t_21), term_n_21), term_j_21), term_x_20), term_m_20), term_b_20), term_q_19), term_m_19), term_v_18), term_n_18), term_e_18), term_a_18), term_s_17), term_g_17), term_v_16), term_n_16), term_x_15), term_o_15);
        {
          ATerm r_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm t_24 = ATgetArgument(t, 0);
                if((i_7 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm u_24 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(r_1, t);
        }
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_7);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  u_7 = t;
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_8 = NULL,x_6 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_24 = ATgetArgument(t, 0);
            a_8 = ATgetArgument(t, 1);
            {
              ATerm e_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_8;
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
          x_6 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATinsert(ATempty, x_6), term_j_25));
        }
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
      }
    t = u_7;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  h_8 = t;
  t = fork_0_0(t);
  i_8 = t;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_8;
        t = j_109(t);
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = SSL_waitpid(i_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_25 = ATgetArgument(t, 0);
            if(((ATgetType(o_25) != AT_INT) || (ATgetInt((ATermInt) o_25) != 0)))
              _fail(t);
            {
              ATerm p_25 = ATgetArgument(t, 1);
            }
            {
              ATerm q_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_8;
      }
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm s_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8 = NULL,p_8 = NULL;
      n_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_7 = NULL;
            t = eval_config_0_0(t);
            k_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_7);
            t = k_7;
            ;
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
          }
        p_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_8, term_v_23);
        t = geq_0_0(t);
        t = n_8;
        t = c_109(t);
      }
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = s_25;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_8 = NULL,v_8 = NULL;
      t_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm c_26 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 = NULL;
            t = eval_config_0_0(t);
            o_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_7);
            t = o_7;
            ;
            LocalPopChoice(d_26);
          }
        else
          {
            t = c_26;
          }
        v_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_8, term_o_19);
        t = geq_0_0(t);
        t = t_8;
        t = b_109(t);
      }
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm e_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_8 = NULL,y_8 = NULL;
      w_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_7 = NULL;
            t = eval_config_0_0(t);
            s_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_7);
            t = s_7;
            ;
            LocalPopChoice(p_26);
          }
        else
          {
            t = m_26;
          }
        y_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_8, term_t_16);
        t = geq_0_0(t);
        t = w_8;
        t = d_109(t);
      }
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = e_26;
    }
  return(t);
}
ATerm union_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8;
  {
    ATerm b_9 (ATerm t)
    {
      ATerm q_26 = t;
      int s_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_9;
          ;
          LocalPopChoice(s_26);
        }
      else
        {
          t = q_26;
          {
            ATerm t_26 = t;
            int v_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_7 = NULL,b_8 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_7 = ATgetFirst((ATermList) t);
                    b_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = a_9;
                {
                  ATerm u_1 (ATerm t)
                  {
                    ATerm c_8 = NULL;
                    c_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_7, c_8);
                    t = d_99(t);
                    return(t);
                  }
                  t = fetch_1_0(u_1, t);
                  t = b_8;
                  t = b_9(t);
                }
                ;
                LocalPopChoice(v_26);
              }
            else
              {
                t = t_26;
                t = Cons_2_0(_id, b_9, t);
              }
          }
        }
      return(t);
    }
    t = b_9(t);
  }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      if((m_9 != ATgetArgument(t, 1)))
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
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__3))
    {
      e_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
      g_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_9, f_9);
  {
    ATerm w_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_27 = ATgetArgument(t, 0);
            ATerm b_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_9, f_9);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = w_26;
        t = (ATerm) ATempty;
      }
    h_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_9, g_9);
    t = union_1_0(x_1, t);
    i_9 = t;
    t = SSL_table_put(e_9, f_9, i_9);
    t = (ATerm) ATmakeAppl(sym__3, e_9, f_9, g_9);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm t_9 = NULL,u_9 = NULL;
      if(match_cons(t, sym__2))
        {
          t_9 = ATgetArgument(t, 0);
          u_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, s_9, t_9, u_9);
      t = g_113(t);
      return(t);
    }
    t = map_1_0(y_1, t);
  }
  return(t);
}
ATerm p_10 (ATerm f_10, ATerm t)
{
  t = SSL_fclose(f_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_10 = NULL,m_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_10 = ATgetArgument(t, 0);
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_10);
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            t = p_10(m_10, t);
          }
      }
    }
  else
    {
      t = p_10(m_10, t);
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
ATerm z_1 (ATerm t)
{
  ATerm z_10 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_10;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  t = SSL_is_string(d_11);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      ATerm g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_9 = NULL,c_10 = NULL;
        y_9 = t;
        t = SSL_explode_term(y_9);
        if(match_cons(t, sym__2))
          {
            ATerm n_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_27) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_27 = ATgetArgument(t, 1);
              if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
                {
                  c_10 = ATgetFirst((ATermList) o_27);
                  {
                    ATerm q_27 = (ATerm) ATgetNext((ATermList) o_27);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_10;
        if(match_cons(t, sym_stderr_0))
          {
            t = c_10;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = c_10;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_10;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          ATerm t_27 = t;
          int w_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
              t = _2_0(z_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_10 = ATgetArgument(t, 0);
                  x_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_10, x_10);
              y_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_10);
              ;
              LocalPopChoice(w_27);
            }
          else
            {
              t = t_27;
              {
                ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
                t = _2_0(a_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_11 = ATgetArgument(t, 0);
                    b_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_11, b_11);
                c_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11 = NULL;
      h_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_11, term_f_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm e_10 = NULL;
        e_10 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_10), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = e_10;
        _fail(t);
      }
    }
  e_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(g_11);
  f_11 = t;
  t = e_11;
  t = fclose_0_0(t);
  t = f_11;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_11 = NULL;
      j_11 = t;
      t = SSL_access(j_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(m_28);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_28;
      {
        ATerm n_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_10 = NULL;
            ATerm s_28 = t;
            if((PushChoice() == 0))
              {
                ATerm k_11 = NULL;
                k_11 = t;
                t = SSL_access(k_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_28;
              }
            l_10 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_10), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = l_10;
            ;
            LocalPopChoice(p_28);
          }
        else
          {
            t = n_28;
            {
              ATerm u_10 = NULL;
              u_10 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_10), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = u_10;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm h_12 = NULL;
  h_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_12), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = h_12;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_12), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = w_12;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = o_11;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = p_11;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm q_11 = NULL;
  q_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = q_11;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  t = if_verbose5_1_0(b_2, t);
  {
    ATerm t_28 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, l_11));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_28;
      }
    m_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, l_11));
    t = m_11;
    t = if_verbose4_1_0(c_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(e_2, t);
    n_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_28, n_11);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(h_2, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, l_11), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_u_28, (ATerm)ATmakeAppl(sym_Imported_1, l_11), (ATerm) ATempty);
    t = if_verbose4_1_0(i_2, t);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm r_11 (ATerm t)
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_88(t);
        t = r_11(t);
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
      }
    return(t);
  }
  t = r_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_13 = NULL;
            t = eval_config_0_0(t);
            n_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), n_13);
            t = n_13;
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
          }
      }
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
        ATerm j_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(m_29);
          }
        else
          {
            t = j_29;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_13), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = s_13;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm p_29 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_29;
      }
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_13), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = v_13;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_11 = NULL;
  t = if_verbose5_1_0(j_2, t);
  s_11 = t;
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        {
          ATerm t_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_11 = t;
          t = repeat_1_0(k_2, t);
          t = t_11;
        }
      }
    t = s_11;
    t = if_verbose5_1_0(l_2, t);
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_14), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = g_14;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm e_17 = NULL;
  e_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_17), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = e_17;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm f_21 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(q_2, t);
  f_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_21), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = f_21;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  d_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), d_21);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_21, e_21);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(m_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm u_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_15 = NULL,p_15 = NULL,j_16 = NULL;
            if(match_cons(t, sym__2))
              {
                n_15 = ATgetArgument(t, 0);
                p_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, n_15));
            {
              ATerm n_2 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((p_15 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((j_16 != NULL) && (j_16 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      j_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(n_2, t);
              t = not_null(j_16);
            }
            ;
            LocalPopChoice(y_29);
          }
        else
          {
            t = u_29;
            {
              ATerm y_16 = NULL,b_17 = NULL;
              y_16 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, y_16));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_29 = ATgetFirst((ATermList) t);
                  if(match_cons(z_29, sym__2))
                    {
                      ATerm f_30 = ATgetArgument(z_29, 0);
                      b_17 = ATgetArgument(z_29, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm b_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = b_17;
            }
          }
        t = if_verbose5_1_0(o_2, t);
      }
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm x_11 = NULL;
        x_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), x_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_30), x_11), term_g_30);
        t = if_verbose5_1_0(p_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm assert_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_105(t);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_12, b_12, c_12);
  t = table_push_0_0(t);
  {
    ATerm i_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(d_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_30);
      }
    else
      {
        t = i_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_12 = ATgetFirst((ATermList) t);
        f_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(d_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(f_12), (ATerm) ATinsert(CheckATermList(e_12), b_12)));
    t = (ATerm) ATmakeAppl(sym__2, b_12, c_12);
  }
  return(t);
}
ATerm u_12 (ATerm j_12, ATerm t)
{
  t = j_12;
  {
    ATerm l_30 = t;
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
        t = l_30;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, j_12, term_t_10);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm v_12 (ATerm l_12, ATerm m_12, ATerm n_12, ATerm t)
{
  t = SSL_open_file(l_12, m_12);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_12 = NULL,s_12 = NULL,t_12 = NULL;
  q_12 = t;
  if(match_cons(t, sym__2))
    {
      s_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
      {
        ATerm t_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_12(q_12, t);
            ;
            LocalPopChoice(v_30);
          }
        else
          {
            t = t_30;
            t = v_12(s_12, t_12, q_12, t);
          }
      }
    }
  else
    {
      t = u_12(q_12, t);
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  t = SSL_explode_string(z_12);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  t = SSL_explode_string(a_13);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_12 = NULL;
  t = _2_0(r_2, s_2, t);
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_13 = NULL,f_13 = NULL;
        if(match_cons(t, sym__2))
          {
            c_13 = ATgetArgument(t, 0);
            f_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_13;
        {
          ATerm t_2 (ATerm t)
          {
            t = f_13;
            return(t);
          }
          t = at_end_1_0(t_2, t);
        }
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm t_22 = NULL,w_22 = NULL;
          t_22 = t;
          t = SSL_explode_term(t_22);
          if(match_cons(t, sym__2))
            {
              ATerm z_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_30) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              w_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_22;
          t = concat_0_0(t);
        }
      }
    y_12 = t;
    t = SSL_implode_string(y_12);
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
  ATerm j_13 = NULL;
  t = term_a_31;
  t = new_0_0(t);
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_13, term_b_31);
  t = conc_strings_0_0(t);
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL;
        o_13 = t;
        t = SSL_access(o_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
      }
  }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_13 = NULL;
  t = new_file_0_0(t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_13, term_t_10);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, r_13, term_a_31);
  t = assert_1_0(u_2, t);
  t = r_13;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL;
  n_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_24 = NULL,i_25 = NULL,y_26 = NULL,e_27 = NULL;
      t = n_14;
      t = xtc_new_file_0_0(t);
      x_24 = t;
      t = m_0(t);
      i_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_25, (ATerm) ATinsert(ATinsert(ATempty, x_24), term_f_31));
      {
        ATerm g_31 = t;
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
            t = i_25;
            {
              ATerm v_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, x_24), term_f_31);
                return(t);
              }
              t = at_end_1_0(v_2, t);
            }
            ;
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            {
              ATerm x_26 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_25, (ATerm) ATinsert(ATinsert(ATempty, x_24), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm k_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_31) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  x_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_26;
              t = concat_0_0(t);
            }
          }
        y_26 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        e_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_27, y_26);
        {
          ATerm x_2 (ATerm t)
          {
            t = SSL_execvp(e_27, y_26);
            return(t);
          }
          t = fork_and_wait_1_0(x_2, t);
          t = SSL_close_file(x_24);
          t = (ATerm) ATmakeAppl(sym_FILE_1, x_24);
        }
      }
    }
  else
    {
      ATerm a_29 = NULL,b_29 = NULL,w_29 = NULL,x_29 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_14;
      t = xtc_new_file_0_0(t);
      a_29 = t;
      t = m_0(t);
      b_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_29), term_f_31), o_14), term_m_31));
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm q_31 = ATgetArgument(t, 0);
                ATerm r_31 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_29;
            {
              ATerm y_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_29), term_f_31), o_14), term_m_31);
                return(t);
              }
              t = at_end_1_0(y_2, t);
            }
            ;
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            {
              ATerm v_29 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_29), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), o_14), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm u_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_31) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  v_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_29;
              t = concat_0_0(t);
            }
          }
        w_29 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        x_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_29, w_29);
        {
          ATerm z_2 (ATerm t)
          {
            t = SSL_execvp(x_29, w_29);
            return(t);
          }
          t = fork_and_wait_1_0(z_2, t);
          t = SSL_close_file(a_29);
          t = (ATerm) ATmakeAppl(sym_FILE_1, a_29);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  u_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_14);
  r_14 = t;
  t = s_14;
  t = n_79(t);
  t_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, t_14), r_14);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm v_31 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_31;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  b_15 = t;
  t = pass_verbose_0_0(t);
  c_15 = t;
  t = b_15;
  t = pass_keep_0_0(t);
  d_15 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_30 = NULL;
        t = eval_config_0_0(t);
        u_30 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), u_30);
        t = u_30;
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
      }
    e_15 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_15), d_15), c_15);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  f_15 = t;
  t = pass_verbose_0_0(t);
  g_15 = t;
  t = f_15;
  t = pass_keep_0_0(t);
  h_15 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_30 = NULL;
        t = eval_config_0_0(t);
        y_30 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), y_30);
        t = y_30;
        ;
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
      }
    i_15 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_15), h_15), g_15);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm e_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_15 = NULL,p_30 = NULL,q_30 = NULL;
      ATerm c_3 (ATerm t)
      {
        if(((a_15 != NULL) && (a_15 != t)))
          _fail(t);
        else
          a_15 = t;
        return(t);
      }
      t = _2_0(b_3, c_3, t);
      p_30 = t;
      t = SSL_explode_term(p_30);
      if(match_cons(t, sym__2))
        {
          ATerm h_32 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) h_32) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm i_32 = ATgetArgument(t, 1);
            if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
              {
                ATerm k_32 = ATgetFirst((ATermList) i_32);
                ATerm l_32 = (ATerm) ATgetNext((ATermList) i_32);
                if(((ATgetType(l_32) == AT_LIST) && !(ATisEmpty(l_32))))
                  {
                    q_30 = ATgetFirst((ATermList) l_32);
                    {
                      ATerm m_32 = (ATerm) ATgetNext((ATermList) l_32);
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
      t = q_30;
      {
        ATerm o_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_32 = t;
            int s_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_32 = t;
                int w_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(w_32);
                  }
                else
                  {
                    t = t_32;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(s_32);
                t = xtc_transform_file_2_0(e_3, f_3, t);
              }
            else
              {
                t = q_32;
                t = xtc_transform_term_2_0(g_3, h_3, t);
              }
            t = read_from_0_0(t);
            ;
            LocalPopChoice(p_32);
          }
        else
          {
            t = o_32;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_15)), (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_15)), term_x_32);
          }
      }
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = e_32;
      {
        ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,l_31 = NULL;
        q_15 = t;
        if(match_cons(t, sym__2))
          {
            r_15 = ATgetArgument(t, 0);
            s_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_15;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        t = SSL_explode_term(q_15);
        if(match_cons(t, sym__2))
          {
            ATerm y_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_33 = ATgetArgument(t, 1);
              if(((ATgetType(a_33) == AT_LIST) && !(ATisEmpty(a_33))))
                {
                  ATerm b_33 = ATgetFirst((ATermList) a_33);
                  ATerm c_33 = (ATerm) ATgetNext((ATermList) a_33);
                  if(((ATgetType(c_33) == AT_LIST) && !(ATisEmpty(c_33))))
                    {
                      l_31 = ATgetFirst((ATermList) c_33);
                      {
                        ATerm d_33 = (ATerm) ATgetNext((ATermList) c_33);
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
        t = l_31;
        {
          ATerm e_33 = t;
          int h_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = read_from_0_0(t);
              ;
              LocalPopChoice(h_33);
            }
          else
            {
              t = e_33;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_15), (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATinsert(ATempty, s_15), term_x_32);
            }
        }
      }
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_15 = NULL,y_15 = NULL;
      w_15 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_31 = NULL;
            t = eval_config_0_0(t);
            p_31 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_31);
            t = p_31;
            ;
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
          }
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, term_a_16);
        t = geq_0_0(t);
        t = w_15;
        t = a_109(t);
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
ATerm i_3 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  t = SSL_explode_string(c_16);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm b_16 = NULL;
  t = map_1_0(i_3, t);
  t = concat_0_0(t);
  b_16 = t;
  t = SSL_implode_string(b_16);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm d_16 = NULL;
  ATerm j_3 (ATerm t)
  {
    t = l_95(t);
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
ATerm find_module_1_0 (ATerm m_87 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_87(t);
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_3 (ATerm t)
        {
          ATerm g_16 = NULL;
          ATerm m_3 (ATerm t)
          {
            ATerm h_16 = NULL,i_16 = NULL,k_16 = NULL;
            h_16 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_16), term_n_10), f_16), term_p_33), not_null(g_16));
            t = concat_strings_0_0(t);
            k_16 = t;
            t = SSL_access(k_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
            i_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_16, (ATerm) ATmakeAppl(sym_FILE_1, i_16));
            return(t);
          }
          if(((g_16 != NULL) && (g_16 != t)))
            _fail(t);
          else
            g_16 = t;
          t = e_16;
          t = fetch_elem_1_0(m_3, t);
          return(t);
        }
        t = fetch_elem_1_0(l_3, t);
        ;
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        {
          ATerm q_33 = t;
          int s_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_16;
              {
                ATerm n_3 (ATerm t)
                {
                  ATerm l_16 = NULL,s_31 = NULL,t_31 = NULL;
                  l_16 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_16), term_n_10), f_16);
                  t = concat_strings_0_0(t);
                  s_31 = t;
                  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, s_31));
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm t_33 = ATgetFirst((ATermList) t);
                      if(match_cons(t_33, sym__2))
                        {
                          ATerm w_33 = ATgetArgument(t_33, 0);
                          t_31 = ATgetArgument(t_33, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm u_33 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, l_16, (ATerm) ATmakeAppl(sym_FILE_1, t_31));
                  return(t);
                }
                t = fetch_elem_1_0(n_3, t);
              }
              ;
              LocalPopChoice(s_33);
            }
          else
            {
              t = q_33;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue))), f_16), (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_33), f_16), term_x_33);
            }
        }
      }
  }
  return(t);
}
ATerm get_module_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  t = basename_1_0(_id, t);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_28), term_c_34), term_b_34), term_a_34));
  t = find_module_1_0(l_87, t);
  if(match_cons(t, sym__2))
    {
      ATerm e_34 = ATgetArgument(t, 0);
      ATerm f_34 = ATgetArgument(t, 1);
      if(match_cons(f_34, sym_FILE_1))
        {
          p_16 = ATgetArgument(f_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm o_3 (ATerm t)
    {
      ATerm r_16 = NULL;
      r_16 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_16), (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue))));
      t = r_16;
      return(t);
    }
    t = if_verbose3_1_0(o_3, t);
    t = parse_module_0_0(t);
    q_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_16, q_16);
  }
  return(t);
}
ATerm diff_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,c_17 = NULL;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_17;
  {
    ATerm d_17 (ATerm t)
    {
      ATerm g_34 = t;
      int k_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(k_34);
        }
      else
        {
          t = g_34;
          {
            ATerm l_34 = t;
            int o_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_31 = NULL,y_31 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_31 = ATgetFirst((ATermList) t);
                    y_31 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = c_17;
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm z_31 = NULL;
                    z_31 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_31, z_31);
                    t = y_98(t);
                    return(t);
                  }
                  t = fetch_1_0(p_3, t);
                  t = y_31;
                  t = d_17(t);
                }
                ;
                LocalPopChoice(o_34);
              }
            else
              {
                t = l_34;
                t = Cons_2_0(_id, d_17, t);
              }
          }
        }
      return(t);
    }
    t = d_17(t);
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_34 = ATgetArgument(t, 0);
      if(((ATgetType(p_34) != AT_LIST) || !(ATisEmpty(p_34))))
        _fail(t);
      {
        ATerm q_34 = ATgetArgument(t, 1);
        if(((ATgetType(q_34) != AT_LIST) || !(ATisEmpty(q_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,t_17 = NULL,u_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
        {
          q_17 = ATgetFirst((ATermList) r_34);
          t_17 = (ATerm) ATgetNext((ATermList) r_34);
        }
      else
        _fail(t);
      {
        ATerm s_34 = ATgetArgument(t, 1);
        if(((ATgetType(s_34) == AT_LIST) && !(ATisEmpty(s_34))))
          {
            r_17 = ATgetFirst((ATermList) s_34);
            u_17 = (ATerm) ATgetNext((ATermList) s_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_17, r_17), (ATerm) ATmakeAppl(sym__2, t_17, u_17));
  return(t);
}
ATerm u_3 (ATerm t)
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
  ATerm f_17 = NULL,j_17 = NULL,k_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_34 = ATgetFirst((ATermList) t);
      if(match_cons(t_34, sym__2))
        {
          f_17 = ATgetArgument(t_34, 0);
          j_17 = ATgetArgument(t_34, 1);
        }
      else
        _fail(t);
      k_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_17);
  if(match_cons(t, sym__2))
    {
      m_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_17);
  if(match_cons(t, sym__2))
    {
      if((m_17 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_17, n_17);
  t = genzip_4_0(r_3, t_3, u_3, _id, t);
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_17, k_17);
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_34 = ATgetArgument(t, 0);
            ATerm x_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_17;
        {
          ATerm v_3 (ATerm t)
          {
            t = k_17;
            return(t);
          }
          t = at_end_1_0(v_3, t);
        }
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        {
          ATerm f_32 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_17, k_17));
          if(match_cons(t, sym__2))
            {
              ATerm y_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_34) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_32 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_32;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_18);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = _2_0(_id, c_4, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm z_34 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, d_4, t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = z_34;
      {
        ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
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
            r_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_18), q_18), r_18);
      }
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
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
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm e_4 (ATerm t)
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
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(w_3, x_3, a_4, t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      t = diff_1_0(e_4, t);
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm h_35 = ATgetArgument(t, 0);
      if(((ATgetType(h_35) == AT_LIST) && !(ATisEmpty(h_35))))
        {
          z_18 = ATgetFirst((ATermList) h_35);
          a_19 = (ATerm) ATgetNext((ATermList) h_35);
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
  t = a_118(t);
  f_19 = t;
  t = b_118(t);
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_19, b_19);
  t = diff_0_0(t);
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_19, a_19);
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_35 = ATgetArgument(t, 0);
            ATerm n_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_19;
        {
          ATerm j_4 (ATerm t)
          {
            t = a_19;
            return(t);
          }
          t = at_end_1_0(j_4, t);
        }
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        {
          ATerm j_32 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_19, a_19));
          if(match_cons(t, sym__2))
            {
              ATerm o_35 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_35) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              j_32 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_32;
          t = concat_0_0(t);
        }
      }
    j_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_19, b_19);
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
          t = i_19;
          {
            ATerm k_4 (ATerm t)
            {
              t = b_19;
              return(t);
            }
            t = at_end_1_0(k_4, t);
          }
          ;
          LocalPopChoice(q_35);
        }
      else
        {
          t = p_35;
          {
            ATerm n_32 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_19, b_19));
            if(match_cons(t, sym__2))
              {
                ATerm t_35 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_35) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                n_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_32;
            t = concat_0_0(t);
          }
        }
      k_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, z_18, f_19, d_19);
      t = c_118(t);
      l_19 = t;
      t = (ATerm) ATmakeAppl(sym__5, j_19, k_19, c_19, l_19, e_19);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t)
{
  ATerm s_19 (ATerm t)
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_88(t);
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        t = z_88(t);
        t = s_19(t);
      }
    return(t);
  }
  t = s_19(t);
  return(t);
}
ATerm for_3_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm t)
{
  t = b_89(t);
  t = while_not_2_0(c_89, d_89, t);
  return(t);
}
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
ATerm u_4 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if(((ATgetType(w_35) != AT_LIST) || !(ATisEmpty(w_35))))
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
ATerm graph_nodes_roots_3_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm t)
{
  ATerm v_19 = NULL;
  ATerm v_4 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(x_117, y_117, z_117, t);
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        {
          ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
          if(match_cons(t, sym__5))
            {
              d_20 = ATgetArgument(t, 0);
              g_20 = ATgetArgument(t, 1);
              h_20 = ATgetArgument(t, 2);
              i_20 = ATgetArgument(t, 3);
              j_20 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = d_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_20 = ATgetFirst((ATermList) t);
              f_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, f_20, g_20, h_20, i_20, (ATerm) ATinsert(CheckATermList(j_20), e_20));
        }
      }
    return(t);
  }
  t = for_3_0(t_4, u_4, v_4, t);
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      {
        ATerm c_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_19;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm d_36 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_36;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm s_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      ATerm f_36 = ATgetArgument(t, 1);
      if(match_cons(f_36, sym_Specification_1))
        {
          s_20 = ATgetArgument(f_36, 0);
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
ATerm a_5 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm g_36 = ATgetArgument(t, 0);
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
  t = term_h_36;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm w_20 = NULL,y_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_20 = ATgetFirst((ATermList) t);
      y_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_20, y_20);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      if(match_cons(j_36, sym__2))
        {
          z_20 = ATgetArgument(j_36, 0);
          b_21 = ATgetArgument(j_36, 1);
        }
      else
        _fail(t);
      {
        ATerm k_36 = ATgetArgument(t, 1);
        if(match_cons(k_36, sym__2))
          {
            a_21 = ATgetArgument(k_36, 0);
            c_21 = ATgetArgument(k_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_21), z_20), (ATerm) ATinsert(CheckATermList(c_21), b_21));
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
    ATerm l_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
        {
          ATerm o_36 = t;
          int p_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_32 = NULL;
              t = eval_config_0_0(t);
              r_32 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), r_32);
              t = r_32;
              ;
              LocalPopChoice(p_36);
            }
          else
            {
              t = o_36;
            }
          t = filter_1_0(x_4, t);
        }
        ;
        LocalPopChoice(n_36);
      }
    else
      {
        t = l_36;
        t = (ATerm) ATempty;
      }
    r_20 = t;
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, q_20), term_u_36), term_t_36), term_a_31, (ATerm) ATempty);
    {
      ATerm y_4 (ATerm t)
      {
        ATerm u_32 = NULL,v_32 = NULL;
        ATerm c_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(r_20), term_n_10);
          return(t);
        }
        if(((u_32 != NULL) && (u_32 != t)))
          _fail(t);
        else
          u_32 = t;
        t = SSL_explode_term(not_null(u_32));
        if(match_cons(t, sym__2))
          {
            ATerm v_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_36) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_36 = ATgetArgument(t, 1);
              if(((ATgetType(w_36) == AT_LIST) && !(ATisEmpty(w_36))))
                {
                  if(((v_32 != NULL) && (v_32 != ATgetFirst((ATermList) w_36))))
                    _fail(ATgetFirst((ATermList) w_36));
                  else
                    v_32 = ATgetFirst((ATermList) w_36);
                  {
                    ATerm x_36 = (ATerm) ATgetNext((ATermList) w_36);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = not_null(v_32);
        t = get_module_1_0(c_5, t);
        return(t);
      }
      t = graph_nodes_roots_3_0(y_4, z_4, a_5, t);
      t = genzip_4_0(f_5, g_5, h_5, _id, t);
      t = _2_0(_id, flatten_stratego_0_0, t);
    }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  p_21 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_32 = NULL;
        t = p_21;
        t = k_0(t);
        z_32 = t;
        {
          ATerm a_37 = t;
          int b_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(b_37);
            }
          else
            {
              t = a_37;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(q_21, z_32);
          t = (ATerm) ATmakeAppl(sym_FILE_1, q_21);
        }
        ;
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        {
          ATerm c_37 = t;
          int d_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_33 = NULL;
              t = p_21;
              t = k_0(t);
              f_33 = t;
              {
                ATerm e_37 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_37 = t;
                    int g_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(g_37);
                      }
                    else
                      {
                        t = f_37;
                        {
                          ATerm h_37 = t;
                          int i_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(i_37);
                            }
                          else
                            {
                              t = h_37;
                              {
                                ATerm g_33 = NULL;
                                g_33 = t;
                                if((q_21 != t))
                                  {
                                    _fail(t);
                                  }
                                t = g_33;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_37;
                  }
                t = SSL_copy(q_21, f_33);
                t = (ATerm) ATmakeAppl(sym_FILE_1, q_21);
              }
              ;
              LocalPopChoice(d_37);
            }
          else
            {
              t = c_37;
              t = p_21;
              t = k_0(t);
              if((q_21 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_21);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      w_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_37 = ATgetArgument(t, 0);
            ATerm m_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_21, x_21);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_37 = ATgetFirst((ATermList) t);
            k_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_33;
        ;
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
        t = (ATerm) ATempty;
      }
    y_21 = t;
    t = SSL_table_put(w_21, x_21, y_21);
    t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  e_22 = t;
  t = s_105(t);
  f_22 = t;
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(f_22, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_22 = ATgetFirst((ATermList) t);
        g_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(f_22, (ATerm)ATmakeAppl(sym_Scopes_0), g_22);
    t = h_22;
    {
      ATerm i_5 (ATerm t)
      {
        ATerm i_22 = NULL;
        i_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_22, i_22);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(i_5, t);
      t = e_22;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t)
{
  ATerm q_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_88(t);
      t = d_88(t);
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = q_37;
      t = d_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,o_22 = NULL,p_22 = NULL;
  m_22 = t;
  t = r_105(t);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_22, term_s_37);
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_37 = ATgetArgument(t, 0);
            ATerm w_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_22, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
        t = (ATerm) ATempty;
      }
    p_22 = t;
    t = SSL_table_put(o_22, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_22), (ATerm) ATempty));
    t = m_22;
  }
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm x_37 = t;
  int y_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_23 = NULL;
      d_23 = t;
      t = SSL_remove(d_23);
      ;
      LocalPopChoice(y_37);
    }
  else
    {
      t = x_37;
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm e_116 (ATerm), ATerm t)
{
  ATerm y_22 = NULL;
  t = begin_scope_1_0(j_5, t);
  {
    ATerm m_5 (ATerm t)
    {
      ATerm z_22 = NULL;
      z_22 = t;
      {
        ATerm z_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(a_38);
          }
        else
          {
            t = z_37;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_22 != NULL) && (y_22 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_22 = ATgetFirst((ATermList) t);
            {
              ATerm b_38 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(y_22);
        t = map_1_0(o_5, t);
        t = z_22;
        t = end_scope_1_0(p_5, t);
      }
      return(t);
    }
    t = restore_always_2_0(e_116, m_5, t);
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_33 = NULL;
            t = eval_config_0_0(t);
            v_33 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_33);
            t = v_33;
            ;
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
          }
      }
      ;
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      t = term_g_38;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm f_116 (ATerm), ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm j_38 = t;
          int k_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_33 = NULL;
              t = eval_config_0_0(t);
              r_33 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), r_33);
              t = r_33;
              ;
              LocalPopChoice(k_38);
            }
          else
            {
              t = j_38;
            }
          f_23 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_23);
        }
        ;
        LocalPopChoice(i_38);
      }
    else
      {
        t = h_38;
        t = term_z_13;
      }
    t = f_116(t);
    t = copy_to_1_0(r_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(q_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  g_23 = t;
  t = term_a_31;
  t = whoami_0_0(t);
  h_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), h_23), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = g_23;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm j_23 = NULL;
  j_23 = t;
  if(match_string(t, "-k"))
    {
      t = j_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_23;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  k_23 = t;
  t = SSL_string_to_int(k_23);
  l_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), l_23);
  t = k_23;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_l_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_5, w_5, z_5, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  if(match_string(t, "-S"))
    {
      t = n_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_23;
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_n_38;
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_o_38;
  return(t);
}
ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  o_23 = t;
  t = SSL_string_to_int(o_23);
  p_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_23);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_23);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_38;
  return(t);
}
ATerm k_6 (ATerm t)
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
      t = Option_3_0(b_6, c_6, d_6, t);
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
            t = ArgOption_3_0(e_6, f_6, g_6, t);
            ;
            LocalPopChoice(v_38);
          }
        else
          {
            t = u_38;
            t = Option_3_0(h_6, i_6, k_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_23 = NULL;
      t = term_a_31;
      t = d_0(t);
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_38, term_x_38, u_23);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm x_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_23 = ATgetFirst((ATermList) t);
          t_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_23;
      t = a_0(t);
      t = term_a_31;
      t = c_0(t);
      x_23 = t;
      t = (ATerm) ATinsert(CheckATermList(t_23), x_23);
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm z_23 = NULL;
  z_23 = t;
  if(match_string(t, "-o"))
    {
      t = z_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_23;
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), a_24);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_24);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_y_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_6, m_6, n_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm c_24 = NULL;
  c_24 = t;
  if(match_string(t, "-i"))
    {
      t = c_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_24;
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm f_24 = NULL;
  f_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_24);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_24);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_6, p_6, q_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  if(match_cons(t, sym__3))
    {
      n_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
      q_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_24, p_24);
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
        t = SSL_table_get(n_24, p_24);
        ;
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        t = (ATerm) ATempty;
      }
    r_24 = t;
    t = SSL_table_put(n_24, p_24, (ATerm) ATinsert(CheckATermList(r_24), q_24));
    t = (ATerm) ATmakeAppl(sym__3, n_24, p_24, q_24);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_25 = NULL;
      t = term_a_31;
      t = j_0(t);
      d_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_38, term_x_38, d_25);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_24 = ATgetFirst((ATermList) t);
          a_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_25 = ATgetFirst((ATermList) t);
          c_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_24;
      t = h_0(t);
      t = b_25;
      t = i_0(t);
      h_25 = t;
      t = (ATerm) ATinsert(CheckATermList(c_25), h_25);
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
        ATerm k_25 = NULL,l_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_25 = ATgetFirst((ATermList) t);
            l_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_25;
        {
          ATerm r_6 (ATerm t)
          {
            t = l_25;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_6, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_95 (ATerm), ATerm t)
{
  ATerm r_25 (ATerm t)
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_25, t);
        ;
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_95(t);
      }
    return(t);
  }
  t = r_25(t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_25;
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_25);
        {
          ATerm k_39 = t;
          int l_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_33 = NULL;
              t = eval_config_0_0(t);
              z_33 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_25, z_33);
              t = z_33;
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
    v_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
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
          t = u_25;
          {
            ATerm s_6 (ATerm t)
            {
              t = v_25;
              return(t);
            }
            t = at_end_1_0(s_6, t);
          }
          ;
          LocalPopChoice(n_39);
        }
      else
        {
          t = m_39;
          {
            ATerm d_34 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, u_25, v_25));
            if(match_cons(t, sym__2))
              {
                ATerm q_39 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_39) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                d_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_34;
            t = concat_0_0(t);
          }
        }
      w_25 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_25, w_25);
      t = (ATerm) ATmakeAppl(sym__3, term_r_39, t_25, w_25);
    }
  }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  if(match_string(t, "-I"))
    {
      t = f_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = f_26;
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_39, (ATerm) ATinsert(ATinsert(ATempty, g_26), term_s_39));
  t = extend_config_0_0(t);
  t = term_a_31;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_t_39;
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  if(match_string(t, "--nodep"))
    {
      t = h_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = h_26;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue)));
  t = term_a_31;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_u_39;
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  if(match_string(t, "--dep"))
    {
      t = i_26;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = i_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = i_26;
        }
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue)), j_26);
  t = term_a_31;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_v_39;
  return(t);
}
ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_31;
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
      t = ArgOption_3_0(t_6, u_6, v_6, t);
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
            t = Option_3_0(w_6, y_6, d_7, t);
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
                  t = ArgOption_3_0(e_7, f_7, g_7, t);
                  ;
                  LocalPopChoice(c_40);
                }
              else
                {
                  t = b_40;
                  t = Option_3_0(h_7, j_7, l_7, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_31;
  t = whoami_0_0(t);
  k_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), k_26));
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
        ATerm h_34 = NULL;
        t = eval_config_0_0(t);
        h_34 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_34);
        t = h_34;
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
ATerm foldr_2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm t)
{
  ATerm f_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_101(t);
      ;
      LocalPopChoice(g_40);
    }
  else
    {
      t = f_40;
      {
        ATerm n_26 = NULL,o_26 = NULL,r_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_26 = ATgetFirst((ATermList) t);
            o_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_26;
        t = foldr_2_0(a_101, b_101, t);
        r_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_26, r_26);
        t = b_101(t);
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
ATerm n_7 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL;
  if(match_cons(t, sym__2))
    {
      m_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_34, n_34);
        ;
        LocalPopChoice(i_40);
      }
    else
      {
        t = h_40;
        t = SSL_addr(m_34, n_34);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_26 = NULL,i_34 = NULL,j_34 = NULL;
  t = times_0_0(t);
  i_34 = t;
  t = SSL_explode_term(i_34);
  if(match_cons(t, sym__2))
    {
      ATerm j_40 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_34;
  t = foldr_2_0(m_7, n_7, t);
  u_26 = t;
  t = SSL_TicksToSeconds(u_26);
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
ATerm if_verbose1_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_27 = NULL,p_27 = NULL;
      m_27 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm q_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_35 = NULL;
            t = eval_config_0_0(t);
            a_35 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_35);
            t = a_35;
            ;
            LocalPopChoice(r_40);
          }
        else
          {
            t = q_40;
          }
        p_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_27, term_f_14);
        t = geq_0_0(t);
        t = m_27;
        t = y_108(t);
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
ATerm p_7 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  t = run_time_0_0(t);
  r_27 = t;
  t = term_a_31;
  t = whoami_0_0(t);
  s_27 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), r_27), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), s_27));
  t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_40), r_27), term_y_14), s_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(u_40);
    }
  else
    {
      t = t_40;
      {
        ATerm v_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(w_40);
          }
        else
          {
            t = v_40;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  ATerm x_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm z_40 = t;
        int a_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_35 = NULL;
            t = eval_config_0_0(t);
            e_35 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), e_35);
            t = e_35;
            ;
            LocalPopChoice(a_41);
          }
        else
          {
            t = z_40;
          }
      }
      ;
      LocalPopChoice(y_40);
    }
  else
    {
      t = x_40;
      t = fetch_1_0(q_7, t);
    }
  t = m_110(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_27 = ATgetFirst((ATermList) t);
      v_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_27 = NULL,a_28 = NULL;
        t = v_27;
        t = g_0(t);
        z_27 = t;
        t = u_27;
        t = e_0(t);
        a_28 = t;
        t = v_27;
        {
          ATerm r_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_27), a_28);
            return(t);
          }
          t = reverse_acc_2_0(e_0, r_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_31;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
  e_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  b_28 = t;
  t = c_28;
  t = j_79(t);
  d_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, d_28), b_28);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_28), term_b_41);
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
            ATerm i_35 = NULL;
            t = eval_config_0_0(t);
            i_35 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_35);
            t = i_35;
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
      t = fetch_1_0(v_7, t);
    }
  t = term_g_41;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, w_7, t);
  t = map_1_0(x_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  l_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  i_28 = t;
  t = j_28;
  t = k_79(t);
  k_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, k_28), i_28);
  return(t);
}
ATerm fetch_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  ATerm o_28 (ATerm t)
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_95, _id, t);
        ;
        LocalPopChoice(i_41);
      }
    else
      {
        t = h_41;
        t = Cons_2_0(_id, o_28, t);
      }
    return(t);
  }
  t = o_28(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_28;
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
            t = q_28;
          }
        ;
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        t = (ATerm) ATinsert(ATempty, q_28);
      }
    r_28 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), r_28);
    t = q_28;
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
        ATerm m_35 = NULL;
        t = eval_config_0_0(t);
        m_35 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_35);
        t = m_35;
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
ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
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
ATerm g_8 (ATerm t)
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
      t = Option_3_0(y_7, z_7, d_8, t);
      ;
      LocalPopChoice(v_41);
    }
  else
    {
      t = u_41;
      t = Option_3_0(e_8, f_8, g_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,e_29 = NULL;
  e_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_28 = ATgetFirst((ATermList) t);
      x_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_29);
  v_28 = t;
  t = w_28;
  t = w_73(t);
  y_28 = t;
  t = x_28;
  t = x_73(t);
  z_28 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(z_28), y_28), v_28);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm l_29 = NULL;
  l_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_29);
  t = (ATerm) ATmakeAppl(sym_Program_1, l_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  {
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_41;
        t = d_113(t);
        ;
        LocalPopChoice(x_41);
      }
    else
      {
        t = w_41;
      }
    t = k_29;
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
                t = d_113(t);
                t = Cons_2_0(_id, k_8, t);
              }
            ;
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
            {
              ATerm n_29 = NULL,o_29 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_29 = ATgetFirst((ATermList) t);
                  o_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_29), (ATerm) ATmakeAppl(sym_Undefined_1, n_29));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_8, k_8, t);
    }
  }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  if(match_string(t, "--help"))
    {
      t = e_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_30;
        }
    }
  return(t);
}
ATerm o_8 (ATerm t)
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
ATerm parse_options_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,c_30 = NULL,d_30 = NULL;
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
          t = c_113(t);
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
                t = Option_3_0(m_8, o_8, q_8, t);
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
          ATerm j_30 = NULL;
          j_30 = t;
          {
            ATerm l_42 = t;
            int m_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_30;
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
                            ATerm b_36 = NULL;
                            t = eval_config_0_0(t);
                            b_36 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), b_36);
                            t = b_36;
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
                  t = j_30;
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
                      ATerm i_36 = NULL;
                      t = eval_config_0_0(t);
                      i_36 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), i_36);
                      t = i_36;
                      ;
                      LocalPopChoice(s_42);
                    }
                  else
                    {
                      t = r_42;
                    }
                  t = j_30;
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
                ATerm s_8 (ATerm t)
                {
                  ATerm u_8 (ATerm t)
                  {
                    if(((c_30 != NULL) && (c_30 != t)))
                      _fail(t);
                    else
                      c_30 = t;
                    return(t);
                  }
                  t = Undefined_1_0(u_8, t);
                  return(t);
                }
                t = fetch_1_0(s_8, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(c_30)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_30)), term_v_42));
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
      d_30 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = d_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t)
{
  ATerm m_30 = NULL;
  t = parse_options_1_0(o_110, t);
  m_30 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), m_30);
  t = m_30;
  t = q_110(t);
  {
    ATerm w_42 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_110, t);
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
              t = r_110(t);
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
ATerm x_8 (ATerm t)
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
                        t = Option_3_0(d_9, j_9, k_9, t);
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
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(j_43);
                            }
                          else
                            {
                              t = i_43;
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
ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_k_43;
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_l_43;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
  r_36 = t;
  t = SSL_explode_string(r_36);
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_9 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_43 = ATgetFirst((ATermList) t);
              if(((ATgetType(o_43) != AT_INT) || (ATgetInt((ATermInt) o_43) != 47)))
                _fail(t);
              if(((q_36 != NULL) && (q_36 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                q_36 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(o_9, t);
        t = not_null(q_36);
        ;
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
      }
    s_36 = t;
    t = SSL_implode_string(s_36);
    t = basename_1_0(_id, t);
  }
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  ATerm c_9 (ATerm t)
  {
    ATerm l_9 (ATerm t)
    {
      t = pack_stratego_modules_0_0(t);
      if(match_cons(t, sym__2))
        {
          if(((n_30 != NULL) && (n_30 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_30 = ATgetArgument(t, 0);
          if(((o_30 != NULL) && (o_30 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_43 = t;
        int q_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue)));
            {
              ATerm r_43 = t;
              int s_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_36 = NULL;
                  t = eval_config_0_0(t);
                  m_36 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue)), m_36);
                  t = m_36;
                  ;
                  LocalPopChoice(s_43);
                }
              else
                {
                  t = r_43;
                }
              t = not_null(n_30);
              t = map_1_0(n_9, t);
              t = write_to_text_0_0(t);
            }
            ;
            LocalPopChoice(q_43);
          }
        else
          {
            t = p_43;
            t = not_null(n_30);
            t = create_dep_file_0_0(t);
            t = not_null(o_30);
            t = write_to_0_0(t);
          }
      }
      return(t);
    }
    t = xtc_io_1_0(l_9, t);
    return(t);
  }
  t = option_wrap_4_0(x_8, default_usage_0_0, _id, c_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
