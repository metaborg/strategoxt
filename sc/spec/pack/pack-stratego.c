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
ATerm term_x_39;
ATerm term_o_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_t_37;
ATerm term_q_37;
ATerm term_g_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_f_36;
ATerm term_v_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_q_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_f_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_y_30;
ATerm term_u_30;
ATerm term_r_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_g_30;
ATerm term_d_30;
ATerm term_y_29;
ATerm term_u_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_z_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_a_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_i_24;
ATerm term_e_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_i_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_l_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_h_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_a_13;
ATerm term_z_12;
void init_constant_terms (void)
{
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_w_15, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_a_17, term_c_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_l_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_u_18, term_v_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_d_19, term_e_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_x_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_i_20, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_20, term_t_20, term_u_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_20, term_x_20, term_y_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_21, term_c_21, term_d_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_l_21, term_m_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_21, term_r_21, term_b_22);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_22, term_j_22, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_22, term_n_22, term_o_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_22, term_r_22, term_s_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_22, term_x_22, term_y_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_23, term_b_23, term_e_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_23, term_i_23, term_j_23);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_23, term_r_23, term_s_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_23, term_y_23, term_z_23);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_24, term_m_24, term_p_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_24, term_x_24, term_y_24);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_25, term_h_25, term_k_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_25, term_t_25, term_u_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_25, term_x_25, term_y_25);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_26, term_e_26, term_h_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_36);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym__3, term_q_34, term_m_38, term_b_31);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
}
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm add_extension_0_0 (ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm s_100 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm basename_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm basename_0_0 (ATerm);
ATerm at_suffix_rev_1_0 (ATerm e_89 (ATerm), ATerm);
ATerm get_filename_0_0 (ATerm);
ATerm map_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Imports_1_0 (ATerm k_73 (ATerm), ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm _2_0 (ATerm v_65 (ATerm), ATerm w_65 (ATerm), ATerm);
ATerm unzip_1_0 (ATerm t_90 (ATerm), ATerm);
ATerm unzip_0_0 (ATerm);
ATerm get_stratego_imports_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm z_101 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm repeat_1_0 (ATerm r_81 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm y_101 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm a_102 (ATerm), ATerm);
ATerm union_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm k_106 (ATerm), ATerm);
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
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm w_109 (ATerm), ATerm);
ATerm assert_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm v_72 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm debug_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm x_101 (ATerm), ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm s_88 (ATerm), ATerm);
ATerm find_module_1_0 (ATerm u_80 (ATerm), ATerm);
ATerm get_module_1_0 (ATerm t_80 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm);
ATerm diff_1_0 (ATerm f_92 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm zip_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm);
ATerm for_3_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_3_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm);
ATerm graph_nodes_roots_3_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm);
ATerm filter_1_0 (ATerm k_95 (ATerm), ATerm);
ATerm pack_stratego_modules_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm w_88 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_98 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm i_109 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm j_109 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm);
ATerm crush_2_0 (ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_101 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm q_103 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm r_72 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm s_72 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm q_88 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm e_105 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm v_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm j_106 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm h_106 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm g_106 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm);
ATerm xtc_iowrap_2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm q_1 = ATgetArgument(t, 0);
        if(match_cons(q_1, sym_Stream_1))
          {
            e_1 = ATgetArgument(q_1, 0);
          }
        else
          _fail(t);
        g_1 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(e_1, g_1);
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, h_1);
    return(t);
  }
  t = WriteToFile_1_0(c_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL;
  i_1 = t;
  t = xtc_new_file_0_0(t);
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_1, i_1);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(j_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm k_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_1;
  {
    ATerm d_3 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = d_3;
        {
          ATerm e_0 (ATerm t)
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
                {
                  ATerm p_1 = NULL;
                  t = Cons_2_0(_id, e_0, t);
                  p_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_1), k_1);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, e_0, t);
        }
      }
  }
  return(t);
}
ATerm add_extension_0_0 (ATerm t)
{
  ATerm t_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym__2))
    {
      t_1 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_1), term_z_12), t_1);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,o_2 = NULL;
  y_1 = t;
  t = term_a_13;
  t = get_config_0_0(t);
  {
    ATerm g_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_13;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = g_13;
        {
          ATerm r_13 = t;
          if((PushChoice() == 0))
            {
              t = term_t_13;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_13;
            }
        }
      }
    z_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_1, term_x_13);
    t = add_extension_0_0(t);
    a_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_2, term_y_13);
    t = open_file_0_0(t);
    b_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(CheckATermList(y_1), term_j_14));
    t = separate_by_0_0(t);
    o_2 = t;
    t = SSL_printnl(b_2, (ATerm) ATinsert(CheckATermList(o_2), z_1));
    t = SSL_close_file(b_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, a_2);
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,s_2 = NULL;
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_2, term_y_13);
  t = open_stream_0_0(t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_2, q_2);
  t = s_100(t);
  t = fclose_0_0(t);
  t = q_2;
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm l_14 = ATgetArgument(t, 0);
        if(match_cons(l_14, sym_Stream_1))
          {
            t_2 = ATgetArgument(l_14, 0);
          }
        else
          _fail(t);
        u_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(t_2, u_2);
    v_2 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), v_2);
    w_2 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, w_2);
    return(t);
  }
  t = WriteToFile_1_0(n_0, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm x_2 = NULL,z_2 = NULL;
  x_2 = t;
  t = xtc_new_file_0_0(t);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, x_2);
  t = WriteToTextFile_0_0(t);
  t = SSL_close_file(z_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_2);
  return(t);
}
ATerm basename_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm a_3 = NULL,c_3 = NULL;
  a_3 = t;
  t = SSL_explode_string(a_3);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm m_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, o_0, t);
          ;
          LocalPopChoice(n_14);
        }
      else
        {
          t = m_14;
          {
            ATerm o_14 = t;
            int p_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_0 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(p_0, _id, t);
                ;
                LocalPopChoice(p_14);
              }
            else
              {
                t = o_14;
                {
                  ATerm q_0 (ATerm t)
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2_0(q_0, d_97, t);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1_0(o_0, t);
    c_3 = t;
    t = SSL_implode_string(c_3);
  }
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(_id, t);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_3, t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = e_89(t);
      }
    return(t);
  }
  t = f_3(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL,m_3 = NULL;
  j_3 = t;
  t = SSL_explode_string(j_3);
  {
    ATerm r_0 (ATerm t)
    {
      ATerm s_0 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_14 = ATgetFirst((ATermList) t);
            if(((ATgetType(s_14) != AT_INT) || (ATgetInt((ATermInt) s_14) != 47)))
              _fail(t);
            h_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        return(t);
      }
      t = at_suffix_rev_1_0(s_0, t);
      t = not_null(h_3);
      return(t);
    }
    t = try_1_0(r_0, t);
    m_3 = t;
    t = SSL_implode_string(m_3);
  }
  return(t);
}
ATerm map_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = Cons_2_0(g_88, n_3, t);
      }
    return(t);
  }
  t = n_3(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 = NULL;
      v_3 = t;
      t = SSL_is_string(v_3);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm x_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(t_0, t);
            ;
            LocalPopChoice(a_15);
          }
        else
          {
            t = x_14;
            {
              ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
              z_3 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_4 = ATgetArgument(t, 0);
                  t = a_4;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_4 = ATgetArgument(t, 0);
                      t = a_4;
                      {
                        ATerm b_15 = t;
                        int g_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(g_15);
                          }
                        else
                          {
                            t = b_15;
                            {
                              ATerm u_0 (ATerm t)
                              {
                                t = term_h_15;
                                return(t);
                              }
                              t = debug_1_0(u_0, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm f_4 = NULL,g_4 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_4 = ATgetArgument(t, 0);
                          b_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_4;
                      t = eval_config_0_0(t);
                      f_4 = t;
                      t = b_4;
                      t = eval_config_0_0(t);
                      g_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_4, g_4);
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
  ATerm l_4 = NULL;
  l_4 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_4);
  {
    ATerm v_0 (ATerm t)
    {
      ATerm m_4 = NULL;
      t = eval_config_0_0(t);
      m_4 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_4, m_4);
      t = m_4;
      return(t);
    }
    t = try_1_0(v_0, t);
  }
  return(t);
}
ATerm Imports_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym_Imports_1))
    {
      o_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_4);
  n_4 = t;
  t = o_4;
  t = k_73(t);
  p_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, p_4), n_4);
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm y_4 = NULL;
  ATerm x_0 (ATerm t)
  {
    ATerm z_4 = NULL;
    if(match_cons(t, sym_Specification_1))
      {
        z_4 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = z_4;
    {
      ATerm y_0 (ATerm t)
      {
        ATerm i_15 = t;
        if((PushChoice() == 0))
          {
            t = Imports_1_0(_id, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_15;
          }
        return(t);
      }
      t = filter_1_0(y_0, t);
    }
    return(t);
  }
  t = map_1_0(x_0, t);
  t = concat_0_0(t);
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_4);
  return(t);
}
ATerm _2_0 (ATerm v_65 (ATerm), ATerm w_65 (ATerm), ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
  h_5 = t;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_5);
  b_5 = t;
  t = c_5;
  t = v_65(t);
  f_5 = t;
  t = d_5;
  t = w_65(t);
  g_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, f_5, g_5), b_5);
  return(t);
}
ATerm unzip_1_0 (ATerm t_90 (ATerm), ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_j_15;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm m_5 = NULL,o_5 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_5 = ATgetFirst((ATermList) t);
        o_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, m_5, o_5);
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,u_5 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm k_15 = ATgetArgument(t, 0);
        if(match_cons(k_15, sym__2))
          {
            p_5 = ATgetArgument(k_15, 0);
            r_5 = ATgetArgument(k_15, 1);
          }
        else
          _fail(t);
        {
          ATerm l_15 = ATgetArgument(t, 1);
          if(match_cons(l_15, sym__2))
            {
              q_5 = ATgetArgument(l_15, 0);
              u_5 = ATgetArgument(l_15, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_5), p_5), (ATerm) ATinsert(CheckATermList(u_5), r_5));
    return(t);
  }
  t = genzip_4_0(z_0, a_1, b_1, t_90, t);
  return(t);
}
ATerm unzip_0_0 (ATerm t)
{
  t = unzip_1_0(_id, t);
  return(t);
}
ATerm get_stratego_imports_0_0 (ATerm t)
{
  ATerm w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      ATerm n_15 = ATgetArgument(t, 1);
      if(match_cons(n_15, sym_Specification_1))
        {
          w_5 = ATgetArgument(n_15, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = w_5;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm x_5 = NULL;
      if(match_cons(t, sym_Imports_1))
        {
          x_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_5;
      return(t);
    }
    t = filter_1_0(c_1, t);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL;
  z_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = z_5;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          a_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(a_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
  t = term_t_15;
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        t = term_w_15;
      }
    h_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_6, term_w_15);
    {
      ATerm x_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(h_6, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(y_15);
        }
      else
        {
          t = x_15;
          t = SSL_subtr(h_6, (ATerm) ATmakeInt(1));
        }
      j_6 = t;
      t = SSL_int_to_string(j_6);
      i_6 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, i_6), term_t_15);
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  t = term_z_15;
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        t = term_w_15;
      }
    k_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_6, term_w_15);
    {
      ATerm f_16 = t;
      int g_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(k_6, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(g_16);
        }
      else
        {
          t = f_16;
          t = SSL_subtr(k_6, (ATerm) ATmakeInt(1));
        }
      m_6 = t;
      t = SSL_int_to_string(m_6);
      l_6 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, l_6), term_z_15);
    }
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(f_110, g_110, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  w_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_8 = ATgetArgument(t, 0);
      {
        ATerm w_0 = NULL;
        t = SSL_int_to_string(x_8);
        w_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_16), w_0), term_h_16);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm f_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_8 = ATgetArgument(t, 0);
          y_8 = ATgetArgument(t, 1);
          z_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_8);
      f_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_8), term_p_16), f_1), term_m_16), x_8);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm c_9 = NULL;
  c_9 = t;
  {
    ATerm q_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_26), term_z_25), term_v_25), term_l_25), term_a_25), term_q_24), term_e_24), term_w_23), term_k_23), term_f_23), term_z_22), term_t_22), term_p_22), term_l_22), term_c_22), term_p_21), term_e_21), term_a_21), term_v_20), term_r_20), term_b_20), term_j_19), term_x_18), term_s_18), term_q_17), term_m_17), term_d_17), term_v_16);
        {
          ATerm d_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm l_26 = ATgetArgument(t, 0);
                if((c_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm o_26 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(d_1, t);
        }
        ;
        LocalPopChoice(s_16);
      }
    else
      {
        t = q_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, c_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm g_9 = NULL,h_9 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm p_26 = ATgetArgument(t, 0);
          g_9 = ATgetArgument(t, 1);
          {
            ATerm q_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = g_9;
      {
        ATerm x_26 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_26;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        h_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_y_26, (ATerm) ATinsert(ATinsert(ATempty, h_9), term_z_26));
      }
      return(t);
    }
    t = try_1_0(l_1, t);
    t = d_9;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm t)
{
  ATerm j_9 = NULL,o_9 = NULL;
  j_9 = t;
  t = fork_0_0(t);
  o_9 = t;
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = j_9;
        t = l_102(t);
        ;
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        t = (ATerm) ATmakeAppl(sym__2, o_9, j_9);
        t = m_102(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm q_9 = NULL;
  ATerm o_1 (ATerm t)
  {
    ATerm r_9 = NULL;
    if(match_cons(t, sym__2))
      {
        r_9 = ATgetArgument(t, 0);
        q_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(r_9);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm h_27 = ATgetArgument(t, 0);
        if(((ATgetType(h_27) != AT_INT) || (ATgetInt((ATermInt) h_27) != 0)))
          _fail(t);
        {
          ATerm j_27 = ATgetArgument(t, 1);
        }
        {
          ATerm m_27 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = q_9;
    return(t);
  }
  t = fork_2_0(n_102, o_1, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm s_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_1 (ATerm t)
    {
      t = SSL_execvp(s_9, u_9);
      return(t);
    }
    t = fork_and_wait_1_0(r_1, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  t = SSL_table_keys(v_9);
  {
    ATerm s_1 (ATerm t)
    {
      ATerm w_9 = NULL,x_9 = NULL;
      w_9 = t;
      t = SSL_table_get(v_9, w_9);
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_9, x_9);
      return(t);
    }
    t = map_1_0(s_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_101 (ATerm), ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm y_9 = NULL,a_10 = NULL;
    y_9 = t;
    t = term_z_15;
    t = get_config_0_0(t);
    a_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_10, term_h_25);
    t = geq_0_0(t);
    t = y_9;
    t = z_101(t);
    return(t);
  }
  t = try_1_0(u_1, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, b_10));
  {
    ATerm v_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((c_10 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          d_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(v_1, t);
    t = not_null(d_10);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    ATerm x_1 (ATerm t)
    {
      t = r_81(t);
      t = e_10(t);
      return(t);
    }
    t = try_1_0(x_1, t);
    return(t);
  }
  t = e_10(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  {
    ATerm c_2 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm n_27 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_27;
          }
      }
      return(t);
    }
    t = repeat_1_0(c_2, t);
    t = f_10;
  }
  return(t);
}
ATerm say_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,m_1 = NULL;
  h_10 = t;
  t = i_100(t);
  m_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, m_1));
  t = h_10;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm i_10 = NULL,j_10 = NULL;
    i_10 = t;
    t = term_z_15;
    t = get_config_0_0(t);
    j_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_10, term_c_21);
    t = geq_0_0(t);
    t = i_10;
    t = y_101(t);
    return(t);
  }
  t = try_1_0(d_2, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_102 (ATerm), ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm k_10 = NULL,l_10 = NULL;
    k_10 = t;
    t = term_z_15;
    t = get_config_0_0(t);
    l_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_10, term_o_17);
    t = geq_0_0(t);
    t = k_10;
    t = a_102(t);
    return(t);
  }
  t = try_1_0(e_2, t);
  return(t);
}
ATerm union_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      r_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10;
  {
    ATerm s_10 (ATerm t)
    {
      ATerm o_27 = t;
      int p_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_10;
          ;
          LocalPopChoice(p_27);
        }
      else
        {
          t = o_27;
          {
            ATerm q_27 = t;
            int v_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_2 (ATerm t)
                {
                  t = q_10;
                  return(t);
                }
                t = HdMember_p__2_0(j_92, f_2, t);
                t = s_10(t);
                ;
                LocalPopChoice(v_27);
              }
            else
              {
                t = q_27;
                t = Cons_2_0(_id, s_10, t);
              }
          }
        }
      return(t);
    }
    t = s_10(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm t_10 = NULL;
    if(match_cons(t, sym__2))
      {
        t_10 = ATgetArgument(t, 0);
        if((t_10 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(g_2, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__3))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
      y_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_27 = ATgetArgument(t, 0);
            ATerm z_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_10, x_10);
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATempty;
      }
    z_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_10, y_10);
    t = union_0_0(t);
    a_11 = t;
    t = SSL_table_put(w_10, x_10, a_11);
    t = (ATerm) ATmakeAppl(sym__3, w_10, x_10, y_10);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL;
  if(match_cons(t, sym__2))
    {
      c_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm d_11 = NULL,e_11 = NULL;
      if(match_cons(t, sym__2))
        {
          d_11 = ATgetArgument(t, 0);
          e_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, c_11, d_11, e_11);
      t = k_106(t);
      return(t);
    }
    t = map_1_0(h_2, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_11 (ATerm m_11, ATerm t)
  {
    t = SSL_fclose(m_11);
    return(t);
  }
  ATerm u_11 = NULL,v_11 = NULL;
  v_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_11 = ATgetArgument(t, 0);
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_11);
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            t = z_11(v_11, t);
          }
      }
    }
  else
    {
      t = z_11(v_11, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_12 = NULL;
  t = SSL_stdin_stream();
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  t = SSL_stdout_stream();
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_12 = NULL;
  t = SSL_stderr_stream();
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_12);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      ATerm d_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 = NULL,y_2 = NULL;
        r_2 = t;
        t = SSL_explode_term(r_2);
        if(match_cons(t, sym__2))
          {
            ATerm g_28 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_28) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_28 = ATgetArgument(t, 1);
              if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
                {
                  y_2 = ATgetFirst((ATermList) h_28);
                  {
                    ATerm i_28 = (ATerm) ATgetNext((ATermList) h_28);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        {
          ATerm j_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
              ATerm i_2 (ATerm t)
              {
                ATerm p_12 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    p_12 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = p_12;
                return(t);
              }
              t = _2_0(i_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  j_12 = ATgetArgument(t, 0);
                  k_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(j_12, k_12);
              l_12 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, l_12);
              ;
              LocalPopChoice(k_28);
            }
          else
            {
              t = j_28;
              {
                ATerm q_12 = NULL,s_12 = NULL,t_12 = NULL;
                ATerm j_2 (ATerm t)
                {
                  ATerm u_12 = NULL;
                  u_12 = t;
                  t = SSL_is_string(u_12);
                  return(t);
                }
                t = _2_0(j_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_12 = ATgetArgument(t, 0);
                    s_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(q_12, s_12);
                t_12 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, t_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_12 = NULL;
      y_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_12, term_n_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm k_2 (ATerm t)
        {
          t = term_o_28;
          return(t);
        }
        t = debug_1_0(k_2, t);
        _fail(t);
      }
    }
  v_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(x_12);
  w_12 = t;
  t = v_12;
  t = fclose_0_0(t);
  t = w_12;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 = NULL;
      e_3 = t;
      t = SSL_access(e_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(q_28);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_28;
      {
        ATerm s_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_28 = t;
            if((PushChoice() == 0))
              {
                ATerm i_3 = NULL;
                i_3 = t;
                t = SSL_access(i_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_28;
              }
            {
              ATerm l_2 (ATerm t)
              {
                t = term_z_28;
                return(t);
              }
              t = debug_1_0(l_2, t);
            }
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = s_28;
            {
              ATerm m_2 (ATerm t)
              {
                t = term_h_29;
                return(t);
              }
              t = debug_1_0(m_2, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm b_3 (ATerm t)
      {
        t = term_i_29;
        return(t);
      }
      t = debug_1_0(b_3, t);
      return(t);
    }
    t = if_verbose5_1_0(n_2, t);
    {
      ATerm j_29 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, b_13));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_29;
        }
      c_13 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, b_13));
      t = c_13;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm k_3 (ATerm t)
          {
            t = term_k_29;
            return(t);
          }
          t = debug_1_0(k_3, t);
          return(t);
        }
        t = if_verbose4_1_0(g_3, t);
        t = read_repository_file_0_0(t);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm q_3 (ATerm t)
            {
              t = term_l_29;
              return(t);
            }
            t = say_1_0(q_3, t);
            return(t);
          }
          t = if_verbose6_1_0(l_3, t);
          d_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_29, d_13);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm r_3 (ATerm t)
            {
              ATerm s_3 (ATerm t)
              {
                t = term_p_29;
                return(t);
              }
              t = say_1_0(s_3, t);
              return(t);
            }
            t = if_verbose6_1_0(r_3, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, b_13), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_m_29, (ATerm)ATmakeAppl(sym_Imported_1, b_13), (ATerm) ATempty);
            {
              ATerm t_3 (ATerm t)
              {
                ATerm u_3 (ATerm t)
                {
                  t = term_l_29;
                  return(t);
                }
                t = say_1_0(u_3, t);
                return(t);
              }
              t = if_verbose4_1_0(t_3, t);
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
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm e_13 = NULL;
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      t = term_y_29;
      return(t);
    }
    t = debug_1_0(x_3, t);
    return(t);
  }
  t = if_verbose5_1_0(w_3, t);
  e_13 = t;
  {
    ATerm z_29 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(c_30);
      }
    else
      {
        t = z_29;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = e_13;
    {
      ATerm y_3 (ATerm t)
      {
        ATerm c_4 (ATerm t)
        {
          t = term_d_30;
          return(t);
        }
        t = debug_1_0(c_4, t);
        return(t);
      }
      t = if_verbose5_1_0(y_3, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        ATerm e_4 (ATerm t)
        {
          t = term_g_30;
          return(t);
        }
        t = debug_1_0(e_4, t);
        return(t);
      }
      t = if_verbose5_1_0(d_4, t);
      t = xtc_load_0_0(t);
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            {
              ATerm o_3 = NULL,p_3 = NULL;
              o_3 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, o_3));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_30 = ATgetFirst((ATermList) t);
                  if(match_cons(j_30, sym__2))
                    {
                      ATerm m_30 = ATgetArgument(j_30, 0);
                      p_3 = ATgetArgument(j_30, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm k_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = p_3;
            }
          }
        {
          ATerm i_4 (ATerm t)
          {
            ATerm j_4 (ATerm t)
            {
              t = term_g_30;
              return(t);
            }
            t = debug_1_0(j_4, t);
            return(t);
          }
          t = if_verbose5_1_0(i_4, t);
        }
      }
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm f_13 = NULL;
        f_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), f_13), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_30), f_13), term_n_30);
        {
          ATerm k_4 (ATerm t)
          {
            t = term_m_29;
            t = table_getlist_0_0(t);
            {
              ATerm r_4 (ATerm t)
              {
                t = term_r_30;
                return(t);
              }
              t = debug_1_0(r_4, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(k_4, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm w_109 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  h_13 = t;
  t = w_109(t);
  t = xtc_find_warning_0_0(t);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_13, h_13);
  t = call_0_0(t);
  t = h_13;
  return(t);
}
ATerm assert_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_98(t);
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_13, j_13, k_13);
  t = table_push_0_0(t);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(l_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_13 = ATgetFirst((ATermList) t);
        n_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(l_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(n_13), (ATerm) ATinsert(CheckATermList(m_13), j_13)));
    t = (ATerm) ATmakeAppl(sym__2, j_13, k_13);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm o_13 = NULL;
  o_13 = t;
  t = l_100(t);
  {
    ATerm u_4 (ATerm t)
    {
      t = term_u_30;
      return(t);
    }
    t = debug_1_0(u_4, t);
    t = o_13;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm c_14 (ATerm s_13, ATerm t)
  {
    t = s_13;
    {
      ATerm v_30 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm w_30 = ATgetArgument(t, 0);
              ATerm x_30 = ATgetArgument(t, 1);
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
      {
        ATerm v_4 (ATerm t)
        {
          t = term_y_30;
          return(t);
        }
        t = obsolete_1_0(v_4, t);
        t = (ATerm) ATmakeAppl(sym__2, s_13, term_y_13);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm d_14 (ATerm u_13, ATerm v_13, ATerm w_13, ATerm t)
  {
    t = SSL_open_file(u_13, v_13);
    return(t);
  }
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  z_13 = t;
  if(match_cons(t, sym__2))
    {
      a_14 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_14(z_13, t);
            ;
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            t = d_14(a_14, b_14, z_13, t);
          }
      }
    }
  else
    {
      t = c_14(z_13, t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm e_14 = NULL;
  ATerm w_4 (ATerm t)
  {
    ATerm f_14 = NULL;
    f_14 = t;
    t = SSL_explode_string(f_14);
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    ATerm g_14 = NULL;
    g_14 = t;
    t = SSL_explode_string(g_14);
    return(t);
  }
  t = _2_0(w_4, x_4, t);
  t = conc_0_0(t);
  e_14 = t;
  t = SSL_implode_string(e_14);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm h_14 = NULL;
  t = term_b_31;
  t = new_0_0(t);
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_14, term_c_31);
  t = conc_strings_0_0(t);
  {
    ATerm a_5 (ATerm t)
    {
      ATerm h_4 = NULL;
      h_4 = t;
      t = SSL_access(h_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(a_5, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_14 = NULL;
  t = new_file_0_0(t);
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_14, term_y_13);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, k_14, term_b_31);
  {
    ATerm i_5 (ATerm t)
    {
      t = term_d_31;
      return(t);
    }
    t = assert_1_0(i_5, t);
    t = k_14;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_4 = NULL,t_4 = NULL;
      t = y_14;
      t = xtc_new_file_0_0(t);
      s_4 = t;
      t = m_0(t);
      t_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATinsert(ATinsert(ATempty, s_4), term_a_13));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(s_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_4);
    }
  else
    {
      ATerm e_5 = NULL,k_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_14;
      t = xtc_new_file_0_0(t);
      e_5 = t;
      t = m_0(t);
      k_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_5), term_a_13), z_14), term_e_31));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(e_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_5);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm v_72 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  f_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_15);
  c_15 = t;
  t = d_15;
  t = v_72(t);
  e_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, e_15), c_15);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(i_31);
        }
      else
        {
          t = h_31;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(g_31);
      t = xtc_transform_file_2_0(y_109, z_109, t);
    }
  else
    {
      t = f_31;
      t = xtc_transform_term_2_0(y_109, z_109, t);
    }
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_15 = NULL,t_5 = NULL,v_5 = NULL;
      ATerm j_5 (ATerm t)
      {
        ATerm l_31 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_31;
          }
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        o_15 = t;
        return(t);
      }
      t = _2_0(j_5, l_5, t);
      t_5 = t;
      t = SSL_explode_term(t_5);
      if(match_cons(t, sym__2))
        {
          ATerm m_31 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) m_31) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm n_31 = ATgetArgument(t, 1);
            if(((ATgetType(n_31) == AT_LIST) && !(ATisEmpty(n_31))))
              {
                ATerm o_31 = ATgetFirst((ATermList) n_31);
                ATerm p_31 = (ATerm) ATgetNext((ATermList) n_31);
                if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
                  {
                    v_5 = ATgetFirst((ATermList) p_31);
                    {
                      ATerm q_31 = (ATerm) ATgetNext((ATermList) p_31);
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
      t = v_5;
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 (ATerm t)
            {
              t = term_t_31;
              return(t);
            }
            ATerm s_5 (ATerm t)
            {
              ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
              p_15 = t;
              t = pass_verbose_0_0(t);
              q_15 = t;
              t = p_15;
              t = pass_keep_0_0(t);
              r_15 = t;
              t = term_u_31;
              t = get_config_0_0(t);
              s_15 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_15), r_15), q_15);
              t = concat_0_0(t);
              return(t);
            }
            t = xtc_transform_2_0(n_5, s_5, t);
            t = read_from_0_0(t);
            ;
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_15)), term_v_31);
            t = fatal_error_0_0(t);
          }
      }
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      {
        ATerm a_16 = NULL,b_16 = NULL,e_16 = NULL,t_6 = NULL;
        a_16 = t;
        if(match_cons(t, sym__2))
          {
            b_16 = ATgetArgument(t, 0);
            e_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_16;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        t = SSL_explode_term(a_16);
        if(match_cons(t, sym__2))
          {
            ATerm w_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_31) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_31 = ATgetArgument(t, 1);
              if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
                {
                  ATerm y_31 = ATgetFirst((ATermList) x_31);
                  ATerm z_31 = (ATerm) ATgetNext((ATermList) x_31);
                  if(((ATgetType(z_31) == AT_LIST) && !(ATisEmpty(z_31))))
                    {
                      t_6 = ATgetFirst((ATermList) z_31);
                      {
                        ATerm a_32 = (ATerm) ATgetNext((ATermList) z_31);
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
        t = t_6;
        {
          ATerm b_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = read_from_0_0(t);
              ;
              LocalPopChoice(c_32);
            }
          else
            {
              t = b_32;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_16), term_v_31);
              t = fatal_error_0_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  i_16 = t;
  t = e_100(t);
  j_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_16), j_16));
  t = i_16;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm k_16 = NULL,o_16 = NULL;
    k_16 = t;
    t = term_z_15;
    t = get_config_0_0(t);
    o_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_16, term_k_17);
    t = geq_0_0(t);
    t = k_16;
    t = x_101(t);
    return(t);
  }
  t = try_1_0(y_5, t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm r_16 = NULL;
  r_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), r_16);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = r_16;
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm x_16 = NULL;
  ATerm b_6 (ATerm t)
  {
    ATerm y_16 = NULL;
    y_16 = t;
    t = SSL_explode_string(y_16);
    return(t);
  }
  t = map_1_0(b_6, t);
  t = concat_0_0(t);
  x_16 = t;
  t = SSL_implode_string(x_16);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_88 (ATerm), ATerm t)
{
  ATerm z_16 = NULL;
  ATerm c_6 (ATerm t)
  {
    t = s_88(t);
    z_16 = t;
    return(t);
  }
  t = fetch_1_0(c_6, t);
  t = not_null(z_16);
  return(t);
}
ATerm find_module_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm b_17 = NULL,e_17 = NULL;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_80(t);
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_6 (ATerm t)
        {
          ATerm f_17 = NULL;
          f_17 = t;
          t = b_17;
          {
            ATerm e_6 (ATerm t)
            {
              ATerm g_17 = NULL,h_17 = NULL,x_6 = NULL;
              g_17 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_17), term_z_12), e_17), term_f_32), f_17);
              t = concat_strings_0_0(t);
              x_6 = t;
              t = SSL_access(x_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
              h_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_17, (ATerm) ATmakeAppl(sym_FILE_1, h_17));
              return(t);
            }
            t = fetch_elem_1_0(e_6, t);
          }
          return(t);
        }
        t = fetch_elem_1_0(d_6, t);
        ;
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
        {
          ATerm g_32 = t;
          int h_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_17;
              {
                ATerm f_6 (ATerm t)
                {
                  ATerm i_17 = NULL,a_7 = NULL,b_7 = NULL;
                  i_17 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_17), term_z_12), e_17);
                  t = concat_strings_0_0(t);
                  a_7 = t;
                  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, a_7));
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm i_32 = ATgetFirst((ATermList) t);
                      if(match_cons(i_32, sym__2))
                        {
                          ATerm k_32 = ATgetArgument(i_32, 0);
                          b_7 = ATgetArgument(i_32, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm j_32 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, i_17, (ATerm) ATmakeAppl(sym_FILE_1, b_7));
                  return(t);
                }
                t = fetch_elem_1_0(f_6, t);
              }
              ;
              LocalPopChoice(h_32);
            }
          else
            {
              t = g_32;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_32), e_17), term_l_32);
              t = fatal_error_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm get_module_1_0 (ATerm t_80 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  t = basename_0_0(t);
  r_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_28), term_p_32), term_o_32), term_n_32));
  t = find_module_1_0(t_80, t);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      ATerm r_32 = ATgetArgument(t, 1);
      if(match_cons(r_32, sym_FILE_1))
        {
          s_17 = ATgetArgument(r_32, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm g_6 (ATerm t)
    {
      ATerm u_17 = NULL;
      u_17 = t;
      t = s_17;
      {
        ATerm n_6 (ATerm t)
        {
          t = term_s_32;
          return(t);
        }
        t = debug_1_0(n_6, t);
        t = u_17;
      }
      return(t);
    }
    t = if_verbose3_1_0(g_6, t);
    t = parse_module_0_0(t);
    t_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_17, t_17);
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_17 = ATgetFirst((ATermList) t);
      y_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_92(t);
  {
    ATerm o_6 (ATerm t)
    {
      ATerm z_17 = NULL;
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_17, z_17);
      t = n_92(t);
      return(t);
    }
    t = fetch_1_0(o_6, t);
    t = y_17;
  }
  return(t);
}
ATerm diff_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_18;
  {
    ATerm c_18 (ATerm t)
    {
      ATerm t_32 = t;
      int u_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
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
                ATerm p_6 (ATerm t)
                {
                  t = a_18;
                  return(t);
                }
                t = HdMember_p__2_0(f_92, p_6, t);
                t = c_18(t);
                ;
                LocalPopChoice(w_32);
              }
            else
              {
                t = v_32;
                t = Cons_2_0(_id, c_18, t);
              }
          }
        }
      return(t);
    }
    t = c_18(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  ATerm d_18 (ATerm t)
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_90(t);
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = k_90(t);
        t = _2_0(m_90, d_18, t);
        t = l_90(t);
      }
    return(t);
  }
  t = d_18(t);
  return(t);
}
ATerm zip_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm z_32 = ATgetArgument(t, 0);
        if(((ATgetType(z_32) != AT_LIST) || !(ATisEmpty(z_32))))
          _fail(t);
        {
          ATerm a_33 = ATgetArgument(t, 1);
          if(((ATgetType(a_33) != AT_LIST) || !(ATisEmpty(a_33))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_33 = ATgetArgument(t, 0);
        if(((ATgetType(b_33) == AT_LIST) && !(ATisEmpty(b_33))))
          {
            e_18 = ATgetFirst((ATermList) b_33);
            g_18 = (ATerm) ATgetNext((ATermList) b_33);
          }
        else
          _fail(t);
        {
          ATerm c_33 = ATgetArgument(t, 1);
          if(((ATgetType(c_33) == AT_LIST) && !(ATisEmpty(c_33))))
            {
              f_18 = ATgetFirst((ATermList) c_33);
              h_18 = (ATerm) ATgetNext((ATermList) c_33);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_18, f_18), (ATerm) ATmakeAppl(sym__2, g_18, h_18));
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    ATerm i_18 = NULL,j_18 = NULL;
    if(match_cons(t, sym__2))
      {
        i_18 = ATgetArgument(t, 0);
        j_18 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(j_18), i_18);
    return(t);
  }
  t = genzip_4_0(q_6, r_6, s_6, o_90, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm k_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_33 = ATgetFirst((ATermList) t);
      if(match_cons(d_33, sym__2))
        {
          k_18 = ATgetArgument(d_33, 0);
          m_18 = ATgetArgument(d_33, 1);
        }
      else
        _fail(t);
      n_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_18);
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_18);
  if(match_cons(t, sym__2))
    {
      if((o_18 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_18, p_18);
  t = zip_1_0(_id, t);
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_18, n_18);
  t = conc_0_0(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_6 (ATerm t)
      {
        ATerm w_18 = NULL;
        w_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_18);
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        ATerm y_6 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, y_6, t);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_6 (ATerm t)
            {
              ATerm i_33 = t;
              int j_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_18 = ATgetFirst((ATermList) t);
                      b_19 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = y_18;
                  if(match_cons(t, sym__2))
                    {
                      z_18 = ATgetArgument(t, 0);
                      a_19 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = a_19;
                  if((z_18 != t))
                    {
                      _fail(t);
                    }
                  t = b_19;
                  ;
                  LocalPopChoice(j_33);
                }
              else
                {
                  t = i_33;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, z_6, t);
            ;
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            {
              ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
              if(match_cons(t, sym__2))
                {
                  f_19 = ATgetArgument(t, 0);
                  g_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_19;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_19 = ATgetFirst((ATermList) t);
                  i_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_19), h_19), i_19);
            }
          }
        return(t);
      }
      t = for_3_0(u_6, v_6, w_6, t);
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      {
        ATerm c_7 (ATerm t)
        {
          ATerm m_19 = NULL;
          if(match_cons(t, sym__2))
            {
              m_19 = ATgetArgument(t, 0);
              if((m_19 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(c_7, t);
      }
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,y_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm k_33 = ATgetArgument(t, 0);
      if(((ATgetType(k_33) == AT_LIST) && !(ATisEmpty(k_33))))
        {
          n_19 = ATgetFirst((ATermList) k_33);
          o_19 = (ATerm) ATgetNext((ATermList) k_33);
        }
      else
        _fail(t);
      p_19 = ATgetArgument(t, 1);
      q_19 = ATgetArgument(t, 2);
      r_19 = ATgetArgument(t, 3);
      s_19 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_19, q_19);
  t = e_111(t);
  t_19 = t;
  t = f_111(t);
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_19, p_19);
  t = diff_0_0(t);
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_19, o_19);
  t = conc_0_0(t);
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_19, p_19);
  t = conc_0_0(t);
  y_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_19, t_19, r_19);
  t = g_111(t);
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__5, w_19, y_19, q_19, z_19, s_19);
  return(t);
}
ATerm while_not_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm t)
{
  ATerm a_20 (ATerm t)
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_82(t);
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = h_82(t);
        t = a_20(t);
      }
    return(t);
  }
  t = a_20(t);
  return(t);
}
ATerm for_3_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t)
{
  t = j_82(t);
  t = while_not_2_0(k_82, l_82, t);
  return(t);
}
ATerm graph_nodes_undef_roots_3_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
    if(match_cons(t, sym__3))
      {
        d_20 = ATgetArgument(t, 0);
        e_20 = ATgetArgument(t, 1);
        f_20 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, d_20, d_20, e_20, f_20, (ATerm) ATempty);
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    ATerm g_20 = NULL,h_20 = NULL;
    if(match_cons(t, sym__5))
      {
        ATerm n_33 = ATgetArgument(t, 0);
        if(((ATgetType(n_33) != AT_LIST) || !(ATisEmpty(n_33))))
          _fail(t);
        {
          ATerm o_33 = ATgetArgument(t, 1);
        }
        {
          ATerm p_33 = ATgetArgument(t, 2);
        }
        g_20 = ATgetArgument(t, 3);
        h_20 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, g_20, h_20);
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(m_110, n_110, o_110, t);
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        {
          ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
          if(match_cons(t, sym__5))
            {
              j_20 = ATgetArgument(t, 0);
              m_20 = ATgetArgument(t, 1);
              n_20 = ATgetArgument(t, 2);
              o_20 = ATgetArgument(t, 3);
              p_20 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = j_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_20 = ATgetFirst((ATermList) t);
              l_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, l_20, m_20, n_20, o_20, (ATerm) ATinsert(CheckATermList(p_20), k_20));
        }
      }
    return(t);
  }
  t = for_3_0(d_7, f_7, h_7, t);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm t)
{
  ATerm z_20 = NULL;
  t = graph_nodes_undef_roots_3_0(b_111, c_111, d_111, t);
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      {
        ATerm s_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_20;
  return(t);
}
ATerm filter_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_33);
    }
  else
    {
      t = t_33;
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 (ATerm t)
            {
              t = filter_1_0(k_95, t);
              return(t);
            }
            t = Cons_2_0(k_95, i_7, t);
            ;
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              ATerm f_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_33 = ATgetFirst((ATermList) t);
                  f_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = f_21;
              t = filter_1_0(k_95, t);
            }
          }
      }
    }
  return(t);
}
ATerm pack_stratego_modules_0_0 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_31;
        t = get_config_0_0(t);
        {
          ATerm j_7 (ATerm t)
          {
            ATerm a_34 = t;
            if((PushChoice() == 0))
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
                  _fail(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_34;
              }
            return(t);
          }
          t = filter_1_0(j_7, t);
        }
        ;
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = (ATerm) ATempty;
      }
    i_21 = t;
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, h_21), term_c_34), term_b_34), term_b_31, (ATerm) ATempty);
    {
      ATerm k_7 (ATerm t)
      {
        ATerm e_7 = NULL,g_7 = NULL;
        e_7 = t;
        t = SSL_explode_term(e_7);
        if(match_cons(t, sym__2))
          {
            ATerm d_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_34) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_34 = ATgetArgument(t, 1);
              if(((ATgetType(e_34) == AT_LIST) && !(ATisEmpty(e_34))))
                {
                  g_7 = ATgetFirst((ATermList) e_34);
                  {
                    ATerm f_34 = (ATerm) ATgetNext((ATermList) e_34);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_7;
        {
          ATerm m_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_21), term_z_12);
            return(t);
          }
          t = get_module_1_0(m_7, t);
        }
        return(t);
      }
      ATerm l_7 (ATerm t)
      {
        ATerm j_21 = NULL,k_21 = NULL;
        if(match_cons(t, sym__3))
          {
            ATerm g_34 = ATgetArgument(t, 0);
            j_21 = ATgetArgument(t, 1);
            k_21 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(k_21), j_21);
        return(t);
      }
      t = graph_nodes_roots_3_0(k_7, get_stratego_imports_0_0, l_7, t);
      t = unzip_0_0(t);
      t = _2_0(_id, flatten_stratego_0_0, t);
    }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      {
        ATerm n_21 = NULL,o_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_21 = ATgetFirst((ATermList) t);
            o_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_21;
        {
          ATerm n_7 (ATerm t)
          {
            t = o_21;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(n_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  s_21 = t;
  t = SSL_explode_term(s_21);
  if(match_cons(t, sym__2))
    {
      ATerm j_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_21;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  ATerm u_21 (ATerm t)
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_21, t);
        ;
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_88(t);
      }
    return(t);
  }
  t = u_21(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  if(match_cons(t, sym__2))
    {
      w_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_21;
  {
    ATerm o_7 (ATerm t)
    {
      t = v_21;
      return(t);
    }
    t = at_end_1_0(o_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(n_34);
    }
  else
    {
      t = m_34;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_21;
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = (ATerm) ATempty;
      }
    z_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
    t = conc_0_0(t);
    a_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_21, a_22);
    t = (ATerm) ATmakeAppl(sym__3, term_q_34, x_21, a_22);
  }
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 (ATerm t)
      {
        ATerm e_22 = NULL;
        e_22 = t;
        if(match_string(t, "-I"))
          {
            t = e_22;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
              _fail(t);
            t = e_22;
          }
        return(t);
      }
      ATerm q_7 (ATerm t)
      {
        ATerm f_22 = NULL;
        f_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_31, (ATerm) ATinsert(ATinsert(ATempty, f_22), term_u_31));
        t = extend_config_0_0(t);
        t = term_b_31;
        return(t);
      }
      ATerm r_7 (ATerm t)
      {
        t = term_t_34;
        return(t);
      }
      t = ArgOption_3_0(p_7, q_7, r_7, t);
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      {
        ATerm u_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_7 (ATerm t)
            {
              ATerm g_22 = NULL;
              g_22 = t;
              if(match_string(t, "--nodep"))
                {
                  t = g_22;
                }
              else
                {
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
                    _fail(t);
                  t = g_22;
                }
              return(t);
            }
            ATerm t_7 (ATerm t)
            {
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue)));
              t = term_b_31;
              return(t);
            }
            ATerm u_7 (ATerm t)
            {
              t = term_w_34;
              return(t);
            }
            t = Option_3_0(s_7, t_7, u_7, t);
            ;
            LocalPopChoice(v_34);
          }
        else
          {
            t = u_34;
            {
              ATerm x_34 = t;
              int y_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_7 (ATerm t)
                  {
                    ATerm h_22 = NULL;
                    h_22 = t;
                    if(match_string(t, "--dep"))
                      {
                        t = h_22;
                      }
                    else
                      {
                        if(match_string(t, "-d"))
                          {
                            t = h_22;
                          }
                        else
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
                              _fail(t);
                            t = h_22;
                          }
                      }
                    return(t);
                  }
                  ATerm w_7 (ATerm t)
                  {
                    ATerm i_22 = NULL;
                    i_22 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue)), i_22);
                    t = term_b_31;
                    return(t);
                  }
                  ATerm x_7 (ATerm t)
                  {
                    t = term_z_34;
                    return(t);
                  }
                  t = ArgOption_3_0(v_7, w_7, x_7, t);
                  ;
                  LocalPopChoice(y_34);
                }
              else
                {
                  t = x_34;
                  {
                    ATerm y_7 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    ATerm z_7 (ATerm t)
                    {
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                      t = term_b_31;
                      return(t);
                    }
                    ATerm a_8 (ATerm t)
                    {
                      t = term_a_35;
                      return(t);
                    }
                    t = Option_3_0(y_7, z_7, a_8, t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_8 = NULL;
        t = v_22;
        t = k_0(t);
        e_8 = t;
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(w_22, e_8);
          t = (ATerm) ATmakeAppl(sym_FILE_1, w_22);
        }
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        {
          ATerm f_35 = t;
          int g_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_8 = NULL;
              t = v_22;
              t = k_0(t);
              j_8 = t;
              {
                ATerm h_35 = t;
                if((PushChoice() == 0))
                  {
                    ATerm i_35 = t;
                    int j_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(j_35);
                      }
                    else
                      {
                        t = i_35;
                        {
                          ATerm k_35 = t;
                          int l_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(l_35);
                            }
                          else
                            {
                              t = k_35;
                              {
                                ATerm k_8 = NULL;
                                k_8 = t;
                                if((w_22 != t))
                                  {
                                    _fail(t);
                                  }
                                t = k_8;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_35;
                  }
                t = SSL_copy(w_22, j_8);
                t = (ATerm) ATmakeAppl(sym_FILE_1, w_22);
              }
              ;
              LocalPopChoice(g_35);
            }
          else
            {
              t = f_35;
              t = v_22;
              t = k_0(t);
              if((w_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_22);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_8 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_35 = ATgetArgument(t, 0);
            ATerm p_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_23, d_23);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_35 = ATgetFirst((ATermList) t);
            m_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_8;
        ;
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        t = (ATerm) ATempty;
      }
    g_23 = t;
    t = SSL_table_put(c_23, d_23, g_23);
    t = (ATerm) ATmakeAppl(sym__2, c_23, d_23);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  m_23 = t;
  t = w_98(t);
  n_23 = t;
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_23, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_23 = ATgetFirst((ATermList) t);
        o_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_23, (ATerm)ATmakeAppl(sym_Scopes_0), o_23);
    t = p_23;
    {
      ATerm b_8 (ATerm t)
      {
        ATerm q_23 = NULL;
        q_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_23, q_23);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(b_8, t);
      t = m_23;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm t)
{
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_81(t);
      t = l_81(t);
      ;
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
      t = l_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  t = v_98(t);
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_23, term_v_35);
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_35 = ATgetArgument(t, 0);
            ATerm z_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_23, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        t = (ATerm) ATempty;
      }
    v_23 = t;
    t = SSL_table_put(u_23, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(v_23), (ATerm) ATempty));
    t = t_23;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm a_24 = NULL;
  ATerm c_8 (ATerm t)
  {
    t = term_d_31;
    return(t);
  }
  t = begin_scope_1_0(c_8, t);
  {
    ATerm d_8 (ATerm t)
    {
      ATerm b_24 = NULL;
      b_24 = t;
      {
        ATerm a_36 = t;
        int b_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(b_36);
          }
        else
          {
            t = a_36;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_24 = ATgetFirst((ATermList) t);
            {
              ATerm c_36 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = a_24;
        {
          ATerm f_8 (ATerm t)
          {
            ATerm g_8 (ATerm t)
            {
              ATerm c_24 = NULL;
              c_24 = t;
              t = SSL_remove(c_24);
              return(t);
            }
            t = try_1_0(g_8, t);
            return(t);
          }
          t = map_1_0(f_8, t);
          t = b_24;
          {
            ATerm h_8 (ATerm t)
            {
              t = term_d_31;
              return(t);
            }
            t = end_scope_1_0(h_8, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(i_109, d_8, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_24 = NULL;
        t = term_e_31;
        t = get_config_0_0(t);
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_24);
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = term_f_36;
      }
    t = j_109(t);
    {
      ATerm l_8 (ATerm t)
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_13;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(h_36);
          }
        else
          {
            t = g_36;
            t = term_i_36;
          }
        return(t);
      }
      t = copy_to_1_0(l_8, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(i_8, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    ATerm f_24 = NULL;
    f_24 = t;
    if(match_string(t, "-k"))
      {
        t = f_24;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = f_24;
      }
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    ATerm g_24 = NULL,h_24 = NULL;
    g_24 = t;
    t = SSL_string_to_int(g_24);
    h_24 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), h_24);
    t = g_24;
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    t = term_j_36;
    return(t);
  }
  t = ArgOption_3_0(n_8, o_8, p_8, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_8 (ATerm t)
      {
        ATerm j_24 = NULL;
        j_24 = t;
        if(match_string(t, "-S"))
          {
            t = j_24;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = j_24;
          }
        return(t);
      }
      ATerm r_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_n_36;
        return(t);
      }
      ATerm s_8 (ATerm t)
      {
        t = term_o_36;
        return(t);
      }
      t = Option_3_0(q_8, r_8, s_8, t);
      ;
      LocalPopChoice(l_36);
    }
  else
    {
      t = k_36;
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_8 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm u_8 (ATerm t)
            {
              ATerm k_24 = NULL,l_24 = NULL;
              k_24 = t;
              t = SSL_string_to_int(k_24);
              l_24 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_24);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, k_24);
              return(t);
            }
            ATerm v_8 (ATerm t)
            {
              t = term_r_36;
              return(t);
            }
            t = ArgOption_3_0(t_8, u_8, v_8, t);
            ;
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            {
              ATerm a_9 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm b_9 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_s_36;
                return(t);
              }
              ATerm e_9 (ATerm t)
              {
                t = term_t_36;
                return(t);
              }
              t = Option_3_0(a_9, b_9, e_9, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm f_9 (ATerm t)
  {
    ATerm n_24 = NULL;
    n_24 = t;
    if(match_string(t, "-o"))
      {
        t = n_24;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = n_24;
      }
    return(t);
  }
  ATerm i_9 (ATerm t)
  {
    ATerm o_24 = NULL;
    o_24 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), o_24);
    t = (ATerm) ATmakeAppl(sym_Output_1, o_24);
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    t = term_w_36;
    return(t);
  }
  t = ArgOption_3_0(f_9, i_9, k_9, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm x_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(y_36);
    }
  else
    {
      t = x_36;
      {
        ATerm l_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_9 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_z_36;
          return(t);
        }
        ATerm n_9 (ATerm t)
        {
          t = term_a_37;
          return(t);
        }
        t = Option_3_0(l_9, m_9, n_9, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  r_24 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = r_24;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm z_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_24 = ATgetFirst((ATermList) t);
          t_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_24 = ATgetFirst((ATermList) t);
          v_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_24;
      t = h_0(t);
      t = u_24;
      t = i_0(t);
      z_24 = t;
      t = (ATerm) ATinsert(CheckATermList(v_24), z_24);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm p_9 (ATerm t)
  {
    ATerm b_25 = NULL;
    b_25 = t;
    if(match_string(t, "-i"))
      {
        t = b_25;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = b_25;
      }
    return(t);
  }
  ATerm t_9 (ATerm t)
  {
    ATerm c_25 = NULL;
    c_25 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), c_25);
    t = (ATerm) ATmakeAppl(sym_Input_1, c_25);
    return(t);
  }
  ATerm z_9 (ATerm t)
  {
    t = term_b_37;
    return(t);
  }
  t = ArgOption_3_0(p_9, t_9, z_9, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
      {
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(f_37);
          }
        else
          {
            t = e_37;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL;
  d_25 = t;
  t = term_b_31;
  t = whoami_0_0(t);
  e_25 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_25), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = d_25;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_31;
  t = whoami_0_0(t);
  f_25 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), f_25));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_37;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm t)
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_94(t);
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      {
        ATerm i_25 = NULL,j_25 = NULL,m_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_25 = ATgetFirst((ATermList) t);
            j_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_25;
        t = foldr_2_0(h_94, i_94, t);
        m_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_25, m_25);
        t = i_94(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  n_25 = t;
  t = SSL_explode_term(n_25);
  if(match_cons(t, sym__2))
    {
      ATerm j_37 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_25;
  t = foldr_2_0(a_98, b_98, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_25 = NULL;
  t = times_0_0(t);
  {
    ATerm g_10 (ATerm t)
    {
      t = term_m_36;
      return(t);
    }
    ATerm m_10 (ATerm t)
    {
      ATerm q_25 = NULL,r_25 = NULL;
      if(match_cons(t, sym__2))
        {
          q_25 = ATgetArgument(t, 0);
          r_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(q_25, r_25);
            ;
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            t = SSL_addr(q_25, r_25);
          }
      }
      return(t);
    }
    t = crush_2_0(g_10, m_10, t);
    p_25 = t;
    t = SSL_TicksToSeconds(p_25);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  a_26 = t;
  if(match_cons(t, sym__2))
    {
      b_26 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_26;
        if((b_26 != t))
          {
            _fail(t);
          }
        t = a_26;
        ;
        LocalPopChoice(n_37);
      }
    else
      {
        t = m_37;
        t = a_26;
        {
          ATerm o_37 = t;
          int p_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_26, c_26);
              ;
              LocalPopChoice(p_37);
            }
          else
            {
              t = o_37;
              t = SSL_gtr(b_26, c_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_26, c_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_101 (ATerm), ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    ATerm f_26 = NULL,g_26 = NULL;
    f_26 = t;
    t = term_z_15;
    t = get_config_0_0(t);
    g_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_26, term_w_15);
    t = geq_0_0(t);
    t = f_26;
    t = v_101(t);
    return(t);
  }
  t = try_1_0(n_10, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm o_10 (ATerm t)
  {
    ATerm i_26 = NULL,j_26 = NULL;
    t = run_time_0_0(t);
    i_26 = t;
    t = term_b_31;
    t = whoami_0_0(t);
    j_26 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), i_26), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), j_26));
    t = (ATerm) ATmakeAppl(sym__2, term_y_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_37), i_26), term_m_16), j_26));
    return(t);
  }
  t = if_verbose1_1_0(o_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_37;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_37);
    }
  else
    {
      t = r_37;
      {
        ATerm p_10 (ATerm t)
        {
          ATerm u_37 = t;
          int v_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(x_37);
                  }
                else
                  {
                    t = w_37;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(p_10, t);
      }
    }
  t = q_103(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_26 = ATgetFirst((ATermList) t);
      n_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_26 = NULL,s_26 = NULL;
        t = n_26;
        t = g_0(t);
        r_26 = t;
        t = m_26;
        t = f_0(t);
        s_26 = t;
        t = n_26;
        {
          ATerm u_10 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_26), s_26);
            return(t);
          }
          t = reverse_acc_2_0(f_0, u_10, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_31;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm v_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, v_10, t);
  return(t);
}
ATerm Program_1_0 (ATerm r_72 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  w_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_26);
  t_26 = t;
  t = u_26;
  t = r_72(t);
  v_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, v_26), t_26);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_37;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_37);
    }
  else
    {
      t = y_37;
      {
        ATerm f_11 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(f_11, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_a_38;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm g_11 (ATerm t)
    {
      ATerm a_27 = NULL;
      a_27 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, a_27), term_b_38);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(g_11, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm s_72 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_27);
  b_27 = t;
  t = c_27;
  t = s_72(t);
  d_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, d_27), b_27);
  return(t);
}
ATerm fetch_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm i_27 (ATerm t)
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(q_88, _id, t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = Cons_2_0(_id, i_27, t);
      }
    return(t);
  }
  t = i_27(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  t = fetch_1_0(e_105, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  k_27 = t;
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_38 = ATgetFirst((ATermList) t);
                ATerm h_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_27;
          }
        ;
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        t = (ATerm) ATinsert(ATempty, k_27);
      }
    l_27 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), l_27);
    t = k_27;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_37;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_80(t);
      ;
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm i_11 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_n_38;
        return(t);
      }
      ATerm j_11 (ATerm t)
      {
        t = term_o_38;
        return(t);
      }
      t = Option_3_0(h_11, i_11, j_11, t);
      ;
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
      {
        ATerm k_11 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm l_11 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_p_38;
          return(t);
        }
        ATerm n_11 (ATerm t)
        {
          t = term_q_38;
          return(t);
        }
        t = Option_3_0(k_11, l_11, n_11, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
  if(match_cons(t, sym__3))
    {
      r_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
      t_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_27, s_27);
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_38 = ATgetArgument(t, 0);
            ATerm u_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_27, s_27);
        ;
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        t = (ATerm) ATempty;
      }
    u_27 = t;
    t = SSL_table_put(r_27, s_27, (ATerm) ATinsert(CheckATermList(u_27), t_27));
    t = (ATerm) ATmakeAppl(sym__3, r_27, s_27, t_27);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm r_28 = NULL;
  t = term_b_31;
  t = j_106(t);
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_38, term_w_38, r_28);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = t_28;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm y_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_28 = ATgetFirst((ATermList) t);
          v_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_28;
      t = a_0(t);
      t = term_b_31;
      t = b_0(t);
      y_28 = t;
      t = (ATerm) ATinsert(CheckATermList(v_28), y_28);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm o_11 (ATerm t)
  {
    ATerm a_29 = NULL;
    a_29 = t;
    if(match_string(t, "--help"))
      {
        t = a_29;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = a_29;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = a_29;
          }
      }
    return(t);
  }
  ATerm p_11 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_x_38;
    return(t);
  }
  ATerm q_11 (ATerm t)
  {
    t = term_y_38;
    return(t);
  }
  t = Option_3_0(o_11, p_11, q_11, t);
  return(t);
}
ATerm Cons_2_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  g_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_29 = ATgetFirst((ATermList) t);
      d_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_29);
  b_29 = t;
  t = c_29;
  t = e_67(t);
  e_29 = t;
  t = d_29;
  t = f_67(t);
  f_29 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_29), e_29), b_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_106 (ATerm), ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  {
    ATerm r_11 (ATerm t)
    {
      t = term_z_38;
      t = h_106(t);
      return(t);
    }
    t = try_1_0(r_11, t);
    t = n_29;
    {
      ATerm s_11 (ATerm t)
      {
        ATerm o_29 = NULL;
        o_29 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_29);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_29);
        return(t);
      }
      ATerm t_11 (ATerm t)
      {
        ATerm a_39 = t;
        int b_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_39 = t;
            int d_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_39);
              }
            else
              {
                t = c_39;
                t = h_106(t);
                t = Cons_2_0(_id, t_11, t);
              }
            ;
            LocalPopChoice(b_39);
          }
        else
          {
            t = a_39;
            {
              ATerm q_29 = NULL,r_29 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_29 = ATgetFirst((ATermList) t);
                  r_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_29), (ATerm) ATmakeAppl(sym_Undefined_1, q_29));
            }
          }
        return(t);
      }
      t = Cons_2_0(s_11, t_11, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm x_29 = NULL,a_30 = NULL,b_30 = NULL;
  x_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_29;
  {
    ATerm w_11 (ATerm t)
    {
      ATerm e_39 = t;
      int f_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_106(t);
          ;
          LocalPopChoice(f_39);
        }
      else
        {
          t = e_39;
          {
            ATerm g_39 = t;
            int h_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(h_39);
              }
            else
              {
                t = g_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_11, t);
    {
      ATerm x_11 (ATerm t)
      {
        ATerm i_39 = t;
        int j_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_30 = NULL;
            l_30 = t;
            {
              ATerm k_39 = t;
              int l_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_30;
                  {
                    ATerm m_39 = t;
                    int n_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_t_37;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(n_39);
                      }
                    else
                      {
                        t = m_39;
                        {
                          ATerm y_11 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(y_11, t);
                        }
                      }
                    t = l_30;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(l_39);
                }
              else
                {
                  t = k_39;
                  t = term_m_38;
                  t = get_config_0_0(t);
                  t = l_30;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(j_39);
          }
        else
          {
            t = i_39;
            {
              ATerm c_12 (ATerm t)
              {
                ATerm d_12 (ATerm t)
                {
                  a_30 = t;
                  return(t);
                }
                t = Undefined_1_0(d_12, t);
                return(t);
              }
              t = option_defined_1_0(c_12, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_30)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_y_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_30)), term_o_39));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(x_11, t);
      b_30 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm n_16 = NULL;
  t = parse_options_1_0(s_103, t);
  n_16 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), n_16);
  t = n_16;
  t = u_103(t);
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_103, t);
        ;
        LocalPopChoice(q_39);
      }
    else
      {
        t = p_39;
        {
          ATerm r_39 = t;
          int s_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_103(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_39);
            }
          else
            {
              t = r_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t)
{
  t = option_wrap_4_0(w_103, default_usage_0_0, _id, x_103, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm t)
{
  ATerm e_12 (ATerm t)
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_109(t);
        ;
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm g_12 (ATerm t)
  {
    t = xtc_io_1_0(o_109, t);
    return(t);
  }
  t = option_wrap_2_0(e_12, g_12, t);
  return(t);
}
ATerm xtc_iowrap_2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(t_109, u_109, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  ATerm h_12 (ATerm t)
  {
    t = pack_stratego_modules_0_0(t);
    if(match_cons(t, sym__2))
      {
        p_30 = ATgetArgument(t, 0);
        q_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm v_39 = t;
      int w_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_39;
          t = get_config_0_0(t);
          t = p_30;
          {
            ATerm m_12 (ATerm t)
            {
              t = get_filename_0_0(t);
              t = basename_0_0(t);
              return(t);
            }
            t = map_1_0(m_12, t);
            t = write_to_text_0_0(t);
          }
          ;
          LocalPopChoice(w_39);
        }
      else
        {
          t = v_39;
          t = p_30;
          t = create_dep_file_0_0(t);
          t = q_30;
          t = write_to_0_0(t);
        }
    }
    return(t);
  }
  t = xtc_iowrap_2_0(pack_stratego_options_0_0, h_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
