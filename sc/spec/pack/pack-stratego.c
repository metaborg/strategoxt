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
ATerm term_q_30;
ATerm term_p_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_d_30;
ATerm term_a_30;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_r_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_k_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_k_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_v_15;
ATerm term_n_15;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_q_13;
void init_constant_terms (void)
{
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_e_16, term_h_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_i_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_o_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_a_19);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_r_19, term_s_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_19, term_h_20, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_20, term_l_20, term_m_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_20, term_q_20, term_s_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_20, term_x_20, term_a_21);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_21, term_d_21, term_g_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_21, term_s_21, term_t_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_22, term_b_22, term_c_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_22, term_f_22, term_g_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_22, term_j_22, term_k_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_22, term_p_22, term_q_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_22, term_w_22, term_x_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_22, term_a_23, term_e_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_23, term_j_23, term_n_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_23, term_q_23, term_v_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_24, term_g_24, term_h_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_24, term_p_24, term_r_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_24, term_b_25, term_c_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_25, term_l_25, term_m_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_25, term_p_25, term_q_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_25, term_y_25, term_b_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_26, term_g_26, term_h_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_26, term_v_26, term_w_26);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
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
ATerm WriteToFile_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm basename_1_0 (ATerm l_97 (ATerm), ATerm);
ATerm basename_0_0 (ATerm);
ATerm at_suffix_rev_1_0 (ATerm m_89 (ATerm), ATerm);
ATerm get_filename_0_0 (ATerm);
ATerm map_1_0 (ATerm n_88 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Imports_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm _2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm);
ATerm unzip_1_0 (ATerm b_91 (ATerm), ATerm);
ATerm unzip_0_0 (ATerm);
ATerm get_stratego_imports_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm y_102 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm k_102 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm repeat_1_0 (ATerm y_81 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm j_102 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm union_1_0 (ATerm r_92 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm v_106 (ATerm), ATerm);
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
ATerm xtc_command_1_0 (ATerm h_110 (ATerm), ATerm);
ATerm assert_1_0 (ATerm k_99 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm w_100 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm c_73 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm debug_1_0 (ATerm p_100 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm i_102 (ATerm), ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm a_89 (ATerm), ATerm);
ATerm find_module_1_0 (ATerm b_81 (ATerm), ATerm);
ATerm get_module_1_0 (ATerm a_81 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm);
ATerm diff_1_0 (ATerm n_92 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm);
ATerm zip_1_0 (ATerm w_90 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm);
ATerm for_3_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_3_0 (ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm);
ATerm graph_nodes_roots_3_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm);
ATerm filter_1_0 (ATerm s_95 (ATerm), ATerm);
ATerm pack_stratego_modules_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_89 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm h_99 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm g_99 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm t_109 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm u_109 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm);
ATerm crush_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_102 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm b_104 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm y_72 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_72 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm p_105 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm u_106 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm s_106 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm r_106 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm);
ATerm xtc_iowrap_2_0 (ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    ATerm f_0 = NULL,o_0 = NULL,p_0 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm y_0 = ATgetArgument(t, 0);
        if(match_cons(y_0, sym_Stream_1))
          {
            f_0 = ATgetArgument(y_0, 0);
          }
        else
          _fail(t);
        o_0 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(f_0, o_0);
    p_0 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, p_0);
    return(t);
  }
  t = WriteToFile_1_0(b_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm q_0 = NULL,t_0 = NULL;
  q_0 = t;
  t = xtc_new_file_0_0(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_0, q_0);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(t_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_0);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL;
  if(match_cons(t, sym__2))
    {
      v_0 = ATgetArgument(t, 0);
      w_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_0;
  {
    ATerm o_2 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = o_2;
        {
          ATerm n_0 (ATerm t)
          {
            ATerm l_13 = t;
            int p_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(p_13);
              }
            else
              {
                t = l_13;
                {
                  ATerm x_0 = NULL;
                  t = Cons_2_0(_id, n_0, t);
                  x_0 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_0), v_0);
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
ATerm add_extension_0_0 (ATerm t)
{
  ATerm a_1 = NULL,c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_1), term_q_13), a_1);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL;
  d_1 = t;
  t = term_a_14;
  t = get_config_0_0(t);
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_14;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        {
          ATerm f_14 = t;
          if((PushChoice() == 0))
            {
              t = term_g_14;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_14;
            }
        }
      }
    e_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_1, term_h_14);
    t = add_extension_0_0(t);
    g_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_1, term_i_14);
    t = open_file_0_0(t);
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATinsert(CheckATermList(d_1), term_k_14));
    t = separate_by_0_0(t);
    i_1 = t;
    t = SSL_printnl(h_1, (ATerm) ATinsert(CheckATermList(i_1), e_1));
    t = SSL_close_file(h_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, g_1);
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      j_1 = ATgetArgument(t, 0);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_1, term_i_14);
  t = open_stream_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_1, k_1);
  t = d_101(t);
  t = fclose_0_0(t);
  t = k_1;
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm p_1 = NULL,q_1 = NULL,t_1 = NULL,w_1 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm l_14 = ATgetArgument(t, 0);
        if(match_cons(l_14, sym_Stream_1))
          {
            p_1 = ATgetArgument(l_14, 0);
          }
        else
          _fail(t);
        q_1 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(p_1, q_1);
    t_1 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), t_1);
    w_1 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, w_1);
    return(t);
  }
  t = WriteToFile_1_0(r_0, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL;
  y_1 = t;
  t = xtc_new_file_0_0(t);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, y_1);
  t = WriteToTextFile_0_0(t);
  t = SSL_close_file(z_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_1);
  return(t);
}
ATerm basename_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL;
  a_2 = t;
  t = SSL_explode_string(a_2);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm m_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, s_0, t);
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
                ATerm u_0 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(u_0, _id, t);
                ;
                LocalPopChoice(p_14);
              }
            else
              {
                t = o_14;
                {
                  ATerm z_0 (ATerm t)
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2_0(z_0, l_97, t);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1_0(s_0, t);
    b_2 = t;
    t = SSL_implode_string(b_2);
  }
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(_id, t);
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm m_89 (ATerm), ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_2, t);
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = m_89(t);
      }
    return(t);
  }
  t = p_2(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm q_2 = NULL,s_2 = NULL,t_2 = NULL;
  s_2 = t;
  t = SSL_explode_string(s_2);
  {
    ATerm b_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_14 = ATgetFirst((ATermList) t);
            if(((ATgetType(y_14) != AT_INT) || (ATgetInt((ATermInt) y_14) != 47)))
              _fail(t);
            q_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        return(t);
      }
      t = at_suffix_rev_1_0(f_1, t);
      t = not_null(q_2);
      return(t);
    }
    t = try_1_0(b_1, t);
    t_2 = t;
    t = SSL_implode_string(t_2);
  }
  return(t);
}
ATerm map_1_0 (ATerm n_88 (ATerm), ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = Cons_2_0(n_88, u_2, t);
      }
    return(t);
  }
  t = u_2(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 = NULL;
      c_3 = t;
      t = SSL_is_string(c_3);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(l_1, t);
            ;
            LocalPopChoice(j_15);
          }
        else
          {
            t = i_15;
            {
              ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL;
              j_3 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_3 = ATgetArgument(t, 0);
                  t = m_3;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_3 = ATgetArgument(t, 0);
                      t = m_3;
                      {
                        ATerm k_15 = t;
                        int l_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_15);
                          }
                        else
                          {
                            t = k_15;
                            {
                              ATerm m_1 (ATerm t)
                              {
                                t = term_n_15;
                                return(t);
                              }
                              t = debug_1_0(m_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_3 = NULL,u_3 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_3 = ATgetArgument(t, 0);
                          n_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_3;
                      t = eval_config_0_0(t);
                      s_3 = t;
                      t = n_3;
                      t = eval_config_0_0(t);
                      u_3 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_3, u_3);
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
  ATerm x_3 = NULL;
  x_3 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_3);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm y_3 = NULL;
      t = eval_config_0_0(t);
      y_3 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_3, y_3);
      t = y_3;
      return(t);
    }
    t = try_1_0(o_1, t);
  }
  return(t);
}
ATerm Imports_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  c_4 = t;
  if(match_cons(t, sym_Imports_1))
    {
      a_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_4);
  z_3 = t;
  t = a_4;
  t = r_73(t);
  b_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, b_4), z_3);
  return(t);
}
ATerm flatten_stratego_0_0 (ATerm t)
{
  ATerm f_4 = NULL;
  ATerm s_1 (ATerm t)
  {
    ATerm g_4 = NULL;
    if(match_cons(t, sym_Specification_1))
      {
        g_4 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = g_4;
    {
      ATerm u_1 (ATerm t)
      {
        ATerm q_15 = t;
        if((PushChoice() == 0))
          {
            t = Imports_1_0(_id, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_15;
          }
        return(t);
      }
      t = filter_1_0(u_1, t);
    }
    return(t);
  }
  t = map_1_0(s_1, t);
  t = concat_0_0(t);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_4);
  return(t);
}
ATerm _2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  o_4 = t;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_4);
  i_4 = t;
  t = j_4;
  t = c_66(t);
  m_4 = t;
  t = l_4;
  t = d_66(t);
  n_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, m_4, n_4), i_4);
  return(t);
}
ATerm unzip_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_v_15;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm r_4 = NULL,u_4 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_4 = ATgetFirst((ATermList) t);
        u_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, r_4, u_4);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm w_4 = NULL,y_4 = NULL,z_4 = NULL,b_5 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm w_15 = ATgetArgument(t, 0);
        if(match_cons(w_15, sym__2))
          {
            w_4 = ATgetArgument(w_15, 0);
            z_4 = ATgetArgument(w_15, 1);
          }
        else
          _fail(t);
        {
          ATerm x_15 = ATgetArgument(t, 1);
          if(match_cons(x_15, sym__2))
            {
              y_4 = ATgetArgument(x_15, 0);
              b_5 = ATgetArgument(x_15, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_4), w_4), (ATerm) ATinsert(CheckATermList(b_5), z_4));
    return(t);
  }
  t = genzip_4_0(v_1, x_1, c_2, b_91, t);
  return(t);
}
ATerm unzip_0_0 (ATerm t)
{
  t = unzip_1_0(_id, t);
  return(t);
}
ATerm get_stratego_imports_0_0 (ATerm t)
{
  ATerm c_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_15 = ATgetArgument(t, 0);
      ATerm z_15 = ATgetArgument(t, 1);
      if(match_cons(z_15, sym_Specification_1))
        {
          c_5 = ATgetArgument(z_15, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = c_5;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm d_5 = NULL;
      if(match_cons(t, sym_Imports_1))
        {
          d_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_5;
      return(t);
    }
    t = filter_1_0(d_2, t);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL;
  g_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = g_5;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          h_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(h_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm m_5 = NULL,o_5 = NULL,p_5 = NULL;
  t = term_b_16;
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
        t = term_e_16;
      }
    m_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_5, term_e_16);
    {
      ATerm g_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(m_5, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(h_16);
        }
      else
        {
          t = g_16;
          t = SSL_subtr(m_5, (ATerm) ATmakeInt(1));
        }
      p_5 = t;
      t = SSL_int_to_string(p_5);
      o_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, o_5), term_b_16);
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,u_5 = NULL;
  t = term_k_16;
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = term_e_16;
      }
    q_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_5, term_e_16);
    {
      ATerm n_16 = t;
      int p_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(q_5, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(p_16);
        }
      else
        {
          t = n_16;
          t = SSL_subtr(q_5, (ATerm) ATmakeInt(1));
        }
      u_5 = t;
      t = SSL_int_to_string(u_5);
      r_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, r_5), term_k_16);
    }
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(q_110, r_110, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,d_7 = NULL,f_7 = NULL;
  q_6 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_6 = ATgetArgument(t, 0);
      {
        ATerm r_1 = NULL;
        t = SSL_int_to_string(r_6);
        r_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_16), r_1), term_t_16);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm f_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          r_6 = ATgetArgument(t, 0);
          d_7 = ATgetArgument(t, 1);
          f_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_7);
      f_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_7), term_y_16), f_2), term_v_16), r_6);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm l_7 = NULL;
  l_7 = t;
  {
    ATerm z_16 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_26), term_o_26), term_c_26), term_u_25), term_n_25), term_j_25), term_x_24), term_n_24), term_z_23), term_o_23), term_f_23), term_y_22), term_r_22), term_l_22), term_h_22), term_d_22), term_u_21), term_h_21), term_b_21), term_u_20), term_o_20), term_j_20), term_x_19), term_b_19), term_t_18), term_k_18), term_o_17), term_k_17);
        {
          ATerm e_2 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm b_27 = ATgetArgument(t, 0);
                if((l_7 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm c_27 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(e_2, t);
        }
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = z_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, l_7);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm m_7 = NULL;
  m_7 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm n_7 = NULL,v_7 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm d_27 = ATgetArgument(t, 0);
          n_7 = ATgetArgument(t, 1);
          {
            ATerm e_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_7;
      {
        ATerm f_27 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_27;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        v_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_7), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATinsert(ATempty, v_7), term_l_27));
      }
      return(t);
    }
    t = try_1_0(g_2, t);
    t = m_7;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL;
  a_8 = t;
  t = fork_0_0(t);
  b_8 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_8;
        t = w_102(t);
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        t = (ATerm) ATmakeAppl(sym__2, b_8, a_8);
        t = x_102(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  ATerm f_8 = NULL;
  ATerm i_2 (ATerm t)
  {
    ATerm o_8 = NULL;
    if(match_cons(t, sym__2))
      {
        o_8 = ATgetArgument(t, 0);
        f_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(o_8);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm p_27 = ATgetArgument(t, 0);
        if(((ATgetType(p_27) != AT_INT) || (ATgetInt((ATermInt) p_27) != 0)))
          _fail(t);
        {
          ATerm t_27 = ATgetArgument(t, 1);
        }
        {
          ATerm u_27 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = f_8;
    return(t);
  }
  t = fork_2_0(y_102, i_2, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  if(match_cons(t, sym__2))
    {
      s_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_2 (ATerm t)
    {
      t = SSL_execvp(s_8, t_8);
      return(t);
    }
    t = fork_and_wait_1_0(j_2, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_8 = NULL;
  y_8 = t;
  t = SSL_table_keys(y_8);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm z_8 = NULL,a_9 = NULL;
      z_8 = t;
      t = SSL_table_get(y_8, z_8);
      a_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_8, a_9);
      return(t);
    }
    t = map_1_0(k_2, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm b_9 = NULL,c_9 = NULL;
    b_9 = t;
    t = term_k_16;
    t = get_config_0_0(t);
    c_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_9, term_p_25);
    t = geq_0_0(t);
    t = b_9;
    t = k_102(t);
    return(t);
  }
  t = try_1_0(l_2, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, q_9));
  {
    ATerm m_2 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((r_9 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          u_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(m_2, t);
    t = not_null(u_9);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm y_81 (ATerm), ATerm t)
{
  ATerm v_9 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      t = y_81(t);
      t = v_9(t);
      return(t);
    }
    t = try_1_0(n_2, t);
    return(t);
  }
  t = v_9(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm w_9 = NULL;
  w_9 = t;
  {
    ATerm r_2 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm w_27 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_27;
          }
      }
      return(t);
    }
    t = repeat_1_0(r_2, t);
    t = w_9;
  }
  return(t);
}
ATerm say_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm y_9 = NULL,h_2 = NULL;
  y_9 = t;
  t = t_100(t);
  h_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, h_2));
  t = y_9;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm a_10 = NULL,b_10 = NULL;
    a_10 = t;
    t = term_k_16;
    t = get_config_0_0(t);
    b_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_10, term_s_21);
    t = geq_0_0(t);
    t = a_10;
    t = j_102(t);
    return(t);
  }
  t = try_1_0(v_2, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm c_10 = NULL,d_10 = NULL;
    c_10 = t;
    t = term_k_16;
    t = get_config_0_0(t);
    d_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_10, term_m_18);
    t = geq_0_0(t);
    t = c_10;
    t = l_102(t);
    return(t);
  }
  t = try_1_0(w_2, t);
  return(t);
}
ATerm union_1_0 (ATerm r_92 (ATerm), ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10;
  {
    ATerm k_10 (ATerm t)
    {
      ATerm x_27 = t;
      int y_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_10;
          ;
          LocalPopChoice(y_27);
        }
      else
        {
          t = x_27;
          {
            ATerm a_28 = t;
            int b_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_2 (ATerm t)
                {
                  t = i_10;
                  return(t);
                }
                t = HdMember_p__2_0(r_92, x_2, t);
                t = k_10(t);
                ;
                LocalPopChoice(b_28);
              }
            else
              {
                t = a_28;
                t = Cons_2_0(_id, k_10, t);
              }
          }
        }
      return(t);
    }
    t = k_10(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm l_10 = NULL;
    if(match_cons(t, sym__2))
      {
        l_10 = ATgetArgument(t, 0);
        if((l_10 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(y_2, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__3))
    {
      o_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
      q_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_10, p_10);
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_28 = ATgetArgument(t, 0);
            ATerm f_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_10, p_10);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = (ATerm) ATempty;
      }
    r_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_10, q_10);
    t = union_0_0(t);
    s_10 = t;
    t = SSL_table_put(o_10, p_10, s_10);
    t = (ATerm) ATmakeAppl(sym__3, o_10, p_10, q_10);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL;
  if(match_cons(t, sym__2))
    {
      u_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm v_10 = NULL,w_10 = NULL;
      if(match_cons(t, sym__2))
        {
          v_10 = ATgetArgument(t, 0);
          w_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, u_10, v_10, w_10);
      t = v_106(t);
      return(t);
    }
    t = map_1_0(z_2, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_11 (ATerm e_11, ATerm t)
  {
    t = SSL_fclose(e_11);
    return(t);
  }
  ATerm h_11 = NULL,i_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_11 = ATgetArgument(t, 0);
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_11);
            ;
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            t = k_11(i_11, t);
          }
      }
    }
  else
    {
      t = k_11(i_11, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_11 = NULL;
  t = SSL_stdin_stream();
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_11 = NULL;
  t = SSL_stdout_stream();
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  t = SSL_stderr_stream();
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_11);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      ATerm l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 = NULL,h_4 = NULL;
        t_3 = t;
        t = SSL_explode_term(t_3);
        if(match_cons(t, sym__2))
          {
            ATerm o_28 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_28) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_28 = ATgetArgument(t, 1);
              if(((ATgetType(p_28) == AT_LIST) && !(ATisEmpty(p_28))))
                {
                  h_4 = ATgetFirst((ATermList) p_28);
                  {
                    ATerm q_28 = (ATerm) ATgetNext((ATermList) p_28);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_4;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        {
          ATerm r_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_11 = NULL,y_11 = NULL,z_11 = NULL;
              ATerm a_3 (ATerm t)
              {
                ATerm a_12 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    a_12 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_12;
                return(t);
              }
              t = _2_0(a_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  v_11 = ATgetArgument(t, 0);
                  y_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(v_11, y_11);
              z_11 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, z_11);
              ;
              LocalPopChoice(w_28);
            }
          else
            {
              t = r_28;
              {
                ATerm b_12 = NULL,f_12 = NULL,g_12 = NULL;
                ATerm b_3 (ATerm t)
                {
                  ATerm i_12 = NULL;
                  i_12 = t;
                  t = SSL_is_string(i_12);
                  return(t);
                }
                t = _2_0(b_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_12 = ATgetArgument(t, 0);
                    f_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(b_12, f_12);
                g_12 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_12 = NULL;
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_12, term_z_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      {
        ATerm d_3 (ATerm t)
        {
          t = term_a_29;
          return(t);
        }
        t = debug_1_0(d_3, t);
        _fail(t);
      }
    }
  j_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_12);
  k_12 = t;
  t = j_12;
  t = fclose_0_0(t);
  t = k_12;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 = NULL;
      s_4 = t;
      t = SSL_access(s_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(g_29);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_29;
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_29 = t;
            if((PushChoice() == 0))
              {
                ATerm v_4 = NULL;
                v_4 = t;
                t = SSL_access(v_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_29;
              }
            {
              ATerm e_3 (ATerm t)
              {
                t = term_k_29;
                return(t);
              }
              t = debug_1_0(e_3, t);
            }
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            {
              ATerm f_3 (ATerm t)
              {
                t = term_o_29;
                return(t);
              }
              t = debug_1_0(f_3, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm h_3 (ATerm t)
      {
        t = term_p_29;
        return(t);
      }
      t = debug_1_0(h_3, t);
      return(t);
    }
    t = if_verbose5_1_0(g_3, t);
    {
      ATerm q_29 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, t_12));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_29;
        }
      u_12 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, t_12));
      t = u_12;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm k_3 (ATerm t)
          {
            t = term_r_29;
            return(t);
          }
          t = debug_1_0(k_3, t);
          return(t);
        }
        t = if_verbose4_1_0(i_3, t);
        t = read_repository_file_0_0(t);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm o_3 (ATerm t)
            {
              t = term_t_29;
              return(t);
            }
            t = say_1_0(o_3, t);
            return(t);
          }
          t = if_verbose6_1_0(l_3, t);
          v_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_29, v_12);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm p_3 (ATerm t)
            {
              ATerm q_3 (ATerm t)
              {
                t = term_x_29;
                return(t);
              }
              t = say_1_0(q_3, t);
              return(t);
            }
            t = if_verbose6_1_0(p_3, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, t_12), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_u_29, (ATerm)ATmakeAppl(sym_Imported_1, t_12), (ATerm) ATempty);
            {
              ATerm r_3 (ATerm t)
              {
                ATerm v_3 (ATerm t)
                {
                  t = term_t_29;
                  return(t);
                }
                t = say_1_0(v_3, t);
                return(t);
              }
              t = if_verbose4_1_0(r_3, t);
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
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_29);
    }
  else
    {
      t = y_29;
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_12 = NULL;
  ATerm w_3 (ATerm t)
  {
    ATerm d_4 (ATerm t)
    {
      t = term_d_30;
      return(t);
    }
    t = debug_1_0(d_4, t);
    return(t);
  }
  t = if_verbose5_1_0(w_3, t);
  w_12 = t;
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = w_12;
    {
      ATerm e_4 (ATerm t)
      {
        ATerm k_4 (ATerm t)
        {
          t = term_g_30;
          return(t);
        }
        t = debug_1_0(k_4, t);
        return(t);
      }
      t = if_verbose5_1_0(e_4, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_4 (ATerm t)
      {
        ATerm q_4 (ATerm t)
        {
          t = term_j_30;
          return(t);
        }
        t = debug_1_0(q_4, t);
        return(t);
      }
      t = if_verbose5_1_0(p_4, t);
      t = xtc_load_0_0(t);
      {
        ATerm k_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(l_30);
          }
        else
          {
            t = k_30;
            {
              ATerm e_5 = NULL,f_5 = NULL;
              e_5 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, e_5));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_30 = ATgetFirst((ATermList) t);
                  if(match_cons(m_30, sym__2))
                    {
                      ATerm o_30 = ATgetArgument(m_30, 0);
                      f_5 = ATgetArgument(m_30, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm n_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = f_5;
            }
          }
        {
          ATerm t_4 (ATerm t)
          {
            ATerm x_4 (ATerm t)
            {
              t = term_j_30;
              return(t);
            }
            t = debug_1_0(x_4, t);
            return(t);
          }
          t = if_verbose5_1_0(t_4, t);
        }
      }
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm x_12 = NULL;
        x_12 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), x_12), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_30), x_12), term_p_30);
        {
          ATerm a_5 (ATerm t)
          {
            t = term_u_29;
            t = table_getlist_0_0(t);
            {
              ATerm i_5 (ATerm t)
              {
                t = term_r_30;
                return(t);
              }
              t = debug_1_0(i_5, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(a_5, t);
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
ATerm xtc_command_1_0 (ATerm h_110 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  z_12 = t;
  t = h_110(t);
  t = xtc_find_warning_0_0(t);
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_13, z_12);
  t = call_0_0(t);
  t = z_12;
  return(t);
}
ATerm assert_1_0 (ATerm k_99 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  if(match_cons(t, sym__2))
    {
      b_13 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_99(t);
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_13, b_13, c_13);
  t = table_push_0_0(t);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(d_13, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        e_13 = ATgetFirst((ATermList) t);
        f_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(d_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(f_13), (ATerm) ATinsert(CheckATermList(e_13), b_13)));
    t = (ATerm) ATmakeAppl(sym__2, b_13, c_13);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm w_100 (ATerm), ATerm t)
{
  ATerm g_13 = NULL;
  g_13 = t;
  t = w_100(t);
  {
    ATerm j_5 (ATerm t)
    {
      t = term_u_30;
      return(t);
    }
    t = debug_1_0(j_5, t);
    t = g_13;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm u_13 (ATerm k_13, ATerm t)
  {
    t = k_13;
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
        ATerm k_5 (ATerm t)
        {
          t = term_y_30;
          return(t);
        }
        t = obsolete_1_0(k_5, t);
        t = (ATerm) ATmakeAppl(sym__2, k_13, term_i_14);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm v_13 (ATerm m_13, ATerm n_13, ATerm o_13, ATerm t)
  {
    t = SSL_open_file(m_13, n_13);
    return(t);
  }
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
  r_13 = t;
  if(match_cons(t, sym__2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_13(r_13, t);
            ;
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            t = v_13(s_13, t_13, r_13, t);
          }
      }
    }
  else
    {
      t = u_13(r_13, t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm w_13 = NULL;
  ATerm l_5 (ATerm t)
  {
    ATerm x_13 = NULL;
    x_13 = t;
    t = SSL_explode_string(x_13);
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    ATerm y_13 = NULL;
    y_13 = t;
    t = SSL_explode_string(y_13);
    return(t);
  }
  t = _2_0(l_5, n_5, t);
  t = conc_0_0(t);
  w_13 = t;
  t = SSL_implode_string(w_13);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm z_13 = NULL;
  t = term_b_31;
  t = new_0_0(t);
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_13, term_c_31);
  t = conc_strings_0_0(t);
  {
    ATerm s_5 (ATerm t)
    {
      ATerm t_5 = NULL;
      t_5 = t;
      t = SSL_access(t_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(s_5, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  t = new_file_0_0(t);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_14, term_i_14);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, b_14, term_b_31);
  {
    ATerm v_5 (ATerm t)
    {
      t = term_d_31;
      return(t);
    }
    t = assert_1_0(v_5, t);
    t = b_14;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  q_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_5 = NULL,x_5 = NULL;
      t = q_14;
      t = xtc_new_file_0_0(t);
      w_5 = t;
      t = m_0(t);
      x_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_5, (ATerm) ATinsert(ATinsert(ATempty, w_5), term_a_14));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(w_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_5);
    }
  else
    {
      ATerm e_6 = NULL,n_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_14;
      t = xtc_new_file_0_0(t);
      e_6 = t;
      t = m_0(t);
      n_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_6), term_a_14), r_14), term_e_31));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(e_6);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_6);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm c_73 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  x_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_14);
  u_14 = t;
  t = v_14;
  t = c_73(t);
  w_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, w_14), u_14);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm t)
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
      t = xtc_transform_file_2_0(j_110, k_110, t);
    }
  else
    {
      t = f_31;
      t = xtc_transform_term_2_0(j_110, k_110, t);
    }
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_15 = NULL,t_6 = NULL,u_6 = NULL;
      ATerm y_5 (ATerm t)
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
      ATerm z_5 (ATerm t)
      {
        d_15 = t;
        return(t);
      }
      t = _2_0(y_5, z_5, t);
      t_6 = t;
      t = SSL_explode_term(t_6);
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
                    u_6 = ATgetFirst((ATermList) p_31);
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
      t = u_6;
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 (ATerm t)
            {
              t = term_t_31;
              return(t);
            }
            ATerm b_6 (ATerm t)
            {
              ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
              e_15 = t;
              t = pass_verbose_0_0(t);
              f_15 = t;
              t = e_15;
              t = pass_keep_0_0(t);
              g_15 = t;
              t = term_u_31;
              t = get_config_0_0(t);
              h_15 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_15), g_15), f_15);
              t = concat_0_0(t);
              return(t);
            }
            t = xtc_transform_2_0(a_6, b_6, t);
            t = read_from_0_0(t);
            ;
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_15)), term_v_31);
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
        ATerm m_15 = NULL,o_15 = NULL,p_15 = NULL,h_7 = NULL;
        m_15 = t;
        if(match_cons(t, sym__2))
          {
            o_15 = ATgetArgument(t, 0);
            p_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_15;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        t = SSL_explode_term(m_15);
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
                      h_7 = ATgetFirst((ATermList) z_31);
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
        t = h_7;
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
              t = (ATerm) ATinsert(ATinsert(ATempty, p_15), term_v_31);
              t = fatal_error_0_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  r_15 = t;
  t = p_100(t);
  s_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_15), s_15));
  t = r_15;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm t_15 = NULL,u_15 = NULL;
    t_15 = t;
    t = term_k_16;
    t = get_config_0_0(t);
    u_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_15, term_i_18);
    t = geq_0_0(t);
    t = t_15;
    t = i_102(t);
    return(t);
  }
  t = try_1_0(c_6, t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), a_16);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = a_16;
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm f_16 = NULL;
  ATerm d_6 (ATerm t)
  {
    ATerm i_16 = NULL;
    i_16 = t;
    t = SSL_explode_string(i_16);
    return(t);
  }
  t = map_1_0(d_6, t);
  t = concat_0_0(t);
  f_16 = t;
  t = SSL_implode_string(f_16);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_89 (ATerm), ATerm t)
{
  ATerm j_16 = NULL;
  ATerm f_6 (ATerm t)
  {
    t = a_89(t);
    j_16 = t;
    return(t);
  }
  t = fetch_1_0(f_6, t);
  t = not_null(j_16);
  return(t);
}
ATerm find_module_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_81(t);
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 (ATerm t)
        {
          ATerm r_16 = NULL;
          r_16 = t;
          t = o_16;
          {
            ATerm h_6 (ATerm t)
            {
              ATerm s_16 = NULL,w_16 = NULL,q_7 = NULL;
              s_16 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_16), term_q_13), q_16), term_f_32), r_16);
              t = concat_strings_0_0(t);
              q_7 = t;
              t = SSL_access(q_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
              w_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_16, (ATerm) ATmakeAppl(sym_FILE_1, w_16));
              return(t);
            }
            t = fetch_elem_1_0(h_6, t);
          }
          return(t);
        }
        t = fetch_elem_1_0(g_6, t);
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
              t = o_16;
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm x_16 = NULL,t_7 = NULL,u_7 = NULL;
                  x_16 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_16), term_q_13), q_16);
                  t = concat_strings_0_0(t);
                  t_7 = t;
                  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, t_7));
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm i_32 = ATgetFirst((ATermList) t);
                      if(match_cons(i_32, sym__2))
                        {
                          ATerm k_32 = ATgetArgument(i_32, 0);
                          u_7 = ATgetArgument(i_32, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm j_32 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, x_16, (ATerm) ATmakeAppl(sym_FILE_1, u_7));
                  return(t);
                }
                t = fetch_elem_1_0(i_6, t);
              }
              ;
              LocalPopChoice(h_32);
            }
          else
            {
              t = g_32;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_32), q_16), term_l_32);
              t = fatal_error_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm get_module_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,e_17 = NULL;
  t = basename_0_0(t);
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_28), term_p_32), term_o_32), term_n_32));
  t = find_module_1_0(a_81, t);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      ATerm r_32 = ATgetArgument(t, 1);
      if(match_cons(r_32, sym_FILE_1))
        {
          b_17 = ATgetArgument(r_32, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm j_6 (ATerm t)
    {
      ATerm f_17 = NULL;
      f_17 = t;
      t = b_17;
      {
        ATerm k_6 (ATerm t)
        {
          t = term_s_32;
          return(t);
        }
        t = debug_1_0(k_6, t);
        t = f_17;
      }
      return(t);
    }
    t = if_verbose3_1_0(j_6, t);
    t = parse_module_0_0(t);
    e_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_17, e_17);
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_17 = ATgetFirst((ATermList) t);
      j_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_92(t);
  {
    ATerm l_6 (ATerm t)
    {
      ATerm q_17 = NULL;
      q_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_17, q_17);
      t = v_92(t);
      return(t);
    }
    t = fetch_1_0(l_6, t);
    t = j_17;
  }
  return(t);
}
ATerm diff_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  if(match_cons(t, sym__2))
    {
      s_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_17;
  {
    ATerm t_17 (ATerm t)
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
                ATerm m_6 (ATerm t)
                {
                  t = r_17;
                  return(t);
                }
                t = HdMember_p__2_0(n_92, m_6, t);
                t = t_17(t);
                ;
                LocalPopChoice(w_32);
              }
            else
              {
                t = v_32;
                t = Cons_2_0(_id, t_17, t);
              }
          }
        }
      return(t);
    }
    t = t_17(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm t)
{
  ATerm u_17 (ATerm t)
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_90(t);
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = s_90(t);
        t = _2_0(u_90, u_17, t);
        t = t_90(t);
      }
    return(t);
  }
  t = u_17(t);
  return(t);
}
ATerm zip_1_0 (ATerm w_90 (ATerm), ATerm t)
{
  ATerm o_6 (ATerm t)
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
  ATerm p_6 (ATerm t)
  {
    ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_33 = ATgetArgument(t, 0);
        if(((ATgetType(b_33) == AT_LIST) && !(ATisEmpty(b_33))))
          {
            v_17 = ATgetFirst((ATermList) b_33);
            x_17 = (ATerm) ATgetNext((ATermList) b_33);
          }
        else
          _fail(t);
        {
          ATerm c_33 = ATgetArgument(t, 1);
          if(((ATgetType(c_33) == AT_LIST) && !(ATisEmpty(c_33))))
            {
              w_17 = ATgetFirst((ATermList) c_33);
              y_17 = (ATerm) ATgetNext((ATermList) c_33);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_17, w_17), (ATerm) ATmakeAppl(sym__2, x_17, y_17));
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    ATerm z_17 = NULL,a_18 = NULL;
    if(match_cons(t, sym__2))
      {
        z_17 = ATgetArgument(t, 0);
        a_18 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(a_18), z_17);
    return(t);
  }
  t = genzip_4_0(o_6, p_6, s_6, w_90, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_33 = ATgetFirst((ATermList) t);
      if(match_cons(d_33, sym__2))
        {
          b_18 = ATgetArgument(d_33, 0);
          c_18 = ATgetArgument(d_33, 1);
        }
      else
        _fail(t);
      d_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_18);
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_18);
  if(match_cons(t, sym__2))
    {
      if((e_18 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_18, f_18);
  t = zip_1_0(_id, t);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_18, d_18);
  t = conc_0_0(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_6 (ATerm t)
      {
        ATerm n_18 = NULL;
        n_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_18);
        return(t);
      }
      ATerm w_6 (ATerm t)
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
      ATerm x_6 (ATerm t)
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
                  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_18 = ATgetFirst((ATermList) t);
                      s_18 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = p_18;
                  if(match_cons(t, sym__2))
                    {
                      q_18 = ATgetArgument(t, 0);
                      r_18 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_18;
                  if((q_18 != t))
                    {
                      _fail(t);
                    }
                  t = s_18;
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
              ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
              if(match_cons(t, sym__2))
                {
                  w_18 = ATgetArgument(t, 0);
                  x_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_18 = ATgetFirst((ATermList) t);
                  z_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_18), y_18), z_18);
            }
          }
        return(t);
      }
      t = for_3_0(v_6, w_6, x_6, t);
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      {
        ATerm a_7 (ATerm t)
        {
          ATerm d_19 = NULL;
          if(match_cons(t, sym__2))
            {
              d_19 = ATgetArgument(t, 0);
              if((d_19 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(a_7, t);
      }
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm k_33 = ATgetArgument(t, 0);
      if(((ATgetType(k_33) == AT_LIST) && !(ATisEmpty(k_33))))
        {
          e_19 = ATgetFirst((ATermList) k_33);
          f_19 = (ATerm) ATgetNext((ATermList) k_33);
        }
      else
        _fail(t);
      g_19 = ATgetArgument(t, 1);
      h_19 = ATgetArgument(t, 2);
      i_19 = ATgetArgument(t, 3);
      j_19 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_19, h_19);
  t = p_111(t);
  k_19 = t;
  t = q_111(t);
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_19, g_19);
  t = diff_0_0(t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_19, f_19);
  t = conc_0_0(t);
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_19, g_19);
  t = conc_0_0(t);
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_19, k_19, i_19);
  t = r_111(t);
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym__5, n_19, o_19, h_19, p_19, j_19);
  return(t);
}
ATerm while_not_2_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm t)
{
  ATerm q_19 (ATerm t)
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_82(t);
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = o_82(t);
        t = q_19(t);
      }
    return(t);
  }
  t = q_19(t);
  return(t);
}
ATerm for_3_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t)
{
  t = q_82(t);
  t = while_not_2_0(r_82, s_82, t);
  return(t);
}
ATerm graph_nodes_undef_roots_3_0 (ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
    if(match_cons(t, sym__3))
      {
        t_19 = ATgetArgument(t, 0);
        u_19 = ATgetArgument(t, 1);
        v_19 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, t_19, t_19, u_19, v_19, (ATerm) ATempty);
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    ATerm w_19 = NULL,y_19 = NULL;
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
        w_19 = ATgetArgument(t, 3);
        y_19 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_19, y_19);
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(x_110, y_110, z_110, t);
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        {
          ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
          if(match_cons(t, sym__5))
            {
              a_20 = ATgetArgument(t, 0);
              d_20 = ATgetArgument(t, 1);
              e_20 = ATgetArgument(t, 2);
              f_20 = ATgetArgument(t, 3);
              g_20 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = a_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_20 = ATgetFirst((ATermList) t);
              c_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, c_20, d_20, e_20, f_20, (ATerm) ATinsert(CheckATermList(g_20), b_20));
        }
      }
    return(t);
  }
  t = for_3_0(b_7, c_7, e_7, t);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t)
{
  ATerm n_20 = NULL;
  t = graph_nodes_undef_roots_3_0(m_111, n_111, o_111, t);
  if(match_cons(t, sym__2))
    {
      n_20 = ATgetArgument(t, 0);
      {
        ATerm s_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_20;
  return(t);
}
ATerm filter_1_0 (ATerm s_95 (ATerm), ATerm t)
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
            ATerm g_7 (ATerm t)
            {
              t = filter_1_0(s_95, t);
              return(t);
            }
            t = Cons_2_0(s_95, g_7, t);
            ;
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              ATerm r_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_33 = ATgetFirst((ATermList) t);
                  r_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = r_20;
              t = filter_1_0(s_95, t);
            }
          }
      }
    }
  return(t);
}
ATerm pack_stratego_modules_0_0 (ATerm t)
{
  ATerm t_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      t_20 = ATgetArgument(t, 0);
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
          ATerm i_7 (ATerm t)
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
          t = filter_1_0(i_7, t);
        }
        ;
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = (ATerm) ATempty;
      }
    w_20 = t;
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, t_20), term_c_34), term_b_34), term_b_31, (ATerm) ATempty);
    {
      ATerm j_7 (ATerm t)
      {
        ATerm y_7 = NULL,z_7 = NULL;
        y_7 = t;
        t = SSL_explode_term(y_7);
        if(match_cons(t, sym__2))
          {
            ATerm d_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_34) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_34 = ATgetArgument(t, 1);
              if(((ATgetType(e_34) == AT_LIST) && !(ATisEmpty(e_34))))
                {
                  z_7 = ATgetFirst((ATermList) e_34);
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
        t = z_7;
        {
          ATerm o_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(w_20), term_q_13);
            return(t);
          }
          t = get_module_1_0(o_7, t);
        }
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        ATerm y_20 = NULL,z_20 = NULL;
        if(match_cons(t, sym__3))
          {
            ATerm g_34 = ATgetArgument(t, 0);
            y_20 = ATgetArgument(t, 1);
            z_20 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_20), y_20);
        return(t);
      }
      t = graph_nodes_roots_3_0(j_7, get_stratego_imports_0_0, k_7, t);
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
        ATerm e_21 = NULL,f_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_21 = ATgetFirst((ATermList) t);
            f_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_21;
        {
          ATerm p_7 (ATerm t)
          {
            t = f_21;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  j_21 = t;
  t = SSL_explode_term(j_21);
  if(match_cons(t, sym__2))
    {
      ATerm j_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_21;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm l_21 (ATerm t)
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_21, t);
        ;
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_89(t);
      }
    return(t);
  }
  t = l_21(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  if(match_cons(t, sym__2))
    {
      n_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_21;
  {
    ATerm r_7 (ATerm t)
    {
      t = m_21;
      return(t);
    }
    t = at_end_1_0(r_7, t);
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
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_21;
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
    q_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_21, q_21);
    t = conc_0_0(t);
    r_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_21, r_21);
    t = (ATerm) ATmakeAppl(sym__3, term_q_34, o_21, r_21);
  }
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_7 (ATerm t)
      {
        ATerm v_21 = NULL;
        v_21 = t;
        if(match_string(t, "-I"))
          {
            t = v_21;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
              _fail(t);
            t = v_21;
          }
        return(t);
      }
      ATerm w_7 (ATerm t)
      {
        ATerm w_21 = NULL;
        w_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_31, (ATerm) ATinsert(ATinsert(ATempty, w_21), term_u_31));
        t = extend_config_0_0(t);
        t = term_b_31;
        return(t);
      }
      ATerm x_7 (ATerm t)
      {
        t = term_t_34;
        return(t);
      }
      t = ArgOption_3_0(s_7, w_7, x_7, t);
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
            ATerm c_8 (ATerm t)
            {
              ATerm x_21 = NULL;
              x_21 = t;
              if(match_string(t, "--nodep"))
                {
                  t = x_21;
                }
              else
                {
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
                    _fail(t);
                  t = x_21;
                }
              return(t);
            }
            ATerm d_8 (ATerm t)
            {
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue)));
              t = term_b_31;
              return(t);
            }
            ATerm e_8 (ATerm t)
            {
              t = term_w_34;
              return(t);
            }
            t = Option_3_0(c_8, d_8, e_8, t);
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
                  ATerm g_8 (ATerm t)
                  {
                    ATerm y_21 = NULL;
                    y_21 = t;
                    if(match_string(t, "--dep"))
                      {
                        t = y_21;
                      }
                    else
                      {
                        if(match_string(t, "-d"))
                          {
                            t = y_21;
                          }
                        else
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
                              _fail(t);
                            t = y_21;
                          }
                      }
                    return(t);
                  }
                  ATerm h_8 (ATerm t)
                  {
                    ATerm z_21 = NULL;
                    z_21 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue)), z_21);
                    t = term_b_31;
                    return(t);
                  }
                  ATerm i_8 (ATerm t)
                  {
                    t = term_z_34;
                    return(t);
                  }
                  t = ArgOption_3_0(g_8, h_8, i_8, t);
                  ;
                  LocalPopChoice(y_34);
                }
              else
                {
                  t = x_34;
                  {
                    ATerm j_8 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    ATerm k_8 (ATerm t)
                    {
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                      t = term_b_31;
                      return(t);
                    }
                    ATerm l_8 (ATerm t)
                    {
                      t = term_a_35;
                      return(t);
                    }
                    t = Option_3_0(j_8, k_8, l_8, t);
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
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_8 = NULL;
        t = m_22;
        t = k_0(t);
        w_8 = t;
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
          t = SSL_copy(n_22, w_8);
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_22);
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
              ATerm f_9 = NULL;
              t = m_22;
              t = k_0(t);
              f_9 = t;
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
                                ATerm g_9 = NULL;
                                g_9 = t;
                                if((n_22 != t))
                                  {
                                    _fail(t);
                                  }
                                t = g_9;
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
                t = SSL_copy(n_22, f_9);
                t = (ATerm) ATmakeAppl(sym_FILE_1, n_22);
              }
              ;
              LocalPopChoice(g_35);
            }
          else
            {
              t = f_35;
              t = m_22;
              t = k_0(t);
              if((n_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_22);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
  if(match_cons(t, sym__2))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_35 = ATgetArgument(t, 0);
            ATerm p_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_22, u_22);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_35 = ATgetFirst((ATermList) t);
            i_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_9;
        ;
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        t = (ATerm) ATempty;
      }
    v_22 = t;
    t = SSL_table_put(t_22, u_22, v_22);
    t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,g_23 = NULL;
  b_23 = t;
  t = h_99(t);
  c_23 = t;
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(c_23, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        g_23 = ATgetFirst((ATermList) t);
        d_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(c_23, (ATerm)ATmakeAppl(sym_Scopes_0), d_23);
    t = g_23;
    {
      ATerm m_8 (ATerm t)
      {
        ATerm h_23 = NULL;
        h_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_23, h_23);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(m_8, t);
      t = b_23;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t)
{
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_81(t);
      t = s_81(t);
      ;
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
      t = s_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  k_23 = t;
  t = g_99(t);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_23, term_v_35);
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
        t = SSL_table_get(l_23, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        t = (ATerm) ATempty;
      }
    m_23 = t;
    t = SSL_table_put(l_23, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(m_23), (ATerm) ATempty));
    t = k_23;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_109 (ATerm), ATerm t)
{
  ATerm r_23 = NULL;
  ATerm n_8 (ATerm t)
  {
    t = term_d_31;
    return(t);
  }
  t = begin_scope_1_0(n_8, t);
  {
    ATerm p_8 (ATerm t)
    {
      ATerm s_23 = NULL;
      s_23 = t;
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
            r_23 = ATgetFirst((ATermList) t);
            {
              ATerm c_36 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = r_23;
        {
          ATerm q_8 (ATerm t)
          {
            ATerm r_8 (ATerm t)
            {
              ATerm t_23 = NULL;
              t_23 = t;
              t = SSL_remove(t_23);
              return(t);
            }
            t = try_1_0(r_8, t);
            return(t);
          }
          t = map_1_0(q_8, t);
          t = s_23;
          {
            ATerm u_8 (ATerm t)
            {
              t = term_d_31;
              return(t);
            }
            t = end_scope_1_0(u_8, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(t_109, p_8, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm u_109 (ATerm), ATerm t)
{
  ATerm v_8 (ATerm t)
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL;
        t = term_e_31;
        t = get_config_0_0(t);
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_23);
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = term_f_36;
      }
    t = u_109(t);
    {
      ATerm x_8 (ATerm t)
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_14;
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
      t = copy_to_1_0(x_8, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(v_8, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm d_9 (ATerm t)
  {
    ATerm w_23 = NULL;
    w_23 = t;
    if(match_string(t, "-k"))
      {
        t = w_23;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = w_23;
      }
    return(t);
  }
  ATerm e_9 (ATerm t)
  {
    ATerm x_23 = NULL,y_23 = NULL;
    x_23 = t;
    t = SSL_string_to_int(x_23);
    y_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), y_23);
    t = x_23;
    return(t);
  }
  ATerm h_9 (ATerm t)
  {
    t = term_j_36;
    return(t);
  }
  t = ArgOption_3_0(d_9, e_9, h_9, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9 (ATerm t)
      {
        ATerm a_24 = NULL;
        a_24 = t;
        if(match_string(t, "-S"))
          {
            t = a_24;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = a_24;
          }
        return(t);
      }
      ATerm k_9 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_n_36;
        return(t);
      }
      ATerm l_9 (ATerm t)
      {
        t = term_o_36;
        return(t);
      }
      t = Option_3_0(j_9, k_9, l_9, t);
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
            ATerm m_9 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm n_9 (ATerm t)
            {
              ATerm b_24 = NULL,c_24 = NULL;
              b_24 = t;
              t = SSL_string_to_int(b_24);
              c_24 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_24);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, b_24);
              return(t);
            }
            ATerm o_9 (ATerm t)
            {
              t = term_r_36;
              return(t);
            }
            t = ArgOption_3_0(m_9, n_9, o_9, t);
            ;
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            {
              ATerm p_9 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm s_9 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_s_36;
                return(t);
              }
              ATerm t_9 (ATerm t)
              {
                t = term_t_36;
                return(t);
              }
              t = Option_3_0(p_9, s_9, t_9, t);
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
  ATerm x_9 (ATerm t)
  {
    ATerm e_24 = NULL;
    e_24 = t;
    if(match_string(t, "-o"))
      {
        t = e_24;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = e_24;
      }
    return(t);
  }
  ATerm z_9 (ATerm t)
  {
    ATerm f_24 = NULL;
    f_24 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), f_24);
    t = (ATerm) ATmakeAppl(sym_Output_1, f_24);
    return(t);
  }
  ATerm e_10 (ATerm t)
  {
    t = term_w_36;
    return(t);
  }
  t = ArgOption_3_0(x_9, z_9, e_10, t);
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
        ATerm f_10 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_10 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_z_36;
          return(t);
        }
        ATerm h_10 (ATerm t)
        {
          t = term_a_37;
          return(t);
        }
        t = Option_3_0(f_10, g_10, h_10, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  i_24 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = i_24;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm q_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_24 = ATgetFirst((ATermList) t);
          k_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_24 = ATgetFirst((ATermList) t);
          m_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_24;
      t = h_0(t);
      t = l_24;
      t = i_0(t);
      q_24 = t;
      t = (ATerm) ATinsert(CheckATermList(m_24), q_24);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm m_10 (ATerm t)
  {
    ATerm s_24 = NULL;
    s_24 = t;
    if(match_string(t, "-i"))
      {
        t = s_24;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = s_24;
      }
    return(t);
  }
  ATerm n_10 (ATerm t)
  {
    ATerm t_24 = NULL;
    t_24 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), t_24);
    t = (ATerm) ATmakeAppl(sym_Input_1, t_24);
    return(t);
  }
  ATerm x_10 (ATerm t)
  {
    t = term_b_37;
    return(t);
  }
  t = ArgOption_3_0(m_10, n_10, x_10, t);
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
  ATerm u_24 = NULL,v_24 = NULL;
  u_24 = t;
  t = term_b_31;
  t = whoami_0_0(t);
  v_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), v_24), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = u_24;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_31;
  t = whoami_0_0(t);
  w_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_24));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_37;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm t)
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_94(t);
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      {
        ATerm z_24 = NULL,a_25 = NULL,d_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_24 = ATgetFirst((ATermList) t);
            a_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_25;
        t = foldr_2_0(p_94, q_94, t);
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_24, d_25);
        t = q_94(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  e_25 = t;
  t = SSL_explode_term(e_25);
  if(match_cons(t, sym__2))
    {
      ATerm j_37 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_25;
  t = foldr_2_0(i_98, j_98, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_25 = NULL;
  t = times_0_0(t);
  {
    ATerm y_10 (ATerm t)
    {
      t = term_m_36;
      return(t);
    }
    ATerm z_10 (ATerm t)
    {
      ATerm h_25 = NULL,i_25 = NULL;
      if(match_cons(t, sym__2))
        {
          h_25 = ATgetArgument(t, 0);
          i_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(h_25, i_25);
            ;
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            t = SSL_addr(h_25, i_25);
          }
      }
      return(t);
    }
    t = crush_2_0(y_10, z_10, t);
    g_25 = t;
    t = SSL_TicksToSeconds(g_25);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_25;
        if((s_25 != t))
          {
            _fail(t);
          }
        t = r_25;
        ;
        LocalPopChoice(n_37);
      }
    else
      {
        t = m_37;
        t = r_25;
        {
          ATerm o_37 = t;
          int p_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_25, t_25);
              ;
              LocalPopChoice(p_37);
            }
          else
            {
              t = o_37;
              t = SSL_gtr(s_25, t_25);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_25, t_25);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_102 (ATerm), ATerm t)
{
  ATerm a_11 (ATerm t)
  {
    ATerm w_25 = NULL,x_25 = NULL;
    w_25 = t;
    t = term_k_16;
    t = get_config_0_0(t);
    x_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_25, term_e_16);
    t = geq_0_0(t);
    t = w_25;
    t = g_102(t);
    return(t);
  }
  t = try_1_0(a_11, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm z_25 = NULL,a_26 = NULL;
    t = run_time_0_0(t);
    z_25 = t;
    t = term_b_31;
    t = whoami_0_0(t);
    a_26 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), z_25), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), a_26));
    t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_37), z_25), term_v_16), a_26));
    return(t);
  }
  t = if_verbose1_1_0(b_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm b_104 (ATerm), ATerm t)
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
        ATerm c_11 (ATerm t)
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
        t = option_defined_1_0(c_11, t);
      }
    }
  t = b_104(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_26 = ATgetFirst((ATermList) t);
      e_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_26 = NULL,j_26 = NULL;
        t = e_26;
        t = g_0(t);
        i_26 = t;
        t = d_26;
        t = e_0(t);
        j_26 = t;
        t = e_26;
        {
          ATerm d_11 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_26), j_26);
            return(t);
          }
          t = reverse_acc_2_0(e_0, d_11, t);
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
  ATerm f_11 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, f_11, t);
  return(t);
}
ATerm Program_1_0 (ATerm y_72 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  n_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_26);
  k_26 = t;
  t = l_26;
  t = y_72(t);
  m_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, m_26), k_26);
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
        ATerm g_11 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(g_11, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_a_38;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm j_11 (ATerm t)
    {
      ATerm q_26 = NULL;
      q_26 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, q_26), term_b_38);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(j_11, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_72 (ATerm), ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  u_26 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_26);
  r_26 = t;
  t = s_26;
  t = z_72(t);
  t_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_26), r_26);
  return(t);
}
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm x_26 (ATerm t)
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_88, _id, t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = Cons_2_0(_id, x_26, t);
      }
    return(t);
  }
  t = x_26(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm p_105 (ATerm), ATerm t)
{
  t = fetch_1_0(p_105, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  z_26 = t;
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_26;
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
            t = z_26;
          }
        ;
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        t = (ATerm) ATinsert(ATempty, z_26);
      }
    a_27 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), a_27);
    t = z_26;
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
ATerm try_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_81(t);
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
      ATerm o_11 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm p_11 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_n_38;
        return(t);
      }
      ATerm q_11 (ATerm t)
      {
        t = term_o_38;
        return(t);
      }
      t = Option_3_0(o_11, p_11, q_11, t);
      ;
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
      {
        ATerm r_11 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm s_11 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_p_38;
          return(t);
        }
        ATerm t_11 (ATerm t)
        {
          t = term_q_38;
          return(t);
        }
        t = Option_3_0(r_11, s_11, t_11, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  if(match_cons(t, sym__3))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
      i_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_27, h_27);
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
        t = SSL_table_get(g_27, h_27);
        ;
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        t = (ATerm) ATempty;
      }
    j_27 = t;
    t = SSL_table_put(g_27, h_27, (ATerm) ATinsert(CheckATermList(j_27), i_27));
    t = (ATerm) ATmakeAppl(sym__3, g_27, h_27, i_27);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm u_106 (ATerm), ATerm t)
{
  ATerm o_27 = NULL;
  t = term_b_31;
  t = u_106(t);
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_38, term_w_38, o_27);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  q_27 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = q_27;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm v_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_27 = ATgetFirst((ATermList) t);
          s_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_27;
      t = a_0(t);
      t = term_b_31;
      t = c_0(t);
      v_27 = t;
      t = (ATerm) ATinsert(CheckATermList(s_27), v_27);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm w_11 (ATerm t)
  {
    ATerm z_27 = NULL;
    z_27 = t;
    if(match_string(t, "--help"))
      {
        t = z_27;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = z_27;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = z_27;
          }
      }
    return(t);
  }
  ATerm x_11 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_x_38;
    return(t);
  }
  ATerm c_12 (ATerm t)
  {
    t = term_y_38;
    return(t);
  }
  t = Option_3_0(w_11, x_11, c_12, t);
  return(t);
}
ATerm Cons_2_0 (ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm t)
{
  ATerm g_28 = NULL,k_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  v_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_28 = ATgetFirst((ATermList) t);
      s_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_28);
  g_28 = t;
  t = k_28;
  t = l_67(t);
  t_28 = t;
  t = s_28;
  t = m_67(t);
  u_28 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(u_28), t_28), g_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_106 (ATerm), ATerm t)
{
  ATerm b_29 = NULL;
  b_29 = t;
  {
    ATerm d_12 (ATerm t)
    {
      t = term_z_38;
      t = s_106(t);
      return(t);
    }
    t = try_1_0(d_12, t);
    t = b_29;
    {
      ATerm e_12 (ATerm t)
      {
        ATerm c_29 = NULL;
        c_29 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_29);
        t = (ATerm) ATmakeAppl(sym_Program_1, c_29);
        return(t);
      }
      ATerm h_12 (ATerm t)
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
                t = s_106(t);
                t = Cons_2_0(_id, h_12, t);
              }
            ;
            LocalPopChoice(b_39);
          }
        else
          {
            t = a_39;
            {
              ATerm e_29 = NULL,f_29 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_29 = ATgetFirst((ATermList) t);
                  f_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_29), (ATerm) ATmakeAppl(sym_Undefined_1, e_29));
            }
          }
        return(t);
      }
      t = Cons_2_0(e_12, h_12, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = l_29;
  {
    ATerm m_12 (ATerm t)
    {
      ATerm e_39 = t;
      int f_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_106(t);
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
    t = parse_options_p__1_0(m_12, t);
    {
      ATerm n_12 (ATerm t)
      {
        ATerm i_39 = t;
        int j_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_29 = NULL;
            s_29 = t;
            {
              ATerm k_39 = t;
              int l_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_29;
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
                          ATerm o_12 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(o_12, t);
                        }
                      }
                    t = s_29;
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
                  t = s_29;
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
              ATerm q_12 (ATerm t)
              {
                ATerm r_12 (ATerm t)
                {
                  m_29 = t;
                  return(t);
                }
                t = Undefined_1_0(r_12, t);
                return(t);
              }
              t = option_defined_1_0(q_12, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_29)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_29)), term_o_39));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(n_12, t);
      n_29 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = n_29;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm t)
{
  ATerm d_17 = NULL;
  t = parse_options_1_0(d_104, t);
  d_17 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), d_17);
  t = d_17;
  t = f_104(t);
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_104, t);
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
              t = g_104(t);
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
ATerm option_wrap_2_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm t)
{
  t = option_wrap_4_0(h_104, default_usage_0_0, _id, i_104, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm t)
{
  ATerm s_12 (ATerm t)
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_109(t);
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
  ATerm y_12 (ATerm t)
  {
    t = xtc_io_1_0(z_109, t);
    return(t);
  }
  t = option_wrap_2_0(s_12, y_12, t);
  return(t);
}
ATerm xtc_iowrap_2_0 (ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(e_110, f_110, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL;
  ATerm h_13 (ATerm t)
  {
    t = pack_stratego_modules_0_0(t);
    if(match_cons(t, sym__2))
      {
        v_29 = ATgetArgument(t, 0);
        w_29 = ATgetArgument(t, 1);
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
          t = v_29;
          {
            ATerm i_13 (ATerm t)
            {
              t = get_filename_0_0(t);
              t = basename_0_0(t);
              return(t);
            }
            t = map_1_0(i_13, t);
            t = write_to_text_0_0(t);
          }
          ;
          LocalPopChoice(w_39);
        }
      else
        {
          t = v_39;
          t = v_29;
          t = create_dep_file_0_0(t);
          t = w_29;
          t = write_to_0_0(t);
        }
    }
    return(t);
  }
  t = xtc_iowrap_2_0(pack_stratego_options_0_0, h_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
