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
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_v_42;
ATerm term_t_42;
ATerm term_p_42;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_e_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_s_39;
ATerm term_s_38;
ATerm term_l_38;
ATerm term_z_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_p_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_b_36;
ATerm term_v_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_c_35;
ATerm term_v_34;
ATerm term_j_32;
ATerm term_y_31;
ATerm term_r_31;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_m_29;
ATerm term_a_29;
ATerm term_y_28;
ATerm term_g_28;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_f_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_w_26;
ATerm term_n_26;
ATerm term_l_26;
ATerm term_j_26;
ATerm term_l_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_j_23;
ATerm term_c_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_p_22;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_t_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_z_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_j_13;
ATerm term_b_13;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_c_11;
void init_constant_terms (void)
{
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_v_13, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_l_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_v_15, term_y_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_p_16, term_q_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_c_17, term_e_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_k_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_i_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_n_18, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_x_11, term_r_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_y_18, term_z_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_d_19, term_g_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_r_19, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_y_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_20, term_c_20, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_g_20, term_j_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_o_20, term_p_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_o_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_t_23);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_p_27, term_w_26);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_j_35);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_s_35, term_f_27);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_m_37);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym__2, term_s_37, term_f_27);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym__2, term_k_36, term_l_36);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(sym__2, term_t_40, term_f_27);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym__2, term_w_40, term_f_27);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym__2, term_y_39, term_f_27);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym__2, term_p_43, term_f_27);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm p_7 (ATerm m_42, ATerm n_42, ATerm);
ATerm a_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm q_7 (ATerm q_20, ATerm r_20, ATerm);
ATerm create_dep_file_0_0 (ATerm);
ATerm s_7 (ATerm c_39, ATerm d_39, ATerm);
ATerm t_7 (ATerm q_42, ATerm r_42, ATerm);
ATerm u_7 (ATerm o_95 (ATerm), ATerm r_420, ATerm u_42, ATerm);
ATerm c_0 (ATerm);
ATerm write_to_text_0_0 (ATerm);
ATerm basename_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm at_suffix_rev_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm get_filename_0_0 (ATerm);
ATerm map_1_0 (ATerm r_82 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm c_1 (ATerm);
ATerm flatten_stratego_0_0 (ATerm);
ATerm genzip_4_0 (ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm x_7 (ATerm v_122, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm y_7 (ATerm i_36, ATerm j_36, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm);
ATerm z_7 (ATerm f_44, ATerm g_44, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm j_97 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm b_97 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm c_8 (ATerm v_86 (ATerm), ATerm b_26, ATerm a_26, ATerm);
ATerm k_1 (ATerm);
ATerm d_8 (ATerm y_48, ATerm z_48, ATerm a_49, ATerm);
ATerm e_8 (ATerm g_101 (ATerm), ATerm i_49, ATerm h_49, ATerm);
ATerm s_20 (ATerm i_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_8 (ATerm s_42, ATerm);
ATerm g_8 (ATerm e_39, ATerm f_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_23 (ATerm f_22, ATerm);
ATerm y_23 (ATerm j_22, ATerm m_22, ATerm n_22, ATerm);
ATerm z_23 (ATerm a_23, ATerm b_23, ATerm e_23, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm c_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm repeat_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm x_2 (ATerm);
ATerm e_28 (ATerm d_27, ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm s_104 (ATerm), ATerm);
ATerm h_8 (ATerm v_93 (ATerm), ATerm q_37, ATerm o_37, ATerm);
ATerm o_29 (ATerm z_28, ATerm);
ATerm p_29 (ATerm b_29, ATerm d_29, ATerm e_29, ATerm);
ATerm l_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm i_8 (ATerm s_33, ATerm t_33, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm t_32 (ATerm f_31, ATerm g_31, ATerm i_31, ATerm);
ATerm u_32 (ATerm k_32, ATerm l_32, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm debug_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm a_97 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm j_8 (ATerm w_38, ATerm x_38, ATerm);
ATerm k_8 (ATerm f_75 (ATerm), ATerm f_19, ATerm e_19, ATerm);
ATerm e_4 (ATerm);
ATerm get_module_1_0 (ATerm e_75 (ATerm), ATerm);
ATerm m_8 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm f_26, ATerm e_26, ATerm);
ATerm n_8 (ATerm q_86 (ATerm), ATerm z_25, ATerm y_25, ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm r_8 (ATerm h_562, ATerm m_562, ATerm n_52, ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm i_38 (ATerm r_36, ATerm s_36, ATerm t_36, ATerm);
ATerm w_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm t_8 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm e_55, ATerm b_55, ATerm i_55, ATerm f_55, ATerm c_55, ATerm d_55, ATerm);
ATerm GnNext_3_0 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm);
ATerm for_3_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm);
ATerm filter_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm w_8 (ATerm v_18, ATerm);
ATerm y_8 (ATerm o_39, ATerm p_39, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm z_8 (ATerm g_48, ATerm h_48, ATerm);
ATerm end_scope_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm e_104 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm xtc_io_1_0 (ATerm f_104 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm g_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_9 (ATerm g_56, ATerm h_56, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm e_9 (ATerm b_48, ATerm c_48, ATerm a_48, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm h_83 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm y_51 (ATerm h_51, ATerm);
ATerm conc_0_0 (ATerm);
ATerm x_8 (ATerm m_56, ATerm l_56, ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm l_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm pack_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_9 (ATerm c_36, ATerm d_36, ATerm);
ATerm foldr_2_0 (ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_8 (ATerm);
ATerm s_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_96 (ATerm), ATerm);
ATerm u_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_9 (ATerm);
ATerm need_help_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm d_9 (ATerm s_49, ATerm t_49, ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm j_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_61 (ATerm), ATerm l_61 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_101 (ATerm), ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm y_9 (ATerm);
ATerm b_10 (ATerm);
ATerm parse_options_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm);
ATerm f_10 (ATerm);
ATerm j_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm q_10 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm p_7 (ATerm m_42, ATerm n_42, ATerm t)
{
  ATerm b_0 = NULL;
  t = SSL_write_term_to_stream_baf(m_42, n_42);
  b_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_0);
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm q_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      if(match_cons(t_10, sym_Stream_1))
        {
          q_0 = ATgetArgument(t_10, 0);
        }
      else
        _fail(t);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(q_0, s_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm e_0 = NULL,o_0 = NULL;
  e_0 = t;
  t = xtc_new_file_0_0(t);
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_0, e_0);
  t = u_7(a_0, o_0, e_0, t);
  t = SSL_close_file(o_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_0);
  return(t);
}
ATerm q_7 (ATerm q_20, ATerm r_20, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  t = r_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_20;
    }
  else
    {
      ATerm t_0 = NULL,w_0 = NULL,b_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_1 = ATgetFirst((ATermList) t);
          p_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_20);
      t_0 = t;
      t = p_1;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm z_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 = NULL;
              x_0 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_0;
              ;
              LocalPopChoice(a_11);
            }
          else
            {
              t = z_10;
              {
                ATerm y_0 = NULL;
                t = Cons_2_0(_id, a_1, t);
                y_0 = t;
                t = (ATerm) ATinsert(CheckATermList(y_0), q_20);
              }
            }
          return(t);
        }
        t = a_1(t);
        w_0 = t;
        t = (ATerm) ATinsert(CheckATermList(w_0), o_1);
        b_1 = t;
        t = SSLsetAnnotations(b_1, t_0);
      }
    }
  return(t);
}
ATerm create_dep_file_0_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,a_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  u_1 = t;
  t = term_c_11;
  t = get_config_0_0(t);
  {
    ATerm d_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_11;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = d_11;
        {
          ATerm l_11 = t;
          if((PushChoice() == 0))
            {
              t = term_n_11;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_11;
            }
        }
      }
    t_1 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_11), term_o_11), t_1);
    g_2 = t;
    t = SSL_concat_strings(g_2);
    f_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_2, term_q_11);
    t = open_file_0_0(t);
    v_1 = t;
    t = term_r_11;
    d_2 = t;
    t = (ATerm) ATinsert(CheckATermList(u_1), term_u_11);
    e_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_11, (ATerm) ATinsert(CheckATermList(u_1), term_u_11));
    t = q_7(d_2, e_2, t);
    w_1 = t;
    t = (ATerm) ATinsert(CheckATermList(w_1), t_1);
    a_2 = t;
    t = SSL_printnl(v_1, a_2);
    t = SSL_close_file(v_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, f_2);
  }
  return(t);
}
ATerm s_7 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm h_2 = NULL;
  t = SSL_fputc(c_39, d_39);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_2);
  return(t);
}
ATerm t_7 (ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm p_2 = NULL;
  t = SSL_write_term_to_stream_text(q_42, r_42);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_2);
  return(t);
}
ATerm u_7 (ATerm o_95 (ATerm), ATerm r_420, ATerm u_42, ATerm t)
{
  ATerm v_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_420, term_q_11);
  t = open_stream_0_0(t);
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_2, u_42);
  t = o_95(t);
  t = fclose_0_0(t);
  t = u_42;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      if(match_cons(v_11, sym_Stream_1))
        {
          c_3 = ATgetArgument(v_11, 0);
        }
      else
        _fail(t);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(c_3, d_3, t);
  z_2 = t;
  t = term_x_11;
  a_3 = t;
  t = z_2;
  if(match_cons(t, sym_Stream_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, z_2);
  t = s_7(a_3, b_3, t);
  return(t);
}
ATerm write_to_text_0_0 (ATerm t)
{
  ATerm w_2 = NULL,y_2 = NULL;
  w_2 = t;
  t = xtc_new_file_0_0(t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, w_2);
  t = u_7(c_0, y_2, w_2, t);
  t = SSL_close_file(y_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_2);
  return(t);
}
ATerm basename_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,t_3 = NULL;
  t_3 = t;
  t = SSL_explode_string(t_3);
  {
    ATerm y_11 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 (ATerm t)
        {
          ATerm v_4 = NULL,x_4 = NULL,y_4 = NULL;
          v_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_4 = ATgetFirst((ATermList) t);
              y_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm c_12 = t;
            int d_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_2 = NULL,j_2 = NULL,d_1 = NULL;
                t = SSLgetAnnotations(v_4);
                b_2 = t;
                t = y_4;
                t = c_5(t);
                j_2 = t;
                t = (ATerm) ATinsert(CheckATermList(j_2), x_4);
                d_1 = t;
                t = SSLsetAnnotations(d_1, b_2);
                ;
                LocalPopChoice(d_12);
              }
            else
              {
                t = c_12;
                {
                  ATerm f_12 = t;
                  int i_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_2 = NULL,g_1 = NULL;
                      t = SSLgetAnnotations(v_4);
                      s_2 = t;
                      t = x_4;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(y_4), x_4);
                      g_1 = t;
                      t = SSLsetAnnotations(g_1, s_2);
                      ;
                      LocalPopChoice(i_12);
                    }
                  else
                    {
                      t = f_12;
                      {
                        ATerm k_3 = NULL,n_3 = NULL,h_1 = NULL;
                        t = SSLgetAnnotations(v_4);
                        k_3 = t;
                        t = x_4;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = y_4;
                        t = r_91(t);
                        n_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(n_3), x_4);
                        h_1 = t;
                        t = SSLsetAnnotations(h_1, k_3);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = c_5(t);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = y_11;
      }
    o_3 = t;
    t = SSL_implode_string(o_3);
  }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL,b_6 = NULL,c_6 = NULL,k_4 = NULL,e_5 = NULL,l_1 = NULL;
        z_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_6 = ATgetFirst((ATermList) t);
            c_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_5);
        k_4 = t;
        t = c_6;
        t = e_6(t);
        e_5 = t;
        t = (ATerm) ATinsert(CheckATermList(e_5), b_6);
        l_1 = t;
        t = SSLsetAnnotations(l_1, k_4);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = p_83(t);
      }
    return(t);
  }
  t = e_6(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
  j_6 = t;
  t = SSL_explode_string(j_6);
  {
    ATerm o_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_12 = ATgetFirst((ATermList) t);
              if(((ATgetType(x_12) != AT_INT) || (ATgetInt((ATermInt) x_12) != 47)))
                _fail(t);
              if(((h_6 != NULL) && (h_6 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                h_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_suffix_rev_1_0(f_0, t);
        t = not_null(h_6);
        ;
        LocalPopChoice(w_12);
      }
    else
      {
        t = o_12;
      }
    i_6 = t;
    t = SSL_implode_string(i_6);
  }
  return(t);
}
ATerm map_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm a_7 = NULL,b_7 = NULL,d_7 = NULL;
    a_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_7;
      }
    else
      {
        ATerm q_5 = NULL,a_6 = NULL,d_6 = NULL,q_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_7 = ATgetFirst((ATermList) t);
            d_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_7);
        q_5 = t;
        t = b_7;
        t = r_82(t);
        a_6 = t;
        t = d_7;
        t = e_7(t);
        d_6 = t;
        t = (ATerm) ATinsert(CheckATermList(d_6), a_6);
        q_1 = t;
        t = SSLsetAnnotations(q_1, q_5);
      }
    return(t);
  }
  t = e_7(t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
    }
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 = NULL;
      v_8 = t;
      t = SSL_is_string(v_8);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = c_13;
      {
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_0, t);
            ;
            LocalPopChoice(g_13);
          }
        else
          {
            t = f_13;
            {
              ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
              m_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_9 = ATgetArgument(t, 0);
                  t = n_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_9 = ATgetArgument(t, 0);
                      t = n_9;
                      {
                        ATerm h_13 = t;
                        int i_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_13);
                          }
                        else
                          {
                            t = h_13;
                            t = debug_1_0(v_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_10 = NULL,d_10 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_9 = ATgetArgument(t, 0);
                          o_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_9;
                      t = eval_config_0_0(t);
                      c_10 = t;
                      t = o_9;
                      t = eval_config_0_0(t);
                      d_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_10, d_10);
                      t = i_8(c_10, d_10, t);
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
  ATerm h_10 = NULL,i_10 = NULL;
  h_10 = t;
  t = term_j_13;
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_13, h_10);
  t = d_9(i_10, h_10, t);
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_10 = NULL,l_10 = NULL;
        t = eval_config_0_0(t);
        k_10 = t;
        t = term_j_13;
        l_10 = t;
        t = SSL_table_put(l_10, h_10, k_10);
        t = k_10;
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm s_10 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10;
  t = filter_1_0(c_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm m_13 = t;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,u_3 = NULL;
      w_10 = t;
      if(match_cons(t, sym_Imports_1))
        {
          v_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_10);
      u_10 = t;
      t = (ATerm) ATmakeAppl(sym_Imports_1, v_10);
      u_3 = t;
      t = SSLsetAnnotations(u_3, u_10);
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
  ATerm r_10 = NULL;
  t = map_1_0(z_0, t);
  t = concat_0_0(t);
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_10);
  return(t);
}
ATerm genzip_4_0 (ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm k_11 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_84(t);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          ATerm x_10 = NULL,b_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,j_11 = NULL,x_3 = NULL;
          t = v_84(t);
          j_11 = t;
          if(match_cons(t, sym__2))
            {
              b_11 = ATgetArgument(t, 0);
              e_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_11);
          x_10 = t;
          t = b_11;
          t = x_84(t);
          f_11 = t;
          t = e_11;
          t = k_11(t);
          g_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_11, g_11);
          x_3 = t;
          t = SSLsetAnnotations(x_3, x_10);
          t = w_84(t);
        }
      }
    return(t);
  }
  t = k_11(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm m_11 = NULL;
  if(match_cons(t, sym_Imports_1))
    {
      m_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11;
  return(t);
}
ATerm x_7 (ATerm v_122, ATerm t)
{
  t = v_122;
  t = filter_1_0(e_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_p_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_q_13);
      e_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_11, (ATerm) ATinsert(ATempty, term_q_13));
      t = j_8(w_11, e_12, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,p_12 = NULL;
  t = term_r_13;
  {
    ATerm s_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = s_13;
        t = term_v_13;
      }
    m_12 = t;
    t = term_v_13;
    p_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_12, term_v_13);
    t = y_7(m_12, p_12, t);
    n_12 = t;
    t = SSL_int_to_string(n_12);
    l_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, l_12), term_r_13);
  }
  return(t);
}
ATerm y_7 (ATerm i_36, ATerm j_36, ATerm t)
{
  ATerm w_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_36, j_36);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = w_13;
      t = SSL_subtr(i_36, j_36);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm q_12 = NULL,s_12 = NULL,t_12 = NULL,v_12 = NULL;
  t = term_z_13;
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = term_v_13;
      }
    s_12 = t;
    t = term_v_13;
    v_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_12, term_v_13);
    t = y_7(s_12, v_12, t);
    t_12 = t;
    t = SSL_int_to_string(t_12);
    q_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, q_12), term_z_13);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(b_105, c_105, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm z_7 (ATerm f_44, ATerm g_44, ATerm t)
{
  t = SSL_execvp(f_44, g_44);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_14 = ATgetArgument(t, 0);
      {
        ATerm o_7 = NULL,r_7 = NULL;
        t = SSL_int_to_string(b_14);
        o_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_14), o_7), term_g_14);
        r_7 = t;
        t = SSL_concat_strings(r_7);
      }
    }
  else
    {
      ATerm i_9 = NULL,k_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_14 = ATgetArgument(t, 0);
          c_14 = ATgetArgument(t, 1);
          d_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_14);
      i_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_14), term_j_14), i_9), term_i_14), b_14);
      k_9 = t;
      t = SSL_concat_strings(k_9);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm k_14 = NULL;
  k_14 = t;
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_14 = ATgetArgument(t, 0);
              if((k_14 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm p_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_20), term_k_20), term_e_20), term_a_20), term_v_19), term_n_19), term_h_19), term_a_19), term_t_18), term_p_18), term_k_18), term_f_18), term_a_18), term_u_17), term_q_17), term_m_17), term_g_17), term_x_16), term_s_16), term_m_16), term_g_16), term_z_15), term_r_15), term_n_15), term_i_15), term_e_15), term_z_14), term_v_14);
        t = fetch_elem_1_0(f_1, t);
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, k_14);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_14 = NULL,d_15 = NULL;
  t_14 = t;
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_20 = ATgetArgument(t, 0);
            d_15 = ATgetArgument(t, 1);
            {
              ATerm x_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_20);
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_9 = NULL,z_9 = NULL,a_10 = NULL;
              t = d_15;
              {
                ATerm a_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_21;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                x_9 = t;
                t = term_b_21;
                z_9 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, x_9), term_c_21);
                a_10 = t;
                t = SSL_printnl(z_9, a_10);
                t = (ATerm) ATmakeAppl(sym__2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, x_9), term_c_21));
              }
              ;
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              t = t_14;
            }
        }
      }
    else
      {
        t = u_20;
        t = t_14;
      }
    t = t_14;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  u_15 = t;
  t = fork_0_0(t);
  t_15 = t;
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_15;
        t = j_97(t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = SSL_waitpid(t_15);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_21 = ATgetArgument(t, 0);
            if(((ATgetType(f_21) != AT_INT) || (ATgetInt((ATermInt) f_21) != 0)))
              _fail(t);
            {
              ATerm h_21 = ATgetArgument(t, 1);
            }
            {
              ATerm i_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_15;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_16 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm e_16 = NULL,f_16 = NULL;
    e_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), e_16);
    t = d_9(not_null(a_16), e_16, t);
    f_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_16, f_16);
    return(t);
  }
  if(((a_16 != NULL) && (a_16 != t)))
    _fail(t);
  else
    a_16 = t;
  t = SSL_table_keys(a_16);
  t = map_1_0(i_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm k_16 = NULL;
  k_16 = t;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_16 = NULL;
        t = term_z_13;
        t = get_config_0_0(t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_16, term_x_19);
        t = geq_0_0(t);
        t = k_16;
        t = c_97(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = k_16;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_16 = NULL;
        t = term_z_13;
        t = get_config_0_0(t);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, term_c_17);
        t = geq_0_0(t);
        t = w_16;
        t = b_97(t);
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        t = w_16;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm d_17 = NULL;
  d_17 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_17 = NULL;
        t = term_z_13;
        t = get_config_0_0(t);
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_17, term_g_15);
        t = geq_0_0(t);
        t = d_17;
        t = d_97(t);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = d_17;
      }
  }
  return(t);
}
ATerm c_8 (ATerm v_86 (ATerm), ATerm b_26, ATerm a_26, ATerm t)
{
  ATerm m_18 (ATerm t)
  {
    ATerm x_17 = NULL,y_17 = NULL,d_18 = NULL;
    x_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_26;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_17 = ATgetFirst((ATermList) t);
            d_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_17;
              {
                ATerm j_1 (ATerm t)
                {
                  t = a_26;
                  return(t);
                }
                t = m_8(v_86, j_1, y_17, d_18, t);
                t = m_18(t);
              }
              ;
              LocalPopChoice(t_21);
            }
          else
            {
              t = s_21;
              {
                ATerm o_10 = NULL,y_10 = NULL,z_3 = NULL;
                t = SSLgetAnnotations(x_17);
                o_10 = t;
                t = d_18;
                t = m_18(t);
                y_10 = t;
                t = (ATerm) ATinsert(CheckATermList(y_10), y_17);
                z_3 = t;
                t = SSLsetAnnotations(z_3, o_10);
              }
            }
        }
      }
    return(t);
  }
  t = b_26;
  t = m_18(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm p_19 = NULL;
  if(match_cons(t, sym__2))
    {
      p_19 = ATgetArgument(t, 0);
      if((p_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_8 (ATerm y_48, ATerm z_48, ATerm a_49, ATerm t)
{
  ATerm x_18 = NULL,b_19 = NULL,i_19 = NULL;
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_21 = ATgetArgument(t, 0);
            ATerm x_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
        t = d_9(y_48, z_48, t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = (ATerm) ATempty;
      }
    i_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_19, a_49);
    t = c_8(k_1, i_19, a_49, t);
    b_19 = t;
    t = SSL_table_put(y_48, z_48, b_19);
    t = x_18;
  }
  return(t);
}
ATerm e_8 (ATerm g_101 (ATerm), ATerm i_49, ATerm h_49, ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm s_19 = NULL,t_19 = NULL;
    if(match_cons(t, sym__2))
      {
        s_19 = ATgetArgument(t, 0);
        t_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_49, s_19, t_19);
    t = g_101(t);
    return(t);
  }
  t = h_49;
  t = map_1_0(m_1, t);
  return(t);
}
ATerm s_20 (ATerm i_20, ATerm t)
{
  t = SSL_fclose(i_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  m_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_20 = ATgetArgument(t, 0);
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_20);
            ;
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            t = s_20(m_20, t);
          }
      }
    }
  else
    {
      t = s_20(m_20, t);
    }
  return(t);
}
ATerm f_8 (ATerm s_42, ATerm t)
{
  t = SSL_read_term_from_stream(s_42);
  return(t);
}
ATerm g_8 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm g_21 = NULL;
  t = SSL_fopen(e_39, f_39);
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_21 = NULL;
  t = SSL_stdin_stream();
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_21 = NULL;
  t = SSL_stdout_stream();
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_21 = NULL;
  t = SSL_stderr_stream();
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_21);
  return(t);
}
ATerm v_23 (ATerm f_22, ATerm t)
{
  ATerm g_22 = NULL;
  t = SSL_explode_term(f_22);
  if(match_cons(t, sym__2))
    {
      ATerm a_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_22 = ATgetArgument(t, 1);
        if(((ATgetType(b_22) == AT_LIST) && !(ATisEmpty(b_22))))
          {
            g_22 = ATgetFirst((ATermList) b_22);
            {
              ATerm c_22 = (ATerm) ATgetNext((ATermList) b_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm y_23 (ATerm j_22, ATerm m_22, ATerm n_22, ATerm t)
{
  ATerm o_22 = NULL,q_22 = NULL,r_22 = NULL,y_22 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(n_22);
  r_22 = t;
  t = j_22;
  if(match_cons(t, sym_Path_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_22, m_22);
  c_4 = t;
  t = SSLsetAnnotations(c_4, r_22);
  if(match_cons(t, sym__2))
    {
      o_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(o_22, q_22, t);
  return(t);
}
ATerm z_23 (ATerm a_23, ATerm b_23, ATerm e_23, ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,k_23 = NULL,o_23 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(e_23);
  k_23 = t;
  t = SSL_is_string(a_23);
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_23, b_23);
  d_4 = t;
  t = SSLsetAnnotations(d_4, k_23);
  if(match_cons(t, sym__2))
    {
      f_23 = ATgetArgument(t, 0);
      g_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(f_23, g_23, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,u_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_22 = ATgetArgument(t, 0);
      ATerm e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  q_23 = t;
  if(match_cons(t, sym__2))
    {
      r_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_23(q_23, t);
            ;
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            {
              ATerm k_22 = t;
              int l_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_23(r_23, u_23, q_23, t);
                  ;
                  LocalPopChoice(l_22);
                }
              else
                {
                  t = k_22;
                  t = z_23(r_23, u_23, q_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_23(q_23, t);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_24 = NULL,c_24 = NULL,d_24 = NULL;
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_24 = NULL;
      e_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_24, term_u_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  c_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(d_24, t);
  a_24 = t;
  t = c_24;
  t = fclose_0_0(t);
  t = a_24;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL,h_24 = NULL;
      g_24 = t;
      t = (ATerm) ATinsert(ATempty, term_c_23);
      h_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_24, (ATerm) ATinsert(ATempty, term_c_23));
      t = j_8(g_24, h_24, t);
      LocalPopChoice(z_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_22;
      {
        ATerm d_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_23 = t;
            if((PushChoice() == 0))
              {
                ATerm i_24 = NULL,r_24 = NULL;
                i_24 = t;
                t = (ATerm) ATinsert(ATempty, term_q_13);
                r_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_24, (ATerm) ATinsert(ATempty, term_q_13));
                t = j_8(i_24, r_24, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_23;
              }
            t = debug_1_0(r_1, t);
            ;
            LocalPopChoice(h_23);
          }
        else
          {
            t = d_23;
            t = debug_1_0(s_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  n_25 = t;
  t = term_b_21;
  o_25 = t;
  t = (ATerm) ATinsert(ATempty, term_m_23);
  p_25 = t;
  t = SSL_printnl(o_25, p_25);
  t = n_25;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__3))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      s_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_8(q_25, r_25, s_25, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  t = term_b_21;
  u_25 = t;
  t = (ATerm) ATinsert(ATempty, term_n_23);
  v_25 = t;
  t = SSL_printnl(u_25, v_25);
  t = t_25;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,c_26 = NULL;
  w_25 = t;
  t = term_b_21;
  x_25 = t;
  t = (ATerm) ATinsert(ATempty, term_m_23);
  c_26 = t;
  t = SSL_printnl(x_25, c_26);
  t = w_25;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm s_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,a_25 = NULL,c_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  s_24 = t;
  t = if_verbose5_1_0(x_1, t);
  {
    ATerm p_23 = t;
    if((PushChoice() == 0))
      {
        ATerm j_25 = NULL,m_25 = NULL;
        t = term_s_23;
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, s_24);
        m_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATmakeAppl(sym_Imported_1, s_24));
        t = d_9(j_25, m_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_23;
      }
    v_24 = t;
    t = term_s_23;
    g_25 = t;
    t = term_t_23;
    h_25 = t;
    t = (ATerm) ATinsert(ATempty, s_24);
    i_25 = t;
    t = SSL_table_put(g_25, h_25, i_25);
    t = v_24;
    t = if_verbose4_1_0(z_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(i_2, t);
    u_24 = t;
    t = term_s_23;
    f_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_23, u_24);
    t = e_8(k_2, f_25, u_24, t);
    t = if_verbose6_1_0(l_2, t);
    t = term_s_23;
    w_24 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, s_24);
    a_25 = t;
    t = (ATerm) ATempty;
    c_25 = t;
    t = SSL_table_put(w_24, a_25, c_25);
    t = (ATerm) ATmakeAppl(sym__3, term_s_23, (ATerm)ATmakeAppl(sym_Imported_1, s_24), (ATerm) ATempty);
    t = if_verbose4_1_0(m_2, t);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm k_26 (ATerm t)
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_76(t);
        t = k_26(t);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
      }
    return(t);
  }
  t = k_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = b_24;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_26 = NULL;
            t = term_m_24;
            m_26 = t;
            t = SSL_getenv(m_26);
            ;
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  t = term_s_23;
  t_26 = t;
  t = term_o_24;
  u_26 = t;
  t = term_p_24;
  t = d_9(t_26, u_26, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_24;
      }
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_26 = NULL;
  t = if_verbose5_1_0(n_2, t);
  p_26 = t;
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_26 = NULL,r_26 = NULL;
        t = term_s_23;
        q_26 = t;
        t = term_t_23;
        r_26 = t;
        t = term_z_24;
        t = d_9(q_26, r_26, t);
        ;
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        {
          ATerm s_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_26 = t;
          t = repeat_1_0(q_2, t);
          t = s_26;
        }
      }
    t = p_26;
    t = if_verbose5_1_0(r_2, t);
  }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm e_28 (ATerm d_27, ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  t = term_s_23;
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_27);
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATmakeAppl(sym_Tool_1, d_27));
  t = d_9(h_27, i_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_25 = ATgetFirst((ATermList) t);
      if(match_cons(d_25, sym__2))
        {
          ATerm k_25 = ATgetArgument(d_25, 0);
          g_27 = ATgetArgument(d_25, 1);
        }
      else
        _fail(t);
      {
        ATerm e_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_27;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_s_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_l_25;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
      t = if_verbose5_1_0(u_2, t);
      t = xtc_load_0_0(t);
      l_27 = t;
      if(match_cons(t, sym__2))
        {
          j_27 = ATgetArgument(t, 0);
          k_27 = ATgetArgument(t, 1);
          {
            ATerm h_26 = t;
            int i_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_27 = NULL,w_27 = NULL,x_27 = NULL;
                t = term_s_23;
                w_27 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, j_27);
                x_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATmakeAppl(sym_Tool_1, j_27));
                t = d_9(w_27, x_27, t);
                {
                  ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((k_27 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((r_27 != NULL) && (r_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_3, t);
                  t = not_null(r_27);
                }
                ;
                LocalPopChoice(i_26);
              }
            else
              {
                t = h_26;
                t = e_28(l_27, t);
              }
          }
        }
      else
        {
          t = e_28(l_27, t);
        }
      t = if_verbose5_1_0(f_3, t);
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = d_26;
      {
        ATerm d_28 = NULL,s_11 = NULL,t_11 = NULL;
        d_28 = t;
        t = term_b_21;
        s_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_26), d_28), term_j_26);
        t_11 = t;
        t = SSL_printnl(s_11, t_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_26), d_28), term_j_26);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  j_28 = t;
  t = s_104(t);
  t = xtc_find_0_0(t);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_28, j_28);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm k_28 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, i_28, j_28);
      t = z_7(i_28, j_28, t);
      t = term_n_26;
      k_28 = t;
      t = SSL_exit(k_28);
      return(t);
    }
    t = fork_and_wait_1_0(j_3, t);
    t = j_28;
  }
  return(t);
}
ATerm h_8 (ATerm v_93 (ATerm), ATerm q_37, ATerm o_37, ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  t = v_93(t);
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_28, q_37, o_37);
  t = e_9(m_28, q_37, o_37, t);
  {
    ATerm o_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_28 = NULL;
        t = term_w_26;
        s_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_28, term_w_26);
        t = d_9(m_28, s_28, t);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_28 = ATgetFirst((ATermList) t);
        o_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_26;
    q_28 = t;
    t = (ATerm) ATinsert(CheckATermList(o_28), (ATerm) ATinsert(CheckATermList(n_28), q_37));
    r_28 = t;
    t = SSL_table_put(m_28, q_28, r_28);
    t = p_28;
  }
  return(t);
}
ATerm o_29 (ATerm z_28, ATerm t)
{
  t = z_28;
  {
    ATerm x_26 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_26 = ATgetArgument(t, 0);
            ATerm z_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_26;
      }
    t = term_a_27;
    t = debug_1_0(l_3, t);
    t = (ATerm) ATmakeAppl(sym__2, z_28, term_q_11);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm p_29 (ATerm b_29, ATerm d_29, ATerm e_29, ATerm t)
{
  t = SSL_open_file(b_29, d_29);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_b_27;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,n_29 = NULL;
  j_29 = t;
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
      {
        ATerm c_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_29(j_29, t);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = c_27;
            t = p_29(k_29, n_29, j_29, t);
          }
      }
    }
  else
    {
      t = o_29(j_29, t);
    }
  return(t);
}
ATerm i_8 (ATerm s_33, ATerm t_33, ATerm t)
{
  t = SSL_strcat(s_33, t_33);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  t = term_f_27;
  t = new_0_0(t);
  r_29 = t;
  t = term_m_27;
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_29, term_m_27);
  t = i_8(r_29, s_29, t);
  t_29 = t;
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = NULL;
        t = (ATerm) ATinsert(ATempty, term_q_13);
        v_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_29, (ATerm) ATinsert(ATempty, term_q_13));
        t = j_8(t_29, v_29, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = t_29;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  t = new_file_0_0(t);
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_29, term_q_11);
  t = open_file_0_0(t);
  t = term_f_27;
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_29, term_f_27);
  t = h_8(m_3, y_29, z_29, t);
  t = y_29;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,r_30 = NULL;
  n_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_11 = NULL,a_12 = NULL;
      t = n_30;
      t = xtc_new_file_0_0(t);
      z_11 = t;
      t = r_0(t);
      a_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_12, (ATerm) ATinsert(ATinsert(ATempty, z_11), term_c_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(z_11);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_11);
    }
  else
    {
      ATerm g_12 = NULL,h_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_30;
      t = xtc_new_file_0_0(t);
      g_12 = t;
      t = r_0(t);
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_12), term_c_11), r_30), term_q_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(g_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_12);
    }
  return(t);
}
ATerm t_32 (ATerm f_31, ATerm g_31, ATerm i_31, ATerm t)
{
  ATerm k_31 = NULL,n_31 = NULL,r_12 = NULL,u_12 = NULL,h_4 = NULL;
  t = SSLgetAnnotations(i_31);
  k_31 = t;
  t = f_31;
  {
    ATerm s_27 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtree", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_27;
      }
    n_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_31, g_31);
    h_4 = t;
    t = SSLsetAnnotations(h_4, k_31);
    u_12 = t;
    t = SSL_explode_term(u_12);
    if(match_cons(t, sym__2))
      {
        ATerm t_27 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) t_27) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm u_27 = ATgetArgument(t, 1);
          if(((ATgetType(u_27) == AT_LIST) && !(ATisEmpty(u_27))))
            {
              ATerm v_27 = ATgetFirst((ATermList) u_27);
              ATerm y_27 = (ATerm) ATgetNext((ATermList) u_27);
              if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
                {
                  r_12 = ATgetFirst((ATermList) y_27);
                  {
                    ATerm z_27 = (ATerm) ATgetNext((ATermList) y_27);
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
    t = r_12;
    {
      ATerm a_28 = t;
      int b_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_31 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  u_31 = ATgetArgument(t, 0);
                  {
                    ATerm y_12 = NULL,i_4 = NULL;
                    t = SSLgetAnnotations(r_12);
                    y_12 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, u_31);
                    i_4 = t;
                    t = SSLsetAnnotations(i_4, y_12);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = r_12;
                }
              LocalPopChoice(f_28);
              t = xtc_transform_file_2_0(p_3, q_3, t);
            }
          else
            {
              t = c_28;
              t = xtc_transform_term_2_0(r_3, s_3, t);
            }
          t = read_from_0_0(t);
          ;
          LocalPopChoice(b_28);
        }
      else
        {
          t = a_28;
          {
            ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
            t = term_b_21;
            h_32 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, g_31), term_g_28);
            i_32 = t;
            t = SSL_printnl(h_32, i_32);
            t = term_v_13;
            g_32 = t;
            t = SSL_exit(g_32);
            t = (ATerm) ATinsert(ATinsert(ATempty, g_31), term_g_28);
          }
        }
    }
  }
  return(t);
}
ATerm u_32 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm e_13 = NULL;
  t = SSL_explode_term(l_32);
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_28 = ATgetArgument(t, 1);
        if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
          {
            ATerm t_28 = ATgetFirst((ATermList) l_28);
            ATerm u_28 = (ATerm) ATgetNext((ATermList) l_28);
            if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
              {
                e_13 = ATgetFirst((ATermList) u_28);
                {
                  ATerm v_28 = (ATerm) ATgetNext((ATermList) u_28);
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
  t = e_13;
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = read_from_0_0(t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        {
          ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
          t = term_b_21;
          o_32 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, k_32), term_g_28);
          p_32 = t;
          t = SSL_printnl(o_32, p_32);
          t = term_v_13;
          n_32 = t;
          t = SSL_exit(n_32);
          t = (ATerm) ATinsert(ATinsert(ATempty, k_32), term_g_28);
        }
      }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm w_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
  b_32 = t;
  t = pass_verbose_0_0(t);
  w_31 = t;
  t = b_32;
  t = pass_keep_0_0(t);
  z_31 = t;
  t = term_a_29;
  t = get_config_0_0(t);
  a_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_32), z_31), w_31);
  t = concat_0_0(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  f_32 = t;
  t = pass_verbose_0_0(t);
  c_32 = t;
  t = f_32;
  t = pass_keep_0_0(t);
  d_32 = t;
  t = term_a_29;
  t = get_config_0_0(t);
  e_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_32), d_32), c_32);
  t = concat_0_0(t);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  if(match_cons(t, sym__2))
    {
      r_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_32;
  if(match_string(t, "rtree"))
    {
      ATerm c_29 = t;
      int f_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_32(r_32, s_32, q_32, t);
          ;
          LocalPopChoice(f_29);
        }
      else
        {
          t = c_29;
          t = u_32(s_32, q_32, t);
        }
    }
  else
    {
      t = t_32(r_32, s_32, q_32, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  w_32 = t;
  t = m_95(t);
  x_32 = t;
  t = term_b_21;
  y_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_32), x_32);
  z_32 = t;
  t = SSL_printnl(y_32, z_32);
  t = w_32;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm a_97 (ATerm), ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_33 = NULL;
        t = term_z_13;
        t = get_config_0_0(t);
        d_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_33, term_b_15);
        t = geq_0_0(t);
        t = b_33;
        t = a_97(t);
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        t = b_33;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm f_33 = NULL;
  ATerm v_3 (ATerm t)
  {
    t = d_83(t);
    if(((f_33 != NULL) && (f_33 != t)))
      _fail(t);
    else
      f_33 = t;
    return(t);
  }
  t = fetch_1_0(v_3, t);
  t = not_null(f_33);
  return(t);
}
ATerm j_8 (ATerm w_38, ATerm x_38, ATerm t)
{
  t = SSL_access(w_38, x_38);
  return(t);
}
ATerm k_8 (ATerm f_75 (ATerm), ATerm f_19, ATerm e_19, ATerm t)
{
  t = f_75(t);
  {
    ATerm i_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm g_33 = NULL;
          ATerm y_3 (ATerm t)
          {
            ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
            i_33 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_33), term_o_11), f_19), term_m_29), not_null(g_33));
            l_33 = t;
            t = SSL_concat_strings(l_33);
            j_33 = t;
            t = (ATerm) ATinsert(ATempty, term_q_13);
            k_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_33, (ATerm) ATinsert(ATempty, term_q_13));
            t = j_8(j_33, k_33, t);
            h_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_33, (ATerm) ATmakeAppl(sym_FILE_1, h_33));
            return(t);
          }
          if(((g_33 != NULL) && (g_33 != t)))
            _fail(t);
          else
            g_33 = t;
          t = e_19;
          t = fetch_elem_1_0(y_3, t);
          return(t);
        }
        t = fetch_elem_1_0(w_3, t);
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = i_29;
        {
          ATerm q_29 = t;
          int u_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_4 (ATerm t)
              {
                ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
                m_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_33), term_o_11), f_19);
                r_33 = t;
                t = SSL_concat_strings(r_33);
                n_33 = t;
                t = term_s_23;
                p_33 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, n_33);
                q_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATmakeAppl(sym_Tool_1, n_33));
                t = d_9(p_33, q_33, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm w_29 = ATgetFirst((ATermList) t);
                    if(match_cons(w_29, sym__2))
                      {
                        ATerm a_30 = ATgetArgument(w_29, 0);
                        o_33 = ATgetArgument(w_29, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm x_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, m_33, (ATerm) ATmakeAppl(sym_FILE_1, o_33));
                return(t);
              }
              t = e_19;
              t = fetch_elem_1_0(a_4, t);
              ;
              LocalPopChoice(u_29);
            }
          else
            {
              t = q_29;
              {
                ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
                t = term_b_21;
                v_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_30), f_19), term_b_30);
                w_33 = t;
                t = SSL_printnl(v_33, w_33);
                t = term_v_13;
                u_33 = t;
                t = SSL_exit(u_33);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_30), f_19), term_b_30);
              }
            }
        }
      }
  }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_d_30;
  return(t);
}
ATerm get_module_1_0 (ATerm e_75 (ATerm), ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL;
  t = basename_1_0(_id, t);
  g_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_22), term_g_30), term_f_30), term_e_30);
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_22), term_g_30), term_f_30), term_e_30));
  t = k_8(e_75, g_34, h_34, t);
  if(match_cons(t, sym__2))
    {
      ATerm h_30 = ATgetArgument(t, 0);
      ATerm i_30 = ATgetArgument(t, 1);
      if(match_cons(i_30, sym_FILE_1))
        {
          e_34 = ATgetArgument(i_30, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm b_4 (ATerm t)
    {
      ATerm j_34 = NULL;
      j_34 = t;
      t = e_34;
      t = debug_1_0(e_4, t);
      t = j_34;
      return(t);
    }
    t = if_verbose3_1_0(b_4, t);
    t = parse_module_0_0(t);
    f_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
  }
  return(t);
}
ATerm m_8 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm f_26, ATerm e_26, ATerm t)
{
  t = z_86(t);
  {
    ATerm f_4 (ATerm t)
    {
      ATerm k_34 = NULL;
      k_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_26, k_34);
      t = y_86(t);
      return(t);
    }
    t = fetch_1_0(f_4, t);
    t = e_26;
  }
  return(t);
}
ATerm n_8 (ATerm q_86 (ATerm), ATerm z_25, ATerm y_25, ATerm t)
{
  ATerm e_35 (ATerm t)
  {
    ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
    x_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_34 = ATgetFirst((ATermList) t);
            z_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_30 = t;
          int k_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_34;
              {
                ATerm g_4 (ATerm t)
                {
                  t = y_25;
                  return(t);
                }
                t = m_8(q_86, g_4, y_34, z_34, t);
                t = e_35(t);
              }
              ;
              LocalPopChoice(k_30);
            }
          else
            {
              t = j_30;
              {
                ATerm t_13 = NULL,x_13 = NULL,m_4 = NULL;
                t = SSLgetAnnotations(x_34);
                t_13 = t;
                t = z_34;
                t = e_35(t);
                x_13 = t;
                t = (ATerm) ATinsert(CheckATermList(x_13), y_34);
                m_4 = t;
                t = SSLsetAnnotations(m_4, t_13);
              }
            }
        }
      }
    return(t);
  }
  t = z_25;
  t = e_35(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_30 = ATgetArgument(t, 0);
      if(((ATgetType(l_30) != AT_LIST) || !(ATisEmpty(l_30))))
        _fail(t);
      {
        ATerm m_30 = ATgetArgument(t, 1);
        if(((ATgetType(m_30) != AT_LIST) || !(ATisEmpty(m_30))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm u_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
        {
          u_35 = ATgetFirst((ATermList) o_30);
          w_35 = (ATerm) ATgetNext((ATermList) o_30);
        }
      else
        _fail(t);
      {
        ATerm p_30 = ATgetArgument(t, 1);
        if(((ATgetType(p_30) == AT_LIST) && !(ATisEmpty(p_30))))
          {
            x_35 = ATgetFirst((ATermList) p_30);
            y_35 = (ATerm) ATgetNext((ATermList) p_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_35, x_35), (ATerm) ATmakeAppl(sym__2, w_35, y_35));
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  if(match_cons(t, sym__2))
    {
      z_35 = ATgetArgument(t, 0);
      a_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_36), z_35);
  return(t);
}
ATerm r_8 (ATerm h_562, ATerm m_562, ATerm n_52, ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
  t = SSL_explode_term(m_562);
  if(match_cons(t, sym__2))
    {
      n_35 = ATgetArgument(t, 0);
      p_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_562);
  if(match_cons(t, sym__2))
    {
      if((n_35 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_35, p_35);
  t = genzip_4_0(j_4, l_4, n_4, _id, t);
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_35, n_52);
  t = conc_0_0(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm m_36 = NULL;
  m_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_36);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,o_4 = NULL;
  q_36 = t;
  if(match_cons(t, sym__2))
    {
      o_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_36);
  n_36 = t;
  t = p_36;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
  o_4 = t;
  t = SSLsetAnnotations(o_4, n_36);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  u_37 = t;
  if(match_cons(t, sym__2))
    {
      v_37 = ATgetArgument(t, 0);
      w_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_37 = ATgetFirst((ATermList) t);
      y_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_30 = t;
        int s_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_38(v_37, w_37, u_37, t);
            ;
            LocalPopChoice(s_30);
          }
        else
          {
            t = q_30;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_37), x_37), y_37);
          }
      }
    }
  else
    {
      t = i_38(v_37, w_37, u_37, t);
    }
  return(t);
}
ATerm i_38 (ATerm r_36, ATerm s_36, ATerm t_36, ATerm t)
{
  ATerm u_36 = NULL,x_36 = NULL,p_4 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
  t = SSLgetAnnotations(t_36);
  u_36 = t;
  t = s_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_37 = ATgetFirst((ATermList) t);
      d_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_37;
  if(match_cons(t, sym__2))
    {
      b_37 = ATgetArgument(t, 0);
      c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_37;
        if((b_37 != t))
          {
            _fail(t);
          }
        t = d_37;
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = s_36;
        t = r_8(b_37, c_37, d_37, t);
      }
    x_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_36, x_36);
    p_4 = t;
    t = SSLsetAnnotations(p_4, u_36);
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm h_38 = NULL;
  if(match_cons(t, sym__2))
    {
      h_38 = ATgetArgument(t, 0);
      if((h_38 != ATgetArgument(t, 1)))
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
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(q_4, r_4, t_4, t);
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
        ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
        c_38 = t;
        if(match_cons(t, sym__2))
          {
            d_38 = ATgetArgument(t, 0);
            e_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_38;
        t = n_8(w_4, d_38, e_38, t);
      }
    }
  return(t);
}
ATerm t_8 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm e_55, ATerm b_55, ATerm i_55, ATerm f_55, ATerm c_55, ATerm d_55, ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_55, f_55);
  t = a_106(t);
  m_38 = t;
  t = b_106(t);
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_38, i_55);
  t = diff_0_0(t);
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_38, b_55);
  t = conc_0_0(t);
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_38, i_55);
  t = conc_0_0(t);
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_55, m_38, c_55);
  t = c_106(t);
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym__5, p_38, q_38, f_55, r_38, d_55);
  return(t);
}
ATerm GnNext_3_0 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,y_38 = NULL,i_39 = NULL,j_39 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm x_30 = ATgetArgument(t, 0);
      if(((ATgetType(x_30) == AT_LIST) && !(ATisEmpty(x_30))))
        {
          t_38 = ATgetFirst((ATermList) x_30);
          u_38 = (ATerm) ATgetNext((ATermList) x_30);
        }
      else
        _fail(t);
      v_38 = ATgetArgument(t, 1);
      y_38 = ATgetArgument(t, 2);
      i_39 = ATgetArgument(t, 3);
      j_39 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = t_8(a_106, b_106, c_106, t_38, u_38, v_38, y_38, i_39, j_39, t);
  return(t);
}
ATerm while_not_2_0 (ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t)
{
  ATerm k_39 (ATerm t)
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_76(t);
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        t = s_76(t);
        t = k_39(t);
      }
    return(t);
  }
  t = k_39(t);
  return(t);
}
ATerm for_3_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm t)
{
  t = u_76(t);
  t = while_not_2_0(v_76, w_76, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
  if(match_cons(t, sym__3))
    {
      u_39 = ATgetArgument(t, 0);
      v_39 = ATgetArgument(t, 1);
      w_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, u_39, u_39, v_39, w_39, (ATerm) ATempty);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm a_31 = ATgetArgument(t, 0);
      if(((ATgetType(a_31) != AT_LIST) || !(ATisEmpty(a_31))))
        _fail(t);
      {
        ATerm b_31 = ATgetArgument(t, 1);
      }
      {
        ATerm c_31 = ATgetArgument(t, 2);
      }
      z_39 = ATgetArgument(t, 3);
      a_40 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_39, a_40);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  ATerm n_39 = NULL;
  ATerm b_5 (ATerm t)
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(x_105, y_105, z_105, t);
        ;
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        {
          ATerm c_40 = NULL,d_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
          if(match_cons(t, sym__5))
            {
              c_40 = ATgetArgument(t, 0);
              l_40 = ATgetArgument(t, 1);
              m_40 = ATgetArgument(t, 2);
              n_40 = ATgetArgument(t, 3);
              o_40 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = c_40;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_40 = ATgetFirst((ATermList) t);
              k_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, k_40, l_40, m_40, n_40, (ATerm) ATinsert(CheckATermList(o_40), d_40));
        }
      }
    return(t);
  }
  t = for_3_0(z_4, a_5, b_5, t);
  if(match_cons(t, sym__2))
    {
      n_39 = ATgetArgument(t, 0);
      {
        ATerm h_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_39;
  return(t);
}
ATerm filter_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_41;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_41 = ATgetFirst((ATermList) t);
          r_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_14 = NULL,r_14 = NULL,s_14 = NULL,s_4 = NULL;
            t = SSLgetAnnotations(p_41);
            o_14 = t;
            t = q_41;
            t = y_89(t);
            r_14 = t;
            t = r_41;
            t = filter_1_0(y_89, t);
            s_14 = t;
            t = (ATerm) ATinsert(CheckATermList(s_14), r_14);
            s_4 = t;
            t = SSLsetAnnotations(s_4, o_14);
            ;
            LocalPopChoice(l_31);
          }
        else
          {
            t = j_31;
            t = r_41;
            t = filter_1_0(y_89, t);
          }
      }
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm m_31 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_31;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm e_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      ATerm p_31 = ATgetArgument(t, 1);
      if(match_cons(p_31, sym_Specification_1))
        {
          e_42 = ATgetArgument(p_31, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = x_7(e_42, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm q_31 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
      l_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_42), k_42);
  return(t);
}
ATerm k_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_31;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm o_42 = NULL,w_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_42 = ATgetFirst((ATermList) t);
      w_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_42, w_42);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_31 = ATgetArgument(t, 0);
      if(match_cons(s_31, sym__2))
        {
          x_42 = ATgetArgument(s_31, 0);
          y_42 = ATgetArgument(s_31, 1);
        }
      else
        _fail(t);
      {
        ATerm t_31 = ATgetArgument(t, 1);
        if(match_cons(t_31, sym__2))
          {
            z_42 = ATgetArgument(t_31, 0);
            a_43 = ATgetArgument(t_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_42), x_42), (ATerm) ATinsert(CheckATermList(a_43), y_42));
  return(t);
}
ATerm w_8 (ATerm v_18, ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,u_4 = NULL;
  ATerm v_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_29;
      t = get_config_0_0(t);
      t = filter_1_0(d_5, t);
      ;
      LocalPopChoice(x_31);
    }
  else
    {
      t = v_31;
      t = (ATerm) ATempty;
    }
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, v_18), term_j_32), term_y_31), term_f_27, (ATerm) ATempty);
  {
    ATerm f_5 (ATerm t)
    {
      ATerm c_42 = NULL,d_42 = NULL;
      ATerm j_5 (ATerm t)
      {
        t = (ATerm) ATinsert(CheckATermList(v_41), term_o_11);
        return(t);
      }
      d_42 = t;
      t = SSL_explode_term(d_42);
      if(match_cons(t, sym__2))
        {
          ATerm m_32 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) m_32) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm v_32 = ATgetArgument(t, 1);
            if(((ATgetType(v_32) == AT_LIST) && !(ATisEmpty(v_32))))
              {
                c_42 = ATgetFirst((ATermList) v_32);
                {
                  ATerm a_33 = (ATerm) ATgetNext((ATermList) v_32);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = c_42;
      t = get_module_1_0(j_5, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(f_5, h_5, i_5, t);
    t = genzip_4_0(k_5, l_5, m_5, _id, t);
    a_42 = t;
    if(match_cons(t, sym__2))
      {
        x_41 = ATgetArgument(t, 0);
        y_41 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_42);
    w_41 = t;
    t = y_41;
    t = flatten_stratego_0_0(t);
    z_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_41, z_41);
    u_4 = t;
    t = SSLsetAnnotations(u_4, w_41);
  }
  return(t);
}
ATerm y_8 (ATerm o_39, ATerm p_39, ATerm t)
{
  t = SSL_copy(o_39, p_39);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL;
  u_43 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_15 = NULL;
        t = u_43;
        t = n_0(t);
        k_15 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = k_15;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = k_15;
          }
        t = (ATerm) ATmakeAppl(sym__2, v_43, k_15);
        t = y_8(v_43, k_15, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_43);
        ;
        LocalPopChoice(e_33);
      }
    else
      {
        t = c_33;
        {
          ATerm x_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_15 = NULL;
              t = u_43;
              t = n_0(t);
              w_15 = t;
              {
                ATerm z_33 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_15 = NULL;
                    x_15 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_15;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_15;
                          }
                        else
                          {
                            t = x_15;
                            if((v_43 != t))
                              {
                                _fail(t);
                              }
                            t = x_15;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_33;
                  }
                t = (ATerm) ATmakeAppl(sym__2, v_43, w_15);
                t = y_8(v_43, w_15, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_43);
              }
              ;
              LocalPopChoice(y_33);
            }
          else
            {
              t = x_33;
              t = u_43;
              t = n_0(t);
              if((v_43 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_43);
            }
        }
      }
  }
  return(t);
}
ATerm z_8 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm b_44 = NULL,d_44 = NULL;
  d_44 = t;
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_48, h_48);
        t = d_9(g_48, h_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_34 = ATgetFirst((ATermList) t);
            b_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_34);
        t = SSL_table_put(g_48, h_48, b_44);
        t = (ATerm) ATmakeAppl(sym__3, g_48, h_48, b_44);
      }
    else
      {
        t = a_34;
        t = SSL_table_remove(g_48, h_48);
        t = (ATerm) ATmakeAppl(sym__2, g_48, h_48);
      }
    t = d_44;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm e_44 = NULL,j_44 = NULL,p_44 = NULL,r_44 = NULL,u_44 = NULL;
  r_44 = t;
  t = s_93(t);
  p_44 = t;
  {
    ATerm d_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_44 = NULL;
        t = term_w_26;
        w_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_44, term_w_26);
        t = d_9(p_44, w_44, t);
        ;
        LocalPopChoice(i_34);
      }
    else
      {
        t = d_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_44 = ATgetFirst((ATermList) t);
        e_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_26;
    u_44 = t;
    t = SSL_table_put(p_44, u_44, e_44);
    t = j_44;
    {
      ATerm n_5 (ATerm t)
      {
        ATerm y_44 = NULL;
        y_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_44, y_44);
        t = z_8(p_44, y_44, t);
        return(t);
      }
      t = map_1_0(n_5, t);
      t = r_44;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_75(t);
      t = w_75(t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      t = w_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,g_45 = NULL,h_45 = NULL;
  d_45 = t;
  t = r_93(t);
  c_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_45, term_w_26);
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_34 = ATgetArgument(t, 0);
            ATerm q_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_26;
        o_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_45, term_w_26);
        t = d_9(c_45, o_45, t);
        ;
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        t = (ATerm) ATempty;
      }
    e_45 = t;
    t = term_w_26;
    g_45 = t;
    t = (ATerm) ATinsert(CheckATermList(e_45), (ATerm) ATempty);
    h_45 = t;
    t = SSL_table_put(c_45, g_45, h_45);
    t = d_45;
  }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm c_46 = NULL;
  c_46 = t;
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_46);
        ;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = c_46;
      }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm r_45 = NULL;
  ATerm s_5 (ATerm t)
  {
    ATerm u_45 = NULL;
    u_45 = t;
    {
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_45 = NULL,w_45 = NULL;
          t = term_p_27;
          v_45 = t;
          t = term_w_26;
          w_45 = t;
          t = term_v_34;
          t = d_9(v_45, w_45, t);
          ;
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_45 != NULL) && (r_45 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_45 = ATgetFirst((ATermList) t);
          {
            ATerm w_34 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = r_45;
      t = map_1_0(u_5, t);
      t = u_45;
      t = end_scope_1_0(w_5, t);
    }
    return(t);
  }
  t = begin_scope_1_0(p_5, t);
  t = restore_always_2_0(e_104, s_5, t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      t = term_c_35;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm d_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_46 = NULL;
        t = term_q_27;
        t = get_config_0_0(t);
        j_46 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_46);
        ;
        LocalPopChoice(f_35);
      }
    else
      {
        t = d_35;
        t = term_p_13;
      }
    t = f_104(t);
    t = copy_to_1_0(y_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,q_46 = NULL;
  k_46 = t;
  t = term_f_27;
  t = whoami_0_0(t);
  l_46 = t;
  t = term_b_21;
  n_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_35), l_46), term_g_35);
  q_46 = t;
  t = SSL_printnl(n_46, q_46);
  t = term_v_13;
  m_46 = t;
  t = SSL_exit(m_46);
  t = k_46;
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm s_46 = NULL;
  s_46 = t;
  if(match_string(t, "-k"))
    {
      t = s_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_46;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
  t_46 = t;
  t = SSL_string_to_int(t_46);
  u_46 = t;
  t = term_r_13;
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, u_46);
  t = g_9(v_46, u_46, t);
  t = t_46;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_6, k_6, l_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm z_46 = NULL;
  z_46 = t;
  if(match_string(t, "-S"))
    {
      t = z_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_46;
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm a_47 = NULL,d_47 = NULL;
  t = term_z_13;
  a_47 = t;
  t = term_j_35;
  d_47 = t;
  t = term_k_35;
  t = g_9(a_47, d_47, t);
  t = term_l_35;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,h_47 = NULL;
  e_47 = t;
  t = SSL_string_to_int(e_47);
  f_47 = t;
  t = term_z_13;
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, f_47);
  t = g_9(h_47, f_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_47);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm i_47 = NULL,o_47 = NULL;
  t = term_s_35;
  i_47 = t;
  t = term_f_27;
  o_47 = t;
  t = term_t_35;
  t = g_9(i_47, o_47, t);
  t = term_v_35;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_b_36;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_6, n_6, o_6, t);
      ;
      LocalPopChoice(f_36);
    }
  else
    {
      t = e_36;
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_6, r_6, t_6, t);
            ;
            LocalPopChoice(h_36);
          }
        else
          {
            t = g_36;
            t = Option_3_0(u_6, v_6, w_6, t);
          }
      }
    }
  return(t);
}
ATerm g_9 (ATerm g_56, ATerm h_56, ATerm t)
{
  ATerm p_47 = NULL;
  t = term_j_13;
  p_47 = t;
  t = SSL_table_put(p_47, g_56, h_56);
  t = (ATerm) ATmakeAppl(sym__3, term_j_13, g_56, h_56);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL;
      t = term_f_27;
      t = h_0(t);
      u_47 = t;
      t = term_k_36;
      v_47 = t;
      t = term_l_36;
      w_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_36, term_l_36, u_47);
      t = e_9(v_47, w_47, u_47, t);
      _fail(t);
    }
  else
    {
      ATerm d_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_47 = ATgetFirst((ATermList) t);
          t_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_47;
      t = d_0(t);
      t = term_f_27;
      t = g_0(t);
      d_48 = t;
      t = (ATerm) ATinsert(CheckATermList(t_47), d_48);
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm k_48 = NULL;
  k_48 = t;
  if(match_string(t, "-o"))
    {
      t = k_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_48;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  l_48 = t;
  t = term_c_11;
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, l_48);
  t = g_9(m_48, l_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_48);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_v_36;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_6, y_6, z_6, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm o_48 = NULL;
  o_48 = t;
  if(match_string(t, "-i"))
    {
      t = o_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_48;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  p_48 = t;
  t = term_q_27;
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_27, p_48);
  t = g_9(q_48, p_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_48);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_7, f_7, g_7, t);
  return(t);
}
ATerm e_9 (ATerm b_48, ATerm c_48, ATerm a_48, ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_37 = ATgetArgument(t, 0);
            ATerm f_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
        t = d_9(b_48, c_48, t);
        ;
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        t = (ATerm) ATempty;
      }
    t_48 = t;
    t = (ATerm) ATinsert(CheckATermList(t_48), a_48);
    u_48 = t;
    t = SSL_table_put(b_48, c_48, u_48);
    t = s_48;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm l_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_49 = NULL,r_49 = NULL,u_49 = NULL;
      t = term_f_27;
      t = m_0(t);
      q_49 = t;
      t = term_k_36;
      r_49 = t;
      t = term_l_36;
      u_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_36, term_l_36, q_49);
      t = e_9(r_49, u_49, q_49, t);
      _fail(t);
    }
  else
    {
      ATerm d_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_49 = ATgetFirst((ATermList) t);
          n_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_49 = ATgetFirst((ATermList) t);
          p_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_49;
      t = k_0(t);
      t = o_49;
      t = l_0(t);
      d_50 = t;
      t = (ATerm) ATinsert(CheckATermList(p_49), d_50);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm d_51 (ATerm t)
  {
    ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
    c_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_51 = ATgetFirst((ATermList) t);
        b_51 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_16 = NULL,r_16 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(c_51);
          l_16 = t;
          t = b_51;
          t = d_51(t);
          r_16 = t;
          t = (ATerm) ATinsert(CheckATermList(r_16), a_51);
          g_5 = t;
          t = SSLsetAnnotations(g_5, l_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_51;
        t = h_83(t);
      }
    return(t);
  }
  t = d_51(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_50 = NULL,h_50 = NULL,i_50 = NULL;
  f_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_50;
    }
  else
    {
      ATerm h_7 (ATerm t)
      {
        t = not_null(i_50);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_50 = ATgetFirst((ATermList) t);
          if(((i_50 != NULL) && (i_50 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_50;
      t = at_end_1_0(h_7, t);
    }
  return(t);
}
ATerm y_51 (ATerm h_51, ATerm t)
{
  ATerm i_51 = NULL;
  t = SSL_explode_term(h_51);
  if(match_cons(t, sym__2))
    {
      ATerm g_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_51;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  q_51 = t;
  if(match_cons(t, sym__2))
    {
      o_51 = ATgetArgument(t, 0);
      p_51 = ATgetArgument(t, 1);
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 (ATerm t)
            {
              t = p_51;
              return(t);
            }
            t = o_51;
            t = at_end_1_0(i_7, t);
            ;
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            t = y_51(q_51, t);
          }
      }
    }
  else
    {
      t = y_51(q_51, t);
    }
  return(t);
}
ATerm x_8 (ATerm m_56, ATerm l_56, ATerm t)
{
  ATerm b_52 = NULL,e_52 = NULL,f_52 = NULL;
  t = m_56;
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
        t = (ATerm) ATempty;
      }
    e_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_56, e_52);
    t = conc_0_0(t);
    b_52 = t;
    t = term_j_13;
    f_52 = t;
    t = SSL_table_put(f_52, m_56, b_52);
    t = (ATerm) ATmakeAppl(sym__3, term_j_13, m_56, b_52);
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm o_52 = NULL;
  o_52 = t;
  if(match_string(t, "-I"))
    {
      t = o_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = o_52;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
  p_52 = t;
  t = term_a_29;
  q_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_52), term_a_29);
  r_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_29, (ATerm) ATinsert(ATinsert(ATempty, p_52), term_a_29));
  t = x_8(q_52, r_52, t);
  t = term_f_27;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_l_37;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm v_52 = NULL;
  v_52 = t;
  if(match_string(t, "--nodep"))
    {
      t = v_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-nodep", 0, ATtrue)))
        _fail(t);
      t = v_52;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  t = term_n_11;
  w_52 = t;
  t = term_m_37;
  x_52 = t;
  t = term_n_37;
  t = g_9(w_52, x_52, t);
  t = term_f_27;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm b_53 = NULL;
  b_53 = t;
  if(match_string(t, "--dep"))
    {
      t = b_53;
    }
  else
    {
      if(match_string(t, "-d"))
        {
          t = b_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-dep", 0, ATtrue)))
            _fail(t);
          t = b_53;
        }
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  j_53 = t;
  t = term_i_11;
  k_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, j_53);
  t = g_9(k_53, j_53, t);
  t = term_f_27;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_r_37;
  return(t);
}
ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--imports", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL;
  t = term_s_37;
  s_53 = t;
  t = term_f_27;
  t_53 = t;
  t = term_t_37;
  t = g_9(s_53, t_53, t);
  t = term_f_27;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm pack_stratego_options_0_0 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(j_7, k_7, l_7, t);
      ;
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(m_7, n_7, v_7, t);
            ;
            LocalPopChoice(g_38);
          }
        else
          {
            t = f_38;
            {
              ATerm j_38 = t;
              int k_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(w_7, a_8, b_8, t);
                  ;
                  LocalPopChoice(k_38);
                }
              else
                {
                  t = j_38;
                  t = Option_3_0(l_8, o_8, p_8, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,z_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_27;
  t = whoami_0_0(t);
  v_53 = t;
  t = term_b_21;
  x_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_38), v_53);
  z_53 = t;
  t = SSL_printnl(x_53, z_53);
  t = term_v_13;
  w_53 = t;
  t = SSL_exit(w_53);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_38;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_9 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm z_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_36, d_36);
      ;
      LocalPopChoice(a_39);
    }
  else
    {
      t = z_38;
      t = SSL_addr(c_36, d_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm t)
{
  ATerm b_54 = NULL,f_54 = NULL,g_54 = NULL;
  b_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_54;
      t = u_88(t);
    }
  else
    {
      ATerm j_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_54 = ATgetFirst((ATermList) t);
          g_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_54;
      t = foldr_2_0(u_88, v_88, t);
      j_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_54, j_54);
      t = v_88(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_j_35;
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_9(i_17, j_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_54 = NULL,a_17 = NULL,b_17 = NULL;
  t = times_0_0(t);
  b_17 = t;
  t = SSL_explode_term(b_17);
  if(match_cons(t, sym__2))
    {
      ATerm b_39 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_17;
  t = foldr_2_0(q_8, s_8, t);
  m_54 = t;
  t = SSL_TicksToSeconds(m_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  if(match_cons(t, sym__2))
    {
      z_54 = ATgetArgument(t, 0);
      a_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_55;
        if((z_54 != t))
          {
            _fail(t);
          }
        t = y_54;
        ;
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
        t = (ATerm) ATmakeAppl(sym__2, z_54, a_55);
        {
          ATerm l_39 = t;
          int m_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_54, a_55);
              ;
              LocalPopChoice(m_39);
            }
          else
            {
              t = l_39;
              t = SSL_gtr(z_54, a_55);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_54, a_55);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_96 (ATerm), ATerm t)
{
  ATerm q_55 = NULL;
  q_55 = t;
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_55 = NULL;
        t = term_z_13;
        t = get_config_0_0(t);
        s_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_55, term_v_13);
        t = geq_0_0(t);
        t = q_55;
        t = y_96(t);
        ;
        LocalPopChoice(r_39);
      }
    else
      {
        t = q_39;
        t = q_55;
      }
  }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,x_55 = NULL,y_55 = NULL;
  t = run_time_0_0(t);
  u_55 = t;
  t = term_f_27;
  t = whoami_0_0(t);
  v_55 = t;
  t = term_b_21;
  x_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_39), u_55), term_i_14), v_55);
  y_55 = t;
  t = SSL_printnl(x_55, y_55);
  t = (ATerm) ATmakeAppl(sym__2, term_b_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_39), u_55), term_i_14), v_55));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_35;
  z_55 = t;
  t = SSL_exit(z_55);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL;
  k_56 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_56;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_56 = ATgetArgument(t, 0);
          {
            ATerm h_18 = NULL,o_5 = NULL;
            t = SSLgetAnnotations(k_56);
            h_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_56);
            o_5 = t;
            t = SSLsetAnnotations(o_5, h_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_56;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm t_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_39);
    }
  else
    {
      t = t_39;
      t = fetch_1_0(b_9, t);
    }
  t = m_98(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_56 = ATgetFirst((ATermList) t);
      v_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_56 = NULL,a_57 = NULL;
        ATerm c_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_56)), not_null(a_57));
          return(t);
        }
        t = v_56;
        t = j_0(t);
        if(((z_56 != NULL) && (z_56 != t)))
          _fail(t);
        else
          z_56 = t;
        t = u_56;
        t = i_0(t);
        if(((a_57 != NULL) && (a_57 != t)))
          _fail(t);
        else
          a_57 = t;
        t = v_56;
        t = reverse_acc_2_0(i_0, c_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_27;
      t = j_0(t);
    }
  return(t);
}
ATerm d_9 (ATerm s_49, ATerm t_49, ATerm t)
{
  t = SSL_table_get(s_49, t_49);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,r_5 = NULL;
  g_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_57);
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_57);
  r_5 = t;
  t = SSLsetAnnotations(r_5, e_57);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm i_57 = NULL;
  i_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_57), term_b_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
      t = fetch_1_0(f_9, t);
    }
  t = term_g_40;
  t = echo_0_0(t);
  t = term_k_36;
  c_57 = t;
  t = term_l_36;
  d_57 = t;
  t = term_h_40;
  t = d_9(c_57, d_57, t);
  t = reverse_acc_2_0(_id, h_9, t);
  t = map_1_0(j_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm f_58 (ATerm t)
  {
    ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL;
    c_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_58 = ATgetFirst((ATermList) t);
        e_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_40 = t;
      int j_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_18 = NULL,w_18 = NULL,t_5 = NULL;
          t = SSLgetAnnotations(c_58);
          s_18 = t;
          t = d_58;
          t = b_83(t);
          w_18 = t;
          t = (ATerm) ATinsert(CheckATermList(e_58), w_18);
          t_5 = t;
          t = SSLsetAnnotations(t_5, s_18);
          ;
          LocalPopChoice(j_40);
        }
      else
        {
          t = i_40;
          {
            ATerm j_19 = NULL,q_19 = NULL,v_5 = NULL;
            t = SSLgetAnnotations(c_58);
            j_19 = t;
            t = e_58;
            t = f_58(t);
            q_19 = t;
            t = (ATerm) ATinsert(CheckATermList(q_19), d_58);
            v_5 = t;
            t = SSLsetAnnotations(v_5, j_19);
          }
        }
    }
    return(t);
  }
  t = f_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_40 = ATgetFirst((ATermList) t);
                ATerm s_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_58;
          }
        ;
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = (ATerm) ATinsert(ATempty, j_58);
      }
    k_58 = t;
    t = term_c_35;
    l_58 = t;
    t = SSL_printnl(l_58, k_58);
    t = j_58;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_38;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  t = term_t_40;
  p_58 = t;
  t = term_f_27;
  q_58 = t;
  t = term_u_40;
  t = g_9(p_58, q_58, t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_v_40;
  return(t);
}
ATerm r_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL;
  t = term_t_40;
  t_58 = t;
  t = term_f_27;
  u_58 = t;
  t = term_u_40;
  t = g_9(t_58, u_58, t);
  t = term_w_40;
  r_58 = t;
  t = term_f_27;
  s_58 = t;
  t = term_x_40;
  t = g_9(r_58, s_58, t);
  t = term_y_40;
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_z_40;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_9, p_9, q_9, t);
      ;
      LocalPopChoice(b_41);
    }
  else
    {
      t = a_41;
      t = Option_3_0(r_9, s_9, t_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_61 (ATerm), ATerm l_61 (ATerm), ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,f_6 = NULL;
  a_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_58 = ATgetFirst((ATermList) t);
      x_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_59);
  v_58 = t;
  t = w_58;
  t = k_61(t);
  y_58 = t;
  t = x_58;
  t = l_61(t);
  z_58 = t;
  t = (ATerm) ATinsert(CheckATermList(z_58), y_58);
  f_6 = t;
  t = SSLsetAnnotations(f_6, v_58);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,k_59 = NULL,l_59 = NULL,q_6 = NULL;
  f_59 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_41;
        t = d_101(t);
        ;
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
      }
    t = f_59;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_59 = ATgetFirst((ATermList) t);
        i_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_59);
    g_59 = t;
    t = term_s_38;
    l_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_38, h_59);
    t = g_9(l_59, h_59, t);
    t = i_59;
    {
      ATerm v_59 (ATerm t)
      {
        ATerm f_41 = t;
        int g_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_41 = t;
            int i_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_59 = NULL;
                o_59 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = o_59;
                ;
                LocalPopChoice(i_41);
              }
            else
              {
                t = h_41;
                t = d_101(t);
                t = Cons_2_0(_id, v_59, t);
              }
            ;
            LocalPopChoice(g_41);
          }
        else
          {
            t = f_41;
            {
              ATerm r_59 = NULL,s_59 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_59 = ATgetFirst((ATermList) t);
                  s_59 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_59), (ATerm) ATmakeAppl(sym_Undefined_1, r_59));
            }
          }
        return(t);
      }
      t = v_59(t);
      k_59 = t;
      t = (ATerm) ATinsert(CheckATermList(k_59), (ATerm) ATmakeAppl(sym_Program_1, h_59));
      q_6 = t;
      t = SSLsetAnnotations(q_6, g_59);
    }
  }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm h_60 = NULL;
  h_60 = t;
  if(match_string(t, "--help"))
    {
      t = h_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_60;
        }
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL;
  t = term_y_39;
  i_60 = t;
  t = term_f_27;
  j_60 = t;
  t = term_j_41;
  t = g_9(i_60, j_60, t);
  t = term_k_41;
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_l_41;
  return(t);
}
ATerm b_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
  c_60 = t;
  t = term_k_36;
  e_60 = t;
  t = term_l_36;
  f_60 = t;
  t = (ATerm) ATempty;
  g_60 = t;
  t = SSL_table_put(e_60, f_60, g_60);
  t = c_60;
  {
    ATerm u_9 (ATerm t)
    {
      ATerm m_41 = t;
      int n_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_101(t);
          ;
          LocalPopChoice(n_41);
        }
      else
        {
          t = m_41;
          {
            ATerm o_41 = t;
            int s_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_9, w_9, y_9, t);
                ;
                LocalPopChoice(s_41);
              }
            else
              {
                t = o_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_9, t);
    {
      ATerm t_41 = t;
      int u_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_60 = NULL;
          q_60 = t;
          {
            ATerm b_42 = t;
            int f_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_19 = NULL;
                t = q_60;
                {
                  ATerm g_42 = t;
                  int h_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_39;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_42);
                    }
                  else
                    {
                      t = g_42;
                      t = fetch_1_0(b_10, t);
                    }
                  t = q_60;
                  t = default_system_usage_0_0(t);
                  t = term_j_35;
                  z_19 = t;
                  t = SSL_exit(z_19);
                }
                ;
                LocalPopChoice(f_42);
              }
            else
              {
                t = b_42;
                {
                  ATerm h_20 = NULL;
                  t = term_t_40;
                  t = get_config_0_0(t);
                  t = q_60;
                  t = default_system_about_0_0(t);
                  t = term_j_35;
                  h_20 = t;
                  t = SSL_exit(h_20);
                }
              }
          }
          ;
          LocalPopChoice(u_41);
        }
      else
        {
          t = t_41;
          {
            ATerm i_42 = t;
            int j_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL;
                ATerm e_10 (ATerm t)
                {
                  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,s_6 = NULL;
                  w_60 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      v_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_60);
                  u_60 = t;
                  t = v_60;
                  if(((a_60 != NULL) && (a_60 != t)))
                    _fail(t);
                  else
                    a_60 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, v_60);
                  s_6 = t;
                  t = SSLsetAnnotations(s_6, u_60);
                  return(t);
                }
                t = fetch_1_0(e_10, t);
                t = term_b_21;
                s_60 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_60)), term_p_42);
                t_60 = t;
                t = SSL_printnl(s_60, t_60);
                t = (ATerm) ATmakeAppl(sym__2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_60)), term_p_42));
                t = default_system_usage_0_0(t);
                t = term_v_13;
                r_60 = t;
                t = SSL_exit(r_60);
                ;
                LocalPopChoice(j_42);
              }
            else
              {
                t = i_42;
              }
          }
        }
      b_60 = t;
      t = term_k_36;
      d_60 = t;
      t = SSL_table_destroy(d_60);
      t = b_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  t = parse_options_1_0(o_98, t);
  b_61 = t;
  t = term_t_42;
  e_61 = t;
  t = SSL_table_create(e_61);
  t = term_t_42;
  c_61 = t;
  t = term_v_42;
  d_61 = t;
  t = SSL_table_put(c_61, d_61, b_61);
  t = b_61;
  t = q_98(t);
  {
    ATerm b_43 = t;
    int c_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_98, t);
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
              t = r_98(t);
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
ATerm f_10 (ATerm t)
{
  ATerm f_43 = t;
  int g_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pack_stratego_options_0_0(t);
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
                    ATerm l_43 = t;
                    int m_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(j_10, m_10, n_10, t);
                        ;
                        LocalPopChoice(m_43);
                      }
                    else
                      {
                        t = l_43;
                        {
                          ATerm n_43 = t;
                          int o_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(o_43);
                            }
                          else
                            {
                              t = n_43;
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
ATerm j_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL;
  t = term_p_43;
  m_61 = t;
  t = term_f_27;
  n_61 = t;
  t = term_q_43;
  t = g_9(m_61, n_61, t);
  t = term_r_43;
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_s_43;
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = get_filename_0_0(t);
  t = basename_1_0(_id, t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL;
  ATerm g_10 (ATerm t)
  {
    ATerm p_10 (ATerm t)
    {
      ATerm p_61 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_8(p_61, t);
      if(match_cons(t, sym__2))
        {
          if(((i_61 != NULL) && (i_61 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_61 = ATgetArgument(t, 0);
          if(((j_61 != NULL) && (j_61 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_43 = t;
        int w_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_37;
            t = get_config_0_0(t);
            t = i_61;
            t = map_1_0(q_10, t);
            t = write_to_text_0_0(t);
            ;
            LocalPopChoice(w_43);
          }
        else
          {
            t = t_43;
            {
              ATerm x_43 = t;
              int y_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_61;
                  t = create_dep_file_0_0(t);
                  ;
                  LocalPopChoice(y_43);
                }
              else
                {
                  t = x_43;
                }
              t = j_61;
              t = write_to_0_0(t);
            }
          }
      }
      return(t);
    }
    t = xtc_io_1_0(p_10, t);
    return(t);
  }
  t = option_wrap_4_0(f_10, default_usage_0_0, _id, g_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pack_stratego_0_0(t);
  return(t);
}
